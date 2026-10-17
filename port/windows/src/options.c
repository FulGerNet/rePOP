/* Portable host options: graphics settings and input bindings, kept in
 * resot-options.ini and changed from the game's own menu (the reSOT Options
 * pages in source/<target>/target_hooks.c). The runtime supplies window
 * events and controller state before its keyboard merge; the F6 overlay is
 * the diagnostics panel in diag.c. */
#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "options.h"

enum { APPLY_SIZE = WM_APP + 44 };
enum { MOVE_UP, MOVE_DOWN, MOVE_LEFT, MOVE_RIGHT, WALK, JUMP, SWORD, DAGGER,
       SPECIAL, CANCEL, REWIND, LOOK, ALT_VIEW, RESET_CAMERA, PAUSE, BACK,
       MENU_UP, MENU_DOWN, MENU_LEFT, MENU_RIGHT, CAMERA_UP, CAMERA_DOWN,
       CAMERA_LEFT, CAMERA_RIGHT, LEFT_CLICK, ACTIONS };
typedef struct {
    uint32_t packet;
    struct { uint16_t buttons; uint8_t analog[8]; int16_t lx, ly, rx, ry; } pad;
} HostPad;
_Static_assert(sizeof(HostPad)==24,"Host controller layout must match the runtime Xbox state");
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
static const int s_sizes[][2] = {{0,0},{800,600},{1024,768},{1280,720},{1600,900},
                                      {1920,1080},{2560,1440},{3840,2160}};
/* The game's menu font has no hyphen or brackets, and a page is one column
 * that starts right of centre: short names for the native pages. */
static const char *const s_native_actions[ACTIONS] = {
    "Forward", "Backward", "Left", "Right", "Walk", "Jump", "Sword", "Dagger",
    "Special", "Cancel", "Rewind", "Look", "Alt view", "Reset cam", "Pause", "Back",
    "Menu up", "Menu down", "Menu left", "Menu right", "Cam up", "Cam down",
    "Cam left", "Cam right", "Stick click"
};
static const char *const s_native_sizes[] = {"Monitor","800x600","1024x768","1280x720",
    "1600x900","1920x1080","2560x1440","3840x2160"};
static const char *const s_native_joy[25] = {
    "None", "A", "B", "X", "Y", "Black", "White", "L trigger", "R trigger", "Start", "Back",
    "L stick", "R stick", "Pad up", "Pad down", "Pad left", "Pad right", "L up", "L down",
    "L left", "L right", "R up", "R down", "R left", "R right"
};
static const char *const s_cap_names[] = {"30","60","120","None"};
static SRWLOCK s_lock = SRWLOCK_INIT;
static volatile LONG s_revision;
static int s_keys[ACTIONS], s_joy[ACTIONS], s_fps = 60, s_resolution;
static int s_vsync=1, s_post_processing=1, s_capture = -1, s_capture_tab;
static int s_joy_was[25], s_walk, s_walk_was, s_pending_size, s_size_posted;
static int s_native_capture, s_native_since;
static int s_keyboard_enabled=1, s_mouse_speed=43, s_walk_deflection=12000;
static char s_path[1024];

extern void *xbox_FramebufferWindowHandle(void);
extern int xbox_FramebufferKeyDown(int);
extern void xbox_FramebufferTakeMouse(int *, int *);
extern void xbox_SetFrameLimit(int);
extern void xbox_SetVSync(int);
extern void xbox_SetPostProcessing(int);
extern void xbox_FramebufferSetOptionsCallbacks(
    int (*)(const uint32_t **, uint32_t *, uint32_t *),
    int (*)(void *, unsigned, uintptr_t, intptr_t));
extern void xbox_InputSetHostFilter(void (*)(void *, unsigned));

/* The game's native pages refresh their labels when the revision moves. */
static void mark_dirty(void) { InterlockedIncrement(&s_revision); }
long resot_native_revision(void) { return InterlockedCompareExchange(&s_revision,0,0); }

void resot_options_summary(char *out, unsigned size)
{
    AcquireSRWLockShared(&s_lock);
    snprintf(out,size,"FPS limit %s, VSync %s, post-processing %s, resolution %s",
             s_cap_names[s_fps==30?0:s_fps==60?1:s_fps==120?2:3], s_vsync?"on":"off",
             s_post_processing?"on":"off", s_native_sizes[s_resolution]);
    ReleaseSRWLockShared(&s_lock);
}

static void save_config(void)
{
    char name[32], value[32];
    int i, ok = 1;
    snprintf(value,sizeof value,"%d",s_fps);
    ok &= WritePrivateProfileStringA("Graphics","FPSLimit",value,s_path);
    snprintf(value,sizeof value,"%d",s_vsync);
    ok &= WritePrivateProfileStringA("Graphics","VSync",value,s_path);
    snprintf(value,sizeof value,"%d",s_post_processing);
    ok &= WritePrivateProfileStringA("Graphics","PostProcessing",value,s_path);
    snprintf(value,sizeof value,"%d",s_resolution);
    ok &= WritePrivateProfileStringA("Graphics","Resolution",value,s_path);
    for (i=0;i<ACTIONS;i++) {
        snprintf(name,sizeof name,"Action%d",i);
        snprintf(value,sizeof value,"%d",s_keys[i]);
        ok &= WritePrivateProfileStringA("Keyboard",name,value,s_path);
        snprintf(value,sizeof value,"%d",s_joy[i]);
        ok &= WritePrivateProfileStringA("Joystick",name,value,s_path);
    }
    if (!ok) fprintf(stderr,"[OPTIONS] could not save %s (read-only folder?)\n",s_path);
    mark_dirty();
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

static void apply_resolution(HWND window)
{
    RECT r;
    int width=s_sizes[s_resolution][0], height=s_sizes[s_resolution][1];
    MONITORINFO mi;
    mi.cbSize=sizeof mi;
    GetMonitorInfoA(MonitorFromWindow(window,MONITOR_DEFAULTTONEAREST),&mi);
    if (!width) {
        SetWindowLongPtrA(window,GWL_STYLE,WS_POPUP|WS_VISIBLE);
        SetWindowPos(window,NULL,mi.rcMonitor.left,mi.rcMonitor.top,
            mi.rcMonitor.right-mi.rcMonitor.left,mi.rcMonitor.bottom-mi.rcMonitor.top,
            SWP_NOZORDER|SWP_FRAMECHANGED);
    } else {
        r.left=r.top=0; r.right=width; r.bottom=height;
        AdjustWindowRect(&r,WS_OVERLAPPEDWINDOW,FALSE);
        SetWindowLongPtrA(window,GWL_STYLE,WS_OVERLAPPEDWINDOW|WS_VISIBLE);
        SetWindowPos(window,NULL,mi.rcWork.left+24,mi.rcWork.top+24,r.right-r.left,r.bottom-r.top,
                     SWP_NOZORDER|SWP_FRAMECHANGED);
    }
}

static int event(void *handle, unsigned message, uintptr_t wp, intptr_t lp)
{
    HWND window=(HWND)handle;
    /* SetWindowPos sends synchronous WM_SIZE messages back to this callback;
     * do not hold the options lock while Windows dispatches them. */
    if (message==APPLY_SIZE) { apply_resolution(window); return 1; }
    if (resot_diag_event(handle,message,wp,lp)) return 1;
    if (s_native_capture) {
        /* A binding started from the game's menu: the next fresh key or mouse
         * button press, not the held repeat of the press that started it. */
        int code=(int)wp, taken=0;
        if ((message==WM_KEYDOWN || message==WM_SYSKEYDOWN) && !(lp & (1L<<30)) &&
            GetForegroundWindow()==window) {
            AcquireSRWLockExclusive(&s_lock);
            if (s_capture>=0 && !s_capture_tab) {
                if (code==VK_ESCAPE) { s_capture=-1; s_native_capture=0; mark_dirty(); }
                else if (code!=VK_F5 && code!=VK_F6) {
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

/* The F6 diagnostics panel; the first frame also applies a saved size. */
static int panel(const uint32_t **pixels,uint32_t *width,uint32_t *height)
{
    HWND window=(HWND)xbox_FramebufferWindowHandle();
    if(window && s_pending_size && !s_size_posted) {s_size_posted=1;PostMessageA(window,APPLY_SIZE,0,0);}
    return resot_diag_panel(pixels,width,height);
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
    blocked=s_native_capture;
    if(port==0)for(i=1;i<=24;i++) {
        int down=source_value(&raw,i)>16000;
        if(foreground && blocked && s_capture>=0 && s_capture_tab && down && !s_joy_was[i])assign_binding(i);
        s_joy_was[i]=down;
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

void resot_native_label(int page, int item, char *out, unsigned size)
{
    char value[100];
    AcquireSRWLockExclusive(&s_lock);
    if (page==RESOT_NATIVE_GRAPHICS) {
        switch (item) {
        case 0: snprintf(out,size,"FPS limit: %s",s_cap_names[s_fps==30?0:s_fps==60?1:s_fps==120?2:3]); break;
        case 1: snprintf(out,size,"VSync: %s",s_vsync?"On":"Off"); break;
        case 2: snprintf(out,size,"Post processing: %s",s_post_processing?"On":"Off"); break;
        default: snprintf(out,size,"Resolution: %s",s_native_sizes[s_resolution]); break;
        }
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
        case 2: s_post_processing=!s_post_processing; xbox_SetPostProcessing(s_post_processing); break;
        case 3: s_resolution=(s_resolution+1)%8; resize=1; break;
        }
        save_config();
    } else if (item>=0 && item<ACTIONS) {
        s_capture=item; s_capture_tab=page==RESOT_NATIVE_JOY; s_native_capture=1;
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
    s_fps=(int)GetPrivateProfileIntA("Graphics","FPSLimit",60,s_path);
    if(s_fps!=0 && s_fps!=30 && s_fps!=60 && s_fps!=120)s_fps=60;
    s_resolution=(int)GetPrivateProfileIntA("Graphics","Resolution",0,s_path);
    if(s_resolution<0 || s_resolution>=8)s_resolution=0;
    env=getenv("RECOMP_HW_VSYNC");
    s_vsync=GetPrivateProfileIntA("Graphics","VSync",!env || *env!='0',s_path)!=0;
    s_post_processing=GetPrivateProfileIntA("Graphics","PostProcessing",1,s_path)!=0;
    s_pending_size=GetFileAttributesA(s_path)!=INVALID_FILE_ATTRIBUTES;
    for(i=0;i<ACTIONS;i++) {
        snprintf(name,sizeof name,"Action%d",i);
        s_keys[i]=(int)GetPrivateProfileIntA("Keyboard",name,s_default_keys[i],s_path);
        s_joy[i]=(int)GetPrivateProfileIntA("Joystick",name,s_default_joy[i],s_path);
        if(s_keys[i]<0 || s_keys[i]>255)s_keys[i]=s_default_keys[i];
        if(s_joy[i]<0 || s_joy[i]>24)s_joy[i]=s_default_joy[i];
    }
    xbox_SetFrameLimit(s_fps);
    xbox_SetVSync(s_vsync);
    xbox_SetPostProcessing(s_post_processing);
    xbox_FramebufferSetOptionsCallbacks(panel,event);
    xbox_InputSetHostFilter(input);
}
