/* RE-SoT: translate immutable packed vertex instructions to straight-line
 * GLSL. Same math/order as vs_uber, including paired ILU and position alias.
 * No guest memory reads, compiler calls or mutable game state here. */
#ifndef RESOT_NATIVE_TRANSLATE_H
#define RESOT_NATIVE_TRANSLATE_H
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
static inline void resot_vsh_operand(char *out,size_t cap,uint32_t source,uint32_t ci,uint32_t vin,int relative,const char *c)
{
    char reg[64];
    const char *sw="xyzw";
    uint32_t mux=source&3, index=(source>>2)&15, s=(source>>6)&255;
    if(mux==1) snprintf(reg,sizeof reg,"R%u",index<=12?index:0);
    else if(mux==2) snprintf(reg,sizeof reg,"vin%u",vin);
    else if(relative) snprintf(reg,sizeof reg,"%s[vsh_cidx(a0 + %u)]",c,ci);
    else snprintf(reg,sizeof reg,"%s[%u]",c,ci<192?ci:0);
    snprintf(out,cap,"(%s%s.%c%c%c%c)",source&0x4000?"-":"",reg,
             sw[s>>6],sw[(s>>4)&3],sw[(s>>2)&3],sw[s&3]);
}
/* RE-SoT: hlsl selects the D3D12 dialect (entry vs_tr, constants uc), whose
 * single-argument constructors are swizzles; the statements are the same. */
static inline char *resot_translate_vertex_dialect(const char *head,const uint32_t *words,uint32_t count,int hlsl)
{
    static const char *const macs_hlsl[]={
        "a","a","a*b","a+cc","a*b+cc","dot(a.xyz,b.xyz).xxxx",
        "(dot(a.xyz,b.xyz)+b.w).xxxx","dot(a,b).xxxx","float4(1.0,a.y*b.y,a.z,b.w)",
        "float4(a.x<b.x?a.x:b.x,a.y<b.y?a.y:b.y,a.z<b.z?a.z:b.z,a.w<b.w?a.w:b.w)",
        "float4(a.x>=b.x?a.x:b.x,a.y>=b.y?a.y:b.y,a.z>=b.z?a.z:b.z,a.w>=b.w?a.w:b.w)",
        "float4(a.x<b.x?1.0:0.0,a.y<b.y?1.0:0.0,a.z<b.z?1.0:0.0,a.w<b.w?1.0:0.0)",
        "float4(a.x>=b.x?1.0:0.0,a.y>=b.y?1.0:0.0,a.z>=b.z?1.0:0.0,a.w>=b.w?1.0:0.0)","a","a","a"
    };
    static const char *const ilus_hlsl[]={
        "cc","cc","vsh_rcp(cc.x).xxxx","vsh_rcc(cc.x).xxxx","(1.0/sqrt(abs(cc.x))).xxxx",
        "float4(exp2(floor(cc.x)),cc.x-floor(cc.x),exp2(cc.x),1.0)","vsh_log(cc)","vsh_lit(cc)"
    };
    static const char *const macs_glsl[]={
        "a","a","a*b","a+cc","a*b+cc","vec4(dot(a.xyz,b.xyz))",
        "vec4(dot(a.xyz,b.xyz)+b.w)","vec4(dot(a,b))","vec4(1.0,a.y*b.y,a.z,b.w)",
        "vec4(a.x<b.x?a.x:b.x,a.y<b.y?a.y:b.y,a.z<b.z?a.z:b.z,a.w<b.w?a.w:b.w)",
        "vec4(a.x>=b.x?a.x:b.x,a.y>=b.y?a.y:b.y,a.z>=b.z?a.z:b.z,a.w>=b.w?a.w:b.w)",
        "vec4(a.x<b.x?1.0:0.0,a.y<b.y?1.0:0.0,a.z<b.z?1.0:0.0,a.w<b.w?1.0:0.0)",
        "vec4(a.x>=b.x?1.0:0.0,a.y>=b.y?1.0:0.0,a.z>=b.z?1.0:0.0,a.w>=b.w?1.0:0.0)","a","a","a"
    };
    static const char *const ilus_glsl[]={
        "cc","cc","vec4(vsh_rcp(cc.x))","vec4(vsh_rcc(cc.x))","vec4(1.0/sqrt(abs(cc.x)))",
        "vec4(exp2(floor(cc.x)),cc.x-floor(cc.x),exp2(cc.x),1.0)","vsh_log(cc)","vsh_lit(cc)"
    };
    const char *const *macs=hlsl?macs_hlsl:macs_glsl, *const *ilus=hlsl?ilus_hlsl:ilus_glsl;
    const char *constants=hlsl?"uc":"c";
    size_t cap=196608,len=0;
    char *out;
    if(!head || !words || !count || count>136) return NULL;
    out=(char*)malloc(cap); if(!out) return NULL;
#define RESOT_VS_EMIT(...) do { int n_=snprintf(out+len,cap-len,__VA_ARGS__); \
    if(n_<0 || (size_t)n_>=cap-len) { free(out); return NULL; } len+=(size_t)n_; } while(0)
    if(hlsl) {
        RESOT_VS_EMIT("%s\nVO vs_tr(UI i) {\nint a0=0;\n",head);
        for(uint32_t i=0;i<8;i++) RESOT_VS_EMIT("float4 vin%u=i.a%u;\n",i,i);
        for(uint32_t i=0;i<=12;i++) RESOT_VS_EMIT("float4 R%u=float4(0,0,0,0);\n",i);
        RESOT_VS_EMIT("float4 O3=float4(0,0,0,1),O4=O3,O5=float4(0,0,0,0),O9=O3,O10=O3,O11=O3,O12=O3;\n");
    } else {
        RESOT_VS_EMIT("%s\nvoid main() {\nint a0=0;\n",head);
        for(uint32_t i=0;i<=12;i++) RESOT_VS_EMIT("vec4 R%u=vec4(0.0);\n",i);
        RESOT_VS_EMIT("vec4 O3=vec4(0,0,0,1),O4=O3,O5=vec4(0),O9=O3,O10=O3,O11=O3,O12=O3;\n");
    }
    for(uint32_t i=0;i<count;i++) {
        const uint32_t *w=words+i*4;
        uint32_t op=w[0],mac=op&15,ilu=(op>>4)&7,td=(op>>15)&15,oa=w[1]&255;
        uint32_t ci=(w[1]>>8)&255,vin=(w[1]>>16)&7;
        char a[96],b[96],c[96];
        resot_vsh_operand(a,sizeof a,w[2]&65535,ci,vin,(op&0x2000000)!=0,constants);
        resot_vsh_operand(b,sizeof b,w[2]>>16,ci,vin,(op&0x2000000)!=0,constants);
        resot_vsh_operand(c,sizeof c,w[3]&65535,ci,vin,(op&0x2000000)!=0,constants);
        RESOT_VS_EMIT("{ %s a=%s,b=%s,cc=%s; %s m=%s,l=%s;\n",hlsl?"float4":"vec4",a,b,c,hlsl?"float4":"vec4",macs[mac],ilus[ilu]);
        if(mac==13) RESOT_VS_EMIT("a0=int(floor(a.x+0.001));\n");
        /* RE-SoT: both lanes read before either destination is written. */
        for(uint32_t lane=0;lane<3;lane++) {
            uint32_t mask=lane==0?(op>>7)&15:lane==1?(op>>11)&15:(op>>19)&15;
            uint32_t dest=lane==1 && mac?1:td;
            char target[16],sw[5]; uint32_t n=0;
            if(!mask) continue;
            if(lane==0 && (!mac || mac==13 || td>12)) continue;
            if(lane==1 && (!ilu || dest>12)) continue;
            if(lane==2) {
                if(!(op&0x1000000) || (oa!=0 && oa!=3 && oa!=4 && oa!=5 && oa!=9 && oa!=10 && oa!=11 && oa!=12)) continue;
                snprintf(target,sizeof target,oa?"O%u":"R%u",oa?oa:12);
            } else snprintf(target,sizeof target,"R%u",dest);
            for(uint32_t j=0;j<4;j++) if(mask&(8u>>j)) sw[n++]="xyzw"[j];
            sw[n]=0;
            RESOT_VS_EMIT("%s.%s=%s.%s;\n",target,sw,lane==1 || (lane==2 && (op&0x800000))?"l":"m",sw);
        }
        RESOT_VS_EMIT("}\n");
        if(op&0x4000000) {
            RESOT_VS_EMIT("%svs_finish(R12,O3,O4,vsh_fog(O5.x),O9,O10,O11,O12);\n}\n",hlsl?"return ":"");
            return out;
        }
    }
#undef RESOT_VS_EMIT
    free(out); return NULL;
}
static inline char *resot_translate_vertex(const char *head,const uint32_t *words,uint32_t count)
{
    return resot_translate_vertex_dialect(head,words,count,0);
}
#endif
