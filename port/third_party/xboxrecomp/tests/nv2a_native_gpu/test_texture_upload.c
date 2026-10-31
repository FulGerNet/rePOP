/* RE-SoT: compare the bulk upload to scalar Morton addressing, with
 * nonsquare shapes, palettes rewritten in place, and opaque XRGB alpha. */
#include "../../src/kernel/nv2a_texture_upload.h"
#include <stdio.h>
#include <time.h>

/* RE-SoT: known red/blue blocks exercise every interpolated channel and
 * selector, including DXT1 transparency versus DXT3/5 independent alpha. */
static int check_dxt(void)
{
    const uint32_t formats[] = {0x0C, 0x0E, 0x0F};
    const uint32_t four[] = {0xFFFF0000u,0xFF0000FFu,0xFFAA0055u,0xFF5500AAu};
    const uint32_t three[] = {0xFF0000FFu,0xFFFF0000u,0xFF7F007Fu,0};
    const uint32_t reverse[] = {0xFF0000FFu,0xFFFF0000u,0xFF5500AAu,0xFFAA0055u};
    for (unsigned f=0; f<3; f++) for (unsigned order=0; order<2; order++) {
        uint8_t block[16] = {0};
        unsigned at = f ? 8 : 0;
        uint16_t a=order?0x001F:0xF800, b=order?0xF800:0x001F;
        if (f==1) memset(block,255,8);
        if (f==2) block[0]=255; /* All alpha selectors choose endpoint zero. */
        block[at]=(uint8_t)a; block[at+1]=(uint8_t)(a>>8);
        block[at+2]=(uint8_t)b; block[at+3]=(uint8_t)(b>>8);
        memset(block+at+4,0xE4,4); /* Selectors 0,1,2,3 in every row. */
        for (unsigned y=0;y<4;y++) for (unsigned x=0;x<4;x++) {
            uint32_t value;
            uint32_t expected=order?(f?reverse[x]:three[x]):four[x];
            if (!d3d8_dxt_decode_texel(block,formats[f],x,y,4,&value) || value!=expected) {
                fprintf(stderr,"DXT mismatch fmt=%X order=%u at %u,%u\n",formats[f],order,x,y);
                return 0;
            }
        }
    }
    puts("DXT1/3/5: complete block colors and alpha passed");
    return 1;
}

int main(void)
{
    uint32_t shapes[][2] = {{1,1},{1,512},{512,1},{32,256},{256,32},{512,512}};
    uint32_t formats[] = {0x06,0x07,0x0B};
    uint32_t palette[256], si, fi, pass, i, x, y, seed = 7;
    uint8_t *src = malloc(512*512*4);
    uint32_t *dst = malloc(512*512*4);
    clock_t start;
    if (!src || !dst || !check_dxt()) return 1;
    for (i = 0; i < 512*512*4; i++) { seed=seed*1664525u+1013904223u; src[i]=(uint8_t)(seed>>24); }
    for (pass = 0; pass < 2; pass++) {
        for (i = 0; i < 256; i++) palette[i] = (i*0x01010101u) ^ (pass ? 0x7FA38190u : 0);
        for (si = 0; si < sizeof shapes/sizeof shapes[0]; si++) for (fi = 0; fi < 3; fi++) {
            uint32_t w=shapes[si][0], h=shapes[si][1], fmt=formats[fi];
            if (!resot_decode_swizzled(dst,src,w,h,fmt,palette)) return 2;
            for (y=0; y<h; y++) for (x=0; x<w; x++) {
                uint32_t at=swizzle_offset(x,y,w,h), expected;
                if (fmt==0x0B) expected=palette[src[at]];
                else { memcpy(&expected,src+(size_t)at*4,4); if (fmt==0x07) expected|=0xFF000000u; }
                if (dst[(size_t)y*w+x]!=expected) { fprintf(stderr,"mismatch %ux%u fmt %X at %u,%u\n",w,h,fmt,x,y); return 3; }
            }
        }
    }
    if (resot_decode_swizzled(dst,src,32,32,0x0B,NULL) ||
        resot_decode_swizzled(dst,src,31,32,0x06,palette) ||
        resot_decode_swizzled(dst,src,32,32,0x0C,palette)) return 4;
    start=clock();
    for (i=0;i<200;i++) resot_decode_swizzled(dst,src,512,512,0x0B,palette);
    printf("bulk upload: scalar comparison passed; 512x512 P8 %.3f ms (200 iterations), checksum %08X\n",
        1000.0*(clock()-start)/CLOCKS_PER_SEC/200,dst[12345]);
    free(src); free(dst); return 0;
}
