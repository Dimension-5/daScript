#include "daScript/misc/platform.h"

#include "daScript/ast/ast.h"

namespace das {

DAS_THREAD_LOCAL daScriptEnvironment* daScriptEnvironment::bound = nullptr;
DAS_THREAD_LOCAL daScriptEnvironment* daScriptEnvironment::owned = nullptr;
DAS_THREAD_LOCAL bool daScriptEnvironment::loaded = false;

void daScriptEnvironment::ensure() {
	if (!daScriptEnvironment::bound) {
		if (!daScriptEnvironment::owned) {
			daScriptEnvironment::owned = new daScriptEnvironment();
		}
		daScriptEnvironment::bound = daScriptEnvironment::owned;
		loaded = false;
	}
}

void daScriptEnvironment::_load_module(
	void (*func_ptr)(void*),
	void* usr_data) {
    ensure();
	if (!loaded) {
		loaded = true;
		func_ptr(usr_data);
	}
}

uint64_t getCancelLimit() {
	if (!daScriptEnvironment::bound) return 0;
	return daScriptEnvironment::bound->dataWalkerStringLimit;
}

}// namespace das