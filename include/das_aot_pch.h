#pragma once
#include "daScript/misc/platform.h"

#include "daScript/simulate/simulate.h"
#include "daScript/simulate/aot.h"
#include "daScript/simulate/aot_library.h"

#include "daScript/simulate/aot_builtin_rtti.h"
#include "daScript/simulate/aot_builtin_math.h"
#include "daScript/simulate/aot_builtin_matrix.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/simulate/fs_file_info.h"

void set_lambda(char const* name, das::Lambda lmb, das::Context* ctx);
void clear_lambda();
void remove_lambda(char const* name);
void serde_reflect_object(const void* pClass, const das::StructInfo* info, das::Context* context);
void dasffi_push_float(float i);
void dasffi_push_double(double i);
void dasffi_push_int8_t(int8_t i);
void dasffi_push_int16_t(int16_t i);
void dasffi_push_int32_t(int32_t i);
void dasffi_push_int64_t(int64_t i);
void dasffi_push_uint8_t(uint8_t i);
void dasffi_push_uint16_t(uint16_t i);
void dasffi_push_uint32_t(uint32_t i);
void dasffi_push_uint64_t(uint64_t i);
void dasffi_push_bool(bool i);
void dasffi_push_string(char const* i);
void dasffi_push_class(void* i);
void dasffi_push_lambda(das::Lambda i);

void dasffi_push_float2(das::float2 i);
void dasffi_push_float3(das::float3 i);
void dasffi_push_float4(das::float4 i);
void dasffi_push_int2(das::int2 i);
void dasffi_push_int3(das::int3 i);
void dasffi_push_int4(das::int4 i);
void dasffi_push_uint2(das::uint2 i);
void dasffi_push_uint3(das::uint3 i);
void dasffi_push_uint4(das::uint4 i);

float dasffi_get_float();
double dasffi_get_double();
int8_t dasffi_get_int8_t();
int16_t dasffi_get_int16_t();
int32_t dasffi_get_int32_t();
int64_t dasffi_get_int64_t();
uint8_t dasffi_get_uint8_t();
uint16_t dasffi_get_uint16_t();
uint32_t dasffi_get_uint32_t();
uint64_t dasffi_get_uint64_t();
bool dasffi_get_bool();
char const* dasffi_get_string();
void* dasffi_get_class();
das::Lambda dasffi_get_lambda();
das::float2 dasffi_get_float2();
das::float3 dasffi_get_float3();
das::float4 dasffi_get_float4();
das::int2 dasffi_get_int2();
das::int3 dasffi_get_int3();
das::int4 dasffi_get_int4();
das::uint2 dasffi_get_uint2();
das::uint3 dasffi_get_uint3();
das::uint4 dasffi_get_uint4();
void dasffi_invoke_int(uint64_t idx0, uint64_t idx1);
void dasffi_invoke_string(char const* guid);
void clear_value();
void set_value_float(char const* name, float value);
void set_value_float2(char const* name, das::float2 value);
void set_value_float3(char const* name, das::float3 value);
void set_value_float4(char const* name, das::float4 value);
void set_value_int2(char const* name, das::int2 value);
void set_value_int3(char const* name, das::int3 value);
void set_value_int4(char const* name, das::int4 value);
void set_value_uint2(char const* name, das::uint2 value);
void set_value_uint3(char const* name, das::uint3 value);
void set_value_uint4(char const* name, das::uint4 value);
void set_value_double(char const* name, double value);
void set_value_int8_t(char const* name, int8_t value);
void set_value_int16_t(char const* name, int16_t value);
void set_value_int32_t(char const* name, int32_t value);
void set_value_int64_t(char const* name, int64_t value);
void set_value_uint8_t(char const* name, uint8_t value);
void set_value_uint16_t(char const* name, uint16_t value);
void set_value_uint32_t(char const* name, uint32_t value);
void set_value_uint64_t(char const* name, uint64_t value);
void set_value_bool(char const* name, bool value);
void set_value_string(char const* name, char const* value);
void set_value_class(char const* name, void* value);
void set_value_lambda(char const* name, das::Lambda value);

float get_value_float(char const* name);
das::float2 get_value_float2(char const* name);
das::float3 get_value_float3(char const* name);
das::float4 get_value_float4(char const* name);
das::int2 get_value_int2(char const* name);
das::int3 get_value_int3(char const* name);
das::int4 get_value_int4(char const* name);
das::uint2 get_value_uint2(char const* name);
das::uint3 get_value_uint3(char const* name);
das::uint4 get_value_uint4(char const* name);
double get_value_double(char const* name);
int8_t get_value_int8_t(char const* name);
int16_t get_value_int16_t(char const* name);
int32_t get_value_int32_t(char const* name);
int64_t get_value_int64_t(char const* name);
uint8_t get_value_uint8_t(char const* name);
uint16_t get_value_uint16_t(char const* name);
uint32_t get_value_uint32_t(char const* name);
uint64_t get_value_uint64_t(char const* name);
bool get_value_bool(char const* name);
char const* get_value_string(char const* name);
void* get_value_class(char const* name);
das::Lambda get_value_lambda(char const* name);