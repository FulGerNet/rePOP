/* Synthetic guest objects exercise the production bridge, no game bytes. */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "../../port/game/resot_menu_pointer.c"
ptrdiff_t g_xbox_mem_offset;
#define CHECK(x) do { if(!(x)) { fprintf(stderr,"line %d: %s\n",__LINE__,#x); exit(1); } } while(0)
static uint8_t *memory;
static void put(uint32_t a,uint32_t n) { memcpy(memory+a,&n,4); }
static void real(uint32_t a,float n) { memcpy(memory+a,&n,4); }
static void poll(uint8_t *pad) { memset(pad,0,22); resot_menu_pointer_pad(pad); }
static void tap(float x,float y) { resot_menu_pointer_event(x,y,1); resot_menu_pointer_event(x,y,2); }
int main(void)
{
    uint8_t pad[22];
    uint32_t mgr=0x10000,page=0x12000,children=0x14000;
    int i;
    memory=calloc(1,8*1024*1024); CHECK(memory);
    g_xbox_mem_offset=(ptrdiff_t)memory;
    _putenv_s("RECOMP_HW_ASPECT","4:3");
    resot_menu_pointer_viewport(4.0f/3);
    put(MENU_MANAGER,mgr); put(mgr+0xF0,1); put(mgr+0x70,page);
    put(page+PAGE_STATE,2); put(page+PAGE_CHILDREN,children); put(page+PAGE_CHILDREN+4,children+8);
    for(i=0;i<2;i++) {
        uint32_t c=0x16000+i*0x1000,t=c+0x200,v=c+0x400,a=c+0x600;
        put(children+i*4,c); put(c+0x98,1); put(c+0x9C,t);
        put(t+0xC,v); put(t+0x10,v+4); put(v,a); put(a,TEXT_VTABLE);
        real(a+0x1C,.5f); real(a+0x20,.4f+i*.2f);
    }
    put(page+PAGE_SELECTED,0x16000);
    poll(pad); CHECK(resot_menu_scene()==1);
    tap(.5f,.6f); CHECK(!resot_menu_movie_tap()); // idle movie status must not steal menu taps
    poll(pad); CHECK(pad[4]==2 && !pad[6]);
    put(page+PAGE_SELECTED,0x17000);
    poll(pad); CHECK(!pad[4] && !pad[6]); // release between direction and A
    poll(pad); CHECK(pad[6]==255);
    poll(pad); CHECK(!pad[6]);
    poll(pad); CHECK(!pad[6] && !pad[4]); // one activation only
    resot_menu_pointer_event(.5f,.6f,1); resot_menu_pointer_event(.8f,.6f,2);
    poll(pad); CHECK(!pad[6]); // drag is not a tap
    resot_menu_pointer_event(.5f,.6f,1);
    put(mgr+0xF0,0); poll(pad); CHECK(resot_menu_scene()==0);
    resot_menu_camera_viewport(60,360,480); CHECK(resot_menu_scene()==2);
    resot_menu_camera_viewport(0,480,480); CHECK(resot_menu_scene()==0);
    put(mgr+0xF0,1); poll(pad);
    resot_menu_camera_viewport(60,360,480); CHECK(resot_menu_scene()==1); // pause during cinematic
    resot_menu_camera_viewport(0,480,480);
    resot_menu_pointer_event(.5f,.6f,2); poll(pad); CHECK(!pad[6]); // page changed while held
    resot_menu_pointer_event(0,0,4); poll(pad); CHECK(pad[7]==255);
    poll(pad); CHECK(!pad[7]);
    resot_menu_pointer_event(.5f,.4f,0);
    memset(pad,0,22); pad[6]=255; resot_menu_pointer_pad(pad); CHECK(!pad[4]); // physical wins
    poll(pad); CHECK(!pad[4]); // stationary pointer doesn't fight keyboard
    put(BINK_HANDLE,1); poll(pad); CHECK(resot_menu_scene()==2);
    tap(.5f,.6f); CHECK(resot_menu_movie_tap()); CHECK(!resot_menu_movie_tap());
    put(BINK_HANDLE,0); poll(pad);
    resot_menu_pointer_viewport(16.0f/9);
    tap(.01f,.6f); poll(pad); CHECK(!pad[6]); // pillarbox miss
    tap(.5f,.6f); resot_menu_pointer_event(0,0,3); poll(pad); CHECK(!pad[6]);
    put(page+PAGE_CHILDREN,0xFFFFFFFCu); put(page+PAGE_CHILDREN+4,0);
    poll(pad); CHECK(!pad[6]); // invalid vector cannot be traversed
    free(memory);
    puts("pointer navigation, release, context, movie, viewport and stale metadata: pass");
    return 0;
}
