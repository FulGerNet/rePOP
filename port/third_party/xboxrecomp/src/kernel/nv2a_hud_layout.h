/* RE-SoT: host-space HUD classification, independent of allocation addresses.
 * Retail's forming-tank ring was traced below the normal top HUD band. */
#ifndef RESOT_NV2A_HUD_LAYOUT_H
#define RESOT_NV2A_HUD_LAYOUT_H
/* RE-SoT: retail health outline (v031-health-trace.txt): its 64x32
 * ARGB pieces span y=36.531..68.531, and upgrades extend across x=320.
 * Anchor the whole strip to the left, including its end cap and fade. */
static inline int nv_hw_retail_health_frame(float widen,float left,float right,
    float top,float bottom,unsigned width,unsigned height,unsigned format)
{
    return widen>1 && width==64 && height==32 && format==0x06 &&
        top>=35 && top<=38 && bottom>=67 && bottom<=70 &&
        left>=320-320/widen-0.5f && right<=320+320/widen+0.5f && right>=left;
}
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
/* RE-SoT: retail sand column (20261020-144739 trace, 16:9): tanks stack every
 * 21 px from y=104.531 at x=109.931..141.531, the forming ring just below the
 * last one (x=113.487..133.398, y=190.865..207.198). They grow past the y=240
 * limit above, into the band between the HUD bands. Blended ARGB 64x32 frame,
 * 32x32 body and 16x16 cap only: opaque 32x32 quads were traced in this column. */
static inline int nv_hw_retail_sand_column(float widen,float left,float right,
    float top,float bottom,unsigned width,unsigned height,unsigned format,
    unsigned blend)
{
    float reference_left=320.0f+(left-320.0f)*widen*0.75f;
    float reference_right=320.0f+(right-320.0f)*widen*0.75f;
    return widen>1.0f && blend && format==0x06 &&
        ((width==64 && height==32) || (width==32 && height==32) ||
         (width==16 && height==16)) &&
        reference_left>=100.0f && reference_right<=150.0f &&
        top>=70.0f && bottom<=480.0f && bottom>=top && bottom-top<=32.0f;
}
#endif
