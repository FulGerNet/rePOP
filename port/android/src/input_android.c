/**
 * reSOT - Android input: physical gamepads (SDL3), a hardware keyboard and
 * the on-screen touch controls (TouchControls.java), merged into the Xbox
 * pad state the runtime asks for (src/input/xinput_xbox.h).
 *
 * The Windows host's xinput_device.c does the same with XInput and the
 * window's keys. The layout is the Xbox pad's own:
 *
 *   A jump          B cancel / drop     X sword          Y dagger
 *   black alt view  white camera look   L trigger rewind R trigger special
 *   left stick move right stick camera  right stick click reset camera
 *   START pause     BACK back           d-pad menus
 *
 * Keys go to the framebuffer layer as virtual-key codes, so the options'
 * keyboard bindings (options_android.c, the same defaults as Windows) work
 * with a Bluetooth or USB keyboard. Everything ends in the options' host
 * filter, as on Windows, which applies the joystick bindings.
 */
#include <SDL3/SDL.h>
#include <jni.h>
#include <pthread.h>
#include <stdint.h>
#include <string.h>

#include "platform/win32_compat.h"
#include "xinput_xbox.h"
#include "../../game/resot_menu_pointer.h"

extern void xbox_FramebufferHostKey(int vk, int down);
extern void xbox_FramebufferHostMouse(int dx, int dy);
extern void xbox_FramebufferToggleDebugPanel(void);
extern int xbox_FramebufferFpsVisible(void);
extern int  xbox_FramebufferKeyDown(int vk);
extern int  usb_gamepad_report(int pad, uint8_t *out, int max);

static void (*s_host_filter)(void *, unsigned);
void xbox_InputSetHostFilter(void (*filter)(void *, unsigned)) { s_host_filter = filter; }

/* ── touch (TouchControls.java, UI thread) ─────────────────── */

static pthread_mutex_t s_touch_lock = PTHREAD_MUTEX_INITIALIZER;
/* SDL gamepad axes (lx, ly, rx, ry, lt, rt) and SDL_GamepadButton bits. */
static int32_t s_touch[7];
static volatile int s_rumble;      /* 0..255, for the phone's vibrator */

JNIEXPORT jint JNICALL Java_com_fulger_resot_TouchControls_nativeScene(JNIEnv *env, jclass cls)
{
    (void)env; (void)cls;
    return resot_menu_scene();
}

JNIEXPORT void JNICALL Java_com_fulger_resot_TouchControls_nativeViewport(
    JNIEnv *env, jclass cls, jfloat aspect)
{
    (void)env; (void)cls;
    resot_menu_pointer_viewport(aspect);
}

JNIEXPORT void JNICALL Java_com_fulger_resot_TouchControls_nativePointer(
    JNIEnv *env, jclass cls, jfloat x, jfloat y, jint action)
{
    (void)env; (void)cls;
    resot_menu_pointer_event(x, y, action);
}

JNIEXPORT void JNICALL Java_com_fulger_resot_TouchControls_nativeState(
    JNIEnv *env, jclass cls, jint lx, jint ly, jint rx, jint ry, jint lt, jint rt, jint buttons)
{
    (void)env; (void)cls;
    pthread_mutex_lock(&s_touch_lock);
    s_touch[0] = lx; s_touch[1] = ly; s_touch[2] = rx; s_touch[3] = ry;
    s_touch[4] = lt; s_touch[5] = rt; s_touch[6] = buttons;
    pthread_mutex_unlock(&s_touch_lock);
}

JNIEXPORT jint JNICALL Java_com_fulger_resot_TouchControls_nativeRumble(JNIEnv *env, jclass cls)
{
    (void)env; (void)cls;
    return s_rumble;
}

JNIEXPORT void JNICALL Java_com_fulger_resot_TouchControls_nativeToggleFps(JNIEnv *env, jclass cls)
{
    (void)env; (void)cls;
    xbox_FramebufferToggleDebugPanel();
}

JNIEXPORT jboolean JNICALL Java_com_fulger_resot_TouchControls_nativeFpsVisible(JNIEnv *env, jclass cls)
{
    (void)env; (void)cls;
    return xbox_FramebufferFpsVisible() ? JNI_TRUE : JNI_FALSE;
}

/* ── physical gamepads (SDL thread opens them) ─────────────── */

static SDL_Gamepad *s_pads[XBOX_MAX_CONTROLLERS];
static DWORD s_packet[XBOX_MAX_CONTROLLERS];
static SDL_Mutex *s_pad_lock;

static void open_pad(SDL_JoystickID id)
{
    int i;
    for (i = 0; i < XBOX_MAX_CONTROLLERS; i++)
        if (s_pads[i] && SDL_GetGamepadID(s_pads[i]) == id) return;
    for (i = 0; i < XBOX_MAX_CONTROLLERS; i++)
        if (!s_pads[i]) {
            s_pads[i] = SDL_OpenGamepad(id);
            if (s_pads[i])
                fprintf(stderr, "  [INPUT] gamepad %d: %s\n", i, SDL_GetGamepadName(s_pads[i]));
            return;
        }
}

static void close_pad(SDL_JoystickID id)
{
    int i;
    for (i = 0; i < XBOX_MAX_CONTROLLERS; i++)
        if (s_pads[i] && SDL_GetGamepadID(s_pads[i]) == id) {
            SDL_CloseGamepad(s_pads[i]);
            s_pads[i] = NULL;
            fprintf(stderr, "  [INPUT] gamepad %d removed\n", i);
        }
}

void resot_android_input_start(SDL_Window *window)
{
    int count = 0, i;
    SDL_JoystickID *ids;
    (void)window;
    s_pad_lock = SDL_CreateMutex();
    SDL_SetHint(SDL_HINT_ANDROID_TRAP_BACK_BUTTON, "1");
    ids = SDL_GetGamepads(&count);
    SDL_LockMutex(s_pad_lock);
    for (i = 0; ids && i < count; i++) open_pad(ids[i]);
    SDL_UnlockMutex(s_pad_lock);
    SDL_free(ids);
}

/* SDL keycodes to the Windows virtual keys the options bind. */
static int vk_from_key(SDL_Keycode key, SDL_Scancode scan)
{
    if (key >= SDLK_A && key <= SDLK_Z) return 'A' + (int)(key - SDLK_A);
    if (key >= SDLK_0 && key <= SDLK_9) return '0' + (int)(key - SDLK_0);
    switch (scan) {
    case SDL_SCANCODE_LSHIFT: return VK_LSHIFT;
    case SDL_SCANCODE_RSHIFT: return VK_RSHIFT;
    case SDL_SCANCODE_LCTRL: return VK_LCONTROL;
    case SDL_SCANCODE_RCTRL: return VK_RCONTROL;
    case SDL_SCANCODE_LALT: return VK_LMENU;
    case SDL_SCANCODE_RALT: return VK_RMENU;
    case SDL_SCANCODE_SPACE: return VK_SPACE;
    case SDL_SCANCODE_RETURN: return VK_RETURN;
    case SDL_SCANCODE_ESCAPE: return VK_ESCAPE;
    case SDL_SCANCODE_BACKSPACE: return VK_BACK;
    case SDL_SCANCODE_TAB: return VK_TAB;
    case SDL_SCANCODE_UP: return VK_UP;
    case SDL_SCANCODE_DOWN: return VK_DOWN;
    case SDL_SCANCODE_LEFT: return VK_LEFT;
    case SDL_SCANCODE_RIGHT: return VK_RIGHT;
    case SDL_SCANCODE_DELETE: return VK_DELETE;
    case SDL_SCANCODE_END: return VK_END;
    case SDL_SCANCODE_KP_PERIOD: return VK_DECIMAL;
    case SDL_SCANCODE_KP_1: return VK_NUMPAD1;
    case SDL_SCANCODE_F5: return VK_F5;
    /* The Android back key leaves a page in the game's menus, as B does. */
    case SDL_SCANCODE_AC_BACK: return -2;
    default: return -1;
    }
}

static volatile int s_back_down;

/* Android mice use the same absolute menu path as the Windows host. */
static void menu_mouse(SDL_WindowID window, float x, float y, int action)
{
    int w = 0, h = 0;
    SDL_Window *win = SDL_GetWindowFromID(window);
    if (win && SDL_GetWindowSize(win, &w, &h) && w > 0 && h > 0) {
        resot_menu_pointer_viewport((float)w / h);
        resot_menu_pointer_event(x / w, y / h, action);
    }
}

/* Called on the SDL thread for every event (main_android.c). */
void resot_android_input_event(const SDL_Event *e)
{
    switch (e->type) {
    case SDL_EVENT_GAMEPAD_ADDED:
        SDL_LockMutex(s_pad_lock); open_pad(e->gdevice.which); SDL_UnlockMutex(s_pad_lock);
        break;
    case SDL_EVENT_GAMEPAD_REMOVED:
        SDL_LockMutex(s_pad_lock); close_pad(e->gdevice.which); SDL_UnlockMutex(s_pad_lock);
        break;
    case SDL_EVENT_KEY_DOWN:
    case SDL_EVENT_KEY_UP: {
        int down = e->type == SDL_EVENT_KEY_DOWN;
        int vk = vk_from_key(e->key.key, e->key.scancode);
        if (vk == -2) { s_back_down = down; break; }
        if (vk == VK_F5) { if (down && !e->key.repeat) xbox_FramebufferToggleDebugPanel(); break; }
        if (vk > 0) xbox_FramebufferHostKey(vk, down);
        break;
    }
    case SDL_EVENT_MOUSE_MOTION:
        if (e->motion.which != SDL_TOUCH_MOUSEID) {
            if (resot_menu_scene() != 0)
                menu_mouse(e->motion.windowID, e->motion.x, e->motion.y, 0);
            else xbox_FramebufferHostMouse((int)e->motion.xrel, (int)e->motion.yrel);
        }
        break;
    case SDL_EVENT_MOUSE_BUTTON_DOWN:
    case SDL_EVENT_MOUSE_BUTTON_UP:
        if (e->button.which != SDL_TOUCH_MOUSEID) {
            if (resot_menu_scene() != 0) {
                int down = e->type == SDL_EVENT_MOUSE_BUTTON_DOWN;
                if (e->button.button == SDL_BUTTON_LEFT)
                    menu_mouse(e->button.windowID, e->button.x, e->button.y, down ? 1 : 2);
                else if (e->button.button == SDL_BUTTON_RIGHT && !down)
                    menu_mouse(e->button.windowID, e->button.x, e->button.y, 4);
                break;
            }
            int vk = e->button.button == SDL_BUTTON_LEFT ? VK_LBUTTON
                   : e->button.button == SDL_BUTTON_RIGHT ? VK_RBUTTON : VK_MBUTTON;
            xbox_FramebufferHostKey(vk, e->type == SDL_EVENT_MOUSE_BUTTON_DOWN);
        }
        break;
    case SDL_EVENT_WINDOW_FOCUS_LOST:
    case SDL_EVENT_DID_ENTER_BACKGROUND: {
        resot_menu_pointer_event(0, 0, 3);
        int vk;
        for (vk = 1; vk < 256; vk++) xbox_FramebufferHostKey(vk, 0);
        s_back_down = 0;
        break;
    }
    default:
        break;
    }
}

/* ── the Xbox pad ──────────────────────────────────────────── */

static BYTE analog(int pressed) { return pressed ? 255 : 0; }

/* SDL's buttons and axes into an Xbox pad (Y axes inverted: up is +). */
static void from_sdl(XBOX_GAMEPAD *g, const int32_t axis[6], uint32_t bits)
{
    WORD w = 0;
    if (bits & (1u << SDL_GAMEPAD_BUTTON_DPAD_UP))    w |= XBOX_GAMEPAD_DPAD_UP;
    if (bits & (1u << SDL_GAMEPAD_BUTTON_DPAD_DOWN))  w |= XBOX_GAMEPAD_DPAD_DOWN;
    if (bits & (1u << SDL_GAMEPAD_BUTTON_DPAD_LEFT))  w |= XBOX_GAMEPAD_DPAD_LEFT;
    if (bits & (1u << SDL_GAMEPAD_BUTTON_DPAD_RIGHT)) w |= XBOX_GAMEPAD_DPAD_RIGHT;
    if (bits & (1u << SDL_GAMEPAD_BUTTON_START))      w |= XBOX_GAMEPAD_START;
    if (bits & (1u << SDL_GAMEPAD_BUTTON_BACK))       w |= XBOX_GAMEPAD_BACK;
    if (bits & (1u << SDL_GAMEPAD_BUTTON_LEFT_STICK)) w |= XBOX_GAMEPAD_LEFT_THUMB;
    if (bits & (1u << SDL_GAMEPAD_BUTTON_RIGHT_STICK)) w |= XBOX_GAMEPAD_RIGHT_THUMB;
    g->wButtons |= w;
#define MAXB(i, v) do { BYTE _v = (v); if (_v > g->bAnalogButtons[i]) g->bAnalogButtons[i] = _v; } while (0)
    MAXB(XBOX_BUTTON_A, analog(bits & (1u << SDL_GAMEPAD_BUTTON_SOUTH)));
    MAXB(XBOX_BUTTON_B, analog(bits & (1u << SDL_GAMEPAD_BUTTON_EAST)));
    MAXB(XBOX_BUTTON_X, analog(bits & (1u << SDL_GAMEPAD_BUTTON_WEST)));
    MAXB(XBOX_BUTTON_Y, analog(bits & (1u << SDL_GAMEPAD_BUTTON_NORTH)));
    MAXB(XBOX_BUTTON_BLACK, analog(bits & (1u << SDL_GAMEPAD_BUTTON_LEFT_SHOULDER)));
    MAXB(XBOX_BUTTON_WHITE, analog(bits & (1u << SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER)));
    MAXB(XBOX_BUTTON_LTRIGGER, (BYTE)(axis[4] > 0 ? axis[4] >> 7 : 0));
    MAXB(XBOX_BUTTON_RTRIGGER, (BYTE)(axis[5] > 0 ? axis[5] >> 7 : 0));
#undef MAXB
    /* The larger deflection wins, so a pad and the touch stick can share. */
#define STICK(field, v) do { int _v = (v); if (_v > 32767) _v = 32767; if (_v < -32767) _v = -32767; \
        if ((_v < 0 ? -_v : _v) > (g->field < 0 ? -g->field : g->field)) g->field = (SHORT)_v; } while (0)
    STICK(sThumbLX, axis[0]);
    STICK(sThumbLY, -axis[1]);
    STICK(sThumbRX, axis[2]);
    STICK(sThumbRY, -axis[3]);
#undef STICK
}

void xbox_InputInit(void) {}

DWORD xbox_InputGetState(DWORD port, XBOX_INPUT_STATE *state)
{
    int any = 0;
    if (port >= XBOX_MAX_CONTROLLERS || !state)
        return ERROR_DEVICE_NOT_CONNECTED;
    memset(state, 0, sizeof *state);
    if (s_pad_lock) SDL_LockMutex(s_pad_lock);
    if (s_pads[port]) {
        SDL_Gamepad *c = s_pads[port];
        int32_t axis[6];
        uint32_t bits = 0;
        int b;
        for (b = 0; b < SDL_GAMEPAD_BUTTON_COUNT && b < 32; b++)
            if (SDL_GetGamepadButton(c, (SDL_GamepadButton)b)) bits |= 1u << b;
        for (b = 0; b < 6; b++) axis[b] = SDL_GetGamepadAxis(c, (SDL_GamepadAxis)b);
        from_sdl(&state->Gamepad, axis, bits);
        any = 1;
    }
    if (s_pad_lock) SDL_UnlockMutex(s_pad_lock);
    if (port == 0) {
        int32_t touch[7];
        pthread_mutex_lock(&s_touch_lock);
        memcpy(touch, s_touch, sizeof touch);
        pthread_mutex_unlock(&s_touch_lock);
        /* Java clears held controls on context changes, and can explicitly
         * reopen the full pad in menus/cinematics. Also retain its corner
         * Back/Confirm pulses while the gameplay pad is hidden. */
        from_sdl(&state->Gamepad, touch, (uint32_t)touch[6]);
        if (s_back_down) state->Gamepad.bAnalogButtons[XBOX_BUTTON_B] = 255;
        any = 1;   /* the touch controls are always a pad on port 0 */
    }
    if (!any)
        return ERROR_DEVICE_NOT_CONNECTED;
    state->dwPacketNumber = ++s_packet[port];
    if (s_host_filter)
        s_host_filter(state, (unsigned)port);
    return ERROR_SUCCESS;
}

DWORD xbox_InputSetState(DWORD port, const XBOX_VIBRATION *v)
{
    if (port >= XBOX_MAX_CONTROLLERS || !v)
        return ERROR_DEVICE_NOT_CONNECTED;
    if (port == 0) {
        unsigned strongest = v->wLeftMotorSpeed > v->wRightMotorSpeed ? v->wLeftMotorSpeed : v->wRightMotorSpeed;
        s_rumble = (int)(strongest >> 8);
    }
    if (s_pad_lock) SDL_LockMutex(s_pad_lock);
    if (s_pads[port])
        SDL_RumbleGamepad(s_pads[port], v->wLeftMotorSpeed, v->wRightMotorSpeed, 1000);
    if (s_pad_lock) SDL_UnlockMutex(s_pad_lock);
    return ERROR_SUCCESS;
}

BOOL xbox_InputIsConnected(DWORD port)
{
    return port == 0 || (port < XBOX_MAX_CONTROLLERS && s_pads[port] != NULL);
}

DWORD xbox_InputGetCapabilities(DWORD port, DWORD flags, XBOX_INPUT_CAPABILITIES *caps)
{
    (void)flags;
    if (!caps || !xbox_InputIsConnected(port))
        return ERROR_DEVICE_NOT_CONNECTED;
    memset(caps, 0, sizeof *caps);
    caps->Type = 1;
    caps->SubType = 1;
    return ERROR_SUCCESS;
}

/* Space or A skips a movie (the targets' hooks), as on Windows. */
int resot_movie_skip_down(void)
{
    uint8_t report[20];
    return xbox_FramebufferKeyDown(VK_SPACE)
        || (usb_gamepad_report(0, report, sizeof report) == 20 && report[4] > 30);
}
