/* RE-SoT: regress the retail ring's observed 16:9 and phone coordinates,
 * preserving its original footprint while rejecting central menu geometry. */
#include <stdio.h>
#include "../../src/kernel/nv2a_hud_layout.h"
#define CHECK(x) do { if(!(x)) { fprintf(stderr,"line %d: %s\n",__LINE__,#x); return 1; } } while(0)
int main(void)
{
    CHECK(nv_hw_retail_forming_tank(4.0f/3.0f,120,132,192,204));
    /* 2712x1220 capture: white ring around x=699, y=505 in the full image.
     * The old right<=160 test rejects this batch in 640x480 host space. */
    CHECK(nv_hw_retail_forming_tank((2712.0f/1220.0f)/(4.0f/3.0f),159,171,192,205));
    CHECK(171>160);
    for(int i=0;i<4;i++) {
        const float ratios[]={16.0f/9.0f,20.0f/9.0f,21.0f/9.0f,2712.0f/1220.0f};
        float widen=ratios[i]/(4.0f/3.0f);
        float left=320+(120-320)*(4.0f/3.0f)/widen;
        float right=320+(132-320)*(4.0f/3.0f)/widen;
        /* RE-SoT: full upgrade crosses centre; its end cap is wholly right. */
        CHECK(nv_hw_retail_health_frame(widen,left,320+180/widen,36.531f,68.531f,64,32,6));
        CHECK(nv_hw_retail_health_frame(widen,320+100/widen,320+180/widen,36.531f,68.531f,64,32,6));
        CHECK(!nv_hw_retail_health_frame(widen,left,right,48,168,64,32,6));
        CHECK(!nv_hw_retail_health_frame(widen,left,right,36.531f,68.531f,128,32,6));
        CHECK(nv_hw_retail_forming_tank(widen,left,right,192,204));
        /* Same logical margin after the existing HUD shift, at any aspect. */
        float anchored=(left-320*(1-1/widen))*widen;
        CHECK(anchored>53.32f && anchored<53.35f);
        CHECK(!nv_hw_retail_forming_tank(widen,300,320,192,204));
        CHECK(!nv_hw_retail_forming_tank(widen,left,right,240,252));
        CHECK(!nv_hw_retail_forming_tank(widen,left,right,180,220));
        CHECK(!nv_hw_retail_forming_tank(widen,left,right+64,192,204));
    }
    CHECK(!nv_hw_retail_forming_tank(1,120,132,192,204));
    puts("Retail forming-tank ring: 16:9/ultrawide recognition and edge anchoring pass");
    return 0;
}
