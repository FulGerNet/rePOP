/* Warrior Within retail XDK integration. See docs/WW-HOOKS.md for evidence.
 * These addresses belong to SHA-256 8747A410...64599C only.
 * Code adapted from reSOT's verified XDK wrappers. SoT's timer, movie-skip
 * and Hor+ hooks are ported below to WW routines located in this XBE (the
 * evidence is in the comments and docs/WW-HOOKS.md); no SoT address is used.
 * RECOMP_USB=1 selects original XAPI.
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
extern RESOT_TLS uint32_t g_eax,g_ecx,g_edx,g_esp,g_esi;
extern ptrdiff_t g_xbox_mem_offset;
#define GMEM32(va) (*(volatile uint32_t *)((uintptr_t)g_xbox_mem_offset+(uint32_t)(va)))
#define GMEMF(va)  (*(volatile float *)((uintptr_t)g_xbox_mem_offset+(uint32_t)(va)))

/* ── Frame timestep (RE-WW, from RE-SoT sub_00348128_enter) ──
 *
 * WW's frame clock sub_000DA5F0 stores the previous/new calibrated
 * microsecond timestamps at 0x00952CE8 / 0x00952CE0 (0x000DA5FE,
 * 0x000DA60A, 0x000DA623). With the fixed-refresh flag 0x0091EF38 set
 * (written as 1 at 0x000148DE and 0x0001A399, among others), it computes
 * 1000000 / (int(refresh) >> 1) from the float at 0x00945674, which no
 * instruction in this XBE writes: 0x000DA674/0x000DA710 are its only
 * references. A zero refresh divides by zero, _ftol 0x0047F548 (identical
 * to SoT's 0x00348128) returns the invalid integer at its call 0x000DA6A7,
 * and the 1000-us minimum at 0x000DA75D makes a 60-fps picture advance
 * 0.06 game seconds per wall second: the same failure as SoT retail.
 *
 * At only this _ftol call, replace the invalid reciprocal with the measured
 * interval the game already captured. Valid refresh values keep the
 * original path. RESOT_RAW_RETAIL_TIMESTEP=1 restores it for comparison. */
extern RESOT_TLS double g_fp_stack[8];
extern RESOT_TLS int g_fp_top;

void sub_0047F548_enter(void)
{
    static int configured, raw;
    static unsigned reports;
    float refresh;
    uint64_t now, previous, elapsed;
    double input;
    if (GMEM32(g_esp) != 0x000DA6ACu)  /* return of the call at 0x000DA6A7 */
        return;
    refresh = GMEMF(0x00945674u);
    if (isfinite(refresh) && refresh >= 2.0f)
        return;
    if (!configured) {
        const char *e = getenv("RESOT_RAW_RETAIL_TIMESTEP");
        raw = e && *e && *e != '0';
        configured = 1;
    }
    now = ((uint64_t)GMEM32(0x00952CE4u) << 32) | GMEM32(0x00952CE0u);
    previous = ((uint64_t)GMEM32(0x00952CECu) << 32) | GMEM32(0x00952CE8u);
    elapsed = now >= previous ? now - previous : 0;
    input = g_fp_stack[(unsigned)g_fp_top & 7u];
    if (!reports++ || (getenv("RESOT_TIMER_DIAG") && reports % 120 == 0))
        fprintf(stderr, "[TIME] WW invalid refresh %.3f, fixed-step input %.3f;"
                        " measured interval %llu us (%s)\n", refresh, input,
                (unsigned long long)elapsed, raw ? "original conversion" : "calibrated clock");
    if (!raw)
        g_fp_stack[(unsigned)g_fp_top & 7u] = (double)elapsed;
}

/* ── Movie skip (RE-WW, from RE-SoT sub_0001E970) ──
 *
 * sub_0003DB90 is WW's Bink frame/status routine, with the same shape as
 * SoT's 0x0001E970: Bink handle 0x005BEEC4 (read at 0x0003DB94), loop flag
 * 0x0091EC98 (0x0003DB9E), frame count +8 vs current +0x10, and return 0 at
 * EOF. Its calls are the WW matches of SoT's Bink routines: BinkWait
 * 0x004D8190, BinkDoFrame 0x004D86B0, BinkCopyToBuffer 0x004D8670 and
 * BinkNextFrame 0x004D8CC0 (unique normalized matches). Its only caller,
 * 0x00031E7B, tests the loop flag at 0x00031E91 after a 0 return and then
 * runs the normal close path (0x00031EC4 calls 0x0003E2D0, which clears the
 * handle at 0x0003E37B). Space / pad A reports EOF even where the movie's
 * own skip permission forbids skipping. */
extern int resot_movie_skip_down(void);
extern void sub_0003DB90_gen(void);

void sub_0003DB90(void)
{
    static int was_down;
    int down = resot_movie_skip_down();
    int pressed = down && !was_down;
    was_down = down;
    if (pressed && GMEM32(0x005BEEC4u)) {
        GMEM32(0x0091EC98u) = 0;         /* looping movies must also finish */
        fprintf(stderr, "[VIDEO] skipped movie (Space / A)\n");
        g_eax = 0;
        g_esp += 4;                      /* original status routine: ret */
        return;
    }
    sub_0003DB90_gen();
}

/* ── Widescreen: Hor+ (RE-WW, from RE-SoT sub_000CD970_enter) ──
 *
 * The renderer stretches the 640-pixel picture over a wider surface
 * (RECOMP_HW_ASPECT); the projection's horizontal scale shrinks by the same
 * factor so proportions stay right and more scene shows at the sides.
 *
 * WW's sub_000C3310 builds the projection at 0x00956480 (x scale +0x00
 * stored at 0x000C3563/0x000C356D, y scale +0x14 at 0x000C3582), copies it
 * (rep movsd at 0x000C35E4) to 0x00945740 and calls sub_000C8CC0 with
 * esi = 0x009456E0, returning to 0x000C35F0. Both copies are narrowed.
 * WW's own 16:9 flag (byte 0x00945678, never written in this XBE) also
 * squeezes 2D/HUD; the host already keeps 2D at 4:3, so it stays clear. */
#define PROJ_BUILT    0x00956480u
#define PROJ_COPY     0x00945740u
#define PROJ_HOLDER   0x009456E0u
#define PROJ_RET      0x000C35F0u

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

void sub_000C8CC0_enter(void)
{
    if (widen_factor() > 1.0f && GMEM32(g_esp) == PROJ_RET && g_esi == PROJ_HOLDER) {
        GMEMF(PROJ_BUILT) /= s_widen;
        GMEMF(PROJ_COPY) /= s_widen;
    }
}

/* Culling planes. sub_00397AF0 is WW's CAM_Engine_ComputePlans (SoT's
 * 0x002FD810 with the 16:9 flag test added at 0x00397AFE): half field of
 * view, then the side planes from the cosine sub_0006C6C0 (returning to
 * 0x00397B38) and the sine sub_0006C710 (returning to 0x00397B5F); the
 * up/down calls return to 0x00397B7F and 0x00397B99 and keep the original
 * angle. The cosine/sine are unique normalized matches of SoT's 0x000452F0 /
 * 0x00045340. The side calls get atan(widen * tan h). */
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

void sub_0006C6C0_enter(void)
{
    widen_side_plane_angle(0x00397B38u);
}

void sub_0006C710_enter(void)
{
    widen_side_plane_angle(0x00397B5Fu);
}

extern void xbox_Nv2aKick(void);
extern void xbox_Nv2aWaitClear(uint32_t va, uint32_t mask);
extern void sub_004905A0(void);

#define D3D_DEVICE_GLOBAL  0x004A0F58u   /* [dev] +0x1C28: NV register base */
#define NV_PFB_WC_FLUSH    0x00100410u
#define D3D_SYNC_FLAG      0x004A0AB0u   /* nonzero: wait for an idle GPU */

static void wait_gpu_idle(uint32_t ret)
{
    do {
        g_esp -= 4;
        GMEM32(g_esp) = ret;
        sub_004905A0();                  /* eax != 0 while PGRAPH is busy */
    } while (g_eax);
}

void sub_00495620(void)
{
    uint32_t dev = g_ecx, flags, put, regs;

    g_esp -= 4;
    GMEM32(g_esp) = g_esi;               /* push esi */
    g_esi = dev;
    flags = GMEM32(dev + 8);
    g_eax = flags;
    put = (flags & 4) ? GMEM32(dev + 0x770) : GMEM32(dev);
    g_edx = put;
    if (flags & 0x2000) {                /* 0x00495696 */
        g_eax = GMEM32(dev);
        g_ecx = 0x004A0AA0u - 0x40u;
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
        xbox_Nv2aWaitClear(regs + NV_PFB_WC_FLUSH, 0x10000u);   /* 0x00495660 */
        g_ecx = GMEM32(dev + 0x1C20);
        g_edx = put & 0x0FFFFFFFu;
        GMEM32(g_ecx + 0x40) = g_edx;    /* DMA_PUT */
        xbox_Nv2aKick();
        g_eax = GMEM32(D3D_SYNC_FLAG);
        if (g_eax) {
            wait_gpu_idle(0x00495689u);
            GMEM32(dev + 8) |= 0x2000u;
        }
    }
    g_esi = GMEM32(g_esp);               /* pop esi */
    g_esp += 4;
    g_esp += 4;                          /* ret */
}

void sub_004956D0(void)
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
        xbox_Nv2aWaitClear(regs + NV_PFB_WC_FLUSH, 0x10000u);   /* 0x00495710 */
        g_ecx = GMEM32(dev + 0x1C20);
        g_esi = put & 0x0FFFFFFFu;
        GMEM32(g_ecx + 0x40) = g_esi;    /* DMA_PUT */
        xbox_Nv2aKick();
        wait_gpu_idle(0x00495735u);
    }
    g_esi = GMEM32(g_esp);               /* pop esi */
    g_esp += 4;
    g_esp += 4;                          /* ret */
}

extern uint32_t xbox_HlePadState(uint32_t port, uint8_t *out);
extern void     xbox_HlePadRumble(uint32_t port, uint16_t left, uint16_t right);

extern void sub_00543A59_gen(void);
extern void sub_00543A7B_gen(void);
extern void sub_00543AE8_gen(void);
extern void sub_00543B3E_gen(void);
extern void sub_00543B4A_gen(void);
extern void sub_00543D22_gen(void);
extern void sub_00543D95_gen(void);

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
void sub_00543A59(void)
{
    if (usb_input()) { sub_00543A59_gen(); return; }
    stdcall_return(1u, 1);                 /* a gamepad on port 0 */
}

/* XGetDeviceChanges */
void sub_00543A7B(void)
{
    uint32_t ins, rem;
    if (usb_input()) { sub_00543A7B_gen(); return; }
    ins = stdcall_arg(1);
    rem = stdcall_arg(2);
    if (ins) GMEM32(ins) = 0;              /* nothing comes or goes */
    if (rem) GMEM32(rem) = 0;
    stdcall_return(0, 3);
}

/* XInputOpen */
void sub_00543AE8(void)
{
    if (usb_input()) { sub_00543AE8_gen(); return; }
    stdcall_return(stdcall_arg(1) == 0 ? PAD_HANDLE : 0, 4);
}

/* XInputClose */
void sub_00543B3E(void)
{
    if (usb_input()) { sub_00543B3E_gen(); return; }
    stdcall_return(0, 1);
}

/* XInputGetCapabilities */
void sub_00543B4A(void)
{
    uint32_t caps, i;
    if (usb_input()) { sub_00543B4A_gen(); return; }
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

/* XInputGetState: the unchanged XDK argument/state layout is verified in WW. */


void sub_00543D22(void)
{
    uint32_t st;
    if (usb_input()) { sub_00543D22_gen(); return; }
    st = stdcall_arg(1);
    if (stdcall_arg(0) != PAD_HANDLE || !st) {
        stdcall_return(1167, 2);
        return;
    }
    {
        uint8_t *state=(uint8_t *)((uintptr_t)g_xbox_mem_offset+st);
        uint32_t result=xbox_HlePadState(0,state);
        stdcall_return(result,2);
    }
}

/* XInputSetState */
void sub_00543D95(void)
{
    uint32_t fb;
    if (usb_input()) { sub_00543D95_gen(); return; }
    fb = stdcall_arg(1);
    if (stdcall_arg(0) != PAD_HANDLE || !fb) {
        stdcall_return(1167, 2);
        return;
    }
    /* XINPUT_FEEDBACK: the header's dwStatus, then the rumble at +0x42. The
     * game sends again once dwStatus has left ERROR_IO_PENDING
     * so the request completes at once. */
    xbox_HlePadRumble(0, *(volatile uint16_t *)((uintptr_t)g_xbox_mem_offset + fb + 0x42),
                      *(volatile uint16_t *)((uintptr_t)g_xbox_mem_offset + fb + 0x44));
    GMEM32(fb) = 0;
    stdcall_return(997, 2);                /* ERROR_IO_PENDING, already done */
}

/* RE-WW: observed callback registered at XBE 0x000477BE in slot 0x005BF214.
 * Exact 0x00088730..0x00088765 body: keep its register writes and cdecl RET,
 * or replace the first argument and tail-jump to 0x003A53D0. That entry
 * overwrites flags with TEST EAX,EAX at 0x003A53D4 before its first branch.
 * No synthetic guest return address belongs on the tail path. */
extern void sub_003A53D0(void);
void sub_00088730(void)
{
    g_ecx = GMEM32(g_esp + 4);
    g_eax = GMEM32(g_ecx + 0x0C);
    g_eax = GMEM32(g_eax + 0x134);
    if (g_eax) goto tail;
    g_eax = GMEM32(g_ecx + 0x18);
    if (!g_eax) goto done;
    g_eax = GMEM32(g_eax + 0x14);
    if (!g_eax) goto done;
    g_eax = GMEM32(g_eax);
    if (!g_eax) goto done;
    g_eax = GMEM32(g_eax + 4);
    if (!g_eax) goto done;
tail:
    GMEM32(g_esp + 4) = g_eax;  /* 0x0008875C */
    sub_003A53D0();             /* 0x00088760: JMP, not CALL */
    return;
done:
    g_esp += 4;                /* 0x00088765: RET, caller owns arguments */
}
