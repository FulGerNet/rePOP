/* RE-SoT: protect display/HUD-sized viewports and the tiny bloom tail while
 * budgeting real auxiliary targets, including padded-pitch retail surfaces. */
#include "../../src/kernel/resot_effect_quality.h"
#include "../../src/kernel/nv2a_native_compat.h" /* RE-SoT: scope driver fallback without disabling geometry reuse. */
#include <stdio.h>
#define CHECK(x) do { if(!(x)) { fprintf(stderr,"failed line %d: %s\n",__LINE__,#x);return 1; } } while(0)
int main(void)
{
    CHECK(!resot_native_compat("Adreno (TM) 640",NULL));
    CHECK(resot_native_compact_pipelines("Adreno (TM) 640",0));
    CHECK(!resot_native_compact_pipelines("Adreno (TM) 750",0));
    CHECK(!resot_native_compact_pipelines("Adreno (TM) 735",0)); /* RE-SoT: user's working GPU must retain its current path. */
    CHECK(!resot_native_compact_pipelines("NVIDIA GeForce GTX 640",0));
    CHECK(!resot_native_compat("Mali-G57 MC2",NULL));
    CHECK(!resot_native_compat("Immortalis-G715",NULL));
    CHECK(resot_native_compact_pipelines("Mali-G57 MC2",0));
    CHECK(resot_native_compact_pipelines("Immortalis-G715",0));
    CHECK(!resot_native_compact_pipelines("Mali-G57 MC2",1));
    CHECK(!resot_native_compact_pipelines("Adreno (TM) 640",1));
    CHECK(!resot_native_compact_pipelines(NULL,0));
    CHECK(resot_native_cpu_vertices(1,NULL));
    CHECK(!resot_native_cpu_vertices(0,NULL));
    CHECK(!resot_native_cpu_vertices(1,"0"));
    CHECK(resot_native_cpu_vertices(0,"1"));
    CHECK(!resot_native_compat("Adreno (TM) 750",NULL));
    CHECK(!resot_native_compat("NVIDIA GeForce GTX 640",NULL));
    CHECK(!resot_native_compat("Adreno (TM) 640","0"));
    CHECK(resot_native_compat("NVIDIA", "1"));
    CHECK(!resot_native_compat(NULL,NULL));
    const unsigned percent[]={25,50,100,100};
    for(int q=0;q<4;q++) {
        CHECK(resot_preset_glow(q)==(q==3));
        CHECK(resot_preset_shadows(q)==(q!=1));
        CHECK(resot_effect_percent(q,256,256)==percent[q]);
        CHECK(resot_effect_percent(q,320,240)==percent[q]);
        CHECK(resot_effect_percent(q,40,30)==percent[q]);
        CHECK(resot_effect_percent(q,512,512)==percent[q]);
        CHECK(resot_effect_percent(q,640,480)==100);
        CHECK(resot_effect_percent(q,640,240)==100);
        CHECK(resot_effect_percent(q,20,15)==100);
        CHECK(resot_effect_percent(q,10,7)==100);
        CHECK(resot_effect_percent(q,64,16)==100);
        CHECK(resot_effect_percent(q,320,1024)==100);
    }
    /* Independently recorded caster states, not texture allocation addresses. */
    CHECK(resot_shadow_target(0x08080213,512,0,0,256,256,0,0,0));
    CHECK(resot_shadow_target(0x08080113,512,0,0,256,256,0,0,0));
    CHECK(!resot_shadow_target(0x08080118,512,0,0,256,256,0,0,0));
    CHECK(!resot_shadow_target(0x08080113,512,0,0,256,256,0x10000,0,0));
    CHECK(!resot_shadow_target(0x08080113,512,0,0,256,256,0,1,0));
    CHECK(!resot_shadow_target(0x08080113,512,0,0,256,256,0,0,1));
    CHECK(!resot_shadow_target(0x08080113,512,1,0,256,256,0,0,0));
    CHECK(!resot_shadow_target(0x08080113,1024,0,0,256,256,0,0,0));
    puts("Auxiliary quality, bloom tail, display protection and caster admission passed");
    return 0;
}
