/* RE-SoT: bounded, read-only diagnostic comparison of uploaded texture mips
 * with CPU-decoded pixels. Used by production and the real GPU regression.
 * No image/game bytes are exported; callers log checksums and error counts. */
#ifndef RESOT_TEXTURE_PROBE_H
#define RESOT_TEXTURE_PROBE_H
#include <SDL3/SDL.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#define RESOT_PROBE_MIPS 13
typedef struct {
    uint32_t pixels, mismatches, max_delta, cpu_hash, gpu_hash;
} ResotTextureProbe;
static uint32_t resot_probe_hash(const uint32_t *data,uint32_t count)
{
    uint32_t hash=2166136261u;
    for(uint32_t i=0;i<count;i++) hash=(hash^data[i])*16777619u;
    return hash;
}
/* Caller submits prior uploads before entering. This consumes only its own
 * command buffer and fence, leaving production query/uniform state alone. */
static int resot_probe_texture(SDL_GPUDevice *device,SDL_GPUTexture *texture,
    const uint32_t *base,uint32_t width,uint32_t height,uint32_t levels,
    ResotTextureProbe results[RESOT_PROBE_MIPS])
{
    SDL_GPUTransferBufferCreateInfo ti={SDL_GPU_TRANSFERBUFFERUSAGE_DOWNLOAD,0,0};
    SDL_GPUTransferBuffer *download=NULL;
    SDL_GPUCommandBuffer *cmd=NULL;
    SDL_GPUCopyPass *copy;
    SDL_GPUFence *fence=NULL;
    const uint32_t *mapped=NULL, *expected=base;
    uint32_t *owned=NULL, offsets[RESOT_PROBE_MIPS],w=width,h=height;
    int ok=0;
    if(!width || !height || (uint64_t)width*height>1024*1024 || !levels || levels>RESOT_PROBE_MIPS) return 0;
    for(uint32_t level=0;level<levels;level++) {
        offsets[level]=ti.size; ti.size+=w*h*4;
        w=w>1?w/2:1; h=h>1?h/2:1;
    }
    download=SDL_CreateGPUTransferBuffer(device,&ti); if(!download) goto done;
    cmd=SDL_AcquireGPUCommandBuffer(device); if(!cmd) goto done;
    copy=SDL_BeginGPUCopyPass(cmd); if(!copy) goto done;
    w=width; h=height;
    for(uint32_t level=0;level<levels;level++) {
        SDL_GPUTextureRegion source={0};
        SDL_GPUTextureTransferInfo destination={download,offsets[level],w,h};
        source.texture=texture; source.mip_level=level; source.w=w; source.h=h; source.d=1;
        SDL_DownloadFromGPUTexture(copy,&source,&destination);
        w=w>1?w/2:1; h=h>1?h/2:1;
    }
    SDL_EndGPUCopyPass(copy);
    fence=SDL_SubmitGPUCommandBufferAndAcquireFence(cmd); cmd=NULL;
    if(!fence || !SDL_WaitForGPUFences(device,true,&fence,1)) goto done;
    mapped=SDL_MapGPUTransferBuffer(device,download,false); if(!mapped) goto done;
    w=width; h=height;
    for(uint32_t level=0;level<levels;level++) {
        const uint32_t *actual=mapped+offsets[level]/4;
        ResotTextureProbe *r=&results[level];
        memset(r,0,sizeof *r); r->pixels=w*h;
        r->cpu_hash=resot_probe_hash(expected,r->pixels); r->gpu_hash=resot_probe_hash(actual,r->pixels);
        for(uint32_t i=0;i<r->pixels;i++) {
            uint32_t worst=0;
            for(uint32_t shift=0;shift<32;shift+=8) {
                int delta=(int)((expected[i]>>shift)&255)-(int)((actual[i]>>shift)&255);
                uint32_t magnitude=(uint32_t)(delta<0?-delta:delta);
                if(magnitude>worst) worst=magnitude;
            }
            if(worst>r->max_delta) r->max_delta=worst;
            /* Base level is exact. Each successive UNORM linear blit can
             * introduce one quantization step versus CPU box filtering. */
            if(worst>level) r->mismatches++;
        }
        if(level+1<levels) {
            uint32_t nw=w>1?w/2:1,nh=h>1?h/2:1;
            uint32_t *next=malloc((size_t)nw*nh*4); if(!next) goto done;
            for(uint32_t y=0;y<nh;y++) for(uint32_t x=0;x<nw;x++) {
                uint32_t x0=x*2,y0=y*2,x1=x0+1<w?x0+1:x0,y1=y0+1<h?y0+1:y0;
                uint32_t p[4]={expected[y0*w+x0],expected[y0*w+x1],expected[y1*w+x0],expected[y1*w+x1]},value=0;
                for(uint32_t shift=0;shift<32;shift+=8) {
                    uint32_t sum=((p[0]>>shift)&255)+((p[1]>>shift)&255)+((p[2]>>shift)&255)+((p[3]>>shift)&255);
                    value|=((sum+2)/4)<<shift;
                }
                next[y*nw+x]=value;
            }
            free(owned); owned=next; expected=owned; w=nw; h=nh;
        }
    }
    ok=1;
done:
    free(owned);
    if(mapped) SDL_UnmapGPUTransferBuffer(device,download);
    if(fence) SDL_ReleaseGPUFence(device,fence);
    if(cmd) SDL_CancelGPUCommandBuffer(cmd);
    if(download) SDL_ReleaseGPUTransferBuffer(device,download);
    return ok;
}
#endif
