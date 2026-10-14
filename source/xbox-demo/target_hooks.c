/* Prince of Persia: The Sands of Time, Xbox demo: entry hooks.
 *
 * `void sub_XXXXXXXX_enter(void)` here runs at the top of the generated
 * sub_XXXXXXXX, before its first instruction (tools/recomp.ps1 hands this file
 * to the lifter as --exclude-manual). Every address is a virtual address in
 * the demo's default.xbe (SHA-256 79C1A478...D4F5); this file is built into
 * the demo's executable only.
 */
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "target.h"

#if defined(_MSC_VER)
#define RESOT_TLS __declspec(thread)
#else
#define RESOT_TLS __thread
#endif
extern RESOT_TLS uint32_t g_ecx, g_edx, g_esp;
extern ptrdiff_t g_xbox_mem_offset;

/* ── Widescreen: more picture at the sides, the same picture vertically ──
 *
 * The renderer stretches the 640-pixel picture over a wider surface
 * (RECOMP_HW_ASPECT). For the proportions to stay right, the horizontal scale
 * of the title's projection has to shrink by the same factor (`widen`), and
 * nothing else may change: that is Hor+, more scene at the sides.
 *
 * sub_000EF340 builds the projection at 0x00650C20 (x scale at +0x00, y scale
 * at +0x14) from the camera's field of view and hands it to sub_000EF140
 * (edx = 0x00650C20, returning to 0x000EF5AA). Dividing the x scale there is
 * the whole change.
 *
 * Widening the camera's field of view instead was tried and is wrong here:
 * Jade places its in-camera 2D (the demo's "Work in progress" caption and
 * logo) from the same field of view, so restoring the vertical scale
 * afterwards pushed those off the bottom of the screen. With the field of
 * view untouched they keep their 4:3 place and size.
 *
 * Culling still uses the camera's own field of view, so objects that are
 * entirely in the new side strips may be culled; see sub_0008A820_enter. */
static float s_widen = -1.0f;

static float widen_factor(void)
{
    if (s_widen < 0.0f) {
        const char *e = getenv("RECOMP_HW_ASPECT"), *colon;
        float aspect = 4.0f / 3.0f;
        if (e && *e) {
            aspect = (float)atof(e);
            colon = strchr(e, ':');
            if (colon && atof(colon + 1) > 0.0)
                aspect /= (float)atof(colon + 1);
        }
        s_widen = (aspect >= 4.0f / 3.0f && aspect <= 4.0f) ? aspect / (4.0f / 3.0f) : 1.0f;
        /* RESOT_NO_FOV_HOOK=1: leave the projection alone (comparison runs). */
        if (getenv("RESOT_NO_FOV_HOOK"))
            s_widen = 1.0f;
        if (s_widen > 1.0f)
            fprintf(stderr, "[BOOT] widescreen: projection widened %.4fx horizontally\n",
                    s_widen);
    }
    return s_widen;
}

/* Camera set-up: culling focal lengths (cam +0x14 / +0x18) from the field of
 * view at +0x0C (fptan at 0x0008A95E). Left as the title has it for now. */
void sub_0008A820_enter(void)
{
}

/* Projection matrix: the camera is the first stack argument. */
void sub_000EF340_enter(void)
{
}

void sub_000EF140_enter(void)
{
    uint8_t *mem = (uint8_t *)(uintptr_t)g_xbox_mem_offset;

    if (widen_factor() > 1.0f
            && *(const uint32_t *)(mem + g_esp) == 0x000EF5AAu
            && g_edx == 0x00650C20u)
        *(float *)(mem + 0x00650C20u) /= s_widen;
}
