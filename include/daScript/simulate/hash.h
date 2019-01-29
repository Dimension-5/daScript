#pragma once

#include "daScript/simulate/simulate.h"

namespace das
{
    #define HASH_EMPTY32    0
    #define HASH_KILLED32    1

    // ideas from http://isthe.com/chongo/tech/comp/fnv/

    __forceinline uint32_t hash_block32(uint8_t * block, uint32_t size) {
        const uint32_t fnv_prime = 16777619;
        const uint32_t fnv_bias = 2166136261;
        uint32_t offset_basis = fnv_bias;
        for ( ; size >=4; size-=4 ) {
            offset_basis = ( offset_basis ^ *block++ ) * fnv_prime;
            offset_basis = ( offset_basis ^ *block++ ) * fnv_prime;
            offset_basis = ( offset_basis ^ *block++ ) * fnv_prime;
            offset_basis = ( offset_basis ^ *block++ ) * fnv_prime;
        }
        if (size & 2u) {
            offset_basis = (offset_basis ^ *block++) * fnv_prime;
            offset_basis = (offset_basis ^ *block++) * fnv_prime;
        }
        if (size & 1u) {
            offset_basis = (offset_basis ^ *block++) * fnv_prime;
        }
        if (offset_basis <= HASH_KILLED32) {
            return fnv_prime;
        }
        return offset_basis;
    }

    __forceinline uint32_t hash_blockz32(uint8_t * block) {
        const uint32_t fnv_prime = 16777619;
        const uint32_t fnv_bias = 2166136261;
        uint32_t offset_basis = fnv_bias;
        for (; *block; block++) {
            offset_basis = ( offset_basis ^ *block ) * fnv_prime;
        }
        if (offset_basis <= HASH_KILLED32) {
            return fnv_prime;
        }
        return offset_basis;
    }

    __forceinline uint32_t hash_function ( Context &, const void * x, size_t size ) {
        return hash_block32((uint8_t *)x, uint32_t(size));
    }

    __forceinline uint32_t stringLength ( Context & ctx, const char * str ) {//should be non-null
        if ( ctx.heap.isHeapPtr(str) ) {
            auto header = (StringHeader *) ( str - sizeof(StringHeader) );
            return header->length;
        } else {
            return uint32_t(strlen(str));
        }
    }
    __forceinline uint32_t stringLengthSafe ( Context & ctx, const char * str ) {//accepts nullptr
        if ( ctx.heap.isHeapPtr(str) ) {
            auto header = (StringHeader *) ( str - sizeof(StringHeader) );
            return header->length;
        } else {
            return str ? uint32_t(strlen(str)) : 0;
        }
    }


    template <typename TT>
    __forceinline uint32_t hash_function ( Context &, TT x ) {
        uint32_t res = (uint32_t) hash<TT>()(x);
        if (res <= HASH_KILLED32) {
            return 16777619;
        }
        return res;
    }

    template <>
    __forceinline uint32_t hash_function ( Context & ctx,Block b ) {
        return hash_function(ctx, &b, sizeof(b));
    }

    template <>
    __forceinline uint32_t hash_function ( Context & ctx, char * str ) {
        if ( ctx.heap.isHeapPtr(str) ) {
            auto header = (StringHeader *) ( str - sizeof(StringHeader) );
            auto hh = header->hash;
            if ( !hh ) {
                header->hash = hh = hash_block32((uint8_t *)str, header->length);
            }
            return hh;
        } else {
            return hash_blockz32((uint8_t *)str);
        }
    }

    template <typename QQ>
    __forceinline uint32_t hash_function ( Context & ctx, const vec2<QQ> & x) {
        return hash_function(ctx, &x, sizeof(vec2<QQ>));
    }

    template <typename QQ>
    __forceinline uint32_t hash_function ( Context & ctx, const vec3<QQ> & x) {
        return hash_function(ctx, &x, sizeof(vec3<QQ>));
    }

    template <typename QQ>
    __forceinline uint32_t hash_function ( Context & ctx, const vec4<QQ> & x) {
        return hash_function(ctx, &x, sizeof(vec4<QQ>));
    }

    template <typename QQ>
    __forceinline uint32_t hash_function ( Context & ctx, const RangeType<QQ> & x) {
        return hash_function(ctx, &x, sizeof(RangeType<QQ>));
    }

    uint32_t hash_function ( Context & ctx, void * data, TypeInfo * type );

    template <typename TT>
    struct SimNode_HashOfValue : SimNode {
        SimNode_HashOfValue ( const LineInfo & at, SimNode * s ) : SimNode(at), subexpr(s) {}
        virtual vec4f eval ( Context & context ) override {
            // note, exception point not nessaray. wrong value is still ok to cast
            TT res = cast<TT>::to(subexpr->eval(context));
            return cast<uint32_t>::from ( hash_function(context, res) );
        }
        SimNode * subexpr;
    };

    struct SimNode_HashOfRef : SimNode {
        SimNode_HashOfRef ( const LineInfo & at, SimNode * s, uint32_t sz ) : SimNode(at), subexpr(s), size(sz) {}
        virtual vec4f eval ( Context & context ) override {
            char * data = cast<char *>::to(subexpr->eval(context));
            return cast<uint32_t>::from ( hash_function(context,data,size) );
        }
        SimNode *   subexpr;
        uint32_t    size;
    };

    struct SimNode_HashOfMixedType : SimNode {
        SimNode_HashOfMixedType ( const LineInfo & at, SimNode * s, TypeInfo *t ) : SimNode(at), subexpr(s), typeInfo(t) {}
        virtual vec4f eval ( Context & context ) override {
            char * data = cast<char *>::to(subexpr->eval(context));
            return cast<uint32_t>::from ( hash_function(context,data,typeInfo) );
        }
        SimNode *   subexpr;
        TypeInfo *  typeInfo;
    };
}

