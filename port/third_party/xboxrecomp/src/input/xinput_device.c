/**
 * Xbox Input Compatibility Layer
 *
 * Translates the Xbox controller API to a host gamepad backend.
 * Handles the structural differences between the Xbox gamepad
 * (analog buttons as bytes, separate trigger channels) and the host
 * (digital face buttons, trigger axes).
 *
 *   _WIN32 -> Windows XInput
 *   POSIX  -> SDL2 GameController
 */

#include "xinput_xbox.h"
#include <stdlib.h>
#include <string.h>

/* ======================================================================== */
#if defined(_WIN32)
/* ====================  XInput backend  ================================== */
/* ======================================================================== */

#include <xinput.h>
#pragma comment(lib, "xinput.lib")

static BOOL  g_controller_connected[XBOX_MAX_CONTROLLERS] = { FALSE };
static DWORD g_last_packet[XBOX_MAX_CONTROLLERS] = { 0 };

/* RE-SoT: the host options remap a raw controller state and add its configured
 * keyboard layout. With no callback, the vendored default layout is retained. */
static void (*s_host_filter)(void *, unsigned);
void xbox_InputSetHostFilter(void (*filter)(void *, unsigned)) { s_host_filter = filter; }


/* ---- keyboard, when there is no pad --------------------------------------
 *
 * A title that waits on PRESS START is unreachable on a machine with no
 * controller plugged in, which is most machines someone brings this up on.
 * The whole point of a recompilation is to be able to look at the thing
 * running, and a build nobody can press a button in cannot be looked at.
 *
 * RE-SoT: on unless RECOMP_KEYBOARD=0 (port/windows/src/main.c sets it). It
 * only ever answers for port 0, and is merged on top of a pad connected
 * there, so a real controller keeps working. The layout is the PC version's
 * default one (its Controls - Keyboard screen), each action on the Xbox
 * button that does it:
 *
 *   Move            W A S D / arrows          left thumb (arrows: d-pad too)
 *   Walk toggle     Left Shift / Keypad .     left thumb at walking deflection
 *   Jump            Space / Right Ctrl        A
 *   Special action  right mouse button        right trigger
 *   Sword attack    left mouse button         X
 *   Use dagger      E / middle mouse button   Y
 *   Cancel          C / Keypad 1              B
 *   Rewind          R / Right Shift           left trigger
 *   Camera look     F / Delete                white
 *   Alternate view  Q / End                   black
 *   Reset camera    X                         right thumb click
 *   Start           Esc (and Enter)           START
 *   (back)          Backspace                 BACK
 *   mouse movement                            right thumb (the camera)
 *
 * The camera's three (look, alternate view, reset) are on the buttons the
 * Xbox pad has left once the others are placed; that they are the right
 * ones is to be seen in play. RECOMP_MOUSE_SPEED (1-100, default 43, the PC
 * version's default) scales the mouse; RECOMP_WALK_DEFLECTION (default
 * 12000) is how far the stick is pushed while walking.
 *
 * Keys come from the framebuffer window, which only receives them while it
 * has the focus, so typing in another window does not drive the game.
 */
static BOOL keyboard_enabled(void)
{
    static int on = -1;
    if (on < 0) {
        const char *v = getenv("RECOMP_KEYBOARD");
        on = (v && *v == '0') ? 0 : 1;            /* RE-SoT: on by default */
    }
    return on ? TRUE : FALSE;
}

/* The framebuffer window records what is held; see src/video/fb_present.c.
 *
 * GetAsyncKeyState was the first attempt and reads nothing here -- under
 * Wine it answers about a state a GDI-drawing guest never touches. Going
 * through the window is also the better gate: a window only receives keys
 * while it has the focus, so there is no separate focus check to get wrong
 * and no way for typing in another application to drive the game.
 *
 * Declared rather than included so src/input does not depend on the video
 * module's include path. */
extern int xbox_FramebufferKeyDown(int vk);

static BOOL key_down(int vk)
{
    return xbox_FramebufferKeyDown(vk) ? TRUE : FALSE;
}

static int env_int(const char *name, int def, int lo, int hi)
{
    const char *v = getenv(name);
    int x = (v && *v) ? atoi(v) : def;
    return x < lo ? lo : x > hi ? hi : x;
}

/* Walk toggle: each press flips it, as the PC version's key does. */
static BOOL walk_toggled(void)
{
    static BOOL on, was;
    BOOL now = key_down(VK_LSHIFT) || key_down(VK_DECIMAL);
    if (now && !was)
        on = !on;
    was = now;
    return on;
}

extern void xbox_FramebufferTakeMouse(int *dx, int *dy);

/* The mouse as the right thumb. The title polls more than once a frame at
 * times, and taking the movement on every poll would show the camera a
 * deflection on one and none on the next; it is taken at most every 15 ms
 * and the deflection held in between. Full deflection is a rate of movement
 * (counts per millisecond), so the feel does not change with the frame rate. */
static void mouse_thumb(SHORT *rx, SHORT *ry)
{
    static DWORD last;
    static SHORT hx, hy;
    DWORD now = GetTickCount();
    DWORD dt = now - last;

    if (dt >= 15) {
        int dx, dy;
        double per_ms, k;
        xbox_FramebufferTakeMouse(&dx, &dy);
        if (dt > 100)
            dt = 100;                       /* first poll, or after a stall */
        /* At speed 43 a full deflection is ~1.5 counts per millisecond. */
        k = 32767.0 * env_int("RECOMP_MOUSE_SPEED", 43, 1, 100) / (43.0 * 1.5);
        per_ms = (double)dx / dt * k;
        hx = (SHORT)(per_ms > 32767 ? 32767 : per_ms < -32767 ? -32767 : per_ms);
        per_ms = -(double)dy / dt * k;      /* screen y is down, the stick's up */
        hy = (SHORT)(per_ms > 32767 ? 32767 : per_ms < -32767 ? -32767 : per_ms);
        last = now;
    }
    *rx = hx;
    *ry = hy;
}

static void keyboard_state(XBOX_INPUT_STATE *pState)
{
    static DWORD packet;
    WORD b = 0;
    BOOL up = key_down(VK_UP), down = key_down(VK_DOWN);
    BOOL left = key_down(VK_LEFT), right = key_down(VK_RIGHT);
    int lx = 0, ly = 0;

    memset(pState, 0, sizeof(*pState));

    /* The arrows are also the d-pad, which is what the menus read on the
     * console; the PC layout leaves Menu Up/Down/Left/Right unbound. */
    if (up)    b |= XBOX_GAMEPAD_DPAD_UP;
    if (down)  b |= XBOX_GAMEPAD_DPAD_DOWN;
    if (left)  b |= XBOX_GAMEPAD_DPAD_LEFT;
    if (right) b |= XBOX_GAMEPAD_DPAD_RIGHT;
    if (key_down(VK_ESCAPE) || key_down(VK_RETURN)) b |= XBOX_GAMEPAD_START;
    if (key_down(VK_BACK))   b |= XBOX_GAMEPAD_BACK;
    if (key_down('X'))       b |= XBOX_GAMEPAD_RIGHT_THUMB;   /* reset camera */
    pState->Gamepad.wButtons = b;

    /* Analog on the console, so a key is 255 rather than a flag -- a title
     * that reads these as a pressure never sees a press if they are 1.
     * The mouse buttons are recorded by the window like keys. */
#define PRESS(cond) ((cond) ? 255 : 0)
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_A] =
        PRESS(key_down(VK_SPACE) || key_down(VK_RCONTROL));              /* jump */
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_B] =
        PRESS(key_down('C') || key_down(VK_NUMPAD1));                    /* cancel */
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_X] =
        PRESS(key_down(VK_LBUTTON));                                     /* sword */
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_Y] =
        PRESS(key_down('E') || key_down(VK_MBUTTON));                    /* dagger */
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_WHITE] =
        PRESS(key_down('F') || key_down(VK_DELETE));                     /* look */
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_BLACK] =
        PRESS(key_down('Q') || key_down(VK_END));                        /* alt view */
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_LTRIGGER] =
        PRESS(key_down('R') || key_down(VK_RSHIFT));                     /* rewind */
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_RTRIGGER] =
        PRESS(key_down(VK_RBUTTON));                                     /* special */
#undef PRESS

    /* W A S D and the arrows. */
    if (key_down('A') || left)  lx -= 32767;
    if (key_down('D') || right) lx += 32767;
    if (key_down('S') || down)  ly -= 32767;
    if (key_down('W') || up)    ly += 32767;
    lx = lx < -32767 ? -32767 : lx > 32767 ? 32767 : lx;
    ly = ly < -32767 ? -32767 : ly > 32767 ? 32767 : ly;
    if (walk_toggled() && (lx || ly)) {
        int w = env_int("RECOMP_WALK_DEFLECTION", 12000, 1000, 32767);
        lx = lx * w / 32767;
        ly = ly * w / 32767;
    }
    pState->Gamepad.sThumbLX = (SHORT)lx;
    pState->Gamepad.sThumbLY = (SHORT)ly;
    mouse_thumb(&pState->Gamepad.sThumbRX, &pState->Gamepad.sThumbRY);

    /* The title's input layer looks for button edges, so the packet number
     * has to move whenever the state does or a press is never noticed. */
    pState->dwPacketNumber = ++packet;
}

void xbox_InputInit(void)
{
    for (DWORD i = 0; i < XBOX_MAX_CONTROLLERS; i++) {
        XINPUT_STATE state;
        DWORD result = XInputGetState(i, &state);
        g_controller_connected[i] = (result == ERROR_SUCCESS);
    }
}

/* RE-SoT: a joystick that is not an XInput device (a DirectInput pad or
 * stick), through WinMM. The layout is the common one for such pads: buttons
 * 1-4 A B X Y, 5/6 white/black, 7/8 the triggers, 9 BACK, 10 START, 11/12 the
 * thumb clicks, the hat the d-pad, X/Y the left thumb, Z/R (or U/R) the right.
 * Only asked when no XInput pad answers, because XInput pads are WinMM
 * joysticks too and would otherwise press everything twice. */
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

static SHORT joy_axis(DWORD v, DWORD lo, DWORD hi, int invert)
{
    long c = (long)(lo + hi) / 2, half = (long)(hi - lo) / 2, x;
    if (half <= 0)
        return 0;
    x = ((long)v - c) * 32767 / half;
    if (invert) x = -x;
    if (x > -4000 && x < 4000) x = 0;             /* dead zone */
    if (x > 32767) x = 32767;
    if (x < -32768) x = -32768;
    return (SHORT)x;
}

static int joystick_state(XBOX_INPUT_STATE *pState)
{
    static int id = -2;
    static DWORD retry;
    static JOYCAPSA caps;
    JOYINFOEX ji;
    WORD b = 0;
    int i;

    if (id == -1 && GetTickCount() - retry < 2000)
        return 0;                                  /* look again now and then */
    if (id < 0) {
        UINT n = joyGetNumDevs(), j;
        id = -1;
        retry = GetTickCount();
        for (j = 0; j < n && j < 16; j++) {
            memset(&ji, 0, sizeof ji);
            ji.dwSize = sizeof ji;
            ji.dwFlags = JOY_RETURNALL;
            if (joyGetPosEx(j, &ji) == JOYERR_NOERROR
                && joyGetDevCapsA(j, &caps, sizeof caps) == JOYERR_NOERROR) {
                id = (int)j;
                break;
            }
        }
        if (id < 0)
            return 0;
    }
    memset(&ji, 0, sizeof ji);
    ji.dwSize = sizeof ji;
    ji.dwFlags = JOY_RETURNALL;
    if (joyGetPosEx((UINT)id, &ji) != JOYERR_NOERROR) {
        id = -1;
        retry = GetTickCount();
        return 0;
    }
    memset(pState, 0, sizeof(*pState));
    for (i = 0; i < 8; i++) {
        static const int slot[8] = { XBOX_BUTTON_A, XBOX_BUTTON_B, XBOX_BUTTON_X,
                                     XBOX_BUTTON_Y, XBOX_BUTTON_WHITE, XBOX_BUTTON_BLACK,
                                     XBOX_BUTTON_LTRIGGER, XBOX_BUTTON_RTRIGGER };
        if (ji.dwButtons & (1u << i))
            pState->Gamepad.bAnalogButtons[slot[i]] = 255;
    }
    if (ji.dwButtons & (1u << 8))  b |= XBOX_GAMEPAD_BACK;
    if (ji.dwButtons & (1u << 9))  b |= XBOX_GAMEPAD_START;
    if (ji.dwButtons & (1u << 10)) b |= XBOX_GAMEPAD_LEFT_THUMB;
    if (ji.dwButtons & (1u << 11)) b |= XBOX_GAMEPAD_RIGHT_THUMB;
    if ((caps.wCaps & JOYCAPS_HASPOV) && ji.dwPOV != JOY_POVCENTERED) {
        DWORD p = ji.dwPOV;                        /* hundredths of a degree */
        if (p >= 31500 || p <= 4500)  b |= XBOX_GAMEPAD_DPAD_UP;
        if (p >= 4500 && p <= 13500)  b |= XBOX_GAMEPAD_DPAD_RIGHT;
        if (p >= 13500 && p <= 22500) b |= XBOX_GAMEPAD_DPAD_DOWN;
        if (p >= 22500 && p <= 31500) b |= XBOX_GAMEPAD_DPAD_LEFT;
    }
    pState->Gamepad.wButtons = b;
    pState->Gamepad.sThumbLX = joy_axis(ji.dwXpos, caps.wXmin, caps.wXmax, 0);
    pState->Gamepad.sThumbLY = joy_axis(ji.dwYpos, caps.wYmin, caps.wYmax, 1);
    if (caps.wNumAxes >= 4) {
        if (caps.wCaps & JOYCAPS_HASZ)
            pState->Gamepad.sThumbRX = joy_axis(ji.dwZpos, caps.wZmin, caps.wZmax, 0);
        else if (caps.wCaps & JOYCAPS_HASU)
            pState->Gamepad.sThumbRX = joy_axis(ji.dwUpos, caps.wUmin, caps.wUmax, 0);
        if (caps.wCaps & JOYCAPS_HASR)
            pState->Gamepad.sThumbRY = joy_axis(ji.dwRpos, caps.wRmin, caps.wRmax, 1);
    }
    return 1;
}

/* RE-SoT: port 0 is the first XInput pad connected on any of the four
 * indexes, not only index 0 (a pad that Windows numbered 1 used to be
 * ignored). */
static DWORD xinput_get_any(DWORD dwPort, XINPUT_STATE *xi)
{
    static DWORD preferred, last_scan;
    static int have = 1;
    DWORD i;

    if (dwPort != 0)
        return XInputGetState(dwPort, xi);
    if (have && XInputGetState(preferred, xi) == ERROR_SUCCESS)
        return ERROR_SUCCESS;
    /* Asking XInput about empty slots is slow, so with no pad the four
     * indexes are looked at every two seconds, not every frame. */
    if (!have && GetTickCount() - last_scan < 2000)
        return ERROR_DEVICE_NOT_CONNECTED;
    last_scan = GetTickCount();
    for (i = 0; i < XUSER_MAX_COUNT; i++)
        if (XInputGetState(i, xi) == ERROR_SUCCESS) {
            preferred = i;
            have = 1;
            return ERROR_SUCCESS;
        }
    have = 0;
    return ERROR_DEVICE_NOT_CONNECTED;
}

static void merge_state(XBOX_INPUT_STATE *dst, const XBOX_INPUT_STATE *src)
{
    int i;
    dst->Gamepad.wButtons |= src->Gamepad.wButtons;
    for (i = 0; i < 8; i++)
        if (src->Gamepad.bAnalogButtons[i] > dst->Gamepad.bAnalogButtons[i])
            dst->Gamepad.bAnalogButtons[i] = src->Gamepad.bAnalogButtons[i];
    if (src->Gamepad.sThumbLX) dst->Gamepad.sThumbLX = src->Gamepad.sThumbLX;
    if (src->Gamepad.sThumbLY) dst->Gamepad.sThumbLY = src->Gamepad.sThumbLY;
    if (src->Gamepad.sThumbRX) dst->Gamepad.sThumbRX = src->Gamepad.sThumbRX;
    if (src->Gamepad.sThumbRY) dst->Gamepad.sThumbRY = src->Gamepad.sThumbRY;
}

DWORD xbox_InputGetState(DWORD dwPort, XBOX_INPUT_STATE *pState)
{
    XINPUT_STATE xi_state;
    DWORD result;

    if (dwPort >= XBOX_MAX_CONTROLLERS || !pState)
        return ERROR_DEVICE_NOT_CONNECTED;

    result = xinput_get_any(dwPort, &xi_state);
    /* RE-SoT: pass controller-only input to the host remapper. This also
     * returns neutral state while F6 is open or the game lacks foreground. */
    if (s_host_filter) {
        int host_connected = result == ERROR_SUCCESS;
        memset(pState, 0, sizeof *pState);
        if (result == ERROR_SUCCESS) {
            pState->Gamepad.wButtons = xi_state.Gamepad.wButtons & 0x00FF;
            pState->Gamepad.bAnalogButtons[0] = (xi_state.Gamepad.wButtons & XINPUT_GAMEPAD_A) ? 255 : 0;
            pState->Gamepad.bAnalogButtons[1] = (xi_state.Gamepad.wButtons & XINPUT_GAMEPAD_B) ? 255 : 0;
            pState->Gamepad.bAnalogButtons[2] = (xi_state.Gamepad.wButtons & XINPUT_GAMEPAD_X) ? 255 : 0;
            pState->Gamepad.bAnalogButtons[3] = (xi_state.Gamepad.wButtons & XINPUT_GAMEPAD_Y) ? 255 : 0;
            pState->Gamepad.bAnalogButtons[4] = (xi_state.Gamepad.wButtons & XINPUT_GAMEPAD_LEFT_SHOULDER) ? 255 : 0;
            pState->Gamepad.bAnalogButtons[5] = (xi_state.Gamepad.wButtons & XINPUT_GAMEPAD_RIGHT_SHOULDER) ? 255 : 0;
            pState->Gamepad.bAnalogButtons[6] = xi_state.Gamepad.bLeftTrigger;
            pState->Gamepad.bAnalogButtons[7] = xi_state.Gamepad.bRightTrigger;
            pState->Gamepad.sThumbLX = xi_state.Gamepad.sThumbLX;
            pState->Gamepad.sThumbLY = xi_state.Gamepad.sThumbLY;
            pState->Gamepad.sThumbRX = xi_state.Gamepad.sThumbRX;
            pState->Gamepad.sThumbRY = xi_state.Gamepad.sThumbRY;
        } else if (dwPort == 0) {
            host_connected = joystick_state(pState) || keyboard_enabled();
        }
        pState->dwPacketNumber = ++g_last_packet[dwPort];
        s_host_filter(pState, dwPort);
        g_controller_connected[dwPort] = host_connected; /* RE-SoT: retain no-keyboard disconnect semantics. */
        return g_controller_connected[dwPort] ? ERROR_SUCCESS : ERROR_DEVICE_NOT_CONNECTED;
    }
    if (result != ERROR_SUCCESS && dwPort == 0) {
        /* RE-SoT: no XInput pad: a WinMM joystick, with the keyboard and
         * mouse merged on top. */
        XBOX_INPUT_STATE joy;
        int have_joy = joystick_state(&joy);
        if (have_joy || keyboard_enabled()) {
            if (keyboard_enabled())
                keyboard_state(pState);
            else
                memset(pState, 0, sizeof(*pState));
            if (have_joy)
                merge_state(pState, &joy);
            g_controller_connected[0] = TRUE;
            return ERROR_SUCCESS;
        }
    }
    if (result != ERROR_SUCCESS) {
        g_controller_connected[dwPort] = FALSE;
        if (dwPort == 0 && keyboard_enabled()) {
            keyboard_state(pState);
            return ERROR_SUCCESS;
        }
        return result;
    }

    g_controller_connected[dwPort] = TRUE;
    g_last_packet[dwPort] = xi_state.dwPacketNumber;

    memset(pState, 0, sizeof(XBOX_INPUT_STATE));
    pState->dwPacketNumber = xi_state.dwPacketNumber;
    pState->Gamepad.wButtons = xi_state.Gamepad.wButtons & 0x00FF;

    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_A] =
        (xi_state.Gamepad.wButtons & XINPUT_GAMEPAD_A) ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_B] =
        (xi_state.Gamepad.wButtons & XINPUT_GAMEPAD_B) ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_X] =
        (xi_state.Gamepad.wButtons & XINPUT_GAMEPAD_X) ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_Y] =
        (xi_state.Gamepad.wButtons & XINPUT_GAMEPAD_Y) ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_BLACK] =
        (xi_state.Gamepad.wButtons & XINPUT_GAMEPAD_LEFT_SHOULDER) ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_WHITE] =
        (xi_state.Gamepad.wButtons & XINPUT_GAMEPAD_RIGHT_SHOULDER) ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_LTRIGGER] = xi_state.Gamepad.bLeftTrigger;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_RTRIGGER] = xi_state.Gamepad.bRightTrigger;

    pState->Gamepad.sThumbLX = xi_state.Gamepad.sThumbLX;
    pState->Gamepad.sThumbLY = xi_state.Gamepad.sThumbLY;
    pState->Gamepad.sThumbRX = xi_state.Gamepad.sThumbRX;
    pState->Gamepad.sThumbRY = xi_state.Gamepad.sThumbRY;

    /* Merge the keyboard on top rather than only standing in for a missing
     * pad.
     *
     * The first version put the keyboard behind XInput's failure, on the
     * assumption that with nothing plugged in the call would fail. It does
     * not: under Wine XInputGetState returns ERROR_SUCCESS and a gamepad
     * with every button at rest, so the fallback was unreachable and
     * pressing a key did nothing at all.
     *
     * Merging is also the better rule. A real pad keeps working -- its
     * buttons are already in pState and the keyboard only adds to them --
     * and there is no special case left to get wrong. */
    if (dwPort == 0 && keyboard_enabled()) {
        XBOX_INPUT_STATE kb;
        keyboard_state(&kb);
        merge_state(pState, &kb);
        /* The input layer records edges, so an unchanged packet number is
         * read as the same state and the press never happens. */
        pState->dwPacketNumber = kb.dwPacketNumber;
    }

    return ERROR_SUCCESS;
}

DWORD xbox_InputSetState(DWORD dwPort, const XBOX_VIBRATION *pVibration)
{
    XINPUT_VIBRATION xi_vib;

    if (dwPort >= XBOX_MAX_CONTROLLERS || !pVibration)
        return ERROR_DEVICE_NOT_CONNECTED;

    xi_vib.wLeftMotorSpeed = pVibration->wLeftMotorSpeed;
    xi_vib.wRightMotorSpeed = pVibration->wRightMotorSpeed;
    if (dwPort == 0) {                    /* RE-SoT: whichever pad is port 0 */
        XINPUT_STATE xi;
        DWORD i;
        for (i = 0; i < XUSER_MAX_COUNT; i++)
            if (XInputGetState(i, &xi) == ERROR_SUCCESS)
                return XInputSetState(i, &xi_vib);
    }
    return XInputSetState(dwPort, &xi_vib);
}

BOOL xbox_InputIsConnected(DWORD dwPort)
{
    if (dwPort >= XBOX_MAX_CONTROLLERS) return FALSE;
    return g_controller_connected[dwPort];
}

DWORD xbox_InputGetCapabilities(DWORD dwPort, DWORD dwFlags, XBOX_INPUT_CAPABILITIES *pCaps)
{
    XINPUT_CAPABILITIES xi_caps;
    DWORD result;

    if (dwPort >= XBOX_MAX_CONTROLLERS || !pCaps)
        return ERROR_DEVICE_NOT_CONNECTED;

    result = XInputGetCapabilities(dwPort, dwFlags, &xi_caps);
    if (result != ERROR_SUCCESS) return result;

    memset(pCaps, 0, sizeof(XBOX_INPUT_CAPABILITIES));
    pCaps->Type = xi_caps.Type;
    pCaps->SubType = xi_caps.SubType;
    pCaps->Flags = xi_caps.Flags;
    return ERROR_SUCCESS;
}

/* ======================================================================== */
#else /* !_WIN32 */
/* ====================  SDL2 GameController backend  ===================== */
/* ======================================================================== */

#include <SDL.h>

static SDL_GameController *g_pads[XBOX_MAX_CONTROLLERS];
static BOOL  g_controller_connected[XBOX_MAX_CONTROLLERS];
static DWORD g_packet[XBOX_MAX_CONTROLLERS];

/* Open up to XBOX_MAX_CONTROLLERS attached game controllers. */
static void open_controllers(void)
{
    int slot = 0;
    for (int i = 0; i < SDL_NumJoysticks() && slot < XBOX_MAX_CONTROLLERS; i++) {
        if (!SDL_IsGameController(i))
            continue;
        if (!g_pads[slot]) {
            g_pads[slot] = SDL_GameControllerOpen(i);
            g_controller_connected[slot] = (g_pads[slot] != NULL);
        }
        slot++;
    }
}

void xbox_InputInit(void)
{
    if (!SDL_WasInit(SDL_INIT_GAMECONTROLLER))
        SDL_InitSubSystem(SDL_INIT_GAMECONTROLLER);
    open_controllers();
}

DWORD xbox_InputGetState(DWORD dwPort, XBOX_INPUT_STATE *pState)
{
    if (dwPort >= XBOX_MAX_CONTROLLERS || !pState)
        return ERROR_DEVICE_NOT_CONNECTED;

    SDL_GameController *c = g_pads[dwPort];
    if (!c || !SDL_GameControllerGetAttached(c)) {
        g_controller_connected[dwPort] = FALSE;
        return ERROR_DEVICE_NOT_CONNECTED;
    }

    SDL_GameControllerUpdate();
    g_controller_connected[dwPort] = TRUE;

    memset(pState, 0, sizeof(XBOX_INPUT_STATE));
    pState->dwPacketNumber = ++g_packet[dwPort];

    WORD btn = 0;
    if (SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_DPAD_UP))    btn |= XBOX_GAMEPAD_DPAD_UP;
    if (SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_DPAD_DOWN))  btn |= XBOX_GAMEPAD_DPAD_DOWN;
    if (SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_DPAD_LEFT))  btn |= XBOX_GAMEPAD_DPAD_LEFT;
    if (SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_DPAD_RIGHT)) btn |= XBOX_GAMEPAD_DPAD_RIGHT;
    if (SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_START))      btn |= XBOX_GAMEPAD_START;
    if (SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_BACK))       btn |= XBOX_GAMEPAD_BACK;
    if (SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_LEFTSTICK))  btn |= XBOX_GAMEPAD_LEFT_THUMB;
    if (SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_RIGHTSTICK)) btn |= XBOX_GAMEPAD_RIGHT_THUMB;
    pState->Gamepad.wButtons = btn;

    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_A] =
        SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_A) ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_B] =
        SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_B) ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_X] =
        SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_X) ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_Y] =
        SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_Y) ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_BLACK] =
        SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_LEFTSHOULDER) ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_WHITE] =
        SDL_GameControllerGetButton(c, SDL_CONTROLLER_BUTTON_RIGHTSHOULDER) ? 255 : 0;

    /* SDL trigger axes are 0..32767 -> Xbox analog button 0..255 */
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_LTRIGGER] =
        (BYTE)(SDL_GameControllerGetAxis(c, SDL_CONTROLLER_AXIS_TRIGGERLEFT) >> 7);
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_RTRIGGER] =
        (BYTE)(SDL_GameControllerGetAxis(c, SDL_CONTROLLER_AXIS_TRIGGERRIGHT) >> 7);

    /* SDL Y axis points down; the Xbox Y axis points up -- invert.
     * Use (-1 - v) so v = -32768 does not overflow SHORT. */
    pState->Gamepad.sThumbLX = SDL_GameControllerGetAxis(c, SDL_CONTROLLER_AXIS_LEFTX);
    pState->Gamepad.sThumbLY =
        (SHORT)(-1 - SDL_GameControllerGetAxis(c, SDL_CONTROLLER_AXIS_LEFTY));
    pState->Gamepad.sThumbRX = SDL_GameControllerGetAxis(c, SDL_CONTROLLER_AXIS_RIGHTX);
    pState->Gamepad.sThumbRY =
        (SHORT)(-1 - SDL_GameControllerGetAxis(c, SDL_CONTROLLER_AXIS_RIGHTY));

    return ERROR_SUCCESS;
}

DWORD xbox_InputSetState(DWORD dwPort, const XBOX_VIBRATION *pVibration)
{
    if (dwPort >= XBOX_MAX_CONTROLLERS || !pVibration)
        return ERROR_DEVICE_NOT_CONNECTED;

    SDL_GameController *c = g_pads[dwPort];
    if (!c) return ERROR_DEVICE_NOT_CONNECTED;

    /* SDL rumble needs a duration; refresh for ~1s on each call (the game
     * polls vibration continuously). */
    SDL_GameControllerRumble(c, pVibration->wLeftMotorSpeed,
                             pVibration->wRightMotorSpeed, 1000);
    return ERROR_SUCCESS;
}

BOOL xbox_InputIsConnected(DWORD dwPort)
{
    if (dwPort >= XBOX_MAX_CONTROLLERS) return FALSE;
    return g_controller_connected[dwPort];
}

DWORD xbox_InputGetCapabilities(DWORD dwPort, DWORD dwFlags, XBOX_INPUT_CAPABILITIES *pCaps)
{
    (void)dwFlags;
    if (dwPort >= XBOX_MAX_CONTROLLERS || !pCaps)
        return ERROR_DEVICE_NOT_CONNECTED;
    if (!g_pads[dwPort])
        return ERROR_DEVICE_NOT_CONNECTED;

    memset(pCaps, 0, sizeof(XBOX_INPUT_CAPABILITIES));
    pCaps->Type    = 1;   /* XINPUT_DEVTYPE_GAMEPAD */
    pCaps->SubType = 1;   /* XINPUT_DEVSUBTYPE_GAMEPAD */
    pCaps->Flags   = 0;
    return ERROR_SUCCESS;
}

#endif /* _WIN32 */
