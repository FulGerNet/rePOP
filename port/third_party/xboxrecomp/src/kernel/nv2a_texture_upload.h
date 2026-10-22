/* RE-SoT: bulk upload conversion. Walk Morton masks once per row instead
 * of regenerating/depositing both masks for every texel (16 ms for retail
 * 512x512 P8 light maps). No host GPU API, shared by Windows and Android. */
#ifndef RESOT_NV2A_TEXTURE_UPLOAD_H
#define RESOT_NV2A_TEXTURE_UPLOAD_H
#include "../d3d/d3d8_swizzle.h"

static int resot_decode_swizzled(uint32_t *dst, const uint8_t *src,
    uint32_t w, uint32_t h, uint32_t fmt, const uint32_t *palette)
{
    uint32_t mx, my, sx, sy = 0, x, y;
    if (fmt != 0x06 && fmt != 0x07 && fmt != 0x0B) return 0;
    if (!w || !h || (w & (w-1)) || (h & (h-1))) return 0;
    if (fmt == 0x0B && !palette) return 0;
    xbox_swizzle_masks(w,h,&mx,&my);
    for (y = 0; y < h; y++) {
        sx = 0;
        for (x = 0; x < w; x++) {
            uint32_t at = sx | sy, argb;
            if (fmt == 0x0B) argb = palette[src[at]];
            else {
                memcpy(&argb, src + (size_t)at*4, 4);
                if (fmt == 0x07) argb |= 0xFF000000u;
            }
            *dst++ = argb;
            sx = (sx - mx) & mx;
        }
        sy = (sy - my) & my;
    }
    return 1;
}
#endif
