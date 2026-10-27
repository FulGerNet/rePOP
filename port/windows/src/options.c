/* Portable host options: graphics settings and input bindings, kept in
 * resot-options.ini and changed from the game's own menu (the reSOT Options
 * pages in source/<target>/target_hooks.c). The runtime supplies window
 * events and controller state before its keyboard merge; the F6 overlay is
 * the diagnostics panel in diag.c. F7 opens the portable options panel. */
#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "options.h"

enum { PW = 520, PH = 612, BODY_TOP = 64, BODY_BOTTOM = 566,
       ROW_H = 29, APPLY_SIZE = WM_APP + 44 };
enum { MOVE_UP, MOVE_DOWN, MOVE_LEFT, MOVE_RIGHT, WALK, JUMP, SWORD, DAGGER,
       SPECIAL, CANCEL, REWIND, LOOK, ALT_VIEW, RESET_CAMERA, PAUSE, BACK,
       MENU_UP, MENU_DOWN, MENU_LEFT, MENU_RIGHT, CAMERA_UP, CAMERA_DOWN,
       CAMERA_LEFT, CAMERA_RIGHT, LEFT_CLICK, ACTIONS };
typedef struct {
    uint32_t packet;
    struct { uint16_t buttons; uint8_t analog[8]; int16_t lx, ly, rx, ry; } pad;
} HostPad;
_Static_assert(sizeof(HostPad)==24,"Host controller layout must match the runtime Xbox state");
static const char *const s_actions[ACTIONS] = {
    "Move forward", "Move backward", "Move left", "Move right", "Walk toggle",
    "Jump / confirm", "Sword attack", "Use dagger", "Special action", "Cancel / drop",
    "Rewind", "Camera look", "Alternate view", "Reset camera", "Pause / start", "Back",
    "Menu up", "Menu down", "Menu left", "Menu right", "Camera up", "Camera down",
    "Camera left", "Camera right", "Left stick click"
};
static const int s_default_keys[ACTIONS] = {
    'W','S','A','D',VK_LSHIFT,VK_SPACE,VK_LBUTTON,'E',VK_RBUTTON,'C','R','F','Q','X',
    VK_ESCAPE,VK_BACK,VK_UP,VK_DOWN,VK_LEFT,VK_RIGHT,'I','K','J','L',0
};
static const int s_default_joy[ACTIONS] = {
    17,18,19,20,0,1,3,4,8,2,7,6,5,12,9,10,13,14,15,16,21,22,23,24,11
};
/* Keep the existing PC layout's secondary aliases until that action is
 * customized. Movement arrows deliberately also navigate the menus. */
static const int s_aliases[ACTIONS] = {
    VK_UP,VK_DOWN,VK_LEFT,VK_RIGHT,VK_DECIMAL,VK_RCONTROL,0,VK_MBUTTON,0,VK_NUMPAD1,
    VK_RSHIFT,VK_DELETE,VK_END,0,VK_RETURN,0,0,0,0,0,0,0,0,0,0
};
static const char *const s_joy_names[25] = {
    "Unbound", "A / button 1", "B / button 2", "X / button 3", "Y / button 4",
    "Left shoulder / black", "Right shoulder / white", "Left trigger", "Right trigger",
    "Start", "Back", "Left stick click", "Right stick click", "D-pad up", "D-pad down",
    "D-pad left", "D-pad right", "Left stick up", "Left stick down", "Left stick left",
    "Left stick right", "Right stick up", "Right stick down", "Right stick left", "Right stick right"
};
static const int s_scales[] = {50,75,100,150,225,300};
/* The game's menu font has no hyphen or brackets, and a page is one column
 * that starts right of centre: short names for the native pages. */
static const char *const s_native_actions[ACTIONS] = {
    "Forward", "Backward", "Left", "Right", "Walk", "Jump", "Sword", "Dagger",
    "Special", "Cancel", "Rewind", "Look", "Alt view", "Reset cam", "Pause", "Back",
    "Menu up", "Menu down", "Menu left", "Menu right", "Cam up", "Cam down",
    "Cam left", "Cam right", "Stick click"
};
static const char *const s_native_sizes[] = {"240p 0.5x","360p 0.75x","480p 1x","720p 1.5x","1080p 2.25x","1440p 3x"};
static const char *const s_native_joy[25] = {
    "None", "A", "B", "X", "Y", "Black", "White", "L trigger", "R trigger", "Start", "Back",
    "L stick", "R stick", "Pad up", "Pad down", "Pad left", "Pad right", "L up", "L down",
    "L left", "L right", "R up", "R down", "R left", "R right"
};
static const char *const s_size_names[] = {"240p (50%)","360p (75%)","480p (100%)","720p (150%)","1080p (225%)","1440p (300%)"};
static const int s_caps[] = {30,60,120,0};
static const char *const s_cap_names[] = {"30","60","120","None"};
static SRWLOCK s_lock = SRWLOCK_INIT;
static volatile LONG s_revision;
static volatile LONG s_open, s_dirty = 1;
static int s_graphics_expanded, s_controls_expanded;
static int s_tab, s_scroll, s_dropdown, s_drag;
static char s_status[180] = "Changes are saved automatically.";
static HDC s_dc;
static HBITMAP s_bitmap;
static uint32_t *s_bits;
static HFONT s_font, s_title_font;
static int s_keys[ACTIONS], s_joy[ACTIONS], s_fps = 0, s_resolution=3;
static int s_vsync=0, s_texture_glow=0, s_capture = -1, s_capture_tab;
static int s_console_logs;
extern void resot_console_logs_set(int);
static int s_renderer; /* 0 (default): D3D11, 1: native D3D12, 2: native Vulkan; restart. */
static const char *const s_renderer_tokens[] = {"d3d11","d3d12","vulkan"};
static const char *const s_renderer_names[] = {"D3D11","D3D12 (native)","Vulkan (native)"};
extern int nv2a_hw_backend(void);
static const char *active_renderer(void)
{
    int backend = nv2a_hw_backend();
    return backend==100?"Vulkan (native)":backend==12?"D3D12 (native)":
           backend==11?"D3D11":"initializing";
}
static int s_joy_was[25], s_walk, s_walk_was, s_pending_size, s_size_posted;
static int s_native_capture, s_native_since, s_capture_armed;
static int s_keyboard_enabled=1, s_mouse_speed=43, s_walk_deflection=12000;
static int s_look_sensitivity=200;
/* Game behavior: Tutorials is saved ([Game] Tutorials); the Dagger of time
 * (-1 as the game has it, 0 off, 1 on) applies to the running game only. */
static int s_game_expanded, s_tutorials=1, s_dagger=-1;
/* Cheats: the title's built-in switch (port/game/resot_cheats.h), as the
 * game reports it (-1 not readable yet) and a change asked for here (-1
 * none), taken by the game thread. */
static volatile LONG s_cheats_state=-1, s_cheats_request=-1;
static char s_path[1024];

extern void *xbox_FramebufferWindowHandle(void);
extern int xbox_FramebufferKeyDown(int);
extern void xbox_FramebufferTakeMouse(int *, int *);
extern void xbox_SetFrameLimit(int);
extern void xbox_SetRenderScalePercent(int);
extern void xbox_SetVSync(int);
extern void xbox_SetPostProcessing(int);
extern void xbox_SetPostProcessingQuality(int);
static int s_post_quality=2;
static const char *const s_quality_names[]={"Off","Reduced","Standard","Full"};
extern void xbox_FramebufferSetOptionsCallbacks(
    int (*)(const uint32_t **, uint32_t *, uint32_t *),
    int (*)(void *, unsigned, uintptr_t, intptr_t));
extern void xbox_InputSetHostFilter(void (*)(void *, unsigned));

/* The game's native pages refresh their labels when the revision moves. */
static void mark_dirty(void) { InterlockedIncrement(&s_revision); InterlockedExchange(&s_dirty,1); }
long resot_native_revision(void) { return InterlockedCompareExchange(&s_revision,0,0); }
int resot_game_tutorials(void) { return s_tutorials; }
int resot_game_dagger(void) { return s_dagger; }
int resot_game_cheats_request(void) { return (int)InterlockedExchange(&s_cheats_request,-1); }
void resot_game_cheats_report(int on) { InterlockedExchange(&s_cheats_state,on); InterlockedExchange(&s_dirty,1); }

void resot_options_summary(char *out, unsigned size)
{
    AcquireSRWLockShared(&s_lock);
    snprintf(out,size,"FPS limit %s, VSync %s, graphics preset %s, resolution %s",
             s_cap_names[s_fps==30?0:s_fps==60?1:s_fps==120?2:3], s_vsync?"on":"off",
             s_quality_names[s_post_quality], s_native_sizes[s_resolution]);
    ReleaseSRWLockShared(&s_lock);
}

int resot_options_blocks_input(void) { return InterlockedCompareExchange(&s_open,0,0) != 0; }

static int save_config(void)
{
    char name[32], value[32];
    int i, ok = 1;
    /* A scripted pad (RECOMP_PAD_SCRIPT / RECOMP_PAD_LIVE) is a test run: its
     * timed presses can land on reSOT Options and toggle settings or rebind
     * buttons. Keep those changes for the run, never in the player's file. */
    if (getenv("RECOMP_PAD_SCRIPT") || getenv("RECOMP_PAD_LIVE")) {
        static int logged;
        if (!logged++) fprintf(stderr,"[OPTIONS] scripted pad: changes not saved to %s\n",s_path);
        snprintf(s_status,sizeof s_status,"Scripted run: changes are not saved.");
        mark_dirty();
        return 1;
    }
    ok &= WritePrivateProfileStringA("Graphics","Renderer",s_renderer_tokens[s_renderer],s_path);
    snprintf(value,sizeof value,"%d",s_fps);
    ok &= WritePrivateProfileStringA("Graphics","FPSLimit",value,s_path);
    snprintf(value,sizeof value,"%d",s_vsync);
    ok &= WritePrivateProfileStringA("Graphics","VSync",value,s_path);
    ok &= WritePrivateProfileStringA("Graphics","PostProcessing",NULL,s_path);
    snprintf(value,sizeof value,"%d",s_post_quality);
    ok &= WritePrivateProfileStringA("Graphics","GraphicsPreset",value,s_path);
    ok &= WritePrivateProfileStringA("Graphics","TextureGlowEffect",NULL,s_path);
    ok &= WritePrivateProfileStringA("Graphics","PostProcessingQuality",NULL,s_path);
    snprintf(value,sizeof value,"%d",s_scales[s_resolution]);
    ok &= WritePrivateProfileStringA("Graphics","InternalResolutionPercent",value,s_path);
    snprintf(value,sizeof value,"%d",s_look_sensitivity);
    ok &= WritePrivateProfileStringA("Controls","LookSensitivityPercent",value,s_path);
    for (i=0;i<ACTIONS;i++) {
        snprintf(name,sizeof name,"Action%d",i);
        snprintf(value,sizeof value,"%d",s_keys[i]);
        ok &= WritePrivateProfileStringA("Keyboard",name,value,s_path);
        snprintf(value,sizeof value,"%d",s_joy[i]);
        ok &= WritePrivateProfileStringA("Joystick",name,value,s_path);
    }
    snprintf(value,sizeof value,"%d",s_console_logs);
    ok &= WritePrivateProfileStringA("Diagnostics","ConsoleLogs",value,s_path);
    snprintf(value,sizeof value,"%d",s_tutorials);
    ok &= WritePrivateProfileStringA("Game","Tutorials",value,s_path);
    if (!ok) fprintf(stderr,"[OPTIONS] could not save %s (read-only folder?)\n",s_path);
    snprintf(s_status,sizeof s_status,"%s",ok ? "Saved to resot-options.ini." :
             "Could not save resot-options.ini. Folder may be read-only.");
    mark_dirty();
    return ok;
}

static void binding_name(int code, int joystick, char *text, size_t size)
{
    LONG scan;
    if (joystick) { snprintf(text,size,"%s",s_joy_names[code>=0 && code<=24 ? code:0]); return; }
    switch(code) {
    case 0: snprintf(text,size,"Unbound"); return;
    case VK_LBUTTON: snprintf(text,size,"Mouse left"); return;
    case VK_RBUTTON: snprintf(text,size,"Mouse right"); return;
    case VK_MBUTTON: snprintf(text,size,"Mouse middle"); return;
    case VK_XBUTTON1: snprintf(text,size,"Mouse button 4"); return;
    case VK_XBUTTON2: snprintf(text,size,"Mouse button 5"); return;
    }
    scan = (LONG)MapVirtualKeyA((UINT)code,MAPVK_VK_TO_VSC) << 16;
    if (code==VK_LEFT || code==VK_RIGHT || code==VK_UP || code==VK_DOWN || code==VK_DELETE ||
        code==VK_INSERT || code==VK_HOME || code==VK_END || code==VK_PRIOR || code==VK_NEXT ||
        code==VK_RCONTROL || code==VK_RMENU) scan |= 1<<24;
    if (!GetKeyNameTextA(scan,text,(int)size)) snprintf(text,size,"Key 0x%02X",code);
}

static void assign_binding(int code)
{
    int i, *bindings = s_capture_tab ? s_joy : s_keys;
    if (s_capture<0) return;
    /* One physical binding performs one action; move an existing binding
     * instead of firing two game actions from the same press. */
    for (i=0;i<ACTIONS;i++) if (i!=s_capture && code && bindings[i]==code) bindings[i]=0;
    bindings[s_capture]=code;
    s_capture=-1; s_native_capture=0;
    save_config();
}

static int controls_top(void) { return s_graphics_expanded ? 444 : 46; }
static int rows_top(void) { return controls_top()+138; }
static int game_top(void) { return controls_top()+(s_controls_expanded?138+ACTIONS*ROW_H+15:42); }
static int max_scroll(void)
{
    int height=game_top()+(s_game_expanded?200:42);
    int maximum=height-(BODY_BOTTOM-BODY_TOP);
    return maximum>0?maximum:0;
}
static void scroll_to(int value)
{
    int max = max_scroll();
    s_scroll = value<0 ? 0 : value>max ? max : value;
    s_dropdown=0;
    InterlockedExchange(&s_dirty,1);
}

static void apply_resolution(HWND window)
{
    (void)window;
    xbox_SetRenderScalePercent(s_scales[s_resolution]);
}

static int native_event(void *handle, unsigned message, uintptr_t wp, intptr_t lp)
{
    HWND window=(HWND)handle;
    /* SetWindowPos sends synchronous WM_SIZE messages back to this callback;
     * do not hold the options lock while Windows dispatches them. */
    if (message==APPLY_SIZE) { apply_resolution(window); return 1; }
    if (s_native_capture) {
        /* A binding started from the game's menu: the next fresh key or mouse
         * button press, not the held repeat of the press that started it. */
        int code=(int)wp, taken=0;
        if ((message==WM_KEYDOWN || message==WM_SYSKEYDOWN) && !(lp & (1L<<30)) &&
            GetForegroundWindow()==window) {
            AcquireSRWLockExclusive(&s_lock);
            if (s_capture>=0 && !s_capture_tab) {
                if (code==VK_ESCAPE) { s_capture=-1; s_native_capture=0; mark_dirty(); }
                else if (code!=VK_F5 && code!=VK_F6 && code!=VK_F7) {
                    if(code==VK_SHIFT) code=(int)MapVirtualKeyA((lp>>16)&255,MAPVK_VSC_TO_VK_EX);
                    if(code==VK_CONTROL) code=(lp&(1L<<24))?VK_RCONTROL:VK_LCONTROL;
                    if(code==VK_MENU) code=(lp&(1L<<24))?VK_RMENU:VK_LMENU;
                    assign_binding(code);
                }
                taken=1;
            } else if (s_capture>=0 && code==VK_ESCAPE) { s_capture=-1; s_native_capture=0; mark_dirty(); taken=1; }
            ReleaseSRWLockExclusive(&s_lock);
        } else if ((message==WM_LBUTTONDOWN || message==WM_RBUTTONDOWN || message==WM_MBUTTONDOWN ||
                    message==WM_XBUTTONDOWN) && GetTickCount()-(DWORD)s_native_since>250) {
            AcquireSRWLockExclusive(&s_lock);
            if (s_capture>=0 && !s_capture_tab) {
                assign_binding(message==WM_LBUTTONDOWN?VK_LBUTTON:message==WM_RBUTTONDOWN?VK_RBUTTON:
                    message==WM_MBUTTONDOWN?VK_MBUTTON:HIWORD(wp)==XBUTTON1?VK_XBUTTON1:VK_XBUTTON2);
                taken=1;
            }
            ReleaseSRWLockExclusive(&s_lock);
        }
        return taken;
    }
    return 0;
}

static float panel_scale(HWND window)
{
    RECT r; float scale;
    GetClientRect(window,&r);
    scale=(float)r.bottom/720.0f;
    if (scale<0.75f) scale=0.75f;
    if ((PW+16)*scale>r.right) scale=(float)r.right/(PW+16);
    return scale>0 ? scale : 1;
}

static int event(void *handle, unsigned message, uintptr_t wp, intptr_t lp)
{
    HWND window=(HWND)handle;
    int x,y,body,action=-1,consumed=0;
    float scale;
    /* SetWindowPos sends synchronous WM_SIZE messages back to this callback;
     * do not hold the options lock while Windows dispatches them. */
    if (message==APPLY_SIZE) { apply_resolution(window); return 1; }
    if ((message==WM_KEYDOWN || message==WM_SYSKEYDOWN) && wp==VK_F7) {
        if (!(lp & (1L<<30))) {
            AcquireSRWLockExclusive(&s_lock);
            InterlockedExchange(&s_open,!s_open); s_capture=-1; s_native_capture=0; s_dropdown=0;
            InterlockedExchange(&s_dirty,1);
            ReleaseSRWLockExclusive(&s_lock);
        }
        return 1;
    }
    if ((message==WM_KEYDOWN || message==WM_SYSKEYDOWN ||
         message==WM_KEYUP || message==WM_SYSKEYUP) && wp==VK_F6)
        return resot_diag_event(handle,message,wp,lp);
    if (!resot_options_blocks_input()) {
        if (resot_diag_event(handle,message,wp,lp)) return 1;
        return native_event(handle,message,wp,lp);
    }
    if (message==WM_SYSKEYDOWN && wp==VK_F4 && (lp&(1L<<29))) return 0;
    if (message==WM_SETCURSOR) { SetCursor(LoadCursorA(NULL,IDC_ARROW)); return 1; }
    /* Capture changes, resize and focus messages can arrive synchronously
     * inside SetCapture/SetWindowPos. They need no options lock or handling. */
    switch(message) {
    case WM_KEYDOWN: case WM_KEYUP: case WM_SYSKEYDOWN: case WM_SYSKEYUP: case WM_CHAR:
    case WM_MOUSEMOVE: case WM_MOUSEWHEEL: case WM_LBUTTONDOWN: case WM_LBUTTONDBLCLK:
    case WM_LBUTTONUP: case WM_RBUTTONDOWN: case WM_RBUTTONUP: case WM_MBUTTONDOWN:
    case WM_MBUTTONUP: case WM_XBUTTONDOWN: case WM_XBUTTONUP: case WM_INPUT: break;
    default: return 0;
    }
    if (GetForegroundWindow()!=window) return 0;
    AcquireSRWLockExclusive(&s_lock);
    scale=panel_scale(window);
    x=(int)(((short)LOWORD(lp))/scale)-8;
    y=(int)(((short)HIWORD(lp))/scale)-8;
    body=y-BODY_TOP+s_scroll;
    if (s_controls_expanded && body>=rows_top() && body<rows_top()+ACTIONS*ROW_H)
        action=(body-rows_top())/ROW_H;
    if (s_capture>=0 && !s_capture_tab &&
        (message==WM_KEYDOWN || message==WM_SYSKEYDOWN || message==WM_LBUTTONDOWN ||
         message==WM_RBUTTONDOWN || message==WM_MBUTTONDOWN || message==WM_XBUTTONDOWN)) {
        int code=(int)wp;
        if (message==WM_KEYDOWN || message==WM_SYSKEYDOWN) {
            if (code==VK_ESCAPE) { s_capture=-1; strcpy(s_status,"Binding cancelled."); }
            else if (code!=VK_F5 && code!=VK_F6 && code!=VK_F7) {
                if(code==VK_SHIFT) code=(int)MapVirtualKeyA((lp>>16)&255,MAPVK_VSC_TO_VK_EX);
                if(code==VK_CONTROL) code=(lp&(1L<<24))?VK_RCONTROL:VK_LCONTROL;
                if(code==VK_MENU) code=(lp&(1L<<24))?VK_RMENU:VK_LMENU;
                assign_binding(code);
            }
        } else assign_binding(message==WM_LBUTTONDOWN?VK_LBUTTON:message==WM_RBUTTONDOWN?VK_RBUTTON:
                    message==WM_MBUTTONDOWN?VK_MBUTTON:HIWORD(wp)==XBUTTON1?VK_XBUTTON1:VK_XBUTTON2);
        InterlockedExchange(&s_dirty,1); consumed=1;
    } else if ((message==WM_KEYDOWN || message==WM_SYSKEYDOWN) && wp==VK_ESCAPE) {
        if(s_capture>=0) s_capture=-1; else InterlockedExchange(&s_open,0);
        InterlockedExchange(&s_dirty,1); consumed=1;
    } else if (message==WM_MOUSEWHEEL) {
        scroll_to(s_scroll-((short)HIWORD(wp))/WHEEL_DELTA*87); consumed=1;
    } else if (message==WM_LBUTTONUP) { s_drag=0; ReleaseCapture(); consumed=1; }
    else if (message==WM_MOUSEMOVE && s_drag) {
        scroll_to((y-BODY_TOP-22)*max_scroll()/(BODY_BOTTOM-BODY_TOP-44)); consumed=1;
    } else if (message==WM_LBUTTONDOWN || message==WM_LBUTTONDBLCLK || message==WM_RBUTTONDOWN) {
        if(x>=PW-30 && x<PW && y>=10 && y<42) { InterlockedExchange(&s_open,0); s_capture=-1; }
        else if(x>=PW-20 && x<PW-5 && y>=BODY_TOP && y<BODY_BOTTOM) {
            s_drag=1; SetCapture(window);
            scroll_to((y-BODY_TOP-22)*max_scroll()/(BODY_BOTTOM-BODY_TOP-44));
        } else if (s_graphics_expanded && s_dropdown && x>=245 && x<480 && body>=272 && body<272+6*29) {
            s_resolution=(body-272)/29; s_dropdown=0; save_config();
            PostMessageA(window,APPLY_SIZE,0,0);
        } else if(x>=20 && x<490 && y>=BODY_TOP && y<BODY_BOTTOM) {
            if(body>=0 && body<28) {
                s_graphics_expanded=!s_graphics_expanded;s_capture=-1;s_dropdown=0;scroll_to(0);save_config();
            } else if(body>=controls_top() && body<controls_top()+28 &&
                      (!s_controls_expanded || x<360)) {
                s_controls_expanded=!s_controls_expanded;s_capture=-1;scroll_to(0);save_config();
            } else if(body>=game_top() && body<game_top()+28) {
                s_game_expanded=!s_game_expanded;s_capture=-1;scroll_to(s_scroll);
            } else if(s_game_expanded && body>=game_top()+38 && body<game_top()+68 && x>=245) {
                s_tutorials=x<360;save_config();
            } else if(s_game_expanded && body>=game_top()+78 && body<game_top()+108 && x>=245) {
                s_dagger=x<320?-1:x<400?1:0;mark_dirty();
            } else if(s_game_expanded && body>=game_top()+118 && body<game_top()+148 && x>=245) {
                InterlockedExchange(&s_cheats_request,x<360);InterlockedExchange(&s_cheats_state,x<360);
            } else if(s_graphics_expanded && body>=34 && body<64) {
                if (x>=155 && x<500) {
                    s_renderer=x<275?0:x<405?1:2;
                    if(save_config()) snprintf(s_status,sizeof s_status,"Saved. Restart to use %s. Active: %s.",
                        s_renderer_names[s_renderer],active_renderer());
                }
            } else if(s_graphics_expanded && body>=91 && body<121 && x>=245) {
                int cap=(x-245)/58; if(cap>=0 && cap<4) {s_fps=s_caps[cap];xbox_SetFrameLimit(s_fps);save_config();}
            } else if(s_graphics_expanded && body>=141 && body<171 && x>=245) {
                s_vsync=x<360; xbox_SetVSync(s_vsync);save_config();
                if(!s_vsync && s_fps)
                    snprintf(s_status,sizeof s_status,"VSync off. FPS limiter remains at %d.",s_fps);
            } else if(s_graphics_expanded && body>=191 && body<221 && x>=245) {
                s_post_quality=(s_post_quality+1)%4;s_texture_glow=s_post_quality==3;
                xbox_SetPostProcessingQuality(s_post_quality);save_config();
            } else if(s_graphics_expanded && body>=241 && body<272 && x>=245) s_dropdown=!s_dropdown;
            else if(s_graphics_expanded && body>=380 && body<410 && x>=245) {
                s_console_logs=!s_console_logs;resot_console_logs_set(s_console_logs);save_config();
            }
            else if(s_controls_expanded && body>=controls_top() && body<controls_top()+28 && x>=360) {
                memcpy(s_keys,s_default_keys,sizeof s_keys);memcpy(s_joy,s_default_joy,sizeof s_joy);
                s_capture=-1;s_walk=s_walk_was=0;save_config();
            }
            else if(s_controls_expanded && body>=controls_top()+38 && body<controls_top()+68 && x>=245) {
                s_look_sensitivity=s_look_sensitivity>=200?25:s_look_sensitivity+25;save_config();
            }
            else if(s_controls_expanded && body>=controls_top()+78 && body<controls_top()+111) { s_tab=x<255?0:1; s_capture=-1; }
            else if(action>=0 && x>=245) {
                if(message==WM_RBUTTONDOWN) { (s_tab?s_joy:s_keys)[action]=0; save_config(); }
                else if(message==WM_LBUTTONDBLCLK) { s_capture=action;s_capture_tab=s_tab;s_capture_armed=0;
                    strcpy(s_status,s_tab?"Press a joystick button or move a stick. Esc cancels.":
                           "Press a key or mouse button. Esc cancels."); }
            }
        }
        InterlockedExchange(&s_dirty,1); consumed=1;
    }
    ReleaseSRWLockExclusive(&s_lock);
    /* Suppress every game key and raw mouse message while this host menu owns
     * input. DefWindowProc still receives lifecycle/window-management events. */
    if (message==WM_INPUT) { DefWindowProcA(window,message,(WPARAM)wp,(LPARAM)lp); return 1; }
    return consumed || message==WM_KEYDOWN || message==WM_KEYUP || message==WM_SYSKEYDOWN ||
        message==WM_SYSKEYUP || message==WM_CHAR || message==WM_MOUSEMOVE ||
        message==WM_RBUTTONUP || message==WM_MBUTTONDOWN || message==WM_MBUTTONUP ||
        message==WM_XBUTTONDOWN || message==WM_XBUTTONUP;
}

static void text(int x,int y,int width,const char *value,COLORREF color)
{
    RECT r={x,y,x+width,y+26}; SetTextColor(s_dc,color);
    DrawTextA(s_dc,value,-1,&r,DT_SINGLELINE|DT_VCENTER|DT_END_ELLIPSIS|DT_NOPREFIX);
}
static void box(int x,int y,int w,int h,COLORREF color)
{
    RECT r={x,y,x+w,y+h}; HBRUSH brush=CreateSolidBrush(color);
    FillRect(s_dc,&r,brush);DeleteObject(brush);
}
static int panel(const uint32_t **pixels,uint32_t *width,uint32_t *height)
{
    int i,y; size_t n;
    HWND window=(HWND)xbox_FramebufferWindowHandle();
    if(window && s_pending_size && !s_size_posted) {s_size_posted=1;PostMessageA(window,APPLY_SIZE,0,0);}
    if(!resot_options_blocks_input()) return resot_diag_panel(pixels,width,height);
    AcquireSRWLockExclusive(&s_lock);
    if(!s_dc) {
        BITMAPINFO info;memset(&info,0,sizeof info);
        info.bmiHeader.biSize=sizeof info.bmiHeader;info.bmiHeader.biWidth=PW;
        info.bmiHeader.biHeight=-PH;info.bmiHeader.biPlanes=1;info.bmiHeader.biBitCount=32;
        s_dc=CreateCompatibleDC(NULL);
        s_bitmap=CreateDIBSection(s_dc,&info,DIB_RGB_COLORS,(void**)&s_bits,NULL,0);
        if(!s_dc || !s_bitmap) {ReleaseSRWLockExclusive(&s_lock);return 0;}
        SelectObject(s_dc,s_bitmap);SetBkMode(s_dc,TRANSPARENT);
        s_font=CreateFontA(17,0,0,0,FW_NORMAL,FALSE,FALSE,FALSE,DEFAULT_CHARSET,0,0,CLEARTYPE_QUALITY,0,"Segoe UI");
        s_title_font=CreateFontA(24,0,0,0,FW_SEMIBOLD,FALSE,FALSE,FALSE,DEFAULT_CHARSET,0,0,CLEARTYPE_QUALITY,0,"Segoe UI");
    }
    if(InterlockedExchange(&s_dirty,0)) {
        char label[120];
        for(n=0;n<(size_t)PW*PH;n++)s_bits[n]=0xC0151C29u;
        SelectObject(s_dc,s_title_font);text(18,10,440,"reSOT Options",RGB(245,248,255));
        SelectObject(s_dc,s_font);text(PW-29,10,24,"X",RGB(200,210,227));
        text(18,36,470,s_capture>=0?"Waiting for a new binding...":"F7 / Esc closes this menu",RGB(147,170,199));
        SaveDC(s_dc);IntersectClipRect(s_dc,12,BODY_TOP,PW-25,BODY_BOTTOM);
#define Y(v) (BODY_TOP+(v)-s_scroll)
        box(16,Y(0),468,28,RGB(31,43,60));
        text(23,Y(0),450,s_graphics_expanded?"[-] Graphics":"[+] Graphics",RGB(110,193,249));
        if(s_graphics_expanded) {
        text(20,Y(35),140,"Renderer",RGB(220,229,242));
        box(155,Y(34),115,30,s_renderer==0?RGB(46,95,135):RGB(36,46,63));
        text(163,Y(35),105,"Direct3D 11",RGB(245,248,255));
        box(275,Y(34),127,30,s_renderer==1?RGB(46,95,135):RGB(36,46,63));
        text(279,Y(35),120,"D3D12 (native)",RGB(245,248,255));
        box(405,Y(34),95,30,s_renderer==2?RGB(46,95,135):RGB(36,46,63));
        text(413,Y(35),83,"Vulkan",RGB(245,248,255));
        snprintf(label,sizeof label,"Active: %s; restart to change",active_renderer());
        text(155,Y(66),340,label,RGB(147,170,199));
        text(20,Y(91),200,"FPS limiter",RGB(220,229,242));
        for(i=0;i<4;i++) {box(245+i*58,Y(91),53,30,s_fps==s_caps[i]?RGB(46,95,135):RGB(36,46,63));
            text(255+i*58,Y(92),48,s_cap_names[i],RGB(235,242,251));}
        text(20,Y(141),220,"VSync",RGB(220,229,242));
        box(245,Y(141),110,30,s_vsync?RGB(46,95,135):RGB(36,46,63));
        box(365,Y(141),115,30,!s_vsync?RGB(46,95,135):RGB(36,46,63));
        text(257,Y(142),95,"On",RGB(235,242,251));text(377,Y(142),95,"Off",RGB(235,242,251));
        text(20,Y(191),220,"Graphics preset",RGB(220,229,242));
        box(245,Y(191),235,30,RGB(36,46,63));
        text(255,Y(192),220,s_quality_names[s_post_quality],RGB(235,242,251));
        text(20,Y(241),220,"Screen resolution",RGB(220,229,242));
        box(245,Y(241),235,30,RGB(36,46,63));text(255,Y(242),220,s_size_names[s_resolution],RGB(235,242,251));
        text(20,Y(282),455,"Window size keeps the desktop display mode.",RGB(139,159,186));
        text(20,Y(303),455,"The game's own timing may still limit FPS.",RGB(139,159,186));
        text(20,Y(330),455,s_post_quality==1?"Reduced: lower effect resolution, shadows off.":
            s_post_quality==3?"Full: all effects including texture glow.":
            s_post_quality==2?"Standard: full effects, texture glow off.":"Off: debug only; screen effects disabled.",RGB(139,159,186));
        text(20,Y(380),220,"Console logs",RGB(220,229,242));
        box(245,Y(380),235,30,RGB(36,46,63));
        text(255,Y(381),220,s_console_logs?"On":"Off",RGB(235,242,251));
        }
        box(16,Y(controls_top()),468,28,RGB(31,43,60));
        text(23,Y(controls_top()),330,s_controls_expanded?"[-] Controls":"[+] Controls",RGB(110,193,249));
        if(s_controls_expanded) {
        box(360,Y(controls_top()),120,27,RGB(36,46,63));text(368,Y(controls_top()+1),106,"Reset bindings",RGB(185,207,233));
        text(23,Y(controls_top()+39),215,"Look sensitivity",RGB(220,229,242));
        snprintf(label,sizeof label,"%d%%  (click to change)",s_look_sensitivity);
        box(245,Y(controls_top()+38),235,30,RGB(36,46,63));
        text(255,Y(controls_top()+39),220,label,RGB(235,242,251));
        box(20,Y(controls_top()+78),225,33,s_tab==0?RGB(46,72,99):RGB(36,46,63));
        box(255,Y(controls_top()+78),225,33,s_tab==1?RGB(46,72,99):RGB(36,46,63));
        text(33,Y(controls_top()+81),205,"Keyboard / Mouse",RGB(235,242,251));text(270,Y(controls_top()+81),205,"Joystick",RGB(235,242,251));
        for(i=0;i<ACTIONS;i++) {
            y=Y(rows_top()+i*ROW_H);
            if(y+ROW_H<BODY_TOP || y>=BODY_BOTTOM)continue;
            if(s_capture==i && s_capture_tab==s_tab)box(16,y,468,ROW_H-1,RGB(51,80,111));
            else if(i&1)box(16,y,468,ROW_H-1,RGB(28,37,51));
            text(23,y,219,s_actions[i],RGB(220,229,242));
            binding_name((s_tab?s_joy:s_keys)[i],s_tab,label,sizeof label);
            if(!s_tab && s_keys[i]==s_default_keys[i] && s_aliases[i]) {
                char alias[40];size_t used;
                binding_name(s_aliases[i],0,alias,sizeof alias);used=strlen(label);
                snprintf(label+used,sizeof label-used," / %s",alias);
            }
            text(253,y,225,s_capture==i&&s_capture_tab==s_tab?"Press input...":label,RGB(166,201,237));
        }
        }
        box(16,Y(game_top()),468,28,RGB(31,43,60));
        text(23,Y(game_top()),450,s_game_expanded?"[-] Game behavior":"[+] Game behavior",RGB(110,193,249));
        if(s_game_expanded) {
            static const char *const dagger[3]={"Game","On","Off"};
            int gt=game_top();
            text(20,Y(gt+39),220,"Tutorials",RGB(220,229,242));
            box(245,Y(gt+38),110,30,s_tutorials?RGB(46,95,135):RGB(36,46,63));
            box(365,Y(gt+38),115,30,!s_tutorials?RGB(46,95,135):RGB(36,46,63));
            text(257,Y(gt+39),95,"On",RGB(235,242,251));text(377,Y(gt+39),95,"Off",RGB(235,242,251));
            text(20,Y(gt+79),220,"Dagger of time",RGB(220,229,242));
            for(i=0;i<3;i++) {
                int v=i==0?-1:i==1?1:0;
                box(245+i*80,Y(gt+78),75,30,s_dagger==v?RGB(46,95,135):RGB(36,46,63));
                text(255+i*80,Y(gt+79),65,dagger[i],RGB(235,242,251));
            }
            text(20,Y(gt+119),220,"Cheats",RGB(220,229,242));
            box(245,Y(gt+118),110,30,s_cheats_state==1?RGB(46,95,135):RGB(36,46,63));
            box(365,Y(gt+118),115,30,s_cheats_state==0?RGB(46,95,135):RGB(36,46,63));
            text(257,Y(gt+119),95,"On",RGB(235,242,251));text(377,Y(gt+119),95,"Off",RGB(235,242,251));
#if defined(RESOT_RUNTIME_DEMO) && RESOT_RUNTIME_DEMO
            /* The demo has no tutorial switch: its universe keeps only a per-
             * tutorial array (mi_Tutorials); the retail's is universe +0xC0. */
            text(20,Y(gt+155),460,"Tutorials: retail only.",RGB(139,159,186));
#else
            text(20,Y(gt+155),460,"Tutorials saved.",RGB(139,159,186));
#endif
        }
        if(s_graphics_expanded && s_dropdown)for(i=0;i<6;i++) {box(245,Y(272+i*29),235,29,RGB(42,57,78));
            text(255,Y(272+i*29),220,s_size_names[i],RGB(235,242,251));}
        RestoreDC(s_dc,-1);
        box(PW-17,BODY_TOP,7,BODY_BOTTOM-BODY_TOP,RGB(34,45,61));
        if(max_scroll())box(PW-19,BODY_TOP+s_scroll*(BODY_BOTTOM-BODY_TOP-44)/max_scroll(),11,44,RGB(111,148,184));
        else box(PW-19,BODY_TOP,11,BODY_BOTTOM-BODY_TOP,RGB(57,75,95));
        text(18,570,480,"Double-click to bind. Right-click clears. Esc cancels.",RGB(147,170,199));
        text(18,591,480,s_status,RGB(147,170,199));
        GdiFlush();
        for(n=0;n<(size_t)PW*PH;n++)s_bits[n]=(s_bits[n]&0xFFFFFFu)|
            ((s_bits[n]&0xFFFFFFu)==0x151C29u?0xC0000000u:0xFF000000u);
#undef Y
    }
    *pixels=s_bits;*width=PW;*height=PH;
    ReleaseSRWLockExclusive(&s_lock);return 1;
}

static int source_value(const HostPad *raw,int code)
{
    int v;
    if(code>=1 && code<=8)return raw->pad.analog[code-1]*32767/255;
    if(code>=9 && code<=16) {
        static const int masks[]={0x10,0x20,0x40,0x80,1,2,4,8};
        return raw->pad.buttons&masks[code-9]?32767:0;
    }
    if(code>=17 && code<=24) {
        static const int axis[]={1,1,0,0,3,3,2,2};
        int a[]={raw->pad.lx,raw->pad.ly,raw->pad.rx,raw->pad.ry};
        v=a[axis[code-17]];if(code==18||code==19||code==22||code==23)v=-v;
        return v>0?v:0;
    }
    return 0;
}

static int clamp_axis(int value) {return value>32767?32767:value<-32767?-32767:value;}
static void input(void *state,unsigned port)
{
    HostPad *out=(HostPad*)state,raw=*out;
    int value[ACTIONS],kb[ACTIONS],i,dx=0,dy=0,blocked,foreground;
    HWND window=(HWND)xbox_FramebufferWindowHandle();
    foreground=window && GetForegroundWindow()==window;
    /* Scripted runs (RECOMP_PAD_SCRIPT / RECOMP_PAD_LIVE) drive a window that
     * need not have focus; keep their pad input in the background. */
    {static int scripted=-1;
        if(scripted<0)scripted=getenv("RECOMP_PAD_LIVE")||getenv("RECOMP_PAD_SCRIPT");
        if(scripted)foreground=1;}
    AcquireSRWLockExclusive(&s_lock);
    blocked=s_native_capture || resot_options_blocks_input();
    /* A pad binding is taken only once every pad input has been released
     * after the capture started, so the press that opened the row is never
     * bound. From the game's menu the pad has no Esc: Back cancels there and
     * an untouched capture lapses after 8 s, instead of the next button (B,
     * pressed to leave the page) silently replacing the binding. */
    if(port==0) {
        int any=0,taken=0;
        for(i=1;i<=24;i++)any|=source_value(&raw,i)>16000;
        if(s_capture>=0 && s_capture_tab && s_native_capture &&
           GetTickCount()-(DWORD)s_native_since>8000) {s_capture=-1;s_native_capture=0;mark_dirty();}
        if(s_capture>=0 && s_capture_tab && !any)s_capture_armed=1;
        for(i=1;i<=24;i++) {
            int down=source_value(&raw,i)>16000;
            if(!taken && foreground && blocked && s_capture>=0 && s_capture_tab && s_capture_armed &&
               down && !s_joy_was[i]) {
                if(s_native_capture && i==10) {s_capture=-1;s_native_capture=0;mark_dirty();}
                else assign_binding(i);
                taken=1;
            }
            s_joy_was[i]=down;
        }
    }
    if(!foreground || blocked) {
        uint32_t packet=raw.packet;memset(out,0,sizeof *out);out->packet=packet+1;
        ReleaseSRWLockExclusive(&s_lock);return;
    }
    if(port!=0) {ReleaseSRWLockExclusive(&s_lock);return;}
    for(i=0;i<ACTIONS;i++) {
        value[i]=source_value(&raw,s_joy[i]);
        kb[i]=s_keyboard_enabled &&
            ((s_keys[i] && xbox_FramebufferKeyDown(s_keys[i])) ||
             (s_keys[i]==s_default_keys[i] && s_aliases[i] && xbox_FramebufferKeyDown(s_aliases[i])));
        if(kb[i])value[i]=32767;
    }
    if(value[WALK] && !s_walk_was)s_walk=!s_walk;
    s_walk_was=value[WALK]!=0;
    memset(out,0,sizeof *out);out->packet=raw.packet+1;
    out->pad.lx=(int16_t)clamp_axis(value[MOVE_RIGHT]-value[MOVE_LEFT]);
    out->pad.ly=(int16_t)clamp_axis(value[MOVE_UP]-value[MOVE_DOWN]);
    if(kb[MOVE_LEFT]||kb[MOVE_RIGHT])out->pad.lx=(int16_t)((kb[MOVE_RIGHT]-kb[MOVE_LEFT])*(s_walk?s_walk_deflection:32767));
    else if(s_walk && s_joy[WALK])out->pad.lx=(int16_t)(out->pad.lx*s_walk_deflection/32767);
    if(kb[MOVE_UP]||kb[MOVE_DOWN])out->pad.ly=(int16_t)((kb[MOVE_UP]-kb[MOVE_DOWN])*(s_walk?s_walk_deflection:32767));
    else if(s_walk && s_joy[WALK])out->pad.ly=(int16_t)(out->pad.ly*s_walk_deflection/32767);
    {static DWORD last;static int mx,my;DWORD now=GetTickCount(),dt=now-last;
        if(dt>=15) {double factor;if(dt>100)dt=100;xbox_FramebufferTakeMouse(&dx,&dy);
            factor=32767.0*s_mouse_speed/(43.0*dt*1.5);
            mx=s_keyboard_enabled?clamp_axis((int)(dx*factor)):0;
            my=s_keyboard_enabled?clamp_axis((int)(-dy*factor)):0;last=now;}
        out->pad.rx=(int16_t)clamp_axis(kb[CAMERA_LEFT]||kb[CAMERA_RIGHT]?
            (kb[CAMERA_RIGHT]-kb[CAMERA_LEFT])*32767:mx?mx:value[CAMERA_RIGHT]-value[CAMERA_LEFT]);
        out->pad.ry=(int16_t)clamp_axis(kb[CAMERA_UP]||kb[CAMERA_DOWN]?
            (kb[CAMERA_UP]-kb[CAMERA_DOWN])*32767:my?my:value[CAMERA_UP]-value[CAMERA_DOWN]);}
    {static const int action[]={JUMP,CANCEL,SWORD,DAGGER,ALT_VIEW,LOOK,REWIND,SPECIAL};
        for(i=0;i<8;i++)out->pad.analog[i]=(uint8_t)((value[action[i]]*255+16383)/32767);}
    if(value[PAUSE])out->pad.buttons|=0x10;if(value[BACK])out->pad.buttons|=0x20;
    if(value[LEFT_CLICK])out->pad.buttons|=0x40;if(value[RESET_CAMERA])out->pad.buttons|=0x80;
    for(i=0;i<4;i++)if(value[MENU_UP+i])out->pad.buttons|=(uint16_t)(1u<<i);
    ReleaseSRWLockExclusive(&s_lock);
}

void resot_scale_look(float *axes)
{
    AcquireSRWLockShared(&s_lock);
    axes[0]=resot_look_value(axes[0],s_look_sensitivity);
    axes[1]=resot_look_value(axes[1],s_look_sensitivity);
    ReleaseSRWLockShared(&s_lock);
}

void resot_native_label(int page, int item, char *out, unsigned size)
{
    char value[100];
    AcquireSRWLockExclusive(&s_lock);
    if (page==RESOT_NATIVE_GRAPHICS) {
        switch (item) {
        case 0: snprintf(out,size,"FPS limit: %s",s_cap_names[s_fps==30?0:s_fps==60?1:s_fps==120?2:3]); break;
        case 1: snprintf(out,size,"VSync: %s",s_vsync?"On":"Off"); break;
        case 3: snprintf(out,size,"Graphics preset: %s",s_post_quality?s_quality_names[s_post_quality]:"Debug Off"); break;
        default: snprintf(out,size,"Resolution: %s",s_native_sizes[s_resolution]); break;
        }
    } else if (page==RESOT_NATIVE_CONTROLS && item==0) {
        snprintf(out,size,"Look sensitivity: %d%%",s_look_sensitivity);
    } else if (item>=0 && item<ACTIONS) {
        int joy=page==RESOT_NATIVE_JOY;
        if (s_capture==item && s_capture_tab==joy && s_native_capture)
            snprintf(value,sizeof value,joy?"press a button":"press a key");
        else if (joy) snprintf(value,sizeof value,"%s",s_native_joy[s_joy[item]>=0 && s_joy[item]<=24 ? s_joy[item] : 0]);
        else {
            binding_name(s_keys[item],0,value,sizeof value);
            if (s_keys[item]==VK_SPACE) strcpy(value,"Space");
            else if (s_keys[item]==VK_LBUTTON) strcpy(value,"Mouse L");
            else if (s_keys[item]==VK_RBUTTON) strcpy(value,"Mouse R");
            else if (s_keys[item]==VK_MBUTTON) strcpy(value,"Mouse M");
            else if (s_keys[item]==VK_LSHIFT || s_keys[item]==VK_RSHIFT) strcpy(value,"Shift");
            else if (s_keys[item]==VK_ESCAPE) strcpy(value,"Esc");
            else if (s_keys[item]==VK_BACK) strcpy(value,"Backspace");
            value[12]=0;
        }
        snprintf(out,size,"%s: %s",s_native_actions[item],value);
    } else if (size) out[0]=0;
    ReleaseSRWLockExclusive(&s_lock);
}

void resot_native_activate(int page, int item)
{
    HWND window=(HWND)xbox_FramebufferWindowHandle();
    int resize=0;
    AcquireSRWLockExclusive(&s_lock);
    if (page==RESOT_NATIVE_GRAPHICS) {
        switch (item) {
        case 0: s_fps=s_fps==30?60:s_fps==60?120:s_fps==120?0:30; xbox_SetFrameLimit(s_fps); break;
        case 1: s_vsync=!s_vsync; xbox_SetVSync(s_vsync); break;
        case 3: s_post_quality=s_post_quality>=3?1:s_post_quality+1;
            s_texture_glow=s_post_quality==3; xbox_SetPostProcessingQuality(s_post_quality); break;
        case 2: s_resolution=(s_resolution+1)%6; resize=1; break;

        }
        save_config();
    } else if (page==RESOT_NATIVE_CONTROLS && item==0) {
        s_look_sensitivity=s_look_sensitivity>=200?25:s_look_sensitivity+25;
        save_config();
    } else if (item>=0 && item<ACTIONS) {
        s_capture=item; s_capture_tab=page==RESOT_NATIVE_JOY; s_native_capture=1; s_capture_armed=0;
        s_native_since=(int)GetTickCount();
    }
    mark_dirty();
    ReleaseSRWLockExclusive(&s_lock);
    if (resize && window) PostMessageA(window,APPLY_SIZE,0,0);
}

void resot_native_reset_bindings(void)
{
    AcquireSRWLockExclusive(&s_lock);
    memcpy(s_keys,s_default_keys,sizeof s_keys);memcpy(s_joy,s_default_joy,sizeof s_joy);
    s_capture=-1;s_native_capture=0;s_walk=s_walk_was=0;save_config();
    ReleaseSRWLockExclusive(&s_lock);
}

void resot_options_prepare_config(void)
{
    char path[1024], *slash;
    HMODULE module=GetModuleHandleA(NULL);
    HRSRC resource=FindResourceA(module,MAKEINTRESOURCEA(203),RT_RCDATA);
    HGLOBAL loaded;
    const void *data;
    DWORD size,written,n=GetModuleFileNameA(NULL,path,sizeof path);
    HANDLE file;
    if(!resource || !n || n>=sizeof path)return;
    slash=strrchr(path,'\\');if(!slash)return;
    slash[1]=0;
    if(strlen(path)+strlen("resot-options.ini")>=sizeof path)return;
    strcat(path,"resot-options.ini");
    loaded=LoadResource(module,resource);data=loaded?LockResource(loaded):NULL;
    size=SizeofResource(module,resource);
    if(!data || !size)return;
    /* CREATE_NEW preserves existing files, including when both targets start. */
    file=CreateFileA(path,GENERIC_WRITE,FILE_SHARE_READ,NULL,CREATE_NEW,FILE_ATTRIBUTE_NORMAL,NULL);
    if(file==INVALID_HANDLE_VALUE)return;
    if(!WriteFile(file,data,size,&written,NULL) || written!=size)
        fprintf(stderr,"[OPTIONS] could not finish creating %s\n",path);
    CloseHandle(file);
}

void resot_options_init(void)
{
    char name[32],*slash;const char *env;int i;
    env=getenv("RECOMP_KEYBOARD");s_keyboard_enabled=!env || *env!='0';
    env=getenv("RECOMP_MOUSE_SPEED");s_mouse_speed=env&&*env?atoi(env):43;
    if(s_mouse_speed<1)s_mouse_speed=1;if(s_mouse_speed>100)s_mouse_speed=100;
    env=getenv("RECOMP_WALK_DEFLECTION");s_walk_deflection=env&&*env?atoi(env):12000;
    if(s_walk_deflection<1000)s_walk_deflection=1000;if(s_walk_deflection>32767)s_walk_deflection=32767;
    GetModuleFileNameA(NULL,s_path,sizeof s_path);
    slash=strrchr(s_path,'\\');if(slash)slash[1]=0;else s_path[0]=0;
    if(strlen(s_path)+strlen("resot-options.ini")>=sizeof s_path)return;
    strcat(s_path,"resot-options.ini");
    s_look_sensitivity=resot_look_percent((int)GetPrivateProfileIntA("Controls","LookSensitivityPercent",200,s_path));
    GetPrivateProfileStringA("Graphics","Renderer","d3d11",name,sizeof name,s_path);
    env=getenv("RESOT_RENDERER");
    s_renderer=!_stricmp(name,"vulkan")?2:!_stricmp(name,"d3d12")?1:0;
    /* Native D3D11 remains the default for absent or invalid preferences. */
    /* A command-line environment override affects this run, not the saved
     * selection when an unrelated option/binding is saved. */
    i=env&&*env?(!_stricmp(env,"vulkan")?2:!_stricmp(env,"d3d12")?1:0):s_renderer;
    _putenv_s("RESOT_RENDERER",s_renderer_tokens[i]);
    s_fps=(int)GetPrivateProfileIntA("Graphics","FPSLimit",0,s_path);
    if(s_fps!=0 && s_fps!=30 && s_fps!=60 && s_fps!=120)s_fps=0;
    s_resolution=3;
    { int percent=(int)GetPrivateProfileIntA("Graphics","InternalResolutionPercent",150,s_path);
      for(i=0;i<6;i++)if(s_scales[i]==percent)s_resolution=i; }
    xbox_SetRenderScalePercent(s_scales[s_resolution]);
    env=getenv("RECOMP_HW_VSYNC");
    s_vsync=GetPrivateProfileIntA("Graphics","VSync",env && *env!='0',s_path)!=0;
    s_post_quality=(int)GetPrivateProfileIntA("Graphics","GraphicsPreset",-1,s_path);
    if(s_post_quality==-1) {
        int old=(int)GetPrivateProfileIntA("Graphics","PostProcessingQuality",3,s_path);
        int glow=GetPrivateProfileIntA("Graphics","TextureGlowEffect",0,s_path)!=0;
        s_post_quality=resot_graphics_preset(-1,old,glow);
    }
    s_post_quality=resot_graphics_preset(s_post_quality,3,0);
    s_texture_glow=s_post_quality==3;
    xbox_SetPostProcessingQuality(s_post_quality);
    s_pending_size=0; /* Internal resolution never changes the window. */
    for(i=0;i<ACTIONS;i++) {
        snprintf(name,sizeof name,"Action%d",i);
        s_keys[i]=(int)GetPrivateProfileIntA("Keyboard",name,s_default_keys[i],s_path);
        s_joy[i]=(int)GetPrivateProfileIntA("Joystick",name,s_default_joy[i],s_path);
        if(s_keys[i]<0 || s_keys[i]>255)s_keys[i]=s_default_keys[i];
        if(s_joy[i]<0 || s_joy[i]>24)s_joy[i]=s_default_joy[i];
    }
    s_console_logs=GetPrivateProfileIntA("Diagnostics","ConsoleLogs",0,s_path)!=0;
    s_tutorials=GetPrivateProfileIntA("Game","Tutorials",1,s_path)!=0;
    if(s_console_logs)resot_console_logs_set(1);
    xbox_SetFrameLimit(s_fps);
    xbox_SetVSync(s_vsync);
    xbox_FramebufferSetOptionsCallbacks(panel,event);
    xbox_InputSetHostFilter(input);
}
