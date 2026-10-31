/* RE-WW: linear textures that name part of a 32-bit render target.
 *
 * WW's menu bloom draws a mip pyramid into one 640-pixel-pitch surface
 * (0x0078D000: 320x240+0+0, 160x120+0+240, 80x60+0+360, ...) and then
 * samples each level as a linear A8R8G8B8 texture at the address of its
 * rectangle, e.g. 0x8086E000 = 0x8078D000 + 360 * 2560. Host render targets
 * keep their pixels on the GPU, so an address inside a surface used to fall
 * through to a guest RAM upload of bytes the host never wrote. The same
 * memory is also drawn with a 1280-byte pitch (320 wide); a linear texture
 * must take the surface whose row pitch it declares, not only its width.
 *
 * Pure address arithmetic shared by the D3D11 and native encoders. Surfaces
 * are assumed 32-bit (host B8G8R8A8, guest pitch = width * 4); any other
 * pitch simply does not match, and swizzled/compressed textures never do.
 */
#ifndef REWW_RT_SUBRECT_H
#define REWW_RT_SUBRECT_H

#include <stdint.h>
#include <stdlib.h>

/* REWW_RT_SUBRECT=0 restores the earlier width/newest alias selection. */
static inline int reww_rt_subrect_enabled(void)
{
    static int enabled = -1;
    if (enabled < 0) {
        const char *e = getenv("REWW_RT_SUBRECT");
        enabled = !(e && *e == '0');
    }
    return enabled;
}

/* Nonzero when a texture of the given shape lies entirely inside a surface
 * of surf_w x surf_h guest pixels at surf_off with row pitch surf_w * 4.
 * *x / *y receive the texel origin of the texture inside the surface. */
static inline int reww_rt_subrect(uint32_t surf_off, uint32_t surf_w, uint32_t surf_h,
                                  uint32_t tex_off, uint32_t tex_pitch,
                                  uint32_t tex_w, uint32_t tex_h,
                                  uint32_t *x, uint32_t *y)
{
    uint64_t pitch = (uint64_t)surf_w * 4u, delta;
    if (!surf_w || !surf_h || !tex_w || !tex_h || tex_pitch != pitch ||
        tex_off < surf_off)
        return 0;
    delta = (uint64_t)tex_off - surf_off;
    if (delta % 4u || delta / pitch >= surf_h)
        return 0;
    *y = (uint32_t)(delta / pitch);
    *x = (uint32_t)(delta % pitch / 4u);
    return (uint64_t)*x + tex_w <= surf_w && (uint64_t)*y + tex_h <= surf_h;
}

/* Guest memory can belong to two host surfaces at once: WW gameplay draws
 * 160x120 directly at 0x00823000 and, later in the same frame, as the
 * rectangle 160x120+0+240 of the 640-pitch surface at 0x0078D000. As in
 * RAM, the latest write to the sampled region wins, so each surface keeps
 * its last few written rectangles with a global write sequence number. */
#define REWW_WRITE_LOG 8
typedef struct RewwWriteLog {
    uint64_t serial[REWW_WRITE_LOG];
    uint32_t x0[REWW_WRITE_LOG], y0[REWW_WRITE_LOG], x1[REWW_WRITE_LOG], y1[REWW_WRITE_LOG];
    uint32_t next;
} RewwWriteLog;

static inline void reww_write_log(RewwWriteLog *log, uint64_t serial,
                                  uint32_t x, uint32_t y, uint32_t w, uint32_t h)
{
    uint32_t i = log->next++ % REWW_WRITE_LOG;
    log->serial[i] = serial;
    log->x0[i] = x; log->y0[i] = y; log->x1[i] = x + w; log->y1[i] = y + h;
}

/* One sequence for every color write of either encoder in this process. */
static uint64_t s_reww_write_serial;
static inline uint64_t reww_write_next(void) { return ++s_reww_write_serial; }

/* Newest write overlapping [x, x+w) x [y, y+h); zero when none is logged. */
static inline uint64_t reww_write_latest(const RewwWriteLog *log,
                                         uint32_t x, uint32_t y, uint32_t w, uint32_t h)
{
    uint64_t best = 0;
    uint32_t i;
    for (i = 0; i < REWW_WRITE_LOG; i++)
        if (log->serial[i] > best && log->x0[i] < x + w && x < log->x1[i] &&
            log->y0[i] < y + h && y < log->y1[i])
            best = log->serial[i];
    return best;
}

/* The whole surface, sampled as itself: keep the existing alias path. */
static inline int reww_rt_subrect_is_whole(uint32_t x, uint32_t y,
                                           uint32_t tex_w, uint32_t tex_h,
                                           uint32_t surf_w, uint32_t surf_h)
{
    return x == 0 && y == 0 && tex_w == surf_w && tex_h == surf_h;
}

#endif
