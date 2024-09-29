#pragma once

#ifndef DAS_SKA_HASH
#define DAS_SKA_HASH    1
#endif

#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <utility>

#include <string>
#include <memory>
#include <vector>
#include <type_traits>
#include <initializer_list>
#include <functional>
#include <algorithm>
#include <functional>
#include <climits>

#include <limits.h>
#include <setjmp.h>

#include <mutex>
#include <daScript/pdqsort.h>

#include <deque>
void *das_aligned_alloc16(size_t size);
void das_aligned_free16(void *ptr);
#if (!defined(DAS_ENABLE_EXCEPTIONS)) || (!DAS_ENABLE_EXCEPTIONS)
#define FMT_THROW(x)    das::das_throw(((x).what()))
namespace das {
  void das_throw(const char * msg);
}
#endif

#include<misc/include_fmt.h>

#if DAS_SKA_HASH
#ifdef _MSC_VER
#pragma warning(disable:4503)    // decorated name length exceeded, name was truncated
#endif
namespace das {
    template<typename T>
struct das_allocator {
	using value_type = T;
	constexpr das_allocator() noexcept = default;
	explicit constexpr das_allocator(const char*) noexcept {}
	template<typename U>
	constexpr das_allocator(das_allocator<U>) noexcept {}
	[[nodiscard]] auto allocate(std::size_t n) const noexcept {
    return static_cast<T*>(das_aligned_alloc16(n * sizeof(T)));
	}
	[[nodiscard]] auto allocate(std::size_t n, size_t alignment, size_t) const noexcept {
		assert(alignment <= 16);
    return  static_cast<T*>(das_aligned_alloc16(n * sizeof(T)));
	}
	void deallocate(T* p, size_t) const noexcept {
    das_aligned_free16(p);
	}
	void deallocate(void* p, size_t) const noexcept {
    das_aligned_free16(p);
	}
	template<typename R>
	[[nodiscard]] constexpr auto operator==(das_allocator<R>) const noexcept -> bool {
		return std::is_same_v<T, R>;
	}
};
template <typename T>
using vector = std::vector<T, das_allocator<T>>;
using std::enable_shared_from_this;
using std::function;
using std::string;
using std::stringstream;
using std::to_string;
using std::make_shared;
using std::make_unique;
using std::shared_ptr;
using std::unique_ptr;
using std::addressof;
template<typename T>
using allocator = das_allocator<T>;
using std::allocator_traits;
using std::atomic;
using std::ceil;
using std::condition_variable;
using std::copy;
using std::declval;
using std::equal_to;
using std::false_type;
using std::find;
using std::find_if;
using std::forward;
using std::forward_iterator_tag;
using std::hash;
using std::index_sequence;
using std::is_abstract;
using std::is_arithmetic;
using std::is_base_of;
using std::is_base_of_v;
using std::is_const;
using std::is_const_v;
using std::is_default_constructible;
using std::is_destructible;
using std::is_enum;
using std::is_pointer;
using std::is_pointer_v;
using std::is_reference;
using std::is_same;
using std::is_same_v;
using std::is_standard_layout;
using std::is_trivial;
using std::is_trivially_constructible;
using std::is_trivially_copy_constructible;
using std::is_trivially_copyable;
using std::is_trivially_destructible;
using std::is_void;
using std::less;
using std::lock_guard;
using std::make_index_sequence;
using std::make_pair;
using std::make_tuple;
using std::max;
using std::min;
using std::move;
using std::mutex;
using std::next;
using std::pair;
using std::ptrdiff_t;
using std::recursive_mutex;
using std::remove_const;
using std::remove_cv;
using std::remove_cv_t;
using std::remove_reference;
using std::remove_reference_t;
using std::reverse;
using std::stable_sort;
using std::swap;
template <class T, class alloc = das_allocator<T>>
using deque = std::deque<T, alloc>;
using std::thread;
using std::true_type;
using std::tuple;
using std::underlying_type;
using std::unique_lock;
using std::is_invocable_v;
using std::enable_if_t;
using fmt::format_to;

template<typename Format, typename... Args>
[[nodiscard]] inline auto das_format(Format &&f, Args &&...args) noexcept {
    using char_type = typename das::string::value_type;
    using memory_buffer = fmt::basic_memory_buffer<char_type, fmt::inline_buffer_size, das_allocator<char_type>>;
    memory_buffer buffer;
    das::format_to(std::back_inserter(buffer), std::forward<Format>(f), std::forward<Args>(args)...);
    return das::string{buffer.data(), buffer.size()};
}
template <typename K, typename Less = std::less<K>>
using set = std::set<K, Less,  das_allocator<K>>;
template <typename K, typename V, typename Less = std::less<K>>
using map = std::map<K, V, Less, das_allocator<std::pair<const K, V>>>;
namespace chrono {
using std::chrono::milliseconds;
}// namespace chrono
namespace this_thread {
inline void yield() {
	std::this_thread::yield();
}
}
}
#include <ska/flat_hash_map.hpp>
namespace das {

template<pdqsort_detail::LinearIterable Iter, pdqsort_detail::CompareFunc<Iter> Compare>
inline void sort(Iter begin, Iter end, Compare comp) {
	pdqsort(begin, end, comp);
}
template<pdqsort_detail::LinearIterable Iter>
inline void sort(Iter begin, Iter end) {
	pdqsort(begin, end);
}
template <typename K, typename V, typename H = das::hash<K>, typename E = das::equal_to<K>>
using das_map = das_ska::flat_hash_map<K,V,H,E>;
template <typename K, typename H = das::hash<K>, typename E = das::equal_to<K>>
using das_set = das_ska::flat_hash_set<K,H,E>;
template <typename K, typename V, typename H = das::hash<K>, typename E = das::equal_to<K>>
using das_hash_map = das_ska::flat_hash_map<K,V,H,E>;
template <typename K, typename V, typename H = das::hash<K>, typename E = das::equal_to<K>>
using unordered_map = das_ska::flat_hash_map<K,V,H,E>;
template <typename K, typename H = das::hash<K>, typename E = das::equal_to<K>>
using unordered_set = das_ska::flat_hash_set<K,H,E>;
template <typename K, typename H = das::hash<K>, typename E = das::equal_to<K>>
using das_hash_set = das_ska::flat_hash_set<K,H,E>;
template <typename K, typename V>
using das_safe_map = std::map<K,V>;
template <typename K, typename C=das::less<K>>
using das_safe_set = std::set<K,C>;
}
#else
namespace das {
template <typename K, typename V, typename H = das::hash<K>, typename E = das::equal_to<K>>
using das_map = std::unordered_map<K,V,H,E>;
template <typename K, typename H = das::hash<K>, typename E = das::equal_to<K>>
using das_set = std::unordered_set<K,H,E>;
template <typename K, typename V, typename H = das::hash<K>, typename E = das::equal_to<K>>
using das_hash_map = std::unordered_map<K,V,H,E>;
template <typename K, typename H = das::hash<K>, typename E = das::equal_to<K>>
using das_hash_set = std::unordered_set<K,H,E>;
template <typename K, typename V>
using das_safe_map = std::map<K,V>;
template <typename K, typename C=das::less<K>>
using das_safe_set = std::set<K,C>;
}
#endif

#define DAS_STD_HAS_BIND 1

// if enabled, the generated interop will be marginally slower
// the upside is that it well generate significantly less templated code, thus reducing compile time (and binary size)
#ifndef DAS_SLOW_CALL_INTEROP
  #define DAS_SLOW_CALL_INTEROP 0
#endif

#ifndef DAS_MAX_FUNCTION_ARGUMENTS
#define DAS_MAX_FUNCTION_ARGUMENTS 32
#endif

#ifndef DAS_FUSION
  #define DAS_FUSION  0
#endif

#if DAS_SLOW_CALL_INTEROP
  #undef DAS_FUSION
  #define DAS_FUSION  0
#endif

#ifndef DAS_DEBUGGER
  #define DAS_DEBUGGER  1
#endif

#ifndef DAS_BIND_EXTERNAL
  #if defined(_WIN32) && defined(_WIN64)
    #define DAS_BIND_EXTERNAL 1
  #elif defined(__APPLE__)
    #define DAS_BIND_EXTERNAL 1
  #elif defined(__linux__)
    #define DAS_BIND_EXTERNAL 1
  #elif defined __HAIKU__
    #define DAS_BIND_EXTERNAL 1
  #else
    #define DAS_BIND_EXTERNAL 0
  #endif
#endif

#ifndef DAS_PRINT_VEC_SEPARATROR
#define DAS_PRINT_VEC_SEPARATROR ","
#endif


#ifndef das_to_stdout
#define das_to_stdout(...) { fprintf(stdout, __VA_ARGS__); fflush(stdout); }
#endif

#ifndef das_to_stderr
#define das_to_stderr(...) { fprintf(stderr, __VA_ARGS__); fflush(stderr); }
#endif
