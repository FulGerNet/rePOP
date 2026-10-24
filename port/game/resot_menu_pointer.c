/* Shared mouse/touch event bridge. Guest objects are read only on the title
 * thread; UI threads publish events under a portable atomic spinlock. */
#include "resot_menu_pointer.h"
#include "guest_probe.h"
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
extern ptrdiff_t g_xbox_mem_offset;
#if defined(_MSC_VER)
typedef volatile LONG PointerAtomic;
static int atomic_get(PointerAtomic *p) { return (int)InterlockedCompareExchange(p,0,0); }
static void atomic_set(PointerAtomic *p,int n) { InterlockedExchange(p,n); }
static void acquire(PointerAtomic *p) { while(InterlockedCompareExchange(p,1,0)) YieldProcessor(); }
#else
typedef int PointerAtomic;
static int atomic_get(PointerAtomic *p) { return __atomic_load_n(p,__ATOMIC_ACQUIRE); }
static void atomic_set(PointerAtomic *p,int n) { __atomic_store_n(p,n,__ATOMIC_RELEASE); }
static void acquire(PointerAtomic *p) { while(__atomic_exchange_n(p,1,__ATOMIC_ACQUIRE)) {} }
#endif
static PointerAtomic lock,scene,movie,cinematic,context;
static float pointer_x, pointer_y, surface_aspect=16.0f/9.0f;
static int pending, have_pointer, pressed;
static float press_x,press_y;
static int press_context;
void resot_menu_pointer_event(float x,float y,int action)
{
    acquire(&lock);
    if(!isfinite(x) || !isfinite(y)) action=3;
    pointer_x=x; pointer_y=y; have_pointer=action!=3;
    if(action==1) { pressed=1; press_x=x; press_y=y; press_context=atomic_get(&context); }
    if(action==2) {
        if(pressed && press_context==atomic_get(&context) &&
                fabsf(x-press_x)<0.025f && fabsf(y-press_y)<0.025f) pending|=1;
        pressed=0;
    }
    if(action==3) { pending=4; pressed=0; }
    if(action==4) pending|=2;
    atomic_set(&lock,0);
}
int resot_menu_scene(void)
{
    if(atomic_get(&movie)) return 2;
    if(atomic_get(&scene)==1) return 1;
    return atomic_get(&cinematic)?2:0;
}
/* The game's camera viewport supplies cinematic bars before they are drawn.
 * Menus have priority so a paused cinematic remains directly interactive. */
void resot_menu_camera_viewport(uint32_t top,uint32_t height,uint32_t full_height)
{
    atomic_set(&cinematic,full_height>0 && height>0 && top>1 &&
        (uint64_t)top+height+1<full_height);
}
void resot_menu_movie(int active) { atomic_set(&movie,active!=0); }
int resot_menu_movie_tap(void)
{
    int tap;
    if(!atomic_get(&movie)) return 0; /* Status is also polled outside movies. */
    acquire(&lock);
    tap=(pending&1)!=0;
    pending&=~1;
    atomic_set(&lock,0);
    return tap;
}
void resot_menu_pointer_viewport(float aspect)
{
    if(isfinite(aspect) && aspect>0) { acquire(&lock); surface_aspect=aspect; atomic_set(&lock,0); }
}
/* Per-XBE evidence: retail manager 0x007584F0, page lifecycle 0x000194A0,
 * choices 0x00039D00 / 0x002A3910, text action 0x00038090 / 0x00038E80.
 * Demo manager 0x0064D1E4, page lifecycle 0x0005E7C0, choices 0x00061730 /
 * 0x0023F040, text action 0x0005FBE0 / 0x00060160. These independently
 * establish the live page stack and text positions; construction globals
 * identify the last page BUILT and must never be used as the active page. */
#if RESOT_RUNTIME_RETAIL
#define MENU_MANAGER 0x007584F0u
#define PAGE_CHILDREN 0x28u
#define PAGE_SELECTED 0x90u
#define PAGE_STATE 0x84u
#define TEXT_VTABLE 0x0041F838u
#define LITERAL_VTABLE 0x0041F818u /* literal text: constructor 0x00038780 */
#define BINK_HANDLE 0x0044AA1Cu /* 0x0001E970 */
#define SCREEN_MANAGER 0x00758E34u /* 0x000CFC10 */
#define SCREEN_MODE 0xC8u
#define SCREEN_RATIO 0xB4u
#define RATIO_TABLE 0x0043F904u
#else
#define MENU_MANAGER 0x0064D1E4u
#define PAGE_CHILDREN 0x24u
#define PAGE_SELECTED 0x8Cu
#define PAGE_STATE 0x80u
#define TEXT_VTABLE 0x0032380Cu
#define LITERAL_VTABLE 0x00323800u /* literal text: constructor 0x00060230 */
#define BINK_HANDLE 0x0034AC34u /* 0x00018EA0 */
#define SCREEN_MANAGER 0x0064D29Cu /* 0x000EF340 */
#define SCREEN_MODE 0xC4u
#define SCREEN_RATIO 0xB0u
#define RATIO_TABLE 0x0033A3C0u
#endif
static uint32_t word(uint32_t a)
{
    uint32_t n=0;
    resot_guest_read_word(g_xbox_mem_offset,a,&n);
    return n;
}
static float number(uint32_t a)
{
    uint32_t n=word(a); float f;
    memcpy(&f,&n,4); return f;
}
static int position(uint32_t choice,float *x,float *y)
{
    uint32_t text=word(choice+0x9C),it=text?word(text+0xC):0,end=text?word(text+0x10):0;
    if(!text || !it || end<it || end-it>256) return 0;
    for(;it<end;it+=4) {
        uint32_t a=word(it);
        if(a && (word(a)==TEXT_VTABLE || word(a)==LITERAL_VTABLE)) {
            *x=number(a+0x1C); *y=number(a+0x20);
            return isfinite(*x) && isfinite(*y) && *x>=0 && *x<=1 && *y>=0 && *y<=1;
        }
    }
    return 0;
}
/* Retail load/save carousel: v031-menu-live.txt has one choice whose literal
 * group contains the description at (.5,.72) and three slot labels at
 * (.275,.59), (.5,.59), (.725,.59). The screenshot places the arrow centres
 * at (.125,.5)/(.875,.5) in the same 4:3 frame. Require this live structure;
 * a one-row menu must never acquire invisible left/right targets. */
static int save_carousel(uint32_t choice)
{
#if RESOT_RUNTIME_RETAIL
    uint32_t text=word(choice+0x9C),v=word(text+0xC),end=word(text+0x10);
    const float xs[4]={.5f,.275f,.5f,.725f},ys[4]={.72f,.59f,.59f,.59f};
    if(!v || end-v!=16) return 0;
    for(int i=0;i<4;i++) {
        uint32_t a=word(v+i*4);
        if(word(a)!=LITERAL_VTABLE || fabsf(number(a+0x1C)-xs[i])>.002f ||
            fabsf(number(a+0x20)-ys[i])>.002f) return 0;
    }
    return 1;
#else
    (void)choice; return 0; /* The demo's carousel has not been traced. */
#endif
}
void resot_menu_pointer_pad(uint8_t *state)
{
    static uint32_t last_page,click_page,click_choice,hover_choice,packet;
    static int release,budget,last_ready;
    uint32_t mgr=word(MENU_MANAGER),count=mgr?word(mgr+0xF0):0,page=0;
    uint32_t begin=0,end=0,selected=0,choices[64];
    float xs[64],ys[64],x,y,aspect,best=2.0f;
    int i,n=0,current=-1,hit=-1,events,valid,physical=0;
    if(count && count<=32) page=word(mgr+0x6C+count*4);
    if(page && word(page+PAGE_STATE)==2) {
        begin=word(page+PAGE_CHILDREN); end=word(page+PAGE_CHILDREN+4);
        selected=word(page+PAGE_SELECTED);
        if(begin && end>=begin && end-begin<=256) {
            for(;begin<end;begin+=4) {
                uint32_t c=word(begin);
                if(c && word(c+0x98) && position(c,&xs[n],&ys[n])) {
                    choices[n]=c;
                    if(c==selected) current=n;
                    n++;
                }
            }
        }
    }
    atomic_set(&scene,count?1:0); /* Hide controls throughout page transitions too. */
    atomic_set(&movie,word(BINK_HANDLE)!=0);
    acquire(&lock);
    x=pointer_x; y=pointer_y; aspect=surface_aspect;
    events=pending; pending=0; valid=have_pointer; have_pointer=0;
    atomic_set(&lock,0);
    if(page!=last_page || last_ready!=(n!=0)) {
        click_page=click_choice=hover_choice=0; last_page=page;
        last_ready=n!=0;
        atomic_set(&context,atomic_get(&context)+1);
        events=0; valid=0;
    }
    if(getenv("RESOT_POINTER_TRACE")) {
        static uint32_t traced_page=~0u,traced_count=~0u,traced_mode=~0u;
        uint32_t screen=word(SCREEN_MANAGER),mode=screen?word(screen+SCREEN_MODE):0;
        if(traced_page!=page || traced_count!=(uint32_t)n || traced_mode!=mode) {
            fprintf(stderr,"[POINTER] page=%08X stack=%u rows=%d selected=%08X mode=%u ratio=%.4f movie=%d\n",
                page,count,n,selected,mode,number(mode>0&&mode<7?RATIO_TABLE+mode*4:screen+SCREEN_RATIO),atomic_get(&movie));
            for(i=0;i<n;i++) fprintf(stderr,"[POINTER] row=%d choice=%08X x=%.4f y=%.4f\n",i,choices[i],xs[i],ys[i]);
            fprintf(stderr,"[POINTER] page-state=%u children=%08X..%08X extra=%08X..%08X\n",
                word(page+PAGE_STATE),word(page+PAGE_CHILDREN),word(page+PAGE_CHILDREN+4),
                word(page+PAGE_CHILDREN+16),word(page+PAGE_CHILDREN+20));
            uint32_t first=word(page+PAGE_CHILDREN),last=word(page+PAGE_CHILDREN+4);
            if(first && last>=first && last-first<=256) for(uint32_t at=first;at<last;at+=4) {
                uint32_t c=word(at),text=word(c+0x9C),v=word(text+0xC),ve=word(text+0x10);
                fprintf(stderr,"[POINTER] child=%08X vt=%08X enabled=%u values=%08X..%08X text=%08X actions=%08X..%08X\n",
                    c,word(c),word(c+0x98),word(c+0x8C),word(c+0x90),text,v,ve);
                if(v && ve>=v && ve-v<=256) for(;v<ve;v+=4) {
                    uint32_t a=word(v);
                    fprintf(stderr,"[POINTER] action=%08X vt=%08X xy=%.4f,%.4f\n",a,word(a),number(a+0x1C),number(a+0x20));
                }
            }
            traced_page=page; traced_count=n; traced_mode=mode;
        }
    }
    if(!state) return;
    /* Own the packet sequence after host sampling: synthetic press AND release
     * must be visible even when the physical controller remained stationary. */
    packet++; memcpy(state,&packet,4);
    for(i=4;i<22;i++) if(state[i]) physical=1;
    if(events&4) { click_choice=hover_choice=0; }
    if(release || atomic_get(&movie)) {
        release=0;
        /* Do not lose a quick second tap, or a Bink tap which its movie
         * status hook will consume after this controller poll. */
        if(events&3) {
            acquire(&lock); pending|=events&3; have_pointer|=valid; atomic_set(&lock,0);
        }
        return;
    }
    if(!n) { click_page=click_choice=hover_choice=0; return; }
    if(physical) { click_choice=hover_choice=0; return; }
    /* HUD/menu geometry remains centred at its original 4:3 width. */
    {
        const char *e=getenv("RECOMP_HW_ASPECT"),*colon=e?strchr(e,':'):NULL;
        float game=e?(float)atof(e):16.0f/9.0f;
        if(colon && atof(colon+1)>0) game/=(float)atof(colon+1);
        if(!isfinite(game) || game<4.0f/3.0f || game>4) game=4.0f/3.0f;
        x=(x-0.5f)*fmaxf(aspect,game)/(4.0f/3.0f)+0.5f;
        y=(y-0.5f)*fmaxf(1,game/aspect)+0.5f;
    }
    if(valid && x>=0 && x<=1 && y>=0 && y<=1) {
        if((events&1) && n==1 && current==0 && save_carousel(choices[0]) &&
                fabsf(y-.5f)<.065f &&
                (fabsf(x-.125f)<.055f || fabsf(x-.875f)<.055f)) {
            state[4]|=(uint8_t)(x<.5f?4:8);
            release=1; click_choice=hover_choice=0; return;
        }
        for(i=0;i<n;i++) {
            float d=fabsf(ys[i]-y),half=0.035f,half_x=0.42f;
            int j;
            for(j=0;j<n;j++) if(j!=i) {
                if(fabsf(ys[i]-ys[j])>0.005f)
                    half=fminf(half,fabsf(ys[i]-ys[j])*0.48f);
                else if(fabsf(xs[i]-xs[j])>0.005f)
                    half_x=fminf(half_x,fabsf(xs[i]-xs[j])*0.48f);
            }
            /* Use the page's actual baseline spacing, with a small allowance
             * above the baseline for glyph ascenders. No hard-coded row count. */
            float score=d+fabsf(x-xs[i])*0.01f;
            if(d<half && score<best && fabsf(x-xs[i])<half_x) { hit=i; best=score; }
        }
    }
    if(events&2) { state[7]=255; release=1; click_choice=0; return; }
    if(valid) { hover_choice=hit>=0?choices[hit]:0; budget=128; }
    if((events&1) && hit>=0) { click_page=page; click_choice=choices[hit]; }
    if(hover_choice || (click_page==page && click_choice)) {
        hit=-1;
        for(i=0;i<n;i++) if(choices[i]==(click_choice?click_choice:hover_choice)) hit=i;
        if(hit<0 || --budget<=0) { click_choice=hover_choice=0; hit=-1; }
    }
    if(hit>=0 && current>=0 && hit!=current) {
        state[4]|=(uint8_t)(hit<current?1:2);
        release=1;
    } else if(hit>=0 && choices[hit]==click_choice && current==hit) {
        state[6]=255; release=1; click_choice=hover_choice=0;
    } else if(hit>=0 && current==hit) hover_choice=0;
}
