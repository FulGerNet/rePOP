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
#include "../../port/game/resot_cheats.h"
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
       T_KEYS = 20, T_JOYS = 50, T_MAP_PART = 80, T_MAPS = 90 };
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
 * their checkpoints (user logs); the others were not all seen in game. 0x2200B794 and 0x0F0053D9 are the values the
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
      { "1501 Reception Hall", 0x0F00387Du, 0x0F00425Du } },   /* ff0f387d, FRH_Checkpoint */
    { { "2101 Start", 0x0D0024F8u, 0x0D002504u },              /* ff0d24f8, TEC_Checkpoint */
      { "2201 Aviary", 0x2B005C22u, 0x2B0065B8u },             /* ff0b5c22, CheckPoint01 */
      { "2401 Corridor Start", 0x4D006474u, 0x410036B0u },     /* ff0d6474, LowerBath Start */
      { "2501 Ancient Hall", 0x2B005DBAu, 0x2B0065BCu },       /* ff0b5dba, CheckPoint01 */
      { "2601 Bridge", 0x0F003E8Bu, 0x2B006896u },             /* ff0f3e8b, CheckPoint_00 */
      { "3101 Tower", 0x41002456u, 0x41005E82u },              /* ff012456, Checkpoint01_StartPos */
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
enum { P_ROOT, P_GFX, P_CTRL, P_K0, P_K1, P_K2, P_J0, P_J1, P_J2,
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
    /* reSOT Options: Graphics, Controls, Cheats, and Special Load Map (main
     * menu only, see native_build_and_bind). */
    p = &pages[P_ROOT]; p->title = T_ROOT; p->top = 0.3833f; p->step = 0.0667f; p->n = 4;
    native_choice(p, 0, T_GRAPHICS, DO_OPEN, P_GFX);
    native_choice(p, 1, T_CONTROLS, DO_OPEN, P_CTRL);
    native_choice(p, 2, T_CHEATS_LABEL, DO_MSG, (int)MSG_CHEATS);
    native_choice(p, 3, T_MAP_TITLE, DO_OPEN, P_MAPS);
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
     * are not built there. */
    if (x != &s_ctx[CTX_MAIN]) {
        memset(&pages[P_MAPS], 0, sizeof(NativePage) * (P_PAGES - P_MAPS));
        pages[P_ROOT].n = 3;
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
    else if ((id >> 8) == P_GFX)
        resot_native_activate(RESOT_NATIVE_GRAPHICS, (int)(id & 0xFF));
    else if ((id >> 8) == P_CTRL)
        resot_native_activate(RESOT_NATIVE_CONTROLS, (int)(id & 0xFF));
    else if ((id >> 8) >= P_K0 && (id >> 8) <= P_J2)
        resot_native_activate((id >> 8) >= P_J0 ? RESOT_NATIVE_JOY : RESOT_NATIVE_KEYS,
                              (int)(id & 0xFF));
    g_esp += 8;                           /* ret 4 */
}
