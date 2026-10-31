#include "../../src/kernel/nv2a_native_device.h" /* RE-SoT: same device features as production. */
/* RE-SoT: exercise embedded NV2A shaders, scissored native GPU draws,
 * command submission, swapchain resize and GPU readback on both APIs.
 * No D3D11 headers/libraries/devices and no game data. */
#include <SDL3/SDL.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "shader_compiler.h"
#include "nv2a_native_shaders.h"
#include "../../src/kernel/nv2a_hw_native_visibility.inc"

typedef struct { Uint32 seen[16], pixels[16]; Uint64 stamp[16]; } Reports;
static void report_complete(void *opaque, uint32_t at, uint64_t stamp, uint32_t pixels)
{
    Reports *reports = opaque;
    if (at < 16) { reports->seen[at]++; reports->pixels[at] = pixels; reports->stamp[at] = stamp; }
}

#define REQUIRE(x) do { if (!(x)) { fprintf(stderr,"line %d: %s: %s\n",__LINE__,#x,SDL_GetError()); return 1; } } while (0)
/* RE-SoT: small retail visibility runs append to a vertex ring. Verify
 * disjoint uploads preserve preceding runs, and wrapping/cycling preserves
 * copies already encoded against the previous backing allocation. */
static int test_vertex_ring(SDL_GPUDevice *device)
{
    SDL_GPUBufferCreateInfo bi = {SDL_GPU_BUFFERUSAGE_VERTEX,128,0};
    SDL_GPUTransferBufferCreateInfo ti = {SDL_GPU_TRANSFERBUFFERUSAGE_UPLOAD,64,0};
    SDL_GPUBuffer *buffer = SDL_CreateGPUBuffer(device,&bi);
    SDL_GPUTransferBuffer *upload = SDL_CreateGPUTransferBuffer(device,&ti), *download;
    SDL_GPUCommandBuffer *cmd;
    SDL_GPUFence *fence;
    const Uint32 *pixels;
    int run, i;
    REQUIRE(buffer && upload);
    ti.usage = SDL_GPU_TRANSFERBUFFERUSAGE_DOWNLOAD; ti.size = 256;
    download = SDL_CreateGPUTransferBuffer(device,&ti); REQUIRE(download);
    cmd = SDL_AcquireGPUCommandBuffer(device); REQUIRE(cmd);
    for (run = 0; run < 3; run++) {
        Uint32 *mapped = SDL_MapGPUTransferBuffer(device,upload,true);
        SDL_GPUTransferBufferLocation src = {upload,0}, to = {download,(Uint32)run*64};
        SDL_GPUBufferRegion region = {buffer,run == 1 ? 64 : 0,64};
        SDL_GPUCopyPass *copy;
        REQUIRE(mapped);
        for (i = 0; i < 16; i++) mapped[i] = (Uint32)(100*run+i);
        SDL_UnmapGPUTransferBuffer(device,upload);
        copy = SDL_BeginGPUCopyPass(cmd); REQUIRE(copy);
        SDL_UploadToGPUBuffer(copy,&src,&region,run != 1);
        SDL_DownloadFromGPUBuffer(copy,&region,&to); /* Snapshot before wrap. */
        if (run == 1) {
            region.offset = 0; to.offset = 192;
            SDL_DownloadFromGPUBuffer(copy,&region,&to);
        }
        SDL_EndGPUCopyPass(copy);
    }
    fence = SDL_SubmitGPUCommandBufferAndAcquireFence(cmd); REQUIRE(fence);
    REQUIRE(SDL_WaitForGPUFences(device,true,&fence,1));
    pixels = SDL_MapGPUTransferBuffer(device,download,false); REQUIRE(pixels);
    for (run = 0; run < 3; run++) for (i = 0; i < 16; i++)
        REQUIRE(pixels[run*16+i] == (Uint32)(100*run+i));
    for (i = 0; i < 16; i++) REQUIRE(pixels[48+i] == (Uint32)i);
    SDL_UnmapGPUTransferBuffer(device,download);
    SDL_ReleaseGPUFence(device,fence);
    SDL_ReleaseGPUTransferBuffer(device,upload); SDL_ReleaseGPUTransferBuffer(device,download);
    SDL_ReleaseGPUBuffer(device,buffer);
    puts("vertex ring append/wrap preserves queued uploads and readbacks");
    return 0;
}
/* RE-SoT: changing a cached texture reuses the SDL image with cycle=true.
 * Earlier GPU work must keep the old backing image, even within one command
 * buffer. This exercises the same upload/cycle sequence on both drivers. */
static int test_texture_cycle(SDL_GPUDevice *device)
{
    SDL_GPUTextureCreateInfo info = {0};
    SDL_GPUTransferBufferCreateInfo ti = {SDL_GPU_TRANSFERBUFFERUSAGE_UPLOAD,64,0};
    SDL_GPUTexture *texture,*snapshot; /* RE-SoT: exact deferred frame snapshot. */
    SDL_GPUTransferBuffer *upload, *download;
    SDL_GPUCommandBuffer *cmd;
    SDL_GPUFence *fence;
    const Uint32 *pixels;
    int run, i;
    info.type=SDL_GPU_TEXTURETYPE_2D; info.format=SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM;
    info.usage=SDL_GPU_TEXTUREUSAGE_SAMPLER; info.width=info.height=4;
    info.layer_count_or_depth=info.num_levels=1; info.sample_count=SDL_GPU_SAMPLECOUNT_1;
    texture=SDL_CreateGPUTexture(device,&info); REQUIRE(texture);
    snapshot=SDL_CreateGPUTexture(device,&info); REQUIRE(snapshot);
    upload=SDL_CreateGPUTransferBuffer(device,&ti); REQUIRE(upload);
    ti.usage=SDL_GPU_TRANSFERBUFFERUSAGE_DOWNLOAD; ti.size=384;
    download=SDL_CreateGPUTransferBuffer(device,&ti); REQUIRE(download);
    cmd=SDL_AcquireGPUCommandBuffer(device); REQUIRE(cmd);
    for (run=0;run<3;run++) {
        SDL_GPUTextureTransferInfo src={upload,0,4,4}, dst={download,(Uint32)run*64,4,4};
        SDL_GPUTextureRegion region={0};
        SDL_GPUCopyPass *copy;
        Uint32 *mapped=SDL_MapGPUTransferBuffer(device,upload,true); REQUIRE(mapped);
        for (i=0;i<16;i++) mapped[i]=0xFF000000u+(Uint32)(run*100+i);
        SDL_UnmapGPUTransferBuffer(device,upload);
        region.texture=texture; region.w=region.h=4; region.d=1;
        copy=SDL_BeginGPUCopyPass(cmd); REQUIRE(copy);
        SDL_UploadToGPUTexture(copy,&src,&region,true);
        SDL_DownloadFromGPUTexture(copy,&region,&dst);
        { SDL_GPUTextureLocation from={texture,0,0,0,0,0},to={snapshot,0,0,0,0,0};
          SDL_CopyGPUTextureToTexture(copy,&from,&to,4,4,1,true);
          region.texture=snapshot; dst.offset+=192;
          SDL_DownloadFromGPUTexture(copy,&region,&dst); } /* RE-SoT: subsequent cycles must retain this frame. */
        SDL_EndGPUCopyPass(copy);
    }
    fence=SDL_SubmitGPUCommandBufferAndAcquireFence(cmd); REQUIRE(fence);
    REQUIRE(SDL_WaitForGPUFences(device,true,&fence,1));
    pixels=SDL_MapGPUTransferBuffer(device,download,false); REQUIRE(pixels);
    for (run=0;run<3;run++) for (i=0;i<16;i++) REQUIRE(pixels[run*16+i]==0xFF000000u+(Uint32)(run*100+i));
    for (run=0;run<3;run++) for (i=0;i<16;i++) REQUIRE(pixels[48+run*16+i]==pixels[run*16+i]); /* RE-SoT */
    SDL_UnmapGPUTransferBuffer(device,download); SDL_ReleaseGPUFence(device,fence);
    SDL_ReleaseGPUTexture(device,texture);
    SDL_ReleaseGPUTexture(device,snapshot); /* RE-SoT */
    SDL_ReleaseGPUTransferBuffer(device,upload); SDL_ReleaseGPUTransferBuffer(device,download);
    puts("texture cycling and exact frame snapshots preserve earlier image readbacks");
    return 0;
}
/* RE-SoT: real GPU readback of the production HLSL border helper: white
 * outside a multiplicative light map, black inside, and the half-texel
 * blend at the boundary. The same probe runs through DXIL and SPIR-V. */
static int test_texture_border(SDL_GPUDevice *device, SDL_GPUShader *vs,
    SDL_GPUTexture *target, SDL_GPUTransferBuffer *download, int dx)
{
    SDL_GPUShaderCreateInfo si={0};
    SDL_GPUGraphicsPipelineCreateInfo pi={0};
    SDL_GPUColorTargetDescription color={0};
    SDL_GPUShader *ps;
    SDL_GPUGraphicsPipeline *pipeline;
    int run;
    si.format=dx ? SDL_GPU_SHADERFORMAT_DXBC : SDL_GPU_SHADERFORMAT_SPIRV;
    si.code=dx ? ng_ps_border_probe_dxbc : ng_ps_border_probe_spirv;
    si.code_size=dx ? sizeof ng_ps_border_probe_dxbc : sizeof ng_ps_border_probe_spirv;
    si.entrypoint="ps_border_probe"; si.stage=SDL_GPU_SHADERSTAGE_FRAGMENT; si.num_uniform_buffers=1;
    ps=SDL_CreateGPUShader(device,&si); REQUIRE(ps);
    pi.vertex_shader=vs; pi.fragment_shader=ps; pi.primitive_type=SDL_GPU_PRIMITIVETYPE_TRIANGLELIST;
    pi.rasterizer_state.fill_mode=SDL_GPU_FILLMODE_FILL; pi.multisample_state.sample_count=SDL_GPU_SAMPLECOUNT_1;
    pi.rasterizer_state.enable_depth_clip=true; /* RE-SoT: production requires clipping, not optional depth clamp. */
    color.format=SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM;
    pi.target_info.color_target_descriptions=&color; pi.target_info.num_color_targets=1;
    pipeline=SDL_CreateGPUGraphicsPipeline(device,&pi); REQUIRE(pipeline);
    for (run=0;run<3;run++) {
        float pc[168]={0}; /* Full HwPsConst, including borders and border_info. */
        SDL_GPUCommandBuffer *cmd=SDL_AcquireGPUCommandBuffer(device);
        SDL_GPUColorTargetInfo ct={0};
        SDL_GPUTextureRegion src={0};
        SDL_GPUTextureTransferInfo dst={download,0,128,128};
        SDL_GPUCopyPass *copy;
        SDL_GPURenderPass *pass;
        SDL_GPUFence *fence;
        const Uint32 *pixels;
        unsigned outside, center, edge;
        REQUIRE(cmd);
        pc[136]=pc[137]=pc[138]=pc[139]=1; /* white ARGB border */
        pc[152]=pc[153]=4; pc[154]=run==1 ? -1.0f : 1.0f;
        pc[155]=run==2 ? 0.0f : pc[154]; /* Mixed border-U / clamp-V. */
        ct.texture=target; ct.load_op=SDL_GPU_LOADOP_CLEAR; ct.store_op=SDL_GPU_STOREOP_STORE;
        pass=SDL_BeginGPURenderPass(cmd,&ct,1,NULL); REQUIRE(pass);
        SDL_BindGPUGraphicsPipeline(pass,pipeline);
        SDL_PushGPUFragmentUniformData(cmd,0,pc,sizeof pc);
        SDL_DrawGPUPrimitives(pass,3,1,0,0); SDL_EndGPURenderPass(pass);
        src.texture=target; src.w=src.h=128; src.d=1;
        copy=SDL_BeginGPUCopyPass(cmd); REQUIRE(copy);
        SDL_DownloadFromGPUTexture(copy,&src,&dst); SDL_EndGPUCopyPass(copy);
        fence=SDL_SubmitGPUCommandBufferAndAcquireFence(cmd); REQUIRE(fence);
        REQUIRE(SDL_WaitForGPUFences(device,true,&fence,1));
        pixels=SDL_MapGPUTransferBuffer(device,download,false); REQUIRE(pixels);
        outside=pixels[64*128]&255; center=pixels[64*128+64]&255; edge=pixels[64*128+48]&255;
        REQUIRE(outside==255 && center==0);
        if (run==1) REQUIRE(edge==0); else REQUIRE(edge>=110 && edge<=113);
        if (run==2) REQUIRE((pixels[64]&255)==0); /* V outside is ignored. */
        SDL_UnmapGPUTransferBuffer(device,download); SDL_ReleaseGPUFence(device,fence);
    }
    SDL_ReleaseGPUGraphicsPipeline(device,pipeline); SDL_ReleaseGPUShader(device,ps);
    puts("light-map borders: outside, inside, bilinear edge, nearest and mixed axes passed");
    return 0;
}
#include "test_simple_combiner.inc" /* RE-SoT: native shader differential readbacks. */
#include "test_combiner_translate.inc" /* RE-SoT: HLSL combiner translation against ps_main. */
#include "test_depth_clip.inc" /* RE-SoT: screen-space depth must survive eye-plane clipping. */
#include "test_shadow_sample.inc" /* RE-SoT: keep the sampler's affine Q convention. */
#include "test_shadow_caster.inc" /* RE-SoT: afc13cc must not clip depthless caster maps to empty. */
#include "test_texture_probe.inc" /* RE-SoT: diagnostic GPU texture readbacks must detect corruption reliably. */
/* RE-SoT: a rectangle depth clear must not expose geometry outside it.
 * Real GPU readback tests the constant-depth viewport on both encoders. */
static int test_rectangle_depth_clear(SDL_GPUDevice *device,
    const SDL_GPUGraphicsPipelineCreateInfo *base, SDL_GPUGraphicsPipeline *draw,
    SDL_GPUTexture *target, SDL_GPUTexture *depth, SDL_GPUTransferBuffer *download)
{
    SDL_GPUGraphicsPipelineCreateInfo info = *base;
    SDL_GPUColorTargetDescription color = *base->target_info.color_target_descriptions;
    SDL_GPUGraphicsPipeline *clear;
    SDL_GPUCommandBuffer *cmd = SDL_AcquireGPUCommandBuffer(device);
    SDL_GPUColorTargetInfo ct = {0};
    SDL_GPUDepthStencilTargetInfo ds = {0};
    SDL_GPUViewport vp = {0,0,128,128,.25f,.25f};
    SDL_Rect all = {0,0,128,128}, rect = {32,32,64,64};
    float pc[168] = {0};
    SDL_GPURenderPass *pass;
    SDL_GPUTextureRegion from = {0};
    SDL_GPUTextureTransferInfo to = {download,0,128,128};
    SDL_GPUCopyPass *copy;
    SDL_GPUFence *fence;
    const Uint32 *pixels;
    color.blend_state.enable_color_write_mask = true;
    color.blend_state.color_write_mask = 0;
    info.target_info.color_target_descriptions = &color;
    info.depth_stencil_state.compare_op = SDL_GPU_COMPAREOP_ALWAYS;
    clear = SDL_CreateGPUGraphicsPipeline(device,&info); REQUIRE(clear && cmd);
    ct.texture=target; ct.load_op=SDL_GPU_LOADOP_CLEAR; ct.store_op=SDL_GPU_STOREOP_STORE;
    ds.texture=depth; ds.load_op=SDL_GPU_LOADOP_CLEAR; ds.store_op=SDL_GPU_STOREOP_STORE;
    ds.clear_depth=1;
    pc[104]=pc[107]=1;
    pass=SDL_BeginGPURenderPass(cmd,&ct,1,&ds); REQUIRE(pass);
    SDL_BindGPUGraphicsPipeline(pass,draw); SDL_SetGPUViewport(pass,&vp); SDL_SetGPUScissor(pass,&all);
    SDL_PushGPUFragmentUniformData(cmd,0,pc,sizeof pc); SDL_DrawGPUPrimitives(pass,3,1,0,0);
    SDL_EndGPURenderPass(pass);
    ct.load_op=ds.load_op=SDL_GPU_LOADOP_LOAD;
    vp.min_depth=vp.max_depth=.75f;
    pass=SDL_BeginGPURenderPass(cmd,&ct,1,&ds); REQUIRE(pass);
    SDL_BindGPUGraphicsPipeline(pass,clear); SDL_SetGPUViewport(pass,&vp); SDL_SetGPUScissor(pass,&rect);
    SDL_DrawGPUPrimitives(pass,3,1,0,0); SDL_EndGPURenderPass(pass);
    vp.min_depth=vp.max_depth=.5f;
    pc[104]=0; pc[105]=1;
    pass=SDL_BeginGPURenderPass(cmd,&ct,1,&ds); REQUIRE(pass);
    SDL_BindGPUGraphicsPipeline(pass,draw); SDL_SetGPUViewport(pass,&vp); SDL_SetGPUScissor(pass,&all);
    SDL_PushGPUFragmentUniformData(cmd,0,pc,sizeof pc); SDL_DrawGPUPrimitives(pass,3,1,0,0);
    SDL_EndGPURenderPass(pass);
    from.texture=target; from.w=from.h=128; from.d=1;
    copy=SDL_BeginGPUCopyPass(cmd); SDL_DownloadFromGPUTexture(copy,&from,&to); SDL_EndGPUCopyPass(copy);
    fence=SDL_SubmitGPUCommandBufferAndAcquireFence(cmd); REQUIRE(fence);
    REQUIRE(SDL_WaitForGPUFences(device,true,&fence,1));
    pixels=SDL_MapGPUTransferBuffer(device,download,false); REQUIRE(pixels);
    for (unsigned y=0;y<128;y++) for (unsigned x=0;x<128;x++)
        REQUIRE(pixels[y*128+x]==(x>=32 && x<96 && y>=32 && y<96 ? 0xFF00FF00u : 0xFFFF0000u));
    SDL_UnmapGPUTransferBuffer(device,download); SDL_ReleaseGPUFence(device,fence);
    SDL_ReleaseGPUGraphicsPipeline(device,clear);
    puts("rectangle depth clear: preserves outside occluders, clears inside, preserves color");
    return 0;
}

/* RE-SoT: bounded allocator-only diagnostic. Query reuse correctness is
 * covered by the normal GPU/CLEAR/fence test below; this mode measures only
 * the CPU cost avoided when a completed native query is kept for reuse.
 * No draw, query reset/read, submission, shader compilation or game data is
 * included in the timed loop. It cannot establish gameplay FPS or crash cause. */
static int query_allocation_bench(SDL_GPUDevice *device, const ResotGpuQueryAPI *api)
{
    const unsigned count = 4096, rounds = 3;
    const Uint64 frequency = SDL_GetPerformanceFrequency();
    REQUIRE(SDL_WaitForGPUIdle(device));
    for (unsigned i = 0; i < 64; i++) {
        void *query = api->create(device); REQUIRE(query);
        api->destroy(device,query);
    }
    printf("query allocator benchmark: %s, %u create/destroy pairs per round; CPU only, no GPU work\n",
           api->driver,count);
    for (unsigned round = 0; round < rounds; round++) {
        Uint64 start = SDL_GetPerformanceCounter();
        for (unsigned i = 0; i < count; i++) {
            void *query = api->create(device); REQUIRE(query);
            api->destroy(device,query);
        }
        Uint64 elapsed = SDL_GetPerformanceCounter() - start;
        double milliseconds = 1000.0 * (double)elapsed / (double)frequency;
        printf("query allocator round %u: %u pairs, %.3f ms, %.3f us/pair\n",
               round + 1,count,milliseconds,milliseconds * 1000.0 / count);
    }
    return 0;
}

/* RE-SoT: synthetic lifetime stress for the retirement order of native query
 * objects. Same controller and order as the renderer: reset/begin/draw/end,
 * submit with a fence, retire from a non-blocking poll, while SDL resets the
 * recycled command buffer later. Reproducing or not reproducing a fault here
 * says nothing about the game's frame content; it isolates only this order. */
static int query_churn(SDL_GPUDevice *device, const ResotGpuQueryAPI *api,
                       SDL_GPUGraphicsPipeline *gpu, SDL_GPUTexture *target,
                       SDL_GPUTexture *depth, int pool_disabled, uint64_t total,
                       SDL_Window *present)
{
    NgVisibility v = {0};
    Reports reports = {0};
    uint64_t next_log = 100000;
    uint64_t submits = 0;
    v.device = device; v.api = api; v.enabled = 1; v.pool_disabled = pool_disabled;
    printf("query churn: %s pool_disabled=%d total=%llu present=%d\n",api->driver,pool_disabled,
           (unsigned long long)total,present != NULL);
    while (v.queries < total) {
        SDL_GPUCommandBuffer *cmd = SDL_AcquireGPUCommandBuffer(device);
        SDL_GPUColorTargetInfo ct = {0};
        SDL_GPUDepthStencilTargetInfo ds = {0};
        SDL_GPUViewport vp = {0,0,128,128,0,1};
        SDL_Rect sc = {32,32,64,64};
        float pc[136] = {0};
        SDL_GPUFence *fence;
        REQUIRE(cmd);
        ct.texture = target; ct.load_op = SDL_GPU_LOADOP_LOAD; ct.store_op = SDL_GPU_STOREOP_STORE;
        ds.texture = depth; ds.load_op = SDL_GPU_LOADOP_CLEAR; ds.store_op = SDL_GPU_STOREOP_STORE;
        ds.stencil_load_op = SDL_GPU_LOADOP_DONT_CARE; ds.stencil_store_op = SDL_GPU_STOREOP_DONT_CARE;
        ds.clear_depth = 1;
        /* Retail logs: about 2400 queries/s at 60 fps. With present the swapchain
         * paces the loop, so a frame carries more to reach the logged totals. */
        for (unsigned i = 0; i < (present ? 1000u : 40u); i++) {
            NgVisSegment *s = ng_vis_prepare(&v,cmd,1);
            SDL_GPURenderPass *pass;
            REQUIRE(s);
            pass = SDL_BeginGPURenderPass(cmd,&ct,1,&ds); REQUIRE(pass);
            api->begin(cmd,s->query);
            SDL_BindGPUGraphicsPipeline(pass,gpu); SDL_SetGPUViewport(pass,&vp); SDL_SetGPUScissor(pass,&sc);
            SDL_PushGPUFragmentUniformData(cmd,0,pc,sizeof pc);
            SDL_DrawGPUPrimitives(pass,3,1,0,0);
            api->end(cmd,s->query); SDL_EndGPURenderPass(pass); api->resolve(cmd,s->query);
            REQUIRE(ng_vis_report(&v,0,v.queries));
            ng_vis_clear(&v);
            ds.load_op = SDL_GPU_LOADOP_LOAD;
        }
        if (present) {
            SDL_GPUTexture *swap = NULL;
            REQUIRE(SDL_WaitAndAcquireGPUSwapchainTexture(cmd,present,&swap,NULL,NULL));
            if (swap) {
                SDL_GPUColorTargetInfo back = {0};
                SDL_GPURenderPass *pass;
                back.texture = swap; back.load_op = SDL_GPU_LOADOP_CLEAR; back.store_op = SDL_GPU_STOREOP_STORE;
                pass = SDL_BeginGPURenderPass(cmd,&back,1,NULL); REQUIRE(pass); SDL_EndGPURenderPass(pass);
            }
            SDL_PumpEvents();
        }
        fence = SDL_SubmitGPUCommandBufferAndAcquireFence(cmd); REQUIRE(fence);
        REQUIRE(ng_vis_submitted(&v,fence));
        REQUIRE(ng_vis_poll(&v,report_complete,&reports));
        if (++submits % 8 == 0) { /* Bound frames in flight without draining each one. */
            REQUIRE(SDL_WaitForGPUFences(device,true,&fence,1));
            REQUIRE(ng_vis_poll(&v,report_complete,&reports));
        }
        if (v.queries >= next_log) {
            printf("query churn: %llu queries, %llu allocated, %llu reused, %llu reports\n",
                   (unsigned long long)v.queries,(unsigned long long)v.allocated,
                   (unsigned long long)v.reused,(unsigned long long)v.completed);
            next_log += 100000;
        }
    }
    REQUIRE(SDL_WaitForGPUIdle(device));
    REQUIRE(ng_vis_poll(&v,report_complete,&reports));
    printf("query churn done: %llu queries, %llu allocated, %llu reused, %llu reports\n",
           (unsigned long long)v.queries,(unsigned long long)v.allocated,
           (unsigned long long)v.reused,(unsigned long long)v.completed);
    ng_vis_destroy(&v);
    return 0;
}

int main(int argc, char **argv)
{
    setvbuf(stdout,NULL,_IONBF,0); /* RE-SoT: expose long GPU phases in test logs. */
    const char *backend = argc > 1 ? argv[1] : "direct3d12";
    int dx = !strcmp(backend,"direct3d12"), frame;
    SDL_GPUDevice *device;
    SDL_Window *window;
    SDL_GPUShader *vs,*ps;
    SDL_GPUShaderCreateInfo shader = {0};
    SDL_GPUGraphicsPipelineCreateInfo pipeline = {0};
    SDL_GPUColorTargetDescription color = {0};
    SDL_GPUGraphicsPipeline *gpu;
    SDL_GPUTextureCreateInfo image = {0};
    SDL_GPUTexture *target;
    SDL_GPUTexture *depth;
    SDL_SharedObject *query_library;
    ResotGetGpuQueryAPI get_api;
    const ResotGpuQueryAPI *api;
    NgVisibility visibility = {0};
    Reports reports = {0};
    SDL_GPUTransferBufferCreateInfo transfer_info = {SDL_GPU_TRANSFERBUFFERUSAGE_DOWNLOAD,128*128*4,0};
    SDL_GPUTransferBuffer *transfer;
    REQUIRE(SDL_Init(SDL_INIT_VIDEO));
    window = SDL_CreateWindow("reSOT native GPU test",128,128,SDL_WINDOW_HIDDEN);
    REQUIRE(window);
    device = resot_native_device(backend,1); /* RE-SoT: production minimal feature contract. */
    REQUIRE(device);
    REQUIRE(!strcmp(SDL_GetGPUDeviceDriver(device),backend));
    query_library = SDL_LoadObject("SDL3.dll"); REQUIRE(query_library);
    get_api = (ResotGetGpuQueryAPI)SDL_LoadFunction(query_library,dx ? "RESOT_GetD3D12QueryAPI" : "RESOT_GetVulkanQueryAPI");
    REQUIRE(get_api);
    api = get_api(RESOT_GPU_QUERY_ABI); REQUIRE(api && api->size == sizeof *api && !strcmp(api->driver,backend));
    REQUIRE(!get_api(RESOT_GPU_QUERY_ABI+1)); /* Incompatible ABI must fail explicitly. */
    if (argc > 2 && !strcmp(argv[2],"--query-bench")) {
        int result = query_allocation_bench(device,api);
        SDL_DestroyGPUDevice(device); SDL_DestroyWindow(window);
        SDL_Quit(); SDL_UnloadObject(query_library);
        return result;
    }
    REQUIRE(!test_vertex_ring(device));
    REQUIRE(!test_texture_cycle(device)); /* RE-SoT: cached image lifetime. */
    REQUIRE(!test_texture_probe(device,64,32)); /* RE-SoT: production texture/mip diagnostics. */
    REQUIRE(!test_texture_probe(device,32,64));
    REQUIRE(!test_texture_probe(device,64,64)); /* RE-SoT: square control. */
    REQUIRE(!test_texture_probe(device,1,64)); /* RE-SoT: clamp narrow dimensions at every mip. */
    REQUIRE(!test_texture_probe(device,64,1));
    visibility.device = device; visibility.api = api; visibility.enabled = 1;
    REQUIRE(SDL_ClaimWindowForGPUDevice(device,window));
    REQUIRE(SDL_ShowWindow(window));
    SDL_PumpEvents();
    shader.format = dx ? SDL_GPU_SHADERFORMAT_DXBC : SDL_GPU_SHADERFORMAT_SPIRV;
    shader.code = dx ? ng_vs_blit_dxbc : ng_vs_blit_spirv;
    shader.code_size = dx ? sizeof ng_vs_blit_dxbc : sizeof ng_vs_blit_spirv;
    shader.entrypoint = "vs_blit"; shader.stage = SDL_GPU_SHADERSTAGE_VERTEX;
    vs = SDL_CreateGPUShader(device,&shader); REQUIRE(vs);
    shader.code = dx ? ng_ps_solid_dxbc : ng_ps_solid_spirv;
    shader.code_size = dx ? sizeof ng_ps_solid_dxbc : sizeof ng_ps_solid_spirv;
    shader.entrypoint = "ps_solid"; shader.stage = SDL_GPU_SHADERSTAGE_FRAGMENT;
    shader.num_uniform_buffers = 1;
    ps = SDL_CreateGPUShader(device,&shader); REQUIRE(ps);
    pipeline.vertex_shader = vs; pipeline.fragment_shader = ps;
    pipeline.primitive_type = SDL_GPU_PRIMITIVETYPE_TRIANGLELIST;
    pipeline.rasterizer_state.fill_mode = SDL_GPU_FILLMODE_FILL;
    pipeline.rasterizer_state.enable_depth_clip = true; /* RE-SoT: use the production feature contract. */
    pipeline.multisample_state.sample_count = SDL_GPU_SAMPLECOUNT_1;
    color.format = SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM;
    pipeline.target_info.color_target_descriptions = &color;
    pipeline.target_info.num_color_targets = 1;
    pipeline.target_info.has_depth_stencil_target = true;
    pipeline.target_info.depth_stencil_format = SDL_GPU_TEXTUREFORMAT_D32_FLOAT;
    pipeline.depth_stencil_state.enable_depth_test = pipeline.depth_stencil_state.enable_depth_write = true;
    pipeline.depth_stencil_state.compare_op = SDL_GPU_COMPAREOP_LESS;
    gpu = SDL_CreateGPUGraphicsPipeline(device,&pipeline); REQUIRE(gpu);
    image.type = SDL_GPU_TEXTURETYPE_2D; image.format = color.format;
    image.usage = SDL_GPU_TEXTUREUSAGE_COLOR_TARGET | SDL_GPU_TEXTUREUSAGE_SAMPLER;
    image.width = image.height = 128; image.layer_count_or_depth = image.num_levels = 1;
    image.sample_count = SDL_GPU_SAMPLECOUNT_1;
    target = SDL_CreateGPUTexture(device,&image); REQUIRE(target);
    image.format = SDL_GPU_TEXTUREFORMAT_D32_FLOAT; image.usage = SDL_GPU_TEXTUREUSAGE_DEPTH_STENCIL_TARGET;
    depth = SDL_CreateGPUTexture(device,&image); REQUIRE(depth);
    transfer = SDL_CreateGPUTransferBuffer(device,&transfer_info); REQUIRE(transfer);
    if (argc > 4 && !strcmp(argv[2],"--query-churn")) /* --query-churn <pool_disabled 0|1> <total> [present] */
        return query_churn(device,api,gpu,target,depth,atoi(argv[3]),strtoull(argv[4],NULL,10),
                           argc > 5 ? window : NULL);
    REQUIRE(!test_rectangle_depth_clear(device,&pipeline,gpu,target,depth,transfer));
    REQUIRE(!test_depth_clip(device,dx,&pipeline,target,transfer));
    REQUIRE(!test_shadow_sample(device,dx,&pipeline,target,transfer));
    REQUIRE(!test_shadow_caster(device,dx,&pipeline,target,transfer));
    REQUIRE(!test_texture_border(device,vs,target,transfer,dx)); /* RE-SoT: actual shader on both GPUs. */
    REQUIRE(!test_simple_combiner(device,target,transfer,dx,0)); /* RE-SoT: specialization matches full interpreter. */
    if(dx) REQUIRE(!test_combiner_translate(device,target,transfer));
    /* RE-SoT: targeted binding changes can run the real pass/texture/query
     * checks without repeating the unrelated 64-program optimizer stress. */
    if(!dx && !getenv("RESOT_GPU_BINDINGS_SMOKE")) REQUIRE(!test_simple_combiner(device,target,transfer,dx,2)); /* RE-SoT: frozen/optimized reference comparisons. */
    for (frame = 0; frame < 4; frame++) {
        SDL_GPUCommandBuffer *cmd = SDL_AcquireGPUCommandBuffer(device);
        SDL_GPUColorTargetInfo ct = {0};
        SDL_GPUDepthStencilTargetInfo ds = {0};
        SDL_GPUTextureRegion from = {0};
        SDL_GPUTextureTransferInfo to = {transfer,0,128,128};
        SDL_GPURenderPass *pass;
        SDL_GPUCopyPass *copy;
        SDL_GPUFence *fence;
        SDL_GPUTexture *swap;
        SDL_GPUViewport vp = {0,0,128,128,0,1};
        SDL_Rect sc = {32,32,64,64};
        float pc[136] = {0}; /* HwPsConst: finc0 begins at byte 416. */
        const Uint32 *pixels;
        Uint32 sw,sh,expected = frame&1 ? 0xFF00FF00u : 0xFFFF0000u;
        Uint32 address = (Uint32)frame*2, expected_count = frame == 0 ? 4096 : frame == 1 ? 2048 : frame == 2 ? 1024 : 5120;
        double scale = frame == 1 ? 2 : frame == 2 ? 4 : 1;
        NgVisSegment *visible, *occluded;
        REQUIRE(cmd);
        pc[104+(frame&1)] = 1; pc[107] = 1;
        ct.texture = target; ct.load_op = SDL_GPU_LOADOP_CLEAR; ct.store_op = SDL_GPU_STOREOP_STORE;
        ct.clear_color.a = 1;
        ds.texture = depth; ds.load_op = SDL_GPU_LOADOP_CLEAR; ds.store_op = SDL_GPU_STOREOP_STORE;
        ds.stencil_load_op = SDL_GPU_LOADOP_DONT_CARE; ds.stencil_store_op = SDL_GPU_STOREOP_DONT_CARE;
        ds.clear_depth = 1;
        visible = ng_vis_prepare(&visibility,cmd,scale); REQUIRE(visible);
        pass = SDL_BeginGPURenderPass(cmd,&ct,1,&ds); REQUIRE(pass);
        api->begin(cmd,visible->query);
        SDL_BindGPUGraphicsPipeline(pass,gpu); SDL_SetGPUViewport(pass,&vp); SDL_SetGPUScissor(pass,&sc);
        SDL_PushGPUFragmentUniformData(cmd,0,pc,sizeof pc);
        SDL_DrawGPUPrimitives(pass,3,1,0,0);
        api->end(cmd,visible->query); SDL_EndGPURenderPass(pass); api->resolve(cmd,visible->query);
        /* Same geometry at the same depth must contribute zero with LESS.
         * A fabricated boolean or draw-area result cannot pass this check. */
        occluded = ng_vis_prepare(&visibility,cmd,scale); REQUIRE(occluded);
        ct.load_op = SDL_GPU_LOADOP_LOAD; ds.load_op = SDL_GPU_LOADOP_LOAD;
        pass = SDL_BeginGPURenderPass(cmd,&ct,1,&ds); REQUIRE(pass);
        api->begin(cmd,occluded->query);
        SDL_BindGPUGraphicsPipeline(pass,gpu); SDL_SetGPUViewport(pass,&vp); SDL_SetGPUScissor(pass,&sc);
        SDL_PushGPUFragmentUniformData(cmd,0,pc,sizeof pc); SDL_DrawGPUPrimitives(pass,3,1,0,0);
        api->end(cmd,occluded->query); SDL_EndGPURenderPass(pass); api->resolve(cmd,occluded->query);
        REQUIRE(ng_vis_report(&visibility,address,900+address));
        if (frame == 1) REQUIRE(ng_vis_report(&visibility,address+1,901+address));
        REQUIRE(ng_vis_poll(&visibility,report_complete,&reports));
        REQUIRE(reports.seen[address] == 0); /* Unsubmitted queries must remain pending. */
        if (frame != 2) ng_vis_clear(&visibility); /* CLEAR before submission must preserve snapshots. */
        from.texture = target; from.w = from.h = 128; from.d = 1;
        copy = SDL_BeginGPUCopyPass(cmd); SDL_DownloadFromGPUTexture(copy,&from,&to); SDL_EndGPUCopyPass(copy);
        if (frame == 2) { REQUIRE(SDL_SetWindowSize(window,192,160)); SDL_PumpEvents(); }
        REQUIRE(SDL_WaitAndAcquireGPUSwapchainTexture(cmd,window,&swap,&sw,&sh));
        REQUIRE(swap);
        REQUIRE(sw == (frame < 2 ? 128u : 192u) && sh == (frame < 2 ? 128u : 160u));
        if (swap) {
            ct.texture = swap;
            ct.load_op = SDL_GPU_LOADOP_CLEAR;
            pass = SDL_BeginGPURenderPass(cmd,&ct,1,NULL); REQUIRE(pass); SDL_EndGPURenderPass(pass);
        }
        fence = SDL_SubmitGPUCommandBufferAndAcquireFence(cmd); REQUIRE(fence);
        REQUIRE(ng_vis_submitted(&visibility,fence));
        REQUIRE(SDL_WaitForGPUFences(device,true,&fence,1));
        REQUIRE(ng_vis_poll(&visibility,report_complete,&reports));
        REQUIRE(reports.seen[address] == 1 && reports.pixels[address] == expected_count && reports.stamp[address] == 900+address);
        if (frame == 1) REQUIRE(reports.seen[address+1] == 1 && reports.pixels[address+1] == expected_count);
        REQUIRE(visible->samples == 4096 && occluded->samples == 0);
        pixels = (const Uint32 *)SDL_MapGPUTransferBuffer(device,transfer,false); REQUIRE(pixels);
        REQUIRE(pixels[64*128+64] == expected);
        REQUIRE(pixels[8*128+8] == 0xFF000000u);
        REQUIRE(pixels[31*128+64] == 0xFF000000u);
        REQUIRE(pixels[32*128+64] == expected);
        SDL_UnmapGPUTransferBuffer(device,transfer);
        printf("%s frame %d: GPU color/scissor/depth passed; native query=%u; swapchain %ux%u\n",backend,frame,expected_count,sw,sh);
    }
    REQUIRE(ng_vis_report(&visibility,12,912));
    REQUIRE(ng_vis_poll(&visibility,report_complete,&reports));
    REQUIRE(ng_vis_poll(&visibility,report_complete,&reports));
    REQUIRE(reports.seen[12] == 1 && reports.pixels[12] == 0);
    REQUIRE(visibility.queries == 8 && visibility.reports == 6 && visibility.completed == 6);
    /* RE-SoT: frame 3 retains frame 2's samples while reusing its native
     * handles. The expected 5120 above proves old normalized samples survive.
     * Eight logical queries require just two actual native resources. */
    REQUIRE(visibility.allocated == 2 && visibility.reused == 6 && visibility.idle_count == 2);
    REQUIRE(!visibility.all && !visibility.pending && !visibility.first);
    /* A discarded counter without GET_REPORT still owns live GPU objects
     * until its submission finishes, then retires without publishing data. */
    {
        SDL_GPUCommandBuffer *cmd = SDL_AcquireGPUCommandBuffer(device);
        SDL_GPUColorTargetInfo ct = {0};
        SDL_GPURenderPass *pass;
        SDL_GPUFence *fence;
        NgVisSegment *discarded;
        REQUIRE(cmd);
        discarded = ng_vis_prepare(&visibility,cmd,1); REQUIRE(discarded);
        ct.texture = target; ct.load_op = SDL_GPU_LOADOP_LOAD; ct.store_op = SDL_GPU_STOREOP_STORE;
        pass = SDL_BeginGPURenderPass(cmd,&ct,1,NULL); REQUIRE(pass);
        api->begin(cmd,discarded->query); api->end(cmd,discarded->query);
        SDL_EndGPURenderPass(pass); api->resolve(cmd,discarded->query);
        ng_vis_clear(&visibility);
        REQUIRE(ng_vis_poll(&visibility,report_complete,&reports) && visibility.all);
        fence = SDL_SubmitGPUCommandBufferAndAcquireFence(cmd); REQUIRE(fence);
        REQUIRE(ng_vis_submitted(&visibility,fence));
        REQUIRE(SDL_WaitForGPUFences(device,true,&fence,1));
        REQUIRE(ng_vis_poll(&visibility,report_complete,&reports));
        REQUIRE(!visibility.all && visibility.completed == 6 && visibility.queries == 9);
        REQUIRE(visibility.allocated == 2 && visibility.reused == 7 && visibility.idle_count == 2); /* RE-SoT */
        visibility.enabled = 0;
        REQUIRE(!ng_vis_prepare(&visibility,NULL,1));
    }
    SDL_WaitForGPUIdle(device);
    ng_vis_destroy(&visibility);
    SDL_ReleaseGPUTransferBuffer(device,transfer); SDL_ReleaseGPUTexture(device,target);
    SDL_ReleaseGPUTexture(device,depth);
    SDL_ReleaseGPUGraphicsPipeline(device,gpu); SDL_ReleaseGPUShader(device,vs); SDL_ReleaseGPUShader(device,ps);
    SDL_ReleaseWindowFromGPUDevice(device,window); SDL_DestroyGPUDevice(device);
    SDL_DestroyWindow(window); SDL_Quit();
    SDL_UnloadObject(query_library);
    return 0;
}
