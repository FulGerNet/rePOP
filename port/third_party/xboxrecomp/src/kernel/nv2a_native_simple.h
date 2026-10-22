/* RE-SoT: exact whitelist for the native single-stage shaders.
 * No approximations: every nonmatching combiner retains ps_main. */
#ifndef RESOT_NATIVE_SIMPLE_H
#define RESOT_NATIVE_SIMPLE_H
#include <stdint.h>
static int resot_native_simple(uint32_t control, uint32_t program,
    uint32_t color_in, uint32_t alpha_in, uint32_t color_out, uint32_t alpha_out,
    uint32_t final0, uint32_t final1, uint32_t alpha_test, uint32_t alpha_func, int cube)
{
    return (control & 255) == 1 && !cube
        && (!alpha_test || (alpha_func >= 0x200 && alpha_func <= 0x207))
        /* RE-SoT: retail trace also has diffuse * one with no texture
         * program: 0x20 maps the zero register to one, not texture zero. */
        && ((program == 1
            && (color_in == 0x08040000 || color_in == 0x08010000)
            && (alpha_in == 0x18140000 || alpha_in == 0x18110000))
            || (program == 0 && color_in == 0x04200000 && alpha_in == 0x14200000))
        && (color_out == 0x00010C00 || color_out == 0x00000C00)
        && alpha_out == 0x00000C00
        && ((final1 == 0x00001C80 && (final0 == 0x130C0300 || final0 == 0x0000000C))
            || (!final0 && !final1));
}
#endif
