#pragma once

#include "daScript/das_config.h"
#include "daScript/simulate/simulate.h"
#include <iostream>
#include <daScript/unordered_dense.h>
namespace das {
    template<typename K, typename V,
         typename Hash = das::das_hash<K>,
         typename Eq = std::equal_to<>>
    using unordered_densemap = ankerl::unordered_dense::map<
        K, V, Hash, Eq,
        eastl_allocator<pair<K, V>>,
        vector<std::pair<K, V>>>;
    struct UInt64Hash{
        size_t operator()(uint64_t o) const noexcept {return o;}
    };
    typedef SimNode *(*AotFactory)(Context &);
    typedef unordered_densemap<uint64_t, AotFactory, UInt64Hash> AotLibrary;  // unordered map for thread safety

    typedef void ( * RegisterAotFunctions ) ( AotLibrary & );

    void trySetAotLib(AotLibrary& aotLib, uint64_t hash, AotFactory func);

    struct AotListBase {
        AotListBase( RegisterAotFunctions prfn );
        AotListBase(AotListBase &&);
        AotListBase(AotListBase const&);
        ~AotListBase();
        static void registerAot ( AotLibrary & lib );

        AotListBase * tail = nullptr;
        static AotListBase * head;
        RegisterAotFunctions regFn;
    };

    AotLibrary & getGlobalAotLibrary();
    void clearGlobalAotLibrary();

    // Test standalone context

    typedef Context * ( * RegisterTestCreator ) ();

    struct StandaloneContextNode {
        StandaloneContextNode( RegisterTestCreator prfn ) {
            regFn = prfn;
            tail = head;
            head = this;
        }

        StandaloneContextNode * tail = nullptr;
        static StandaloneContextNode * head;
        RegisterTestCreator regFn;
    };

}

