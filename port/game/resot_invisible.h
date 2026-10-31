/* reSOT: the F8 "Show triggers" view. Jade's OBJ_C_ControlFlag_ForceInvisible
 * (0x00200000 at GAO+4, as the XBE addresses in each target_hooks.c test it)
 * keeps an object off the visible list; its editor "Invisible objects" display
 * is compiled out of the Xbox builds. Entry hooks clear the bit from just before
 * that test until the list insertion, so AI and game code never read it changed,
 * and name the object's vertex data so the renderer draws it in vertex colours.
 * Objects with no mesh (collision or logic only) have nothing to draw. Nothing is
 * written while the view is off, so a normal run takes only the mode check. */
#ifndef RESOT_INVISIBLE_H
#define RESOT_INVISIBLE_H
#include "guest_probe.h"

extern int xbox_FramebufferRenderMode(void);
extern void nv2a_hw_debug_mark_mesh(uint32_t data);

#define RESOT_GAO_FORCE_INVISIBLE 0x00200000u
#define RESOT_GAO_VISIBLE         0x00000002u
#define RESOT_GAO_IDENTITY_VISU   0x00004000u

static RESOT_TLS uint32_t s_invisible_pending;

/* resot_guest_read_word asks the OS each time: with a read per field of every
 * object, the first Show triggers held frames up to 1.6 s. A readable range
 * is remembered until resot_guest_ranges_forget; the title frees memory only
 * between walks of its own lists, and these views run on its thread. */
#if defined(_WIN32)
static uint32_t s_guest_ranges[8][2];
static unsigned s_guest_range_next;
static void resot_guest_ranges_forget(void)
{
    memset(s_guest_ranges, 0, sizeof s_guest_ranges);
}
static int resot_guest_word(uint32_t address, uint32_t *word)
{
    MEMORY_BASIC_INFORMATION info;
    unsigned i;
    if (!address || address > UINT32_MAX - 3u) return 0;
    for (i = 0; i < 8; i++)
        if (address >= s_guest_ranges[i][0] && address + 4 <= s_guest_ranges[i][1]) {
            *word = GMEM32(address);
            return 1;
        }
    if (!resot_guest_read_word(g_xbox_mem_offset, address, word)) return 0;
    if (VirtualQuery((const void *)((uintptr_t)g_xbox_mem_offset + address), &info, sizeof info) == sizeof info) {
        uintptr_t base = (uintptr_t)info.BaseAddress - (uintptr_t)g_xbox_mem_offset;
        uintptr_t end = base + info.RegionSize;
        if (end > UINT32_MAX) end = UINT32_MAX;
        s_guest_ranges[s_guest_range_next][0] = (uint32_t)base;
        s_guest_ranges[s_guest_range_next][1] = (uint32_t)end;
        s_guest_range_next = (s_guest_range_next + 1) & 7;
    }
    return 1;
}
#else
static void resot_guest_ranges_forget(void) {}
static int resot_guest_word(uint32_t address, uint32_t *word)
{
    return resot_guest_read_word(g_xbox_mem_offset, address, word);
}
#endif

static void resot_invisible_restore(void)
{
    if (s_invisible_pending) {
        GMEM32(s_invisible_pending + 4) |= RESOT_GAO_FORCE_INVISIBLE;
        s_invisible_pending = 0;
    }
}

/* mesh_resource: the GEO offset of its vertex resource, from this target's XBE. */
static void resot_invisible_pass(uint32_t object, uint32_t mesh_resource)
{
    uint32_t identity = 0, flags = 0, render = 0, visual = 0, mesh = 0, resource = 0, data = 0;
    resot_invisible_restore();
    if (xbox_FramebufferRenderMode() != 3 || !object || (object & 3)) return;
    if (!resot_guest_word(object, &identity) || !resot_guest_word(object + 4, &flags)) return;
    if ((flags & RESOT_GAO_VISIBLE) || !(flags & RESOT_GAO_FORCE_INVISIBLE) ||
        !(identity & RESOT_GAO_IDENTITY_VISU)) return;
    if (!resot_guest_word(object + 0x14, &render) || !render ||
        !resot_guest_word(render, &visual) || !visual ||
        !resot_guest_word(visual, &mesh) || !mesh) return;
    if (resot_guest_word(mesh + mesh_resource, &resource) && resource &&
        resot_guest_word(resource + 4, &data) && data)
        nv2a_hw_debug_mark_mesh(data);
    GMEM32(object + 4) = flags & ~RESOT_GAO_FORCE_INVISIBLE;
    s_invisible_pending = object;
}
#endif
