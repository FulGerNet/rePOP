/* RE-SoT: shared host UI texture policy for D3D11, D3D12 and Vulkan.
 * Preserve the game's UVs and combiners: the E3 logo's yellow is supplied
 * by its draw, not by the white pixels of its source sheet. */
#ifndef RESOT_UI_TEXTURES_H
#define RESOT_UI_TEXTURES_H
#include "resot_hd_font.h"
#include "resot_hd_logo.h"

static uint32_t resot_ui_texture_variant(uint32_t w, uint32_t h)
{
#if RESOT_RUNTIME_DEMO
    extern int resot_menu_scene(void);
    /* Texture caches must notice menu/game transitions even if the guest
     * image bytes stay unchanged. Only the logo's dimensions need this. */
    if (w == 256 && h == 64) return resot_menu_scene() == 1;
#else
    (void)w; (void)h;
#endif
    return 0;
}

static uint32_t *resot_ui_texture_pixels(uint32_t *px, uint32_t *w, uint32_t *h, int cube, int *hd)
{
    *hd = !cube && resot_hd_font_match(px, *w, *h);
    if (*hd) {
        uint32_t *big = resot_hd_font_pixels(px);
        if (big) {
            free(px); px = big;
            *w = RESOT_HD_FONT_W; *h = RESOT_HD_FONT_H;
        } else *hd = 0;
    }
#ifdef RESOT_HD_LOGO_DATA_W
    /* The demo draws its logo only in menus; in play the block below hides it. */
    if (!cube && *w == RESOT_HD_LOGO_GUEST_W && *h == RESOT_HD_LOGO_GUEST_H
#if RESOT_RUNTIME_DEMO
        && resot_ui_texture_variant(*w, *h)
#endif
        ) {
        uint32_t *big = resot_hd_logo_pixels(px);
        if (big) {
            free(px); px = big;
            *w = RESOT_HD_LOGO_DATA_W; *h = RESOT_HD_LOGO_DATA_H;
            *hd = 1;
        }
    }
#endif
#if RESOT_RUNTIME_DEMO
    /* BF texture 0x0B0044F9, alongside GAO E3_WorkInProgress 0x0B0044F7.
     * Match all decoded bytes; never hide unrelated 256x64 textures. Keep
     * the original menu draw and suppress the misplaced gameplay watermark. */
    if (!cube && *w == 256 && *h == 64 && !resot_ui_texture_variant(*w, *h)) {
        uint32_t hash = 2166136261u;
        const uint8_t *bytes = (const uint8_t *)px;
        size_t i;
        for (i = 0; i < 256u*64u*4u; ++i) hash = (hash ^ bytes[i])*16777619u;
        if (hash == 0x72C687A6u) memset(px, 0, 256u*64u*4u);
    }
#endif
    return px;
}
#endif
