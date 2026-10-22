#ifndef RESOT_SHADER_COMPILER_H
#define RESOT_SHADER_COMPILER_H
#include <stddef.h>
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
/* Output is malloc-owned; failure returns NULL and leaves the reference path. */
void resot_shader_cache_init(const char *directory);
uint32_t *resot_compile_vertex(const char *glsl, size_t *bytes);
uint32_t *resot_optimize_fragment(const uint32_t *spirv, size_t input_bytes, size_t *bytes);
#ifdef __cplusplus
}
#endif
#endif
