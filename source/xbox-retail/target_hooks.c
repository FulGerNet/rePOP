/* Prince of Persia: The Sands of Time, Xbox retail NTSC entry hooks.
 * Addresses verified in SHA-256 753C58B1...1EE379 (2003-10-20).
 * XAPI entry/ret bytes, 25-byte caps and 22-byte state verified in retail XPP:
 *   0x0041172B XGetDevices; 0x0041174D XGetDeviceChanges;
 *   0x00417D4B XInputOpen; 0x00417DA1 XInputClose;
 *   0x00417DAD XInputGetCapabilities; 0x00417F85 XInputGetState;
 *   0x00417FF8 XInputSetState.
 * Retail game call sites: sub_000DBB50 (0x000DBB5C, 0x000DBBD5,
 * 0x000DBBE2, 0x000DBBEF) and sub_000DBC60 (0x000DBC76, 0x000DBCAA).
 * RECOMP_USB=1 runs the original XAPI routines instead.
 */
#include <math.h>
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../port/game/guest_probe.h"
#include "target.h"
#include "../../port/game/resot_menu_pointer.h"
#if defined(_MSC_VER)
#define RESOT_TLS __declspec(thread)
#else
#define RESOT_TLS __thread
#endif
extern RESOT_TLS uint32_t g_eax, g_ecx, g_edx, g_esp, g_esi;
extern ptrdiff_t g_xbox_mem_offset;
#define GMEM32(va) (*(volatile uint32_t *)((uintptr_t)g_xbox_mem_offset + (uint32_t)(va)))
#define GMEMF(va)  (*(volatile float *)((uintptr_t)g_xbox_mem_offset + (uint32_t)(va)))

/* Retail's frame clock sub_000DB740 captures elapsed microseconds through
 * its calibrated RDTSC clock (sub_00011A10), then computes a fixed timestep
 * as 1000000 / (int(refresh) >> 1). The refresh field at 0x007654A4 remains
 * zero here: 0x000DB780 / 0x000DB7CD read it, 0x000DB7A7 divides by zero,
 * and _ftol at 0x00348128 produces an invalid integer. The title's 1000-us
 * minimum at 0x000DB7EA then makes a 60-fps picture advance only 0.06 game
 * seconds per wall second. A live capture had new/old timestamps 33860721 /
 * 33843988 us, refresh 0, and timestep 1000 us.
 *
 * At only this _ftol call, replace the invalid reciprocal with the measured
 * interval the game has already captured. Keep _ftol, the original minimum,
 * 160-ms float cap, speed factors and pause handling. Valid refresh values
 * retain the original path; no host-clock scale or frame limit is changed.
 * RESOT_RAW_RETAIL_TIMESTEP=1 restores the unmodified path for comparison. */
extern RESOT_TLS double g_fp_stack[8];
extern RESOT_TLS int g_fp_top;

void sub_00348128_enter(void)
{
    static int configured, raw;
    static unsigned reports;
    float refresh;
    uint64_t now, previous, elapsed;
    double input;
    if (GMEM32(g_esp) != 0x000DB7B8u)
        return;
    refresh = GMEMF(0x007654A4u);
    if (isfinite(refresh) && refresh >= 2.0f)
        return;
    if (!configured) {
        const char *e = getenv("RESOT_RAW_RETAIL_TIMESTEP");
        raw = e && *e && *e != '0';
        configured = 1;
    }
    now = ((uint64_t)GMEM32(0x007654CCu) << 32) | GMEM32(0x007654C8u);
    previous = ((uint64_t)GMEM32(0x007654D4u) << 32) | GMEM32(0x007654D0u);
    elapsed = now >= previous ? now - previous : 0;
    input = g_fp_stack[(unsigned)g_fp_top & 7u];
    if (!reports++ || (getenv("RESOT_TIMER_DIAG") && reports % 120 == 0))
        fprintf(stderr, "[TIME] retail invalid refresh %.3f, fixed-step input %.3f;"
                        " measured interval %llu us (%s)\n", refresh, input,
                (unsigned long long)elapsed, raw ? "original conversion" : "calibrated clock");
    if (!raw)
        g_fp_stack[(unsigned)g_fp_top & 7u] = (double)elapsed;
}

/* Retail primary WOW merge at 0x00031A73: source in EAX, aggregate
 * destination at stack +4. This caller follows the primary key load at
 * 0x00031A58; dependency merges use other callers. */
extern void resot_scene_loaded(uint32_t destination, uint32_t source, int primary, uint32_t caller);
void sub_00030FB0_enter(void)
{
    uint32_t caller = GMEM32(g_esp);
    resot_scene_loaded(GMEM32(g_esp + 4), g_eax, caller == 0x00031A78u, caller);
}

/* Retail independently verified in its XBE: sub_0001E970 returns 0 at EOF;
 * caller 0x0002F5FC tests the loop flag 0x00758544 at 0x0002F629 and calls
 * sub_0001ED10 at 0x0002F63B to close Bink and release the overlay. Report
 * EOF for Space / pad A even when the movie's original skip permission or
 * minimum viewing time forbids skipping. The game's normal completion path
 * retains timeline bookkeeping and subsequent scene/movie transitions. */
extern int resot_movie_skip_down(void);
extern void sub_0001E970_gen(void);

void sub_0001E970(void)
{
    static int was_down;
    int down;
    resot_menu_movie(GMEM32(0x0044AA1Cu) != 0); /* handle read by 0x0001E970 */
    down = resot_movie_skip_down() | resot_menu_movie_tap();
    int pressed = down && !was_down;
    was_down = down;
    if (pressed && GMEM32(0x0044AA1Cu)) { /* Bink handle, read at 0x0001E970 */
        GMEM32(0x00758544u) = 0;         /* looping movies must also finish */
        fprintf(stderr, "[VIDEO] skipped movie (Space / A)\n");
        g_eax = 0;
        g_esp += 4;                     /* original status routine: ret */
        return;
    }
    sub_0001E970_gen();
}

/* ── Widescreen: Hor+, as in the demo (source/xbox-demo/target_hooks.c) ──
 *
 * The renderer stretches the 640-pixel picture over a wider surface
 * (RECOMP_HW_ASPECT); the projection's horizontal scale shrinks by the same
 * factor so the proportions stay right and more scene shows at the sides.
 *
 * Retail differs from the demo in where the projection lives. sub_000CFC10
 * (the demo's sub_000EF340: same fptan of the camera's field of view at
 * 0x000CFD14) builds it at 0x007682B0 (x scale +0x00, y scale +0x14), copies
 * it inline (rep movsd at 0x000CFE7F) to 0x00440C00 = 0x00440BA0 + 0x60 and
 * calls sub_000CD970 with esi = 0x00440BA0, returning to 0x000CFE8B. The demo
 * narrowed the source before its copy; here both copies are narrowed, which
 * leaves the same values in both places. */
#define PROJ_BUILT    0x007682B0u
#define PROJ_HOLDER   0x00440BA0u
#define PROJ_RET      0x000CFE8Bu

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

static void resot_triggers_view(void);
void sub_000CD970_enter(void)
{
    extern RESOT_TLS uint32_t g_ebp;
    /* 0x000CFEAB..0x000CFEBD publishes the camera viewport. At this
     * existing call EBP is top; caller local +0x1C (here ESP+0x20) is
     * height. Full screen height is read from screen+0xA8 at 0x000CFC5B. */
    if (GMEM32(g_esp) == PROJ_RET && g_esi == PROJ_HOLDER)
        resot_menu_camera_viewport(g_ebp, GMEM32(g_esp + 0x20u),
                                  GMEM32(GMEM32(0x00758E34u) + 0xA8u));
    if (widen_factor() > 1.0f && GMEM32(g_esp) == PROJ_RET && g_esi == PROJ_HOLDER) {
        GMEMF(PROJ_BUILT) /= s_widen;
        GMEMF(PROJ_HOLDER + 0x60) /= s_widen;
    }
    if (GMEM32(g_esp) == PROJ_RET && g_esi == PROJ_HOLDER)
        resot_triggers_view();
}

/* Culling planes. sub_002FD810 is the demo's sub_0008A500 (Jade's
 * CAM_Engine_ComputePlans, byte for byte apart from addresses): half the field
 * of view (cam +0x0C times the constant at 0x00429354), then the side planes
 * from the cosine sub_000452F0 (returning to 0x002FD835) and the sine
 * sub_00045340 (returning to 0x002FD85C); the up/down calls return to
 * 0x002FD87C and 0x002FD896 and keep the original angle. The side calls get
 * the widened half angle atan(widen * tan h), so what lies only in the new
 * side strips is not culled. */
static void widen_side_plane_angle(uint32_t ret_side)
{
    float h, *arg;

    if (widen_factor() <= 1.0f || GMEM32(g_esp) != ret_side)
        return;
    arg = (float *)((uintptr_t)g_xbox_mem_offset + g_esp + 4);
    h = *arg;
    if (h > 0.0f && h < 1.5f) {
        static int told;
        *arg = atanf(s_widen * tanf(h));
        if (!told++)
            fprintf(stderr, "[BOOT] widescreen: culling half-angle %.4f -> %.4f rad\n",
                    h, *arg);
    }
}

void sub_000452F0_enter(void)
{
    widen_side_plane_angle(0x002FD835u);
}

void sub_00045340_enter(void)
{
    widen_side_plane_angle(0x002FD85Cu);
}

/* Retail XDK KickOff at 0x0036FF60..0x0037000F and
 * 0x00370010..0x0037007A. These retain the retail stores/registers and
 * replace only the WC-flush spin with the host executor's wait/kick.
 * Retail differs from demo: device+0x770 (put), +0x1C20 (DMA),
 * +0x1C28 (NV registers), +0x2478 -> +0x1DE4 (saved put bookkeeping).
 * Busy query: 0x0036AE70; sync flag: 0x0037B1A0; dummy DMA: 0x0037B190.
 */
extern void xbox_Nv2aKick(void);
extern void xbox_Nv2aWaitClear(uint32_t va, uint32_t mask);
extern void sub_0036AE70(void);

#define D3D_DEVICE_GLOBAL  0x0037B648u   /* [dev] +0x1C28: NV register base */
#define NV_PFB_WC_FLUSH    0x00100410u
#define D3D_SYNC_FLAG      0x0037B1A0u   /* nonzero: wait for an idle GPU */

static void wait_gpu_idle(uint32_t ret)
{
    do {
        g_esp -= 4;
        GMEM32(g_esp) = ret;
        sub_0036AE70();                  /* eax != 0 while PGRAPH is busy */
    } while (g_eax);
}

void sub_0036FF60(void)
{
    uint32_t dev = g_ecx, flags, put, regs;

    g_esp -= 4;
    GMEM32(g_esp) = g_esi;               /* push esi */
    g_esi = dev;
    flags = GMEM32(dev + 8);
    g_eax = flags;
    put = (flags & 4) ? GMEM32(dev + 0x770) : GMEM32(dev);
    g_edx = put;
    if (flags & 0x2000) {                /* 0x0036FFD6 */
        g_eax = GMEM32(dev);
        g_ecx = 0x0037B190u - 0x40u;
        GMEM32(dev + 0x1C20) = g_ecx;
        g_eax &= 0x0FFFFFFFu;
        GMEM32(g_ecx + 0x40) = g_eax;
        g_edx = GMEM32(dev + 0x1C20);
        GMEM32(g_edx + 0x44) = g_eax;
        g_eax = GMEM32(dev + 0x2C) - 2;
        g_ecx = GMEM32(dev + 0x30);
        GMEM32(g_ecx) = g_eax;
        g_edx = GMEM32(dev + 0x2478);
        GMEM32(dev + 0x1DE4) = g_edx;
    } else {
        regs = GMEM32(GMEM32(D3D_DEVICE_GLOBAL) + 0x1C28);
        g_eax = regs;
        g_ecx = GMEM32(regs + NV_PFB_WC_FLUSH) | 0x10000u;
        GMEM32(regs + NV_PFB_WC_FLUSH) = g_ecx;
        xbox_Nv2aWaitClear(regs + NV_PFB_WC_FLUSH, 0x10000u);   /* 0x0036FFA0 */
        g_ecx = GMEM32(dev + 0x1C20);
        g_edx = put & 0x0FFFFFFFu;
        GMEM32(g_ecx + 0x40) = g_edx;    /* DMA_PUT */
        xbox_Nv2aKick();
        g_eax = GMEM32(D3D_SYNC_FLAG);
        if (g_eax) {
            wait_gpu_idle(0x0036FFC9u);
            GMEM32(dev + 8) |= 0x2000u;
        }
    }
    g_esi = GMEM32(g_esp);               /* pop esi */
    g_esp += 4;
    g_esp += 4;                          /* ret */
}

void sub_00370010(void)
{
    uint32_t dev = g_ecx, flags, put, regs;

    flags = GMEM32(dev + 8);
    g_eax = flags;
    g_esp -= 4;
    GMEM32(g_esp) = g_esi;               /* push esi */
    put = (flags & 4) ? GMEM32(dev + 0x770) : GMEM32(dev);
    g_esi = put;
    if (!(flags & 0x2000)) {
        regs = GMEM32(GMEM32(D3D_DEVICE_GLOBAL) + 0x1C28);
        g_eax = regs;
        g_edx = GMEM32(regs + NV_PFB_WC_FLUSH) | 0x10000u;
        GMEM32(regs + NV_PFB_WC_FLUSH) = g_edx;
        xbox_Nv2aWaitClear(regs + NV_PFB_WC_FLUSH, 0x10000u);   /* 0x00370050 */
        g_ecx = GMEM32(dev + 0x1C20);
        g_esi = put & 0x0FFFFFFFu;
        GMEM32(g_ecx + 0x40) = g_esi;    /* DMA_PUT */
        xbox_Nv2aKick();
        wait_gpu_idle(0x00370075u);
    }
    g_esi = GMEM32(g_esp);               /* pop esi */
    g_esp += 4;
    g_esp += 4;                          /* ret */
}

extern uint32_t xbox_HlePadState(uint32_t port, uint8_t *out);
extern void     xbox_HlePadRumble(uint32_t port, uint16_t left, uint16_t right);

extern void sub_0041172B_gen(void);
extern void sub_0041174D_gen(void);
extern void sub_00417D4B_gen(void);
extern void sub_00417DA1_gen(void);
extern void sub_00417DAD_gen(void);
extern void sub_00417F85_gen(void);
extern void sub_00417FF8_gen(void);

#define PAD_HANDLE 0x52455330u             /* "RES0": port 0's handle */

static int usb_input(void)
{
    static int on = -1;
    if (on < 0) {
        const char *e = getenv("RECOMP_USB");
        on = e && *e && *e != '0';
        if (!on)
            fprintf(stderr, "[BOOT] input: XAPI pad on port 0 from keyboard, mouse,"
                            " XInput pad or joystick (no USB)\n");
    }
    return on;
}

static uint32_t stdcall_arg(int i)
{
    return GMEM32(g_esp + 4 + 4 * (uint32_t)i);
}

static void stdcall_return(uint32_t value, int nargs)
{
    g_eax = value;
    g_esp += 4 + 4 * (uint32_t)nargs;
}

/* XGetDevices */
void sub_0041172B(void)
{
    if (usb_input()) { sub_0041172B_gen(); return; }
    stdcall_return(1u, 1);                 /* a gamepad on port 0 */
}

/* XGetDeviceChanges */
void sub_0041174D(void)
{
    uint32_t ins, rem;
    if (usb_input()) { sub_0041174D_gen(); return; }
    ins = stdcall_arg(1);
    rem = stdcall_arg(2);
    if (ins) GMEM32(ins) = 0;              /* nothing comes or goes */
    if (rem) GMEM32(rem) = 0;
    stdcall_return(0, 3);
}

/* XInputOpen */
void sub_00417D4B(void)
{
    if (usb_input()) { sub_00417D4B_gen(); return; }
    stdcall_return(stdcall_arg(1) == 0 ? PAD_HANDLE : 0, 4);
}

/* XInputClose */
void sub_00417DA1(void)
{
    if (usb_input()) { sub_00417DA1_gen(); return; }
    stdcall_return(0, 1);
}

/* XInputGetCapabilities */
void sub_00417DAD(void)
{
    uint32_t caps, i;
    if (usb_input()) { sub_00417DAD_gen(); return; }
    caps = stdcall_arg(1);
    if (stdcall_arg(0) != PAD_HANDLE || !caps) {
        stdcall_return(1167, 2);           /* ERROR_DEVICE_NOT_CONNECTED */
        return;
    }
    /* SubType, a reserved word, the gamepad's supported controls, rumble. */
    for (i = 0; i < 25; i++)
        *(volatile uint8_t *)((uintptr_t)g_xbox_mem_offset + caps + i) = 0xFF;
    *(volatile uint8_t *)((uintptr_t)g_xbox_mem_offset + caps) = 1;   /* GC_GAMEPAD */
    *(volatile uint8_t *)((uintptr_t)g_xbox_mem_offset + caps + 1) = 0;
    *(volatile uint8_t *)((uintptr_t)g_xbox_mem_offset + caps + 2) = 0;
    stdcall_return(0, 2);
}

/* XInputGetState, polled once a frame on the title thread: also where the
 * reSOT Options labels catch up with a changed setting. */
static void native_refresh(void);

void sub_00417F85(void)
{
    uint32_t st;
    native_refresh();
    if (usb_input()) { sub_00417F85_gen(); return; }
    st = stdcall_arg(1);
    if (stdcall_arg(0) != PAD_HANDLE || !st) {
        stdcall_return(1167, 2);
        return;
    }
    {
        uint8_t *state=(uint8_t *)((uintptr_t)g_xbox_mem_offset+st);
        uint32_t result=xbox_HlePadState(0,state);
        if(!result) resot_menu_pointer_pad(state);
        stdcall_return(result,2);
    }
}

/* XInputSetState */
void sub_00417FF8(void)
{
    uint32_t fb;
    if (usb_input()) { sub_00417FF8_gen(); return; }
    fb = stdcall_arg(1);
    if (stdcall_arg(0) != PAD_HANDLE || !fb) {
        stdcall_return(1167, 2);
        return;
    }
    /* XINPUT_FEEDBACK: the header's dwStatus, then the rumble at +0x42. The
     * game sends again once dwStatus has left ERROR_IO_PENDING
     * (retail call at 0x000DC2AC), so the request completes at once. */
    xbox_HlePadRumble(0, *(volatile uint16_t *)((uintptr_t)g_xbox_mem_offset + fb + 0x42),
                      *(volatile uint16_t *)((uintptr_t)g_xbox_mem_offset + fb + 0x44));
    GMEM32(fb) = 0;
    stdcall_return(997, 2);                /* ERROR_IO_PENDING, already done */
}

/* ── Menu construction trace (RESOT_MENU_TRACE=1) ──
 *
 * The retail XBE's Jade menu library, matched to the demo's routine by
 * routine and checked in this XBE's code: 0x002A2B20 opens a page (eax =
 * current menu from 0x00758D6C, ecx = &title reference, edx = menu object,
 * xmm1 = column x, stored at +0x524; cdecl out, first line, top, step,
 * flags), 0x002A3910 adds a choice (cdecl out, menu, &text reference),
 * 0x002A2670 closes the page. 0x000F84A0 resolves a text reference
 * (edi = &{group key, index}) to a string. 0x00018310 builds a message
 * action, 0x00116660 binds an action to a choice. Logged with their return
 * addresses and resolved labels to map the retail menus. */
extern RESOT_TLS uint32_t g_ebx, g_edi, g_ebp, g_seh_ebp;
extern void sub_000F84A0(void);

typedef struct { uint32_t eax, ebx, ecx, edx, esi, edi, ebp, seh, esp; } GuestRegs;
static void regs_save(GuestRegs *r)
{
    r->eax = g_eax; r->ebx = g_ebx; r->ecx = g_ecx; r->edx = g_edx; r->esi = g_esi;
    r->edi = g_edi; r->ebp = g_ebp; r->seh = g_seh_ebp; r->esp = g_esp;
}
static void regs_load(const GuestRegs *r)
{
    g_eax = r->eax; g_ebx = r->ebx; g_ecx = r->ecx; g_edx = r->edx; g_esi = r->esi;
    g_edi = r->edi; g_ebp = r->ebp; g_seh_ebp = r->seh; g_esp = r->esp;
}

static int menu_trace(void)
{
    static int on = -1;
    if (on < 0) { const char *e = getenv("RESOT_MENU_TRACE"); on = e && *e && *e != '0'; }
    return on;
}

/* The game's string for a text reference in guest memory, or "". */
static void menu_text(uint32_t ref, char *out, unsigned size)
{
    GuestRegs saved;
    uint32_t s;
    unsigned i;
    out[0] = 0;
    if (!ref || GMEM32(ref) == 0xFFFFFFFFu)
        return;
    regs_save(&saved);
    g_edi = ref;
    g_esp -= 4; GMEM32(g_esp) = 0;
    sub_000F84A0();
    s = g_eax;
    regs_load(&saved);
    for (i = 0; s && i + 1 < size; i++) {
        char c = *(volatile char *)((uintptr_t)g_xbox_mem_offset + s + i);
        if (!c) break;
        out[i] = (c >= 32 && c < 127) ? c : '?';
    }
    out[s ? i : 0] = 0;
}

void sub_00116660_enter(void)
{
    if (menu_trace())
        fprintf(stderr, "[MENU] bind       ret=%08X action=%08X choice=%08X edx=%08X ebx=%08X\n",
                GMEM32(g_esp), GMEM32(g_esp + 8), GMEM32(g_esp + 12), g_edx, g_ebx);
}

void sub_000182A0_enter(void)
{
    if (menu_trace())
        fprintf(stderr, "[MENU] open-page  ret=%08X page=%08X\n", GMEM32(g_esp), g_ecx);
}

void sub_00018310_enter(void)
{
    if (menu_trace()) {
        uint32_t d = GMEM32(g_esp + 8);
        fprintf(stderr, "[MENU] message    ret=%08X kind=%d param=%08X id=%u\n",
                GMEM32(g_esp), (int)GMEM32(d + 0x28), GMEM32(d + 0x2C), GMEM32(d + 0x30));
    }
}

/* RESOT_TEXT_DUMP=<group>[,<group>...]: print every string of those text
 * groups once, at the first page the menu library opens (with the trace). */
static void text_dump(void)
{
    static int done;
    const char *e = getenv("RESOT_TEXT_DUMP");
    if (done || !e || !*e) return;
    done = 1;
    while (*e) {
        char *next;
        uint32_t group = (uint32_t)strtoul(e, &next, 16), i, empty = 0;
        GuestRegs saved;
        if (next == e) break;
        e = next;
        regs_save(&saved);
        g_esp -= 0x20;
        for (i = 0; i < 400 && empty < 8; i++) {
            char t[120];
            GMEM32(g_esp + 0x10) = group;
            GMEM32(g_esp + 0x14) = i;
            menu_text(g_esp + 0x10, t, sizeof t);
            empty = t[0] ? 0 : empty + 1;
            if (t[0])
                fprintf(stderr, "[TEXT] %08X:%u \"%s\"\n", group, i, t);
        }
        regs_load(&saved);
        while (*e == ',' || *e == ' ') e++;
    }
}

/* ── reSOT Options: native pages for the host settings (retail) ──
 *
 * The demo's design (source/xbox-demo/target_hooks.c), with this XBE's own
 * routines and conventions, each checked here:
 *   page open  0x002A2B20  eax = current menu, ecx = &title reference,
 *                          edx = menu object, xmm1 = column x (+0x524; the
 *                          game's pages pass 0.4 from 0x00429478); cdecl
 *                          (out, first line, top, step, flags). Flags 5 as
 *                          the Options sub-pages (Sound at 0x001A3564).
 *   add choice 0x002A3910  eax = current menu; cdecl (out, menu, &reference)
 *   close      0x002A2670  eax = current menu; cdecl (menu)
 *   open page  0x000182A0  ecx = page; cdecl (current, 0, 1) -> action
 *   message    0x00018310  cdecl (current, &descriptor) -> action
 *   bind       0x00116660  eax = current, edx = menu object; cdecl
 *                          (out, action, choice) (0x001A17CE)
 *   execute    0x00039B20  message action, vtable 0x0041F888 slot 1; the
 *                          descriptor copy at +0x24, as the demo's 0x00061470
 *   text       0x000F84A0  edi = &{group, index} -> string; "no text" is
 *                          0x0041F4A8
 *   refresh    0x00038DD0  ecx = text object, eax = 1: re-reads the text
 *                          (0x00038190 asks the text action only when its
 *                          flag argument is set, as 0x00038FE4 does)
 * Text objects: manager 0x007584F0 (+0x44 objects by handle, the choice's
 * text object at +0x9C), text action vtable 0x0041F838 (slot 1 0x00038760,
 * reference at +0x34/+0x38).
 *
 * The main menu (init 0x002345D0) opens its page at 0x00234B3D (Start New
 * Game, Load Saved Game, Options, Xbox Live, Extra Features), with eax =
 * [0x00767530], and closes it at 0x00234D86. "reSOT Options" is added there
 * before the close; the pages are built when the next page opens
 * (0x00234DC8, return 0x00234DCD), and again for each new main menu.
 * RESOT_HIDDEN_MENUS=0 disables them. */
#include "../../port/windows/src/options.h"
/* Retail XBE: the LOA table 0x000DFF90 searches (0x0025B80B, 0x0026F2A0);
 * OVA 22 at pc_VarsBuffer +0xD8 (0x0026F2EC), read at 0x001DC66E and
 * 0x0026F2FE. */
#define RESOT_CHEATS_LOA_TABLE  0x0046EFE8u
#define RESOT_CHEATS_VAR_OFFSET 0xD8u
/* Universe variables of a map change, from RESOT_UNIV_WATCH across Start New
 * Game (map 0x2200B526): mi_CheckPoint_CurMapID +0x118, mi_WorldKeyToLoad
 * +0xF4 (also written by 0x001BC2C2..0x001BC2FA, as the demo's +0x88),
 * mi_ChangeMapRequest +0x108 set to 3, cleared after the load, and
 * mi_CurrentWorldKey +0x134. */
#define RESOT_UNIV_CUR_MAP          0x118u
#define RESOT_UNIV_WORLD_TO_LOAD    0xF4u
#define RESOT_UNIV_CHANGE_MAP       0x108u
#define RESOT_UNIV_CHANGE_MAP_VALUE 3u
#define RESOT_UNIV_CURRENT_WORLD    0x134u
#define RESOT_MAIN_ACTOR            0x0067B6A0u
#define RESOT_PRINCE_DAGGER         0x77Cu
/* mi_CostumeID: the int (flags 0x41, as the demo's) that was 0 in 0101_Entree
 * (PrinceCostume01) and 4 in 7401_HourglassRoom (PrinceCostume05 merged),
 * RESOT_PRINCE_DUMP of both; where the alignment puts the demo's +0x5F8. */
#define RESOT_PRINCE_COSTUME_ID     0x4C4u
/* The running AI instance, compared with the costume source at 0x00270CCA. */
#define RESOT_AI_CURRENT            0x0044AA24u
/* Options > Display > Tutorials: universe +0xC0 followed each change the
 * user made there (1 -> 0 -> 1 -> 0 -> 1 -> 0, RESOT_UNIV_WATCH); compiled
 * code takes its address (0x006A3F80). */
#define RESOT_UNIV_TUTORIALS        0xC0u
/* Start New Game (same watch): +0x110 becomes 0x0A, two polls later +0x118
 * the first map 0x2200B526 (0101_Entree), about 120 polls later +0xF4 the
 * same and +0x108 3; +0x110 returns to 0xFFFFFFFF with the load. +0x110 is
 * the movie the load plays: 0x001BC41C formats it with "Cine_%03d.int"
 * (0x0041F6DC) into 0x00758550, then stores 0xFFFFFFFF (0x001BC486). */
#define RESOT_UNIV_LOAD_MOVIE       0x110u
#define RESOT_UNIV_NEW_GAME_MOVIE   0x0Au
#define RESOT_UNIV_FIRST_MAP        0x2200B526u
/* Host clearance for the first Special Load Map spawn only; BF content
 * keys (s_maps below), not executable addresses. Half a centimetre in the
 * world's metre units. Normal checkpoint retries retain the title's spawn. */
#define RESOT_MAP_SPAWN_LIFT_KEY        0x41002456u
#define RESOT_MAP_SPAWN_LIFT_CHECKPOINT 0x2B006896u
#define RESOT_MAP_SPAWN_LIFT            0.005f
#include "../../port/game/resot_cheats.h"
#include "../../port/game/resot_gate_diag.h"
/* The Prince AI's set-up, 0x00270940: first stack argument the Prince's GAO
 * (ebp at 0x00270953), eax the costume source (ebx at 0x0027094F, tested at
 * 0x00270A13, read at 0x00270CF3). */
void sub_00270940_enter(void)
{
    resot_game_skin_setup(g_eax);
}
extern void sub_000DBDE0_gen(void);
/* Retail XBE: 0x000DBDE0 normalizes ECX's int16 stick pair into EAX's
 * float[2]. Its callers return to 0x000DC0B3 (left) and 0x000DC0C2 (right,
 * ESI-180). Keep the title's radial deadzone and scale only the latter
 * float result: a 200% full keyboard/controller/touch look then reaches 2.0. */
void sub_000DBDE0(void)
{
    uint32_t output=g_eax, ret=GMEM32(g_esp);
    sub_000DBDE0_gen();
    if(ret==0x000DC0C2u)
        resot_scale_look((float *)((uintptr_t)g_xbox_mem_offset+output));
}
extern uint32_t xbox_ContiguousAlloc(uint32_t size, uint32_t alignment);
extern void sub_000F84A0_gen(void);
extern void sub_00039B20_gen(void);
extern void sub_002A2B20(void);
extern void sub_002A3910(void);
extern void sub_002A2670(void);
extern void sub_000182A0(void);
extern void sub_00018310(void);
extern void sub_00116660(void);
extern void sub_00038DD0(void);

typedef union { float f[4]; double d[2]; uint32_t u[4]; int32_t i[4]; uint64_t q[2]; } GuestXmm;
extern RESOT_TLS GuestXmm g_xmm1;          /* the runtime's RecompXmm */

#define MAIN_OPEN_RET      0x00234B42u
#define MAIN_CLOSE_RET     0x00234D8Bu
/* The main page's handle: its open's out argument, read when its first
 * choice is added (at its close the slot held 0xBF800000). */
static uint32_t s_main_page_out, s_main_page;
/* Start New Game's message (kind, parameter, id; seen in a scripted press). */
#define NEW_GAME_MSG_KIND  0x3E7u
#define NEW_GAME_MSG_PARAM 0x3FDu
#define NEW_GAME_MSG_ID    0x32u
#define MAIN_NEXT_OPEN_RET 0x00234DCDu
/* The pause AI's init: the Pause page opens at 0x001A3239 (return
 * 0x001A323E; Continue 0x001A326B, Options 0x001A3297, Quit 0x001A342C),
 * then the Options page at return 0x001A3470, where the pause pages here are
 * built, as the main menu's are at its next page. */
#define PAUSE_OPEN_RET      0x001A323Eu
#define PAUSE_QUIT_ADD_RET  0x001A342Cu
#define PAUSE_NEXT_OPEN_RET 0x001A3470u
#define TEXT_MANAGER       0x007584F0u
#define TEXT_ACTION_VTABLE 0x0041F838u
#define TEXT_NONE          0x0041F4A8u
#define MENU_PAGE_X        0.4f
#define RESOT_TEXT_GROUP   0x0B00FE00u   /* no key of the retail BF: injected */
#define RESOT_MSG_KIND     0x52E5u
#define RESOT_TEXT_SLOT    96u
#define RESOT_TEXTS        128u

static int hidden_menus(void)
{
    static int on = -1;
    if (on < 0) { const char *e = getenv("RESOT_HIDDEN_MENUS"); on = !e || *e != '0'; }
    return on;
}

/* cdecl guest call; generated routines pop their own return address. */
static uint32_t guest_cdecl(void (*fn)(void), const uint32_t *args, int n)
{
    int i;
    for (i = n - 1; i >= 0; i--) { g_esp -= 4; GMEM32(g_esp) = args[i]; }
    g_esp -= 4; GMEM32(g_esp) = 0;
    fn();
    g_esp += 4u * (uint32_t)n;
    return g_eax;
}

static uint32_t f2u(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }

enum { T_ROOT, T_GRAPHICS, T_CONTROLS, T_KEY0, T_KEY1, T_KEY2, T_JOY0, T_JOY1, T_JOY2,
       T_RESET, T_GFX = 10, T_LOOK = 15, T_CHEATS_LABEL = 16, T_MAP_TITLE = 17,
       T_LANG_TITLE = 18, T_KEYS = 20, T_JOYS = 50, T_MAP_PART = 80, T_MAPS = 90,
       T_LANGS = 120 };
/* Language: the three of the USA retail disc, as Xbox language IDs (the
 * launcher's [Game] Language, port/windows/src/options.h). The game reads the
 * language when it starts, so a choice applies at the next start. */
#define LANGS 3
static const int s_lang_ids[LANGS] = { 1, 4, 5 };
static const char *const s_lang_names[LANGS] = { "English", "French", "Spanish" };
static const char *const s_static_texts[] = {
    "reSOT Options", "Graphics", "Controls",
    "Keyboard: move and fight", "Keyboard: actions", "Keyboard: menus and camera",
    "Joystick: move and fight", "Joystick: actions", "Joystick: menus and camera",
    "Reset all bindings",
};
static uint32_t s_text_va;

/* Special Load Map: the map (world list) at the start of each area, by the
 * entry names of the retail prince.bf ("<name>_wol_<key>.bin", key as in
 * resot_cheats.h). No routine of this XBE builds the page its strings name
 * (0x0B0041D2:7-8); this one loads the chosen map as a saved game is, at a
 * checkpoint of its own (resot_map_follow). */
#define MAP_PARTS 3
#define MAP_PER_PART 10
static const char *const s_map_parts[MAP_PARTS] = {
    "Areas 01 to 15", "Areas 21 to 35", "Areas 51 to 91",   /* the font has no '-' */
};
/* Original keys (resot_cheats.h), each as the retail BF's WOLInfo.bin
 * (0x0D0A899F) lists it beside its map (bin entry in the comment). Four
 * earlier guesses from the most frequent word of the BF's data differed
 * from that table: 1201 (0x4D0125D8), 6201 Prison A (0x3200BBF5), 7401
 * (0x1B0059EC) and 8101 Tower Base (0x0101268A).
 * Checkpoints: GAOs of the worlds each list loads (the wol's words whose
 * binarized form is a "_wow_" entry), whose name names a checkpoint or a
 * start position; key in the GAO header (0xEEFFC099, key, ".gao") before the
 * name, read from the BF with the PoP BF Lab reader as a tool. A "Start"
 * one where the map has it, else a TEC checkpoint, else the map's other
 * checkpoint (named in the comment); no Vision, camera or fountain ones.
 * Loaded without one, 1401 Corridor Start faulted in sub_00030990+0x206
 * (user log 2026-10-28): the Prince's sector, [GAO +0x24], still pointed
 * into the menu's freed world; 8101 Tower Base, with only a fountain
 * checkpoint, faulted there too. Their areas are listed by a neighbouring
 * map with a checkpoint: 1401 Cour (0x4D000F5F) and 8101 Bridge Support
 * (0x41006037), keys as WOLInfo.bin lists them. 2601 and 7401 loaded at
 * their checkpoints (user logs); the others were not all seen in game.
 * 1501's base WOL has only FRH_Checkpoint (0x0F00425D); its Enemies WOL,
 * original key 0x2B014DDD in WOLInfo.bin, also contains TEC_Checkpoint
 * (0x0F00425C). 3101's FRH_Checkpoint01_StartPos (0x41005E82) belongs to
 * its Bridge dependency, which also has the real TEC_CheckPoint_00
 * (0x2B006896). The FRH choices loaded without calling Prince set-up in
 * the user's 2026-10-29 31-load log, leaving the menu Prince's head and
 * position. Use the TEC entries that initialize him instead. BF GAO keys
 * are content keys, not XBE addresses; the map keys are from WOLInfo.bin.
 * 0x2200B794 and 0x0F0053D9 are the values the
 * universe held after Start New Game and after MenuBoot's load. */
static const ResotMap s_maps[MAP_PARTS][MAP_PER_PART] = {
    { { "0101 Entree", 0x2200B526u, 0x2200B794u },             /* ff02b526, StartCheckpoint */
      { "0102 Remparts", 0x2200B528u, 0x2200CB57u },           /* ff02b528, Checkpoint_00 */
      { "0103 Hourglass", 0x2200B5AFu, 0x0F0496C6u },          /* ff02b5af, code; CheckpointCine */
      { "0201 Couloir Aller", 0x2200B674u, 0x2200CB63u },      /* ff02b674, Checkpoint_00 */
      { "1101 Hall", 0x4D00138Eu, 0x4D001362u },               /* ff0d138e, 1102_Corridor01 01 */
      { "1102 Corridor 01", 0x4D0006E2u, 0x4D001362u },        /* ff0d06e2, code; Checkpoint01 */
      { "1201 Chambre Sultan Start", 0x4D0425D8u, 0x4D0026F3u }, /* ff0d25d8, Checkpoint01 */
      { "1301 Lobby", 0x4D000D5Bu, 0x4D00F5CBu },              /* ff0d0d5b, DefconRoom 01 */
      { "1401 Cour", 0x4D000F5Fu, 0x4D002774u },               /* ff0d0f5f, TEC_Checkpoint */
      { "1501 Reception Hall", 0x2B014DDDu, 0x0F00425Cu } },   /* ff0b4ddd, TEC_Checkpoint; includes the hall and its enemies */
    { { "2101 Start", 0x0D0024F8u, 0x0D002504u },              /* ff0d24f8, TEC_Checkpoint */
      { "2201 Aviary", 0x2B005C22u, 0x2B0065B8u },             /* ff0b5c22, CheckPoint01 */
      { "2401 Corridor Start", 0x4D006474u, 0x410036B0u },     /* ff0d6474, LowerBath Start */
      { "2501 Ancient Hall", 0x2B005DBAu, 0x2B0065BCu },       /* ff0b5dba, CheckPoint01 */
      { "2601 Bridge", 0x0F003E8Bu, 0x2B006896u },             /* ff0f3e8b, CheckPoint_00 */
      { "3101 Tower", 0x41002456u, 0x2B006896u },              /* ff012456, Bridge TEC_CheckPoint_00 on the tower approach */
      { "3201 Grotte", 0x2200AC02u, 0x2200E14Du },             /* ff02ac02, Checkpoint_01 */
      { "3301 Reservoir", 0x0F00322Bu, 0x41001EF5u },          /* ff0f322b, TEC_StartPos */
      { "3401 Balcony", 0x410052C9u, 0x4100536Au },            /* ff0152c9, Checkpoint_StartPos */
      { "3501 Harem Access", 0x2B0064B5u, 0x2B006488u } },     /* ff0b64b5, WestLinker */
    { { "5102 Great Hall", 0x2B005131u, 0x2B006599u },         /* ff0b5131, TEC_CheckPoint */
      { "6101 Cour", 0x2200A298u, 0x2200A47Fu },               /* ff02a298, Start_Checkpoint */
      { "6201 Prison A", 0x2200BBF5u, 0x2200AB41u },           /* ff02bbf5, Checkpoint_Start */
      { "7201 Cour", 0x2200A642u, 0x0F0053ABu },               /* ff02a642, TEC_Checkpoint */
      { "7301 Ground Floor", 0x2B00569Eu, 0x2B006C94u },       /* ff0b569e, GroudFloor_CheckPoint */
      { "7401 Hourglass Room", 0x2B0059ECu, 0x3F0012D3u },     /* ff0b59ec, sc740_Tomb_StartPos */
      { "7601 Salle", 0x2200BCA7u, 0x60000AF7u },              /* ff02bca7, Checkpoint_00 */
      { "8101 Bridge Support", 0x41006037u, 0x4100587Fu },     /* ff016037, Checkpoint_02 */
      { "8101 Tomb", 0x41002818u, 0x4100283Bu },               /* ff012818, TEC_StartPos */
      { "9101 Farah Room", 0x2B0066FBu, 0x2B0068CFu } },       /* ff0b66fb, CheckPoint01 */
};

static void resot_text(uint32_t index, char *out, unsigned size)
{
    if (index < sizeof s_static_texts / sizeof s_static_texts[0])
        snprintf(out, size, "%s", s_static_texts[index]);
    else if (index >= T_MAP_PART && index < T_MAP_PART + MAP_PARTS)
        snprintf(out, size, "%s", s_map_parts[index - T_MAP_PART]);
    else if (index >= T_MAPS && index < T_MAPS + MAP_PARTS * MAP_PER_PART)
        snprintf(out, size, "%s",
                 s_maps[(index - T_MAPS) / MAP_PER_PART][(index - T_MAPS) % MAP_PER_PART].name);
    else if (index >= T_GFX && index < T_GFX + RESOT_NATIVE_GRAPHICS_ITEMS)
        resot_native_label(RESOT_NATIVE_GRAPHICS, (int)(index - T_GFX), out, size);
    else if (index == T_LOOK)
        resot_native_label(RESOT_NATIVE_CONTROLS, 0, out, size);
    else if (index == T_LANG_TITLE)
        snprintf(out, size, "Language");
    else if (index >= T_LANGS && index < T_LANGS + LANGS) {
        int id = s_lang_ids[index - T_LANGS];
        /* The menu font has no '-' or brackets (s_map_parts): words only. */
        if (id == resot_game_language_next() && id != resot_game_language())
            snprintf(out, size, "%s: at the next start", s_lang_names[index - T_LANGS]);
        else if (id == resot_game_language_next())
            snprintf(out, size, "%s: selected", s_lang_names[index - T_LANGS]);
        else
            snprintf(out, size, "%s", s_lang_names[index - T_LANGS]);
    }
    else if (index >= T_KEYS && index < T_KEYS + RESOT_NATIVE_ACTIONS)
        resot_native_label(RESOT_NATIVE_KEYS, (int)(index - T_KEYS), out, size);
    else if (index >= T_JOYS && index < T_JOYS + RESOT_NATIVE_ACTIONS)
        resot_native_label(RESOT_NATIVE_JOY, (int)(index - T_JOYS), out, size);
    else
        snprintf(out, size, "?");
}

/* A string of the title's own text; "" when the group has none. */
static void game_string(uint32_t group, uint32_t index, char *out, unsigned size)
{
    GuestRegs saved;
    uint32_t s;
    unsigned i;
    regs_save(&saved);
    g_esp -= 0x20;
    GMEM32(g_esp + 0x10) = group;
    GMEM32(g_esp + 0x14) = index;
    g_edi = g_esp + 0x10;
    g_esp -= 4; GMEM32(g_esp) = 0;
    sub_000F84A0_gen();
    s = g_eax == TEXT_NONE ? 0 : g_eax;
    regs_load(&saved);
    for (i = 0; s && i + 1 < size; i++) {
        char c = *(volatile char *)((uintptr_t)g_xbox_mem_offset + s + i);
        if (!c) break;
        out[i] = (c >= 32 && c < 127) ? c : '?';
    }
    out[s ? i : 0] = 0;
}

/* References to RESOT_TEXT_GROUP are answered from a guest buffer that is
 * rewritten at every lookup, so a label shows the setting's current value. */
void sub_000F84A0(void)
{
    uint32_t index;
    char text[RESOT_TEXT_SLOT];
    if (GMEM32(g_edi) != RESOT_TEXT_GROUP) { sub_000F84A0_gen(); return; }
    index = GMEM32(g_edi + 4);
    if (!s_text_va)
        s_text_va = xbox_ContiguousAlloc(RESOT_TEXT_SLOT * RESOT_TEXTS, 16);
    if (!s_text_va || index >= RESOT_TEXTS) {
        g_eax = TEXT_NONE;
    } else {
        if (index == T_CHEATS_LABEL) {
            /* The retail BF keeps the development text group 0x0B00449C:
             * "Cheats" at index 3 (RESOT_TEXT_DUMP); "On"/"Off" are the
             * options' 0x0B0041CD:32/31. */
            char name[32], on[16], off[16];
            game_string(0x0B00449Cu, 3, name, sizeof name);
            game_string(0x0B0041CDu, 32, on, sizeof on);
            game_string(0x0B0041CDu, 31, off, sizeof off);
            resot_cheats_label(name, on, off, text, sizeof text);
        } else if (index == T_MAP_TITLE) {
            game_string(0x0B0041D2u, 8, text, sizeof text);   /* "Special Load Map" */
            if (!text[0])
                snprintf(text, sizeof text, "Special Load Map");
        } else
            resot_text(index, text, sizeof text);
        memcpy((void *)((uintptr_t)g_xbox_mem_offset + s_text_va + index * RESOT_TEXT_SLOT),
               text, strlen(text) + 1);
        g_eax = s_text_va + index * RESOT_TEXT_SLOT;
    }
    g_esp += 4;                           /* ret */
}

enum { DO_OPEN, DO_MSG };
typedef struct { uint32_t text; int what; int arg; uint32_t choice; } NativeChoice;
typedef struct { uint32_t title; float top, step; int n; NativeChoice c[12]; uint32_t page; } NativePage;
enum { P_ROOT, P_GFX, P_CTRL, P_K0, P_K1, P_K2, P_J0, P_J1, P_J2, P_LANG,
       P_MAPS, P_MAP0, P_MAP1, P_MAP2, P_PAGES };
#define MSG_ID(page, item) ((uint32_t)(page) << 8 | (uint32_t)(item))
#define MSG_RESET 0xFF00u
#define MSG_CHEATS 0xFE00u
static const int s_bind_first[3] = { 0, 9, 16 }, s_bind_count[3] = { 9, 7, 9 };
/* The main menu and the pause menu are separate menu objects (the pause AI's
 * init 0x001A3xxx opens its pages on 0x74758F10 where the main menu used
 * 0x74757110 in the same run), so each gets its own reSOT Options pages,
 * built and bound with its own current/menu pair. */
typedef struct {
    const char *name;
    uint32_t menu, cur;               /* edx / eax of its page opens */
    uint32_t root_choice, cheats_choice;   /* cheats: a choice of its root page */
    int built, bound, cheats_bound;
    NativePage pages[P_PAGES];
} MenuCtx;
enum { CTX_MAIN, CTX_PAUSE, CTX_COUNT };
static MenuCtx s_ctx[CTX_COUNT] = { { "main" }, { "pause" } };
static MenuCtx *s_bind_ctx = &s_ctx[CTX_MAIN];   /* the one being built and bound */

static void native_choice(NativePage *p, int i, uint32_t text, int what, int arg)
{
    p->c[i].text = text; p->c[i].what = what; p->c[i].arg = arg; p->c[i].choice = 0;
}

static void native_layout(NativePage *pages)
{
    int i, j;
    NativePage *p;
    memset(pages, 0, sizeof(NativePage) * P_PAGES);
    /* reSOT Options: Graphics, Controls, Cheats, Language, and Special Load Map
     * (main menu only, see native_build_and_bind). */
    p = &pages[P_ROOT]; p->title = T_ROOT; p->top = 0.35f; p->step = 0.0667f; p->n = 5;
    native_choice(p, 0, T_GRAPHICS, DO_OPEN, P_GFX);
    native_choice(p, 1, T_CONTROLS, DO_OPEN, P_CTRL);
    native_choice(p, 2, T_CHEATS_LABEL, DO_MSG, (int)MSG_CHEATS);
    native_choice(p, 3, T_LANG_TITLE, DO_OPEN, P_LANG);
    native_choice(p, 4, T_MAP_TITLE, DO_OPEN, P_MAPS);
    p = &pages[P_LANG]; p->title = T_LANG_TITLE; p->top = 0.3833f; p->step = 0.0667f; p->n = LANGS;
    for (i = 0; i < LANGS; i++)
        native_choice(p, i, T_LANGS + (uint32_t)i, DO_MSG, (int)MSG_ID(P_LANG, i));
    p = &pages[P_GFX]; p->title = T_GRAPHICS; p->top = 0.3833f; p->step = 0.0667f;
    p->n = RESOT_NATIVE_GRAPHICS_ITEMS;
    for (i = 0; i < p->n; i++)
        native_choice(p, i, T_GFX + (uint32_t)i, DO_MSG, (int)MSG_ID(P_GFX, i));
    p = &pages[P_CTRL]; p->title = T_CONTROLS; p->top = 0.3f; p->step = 0.05f; p->n = 8;
    native_choice(p, 0, T_LOOK, DO_MSG, (int)MSG_ID(P_CTRL, 0));
    for (i = 0; i < 6; i++)
        native_choice(p, i + 1, T_KEY0 + (uint32_t)i, DO_OPEN, P_K0 + i);
    native_choice(p, 7, T_RESET, DO_MSG, (int)MSG_RESET);
    p = &pages[P_MAPS]; p->title = T_MAP_TITLE; p->top = 0.3833f; p->step = 0.0667f;
    p->n = MAP_PARTS;
    for (i = 0; i < MAP_PARTS; i++)
        native_choice(p, i, T_MAP_PART + (uint32_t)i, DO_OPEN, P_MAP0 + i);
    for (i = 0; i < MAP_PARTS; i++) {
        p = &pages[P_MAP0 + i];
        p->title = T_MAP_PART + (uint32_t)i; p->top = 0.24f; p->step = 0.05f; p->n = MAP_PER_PART;
        for (j = 0; j < MAP_PER_PART; j++)
            native_choice(p, j, T_MAPS + (uint32_t)(i * MAP_PER_PART + j), DO_MSG,
                          (int)MSG_ID(P_MAP0 + i, j));
    }
    for (i = 0; i < 6; i++) {
        int joy = i >= 3, part = i % 3;
        p = &pages[P_K0 + i];
        p->title = T_KEY0 + (uint32_t)i; p->top = 0.26f; p->step = 0.05f;
        p->n = s_bind_count[part];
        for (j = 0; j < p->n; j++) {
            int action = s_bind_first[part] + j;
            native_choice(p, j, (joy ? T_JOYS : T_KEYS) + (uint32_t)action, DO_MSG,
                          (int)MSG_ID(P_K0 + i, action));
        }
    }
}

static uint32_t menu_add_choice(uint32_t cur, uint32_t menu, uint32_t group, uint32_t index)
{
    GuestRegs saved;
    uint32_t scratch, args[3], choice;
    regs_save(&saved);
    g_esp -= 0x40;
    scratch = g_esp;
    GMEM32(scratch + 0x20) = group;
    GMEM32(scratch + 0x24) = index;
    GMEM32(scratch + 0x30) = 0;
    args[0] = scratch + 0x30; args[1] = menu; args[2] = scratch + 0x20;
    g_eax = cur;
    guest_cdecl(sub_002A3910, args, 3);
    choice = GMEM32(scratch + 0x30);
    regs_load(&saved);
    return choice;
}

static uint32_t native_build_page(uint32_t cur, uint32_t menu, NativePage *p)
{
    GuestRegs saved;
    GuestXmm xmm1 = g_xmm1;
    uint32_t scratch, args[5], page;
    int i;
    regs_save(&saved);
    g_esp -= 0x40;
    scratch = g_esp;
    GMEM32(scratch + 0x20) = RESOT_TEXT_GROUP;
    GMEM32(scratch + 0x24) = p->title;
    GMEM32(scratch + 0x30) = 0;
    args[0] = scratch + 0x30; args[1] = 0; args[2] = f2u(p->top); args[3] = f2u(p->step);
    args[4] = 5;
    g_eax = cur; g_ecx = scratch + 0x20; g_edx = menu;
    g_xmm1.f[0] = MENU_PAGE_X;
    guest_cdecl(sub_002A2B20, args, 5);
    page = GMEM32(scratch + 0x30);
    regs_load(&saved);
    g_xmm1 = xmm1;
    for (i = 0; i < p->n; i++)
        p->c[i].choice = menu_add_choice(cur, menu, RESOT_TEXT_GROUP, p->c[i].text);
    regs_save(&saved);
    args[0] = menu;
    g_eax = cur;
    guest_cdecl(sub_002A2670, args, 1);
    regs_load(&saved);
    return page;
}

static int menu_bind(uint32_t choice, uint32_t action)
{
    GuestRegs saved;
    uint32_t args[3];
    if (!choice || !action)
        return 0;
    regs_save(&saved);
    g_esp -= 0x40;
    GMEM32(g_esp + 0x30) = 0;
    args[0] = g_esp + 0x30; args[1] = action; args[2] = choice;
    g_eax = s_bind_ctx->cur; g_edx = s_bind_ctx->menu;
    guest_cdecl(sub_00116660, args, 3);
    regs_load(&saved);
    return 1;
}

static int menu_bind_open_page(uint32_t choice, uint32_t page)
{
    GuestRegs saved;
    uint32_t args[3], action;
    if (!choice || !page)
        return 0;
    regs_save(&saved);
    args[0] = s_bind_ctx->cur; args[1] = 0; args[2] = 1;
    g_eax = s_bind_ctx->cur; g_ecx = page;
    action = guest_cdecl(sub_000182A0, args, 3);
    regs_load(&saved);
    return menu_bind(choice, action);
}

/* A message action: descriptor kind +0x28, parameter +0x2C, id +0x30. */
static uint32_t menu_message_action_to(uint32_t owner, uint32_t kind, uint32_t param, uint32_t id);
static uint32_t menu_message_action(uint32_t kind, uint32_t param, uint32_t id)
{
    return menu_message_action_to(s_bind_ctx->cur, kind, param, id);
}

/* The same, addressed to owner (stored at the action's +4). */
static uint32_t menu_message_action_to(uint32_t owner, uint32_t kind, uint32_t param, uint32_t id)
{
    GuestRegs saved;
    uint32_t scratch, args[2], action, i;
    regs_save(&saved);
    g_esp -= 0x80;
    scratch = g_esp;
    for (i = 0; i < 0x34; i += 4)
        GMEM32(scratch + 0x40 + i) = 0;
    GMEM32(scratch + 0x40 + 0x28) = kind;
    GMEM32(scratch + 0x40 + 0x2C) = param;
    GMEM32(scratch + 0x40 + 0x30) = id;
    args[0] = owner; args[1] = scratch + 0x40;
    g_eax = owner;
    action = guest_cdecl(sub_00018310, args, 2);
    regs_load(&saved);
    return action;
}

static int menu_bind_message(uint32_t choice, uint32_t id)
{
    return choice && menu_bind(choice, menu_message_action(RESOT_MSG_KIND, 0, id));
}


static void native_build_and_bind(MenuCtx *x, uint32_t menu, uint32_t cur)
{
    NativePage *pages = x->pages;
    int i, j, ok = 0, all = 0, root;
    x->menu = menu;
    x->cur = cur;
    s_bind_ctx = x;
    native_layout(pages);
    /* The pause menu has no Special Load Map: its four pages (33 choices)
     * are not built there. Language, before it, stays. */
    if (x != &s_ctx[CTX_MAIN]) {
        memset(&pages[P_MAPS], 0, sizeof(NativePage) * (P_PAGES - P_MAPS));
        pages[P_ROOT].n = 4;
    }
    for (i = 0; i < P_PAGES; i++)
        if (pages[i].n)
            pages[i].page = native_build_page(cur, menu, &pages[i]);
    for (i = 0; i < P_PAGES; i++)
        for (j = 0; j < pages[i].n; j++) {
            NativeChoice *c = &pages[i].c[j];
            all++;
            ok += c->what == DO_OPEN ? menu_bind_open_page(c->choice, pages[c->arg].page)
                                     : menu_bind_message(c->choice, (uint32_t)c->arg);
            /* A map: after our message (which notes the map), back to the
             * main page and the title's own Start New Game message addressed
             * to the main menu object, as that choice's last message is (head
             * +4); addressed to the current object it was ignored. It closes
             * the menu; the map is requested before its balcony goes on. */
            if (i >= P_MAP0 && i <= P_MAP2 && s_main_page) {
                menu_bind_open_page(c->choice, s_main_page);
                menu_bind(c->choice, menu_message_action_to(menu, NEW_GAME_MSG_KIND,
                                                            NEW_GAME_MSG_PARAM, NEW_GAME_MSG_ID));
            }
        }
    root = menu_bind_open_page(x->root_choice, pages[P_ROOT].page);
    x->cheats_choice = pages[P_ROOT].c[2].choice;
    x->cheats_bound = x->cheats_choice != 0;
    x->built = x->bound = 1;
    fprintf(stderr, "[MENU] reSOT Options (%s menu): %d pages, %d of %d choices bound,"
                    " entry %08X %s\n", x->name, P_PAGES, ok, all, x->root_choice,
            root ? "bound" : "not bound");
}

static void native_ctx_reset(MenuCtx *x)
{
    x->built = x->bound = x->cheats_bound = 0;
    x->root_choice = x->cheats_choice = 0;
}

/* reSOT Options, added to a page being built. Cheats (the built-in switch,
 * resot_cheats.h: no page of this XBE offers the development group's
 * "Cheats") and Special Load Map are choices of its own page, as on the
 * demo, where with them on the game's pages the in-game logo moved. */
static void native_add_entries(MenuCtx *x, uint32_t cur, uint32_t menu)
{
    x->root_choice = menu_add_choice(cur, menu, RESOT_TEXT_GROUP, T_ROOT);
    fprintf(stderr, "[MENU] hidden: \"reSOT Options\" %08X added to the %s page\n",
            x->root_choice, x->name);
}

void sub_002A2B20_enter(void)
{
    if (menu_trace()) {
        char t[80];
        text_dump();
        menu_text(g_ecx, t, sizeof t);
        fprintf(stderr, "[MENU] page open  menu=%08X cur=%08X ret=%08X line=%d top=%g step=%g"
                        " flags=%08X x=%g title=%08X:%u \"%s\"\n",
                g_edx, g_eax, GMEM32(g_esp), (int)GMEM32(g_esp + 8), GMEMF(g_esp + 12),
                GMEMF(g_esp + 16), GMEM32(g_esp + 20), g_xmm1.f[0], g_ecx ? GMEM32(g_ecx) : 0,
                g_ecx ? GMEM32(g_ecx + 4) : 0, t);
    }
    if (!hidden_menus())
        return;
    if (GMEM32(g_esp) == MAIN_OPEN_RET) {          /* a new main menu */
        native_ctx_reset(&s_ctx[CTX_MAIN]);
        s_main_page_out = GMEM32(g_esp + 4);
        s_main_page = 0;
    }
    else if (GMEM32(g_esp) == PAUSE_OPEN_RET)      /* a new pause menu */
        native_ctx_reset(&s_ctx[CTX_PAUSE]);
    else if (GMEM32(g_esp) == MAIN_NEXT_OPEN_RET && s_ctx[CTX_MAIN].root_choice
             && !s_ctx[CTX_MAIN].built)
        native_build_and_bind(&s_ctx[CTX_MAIN], g_edx, g_eax);
    else if (GMEM32(g_esp) == PAUSE_NEXT_OPEN_RET && s_ctx[CTX_PAUSE].root_choice
             && !s_ctx[CTX_PAUSE].built)
        native_build_and_bind(&s_ctx[CTX_PAUSE], g_edx, g_eax);
}

/* Xbox Live is not provided (xbox-retail XBE). The main menu adds its choice
 * at 0x00234D35 (return 0x00234D3A, text 0B008C4E:56) and stores the handle
 * at [ebp+0x288]; the only reader is the bind at 0x00235406 (return
 * 0x0023540B). Skipping both leaves the page as if the title never had it.
 * The skipped add writes handle 0 to its out argument. The skipped bind
 * writes binding 0 and returns as 0x00116660 does (0x00116765-0x00116799):
 * eax/ecx/edx = the [0x758D64]/[0x758D68]/[0x758D6C] values it restores.
 * The pause Options page also adds Xbox Live at 0x001A33F1 (return
 * 0x001A33F6, text group from var+0x544, index var+0x548+0x38), storing
 * its handle at var+0xD4 (0x001A3400). Unlike the main-menu entry, it has
 * no binding in the pause binder 0x001A1610; suppress its add as well.
 * RESOT_XBOX_LIVE_MENU=1 keeps both choices. */
#define LIVE_ADD_RET  0x00234D3Au
#define LIVE_BIND_RET 0x0023540Bu
#define LIVE_PAUSE_ADD_RET 0x001A33F6u
extern void sub_002A3910_gen(void);
extern void sub_00116660_gen(void);
static int hide_live(void)
{
    static int on = -1;
    if (on < 0) { const char *e = getenv("RESOT_XBOX_LIVE_MENU"); on = !(e && *e && *e != '0'); }
    return on;
}
void sub_002A3910(void)
{
    if (hide_live() && (GMEM32(g_esp) == LIVE_ADD_RET ||
                       GMEM32(g_esp) == LIVE_PAUSE_ADD_RET)) {
        GMEM32(GMEM32(g_esp + 4)) = 0;
        g_esp += 4;                                   /* ret (cdecl) */
        return;
    }
    sub_002A3910_gen();
}
void sub_00116660(void)
{
    if (hide_live() && GMEM32(g_esp) == LIVE_BIND_RET && GMEM32(g_esp + 12) == 0) {
        GMEM32(GMEM32(g_esp + 4)) = 0;
        g_eax = GMEM32(0x00758D64u); g_ecx = GMEM32(0x00758D68u); g_edx = GMEM32(0x00758D6Cu);
        g_esp += 4;
        return;
    }
    sub_00116660_gen();
}

void sub_002A3910_enter(void)
{
    char t[80];
    uint32_t ref = GMEM32(g_esp + 12);
    /* The main page's first choice: its open has written the page handle. */
    if (s_main_page_out && !s_main_page) {
        if (!resot_cheats_word(s_main_page_out, &s_main_page))
            s_main_page = 0;
        s_main_page_out = 0;
        fprintf(stderr, "[MENU] main page %08X\n", s_main_page);
    }
    /* Pause page: Cheats and reSOT Options just before Quit. */
    if (GMEM32(g_esp) == PAUSE_QUIT_ADD_RET && hidden_menus() && !s_ctx[CTX_PAUSE].root_choice)
        native_add_entries(&s_ctx[CTX_PAUSE], g_eax, GMEM32(g_esp + 8));
    if (!menu_trace()) return;
    menu_text(ref, t, sizeof t);
    fprintf(stderr, "[MENU] choice     menu=%08X ret=%08X text=%08X:%u \"%s\"\n",
            GMEM32(g_esp + 8), GMEM32(g_esp), ref ? GMEM32(ref) : 0, ref ? GMEM32(ref + 4) : 0, t);
}

void sub_002A2670_enter(void)
{
    if (menu_trace())
        fprintf(stderr, "[MENU] page close ret=%08X arg=%08X\n", GMEM32(g_esp), GMEM32(g_esp + 4));
    if (GMEM32(g_esp) == MAIN_CLOSE_RET && hidden_menus() && !s_ctx[CTX_MAIN].root_choice)
        native_add_entries(&s_ctx[CTX_MAIN], g_eax, GMEM32(g_esp + 4));
}

/* Labels: as in the demo, the refresh runs for our value choices once the
 * options' revision moves, after checking that the choice's text object
 * still carries our reference. */
static int native_label_word(uint64_t va, uint32_t *value)
{
    /* RE-SoT: retail TEXT_MANAGER 0x007584F0 +0x44 indexes main-menu
     * choices; those handles can outlive the menu after a world transition.
     * The native D3D12 pause run faulted reading 0xA7F52955 via an old
     * object's +0x9C. Probe only optional host-label metadata, never catch
     * faults from lifted game execution. Wide arithmetic rejects wraparound. */
    if (!resot_guest_read_word(g_xbox_mem_offset,va,value)) {
        static unsigned logged;
        if (logged++ < 4)
            fprintf(stderr,"[MENU] label refresh skipped unreadable guest word %08X\n",(uint32_t)va);
        return 0;
    }
    return 1;
}
static int native_text_object(uint32_t choice, uint32_t *out)
{
    uint32_t mgr, table, obj, text, it, end;
    if (!choice || !native_label_word(TEXT_MANAGER,&mgr) || !mgr ||
        !native_label_word((uint64_t)mgr+0x44,&table) || !table ||
        !native_label_word((uint64_t)table+(uint64_t)choice*4,&obj) || !obj ||
        !native_label_word((uint64_t)obj+0x9C,&text) || !text ||
        !native_label_word((uint64_t)text+0x0C,&it) ||
        !native_label_word((uint64_t)text+0x10,&end))
        return 0;
    /* Host traversal limit, not an XBE constant: reject stale vector bounds. */
    if (!it || end < it || ((it | end) & 3) || end-it > 65536u)
        return 0;
    for (; it < end; it += 4) {
        uint32_t action, vtable, group;
        if (!native_label_word(it,&action)) return 0;
        if (action && native_label_word(action,&vtable) && vtable == TEXT_ACTION_VTABLE &&
            native_label_word((uint64_t)action+0x34,&group) && group == RESOT_TEXT_GROUP) {
            *out = text;
            return 1;
        }
    }
    return 0;
}

static void native_refresh_text(uint32_t text)
{
    GuestRegs saved;
    regs_save(&saved);
    g_ecx = text; g_eax = 1;
    guest_cdecl(sub_00038DD0, NULL, 0);
    regs_load(&saved);
}

/* RESOT_PRINCE_LIST=1: the list sub_00030990 walks for the main actor,
 * [GAO +0x24] +0x484 count / +0x488 entries, logged when it changes
 * (diagnostic). */
static void prince_list_watch(void)
{
    static int on = -1;
    static uint32_t last_gao, last_owner, last_n, last_arr, last_bad = 0xFFFFFFFFu;
    uint32_t gao, owner, n = 0, arr = 0, i, e, bad = 0, first_bad = 0, w;
    if (on < 0) { const char *v = getenv("RESOT_PRINCE_LIST"); on = v && *v && *v != '0'; }
    if (!on) return;
    if (!resot_cheats_word(0x0067B6A0u, &gao) || !gao || !resot_cheats_word(gao + 0x24, &owner) ||
            !owner || !resot_cheats_word(owner + 0x484, &n) || !resot_cheats_word(owner + 0x488, &arr))
        n = arr = owner = 0;
    for (i = 0; arr && i < n && i < 4096; i++)
        if (!resot_cheats_word(arr + i * 4, &e) || !e || !resot_cheats_word(e + 0x24, &w)) {
            if (!bad++) first_bad = i;
        }
    if (gao == last_gao && owner == last_owner && n == last_n && arr == last_arr && bad == last_bad)
        return;
    last_gao = gao; last_owner = owner; last_n = n; last_arr = arr; last_bad = bad;
    fprintf(stderr, "[PLIST] poll %u gao=%08X owner=%08X n=%u arr=%08X bad=%u (first %u)",
            s_cheats_frames, gao, owner, n, arr, bad, first_bad);
    for (i = 0; arr && i < n && i < 6; i++)
        fprintf(stderr, " %08X", resot_cheats_word(arr + i * 4, &e) ? e : 0xDEADDEADu);
    fprintf(stderr, "\n");
}

static void native_refresh(void)
{
    static long seen;
    long revision;
    int i, j, k, n = 0;
    uint32_t text;
    /* The cheats switch: kept as chosen, and its labels follow it
     * (resot_cheats.h). */
    resot_universe_watch();
    resot_prince_watch();
    resot_prince_dump();
    resot_game_behavior_frame();
    resot_game_skin_frame();
    resot_test_map();
    resot_gate_watch();
    prince_list_watch();
    if (resot_cheats_frame())
        for (k = 0; k < CTX_COUNT; k++)
            if (s_ctx[k].cheats_bound && native_text_object(s_ctx[k].cheats_choice, &text))
                native_refresh_text(text);
    if ((revision = resot_native_revision()) == seen)
        return;
    seen = revision;
    for (k = 0; k < CTX_COUNT; k++) {
        NativePage *pages = s_ctx[k].pages;
        if (!s_ctx[k].bound)
            continue;
        for (i = 0; i < P_PAGES; i++)
            for (j = 0; j < pages[i].n; j++) {
                if (pages[i].c[j].what != DO_MSG
                        || !native_text_object(pages[i].c[j].choice, &text))
                    continue;
                native_refresh_text(text);
                n++;
            }
    }
    if (menu_trace())
        fprintf(stderr, "[MENU] reSOT labels refreshed (%d, revision %ld)\n", n, revision);
}

/* Message action execute: this = ecx, the descriptor copied at +0x24. */
void sub_00039B20(void)
{
    uint32_t self = g_ecx, id;
    if (GMEM32(self + 0x24 + 0x28) != RESOT_MSG_KIND) {
        if (menu_trace()) {
            uint32_t o;
            fprintf(stderr, "[MENU] game message self=%08X ret=%08X head:", self, GMEM32(g_esp));
            for (o = 0; o < 0x24; o += 4)
                fprintf(stderr, " %08X", GMEM32(self + o));
            fprintf(stderr, " desc:");
            for (o = 0; o < 0x34; o += 4)
                fprintf(stderr, " %08X", GMEM32(self + 0x24 + o));
            fprintf(stderr, "\n");
        }
        sub_00039B20_gen();
        return;
    }
    id = GMEM32(self + 0x24 + 0x30);
    if (menu_trace())
        fprintf(stderr, "[MENU] reSOT choice %04X self=%08X ret=%08X\n", id, self, GMEM32(g_esp));
    if (id == MSG_CHEATS)
        resot_cheats_toggle();
    else if ((id >> 8) >= P_MAP0 && (id >> 8) <= P_MAP2 && (id & 0xFF) < MAP_PER_PART) {
        /* The choice's next actions send Start New Game, which closes the
         * menu; the map is loaded at its checkpoint after (resot_map_follow). */
        const ResotMap *m = &s_maps[(id >> 8) - P_MAP0][id & 0xFF];
        resot_map_follow(m->key, m->checkpoint);
    }
    else if (id == MSG_RESET)
        resot_native_reset_bindings();
    else if ((id >> 8) == P_LANG && (id & 0xFF) < LANGS)
        resot_game_language_choose(s_lang_ids[id & 0xFF]);   /* labels follow the revision */
    else if ((id >> 8) == P_GFX)
        resot_native_activate(RESOT_NATIVE_GRAPHICS, (int)(id & 0xFF));
    else if ((id >> 8) == P_CTRL)
        resot_native_activate(RESOT_NATIVE_CONTROLS, (int)(id & 0xFF));
    else if ((id >> 8) >= P_K0 && (id >> 8) <= P_J2)
        resot_native_activate((id >> 8) >= P_J0 ? RESOT_NATIVE_JOY : RESOT_NATIVE_KEYS,
                              (int)(id & 0xFF));
    g_esp += 8;                           /* ret 4 */
}

/* F8 Show triggers (port/game/resot_invisible.h). Retail's visibility routine:
 * 0x00028384 reads GAO+4 and 0x00028390 tests ForceInvisible; its list insertion
 * calls sub_000DEBC0. GEO+0x4C is the vertex resource (0x00310334, passed to
 * sub_000D5BF0), whose +4 is the NV097 vertex array offset (see resot_gate_diag.h). */
#include "../../port/game/resot_triggers.h"
void sub_00028370_enter(void)
{
    resot_invisible_pass(GMEM32(g_esp + 4), 0x4C);
}
void sub_000DEBC0_enter(void)
{
    resot_invisible_restore();
}
/* The camera whose projection sub_000CFC10 builds: its argument, read at
 * 0x000CFC48 as [esp+0x1C] after 0x18 bytes of frame. */
void sub_000CFC10_enter(void)
{
    s_trigger_camera = GMEM32(g_esp + 4);
}
static void resot_triggers_view(void)
{
    resot_triggers_frame(RESOT_JADE_WORLD_LOADED, PROJ_BUILT);
}

/* -- Graphics calls without the pushbuffer (docs/DIRECT-RENDERER.md) --
 *
 * The demo's direct path (source/xbox-demo/target_hooks.c), carried over routine by
 * routine. Each retail routine was aligned with the demo's instruction by instruction
 * (research/xbox-retail/direct-align.json: same instruction shapes in all 76, operands
 * differing only by address); every address, device offset, global and table below is
 * the aligned operand of this XBE. Retail differences: device +4 in 0x770..0x96C, +0x10
 * from 0x970; globals 0x002A8000.. at 0x0037B1B0.. Exceptions checked by hand: 0x0036DFF0
 * (the demo's 0x0029C2B0), Clear's jump tables at 0x0036BBB0, 0x0036BBBC and 0x0036BBD8
 * (entries map onto the aligned code), DrawVertices (absent here). RESOT_DIRECT_DRAW=1.
 *
 * sub_00375B50 is D3D's DrawIndexedVertices(prim, count, indices), ret 0xC. It
 * flushes state with the device's base vertex index (0x00375B5E..0x00375B68), sets
 * device +8 bit 0x800, copies the list into the ring as ARRAY_ELEMENT packets, then
 * clears bits 0x1800 and, if 0x1000 was set, issues a fence (0x00375D7F..0x00375D9C).
 * What replaces the copy keeps all of that. Not taken: while recording (device +8
 * bit 2), where the words must land in the recorded buffer. */
#include "../../port/third_party/xboxrecomp/src/kernel/nv2a_direct.h"
extern void sub_00375B50_gen(void);
extern void sub_00375110(void);
extern void sub_00370400(void);
extern void sub_00370080(void);
static void census(int kind, uint32_t units);
void sub_00375B50(void)
{
    uint32_t prim = GMEM32(g_esp + 4), count = GMEM32(g_esp + 8), indices = GMEM32(g_esp + 12);
    uint32_t dev = GMEM32(D3D_DEVICE_GLOBAL), token, flags, put;

    census(0, count);
    if (!nv2a_direct_mode() || (GMEM32(dev + 8) & 4) ||
        !(token = nv2a_direct_prepare(prim, count, indices))) {
        sub_00375B50_gen();
        return;
    }
    g_ecx = dev;
    g_esp -= 4; GMEM32(g_esp) = GMEM32(dev + 0x1C);
    g_esp -= 4; GMEM32(g_esp) = 0x00375B6Du;
    sub_00375110();
    GMEM32(dev + 8) |= 0x800u;
    g_esp -= 4; GMEM32(g_esp) = 2;
    g_esp -= 4; GMEM32(g_esp) = 0x00375B83u;
    sub_00370400();
    put = g_eax;
    GMEM32(put) = 0x00040000u | NV097_RESOT_DIRECT_RUN;
    GMEM32(put + 4) = token;
    GMEM32(dev) = put + 8;
    flags = GMEM32(dev + 8);
    GMEM32(dev + 8) = flags & 0xFFFFE7FFu;
    if (flags & 0x1000u) {
        g_esp -= 4; GMEM32(g_esp) = 1;
        g_esp -= 4; GMEM32(g_esp) = 0x00375DA1u;
        sub_00370080();
    }
    g_esp += 16;                         /* ret 0xC */
}

/* RESOT_DRAW_CENSUS=1: who calls D3D's draw entries, every 5 s: sub_00375B50
 * DrawIndexedVertices(prim, count, indices), sub_003759E0 DrawVerticesUP(prim, count,
 * data, stride). This XBE has no DrawVertices: kind 1 stays empty. Diagnostic only. */
#define CENSUS_CALLERS 64
static struct { uint32_t ret; uint64_t calls, units, recording; } s_census[3][CENSUS_CALLERS];
static void census(int kind, uint32_t units)
{
    static int on = -1;
    static uint64_t last;
    uint32_t ret;
    if (on < 0) on = getenv("RESOT_DRAW_CENSUS") != NULL;
    if (!on) return;
    ret = GMEM32(g_esp);
    for (int i = 0; i < CENSUS_CALLERS; i++) {
        if (s_census[kind][i].ret == ret || !s_census[kind][i].ret) {
            s_census[kind][i].ret = ret;
            s_census[kind][i].calls++; s_census[kind][i].units += units;
            if (GMEM32(GMEM32(D3D_DEVICE_GLOBAL) + 8) & 4) s_census[kind][i].recording++;
            break;
        }
    }
    {
        uint64_t now = GetTickCount64();
        if (now - last < 5000) return;
        last = now;
        for (int k = 0; k < 3; k++)
            for (int i = 0; i < CENSUS_CALLERS && s_census[k][i].ret; i++)
                if (s_census[k][i].calls > 16)
                    fprintf(stderr, "[CENSUS] %s ret %08X: %llu calls, %llu units, %llu recording\n",
                        k == 0 ? "indexed" : k == 1 ? "arrays" : "up", s_census[k][i].ret,
                        (unsigned long long)s_census[k][i].calls, (unsigned long long)s_census[k][i].units,
                        (unsigned long long)s_census[k][i].recording);
    }
}

/* sub_003759E0 is DrawVerticesUP(prim, count, data, stride), ret 0x10. 0x003752B0
 * computes the walk: words per vertex at device +0xBC8, skip to the first at +0xBCC,
 * skip added to the stride at +0xBD0, count of (words, skip) pairs at +0xC54, pairs
 * from +0xBD4, whose last skip takes the stride sum (0x00375A51). Words are copied
 * here as the original copied them into INLINE_ARRAY packets (0x00375AE6..0x00375AF4);
 * flags and fence as 0x00375A22 and 0x00375B22..0x00375B3A. A refusal after the flush
 * runs the flush again in the original: it recomputes the same values. */
extern void sub_003759E0_gen(void);
extern void sub_003752B0(void);
void sub_003759E0(void)
{
    uint32_t prim = GMEM32(g_esp + 4), count = GMEM32(g_esp + 8), data = GMEM32(g_esp + 12);
    uint32_t stride = GMEM32(g_esp + 16), dev = GMEM32(D3D_DEVICE_GLOBAL);
    uint32_t pairs, skip, token, flags, put, from, *to;

    census(2, count);
    if (!nv2a_direct_mode() || (GMEM32(dev + 8) & 4)) {
        sub_003759E0_gen();
        return;
    }
    g_ecx = dev;
    g_esp -= 4; GMEM32(g_esp) = 0x003759F9u;
    sub_003752B0();
    if (!(to = nv2a_direct_up_begin(prim, count * GMEM32(dev + 0xBC8), &token))) {
        sub_003759E0_gen();
        return;
    }
    pairs = GMEM32(dev + 0xC54);
    from = GMEM32(dev + 0xBCC) + data;
    skip = GMEM32(dev + 0xBD0) + stride;
    GMEM32(dev + 0xBD4 + pairs * 8 - 4) = skip;
    for (uint32_t v = 0; v < count; v++) {
        for (uint32_t p = 0; p < pairs; p++) {
            uint32_t words = GMEM32(dev + 0xBD4 + p * 8);
            for (uint32_t w = 0; w < words; w++, from += 4) *to++ = GMEM32(from);
            from += GMEM32(dev + 0xBD8 + p * 8);
        }
    }
    GMEM32(dev + 8) |= 0x800u;
    g_esp -= 4; GMEM32(g_esp) = 2;
    g_esp -= 4; GMEM32(g_esp) = 0x00375A94u;
    sub_00370400();
    put = g_eax;
    GMEM32(put) = 0x00040000u | NV097_RESOT_DIRECT_UP;
    GMEM32(put + 4) = token;
    GMEM32(dev) = put + 8;
    flags = GMEM32(dev + 8);
    GMEM32(dev + 8) = flags & 0xFFFFE7FFu;
    if (flags & 0x1000u) {
        g_esp -= 4; GMEM32(g_esp) = 1;
        g_esp -= 4; GMEM32(g_esp) = 0x00375B3Fu;
        sub_00370080();
    }
    g_esp += 20;                         /* ret 0x10 */
}

/* sub_00376AD0 is RunPushBuffer(buffer, fixup), ret 8. Where it thinks the buffer idle
 * (0x00376B61, from the GPU time) it writes a JUMP into the ring and patches the
 * buffer's closing JUMP to return after it (0x00376A30). Fences are published ahead
 * of the walk here (resot_ordered_fences), so a second run can repatch the same
 * buffer before the executor has read the first: the first run then returned past
 * its PUT into the ring's previous lap, consumed tokens and all, and floats were read
 * as commands (demo logs: JUMP at 0x8002B5B8, closing JUMP to 0x8002B7A0, PUT
 * 0x8002B698, then a black scene). Tokens make that likely by leaving the title far
 * less to write between runs. So with them on, what was written is consumed first.
 * Here KickOff (0x0036FF60) is asynchronous by default (RESOT_KICK_AHEAD=1):
 * xbox_Nv2aCaughtUp also waits for every issued kick to be scanned and for the
 * fences recorded with it to be published.
 *
 * That wait held the title for a quarter to a third of its samples (RESOT_PROFILE_MS,
 * 2026-11-02): it drained the executor at every call. So the buffer is no longer run
 * where it lies. Its fix-ups are applied as 0x00376A30 applies them, then its words
 * are copied behind one token, as D3D itself copies buffers flagged so (0x00376D40):
 * nothing in the ring points into the buffer, and it may be patched again at once.
 * The bookkeeping is the idle branch's: run stamp +0x14 from device +0x54
 * (0x00376BA8), device +0x3C and the fence past 0x0037DDE0 (0x00376CA9..0x00376CCE),
 * time stamps +8 (0x00376D22..0x00376D36). A buffer whose words are not plain method
 * packets (a JUMP, CALL or RETURN in it), or too long for a slot, takes the old way. */
extern void sub_00376AD0_gen(void);
extern int xbox_Nv2aCaughtUp(void);
static uint32_t ring_room(uint32_t dev, uint32_t ret);
static int pushbuffer_is_methods(uint32_t from, uint32_t n)
{
    for (uint32_t at = 0; at < n; ) {
        uint32_t w = GMEM32(from + at * 4), count = (w >> 18) & 0x7FFu;
        if ((w & 0x00030003u) || ((w & 0xE0000000u) && (w & 0xE0000000u) != 0x40000000u) || at + 1 + count > n)
            return 0;
        at += 1 + count;
    }
    return 1;
}
void sub_00376AD0(void)
{
    uint32_t dev = GMEM32(D3D_DEVICE_GLOBAL), buffer = GMEM32(g_esp + 4), fixup = GMEM32(g_esp + 8);
    uint32_t data, bytes, n, token = 0, put, *to = NULL;
    static unsigned copied, refused;
    static int in_place;                 /* a run in place may still be read from the buffer */

    if (!nv2a_direct_mode() || (GMEM32(dev + 8) & 4) || (int32_t)GMEM32(buffer) < 0) {
        sub_00376AD0_gen();
        return;
    }
    g_ecx = dev;
    g_esp -= 4; GMEM32(g_esp) = 0;
    g_esp -= 4; GMEM32(g_esp) = 0x00376AE7u;
    sub_00375110();
    if (in_place) {                      /* before any fix-up: as the old way */
        g_ecx = dev;
        g_esp -= 4; GMEM32(g_esp) = 0x00376AD0u;
        sub_0036FF60();
        while (!xbox_Nv2aCaughtUp()) Sleep(0);
        in_place = 0;
    }
    data = GMEM32(buffer + 4);
    bytes = GMEM32(buffer + 0xC) - 4;
    n = bytes / 4;
    if (fixup) {
        uint32_t rec = GMEM32(fixup + 4) + GMEM32(fixup + 0xC), size;
        while ((size = GMEM32(rec)) != 0xFFFFFFFFu) {
            memcpy((uint8_t *)(uintptr_t)g_xbox_mem_offset + data + GMEM32(rec + 4),
                   (const uint8_t *)(uintptr_t)g_xbox_mem_offset + rec + 8, size);
            rec += 8 + size;
        }
    }
    if (!n || !pushbuffer_is_methods(data, n) || !(to = nv2a_direct_up_begin(0, n, &token))) {
        if (refused++ < 4)
            fprintf(stderr, "[DIRECT] RunPushBuffer %08X (%u words) run in place\n", buffer, n);
        g_ecx = dev;
        g_esp -= 4; GMEM32(g_esp) = 0x00376AD0u;
        sub_0036FF60();
        while (!xbox_Nv2aCaughtUp()) Sleep(0);
        sub_00376AD0_gen();
        in_place = 1;
        return;
    }
    if (!copied++)
        fprintf(stderr, "[DIRECT] RunPushBuffer: buffers copied behind a token\n");
    memcpy(to, (const uint8_t *)(uintptr_t)g_xbox_mem_offset + data, (size_t)n * 4);
    put = ring_room(dev, 0x00376B48u);
    GMEM32(put) = 0x00040000u | NV097_RESOT_DIRECT_PACKETS;
    GMEM32(put + 4) = token;
    GMEM32(dev) = put + 8;
    GMEM32(buffer + 0x14) = GMEM32(dev + 0x54);
    GMEM32(dev + 0x3C) += bytes;
    if (GMEM32(dev + 0x3C) > GMEM32(0x0037DDE0u)) {
        g_esp -= 4; GMEM32(g_esp) = 0;
        g_esp -= 4; GMEM32(g_esp) = 0x00376CCEu;
        sub_00370080();
    }
    GMEM32(buffer + 8) = GMEM32(dev + 0x2C);
    if (fixup) GMEM32(fixup + 8) = GMEM32(dev + 0x2C);
    g_esp += 12;                         /* ret 8 */
}

/* sub_003741B0 is the state flush's fog step (device), ret 4, called only from
 * 0x003750D3, so a token here sits exactly where its packets sat. It calls 0x0036EF10,
 * then derives the fog from 0x0037B520 enable, 0x0037B524 mode, 0x0037B528 start,
 * 0x0037B52C end, 0x0037B530 density (0x003741CC..0x0037428A). Methods 0x02A0 and 0x09C8
 * have no consumer in the runtime and are not carried. The final combiner it may
 * write (0x003742F2..0x00374312, 0x0037435E..0x0037437C) is its own token. Recording
 * stays in the original. */
extern void sub_003741B0_gen(void);
extern void sub_0036EF10(void);
extern void sub_00370400(void);
static double fog_float(uint32_t va) { uint32_t v = GMEM32(va); float f; memcpy(&f, &v, 4); return f; }
void sub_003741B0(void)
{
    uint32_t dev = GMEM32(g_esp + 4), enable, mode = 0x2601, token, put, *to, p0, p1;
    float f0 = 1.0f, f1 = 1.0f;

    if (!nv2a_direct_mode() || (GMEM32(dev + 8) & 4)) {
        sub_003741B0_gen();
        return;
    }
    g_ecx = dev;
    g_esp -= 4; GMEM32(g_esp) = 0x003741BFu;
    sub_0036EF10();
    enable = GMEM32(0x0037B520u);
    if (enable) {
        uint32_t table = GMEM32(0x0037B524u);
        double start = fog_float(0x0037B528u), end = fog_float(0x0037B52Cu), density = fog_float(0x0037B530u);
        if (table == 3) {
            double one = fog_float(0x00429344u);
            double k = start == end ? fog_float(0x0037A338u) : one / (end - start);
            f0 = (float)(end * k + one);
            f1 = (float)-k;
        } else if (table) {
            f0 = 1.5f;                       /* 0x00374268 */
            f1 = (float)(density * fog_float(table == 1 ? 0x00418A88u : 0x00418A84u));
            mode = table == 1 ? 0x800u : 0x801u;
        }
    }
    if (!(to = nv2a_direct_up_begin(0, 4, &token))) {
        sub_003741B0_gen();
        return;
    }
    memcpy(&p0, &f0, 4); memcpy(&p1, &f1, 4);
    to[0] = enable ? 1u : 0u; to[1] = mode; to[2] = p0; to[3] = p1;
    g_esp -= 4; GMEM32(g_esp) = 5;
    g_esp -= 4; GMEM32(g_esp) = 0x0037429Au;
    sub_00370400();
    put = g_eax;
    GMEM32(put) = 0x00040000u | NV097_RESOT_DIRECT_FOG;
    GMEM32(put + 4) = token;
    put += 8;
    if (!GMEM32(dev + 0x784) || !GMEM32(dev + 0x788)) {
        uint32_t two_sided = GMEM32(0x0037B54Cu) != 0;
        GMEM32(put) = 0x00040000u | NV097_RESOT_DIRECT_FINAL;
        GMEM32(put + 4) = enable ? 0x130C0300u + (two_sided ? 0x20000u : 0u) : 0xCu + (two_sided ? 2u : 0u);
        put += 8;
    }
    GMEM32(dev) = put;
    g_esp += 8;                          /* ret 4 */
}

/* sub_0036A390 is SetRenderTarget(colour, zeta), ret 8; a null colour keeps the current
 * one. Everything but its surface packets is called as the original calls it, in order
 * (0x0036A3B4..0x0036A42B, 0x0036A555, 0x0036A5D7..0x0036A5F5). The packets at
 * 0x0036A470..0x0036A545 write pitch and both offsets twice with NOPs and waits, which
 * nothing in the runtime reads; so does 0x032C. The pitch's derivation is 0x0036A479..
 * 0x0036A4EB. FLIP_STALL (0x0036A5A5..0x0036A5C8) and 0x0290 stay in the ring. */
extern void sub_0036A390_gen(void);
extern void sub_0036BD30(void);
extern void sub_0036BEC0(void);
extern void sub_00371930(void);
extern void sub_0036A1D0(void);
extern void sub_0036D930(void);
extern void sub_00371810(void);
extern void sub_0036DA60(void);
extern void sub_0036D100(void);
extern void sub_003703F0(void);
static void surface_release(uint32_t dev, uint32_t surface, uint32_t ret)
{
    uint32_t owner = GMEM32(surface + 0x14) ? GMEM32(surface + 0x14) : surface;
    GMEM32(owner + 8) = GMEM32(dev + 0x2C);
    g_esp -= 4; GMEM32(g_esp) = surface;
    g_esp -= 4; GMEM32(g_esp) = ret;
    sub_0036BEC0();
}
void sub_0036A390(void)
{
    uint32_t colour = GMEM32(g_esp + 4), zeta = GMEM32(g_esp + 8), dev = GMEM32(D3D_DEVICE_GLOBAL);
    uint32_t token, put, pitch, flags, *to;

    if (!nv2a_direct_mode() || (GMEM32(dev + 8) & 4) || !(to = nv2a_direct_up_begin(0, 4, &token))) {
        sub_0036A390_gen();
        return;
    }
    if (!colour) colour = GMEM32(dev + 0x1A04);
    g_esp -= 4; GMEM32(g_esp) = colour;
    g_esp -= 4; GMEM32(g_esp) = 0x0036A3B9u;
    sub_0036BD30();
    if (GMEM32(dev + 0x1A04)) surface_release(dev, GMEM32(dev + 0x1A04), 0x0036A3DEu);
    {
        uint32_t old_zeta = GMEM32(dev + 0x1A08);
        GMEM32(dev + 0x1A04) = colour;
        if (old_zeta) surface_release(dev, old_zeta, 0x0036A409u);
    }
    GMEM32(dev + 0x1A08) = zeta;
    if (zeta) {
        g_esp -= 4; GMEM32(g_esp) = zeta;
        g_esp -= 4; GMEM32(g_esp) = 0x0036A41Du;
        sub_0036BD30();
        g_esp -= 4; GMEM32(g_esp) = dev + 0x948;
        g_esp -= 4; GMEM32(g_esp) = zeta;
        g_esp -= 4; GMEM32(g_esp) = 0x0036A42Au;
        sub_00371930();
        g_esp -= 4; GMEM32(g_esp) = zeta;
        g_esp -= 4; GMEM32(g_esp) = 0x0036A430u;
        sub_0036A1D0();
        GMEM32(dev + 0x94C) = g_eax;
    }
    if (GMEM32(colour + 0x10)) {
        pitch = ((GMEM32(colour + 0x10) >> 24) + 1) << 6;
    } else {
        uint32_t width = 1u << ((GMEM32(colour + 0xC) >> 20) & 0xF);
        uint32_t format = (GMEM32(colour + 0xC) >> 8) & 0xFF;
        if (format == 0xC) pitch = width * 2;
        else if (format == 0xE || format == 0xF) pitch = width * 4;
        else pitch = (((GMEM32(0x003791F0u + (format & ~3u)) >> ((format & 3) * 8)) & 0x3C) * width) >> 3;
    }
    to[0] = (GMEM32(dev + 0x94C) << 16) | (pitch & 0xFFFFu);
    to[1] = GMEM32(colour + 4);
    to[2] = zeta ? GMEM32(zeta + 4) : 0;
    to[3] = GMEM32(0x0037B5ECu) && GMEM32(dev + 0x1A08);
    put = GMEM32(dev);
    if (put >= GMEM32(dev + 4)) {
        g_esp -= 4; GMEM32(g_esp) = 0x0036A442u;
        sub_003703F0();
        put = g_eax;
    }
    GMEM32(put) = 0x00040000u | NV097_RESOT_DIRECT_SURFACE;
    GMEM32(put + 4) = token;
    put += 8;
    flags = GMEM32(dev + 8);
    if ((flags & 0x100u) && colour == GMEM32(dev + 0x1A14)) {
        GMEM32(dev + 8) = flags & 0xFFFFFEFFu;
        GMEM32(put) = 0x00040130u;
        GMEM32(put + 4) = 0;
        put += 8;
    }
    GMEM32(dev) = put;
    g_esp -= 4; GMEM32(g_esp) = zeta;
    g_esp -= 4; GMEM32(g_esp) = colour;
    g_esp -= 4; GMEM32(g_esp) = 0x0036A5DCu;
    sub_00371810();
    GMEM32(dev + 0x1A0C) = g_eax;
    g_ecx = dev; g_edx = 0x00379158u;
    g_esp -= 4; GMEM32(g_esp) = 0x0036A5EEu;
    sub_0036DA60();
    g_esp -= 4; GMEM32(g_esp) = GMEM32(0x0037B62Cu);
    g_esp -= 4; GMEM32(g_esp) = 0x0036A5FAu;
    sub_0036D100();
    g_esp += 12;                         /* ret 8 */
}

/* sub_00371550(resource, flags), ret 8: 0x1710 at 0x0037156D has no consumer in the
 * runtime, so with the direct path it is not written. The rest is 0x0037157F..0x00371598. */
extern void sub_00371550_gen(void);
extern void sub_003704F0(void);
void sub_00371550(void)
{
    uint32_t resource = GMEM32(g_esp + 4), flags = GMEM32(g_esp + 8);

    if (!nv2a_direct_mode() || (GMEM32(GMEM32(D3D_DEVICE_GLOBAL) + 8) & 4)) {
        sub_00371550_gen();
        return;
    }
    if (!(flags & 0xA0u)) {
        g_esp -= 4; GMEM32(g_esp) = resource;
        g_esp -= 4; GMEM32(g_esp) = 0x0037158Eu;
        sub_003704F0();
    }
    g_eax = GMEM32(resource + 4) | 0x80000000u;
    g_esp += 12;                         /* ret 8 */
}

/* -- Render state setters (0x0036CE70..0x0036E1F0) --
 *
 * Each keeps its stores and calls. A method the runtime reads becomes a token in the
 * same place in the ring; one it does not read (no case in nv2a_pb_exec.c or
 * nv2a_hw_d3d11.inc, and listed unhandled in the logs) is no longer written. Recording
 * stays in the original: those words must land in the recorded buffer. */
#define DIRECT_OFF(dev) (!nv2a_direct_mode() || (GMEM32((dev) + 8) & 4))
#define D3D_DEV GMEM32(D3D_DEVICE_GLOBAL)
static uint32_t ring_room(uint32_t dev, uint32_t ret)
{
    uint32_t put = GMEM32(dev);
    if (put >= GMEM32(dev + 4)) {
        g_esp -= 4; GMEM32(g_esp) = ret;
        sub_003703F0();
        put = g_eax;
    }
    return put;
}
static void direct_token(uint32_t dev, uint32_t ret, uint32_t method, uint32_t param)
{
    uint32_t put = ring_room(dev, ret);
    GMEM32(put) = 0x00040000u | method;
    GMEM32(put + 4) = param;
    GMEM32(dev) = put + 8;
}
/* Keeps a routine's ring words out of the ring: they go to a slot behind one token.
 * Room first, so that the routine does not kick what it is writing; a kick all the
 * same (seen from the count) means the words stay where they are, which is the old
 * path. Not for routines that can reach a fence: D3D patches those words in the ring
 * (0x003701F4). Nested captures belong to the outermost. */
extern long xbox_Nv2aKickTotal(void);
static int s_capture_depth;
static uint32_t s_capture_put;
static long s_capture_kicks;
static void capture_begin(uint32_t dev, uint32_t ret)
{
    uint32_t ecx = g_ecx, edx = g_edx;   /* some of these routines take them as arguments */
    if (s_capture_depth++) return;
    g_esp -= 4; GMEM32(g_esp) = 0x400;
    g_esp -= 4; GMEM32(g_esp) = ret;
    sub_00370400();
    s_capture_put = ring_room(dev, ret);
    GMEM32(dev) = s_capture_put;
    s_capture_kicks = xbox_Nv2aKickTotal();
    g_ecx = ecx; g_edx = edx;
}
static void capture_end(uint32_t dev, uint32_t ret)
{
    uint32_t end = GMEM32(dev), saved = g_eax, n, token, *to;
    if (--s_capture_depth) return;
    if (end <= s_capture_put || xbox_Nv2aKickTotal() != s_capture_kicks) return;
    n = (end - s_capture_put) / 4;
    if (n > 65536u) return;
    while (!(to = nv2a_direct_up_begin(0, n, &token))) Sleep(1);
    for (uint32_t i = 0; i < n; i++) to[i] = GMEM32(s_capture_put + i * 4);
    GMEM32(s_capture_put) = 0x00040000u | NV097_RESOT_DIRECT_PACKETS;
    GMEM32(s_capture_put + 4) = token;
    GMEM32(dev) = s_capture_put + 8;
    g_eax = saved;
    (void)ret;
}
static uint32_t guest_byte(uint32_t va) { return (GMEM32(va & ~3u) >> ((va & 3) * 8)) & 0xFFu; }
extern void sub_0036CE70_gen(void);
void sub_0036CE70(void)                  /* 0x0320, 0x0324 */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0036CE70_gen(); return; }
    GMEM32(0x0037B60Cu) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0036CEB0_gen(void);
void sub_0036CEB0(void)                  /* 0x1E6C */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0036CEB0_gen(); return; }
    GMEM32(0x0037B620u) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0036CEF0_gen(void);
void sub_0036CEF0(void)                  /* FOG_COLOR, R and B swapped as 0x0036CF08..0x0036CF28 */
{
    uint32_t dev = D3D_DEV, v = GMEM32(g_esp + 4);
    if (DIRECT_OFF(dev)) { sub_0036CEF0_gen(); return; }
    direct_token(dev, 0x0036CF04u, NV097_RESOT_DIRECT_FOG_COLOR,
        ((v >> 16) & 0xFFu) | ((v & 0xFFu) << 16) | (v & 0xFF00FF00u));
    GMEM32(0x0037B5D8u) = v;
    g_esp += 8;
}
static void cull_state(uint32_t dev, uint32_t v, uint32_t ret)
{
    direct_token(dev, ret, NV097_RESOT_DIRECT_CULL,
        v ? ((0x404u + (v != GMEM32(0x0037B5F8u))) << 16) | 1u : 0u);
    GMEM32(0x0037B5FCu) = v;
}
extern void sub_0036CF40_gen(void);
void sub_0036CF40(void)                  /* CULL_FACE_ENABLE, CULL_FACE */
{
    uint32_t dev = D3D_DEV;
    if (DIRECT_OFF(dev)) { sub_0036CF40_gen(); return; }
    cull_state(dev, GMEM32(g_esp + 4), 0x0036CF53u);
    g_esp += 8;
}
extern void sub_0036CFB0_gen(void);
void sub_0036CFB0(void)                  /* FRONT_FACE, then 0x0036CF40 with the current cull */
{
    uint32_t dev = D3D_DEV, v = GMEM32(g_esp + 4);
    if (DIRECT_OFF(dev)) { sub_0036CFB0_gen(); return; }
    direct_token(dev, 0x0036CFC3u, NV097_RESOT_DIRECT_FRONT, v);
    GMEM32(0x0037B5F8u) = v;
    cull_state(dev, GMEM32(0x0037B5FCu), 0x0036CF53u);
    g_esp += 8;
}
extern void sub_0036CFF0_gen(void);
void sub_0036CFF0(void)                  /* 0x03A4 */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0036CFF0_gen(); return; }
    GMEM32(0x0037B1A8u) |= 0x200u;
    GMEM32(0x0037B5E8u) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0036D090_gen(void);
void sub_0036D090(void)                  /* 0x0380; its value is derived only for the method */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0036D090_gen(); return; }
    GMEM32(0x0037B624u) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0036D100_gen(void);
void sub_0036D100(void)                  /* 0x0110 and NOP 8 or 0x28, which only the logs read */
{
    uint32_t dev = D3D_DEV, v = GMEM32(g_esp + 4), want = 0;
    if (DIRECT_OFF(dev)) { sub_0036D100_gen(); return; }
    if ((guest_byte(0x003791F0u + guest_byte(GMEM32(dev + 0x1A04) + 0xD)) & 0x3Cu) == 0x20u) want = v;
    if (want != (GMEM32(dev + 8) & 1u)) GMEM32(dev + 8) ^= 1u;
    GMEM32(0x0037B62Cu) = v;
    g_esp += 8;
}
extern void sub_0036D200_gen(void);
void sub_0036D200(void)                  /* 0x17BC */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0036D200_gen(); return; }
    GMEM32(0x0037B608u) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0036D260_gen(void);
void sub_0036D260(void)                  /* 0x038C */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0036D260_gen(); return; }
    GMEM32(0x0037B5DCu) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0036D2B0_gen(void);
void sub_0036D2B0(void)                  /* 0x038C */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0036D2B0_gen(); return; }
    GMEM32(0x0037B5E0u) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0036D310_gen(void);
void sub_0036D310(void)                  /* 0x17C4, 0x038C */
{
    uint32_t v = GMEM32(g_esp + 4);
    if (DIRECT_OFF(D3D_DEV)) { sub_0036D310_gen(); return; }
    if (v) GMEM32(0x0037B1A8u) |= 0x9000u;
    GMEM32(0x0037B5E4u) = v;
    g_esp += 8;
}
extern void sub_0036D390_gen(void);
void sub_0036D390(void)                  /* 0x0328 */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0036D390_gen(); return; }
    GMEM32(0x0037B1A8u) |= 0x200u;
    GMEM32(0x0037B5D4u) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0036DDC0_gen(void);
extern void sub_0036CD30(void);
extern void sub_0036D740(void);
void sub_0036DDC0(void)                  /* DEPTH_TEST_ENABLE; 0x1D78 unread. Tail as 0x0036DE0C.. */
{
    uint32_t dev = D3D_DEV, v = GMEM32(g_esp + 4), old;
    if (DIRECT_OFF(dev)) { sub_0036DDC0_gen(); return; }
    direct_token(dev, 0x0036DDD3u, NV097_RESOT_DIRECT_DEPTH_TEST, v && GMEM32(dev + 0x1A08));
    old = GMEM32(0x0037B5ECu);
    GMEM32(0x0037B5ECu) = v;
    if (old == 2 || v == 2) {
        g_esp -= 4; GMEM32(g_esp) = 0x0036DE26u;
        sub_0036CD30();
        g_ecx = dev;
        g_esp -= 4; GMEM32(g_esp) = 0x0036DE2Du;
        sub_0036EF10();
        capture_begin(dev, 0x0036DE39u);
        g_edx = GMEM32(dev); g_ecx = dev;
        g_esp -= 4; GMEM32(g_esp) = 0x0036DE49u;
        sub_0036D740();
        GMEM32(dev) = g_eax;
        capture_end(dev, 0x0036DE49u);
    }
    g_esp += 8;
}
extern void sub_0036DE50_gen(void);
void sub_0036DE50(void)                  /* 0x1D84, 0x032C */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0036DE50_gen(); return; }
    GMEM32(0x0037B5F0u) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0036DEE0_gen(void);
void sub_0036DEE0(void)                  /* 0x1D84, 0x0370 */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0036DEE0_gen(); return; }
    GMEM32(0x0037B5F4u) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0036DF80_gen(void);
void sub_0036DF80(void)                  /* 0x1D84 */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0036DF80_gen(); return; }
    GMEM32(0x0037B634u) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0036DFF0_gen(void);
void sub_0036DFF0(void)                  /* 0x1D84 */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0036DFF0_gen(); return; }
    GMEM32(0x0037B638u) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0036E120_gen(void);
void sub_0036E120(void)                  /* 0x1D7C unread; the calls as 0x0036E133, 0x0036E186 */
{
    uint32_t dev = D3D_DEV;
    if (DIRECT_OFF(dev)) { sub_0036E120_gen(); return; }
    GMEM32(0x0037B610u) = GMEM32(g_esp + 4);
    g_ecx = dev;
    g_esp -= 4; GMEM32(g_esp) = 0x0036E138u;
    sub_0036EF10();
    capture_begin(dev, 0x0036E182u);
    g_edx = GMEM32(dev); g_ecx = dev;
    g_esp -= 4; GMEM32(g_esp) = 0x0036E18Bu;
    sub_0036D740();
    GMEM32(dev) = g_eax;
    capture_end(dev, 0x0036E18Bu);
    g_esp += 8;
}
extern void sub_0036E1A0_gen(void);
void sub_0036E1A0(void)                  /* 0x1D7C */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0036E1A0_gen(); return; }
    GMEM32(0x0037B614u) = GMEM32(g_esp + 4);
    g_esp += 8;
}
extern void sub_0036E1F0_gen(void);
void sub_0036E1F0(void)                  /* 0x1D7C */
{
    if (DIRECT_OFF(D3D_DEV)) { sub_0036E1F0_gen(); return; }
    GMEM32(0x0037B628u) = GMEM32(g_esp + 4);
    g_esp += 8;
}

/* -- State flush steps whose methods nothing reads (called from 0x00375090) --
 *
 * Fixed-function state: the runtime has no case for these methods, and each routine
 * only writes the ring. Fog is 0x003741B0 above; the texture, combiner and vertex
 * array steps have consumers and are separate. */
extern void sub_00373AD0_gen(void);
void sub_00373AD0(void)                  /* 0x0318, 0x043C, 0x0A30 */
{
    if (DIRECT_OFF(GMEM32(g_esp + 4))) { sub_00373AD0_gen(); return; }
    g_esp += 8;
}
extern void sub_00374390_gen(void);
void sub_00374390(void)                  /* 0x0420 and the texture matrices */
{
    if (DIRECT_OFF(GMEM32(g_esp + 4))) { sub_00374390_gen(); return; }
    g_esp += 8;
}
extern void sub_00374E90_gen(void);
void sub_00374E90(void)                  /* 0x0480, 0x0580, 0x0680 */
{
    if (DIRECT_OFF(GMEM32(g_esp + 4))) { sub_00374E90_gen(); return; }
    g_esp += 12;
}
/* sub_00374B40(device, flags), lighting: 0x0294, 0x0298, 0x0314, 0x03B8, 0x03BC and the
 * lights through 0x00374A00, 0x00374840, 0x00374750. Its one store is the result of
 * 0x00373A30 at device +0x7D0 (0x00374BED), under the tests 0x00374B5C..0x00374BA3. */
extern void sub_00374B40_gen(void);
extern void sub_00373A30(void);
void sub_00374B40(void)
{
    uint32_t dev = GMEM32(g_esp + 4), flags = GMEM32(g_esp + 8);
    if (DIRECT_OFF(dev)) { sub_00374B40_gen(); return; }
    if ((flags & 0x1000u) && !(GMEM32(GMEM32(dev + 0x794) + 4) & 0x12u) && GMEM32(0x0037B548u) &&
        (GMEM32(dev + 0x1928) & 0xFFFFFFEFu) != 1u) {
        g_esp -= 4; GMEM32(g_esp) = 0x00374BEDu;
        sub_00373A30();
        GMEM32(dev + 0x7D0) = g_eax;
    }
    g_esp += 12;
}

/* -- Vertex arrays and texture stages --
 *
 * A slot request cannot fail for want of slots (nv2a_direct.inc); these routines have
 * already changed device state by the time they need one, so they wait instead. */
static uint32_t *direct_slot(uint32_t words, uint32_t *token)
{
    uint32_t *to;
    while (!(to = nv2a_direct_up_begin(0, words, token))) Sleep(1);
    return to;
}
extern void sub_00375090(void);
/* sub_00375110(base index), ecx device, ret 4: 0x00375144..0x00375295. Formats come from the
 * vertex shader's attribute table, offsets from each attribute's stream at the table
 * 0x0037DAF0 (stride, offset, buffer). A base index of 0 only skips the multiply. */
extern void sub_00375110_gen(void);
void sub_00375110(void)
{
    uint32_t dev = g_ecx, base = GMEM32(g_esp + 4), dirty, shader, map, *to, token;

    if (DIRECT_OFF(dev)) { sub_00375110_gen(); return; }
    dirty = GMEM32(0x0037B1A8u);
    GMEM32(0x0037B1A8u) = dirty & 0xFFFFFFAFu;
    if (dirty & 0x3FFFFF8Fu) {
        g_esp -= 4; GMEM32(g_esp) = 0x00375138u;
        sub_00375090();
    }
    if ((dirty & 0x40000000u) || (!(dirty & 0x40u) && GMEM32(dev + 0x20) == base)) {
        g_esp += 8;
        return;
    }
    GMEM32(dev + 0x20) = base;
    shader = GMEM32(dev + 0x794);
    map = 0x0042C8A0u + (GMEM32(shader + 4) & 0x10u);
    to = direct_slot(34, &token);
    to[0] = (dirty & 0x10u) != 0;
    to[17] = 0;
    for (uint32_t i = 0; i < 16; i++) {
        uint32_t attr = shader + guest_byte(map + i) * 16, stream = 0x0037DAF0u + GMEM32(attr + 0x14) * 12;
        uint32_t format = GMEM32(attr + 0x1C), buffer = GMEM32(stream + 8);
        to[1 + i] = (GMEM32(stream) << 8) + format;
        if (format != 2 && buffer) {
            to[17] |= 1u << i;
            to[18 + i] = GMEM32(stream) * base + GMEM32(buffer + 4) + GMEM32(attr + 0x18) + GMEM32(stream + 4);
        }
    }
    direct_token(dev, 0x0037517Fu, NV097_RESOT_DIRECT_VERTEX_STATE, token);
    g_esp += 8;                          /* ret 4 */
}
/* sub_003752B0, ecx device, ret: the formats for inline vertices, and the walk through
 * them that DrawVerticesUP copies by (0x003752D4..0x003753E2). */
extern void sub_003752B0_gen(void);
void sub_003752B0(void)
{
    uint32_t dev = g_ecx, dirty = GMEM32(0x0037B1A8u), shader, map, *to, token;
    uint32_t pairs = 0, words = 0, end = 0, first = 0;

    if (DIRECT_OFF(dev)) { sub_003752B0_gen(); return; }
    if (dirty & 0x3FFFFF8Fu) {
        g_esp -= 4; GMEM32(g_esp) = 0x003752C7u;
        sub_00375090();
        dirty = GMEM32(0x0037B1A8u);
    }
    if (!(dirty & 0x20u)) {
        g_esp += 4;
        return;
    }
    GMEM32(0x0037B1A8u) = (dirty & 0xFFFFFFDFu) | 0x50u;
    shader = GMEM32(dev + 0x794);
    map = 0x0042C8A0u + (GMEM32(shader + 4) & 0x10u);
    to = direct_slot(34, &token);
    to[0] = 1;
    to[17] = 0;
    for (uint32_t i = 0; i < 16; i++) {
        uint32_t attr = shader + guest_byte(map + i) * 16, format = GMEM32(attr + 0x1C);
        to[1 + i] = format;
        if (format != 2) {
            uint32_t at = GMEM32(attr + 0x18);
            uint32_t n = (guest_byte(0x00379434u + ((format >> 4) & 0xF)) * guest_byte(0x0037942Cu + (format & 0xF)) + 3) >> 2;
            if (!pairs) {
                first = at;
                GMEM32(dev + 0xBD4) = n;
                pairs = 1;
            } else if (at == end) {
                GMEM32(dev + 0xBCC + pairs * 8) += n;
            } else {
                GMEM32(dev + 0xBD0 + pairs * 8) = at - end;
                GMEM32(dev + 0xBD4 + pairs * 8) = n;
                pairs++;
            }
            words += n;
            end = at + n * 4;
        }
    }
    GMEM32(dev + 0xBC8) = words;
    GMEM32(dev + 0xC54) = pairs;
    GMEM32(dev + 0xBCC) = first;
    GMEM32(dev + 0xBD0) = first - end;
    direct_token(dev, 0x00375310u, NV097_RESOT_DIRECT_VERTEX_STATE, token);
    g_esp += 4;                          /* ret */
}
/* sub_0036F170(declaration, streams, table), ret 0xC: a null declaration has no ring
 * words and stays as it is. Otherwise 0x0036F1EC..0x0036F314. */
extern void sub_0036F170_gen(void);
extern void sub_0036BC50(void);
void sub_0036F170(void)
{
    uint32_t decl = GMEM32(g_esp + 4), count = GMEM32(g_esp + 8), table = GMEM32(g_esp + 12);
    uint32_t dev = D3D_DEV, held, *to, token;

    if (!decl || DIRECT_OFF(dev)) { sub_0036F170_gen(); return; }
    for (uint32_t i = 0; i < count; i++) GMEM32(GMEM32(table + i * 12)) += 0x80000u;
    held = 0;
    while (held < GMEM32(dev + 0xB04)) {
        uint32_t buffer = GMEM32(dev + 0xB08 + held * 12), refs;
        GMEM32(buffer + 8) = GMEM32(dev + 0x2C);
        refs = GMEM32(buffer) + 0xFFF80000u;
        GMEM32(buffer) = refs;
        if (!(refs & 0x0078FFFFu)) {
            g_esp -= 4; GMEM32(g_esp) = buffer;
            g_esp -= 4; GMEM32(g_esp) = 0x0036F246u;
            sub_0036BC50();
        }
        held++;
    }
    GMEM32(0x0037B1A8u) = (GMEM32(0x0037B1A8u) & 0xFFFFFF8Fu) | 0x40000000u;
    GMEM32(dev + 0xB00) = decl;
    GMEM32(dev + 0xB04) = count;
    for (uint32_t i = 0; i < count * 3; i++) GMEM32(dev + 0xB08 + i * 4) = GMEM32(table + i * 4);
    to = direct_slot(34, &token);
    to[0] = 1;
    to[17] = 0xFFFFu;
    for (uint32_t i = 0; i < 16; i++) {
        uint32_t at = decl + 0x13 + i * 16;
        uint32_t stream = table + GMEM32(at) * 12;
        to[18 + i] = GMEM32(at + 4) + GMEM32(GMEM32(stream) + 4) + GMEM32(stream + 8);
        to[1 + i] = (GMEM32(stream + 4) << 8) + GMEM32(at + 8);
    }
    direct_token(dev, 0x0036F2A9u, NV097_RESOT_DIRECT_VERTEX_STATE, token);
    g_esp += 16;                         /* ret 0xC */
}
/* sub_00373FC0(device, stages), ret 8: for each set bit, a stage's address, control0 and
 * filter from its render-state block at 0x0037B1B4 + 0x80 per stage, and the copy at
 * device +0x774 (0x00373FFB..0x00374168). */
extern void sub_00373FC0_gen(void);
extern void sub_00371630(void);
void sub_00373FC0(void)
{
    uint32_t dev = GMEM32(g_esp + 4), stages = GMEM32(g_esp + 8);

    if (DIRECT_OFF(dev)) { sub_00373FC0_gen(); return; }
    for (uint32_t i = 0; i < 4; i++) {
        uint32_t s = 0x0037B1B4u + i * 0x80, copy = dev + 0x774 + i * 4;
        uint32_t address, control, filter, mag, min, extra = 0x2000, bias, token, *to;
        float lod;
        if (!(stages >> i & 1)) continue;
        address = (((GMEM32(s + 4) << 8) | GMEM32(s)) << 8) |
            GMEM32(0x0037B538u + (GMEM32(s + 0x6C) & 0xFFFFu) * 4) | GMEM32(s - 4);
        control = (GMEM32(s + 0x18) << 26) | GMEM32(s + 0x28) | GMEM32(s + 0x20) | 0x3FFC0u;
        if (GMEM32(copy + 0x814)) control |= 0x40000000u;
        mag = GMEM32(s + 0xC);
        min = GMEM32(s + 8);
        if (mag >= 3 || min >= 3) {
            if (mag <= 3 && min <= 3) {
                uint32_t aniso = GMEM32(s + 0x1C);
                if (!aniso) mag = min = 1;
                else { control |= (aniso - 1) << 4; mag = min = 2; }
            } else {
                if (mag == 5 || min == 5) extra = 0x4000;
                extra |= 0x70000u;
                mag = 2; min = 4;
            }
        }
        GMEM32(copy) = control | 0x40000000u;
        lod = (float)(((double)fog_float(s + 0x14) + fog_float(dev + 0x968)) * fog_float(0x00429368u) + fog_float(0x00429354u));
        memcpy(&bias, &lod, 4);
        g_esp -= 4; GMEM32(g_esp) = bias;
        g_esp -= 4; GMEM32(g_esp) = 0x003740E6u;
        sub_00371630();
        bias = g_eax;
        if ((int32_t)bias < -4096) bias = 0xFFFFF000u;
        else if ((int32_t)bias > 0xFFF) bias = 0xFFFu;
        filter = (bias & 0x1FFFu) | GMEM32(0x00379408u + (GMEM32(s + 0x10) + mag * 3) * 4) | (min << 24) |
            (GMEM32(s + 0x2C) >= 0x19 ? 0xC0000000u : GMEM32(s + 0x24)) | extra;
        to = direct_slot(4, &token);
        to[0] = i; to[1] = address; to[2] = control; to[3] = filter;
        direct_token(dev, 0x00374145u, NV097_RESOT_DIRECT_TEXTURE, token);
    }
    g_esp += 12;                         /* ret 8 */
}

/* -- Routines captured, not rewritten (capture_begin) --
 *
 * Checked: none of these reaches a fence, a kick or an indirect call through direct
 * calls. They still build NV2A methods; the executor decodes them from the slot. */

/* -- Combiner programs, immediate mode, scissor, clear -- */
static uint32_t round_guest(double v)
{
    float f = (float)v;
    uint32_t bits;
    memcpy(&bits, &f, 4);
    g_esp -= 4; GMEM32(g_esp) = bits;
    g_esp -= 4; GMEM32(g_esp) = 0x00371630u;
    sub_00371630();
    return g_eax;
}
/* 0x0036D6D0, bump-environment words: from the texture stage blocks, or the program's
 * shadow blocks when a combiner program is set. */
static void bump_state(uint32_t dev, uint32_t ret)
{
    uint32_t token, *to = direct_slot(18, &token), from = 0x0037B208u + (GMEM32(dev + 0x784) ? 0x80u : 0u);
    for (uint32_t s = 0; s < 3; s++, from += 0x80)
        for (uint32_t i = 0; i < 6; i++)
            to[s * 6 + i] = GMEM32(from + i * 4);
    direct_token(dev, ret, NV097_RESOT_DIRECT_BUMP, token);
}
/* sub_0036D030(factor), ret 4: both factors of all stages, when no program is set. */
extern void sub_0036D030_gen(void);
void sub_0036D030(void)
{
    uint32_t dev = D3D_DEV, v = GMEM32(g_esp + 4);
    if (DIRECT_OFF(dev)) { sub_0036D030_gen(); return; }
    if (!GMEM32(dev + 0x784))
        direct_token(dev, 0x0036D04Du, NV097_RESOT_DIRECT_FACTOR, v);
    GMEM32(0x0037B600u) = v;
    g_esp += 8;
}
/* sub_00375480(program), ret 4, SetPixelShader: stores as the original; 0x1E74 and 0x1E78
 * have no consumer. */
extern void sub_00375480_gen(void);
void sub_00375480(void)
{
    uint32_t dev = D3D_DEV, program = GMEM32(g_esp + 4), old, object, combined, token, *to;

    if (DIRECT_OFF(dev)) { sub_00375480_gen(); return; }
    old = GMEM32(dev + 0x784);
    GMEM32(dev + 0x784) = program;
    if (!program) {
        GMEM32(0x0037B1A8u) |= 0x4800u;
        if (GMEM32(dev + 0x788)) GMEM32(0x0037B1A8u) |= 0x2000u;
        g_esp -= 4; GMEM32(g_esp) = GMEM32(0x0037B600u);
        g_esp -= 4; GMEM32(g_esp) = 0x003754D4u;
        sub_0036D030();
        bump_state(dev, 0x003754E0u);
        g_esp += 8;
        return;
    }
    object = GMEM32(program + 8);
    combined = GMEM32(object + 0x24) | GMEM32(object + 0x20);
    if (!combined && GMEM32(dev + 0x788)) GMEM32(0x0037B1A8u) |= 0x2000u;
    GMEM32(dev + 0x788) = combined;
    GMEM32(dev + 0x78C) = GMEM32(object + 0xEC) & 0x100u;
    GMEM32(dev + 0x790) = GMEM32(object + 0xD8);
    GMEM32(0x0037B1A8u) |= 0x4000u;
    if (!(GMEM32(dev + 8) & 0x10u)) {
        for (uint32_t i = 0; i < 0x39; i++) GMEM32(0x0037B3B0u + i * 4) = GMEM32(object + i * 4);
        GMEM32(0x0037B5D0u) = GMEM32(object + 0xD8);
    }
    if (!old) bump_state(dev, 0x00375561u);
    to = direct_slot(0x3A, &token);
    to[0] = combined != 0;
    for (uint32_t i = 0; i < 0x39; i++) to[1 + i] = GMEM32(object + i * 4);
    direct_token(dev, 0x00375561u, NV097_RESOT_DIRECT_COMBINER, token);
    g_esp += 8;                          /* ret 4 */
}
static void immediate(uint32_t dev, uint32_t ret, uint32_t method, const uint32_t *v, uint32_t n)
{
    uint32_t token, *to = direct_slot(n + 1, &token);
    to[0] = method;
    for (uint32_t i = 0; i < n; i++) to[1 + i] = v[i];
    direct_token(dev, ret, NV097_RESOT_DIRECT_IMMEDIATE, token);
}
extern void sub_00375DB0_gen(void);
void sub_00375DB0(void)                  /* SetVertexData2f(register, x, y), ret 0xC */
{
    uint32_t dev = D3D_DEV, v[2];
    if (DIRECT_OFF(dev)) { sub_00375DB0_gen(); return; }
    v[0] = GMEM32(g_esp + 8); v[1] = GMEM32(g_esp + 12);
    immediate(dev, 0x00375DC3u, 0x1880 + GMEM32(g_esp + 4) * 8, v, 2);
    g_esp += 16;
}
extern void sub_00375DF0_gen(void);
void sub_00375DF0(void)                  /* SetVertexData4f(register or -1, x, y, z, w), ret 0x14 */
{
    uint32_t dev = D3D_DEV, reg = GMEM32(g_esp + 4), v[4];
    if (DIRECT_OFF(dev)) { sub_00375DF0_gen(); return; }
    for (uint32_t i = 0; i < 4; i++) v[i] = GMEM32(g_esp + 8 + i * 4);
    immediate(dev, 0x00375E03u, reg == 0xFFFFFFFFu ? 0x1518u : (reg + 0x1A0u) << 4, v, 4);
    g_esp += 24;
}
extern void sub_00375E50_gen(void);
void sub_00375E50(void)                  /* SetVertexDataColor(register, colour), ret 8; R and B swap */
{
    uint32_t dev = D3D_DEV, c = GMEM32(g_esp + 8), v;
    if (DIRECT_OFF(dev)) { sub_00375E50_gen(); return; }
    v = ((c >> 16) & 0xFFu) | ((c & 0xFFu) << 16) | (c & 0xFF00FF00u);
    immediate(dev, 0x00375E64u, 0x1940 + GMEM32(g_esp + 4) * 4, &v, 1);
    g_esp += 12;
}
extern void sub_00375EA0_gen(void);
void sub_00375EA0(void)                  /* Begin(prim), ret 4 */
{
    uint32_t dev = D3D_DEV;
    if (DIRECT_OFF(dev)) { sub_00375EA0_gen(); return; }
    g_esp -= 4; GMEM32(g_esp) = 0x00375EACu;
    sub_00375090();
    direct_token(dev, 0x00375EB8u, NV097_RESOT_DIRECT_BEGIN, GMEM32(g_esp + 4));
    GMEM32(dev + 8) |= 0x800u;
    g_esp += 8;
}
/* sub_0036B0C0(count, flags, rects), ret 0xC, SetScissors: only the surface clip has a
 * consumer (0x0036B0F0..0x0036B22F, 0x0036B285..0x0036B2A6). Rectangles and count are
 * kept at device +0x1B80 and +0x1C00, as 0x0036B382..0x0036B3B2. */
extern void sub_0036B0C0_gen(void);
void sub_0036B0C0(void)
{
    uint32_t dev = D3D_DEV, count = GMEM32(g_esp + 4), flags = GMEM32(g_esp + 8), rects = GMEM32(g_esp + 12);
    uint32_t horizontal, vertical, token, *to;
    double sx = fog_float(dev + 0x95C), sy = fog_float(dev + 0x960), half = fog_float(0x00429354u);

    if (DIRECT_OFF(dev)) { sub_0036B0C0_gen(); return; }
    if (!count) {
        uint32_t x = round_guest((double)GMEM32(dev + 0xEE0) * sx + half);
        uint32_t y = round_guest((double)GMEM32(dev + 0xEE4) * sy + half);
        uint32_t w = round_guest((double)GMEM32(dev + 0xEE8) * sx + half);
        uint32_t h = round_guest((double)GMEM32(dev + 0xEEC) * sy + half);
        horizontal = (w << 16) | x; vertical = (h << 16) | y;
    } else if (count == 1 && !flags) {
        uint32_t x = round_guest((double)(int32_t)GMEM32(rects) * sx + half);
        uint32_t y = round_guest((double)(int32_t)GMEM32(rects + 4) * sy + half);
        uint32_t w = round_guest((double)(int32_t)GMEM32(rects + 8) * sx + half) - x;
        uint32_t h = round_guest((double)(int32_t)GMEM32(rects + 12) * sy + half) - y;
        horizontal = (w << 16) | x; vertical = (h << 16) | y;
    } else {
        horizontal = GMEM32(dev + 0x954) << 16; vertical = GMEM32(dev + 0x958) << 16;
    }
    to = direct_slot(2, &token);
    to[0] = horizontal; to[1] = vertical;
    direct_token(dev, 0x0036B0F0u, NV097_RESOT_DIRECT_CLIP, token);
    for (uint32_t i = 0; i < count * 4; i++) GMEM32(dev + 0x1B80 + i * 4) = GMEM32(rects + i * 4);
    GMEM32(dev + 0x1C00) = count;
    GMEM32(dev + 0x1C04) = flags;
    g_esp += 16;
}
/* sub_0036D990, ret: 0x0036DA03..0x0036DA57 pokes the GPU's microcode constants through
 * the clear registers; nothing models them, and the next clear rewrites those fields. */
extern void sub_0036D990_gen(void);
void sub_0036D990(void)
{
    uint32_t dev = D3D_DEV;
    if (DIRECT_OFF(dev)) { sub_0036D990_gen(); return; }
    GMEM32(dev + 0x2428) = (GMEM32(dev + 0x2428) & 0xFFFFFFF7u) | (GMEM32(0x0037B644u) ? 8u : 0u);
    GMEM32(dev + 0x242C) = (GMEM32(dev + 0x242C) & 0xE7EFFFFFu) | (GMEM32(0x0037B63Cu) ? 0x100000u : 0u) |
        (GMEM32(0x0037B640u) ? 0x8000000u : 0u);
    g_esp += 4;
}
/* sub_0036B810(count, rects, flags, colour, z, stencil), ret 0x18, Clear. The two jump
 * tables (0x0036BBB0, 0x0036BBD8) are read where the original reads them. */
extern void sub_0036B810_gen(void);
extern void sub_00371810(void);
void sub_0036B810(void)
{
    uint32_t dev = D3D_DEV, count = GMEM32(g_esp + 4), rects = GMEM32(g_esp + 8), flags = GMEM32(g_esp + 12);
    uint32_t colour = GMEM32(g_esp + 16), zbits = GMEM32(g_esp + 20), stencil = GMEM32(g_esp + 24);
    uint32_t target, zeta, format, restore = 0, depth = 0;
    int32_t left, top, right, bottom;
    uint32_t whole[4];

    if (DIRECT_OFF(dev)) { sub_0036B810_gen(); return; }
    zeta = GMEM32(dev + 0x1A08);
    target = GMEM32(dev + 0x1A04);
    format = guest_byte(target + 0xD);
    if (guest_byte(0x003791F0u + format) & 1u) {
        g_esp -= 4; GMEM32(g_esp) = zeta;
        g_esp -= 4; GMEM32(g_esp) = target;
        g_esp -= 4; GMEM32(g_esp) = 0x0036B849u;
        sub_00371810();
        restore = g_eax;
        direct_token(dev, 0x0036B86Au, NV097_RESOT_DIRECT_FORMAT, (restore & 0xFFFFFDFFu) | 0x100u);
    }
    if ((flags & 0xF0u) && format >= 3 && format - 3 <= 0x19) {
        uint32_t to = GMEM32(0x0036BBB0u + guest_byte(0x0036BBBCu + format - 3) * 4);
        if (to == 0x0036B89Eu)
            colour = ((((colour >> 3) & 0x1F0000u) | (colour & 0xFC00u)) >> 2 | (colour & 0xF8u)) >> 3;
        else if (to == 0x0036B8BBu)
            colour = ((((colour >> 3) & 0x1F0000u) | (colour & 0xF800u)) >> 3 | (colour & 0xF8u)) >> 3;
    }
    if (!zeta) {
        flags &= 0xFFFFFFFCu;
        if (!flags) { g_esp += 28; return; }
    }
    if (flags & 1u) {
        uint32_t to = GMEM32(0x0036BBD8u + (guest_byte(zeta + 0xD) - 0x2A) * 4);
        float z;
        memcpy(&z, &zbits, 4);
        if (to == 0x0036B90Du) {
            int32_t v = (int32_t)round_guest((double)z * fog_float(0x00429508u));
            depth = v < 0 ? 0 : v > 0xFFFF ? 0xFFFFu : (uint32_t)v;
        } else if (to == 0x0036B93Fu) {
            int32_t v = (int32_t)round_guest((double)z * fog_float(0x00418A78u));
            depth = (v < 0 ? 0 : v > 0xFFFFFF ? 0xFFFFFFu : (uint32_t)v) << 8;
        } else if ((to == 0x0036B971u || to == 0x0036B9A9u) && zbits != GMEM32(0x00429350u)) {
            uint32_t words[2];
            double wide;
            memcpy(words, (const void *)((uintptr_t)g_xbox_mem_offset + (to == 0x0036B971u ? 0x00418A70u : 0x00418A68u)), 8);
            memcpy(&wide, words, 8);
            wide *= (double)z;
            memcpy(words, &wide, 8);
            depth = to == 0x0036B971u ? ((words[1] >> 8) - 0x8000u) & 0xFFFFu
                                      : ((words[1] + 0xF8000000u) & 0xFFFFFFF0u) << 4;
        }
    }
    left = (int32_t)GMEM32(dev + 0xEE0); top = (int32_t)GMEM32(dev + 0xEE4);
    right = left + (int32_t)GMEM32(dev + 0xEE8); bottom = top + (int32_t)GMEM32(dev + 0xEEC);
    whole[0] = (uint32_t)left; whole[1] = (uint32_t)top; whole[2] = (uint32_t)right; whole[3] = (uint32_t)bottom;
    for (uint32_t i = 0; i < (count ? count : 1u); i++) {
        int32_t x0 = (int32_t)(count ? GMEM32(rects + i * 16) : whole[0]);
        int32_t y0 = (int32_t)(count ? GMEM32(rects + i * 16 + 4) : whole[1]);
        int32_t x1 = (int32_t)(count ? GMEM32(rects + i * 16 + 8) : whole[2]);
        int32_t y1 = (int32_t)(count ? GMEM32(rects + i * 16 + 12) : whole[3]);
        double sx = fog_float(dev + 0x95C), sy = fog_float(dev + 0x960), half = fog_float(0x00429354u);
        uint32_t token, *to;
        if (x0 < left) x0 = left;
        if (y0 < top) y0 = top;
        if (x1 > right) x1 = right;
        if (y1 > bottom) y1 = bottom;
        if (x0 >= x1 || y0 >= y1) continue;
        {
            uint32_t ax = round_guest(x0 * sx + half), bx = round_guest(x1 * sx + half);
            uint32_t ay = round_guest(y0 * sy + half), by = round_guest(y1 * sy + half);
            to = direct_slot(5, &token);
            to[0] = ((bx << 16) - 0x10000u) | ax;
            to[1] = ((by << 16) - 0x10000u) | ay;
            to[2] = depth | stencil;
            to[3] = colour;
            to[4] = flags;
            direct_token(dev, 0x0036BB0Du, NV097_RESOT_DIRECT_CLEAR, token);
        }
    }
    if (restore) direct_token(dev, 0x0036BB96u, NV097_RESOT_DIRECT_FORMAT, restore);
    g_esp += 28;                         /* ret 0x18 */
}

/* sub_0036EB00(ecx first register, edx source, count words), ret 4: 0x0036EB1A..0x0036EB47,
 * and 0x0036EB4A.. for whole packets of 16. */
extern void sub_0036EB00_gen(void);
void sub_0036EB00(void)
{
    uint32_t dev = D3D_DEV, first = g_ecx, from = g_edx, count = GMEM32(g_esp + 4), token, *to;
    if (DIRECT_OFF(dev) || !count) { sub_0036EB00_gen(); return; }
    to = direct_slot(count + 1, &token);
    to[0] = first;
    for (uint32_t i = 0; i < count; i++) to[1 + i] = GMEM32(from + i * 4);
    direct_token(dev, 0x0036EB1Au, NV097_RESOT_DIRECT_CONSTANTS, token);
    g_esp += 8;
}

/* -- Vertex programs --
 *
 * RESOT_DIRECT_PROGRAMS=0 returns these to the captured form, for comparison. */
static int programs_typed(void)
{
    static int on = -1;
    if (on < 0) { const char *e = getenv("RESOT_DIRECT_PROGRAMS"); on = !(e && *e == '0'); }
    return on;
}
extern void sub_0036E460(void);
extern void sub_0036E320(void);
/* 0x0036D740 takes the ring in edx and returns it: its callers each hold it open. */
static void viewport_captured(uint32_t dev, uint32_t ret)
{
    g_edx = ring_room(dev, ret); g_ecx = dev;
    g_esp -= 4; GMEM32(g_esp) = ret;
    sub_0036D740();
    GMEM32(dev) = g_eax;
}
static void program_words_token(uint32_t dev, uint32_t ret, uint32_t slot, uint32_t from, uint32_t count)
{
    uint32_t token, *to = direct_slot(count + 1, &token);
    to[0] = slot;
    for (uint32_t i = 0; i < count; i++) to[1 + i] = GMEM32(from + i * 4);
    direct_token(dev, ret, NV097_RESOT_DIRECT_PROGRAM, token);
}
/* A shader object's body at +0x114 is ring words already: packets of up to 32 slots of
 * 0x0B00 (log: 00800B00 first, 205 words for 200 of program). Only their payload is
 * program; loaded whole, the headers shifted it and left a program with no inputs. */
static int program_is_packets(uint32_t from, uint32_t count)
{
    for (uint32_t at = 0; at < count; ) {
        uint32_t w = GMEM32(from + at * 4), n = (w >> 18) & 0x7FFu;
        if ((w & 0xFFFC0003u & ~(0x7FFu << 18)) || (w & 0x1FFCu) != 0x0B00u || !n || at + 1 + n > count) return 0;
        at += 1 + n;
    }
    return 1;
}
static void program_packets_token(uint32_t dev, uint32_t ret, uint32_t slot, uint32_t from, uint32_t count)
{
    uint32_t token, *to = direct_slot(count + 1, &token), out = 1;
    to[0] = slot;
    for (uint32_t at = 0; at < count; ) {
        uint32_t n = (GMEM32(from + at * 4) >> 18) & 0x7FFu;
        at++;
        for (uint32_t i = 0; i < n; i++) to[out++] = GMEM32(from + at++ * 4);
    }
    /* The slot is freed by its own size: only what was copied is program. */
    nv2a_direct_up_trim(token, out);
    direct_token(dev, ret, NV097_RESOT_DIRECT_PROGRAM, token);
}
/* sub_0036EC90(handle, slot), ret 8, LoadVertexShader. */
extern void sub_0036EC90_gen(void);
void sub_0036EC90(void)
{
    uint32_t dev = D3D_DEV, handle = GMEM32(g_esp + 4), slot = GMEM32(g_esp + 8), object = handle - 1;
    if (DIRECT_OFF(dev)) { sub_0036EC90_gen(); return; }
    if (!programs_typed() || !program_is_packets(object + 0x114, GMEM32(object + 0xC))) {
        capture_begin(dev, 0x0036EC90u); sub_0036EC90_gen(); capture_end(dev, 0x0036EC90u); return;
    }
    if (!(GMEM32(dev + 8) & 0x10u)) {
        g_esp -= 4; GMEM32(g_esp) = slot;
        g_esp -= 4; GMEM32(g_esp) = object;
        g_esp -= 4; GMEM32(g_esp) = 0x0036ECB1u;
        sub_0036E460();
    }
    program_packets_token(dev, 0x0036ECBDu, slot, object + 0x114, GMEM32(object + 0xC));
    g_esp += 12;
}
/* sub_0036EEB0(words, count), ret 8. */
extern void sub_0036EEB0_gen(void);
void sub_0036EEB0(void)
{
    uint32_t dev = D3D_DEV;
    if (DIRECT_OFF(dev) || !GMEM32(g_esp + 8)) { sub_0036EEB0_gen(); return; }
    if (!programs_typed()) { capture_begin(dev, 0x0036EEB0u); sub_0036EEB0_gen(); capture_end(dev, 0x0036EEB0u); return; }
    program_words_token(dev, 0x0036EEC3u, 0, GMEM32(g_esp + 4), GMEM32(g_esp + 8));
    g_esp += 12;
}
/* sub_0036ECF0(handle, slot), ret 8, SelectVertexShader. */
extern void sub_0036ECF0_gen(void);
void sub_0036ECF0(void)
{
    uint32_t dev = D3D_DEV, handle = GMEM32(g_esp + 4), slot = GMEM32(g_esp + 8);
    if (DIRECT_OFF(dev)) { sub_0036ECF0_gen(); return; }
    if (!programs_typed()) { capture_begin(dev, 0x0036ECF0u); sub_0036ECF0_gen(); capture_end(dev, 0x0036ECF0u); return; }
    if (handle) {
        uint32_t was = GMEM32(GMEM32(dev + 0x794) + 4), object = handle - 1;
        GMEM32(dev + 0x794) = object;
        GMEM32(dev + 0x798) = handle;
        GMEM32(0x0037B1A8u) |= 0x70u;
        if ((GMEM32(object + 4) ^ was) & 0x13u) {
            GMEM32(0x0037B1A8u) |= 0x1000u;
            viewport_captured(dev, 0x0036ED48u);
            direct_token(dev, 0x0036ED3Fu, NV097_RESOT_DIRECT_MODE,
                0x80000000u | (6u << 8) | (GMEM32(object + 4) & 1u));
        }
    }
    direct_token(dev, 0x0036ED70u, NV097_RESOT_DIRECT_START, slot);
    GMEM32(dev + 0x79C) = slot;
    g_esp += 12;
}
/* sub_0036F000(handle), ret 4, SetVertexShader. 0x194C..0x1960 have no consumer. */
extern void sub_0036F000_gen(void);
void sub_0036F000(void)
{
    uint32_t dev = D3D_DEV, handle = GMEM32(g_esp + 4), shader, was, program, object, flags;

    if (DIRECT_OFF(dev)) { sub_0036F000_gen(); return; }
    if (!programs_typed()) { capture_begin(dev, 0x0036F000u); sub_0036F000_gen(); capture_end(dev, 0x0036F000u); return; }
    shader = GMEM32(dev + 0x794);
    was = GMEM32(shader + 4);
    program = GMEM32(shader + 0x10);
    if (handle & 1u) {
        object = handle - 1;
        if (guest_byte(handle + 3) & 0x10u) {
            g_esp -= 4; GMEM32(g_esp) = 0;
            g_esp -= 4; GMEM32(g_esp) = handle;
            g_esp -= 4; GMEM32(g_esp) = 0x0036F037u;
            sub_0036EC90();
            g_esp -= 4; GMEM32(g_esp) = 0;
            g_esp -= 4; GMEM32(g_esp) = handle;
            g_esp -= 4; GMEM32(g_esp) = 0x0036F03Eu;
            sub_0036ECF0();
            g_esp += 8;
            return;
        }
    } else {
        object = 0x0037DCC8u;
        g_esp -= 4; GMEM32(g_esp) = handle;
        g_esp -= 4; GMEM32(g_esp) = object;
        g_esp -= 4; GMEM32(g_esp) = 0x0036F052u;
        sub_0036E320();
    }
    GMEM32(0x0037B1A8u) |= 0x70u;
    if (program != GMEM32(object + 0x10)) GMEM32(0x0037B1A8u) |= 0x400u;
    if (was != GMEM32(object + 4)) GMEM32(0x0037B1A8u) |= 0x1600u;
    GMEM32(dev + 0x794) = object;
    GMEM32(dev + 0x798) = handle;
    GMEM32(dev + 0x79C) = 0;
    flags = GMEM32(object + 4);
    if (flags & 2u) {
        viewport_captured(dev, 0x0036F10Bu);
        direct_token(dev, 0x0036F0A7u, NV097_RESOT_DIRECT_START, 0);
        direct_token(dev, 0x0036F0A7u, NV097_RESOT_DIRECT_MODE, 0x80000000u | (6u << 8));
        g_ecx = dev;
        g_esp -= 4; GMEM32(g_esp) = 0x0036F131u;
        sub_0036EF10();
    } else if ((flags ^ was) & 0x12u) {
        direct_token(dev, 0x0036F0A7u, NV097_RESOT_DIRECT_MODE, 4u << 8);
        viewport_captured(dev, 0x0036F159u);
    }
    g_esp += 8;
}

/* -- Viewport -- */
static uint32_t float_bits(double v) { float f = (float)v; uint32_t b; memcpy(&b, &f, 4); return b; }
/* sub_0036D740, ecx device, edx ring, returns the ring. 0x0394 has no consumer; its depth
 * values are kept at device +0x1C08.. and +0x1C10.. as the original keeps them. */
extern void sub_0036D740_gen(void);
extern void sub_0036CC00(void);
void sub_0036D740(void)
{
    uint32_t dev = g_ecx, ring = g_edx, mask = guest_byte(dev + 0x1C18), token, *to, have = 0;
    uint32_t offset[4] = {0, 0, 0, 0}, scale[4] = {0, 0, 0, 0}, sent = 1;
    double range = fog_float(dev + 0x944) * fog_float(dev + 0x93C) * fog_float(dev + 0x948);

    if (DIRECT_OFF(dev)) { sub_0036D740_gen(); return; }
    if (GMEM32(GMEM32(dev + 0x794) + 4) & 0x12u) {
        uint32_t buffers = g_esp - 0x20;
        g_esp = buffers;
        g_esp -= 4; GMEM32(g_esp) = buffers + 0x10;
        g_esp -= 4; GMEM32(g_esp) = buffers;
        g_esp -= 4; GMEM32(g_esp) = 0x0036D768u;
        sub_0036CC00();
        for (uint32_t i = 0; i < 4; i++) { offset[i] = GMEM32(buffers + i * 4); scale[i] = GMEM32(buffers + 0x10 + i * 4); }
        g_esp = buffers + 0x20;
        sent = !(GMEM32(dev + 8) & 0x200u);
        have = 1;
        if (!(mask & 2u)) {
            if (GMEM32(0x0037B5ECu) == 2) {
                GMEM32(dev + 0x1C14) = GMEM32(dev + 0x948);
                GMEM32(dev + 0x1C10) = float_bits(range);
            } else {
                GMEM32(dev + 0x1C10) = 0;
                GMEM32(dev + 0x1C14) = GMEM32(dev + 0x948);
            }
        }
    } else {
        double x = (double)GMEM32(dev + 0xEE0) * fog_float(dev + 0x95C) + fog_float(dev + 0xEF8);
        double y = (double)GMEM32(dev + 0xEE4) * fog_float(dev + 0x960) + fog_float(dev + 0xEFC);
        if ((GMEM32(dev + 8) & 0x8000u) && GMEM32(0x0037B610u)) {
            x -= fog_float(0x00429354u);
            y -= fog_float(0x00429354u);
        }
        offset[0] = float_bits(x); offset[1] = float_bits(y);
        if (!(mask & 1u)) {
            if (GMEM32(0x0037B5ECu) == 2) {
                GMEM32(dev + 0x1C0C) = GMEM32(dev + 0x948);
                GMEM32(dev + 0x1C08) = float_bits(range);
            } else {
                GMEM32(dev + 0x1C08) = float_bits(fog_float(dev + 0xEF0) * fog_float(dev + 0x948));
                GMEM32(dev + 0x1C0C) = float_bits(fog_float(dev + 0xEF4) * fog_float(dev + 0x948));
            }
        }
    }
    if (sent) {
        to = direct_slot(9, &token);
        to[0] = have;
        for (uint32_t i = 0; i < 4; i++) { to[1 + i] = offset[i]; to[5 + i] = scale[i]; }
        GMEM32(ring) = 0x00040000u | NV097_RESOT_DIRECT_VIEWPORT;
        GMEM32(ring + 4) = token;
        ring += 8;
    }
    g_eax = ring;
    g_esp += 4;                          /* ret */
}
/* sub_0036EF10, ecx device, ret: the fixed-function vertex program's constants and body,
 * for shaders flagged so (0x0036EF19). Table by fog mode, 0x0036EF31..0x0036EF4F. */
extern void sub_0036EF10_gen(void);
void sub_0036EF10(void)
{
    uint32_t dev = g_ecx, table, words, token, *to;
    double z, k;

    if (DIRECT_OFF(dev)) { sub_0036EF10_gen(); return; }
    if (!programs_typed()) { capture_begin(dev, 0x0036EF10u); sub_0036EF10_gen(); capture_end(dev, 0x0036EF10u); return; }
    if (!(GMEM32(GMEM32(dev + 0x794) + 4) & 2u)) { g_esp += 4; return; }
    if (!GMEM32(0x0037B524u)) { table = 0x00379620u; words = 0x30; }
    else if (GMEM32(dev + 8) & 2u) { table = 0x00379570u; words = 0x2C; }
    else { table = 0x003794B0u; words = 0x30; }
    z = GMEM32(0x0037B5ECu) == 2 ? fog_float(dev + 0x948) * fog_float(dev + 0x944) : fog_float(0x00429344u);
    k = (GMEM32(dev + 8) & 0x8000u) && GMEM32(0x0037B610u) ? fog_float(0x00429354u) : fog_float(0x00429350u);
    to = direct_slot(9, &token);
    to[0] = 0;
    to[1] = GMEM32(dev + 0x95C);
    to[2] = GMEM32(dev + 0x960);
    to[3] = GMEM32(dev + 0x948);
    to[4] = float_bits(z);
    to[5] = float_bits(fog_float(dev + 0xEF8) - k);
    to[6] = float_bits(fog_float(dev + 0xEFC) - k);
    to[7] = 0;
    to[8] = 0;
    direct_token(dev, 0x0036EF5Du, NV097_RESOT_DIRECT_CONSTANTS, token);
    program_words_token(dev, 0x0036EF5Du, 0, table, words);
    g_esp += 4;                          /* ret */
}

/* -- Shader stages and fixed-function combiners -- */
/* 0x00373C54..0x00373CEF, a stage with no program: its texture's kind. */
static uint32_t stage_kind(uint32_t mode, uint32_t address, int checks_address)
{
    if ((int32_t)mode < 0) return 0;
    if (checks_address && address == 0x19) return 6;
    if (checks_address && address == 0x1A) return 7;
    if (mode & 4u) return 3;
    if ((mode & 0x40000000u) || (mode & 0xF0u) == 0x30u) return 2;
    return 1;
}
/* 0x00373DBA..0x00373E2E, a stage in a program that adapts to its texture. */
static uint32_t program_kind(uint32_t kind, uint32_t mode)
{
    if ((int32_t)mode < 0 && kind != 4 && kind != 5 && kind != 0xA && kind != 0x11) return 0;
    if (kind >= 1 && kind <= 3) {
        if (mode & 4u) return 3;
        return (mode & 0x40000000u) || (mode & 0xF0u) == 0x30u ? 2 : 1;
    }
    if (kind == 0xD || kind == 0xE) return mode & 4u ? 0xEu : 0xDu;
    return kind;
}
/* sub_00373C40(device), ret 4: SHADER_STAGE_PROGRAM. */
extern void sub_00373C40_gen(void);
void sub_00373C40(void)
{
    uint32_t dev = GMEM32(g_esp + 4), program;

    if (DIRECT_OFF(dev)) { sub_00373C40_gen(); return; }
    if (!GMEM32(dev + 0x784)) {
        program = stage_kind(GMEM32(dev + 0x18), GMEM32(0x0037B2E0u), 1) << 15 |
            stage_kind(GMEM32(dev + 0x14), GMEM32(0x0037B260u), 1) << 10 |
            stage_kind(GMEM32(dev + 0x10), GMEM32(0x0037B1E0u), 1) << 5 |
            stage_kind(GMEM32(dev + 0xC), 0, 0);
    } else {
        program = GMEM32(dev + 0x790);
        if (GMEM32(dev + 0x78C)) {
            program = program_kind((program >> 15) & 0x1Fu, GMEM32(dev + 0x18)) << 15 |
                program_kind((program >> 10) & 0x1Fu, GMEM32(dev + 0x14)) << 10 |
                program_kind((program >> 5) & 0x1Fu, GMEM32(dev + 0x10)) << 5 |
                program_kind(program & 0x1Fu, GMEM32(dev + 0xC));
        }
    }
    direct_token(dev, 0x00373FA9u, NV097_RESOT_DIRECT_STAGES, program);
    g_esp += 8;
}
/* sub_00378720(device, flags), ret 8, returns flags: compiles the stage states into
 * combiners, 1.3 KB of table-driven code kept as it is. Only its result moves: what it
 * wrote at 0x00378BFA.. is read back here, here on the title's thread, and leaves as
 * fields. The executor sees no method. 0x03B8 after them has no consumer. */
extern void sub_00378720_gen(void);
void sub_00378720(void)
{
    uint32_t dev = GMEM32(g_esp + 4), at, token, *to, result;

    if (DIRECT_OFF(dev) || GMEM32(dev + 0x784) || s_capture_depth) { sub_00378720_gen(); return; }
    capture_begin(dev, 0x00378720u);
    sub_00378720_gen();
    result = g_eax;
    at = s_capture_put;
    if (GMEM32(at) == 0x00041E60u && GMEM32(at + 8) == 0x00200AC0u && GMEM32(at + 0x2C) == 0x00201E40u &&
        GMEM32(at + 0x50) == 0x00200260u && GMEM32(at + 0x74) == 0x00200AA0u &&
        xbox_Nv2aKickTotal() == s_capture_kicks) {
        s_capture_depth--;
        to = direct_slot(33, &token);
        to[0] = GMEM32(at + 4);
        for (uint32_t i = 0; i < 8; i++) {
            to[1 + i] = GMEM32(at + 0xC + i * 4);
            to[9 + i] = GMEM32(at + 0x30 + i * 4);
            to[17 + i] = GMEM32(at + 0x54 + i * 4);
            to[25 + i] = GMEM32(at + 0x78 + i * 4);
        }
        GMEM32(at) = 0x00040000u | NV097_RESOT_DIRECT_FIXED_COMBINER;
        GMEM32(at + 4) = token;
        GMEM32(dev) = at + 8;
    } else {
        capture_end(dev, 0x00378720u);
    }
    g_eax = result;
}

/* sub_0036DA60, ecx device, edx passed on, ret: the surface scale from the render target.
 * Stores as 0x0036DC1E..0x0036DD1E; 0x0380 and 0x1D7C have no consumer. */
extern void sub_0036DA60_gen(void);
extern void sub_0036A9D0(void);
static uint32_t surface_width(uint32_t s)
{
    uint32_t size = GMEM32(s + 0x10);
    return size ? (size & 0xFFFu) + 1 : 1u << ((GMEM32(s + 0xC) >> 20) & 0xF);
}
static uint32_t surface_height(uint32_t s)
{
    uint32_t size = GMEM32(s + 0x10);
    return size ? ((size >> 12) & 0xFFFu) + 1 : 1u << (guest_byte(s + 0xF) & 0xF);
}
void sub_0036DA60(void)
{
    uint32_t dev = g_ecx, arg = g_edx, target, antialias, width, height, format;
    double sx, sy, smallest, half = fog_float(0x00429354u);

    if (DIRECT_OFF(dev)) { sub_0036DA60_gen(); return; }
    target = GMEM32(dev + 0x1A04);
    if (target == GMEM32(dev + 0x1A14)) {
        uint32_t from = GMEM32(dev + 0x1A18), limit;
        antialias = GMEM32(0x0037B618u);
        sx = fog_float(dev + 0x96C);
        sy = fog_float(dev + 0x970);
        width = round_guest((double)surface_width(from) * sx + half);
        height = round_guest((double)surface_height(from) * sy + half);
        limit = surface_width(target);
        if (width >= limit) width = limit;
        limit = surface_height(target);
        if (height >= limit) height = limit;
    } else {
        antialias = GMEM32(0x0037B61Cu);
        sx = sy = fog_float(0x00429344u);
        sx = 1.0;
        width = surface_width(target);
        height = surface_height(target);
    }
    format = GMEM32(dev + 0x1A0C);
    GMEM32(dev + 8) &= 0xFFFF7FFFu;
    if (antialias && !(format & 0x200u)) {
        sx *= half;
        GMEM32(dev + 8) |= 0x8000u;
        width = (width + 1) >> 1;
        if (antialias == 2) {
            sy *= half;
            height = (height + 1) >> 1;
            format |= 0x2000u;
        } else {
            format |= 0x1000u;
        }
    }
    GMEM32(dev + 0x960) = float_bits(sy);
    GMEM32(dev + 0x95C) = float_bits(sx);
    GMEM32(dev + 0x954) = width;
    GMEM32(dev + 0x958) = height;
    smallest = sx < sy ? sx : sy;
    direct_token(dev, 0x0036DCB4u, NV097_RESOT_DIRECT_FORMAT, format);
    if (float_bits(smallest) != GMEM32(dev + 0x964)) {
        GMEM32(dev + 0x964) = float_bits(smallest);
        GMEM32(dev + 0x968) = GMEM32(0x00379378u + round_guest(smallest + smallest + half) * 4);
        GMEM32(0x0037B1A8u) |= 0x10Fu;
    }
    if (GMEM32(GMEM32(dev + 0x794) + 4) & 2u) {
        g_ecx = dev;
        g_esp -= 4; GMEM32(g_esp) = 0x0036DDA3u;
        sub_0036EF10();
    }
    g_esp -= 4; GMEM32(g_esp) = arg;
    g_esp -= 4; GMEM32(g_esp) = 0x0036DDADu;
    sub_0036A9D0();
    g_esp += 4;                          /* ret */
}

/* sub_0036ED90(mode), ret 4: the lighting set-up. Only the constants at register 0x3C
 * (0x00379480, 12 words) have a consumer: the matrices 0x0840.. through 0x0036FBA0 and
 * 0x09D0, 0x0A50 do not. */
extern void sub_0036ED90_gen(void);
void sub_0036ED90(void)
{
    uint32_t dev = D3D_DEV, mode = GMEM32(g_esp + 4), token, *to;

    if (DIRECT_OFF(dev)) { sub_0036ED90_gen(); return; }
    if (mode & 0x10u) GMEM32(dev + 8) |= 0x200u;
    else GMEM32(dev + 8) &= 0xFFFFFDFFu;
    mode &= 0xFFFFFFEFu;
    GMEM32(dev + 0x1928) = mode;
    if (!mode) {
        GMEM32(0x0037B1A8u) |= 0x1600u;
        to = direct_slot(13, &token);
        to[0] = 0x3C;
        for (uint32_t i = 0; i < 12; i++) to[1 + i] = GMEM32(0x00379480u + i * 4);
        direct_token(dev, 0x0036EDD8u, NV097_RESOT_DIRECT_CONSTANTS, token);
    }
    g_esp += 8;
}
/* sub_00375EE0, ret: immediate mode's end, flags and fence as 0x00375F05..0x00375F1B. */
extern void sub_00375EE0_gen(void);
void sub_00375EE0(void)
{
    uint32_t dev = D3D_DEV, flags;

    if (DIRECT_OFF(dev)) { sub_00375EE0_gen(); return; }
    direct_token(dev, 0x00375EF3u, NV097_RESOT_DIRECT_END, 0);
    flags = GMEM32(dev + 8);
    GMEM32(dev + 8) = flags & 0xFFFFE7FFu;
    if (flags & 0x1000u) {
        g_esp -= 4; GMEM32(g_esp) = 1;
        g_esp -= 4; GMEM32(g_esp) = 0x00375F20u;
        sub_00370080();
    }
    g_esp += 4;
}
/* sub_0036C840, esi device, ret: rotates the swap chain's surfaces and flips. NOP and 0x0110
 * go; the NOP's parameter is never 5, which is all the runtime reads there. */
extern void sub_0036C840_gen(void);
void sub_0036C840(void)
{
    uint32_t dev = g_esi, last, prev, first_addr, first_size;

    if (DIRECT_OFF(dev)) { sub_0036C840_gen(); return; }
    last = GMEM32(dev + 0x1A10);
    prev = GMEM32(dev + 0x1A10 + last * 4);
    first_addr = GMEM32(prev + 4);
    first_size = GMEM32(prev + 8);
    for (uint32_t i = last - 1; i; i--) {
        uint32_t next = GMEM32(dev + 0x1A10 + i * 4);
        GMEM32(prev + 4) = GMEM32(next + 4);
        GMEM32(prev + 8) = GMEM32(next + 8);
        prev = next;
    }
    GMEM32(prev + 4) = first_addr;
    GMEM32(prev + 8) = first_size;
    if (GMEM32(dev + 0x1A04) == GMEM32(dev + 0x1A14) || GMEM32(0x0037B5ACu) == 0x80000000u) {
        direct_token(dev, 0x0036C893u, NV097_RESOT_DIRECT_FLIP, 1);
    } else {
        GMEM32(dev + 8) |= 0x100u;
        direct_token(dev, 0x0036C893u, NV097_RESOT_DIRECT_FLIP, 0);
    }
    direct_token(dev, 0x0036C893u, NV097_RESOT_DIRECT_COLOR, GMEM32(GMEM32(dev + 0x1A14) + 4));
    g_esp += 4;
}
