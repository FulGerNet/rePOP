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
#include "target.h"
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
    int down = resot_movie_skip_down();
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
    stdcall_return(xbox_HlePadState(0, (uint8_t *)((uintptr_t)g_xbox_mem_offset + st)), 2);
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
#define MAIN_NEXT_OPEN_RET 0x00234DCDu
#define TEXT_MANAGER       0x007584F0u
#define TEXT_ACTION_VTABLE 0x0041F838u
#define TEXT_NONE          0x0041F4A8u
#define MENU_PAGE_X        0.4f
#define RESOT_TEXT_GROUP   0x0B00FE00u   /* no key of the retail BF: injected */
#define RESOT_MSG_KIND     0x52E5u
#define RESOT_TEXT_SLOT    96u
#define RESOT_TEXTS        80u

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
       T_RESET, T_GFX = 10, T_KEYS = 20, T_JOYS = 50 };
static const char *const s_static_texts[] = {
    "reSOT Options", "Graphics", "Controls",
    "Keyboard: move and fight", "Keyboard: actions", "Keyboard: menus and camera",
    "Joystick: move and fight", "Joystick: actions", "Joystick: menus and camera",
    "Reset all bindings",
};
static uint32_t s_text_va;

static void resot_text(uint32_t index, char *out, unsigned size)
{
    if (index < sizeof s_static_texts / sizeof s_static_texts[0])
        snprintf(out, size, "%s", s_static_texts[index]);
    else if (index >= T_GFX && index < T_GFX + RESOT_NATIVE_GRAPHICS_ITEMS)
        resot_native_label(RESOT_NATIVE_GRAPHICS, (int)(index - T_GFX), out, size);
    else if (index >= T_KEYS && index < T_KEYS + RESOT_NATIVE_ACTIONS)
        resot_native_label(RESOT_NATIVE_KEYS, (int)(index - T_KEYS), out, size);
    else if (index >= T_JOYS && index < T_JOYS + RESOT_NATIVE_ACTIONS)
        resot_native_label(RESOT_NATIVE_JOY, (int)(index - T_JOYS), out, size);
    else
        snprintf(out, size, "?");
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
enum { P_ROOT, P_GFX, P_CTRL, P_K0, P_K1, P_K2, P_J0, P_J1, P_J2, P_PAGES };
#define MSG_ID(page, item) ((uint32_t)(page) << 8 | (uint32_t)(item))
#define MSG_RESET 0xFF00u
static NativePage s_pages[P_PAGES];
static const int s_bind_first[3] = { 0, 9, 16 }, s_bind_count[3] = { 9, 7, 9 };
static uint32_t s_main_menu, s_main_cur, s_root_choice;
static int s_native_built, s_native_bound;

static void native_choice(NativePage *p, int i, uint32_t text, int what, int arg)
{
    p->c[i].text = text; p->c[i].what = what; p->c[i].arg = arg; p->c[i].choice = 0;
}

static void native_layout(void)
{
    int i, j;
    NativePage *p;
    memset(s_pages, 0, sizeof s_pages);
    p = &s_pages[P_ROOT]; p->title = T_ROOT; p->top = 0.3833f; p->step = 0.0667f; p->n = 2;
    native_choice(p, 0, T_GRAPHICS, DO_OPEN, P_GFX);
    native_choice(p, 1, T_CONTROLS, DO_OPEN, P_CTRL);
    p = &s_pages[P_GFX]; p->title = T_GRAPHICS; p->top = 0.3833f; p->step = 0.0667f;
    p->n = RESOT_NATIVE_GRAPHICS_ITEMS;
    for (i = 0; i < p->n; i++)
        native_choice(p, i, T_GFX + (uint32_t)i, DO_MSG, (int)MSG_ID(P_GFX, i));
    p = &s_pages[P_CTRL]; p->title = T_CONTROLS; p->top = 0.3f; p->step = 0.0567f; p->n = 7;
    for (i = 0; i < 6; i++)
        native_choice(p, i, T_KEY0 + (uint32_t)i, DO_OPEN, P_K0 + i);
    native_choice(p, 6, T_RESET, DO_MSG, (int)MSG_RESET);
    for (i = 0; i < 6; i++) {
        int joy = i >= 3, part = i % 3;
        p = &s_pages[P_K0 + i];
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
    g_eax = s_main_cur; g_edx = s_main_menu;
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
    args[0] = s_main_cur; args[1] = 0; args[2] = 1;
    g_eax = s_main_cur; g_ecx = page;
    action = guest_cdecl(sub_000182A0, args, 3);
    regs_load(&saved);
    return menu_bind(choice, action);
}

static int menu_bind_message(uint32_t choice, uint32_t id)
{
    GuestRegs saved;
    uint32_t scratch, args[2], action, i;
    if (!choice)
        return 0;
    regs_save(&saved);
    g_esp -= 0x80;
    scratch = g_esp;
    for (i = 0; i < 0x34; i += 4)
        GMEM32(scratch + 0x40 + i) = 0;
    GMEM32(scratch + 0x40 + 0x28) = RESOT_MSG_KIND;
    GMEM32(scratch + 0x40 + 0x30) = id;
    args[0] = s_main_cur; args[1] = scratch + 0x40;
    g_eax = s_main_cur;
    action = guest_cdecl(sub_00018310, args, 2);
    regs_load(&saved);
    return menu_bind(choice, action);
}

static void native_build_and_bind(void)
{
    int i, j, ok = 0, all = 0, root;
    native_layout();
    for (i = 0; i < P_PAGES; i++)
        s_pages[i].page = native_build_page(s_main_cur, s_main_menu, &s_pages[i]);
    for (i = 0; i < P_PAGES; i++)
        for (j = 0; j < s_pages[i].n; j++) {
            NativeChoice *c = &s_pages[i].c[j];
            all++;
            ok += c->what == DO_OPEN ? menu_bind_open_page(c->choice, s_pages[c->arg].page)
                                     : menu_bind_message(c->choice, (uint32_t)c->arg);
        }
    root = menu_bind_open_page(s_root_choice, s_pages[P_ROOT].page);
    s_native_built = 1;
    s_native_bound = 1;
    fprintf(stderr, "[MENU] reSOT Options: %d pages, %d of %d choices bound, main entry %08X %s\n",
            P_PAGES, ok, all, s_root_choice, root ? "bound" : "not bound");
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
        s_native_built = s_native_bound = 0;
        s_root_choice = 0;
    } else if (GMEM32(g_esp) == MAIN_NEXT_OPEN_RET && s_root_choice && !s_native_built) {
        s_main_menu = g_edx;
        s_main_cur = g_eax;
        native_build_and_bind();
    }
}

void sub_002A3910_enter(void)
{
    char t[80];
    uint32_t ref = GMEM32(g_esp + 12);
    if (!menu_trace()) return;
    menu_text(ref, t, sizeof t);
    fprintf(stderr, "[MENU] choice     menu=%08X ret=%08X text=%08X:%u \"%s\"\n",
            GMEM32(g_esp + 8), GMEM32(g_esp), ref ? GMEM32(ref) : 0, ref ? GMEM32(ref + 4) : 0, t);
}

void sub_002A2670_enter(void)
{
    if (menu_trace())
        fprintf(stderr, "[MENU] page close ret=%08X arg=%08X\n", GMEM32(g_esp), GMEM32(g_esp + 4));
    if (GMEM32(g_esp) == MAIN_CLOSE_RET && hidden_menus() && !s_root_choice) {
        s_root_choice = menu_add_choice(g_eax, GMEM32(g_esp + 4), RESOT_TEXT_GROUP, T_ROOT);
        fprintf(stderr, "[MENU] hidden: \"reSOT Options\" choice %08X added to the main page\n",
                s_root_choice);
    }
}

/* Labels: as in the demo, the refresh runs for our value choices once the
 * options' revision moves, after checking that the choice's text object
 * still carries our reference. */
static int native_text_object(uint32_t choice, uint32_t *out)
{
    uint32_t mgr = GMEM32(TEXT_MANAGER), obj, text, it, end;
    if (!mgr || !choice || !GMEM32(mgr + 0x44))
        return 0;
    obj = GMEM32(GMEM32(mgr + 0x44) + choice * 4);
    text = obj ? GMEM32(obj + 0x9C) : 0;
    if (!text)
        return 0;
    for (it = GMEM32(text + 0x0C), end = GMEM32(text + 0x10); it && it < end; it += 4) {
        uint32_t action = GMEM32(it);
        if (action && GMEM32(action) == TEXT_ACTION_VTABLE
                && GMEM32(action + 0x34) == RESOT_TEXT_GROUP) {
            *out = text;
            return 1;
        }
    }
    return 0;
}

static void native_refresh(void)
{
    static long seen;
    long revision;
    int i, j, n = 0;
    if (!s_native_bound || (revision = resot_native_revision()) == seen)
        return;
    seen = revision;
    for (i = 0; i < P_PAGES; i++)
        for (j = 0; j < s_pages[i].n; j++) {
            GuestRegs saved;
            uint32_t text;
            if (s_pages[i].c[j].what != DO_MSG
                    || !native_text_object(s_pages[i].c[j].choice, &text))
                continue;
            regs_save(&saved);
            g_ecx = text; g_eax = 1;
            guest_cdecl(sub_00038DD0, NULL, 0);
            regs_load(&saved);
            n++;
        }
    if (menu_trace())
        fprintf(stderr, "[MENU] reSOT labels refreshed (%d, revision %ld)\n", n, revision);
}

/* Message action execute: this = ecx, the descriptor copied at +0x24. */
void sub_00039B20(void)
{
    uint32_t self = g_ecx, id;
    if (GMEM32(self + 0x24 + 0x28) != RESOT_MSG_KIND) { sub_00039B20_gen(); return; }
    id = GMEM32(self + 0x24 + 0x30);
    if (menu_trace())
        fprintf(stderr, "[MENU] reSOT choice %04X\n", id);
    if (id == MSG_RESET)
        resot_native_reset_bindings();
    else if ((id >> 8) == P_GFX)
        resot_native_activate(RESOT_NATIVE_GRAPHICS, (int)(id & 0xFF));
    else if ((id >> 8) >= P_K0 && (id >> 8) <= P_J2)
        resot_native_activate((id >> 8) >= P_J0 ? RESOT_NATIVE_JOY : RESOT_NATIVE_KEYS,
                              (int)(id & 0xFF));
    g_esp += 8;                           /* ret 4 */
}
