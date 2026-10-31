/* RE-SoT: translate one NV2A register-combiner state to straight-line HLSL.
 * Same statements, order and helpers as ps_main (nv2a_hw_d3d11.inc), with the
 * control words as literals: the compiler folds the selectors, dead stages and
 * unused samples. A state without clip planes or an active alpha test has no
 * discard, so the GPU keeps early depth rejection. Factors, fog, texture scales,
 * borders and the alpha reference stay uniforms, so they never add a variant.
 * Direct3D 11 and 12 compile this; Vulkan freezes SPIR-V constants instead.
 * No guest memory, device or compiler call here. */
#ifndef RESOT_NATIVE_COMBINER_H
#define RESOT_NATIVE_COMBINER_H
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#define RESOT_PS_SPEC_WORDS 40 /* The SpecId ABI of tools/build-native-shaders.py. */
#define RESOT_PS_KEY_WORDS 41  /* Plus RESOT_PS_FLAGS, HLSL translation only. */
#define RESOT_PS_FLAGS 40
enum { RESOT_PS_BOUND=0, RESOT_PS_CUBE=4, RESOT_PS_ALPHA1=8, RESOT_PS_SHADOW=12, RESOT_PS_BORDER=16 };
/* RE-SoT: inactive words cannot change a pixel; stale registers must not
 * compile duplicate programs on any API. Mirrors the reads in ps_main. */
static inline void resot_ps_canonical(uint32_t key[RESOT_PS_KEY_WORDS])
{
    uint32_t stages=key[32]&255, program=key[33], s, clip=0;
    if(stages<8) memset(key+stages*4,0,(8-stages)*4*sizeof(uint32_t));
    if(!key[36]) key[37]=0; /* The function needs an enabled alpha test. */
    for(s=0;s<4;s++) if(((program>>(s*5))&31)==5) clip=1;
    if(!clip) key[38]=0; /* Clip comparisons belong to texture mode 5. */
    if(!key[39]) { /* No combiner program: only the stage modes remain. */
        memset(key,0,32*sizeof(uint32_t));
        key[32]=key[34]=key[35]=0;
    }
}
/* Key from HwPsConst, viewed as its 168 words so that this header needs no
 * backend types: cw 0, ctl 96, atest 100, tscale 116, misc 132, border_info 152. */
static inline void resot_ps_key(uint32_t key[RESOT_PS_KEY_WORDS], const void *constants)
{
    uint32_t pc[168], flags=0, s;
    memcpy(pc,constants,sizeof pc);
    memcpy(key,pc,32*sizeof(uint32_t));
    memcpy(key+32,pc+96,4*sizeof(uint32_t));
    key[36]=pc[100]; key[37]=pc[101]; key[38]=pc[103]; key[39]=pc[132];
    for(s=0;s<4;s++) {
        float bound,cube,u,v;
        memcpy(&bound,&pc[116+s*4+2],4); memcpy(&cube,&pc[116+s*4+3],4);
        memcpy(&u,&pc[152+s*4+2],4); memcpy(&v,&pc[152+s*4+3],4);
        if(bound>0.5f) flags|=1u<<(RESOT_PS_BOUND+s);
        if(cube>0.5f) flags|=1u<<(RESOT_PS_CUBE+s);
        if(u!=0 || v!=0) flags|=1u<<(RESOT_PS_BORDER+s);
    }
    flags|=(pc[134]&15)<<RESOT_PS_ALPHA1; /* misc.z */
    flags|=(pc[133]&15)<<RESOT_PS_SHADOW; /* misc.y */
    key[RESOT_PS_FLAGS]=flags;
    resot_ps_canonical(key);
}
static inline const char *resot_rc_reg(char *out,size_t cap,uint32_t index)
{
    if(index&15) snprintf(out,cap,"Q%u",index&15); else snprintf(out,cap,"float4(0,0,0,0)");
    return out;
}
/* Appends the entry point to `out`; returns its length, 0 when it does not fit.
 * cube_sampler: 0 where cube slots share s0-s3 (D3D11), 4 where each has its
 * own sampler (the native layout from tools/build-native-shaders.py). */
static inline size_t resot_ps_emit(char *out,size_t cap,const char *entry,
                                   const uint32_t key[RESOT_PS_KEY_WORDS],uint32_t cube_sampler)
{
    size_t len=0;
    uint32_t flags=key[RESOT_PS_FLAGS], ctl=key[32], sp=key[33], f0=key[34], f1=key[35];
    uint32_t test=key[36], func=key[37], cpm=key[38], seen=key[39], s, n, clip=0;
#define RESOT_PS_EMIT(...) do { int n_=snprintf(out+len,cap-len,__VA_ARGS__); \
    if(n_<0 || (size_t)n_>=cap-len) return 0; len+=(size_t)n_; } while(0)
    RESOT_PS_EMIT("float4 %s(VO i) : SV_Target {\n",entry);
    for(s=0;s<4;s++) {
        char uv[48];
        snprintf(uv,sizeof uv,"proj_uv(i.t%u, tscale[%u])",s,s);
        if(!(flags&(1u<<(RESOT_PS_BOUND+s)))) RESOT_PS_EMIT("  float4 s%u = float4(1,1,1,1);\n",s);
        else if(flags&(1u<<(RESOT_PS_CUBE+s)))
            RESOT_PS_EMIT("  float4 s%u = cx%u.Sample(sm%u, i.t%u.xyz);\n",s,s,s+cube_sampler,s);
        else RESOT_PS_EMIT("  float4 s%u = tx%u.Sample(sm%u, %s);\n",s,s,s,uv);
        if(flags&(1u<<(RESOT_PS_ALPHA1+s))) RESOT_PS_EMIT("  s%u.a = 1.0;\n",s);
        if(flags&(1u<<(RESOT_PS_BORDER+s)))
            RESOT_PS_EMIT("  s%u = guest_border(s%u, %s, border_info[%u], border[%u]);\n",s,s,uv,s,s);
        if(flags&(1u<<(RESOT_PS_SHADOW+s)))
            RESOT_PS_EMIT("  s%u = shadow_sample(s%u, i.t%u, tscale[%u]);\n",s,s,s,s);
        if(((sp>>(s*5))&31)==5) clip=1;
    }
    RESOT_PS_EMIT("  bool keep = true;\n"
                  "  float4 Q1 = 0, Q2 = 0, Q3 = 0, Q4 = 0, Q5 = 0, Q6 = 0, Q7 = 0, Q12 = 0, Q13 = 0, Q14 = 0, Q15 = 0;\n");
    for(s=0;s<4;s++)
        RESOT_PS_EMIT("  float4 Q%u = stage_tex(%uu, i.t%u, s%u, %s, keep, %uu);\n",8+s,(sp>>(s*5))&31,s,s,
                      flags&(1u<<(RESOT_PS_BOUND+s))?"1.0":"0.0",cpm>>(s*4));
    if(clip) RESOT_PS_EMIT("  if (!keep) discard;\n");
    RESOT_PS_EMIT("  float4 o;\n");
    if(!seen) {
        RESOT_PS_EMIT("  o = i.d0;\n");
        if(flags&(1u<<RESOT_PS_BOUND)) RESOT_PS_EMIT("  o *= s0;\n");
    } else {
        uint32_t combiner_flags=ctl>>8;
        RESOT_PS_EMIT("  Q3 = float4(fogc.rgb, i.fog.x); Q4 = i.d0; Q5 = i.d1;\n");
        RESOT_PS_EMIT("  Q12.a = %s;\n",sp&31?"Q8.a":"1.0");
        n=ctl&255; if(n>8) n=8;
        for(s=0;s<n;s++) {
            static const uint32_t shift[4]={24,16,8,0};
            uint32_t icw=key[s*4], aicw=key[s*4+1], ocw=key[s*4+2], aocw=key[s*4+3];
            uint32_t fl=ocw>>12, afl=aocw>>12, j, d;
            char reg[24];
            RESOT_PS_EMIT("  {\n    Q1 = fac0[%u]; Q2 = fac1[%u];\n",
                          combiner_flags&0x010?s:0,combiner_flags&0x100?s:0);
            if((fl&4) || (afl&4)) {
                if(combiner_flags&1) RESOT_PS_EMIT("    bool mux = Q12.a >= 0.5;\n");
                else RESOT_PS_EMIT("    bool mux = (uint(Q12.a * 255.0) & 1) != 0;\n");
            }
            for(j=0;j<4;j++) {
                uint32_t bits=icw>>shift[j];
                RESOT_PS_EMIT("    float3 %c = rd_rgb(%s, %uu);\n","ABCD"[j],
                              resot_rc_reg(reg,sizeof reg,bits),bits&255);
            }
            for(j=0;j<4;j++) {
                uint32_t bits=aicw>>shift[j];
                RESOT_PS_EMIT("    float a%c = rd_a(%s, %uu);\n","ABCD"[j],
                              resot_rc_reg(reg,sizeof reg,bits),bits&255);
            }
            RESOT_PS_EMIT("    float3 pab = %s;\n",fl&2?"dot(A, B).xxx":"A * B");
            RESOT_PS_EMIT("    float3 pcd = %s;\n",fl&1?"dot(C, D).xxx":"C * D");
            RESOT_PS_EMIT("    float3 sum = %s;\n",fl&4?"mux ? pcd : pab":"pab + pcd");
            RESOT_PS_EMIT("    float3 ab = map_out3(pab, %uu), cd = map_out3(pcd, %uu), ms = map_out3(sum, %uu);\n",
                          fl&0x38,fl&0x38,fl&0x38);
            RESOT_PS_EMIT("    float qab = aA * aB, qcd = aC * aD;\n");
            RESOT_PS_EMIT("    float qsum = %s;\n",afl&4?"mux ? qcd : qab":"qab + qcd");
            RESOT_PS_EMIT("    float aab = map_out3(qab.xxx, %uu).x, acd = map_out3(qcd.xxx, %uu).x, ams = map_out3(qsum.xxx, %uu).x;\n",
                          afl&0x38,afl&0x38,afl&0x38);
            /* The same write order as ps_main: a later output wins a shared register. */
            d=(ocw>>4)&15;
            if(d) { if(fl&0x80) RESOT_PS_EMIT("    Q%u = float4(ab, ab.b);\n",d); else RESOT_PS_EMIT("    Q%u.xyz = ab;\n",d); }
            d=ocw&15;
            if(d) { if(fl&0x40) RESOT_PS_EMIT("    Q%u = float4(cd, cd.b);\n",d); else RESOT_PS_EMIT("    Q%u.xyz = cd;\n",d); }
            d=(ocw>>8)&15;  if(d) RESOT_PS_EMIT("    Q%u.xyz = ms;\n",d);
            d=(aocw>>4)&15; if(d) RESOT_PS_EMIT("    Q%u.w = aab;\n",d);
            d=aocw&15;      if(d) RESOT_PS_EMIT("    Q%u.w = acd;\n",d);
            d=(aocw>>8)&15; if(d) RESOT_PS_EMIT("    Q%u.w = ams;\n",d);
            RESOT_PS_EMIT("  }\n");
        }
        if(f0 || f1) {
            char a[24],b[24],c[24],e[24],g[24];
            uint32_t ff=f1&255;
            RESOT_PS_EMIT("  Q1 = finc0; Q2 = finc1;\n");
            RESOT_PS_EMIT("  float3 fa = %s, fb = %s;\n",ff&0x40?"1.0 - Q5.rgb":"Q5.rgb",ff&0x20?"1.0 - Q12.rgb":"Q12.rgb");
            RESOT_PS_EMIT("  Q14 = float4(%s, 0);\n",ff&0x80?"saturate(fa + fb)":"fa + fb");
            RESOT_PS_EMIT("  Q15 = float4(rd_rgb(%s, %uu) * rd_rgb(%s, %uu), 0);\n",
                          resot_rc_reg(e,sizeof e,f1>>24),(f1>>24)&255,resot_rc_reg(g,sizeof g,f1>>16),(f1>>16)&255);
            RESOT_PS_EMIT("  float3 fA = rd_rgb(%s, %uu), fB = rd_rgb(%s, %uu);\n",
                          resot_rc_reg(a,sizeof a,f0>>24),(f0>>24)&255,resot_rc_reg(b,sizeof b,f0>>16),(f0>>16)&255);
            RESOT_PS_EMIT("  float3 fC = rd_rgb(%s, %uu), fD = rd_rgb(%s, %uu);\n",
                          resot_rc_reg(c,sizeof c,f0>>8),(f0>>8)&255,resot_rc_reg(e,sizeof e,f0),f0&255);
            RESOT_PS_EMIT("  o.rgb = fD + fC * (1.0 - fA) + fB * fA;\n");
            RESOT_PS_EMIT("  o.a = rd_a(%s, %uu);\n",resot_rc_reg(g,sizeof g,f1>>8),(f1>>8)&255);
        } else RESOT_PS_EMIT("  o = Q12;\n");
    }
    RESOT_PS_EMIT("  o = saturate(o);\n");
    /* NV compare encodings; ALWAYS and unknown values pass, as in ps_main. */
    if(test && func>=0x200 && func<=0x206) {
        static const char *const pass[]={"false","v < r","v == r","v <= r","v > r","v != r","v >= r"};
        RESOT_PS_EMIT("  int v = int(o.a * 255.0 + 0.5), r = int(atest.z & 0xFF);\n"
                      "  if (!(%s)) discard;\n",pass[func-0x200]);
    }
    RESOT_PS_EMIT("  return o; }\n");
#undef RESOT_PS_EMIT
    return len;
}
#endif
