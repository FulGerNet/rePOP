/* RE-SoT: one quality budget for auxiliary render targets, on both hosts.
 * This changes raster resolution, never guest filter offsets or animation.
 * Unknown material draws must remain present even at Off: removing a water
 * material, for example, also removes its base colour/depth. Only independently
 * identified additive effects may be omitted by the caller. */
#ifndef RESOT_EFFECT_QUALITY_H
#define RESOT_EFFECT_QUALITY_H
#include <stdint.h>

static unsigned resot_effect_percent(int quality, uint32_t width, uint32_t height)
{
    /* RE-SoT: protect display/history buffers and tiny bloom pyramid levels.
     * Use the viewport extent, not the padded pitch (retail 40 pixels: 48). */
    if (width < 40 || height < 30 || width >= 640 || height > 512) return 100;
    return quality == 0 ? 25 : quality == 1 ? 50 : quality == 2 ? 75 : 100;
}

static int resot_shadow_target(uint32_t format, uint32_t pitch,
    uint32_t x, uint32_t y, uint32_t width, uint32_t height,
    uint32_t zeta, int depth_test, int blend)
{
    /* RE-SoT: independently observed demo and retail caster passes:
     * RGB565 256x256, 512-byte pitch, no depth surface/test or blending.
     * Do not treat arbitrary square textures or small viewports as shadows. */
    return (format & 15) == 3 && pitch == 512 && !x && !y
        && width == 256 && height == 256 && !zeta && !depth_test && !blend;
}
#endif
