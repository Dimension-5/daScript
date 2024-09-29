#include "daScript/misc/platform.h"

#include "daScript/misc/memory_model.h"
#include "daScript/misc/debug_break.h"
struct MemoryFunc {
	void* (*alloc16)(size_t) = nullptr;
	void (*free16)(void* ptr) = nullptr;
	size_t (*mem_size)(void* ptr) = nullptr;
};
static MemoryFunc _mem_func;
void das_set_memfunc(
    void*(*alloc16)(size_t),
    void(*free16)(void* ptr),
    size_t(*mem_size)(void* ptr)
){
    _mem_func.alloc16 = alloc16;
    _mem_func.free16 = free16;
    _mem_func.mem_size = mem_size;
}
void das_init_default_memfunc() {
	_mem_func.alloc16 = +[](size_t size) {
#if defined(_MSC_VER)
		return _aligned_malloc(size, 16);
#else
		void* mem = nullptr;
		if (posix_memalign(&mem, 16, size)) {
			DAS_ASSERTF(0, "posix_memalign returned nullptr");
			return nullptr;
		}
		return mem;
#endif
	};
#if defined(_MSC_VER)
	_mem_func.free16 = _aligned_free;
#else
	_mem_func.free16 = free;
#endif

#if defined(_MSC_VER)
	_mem_func.mem_size = +[](void* ptr){
        return _aligned_msize(ptr, 16, 0);
    };
#elif defined(__APPLE__)
	_mem_func.mem_size = malloc_size;
#else
	_mem_func.mem_size = malloc_usable_size;
#endif

}
void* das_aligned_alloc16(size_t size) {
    return _mem_func.alloc16(size);
}
size_t das_aligned_memsize(void* ptr) {
    return _mem_func.mem_size(ptr);
}
void das_aligned_free16(void* ptr) {
    _mem_func.free16(ptr);
}
namespace das {
#if DAS_TRACK_ALLOCATIONS
uint64_t g_tracker = 0;
uint64_t g_breakpoint = -1ul;

void das_track_breakpoint(uint64_t id) {
	g_breakpoint = id;
}
#endif

MemoryModel::MemoryModel() {
	alignMask = 15;
	totalAllocated = 0;
	maxAllocated = 0;
}

MemoryModel::~MemoryModel() {
	shoe.clear();
	for (auto& itb : bigStuff) {
		das_aligned_free16(itb.first);
	}
	bigStuff.clear();
#if DAS_SANITIZER
	for (auto& itb : deletedBigStuff) {
		das_aligned_free16(itb.first);
	}
	deletedBigStuff.clear();
#endif
}

void MemoryModel::setInitialSize(uint32_t size) {
	initialSize = size;
}

uint32_t MemoryModel::grow(uint32_t si) {
	if (shoe.chunks[si]) {
		uint32_t size = shoe.chunks[si]->total;
		if (customGrow) {
			size = customGrow(size);
		} else {
			size = size * 2;
		}
		return size;
	} else {
		if (!initialSize) {
			initialSize = default_initial_size;
		}
		return initialSize / ((si + 1) << 4);// fit in initial size
	}
}

char* MemoryModel::allocate(uint32_t size) {
	if (!size) return nullptr;
	size = (size + alignMask) & ~alignMask;
	totalAllocated += size;
	maxAllocated = das::max(maxAllocated, totalAllocated);
#if !DAS_TRACK_ALLOCATIONS
	if (size > DAS_MAX_SHOE_ALLOCATION) {
#endif
		char* ptr = (char*)das_aligned_alloc16(size);
		bigStuff[ptr] = size;
#if DAS_TRACK_ALLOCATIONS
		if (g_tracker == g_breakpoint) os_debug_break();
		bigStuffId[ptr] = g_tracker++;
#endif
		return ptr;
#if !DAS_TRACK_ALLOCATIONS
	} else {
		if (char* res = shoe.allocate(size)) {
			return res;
		}
		size = (size + 15) & ~15;
		DAS_ASSERT(size && size <= DAS_MAX_SHOE_ALLOCATION);
		uint32_t si = (size >> 4) - 1;
		uint32_t total = grow(si);
		shoe.chunks[si] = new Deck(total, size, shoe.chunks[si]);
		return shoe.chunks[si]->allocate();
	}
#endif
}

bool MemoryModel::free(char* ptr, uint32_t size) {
	if (!size) return true;
	size = (size + alignMask) & ~alignMask;

#if DAS_SANITIZER
	memset(ptr, 0xcd, size);
#endif
#if !DAS_TRACK_ALLOCATIONS
	if (size <= DAS_MAX_SHOE_ALLOCATION) {
		shoe.free(ptr, size);
		totalAllocated -= size;
		return true;
	}
#endif
#if DAS_SANITIZER
	auto itd = deletedBigStuff.find(ptr);
	if (itd != deletedBigStuff.end()) {
		os_debug_break();
	}
#endif
	auto itb = bigStuff.find(ptr);
	if (itb != bigStuff.end()) {
		DAS_ASSERTF(itb->second == size, "free size mismatch, %u allocated vs %u freed", itb->second, size);
#if DAS_SANITIZER
		deletedBigStuff[itb->first] = itb->second;
#else
		das_aligned_free16(itb->first);
#endif
		bigStuff.erase(itb);
		totalAllocated -= size;
#if DAS_TRACK_ALLOCATIONS
		bigStuffId.erase(ptr);
		bigStuffAt.erase(ptr);
		bigStuffComment.erase(ptr);
#endif
		return true;
	}
	DAS_ASSERTF(0, "we are trying to delete pointer, which we did not allocate");
	return false;
}

char* MemoryModel::reallocate(char* ptr, uint32_t size, uint32_t nsize) {
	if (!ptr) return allocate(nsize);
	size = (size + alignMask) & ~alignMask;
	nsize = (nsize + alignMask) & ~alignMask;
	char* nptr = allocate(nsize);
	DAS_VERIFYF(nptr, "out of memory?");
	memcpy(nptr, ptr, das::min(size, nsize));
#if DAS_TRACK_ALLOCATIONS
	auto pAt = bigStuffAt.find(ptr);
	if (pAt != bigStuffAt.end()) {
		bigStuffAt[nptr] = pAt->second;
	}
	auto pCm = bigStuffComment.find(ptr);
	if (pCm != bigStuffComment.end()) {
		bigStuffComment[nptr] = pCm->second;
	}
#endif
	free(ptr, size);
	return nptr;
}

void MemoryModel::reset() {
	for (auto& itb : bigStuff) {
#if DAS_SANITIZER
		deletedBigStuff[itb.first] = itb.second;
#else
		das_aligned_free16(itb.first);
#endif
	}
	bigStuff.clear();
#if DAS_TRACK_ALLOCATIONS
	bigStuffId.clear();
	bigStuffAt.clear();
	bigStuffComment.clear();
#endif
	shoe.reset();
}

uint64_t MemoryModel::totalAlignedMemoryAllocated() const {
	uint64_t mem = shoe.totalBytesAllocated();
	for (const auto& it : bigStuff) {
		mem += it.second;
	}
	return mem;
}

void MemoryModel::sweep() {
	totalAllocated = 0;
#if !DAS_TRACK_ALLOCATIONS
	for (uint32_t si = 0; si != DAS_MAX_SHOE_CUNKS; ++si) {// we re-track all small allocations
		for (auto ch = shoe.chunks[si]; ch; ch = ch->next) {
			ch->afterGC();
			uint32_t utotal = ch->total / 32;
			for (uint32_t i = 0; i != utotal; ++i) {
				uint32_t b = ch->bits[i];
				for (uint32_t j = 0; j != 32; ++j) {// TODO: this is COUNTBITS * size
					if (b & (1 << j)) {
						totalAllocated += ch->size;
					} else {
#if DAS_SANITIZER
						memset(ch->data + (i * 32 + j) * ch->size, 0xcd, ch->size);
#endif
					}
				}
			}
		}
	}
#endif
	for (auto it = bigStuff.begin(); it != bigStuff.end();) {
		if (it->second & DAS_PAGE_GC_MASK) {
			it->second &= ~DAS_PAGE_GC_MASK;
			totalAllocated += it->second;
			++it;
		} else {
#if DAS_SANITIZER
			memset(it->first, 0xcd, it->second);
#endif
			das_aligned_free16(it->first);
			it = bigStuff.erase(it);
		}
	}
}

char* LinearChunkAllocator::reallocate(char* ptr, uint32_t size, uint32_t nsize) {
	if (!ptr) return allocate(nsize);
	size = (size + alignMask) & ~alignMask;
	nsize = (nsize + alignMask) & ~alignMask;
	// TODO: we can 'expand' in certain cases
	char* nptr = allocate(nsize);
	memcpy(nptr, ptr, das::min(size, nsize));
	free(ptr, size);
	return nptr;
}

void LinearChunkAllocator::free(char* ptr, uint32_t s) {
	s = (s + alignMask) & ~alignMask;
	for (auto ch = chunk; ch; ch = ch->next) {
		if (ch->isOwnPtr(ptr)) {
			ch->free(ptr, s);
			break;
		}
	}
}

uint32_t LinearChunkAllocator::grow(uint32_t size) {
	return customGrow ? customGrow(size) : size * 2;
}

char* LinearChunkAllocator::allocate(uint32_t s) {
	if (!s) return nullptr;
	s = (s + alignMask) & ~alignMask;
	if (!chunk) {
		if (!initialSize) {
			initialSize = default_initial_size;
		}
		chunk = new HeapChunk(das::max(initialSize, s), nullptr);
		// printf("[HC] %i\n", chunk->size);
	}
	for (;;) {
		if (char* res = chunk->allocate(s)) {
			// printf("[A] %i bytes, offs=%i\n", int(s), int(res-chunk->data));
			return res;
		}
		chunk = new HeapChunk(das::max(grow(chunk->size), s), chunk);
		// printf("[HC] %i bytes\n", chunk->size);
	}
}

void LinearChunkAllocator::reset() {
	if (chunk && chunk->next) {
		auto maxAllocated = (uint32_t(bytesAllocated()) + 1023) & ~1023;
		initialSize = das::max(initialSize, maxAllocated);
		delete chunk;
		chunk = nullptr;
	} else if (chunk) {
		chunk->offset = 0;
	}
}

char* LinearChunkAllocator::allocateName(const string& name) {
	if (!name.empty()) {
		auto length = uint32_t(name.length());
		if (auto str = (char*)allocate(length + 1)) {
			memcpy(str, name.c_str(), length);
			str[length] = 0;
			return str;
		}
	}
	return nullptr;
}

void LinearChunkAllocator::getStats(uint32_t& depth, uint64_t& bytes, uint64_t& total) const {
	depth = 0;
	bytes = 0;
	total = 0;
	for (auto ch = chunk; ch; ch = ch->next) {
		depth++;
		bytes += ch->offset;
		total += ch->size;
	}
}

uint32_t LinearChunkAllocator::depth() const {
	uint32_t d;
	uint64_t b, t;
	getStats(d, b, t);
	return d;
}

uint64_t LinearChunkAllocator::bytesAllocated() const {
	uint32_t d;
	uint64_t b, t;
	getStats(d, b, t);
	return b;
}

uint64_t LinearChunkAllocator::totalAlignedMemoryAllocated() const {
	uint32_t d;
	uint64_t b, t;
	getStats(d, b, t);
	return t;
}
}// namespace das
