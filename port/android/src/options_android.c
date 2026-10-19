/* reSOT - Android host options: the API of port/windows/options.h for the
 * game's own reSOT Options pages (source/<target>/target_hooks.c), kept in
 * <app files>/resot-options.ini.
 *
 * The same settings and bindings as the Windows host (options.c), with the
 * same defaults and the same pad remapping, so a layout behaves alike on
 * both: Graphics (FPS limit, VSync, post-processing; Android's resolution
 * controls internal rendering), Keyboard (a Bluetooth/USB keyboard) and Joystick. There is no
 * F6/F7 panel on Android; the touch controls are configured in the app
 * (TouchControls.java). */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "platform/win32_compat.h"
#include "../../windows/src/options.h"

enum { MOVE_UP, MOVE_DOWN, MOVE_LEFT, MOVE_RIGHT, WALK, JUMP, SWORD, DAGGER,
       SPECIAL, CANCEL, REWIND, LOOK, ALT_VIEW, RESET_CAMERA, PAUSE, BACK,
       MENU_UP, MENU_DOWN, MENU_LEFT, MENU_RIGHT, CAMERA_UP, CAMERA_DOWN,
       CAMERA_LEFT, CAMERA_RIGHT, LEFT_CLICK, ACTIONS };
typedef struct {
    uint32_t packet;
    struct { uint16_t buttons; uint8_t analog[8]; int16_t lx, ly, rx, ry; } pad;
} HostPad;
_Static_assert(sizeof(HostPad) == 24, "Host controller layout must match the runtime Xbox state");

/* The Windows host's defaults (options.c). */
static const int s_default_keys[ACTIONS] = {
    'W','S','A','D',VK_LSHIFT,VK_SPACE,VK_LBUTTON,'E',VK_RBUTTON,'C','R','F','Q','X',
    VK_ESCAPE,VK_BACK,VK_UP,VK_DOWN,VK_LEFT,VK_RIGHT,'I','K','J','L',0
};
static const int s_default_joy[ACTIONS] = {
    17,18,19,20,0,1,3,4,8,2,7,6,5,12,9,10,13,14,15,16,21,22,23,24,11
};
static const int s_aliases[ACTIONS] = {
    VK_UP,VK_DOWN,VK_LEFT,VK_RIGHT,VK_DECIMAL,VK_RCONTROL,0,VK_MBUTTON,0,VK_NUMPAD1,
    VK_RSHIFT,VK_DELETE,VK_END,0,VK_RETURN,0,0,0,0,0,0,0,0,0,0
};
static const char *const s_native_actions[ACTIONS] = {
    "Forward", "Backward", "Left", "Right", "Walk", "Jump", "Sword", "Dagger",
    "Special", "Cancel", "Rewind", "Look", "Alt view", "Reset cam", "Pause", "Back",
    "Menu up", "Menu down", "Menu left", "Menu right", "Cam up", "Cam down",
    "Cam left", "Cam right", "Stick click"
};
static const char *const s_native_joy[25] = {
    "None", "A", "B", "X", "Y", "Black", "White", "L trigger", "R trigger", "Start", "Back",
    "L stick", "R stick", "Pad up", "Pad down", "Pad left", "Pad right", "L up", "L down",
    "L left", "L right", "R up", "R down", "R left", "R right"
};
static const char *const s_cap_names[] = {"30", "60", "120", "None"};
static const int s_render_scales[] = {50,75,100,150,225,300};
static const char *const s_render_names[] = {"240p (0.5x)","360p (0.75x)","480p (1x)","720p (1.5x)","1080p (2.25x)","1440p (3x)"};
static int s_resolution = 2; /* Android default: guest-sized main targets. */

static SRWLOCK s_lock = SRWLOCK_INIT;
static volatile LONG s_revision;
static int s_keys[ACTIONS], s_joy[ACTIONS], s_fps = 60, s_vsync = 1, s_post_processing = 0;
static int s_capture = -1, s_capture_tab, s_capture_armed, s_native_capture;
static DWORD s_native_since;
static int s_joy_was[25], s_key_was[256], s_walk, s_walk_was;
static int s_keyboard_enabled = 1, s_mouse_speed = 43, s_walk_deflection = 12000;
static int s_look_sensitivity = 100;
static char s_path[1200];

extern int  xbox_FramebufferKeyDown(int);
extern void xbox_FramebufferTakeMouse(int *, int *);
extern void xbox_SetFrameLimit(int);
extern void xbox_SetVSync(int);
extern void xbox_SetPostProcessing(int);
extern void xbox_SetRenderScalePercent(int);
extern void xbox_InputSetHostFilter(void (*)(void *, unsigned));
extern const char *resot_android_data_dir(void);

static void mark_dirty(void) { InterlockedIncrement(&s_revision); }
long resot_native_revision(void) { return InterlockedCompareExchange(&s_revision, 0, 0); }

void resot_options_summary(char *out, unsigned size)
{
    AcquireSRWLockShared(&s_lock);
    snprintf(out, size, "FPS limit %s, VSync %s, post-processing %s, internal resolution %s",
             s_cap_names[s_fps == 30 ? 0 : s_fps == 60 ? 1 : s_fps == 120 ? 2 : 3],
             s_vsync ? "on" : "off", s_post_processing ? "on" : "off",s_render_names[s_resolution]);
    ReleaseSRWLockShared(&s_lock);
}

/* No host panel on Android. */
int resot_diag_panel(const uint32_t **pixels, uint32_t *width, uint32_t *height)
{ (void)pixels; (void)width; (void)height; return 0; }
int resot_diag_event(void *window, unsigned message, uintptr_t wp, intptr_t lp)
{ (void)window; (void)message; (void)wp; (void)lp; return 0; }

/* ── resot-options.ini ─────────────────────────────────────── */

static int ini_get(const char *section, const char *key, int fallback)
{
    char line[256], current[64] = "";
    FILE *f = fopen(s_path, "r");
    int value = fallback;
    if (!f) return fallback;
    while (fgets(line, sizeof line, f)) {
        char *eq;
        size_t n = strlen(line);
        while (n && (line[n - 1] == '\n' || line[n - 1] == '\r')) line[--n] = 0;
        if (line[0] == '[') {
            char *end = strchr(line, ']');
            if (end) { *end = 0; snprintf(current, sizeof current, "%s", line + 1); }
            continue;
        }
        eq = strchr(line, '=');
        if (!eq || strcmp(current, section)) continue;
        *eq = 0;
        if (!strcmp(line, key)) value = atoi(eq + 1);
    }
    fclose(f);
    return value;
}

static int save_config(void)
{
    FILE *f;
    int i;
    if (getenv("RECOMP_PAD_SCRIPT") || getenv("RECOMP_PAD_LIVE")) { mark_dirty(); return 1; }
    f = fopen(s_path, "w");
    if (!f) {
        fprintf(stderr, "[OPTIONS] could not save %s\n", s_path);
        mark_dirty();
        return 0;
    }
    fprintf(f, "[Graphics]\nRenderer=vulkan\nFPSLimit=%d\nVSync=%d\nPostProcessing=%d\nInternalResolutionPercent=%d\n",
            s_fps, s_vsync, s_post_processing,s_render_scales[s_resolution]);
    fprintf(f, "[Controls]\nLookSensitivityPercent=%d\n",s_look_sensitivity);
    fprintf(f, "[Keyboard]\n");
    for (i = 0; i < ACTIONS; i++) fprintf(f, "Action%d=%d\n", i, s_keys[i]);
    fprintf(f, "[Joystick]\n");
    for (i = 0; i < ACTIONS; i++) fprintf(f, "Action%d=%d\n", i, s_joy[i]);
    fclose(f);
    mark_dirty();
    return 1;
}

/* ── bindings ──────────────────────────────────────────────── */

static void key_name(int code, char *text, size_t size)
{
    static const struct { int vk; const char *name; } names[] = {
        {VK_SPACE, "Space"}, {VK_LBUTTON, "Mouse L"}, {VK_RBUTTON, "Mouse R"},
        {VK_MBUTTON, "Mouse M"}, {VK_LSHIFT, "Shift"}, {VK_RSHIFT, "R Shift"},
        {VK_LCONTROL, "Ctrl"}, {VK_RCONTROL, "R Ctrl"}, {VK_LMENU, "Alt"}, {VK_RMENU, "R Alt"},
        {VK_ESCAPE, "Esc"}, {VK_BACK, "Backspace"}, {VK_RETURN, "Enter"}, {VK_TAB, "Tab"},
        {VK_UP, "Up"}, {VK_DOWN, "Down"}, {VK_LEFT, "Left"}, {VK_RIGHT, "Right"},
        {VK_DELETE, "Delete"}, {VK_END, "End"}, {VK_DECIMAL, "Keypad ."}, {VK_NUMPAD1, "Keypad 1"},
    };
    size_t i;
    if (!code) { snprintf(text, size, "Unbound"); return; }
    if ((code >= 'A' && code <= 'Z') || (code >= '0' && code <= '9')) {
        snprintf(text, size, "%c", code);
        return;
    }
    for (i = 0; i < sizeof names / sizeof names[0]; i++)
        if (names[i].vk == code) { snprintf(text, size, "%s", names[i].name); return; }
    snprintf(text, size, "Key %02X", code);
}

static void assign_binding(int code)
{
    int i, *bindings = s_capture_tab ? s_joy : s_keys;
    if (s_capture < 0) return;
    for (i = 0; i < ACTIONS; i++) if (i != s_capture && code && bindings[i] == code) bindings[i] = 0;
    bindings[s_capture] = code;
    s_capture = -1; s_native_capture = 0;
    save_config();
}

static int source_value(const HostPad *raw, int code)
{
    int v;
    if (code >= 1 && code <= 8) return raw->pad.analog[code - 1] * 32767 / 255;
    if (code >= 9 && code <= 16) {
        static const int masks[] = {0x10, 0x20, 0x40, 0x80, 1, 2, 4, 8};
        return raw->pad.buttons & masks[code - 9] ? 32767 : 0;
    }
    if (code >= 17 && code <= 24) {
        static const int axis[] = {1, 1, 0, 0, 3, 3, 2, 2};
        int a[] = {raw->pad.lx, raw->pad.ly, raw->pad.rx, raw->pad.ry};
        v = a[axis[code - 17]];
        if (code == 18 || code == 19 || code == 22 || code == 23) v = -v;
        return v > 0 ? v : 0;
    }
    return 0;
}

static int clamp_axis(int value) { return value > 32767 ? 32767 : value < -32767 ? -32767 : value; }

/* The Windows host's input filter (options.c), without the window focus
 * test: an Android game in the background receives no input anyway. */
static void input(void *state, unsigned port)
{
    HostPad *out = (HostPad *)state, raw = *out;
    int value[ACTIONS], kb[ACTIONS], i, dx = 0, dy = 0;
    AcquireSRWLockExclusive(&s_lock);
    if (port == 0) {
        int any = 0, taken = 0;
        for (i = 1; i <= 24; i++) any |= source_value(&raw, i) > 16000;
        if (s_capture >= 0 && s_native_capture && GetTickCount() - s_native_since > 8000) {
            s_capture = -1; s_native_capture = 0; mark_dirty();
        }
        if (s_capture >= 0 && s_capture_tab && !any) s_capture_armed = 1;
        for (i = 1; i <= 24; i++) {
            int down = source_value(&raw, i) > 16000;
            if (!taken && s_capture >= 0 && s_capture_tab && s_capture_armed && down && !s_joy_was[i]) {
                if (i == 10) { s_capture = -1; s_native_capture = 0; mark_dirty(); }
                else assign_binding(i);
                taken = 1;
            }
            s_joy_was[i] = down;
        }
        /* A keyboard binding from the game's menu: the next fresh key. */
        for (i = 1; i < 256; i++) {
            int down = xbox_FramebufferKeyDown(i);
            if (!taken && s_capture >= 0 && !s_capture_tab && down && !s_key_was[i]
                    && GetTickCount() - s_native_since > 250) {
                if (i == VK_ESCAPE) { s_capture = -1; s_native_capture = 0; mark_dirty(); }
                else assign_binding(i);
                taken = 1;
            }
            s_key_was[i] = down;
        }
    }
    if (s_native_capture) {
        uint32_t packet = raw.packet;
        memset(out, 0, sizeof *out); out->packet = packet + 1;
        ReleaseSRWLockExclusive(&s_lock);
        return;
    }
    if (port != 0) { ReleaseSRWLockExclusive(&s_lock); return; }
    for (i = 0; i < ACTIONS; i++) {
        value[i] = source_value(&raw, s_joy[i]);
        kb[i] = s_keyboard_enabled &&
            ((s_keys[i] && xbox_FramebufferKeyDown(s_keys[i])) ||
             (s_keys[i] == s_default_keys[i] && s_aliases[i] && xbox_FramebufferKeyDown(s_aliases[i])));
        if (kb[i]) value[i] = 32767;
    }
    if (value[WALK] && !s_walk_was) s_walk = !s_walk;
    s_walk_was = value[WALK] != 0;
    memset(out, 0, sizeof *out); out->packet = raw.packet + 1;
    out->pad.lx = (int16_t)clamp_axis(value[MOVE_RIGHT] - value[MOVE_LEFT]);
    out->pad.ly = (int16_t)clamp_axis(value[MOVE_UP] - value[MOVE_DOWN]);
    if (kb[MOVE_LEFT] || kb[MOVE_RIGHT])
        out->pad.lx = (int16_t)((kb[MOVE_RIGHT] - kb[MOVE_LEFT]) * (s_walk ? s_walk_deflection : 32767));
    else if (s_walk && s_joy[WALK]) out->pad.lx = (int16_t)(out->pad.lx * s_walk_deflection / 32767);
    if (kb[MOVE_UP] || kb[MOVE_DOWN])
        out->pad.ly = (int16_t)((kb[MOVE_UP] - kb[MOVE_DOWN]) * (s_walk ? s_walk_deflection : 32767));
    else if (s_walk && s_joy[WALK]) out->pad.ly = (int16_t)(out->pad.ly * s_walk_deflection / 32767);
    {
        static DWORD last; static int mx, my;
        DWORD now = GetTickCount(), dt = now - last;
        if (dt >= 15) {
            double factor;
            if (dt > 100) dt = 100;
            xbox_FramebufferTakeMouse(&dx, &dy);
            factor = 32767.0 * s_mouse_speed / (43.0 * dt * 1.5);
            mx = s_keyboard_enabled ? clamp_axis((int)(dx * factor)) : 0;
            my = s_keyboard_enabled ? clamp_axis((int)(-dy * factor)) : 0;
            last = now;
        }
        out->pad.rx = (int16_t)clamp_axis(kb[CAMERA_LEFT] || kb[CAMERA_RIGHT] ?
            (kb[CAMERA_RIGHT] - kb[CAMERA_LEFT]) * 32767 : mx ? mx : value[CAMERA_RIGHT] - value[CAMERA_LEFT]);
        out->pad.ry = (int16_t)clamp_axis(kb[CAMERA_UP] || kb[CAMERA_DOWN] ?
            (kb[CAMERA_UP] - kb[CAMERA_DOWN]) * 32767 : my ? my : value[CAMERA_UP] - value[CAMERA_DOWN]);
    }
    {
        static const int action[] = {JUMP, CANCEL, SWORD, DAGGER, ALT_VIEW, LOOK, REWIND, SPECIAL};
        for (i = 0; i < 8; i++) out->pad.analog[i] = (uint8_t)((value[action[i]] * 255 + 16383) / 32767);
    }
    if (value[PAUSE]) out->pad.buttons |= 0x10;
    if (value[BACK]) out->pad.buttons |= 0x20;
    if (value[LEFT_CLICK]) out->pad.buttons |= 0x40;
    if (value[RESET_CAMERA]) out->pad.buttons |= 0x80;
    for (i = 0; i < 4; i++) if (value[MENU_UP + i]) out->pad.buttons |= (uint16_t)(1u << i);
    ReleaseSRWLockExclusive(&s_lock);
}

/* ── the game's native pages ───────────────────────────────── */

void resot_scale_look(float *axes)
{
    AcquireSRWLockShared(&s_lock);
    axes[0] = resot_look_value(axes[0],s_look_sensitivity);
    axes[1] = resot_look_value(axes[1],s_look_sensitivity);
    ReleaseSRWLockShared(&s_lock);
}

void resot_native_label(int page, int item, char *out, unsigned size)
{
    char value[100];
    AcquireSRWLockExclusive(&s_lock);
    if (page == RESOT_NATIVE_GRAPHICS) {
        switch (item) {
        case 0: snprintf(out, size, "FPS limit: %s", s_cap_names[s_fps == 30 ? 0 : s_fps == 60 ? 1 : s_fps == 120 ? 2 : 3]); break;
        case 1: snprintf(out, size, "VSync: %s", s_vsync ? "On" : "Off"); break;
        case 2: snprintf(out, size, "Post processing: %s", s_post_processing ? "On" : "Off"); break;
        default: snprintf(out, size, "Internal resolution: %s",s_render_names[s_resolution]); break;
        }
    } else if (page == RESOT_NATIVE_CONTROLS && item == 0) {
        snprintf(out,size,"Look sensitivity: %d%%",s_look_sensitivity);
    } else if (item >= 0 && item < ACTIONS) {
        int joy = page == RESOT_NATIVE_JOY;
        if (s_capture == item && s_capture_tab == joy && s_native_capture)
            snprintf(value, sizeof value, joy ? "press a button" : "press a key");
        else if (joy)
            snprintf(value, sizeof value, "%s", s_native_joy[s_joy[item] >= 0 && s_joy[item] <= 24 ? s_joy[item] : 0]);
        else {
            key_name(s_keys[item], value, sizeof value);
            value[12] = 0;
        }
        snprintf(out, size, "%s: %s", s_native_actions[item], value);
    } else if (size) out[0] = 0;
    ReleaseSRWLockExclusive(&s_lock);
}

void resot_native_activate(int page, int item)
{
    AcquireSRWLockExclusive(&s_lock);
    if (page == RESOT_NATIVE_GRAPHICS) {
        switch (item) {
        case 0: s_fps = s_fps == 30 ? 60 : s_fps == 60 ? 120 : s_fps == 120 ? 0 : 30; xbox_SetFrameLimit(s_fps); break;
        case 1: s_vsync = !s_vsync; xbox_SetVSync(s_vsync); break;
        case 2: s_post_processing = !s_post_processing; xbox_SetPostProcessing(s_post_processing); break;
        case 3: s_resolution=(s_resolution+1)%6; xbox_SetRenderScalePercent(s_render_scales[s_resolution]); break;
        default: break;
        }
        save_config();
    } else if (page == RESOT_NATIVE_CONTROLS && item == 0) {
        s_look_sensitivity = s_look_sensitivity >= 200 ? 25 : s_look_sensitivity + 25;
        save_config();
    } else if (item >= 0 && item < ACTIONS) {
        s_capture = item; s_capture_tab = page == RESOT_NATIVE_JOY; s_native_capture = 1; s_capture_armed = 0;
        s_native_since = GetTickCount();
    }
    mark_dirty();
    ReleaseSRWLockExclusive(&s_lock);
}

void resot_native_reset_bindings(void)
{
    AcquireSRWLockExclusive(&s_lock);
    memcpy(s_keys, s_default_keys, sizeof s_keys);
    memcpy(s_joy, s_default_joy, sizeof s_joy);
    s_capture = -1; s_native_capture = 0; s_walk = s_walk_was = 0;
    save_config();
    mark_dirty();
    ReleaseSRWLockExclusive(&s_lock);
}

void resot_options_init(void)
{
    char name[32];
    const char *env;
    int i;
    env = getenv("RECOMP_KEYBOARD"); s_keyboard_enabled = !env || *env != '0';
    env = getenv("RECOMP_MOUSE_SPEED"); s_mouse_speed = env && *env ? atoi(env) : 43;
    if (s_mouse_speed < 1) s_mouse_speed = 1;
    if (s_mouse_speed > 100) s_mouse_speed = 100;
    env = getenv("RECOMP_WALK_DEFLECTION"); s_walk_deflection = env && *env ? atoi(env) : 12000;
    if (s_walk_deflection < 1000) s_walk_deflection = 1000;
    if (s_walk_deflection > 32767) s_walk_deflection = 32767;
    snprintf(s_path, sizeof s_path, "%s/resot-options.ini", resot_android_data_dir());
    s_look_sensitivity = resot_look_percent(ini_get("Controls","LookSensitivityPercent",100));
    s_fps = ini_get("Graphics", "FPSLimit", 60);
    if (s_fps != 0 && s_fps != 30 && s_fps != 60 && s_fps != 120) s_fps = 60;
    env = getenv("RECOMP_HW_VSYNC");
    s_vsync = ini_get("Graphics", "VSync", !env || *env != '0') != 0;
    s_post_processing = ini_get("Graphics", "PostProcessing", 0) != 0;
    {
        int percent=ini_get("Graphics","InternalResolutionPercent",100);
        s_resolution=2;
        for (int r=0;r<6;r++) if (s_render_scales[r]==percent) s_resolution=r;
        xbox_SetRenderScalePercent(s_render_scales[s_resolution]);
    }
    for (i = 0; i < ACTIONS; i++) {
        snprintf(name, sizeof name, "Action%d", i);
        s_keys[i] = ini_get("Keyboard", name, s_default_keys[i]);
        s_joy[i] = ini_get("Joystick", name, s_default_joy[i]);
        if (s_keys[i] < 0 || s_keys[i] > 255) s_keys[i] = s_default_keys[i];
        if (s_joy[i] < 0 || s_joy[i] > 24) s_joy[i] = s_default_joy[i];
    }
    xbox_SetFrameLimit(s_fps);
    xbox_SetVSync(s_vsync);
    xbox_SetPostProcessing(s_post_processing);
    xbox_InputSetHostFilter(input);
}
