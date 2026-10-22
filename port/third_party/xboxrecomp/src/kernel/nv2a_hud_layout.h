/* RE-SoT: host-space HUD classification, independent of allocation addresses.
 * Retail's forming-tank ring was traced below the normal top HUD band. */
#ifndef RESOT_NV2A_HUD_LAYOUT_H
#define RESOT_NV2A_HUD_LAYOUT_H
static inline int nv_hw_retail_forming_tank(float widen,float left,float right,
                                           float top,float bottom)
{
    /* RE-SoT: the original x<=160/width<=32 bounds were measured at 16:9
     * (widen=4/3). Compare in that reference frame: the narrowed 4:3 origin
     * moves right on ultrawide Android displays, including 2712x1220. Only
     * recognition changes; the existing shared HUD edge shift is retained. */
    float reference_right=320.0f+(right-320.0f)*widen*0.75f;
    float reference_width=(right-left)*widen*0.75f;
    return widen>1.0f && reference_right<=160.0f && bottom<=240.0f &&
           reference_width>=0.0f && reference_width<=32.0f &&
           bottom>=top && bottom-top<=32.0f;
}
#endif
