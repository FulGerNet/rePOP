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

/* ---- keyboard, when there is no pad --------------------------------------
 *
 * A title that waits on PRESS START is unreachable on a machine with no
 * controller plugged in, which is most machines someone brings this up on.
 * The whole point of a recompilation is to be able to look at the thing
 * running, and a build nobody can press a button in cannot be looked at.
 *
 * RE-SoT: on unless RECOMP_KEYBOARD=0 (port/windows/src/main.c sets it). It
 * only ever answers for port 0, and is merged on top of a pad connected
 * there, so a real controller keeps working. The layout is a PC game's, with
 * the mouse buttons:
 *
 *   W A S D       left thumb        Enter         START
 *   Space, left mouse button  A     Esc/Backspace BACK
 *   Q             B                 F             X
 *   E             Y                 R             left trigger
 *   right mouse button  right trigger
 *   arrows        d-pad             I J K L       right thumb
 *   Z C           white black       Shift Ctrl    left / right thumb click
 *   numpad 8/2/4/6 left thumb as well
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

/* A thumb axis from two keys, at the full deflection a digital key implies. */
static SHORT axis_from_keys(int negative, int positive)
{
    int v = 0;
    if (key_down(negative)) v -= 32767;
    if (key_down(positive)) v += 32767;
    return (SHORT)v;
}

static void keyboard_state(XBOX_INPUT_STATE *pState)
{
    static DWORD packet;
    WORD b = 0;

    memset(pState, 0, sizeof(*pState));

    if (key_down(VK_UP))     b |= XBOX_GAMEPAD_DPAD_UP;
    if (key_down(VK_DOWN))   b |= XBOX_GAMEPAD_DPAD_DOWN;
    if (key_down(VK_LEFT))   b |= XBOX_GAMEPAD_DPAD_LEFT;
    if (key_down(VK_RIGHT))  b |= XBOX_GAMEPAD_DPAD_RIGHT;
    if (key_down(VK_RETURN)) b |= XBOX_GAMEPAD_START;
    if (key_down(VK_BACK) || key_down(VK_ESCAPE)) b |= XBOX_GAMEPAD_BACK;
    if (key_down(VK_SHIFT))  b |= XBOX_GAMEPAD_LEFT_THUMB;
    if (key_down(VK_CONTROL))b |= XBOX_GAMEPAD_RIGHT_THUMB;
    pState->Gamepad.wButtons = b;

    /* Analog on the console, so a key is 255 rather than a flag -- a title
     * that reads these as a pressure never sees a press if they are 1.
     * VK_LBUTTON/VK_RBUTTON are recorded by the window like keys. */
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_A] =
        (key_down(VK_SPACE) || key_down(VK_LBUTTON)) ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_B]        = key_down('Q') ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_X]        = key_down('F') ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_Y]        = key_down('E') ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_WHITE]    = key_down('Z') ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_BLACK]    = key_down('C') ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_LTRIGGER] = key_down('R') ? 255 : 0;
    pState->Gamepad.bAnalogButtons[XBOX_BUTTON_RTRIGGER] = key_down(VK_RBUTTON) ? 255 : 0;

    /* W A S D, and the numeric pad's 8 4 2 6. */
    pState->Gamepad.sThumbLX = axis_from_keys('A', 'D');
    pState->Gamepad.sThumbLY = axis_from_keys('S', 'W');
    if (!pState->Gamepad.sThumbLX)
        pState->Gamepad.sThumbLX = axis_from_keys(VK_NUMPAD4, VK_NUMPAD6);
    if (!pState->Gamepad.sThumbLY)
        pState->Gamepad.sThumbLY = axis_from_keys(VK_NUMPAD2, VK_NUMPAD8);
    pState->Gamepad.sThumbRX = axis_from_keys('J', 'L');
    pState->Gamepad.sThumbRY = axis_from_keys('K', 'I');

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
