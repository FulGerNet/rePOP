/* RE-SoT: explicit GPU encoder shared by SDL GPU's native D3D12 and Vulkan
 * drivers. No D3D11 device, command context, 11On12 or DXVK is used here.
 * Vertex programs initially use the existing NV2A CPU interpreter; triangles,
 * register combiners, blending, depth tests and render targets run on the GPU.
 * SDL owns native resource barriers, command submission and resource retirement.
 * Included after the common NV2A/D3D11 helpers, not a standalone translation unit. */
#include <SDL3/SDL.h>
#include "nv2a_native_shaders.h"
#include "nv2a_hw_native_visibility.inc"
static NgVisibility s_ng_visibility; /* RE-SoT: retail-only counting, shared native drivers. */
#if defined(__ANDROID__)
/* RE-SoT: Android links the patched SDL directly; the query table is not
 * looked up in a DLL that may be absent (port/third_party/sdl-gpu-query). */
extern const ResotGpuQueryAPI *SDLCALL RESOT_GetVulkanQueryAPI(Uint32 version);
#endif

typedef struct {
    SDL_GPUTexture *color, *depth;
    uint32_t offset, w, h, sc, frame;
} NgSurface;
typedef struct {
    SDL_GPUTexture *image;
    uint32_t offset, w, h;
} NgDepth;
typedef struct {
    SDL_GPUTexture *image;
    Texture guest;
    uint32_t hash, checked, used;
} NgTexture;
typedef struct {
    uint32_t shader, mask, blend, src, dst, op, depth, write, cmp, cull, ccw;
    SDL_GPUTextureFormat format;
} NgPipelineKey;
typedef struct NgPipeline {
    NgPipelineKey key;
    SDL_GPUGraphicsPipeline *gpu;
    struct NgPipeline *next;
} NgPipeline;
#define NG_DRAW_QUEUE 1024
/* RE-SoT: immutable state snapshots keep deferred native draws in guest order. */
typedef struct {
    NgPipelineKey key;
    SDL_GPUTexture *color,*depth;
    SDL_GPUTextureSamplerBinding textures[8];
    HwVsConst vc;
    HwPsConst pc;
    SDL_GPUViewport vp;
    SDL_Rect sc;
    SDL_FColor blend;
    uint32_t offset,count;
    double pixel_scale; /* RE-SoT: guest pixel count normalization. */
} NgDraw;
static void ng_flush_draws(void);
static struct {
    SDL_Window *window;
    SDL_GPUDevice *device;
    SDL_GPUCommandBuffer *cmd;
    SDL_GPUShader *vs, *blit_vs, *ps, *blit_ps, *solid_ps, *panel_ps;
    SDL_GPUBuffer *vertices;
    SDL_GPUTexture *white, *white_cube, *composed;
    uint32_t compose_w, compose_h, vertex_offset;
    SDL_GPUSampler *samplers[6][6][2], *linear;
    NgSurface surfaces[HW_MAX_SURFACES], *front, *largest;
    NgDepth depths[HW_MAX_DEPTHS];
    NgTexture textures[HW_MAX_TEXTURES];
    NgPipeline *pipelines;
    SDL_GPUTextureFormat depth_format;
    uint8_t *queued_vertices;
    NgDraw *queued;
    uint32_t queued_count,queued_bytes,command_samplers;
    /* RE-SoT: one persistent upload buffer, cycled by SDL while in flight,
     * instead of creating and releasing one for every flush. */
    SDL_GPUTransferBuffer *vertex_transfer;
    /* RE-SoT: uniform data persists for the rest of a command buffer; the
     * last pushed copies skip identical pushes. Cleared at each submission. */
    HwVsConst last_vc;
    HwPsConst last_pc;
    int vc_valid, pc_valid;
    /* RE-SoT: overlay and F5/F6 panel images, kept while their size holds. */
    SDL_GPUTexture *overlay, *panel;
    uint32_t overlay_w, overlay_h, overlay_serial, panel_w, panel_h;
    int active, present_mode;
} s_ng;
/* RE-SoT: SDL 3.4.18's D3D12 sampler heap (see ng_flush_draws). Vulkan
 * allocates its descriptor sets from growing pools and needs no budget. */
#define NG_D3D12_SAMPLER_BUDGET 1536
static int ng_sampler_budget(uint32_t samplers)
{
    return s_ng.active == 12 && s_ng.command_samplers + samplers > NG_D3D12_SAMPLER_BUDGET;
}

static int ng_active(void) { return s_ng.active != 0 && s_ng.device != NULL; }
static void SDLCALL ng_log(void *data, int category, SDL_LogPriority priority, const char *message)
{
    (void)data; (void)category; (void)priority;
    fprintf(stderr,"[SDL GPU] %s\n",message); fflush(stderr);
}

static void ng_fail(const char *where)
{
    fprintf(stderr, "[HW native] fatal %s: %s\n", where, SDL_GetError());
    abort(); /* RE-SoT: never silently lose submitted guest draws. */
}
static SDL_GPUCommandBuffer *ng_cmd(void)
{
    if (!s_ng.cmd) s_ng.cmd = SDL_AcquireGPUCommandBuffer(s_ng.device);
    if (!s_ng.cmd) ng_fail("acquire command buffer");
    return s_ng.cmd;
}
static void ng_submit_encoded(void)
{
    if (s_ng.cmd) {
        if (s_ng_visibility.pending) {
            SDL_GPUFence *fence = SDL_SubmitGPUCommandBufferAndAcquireFence(s_ng.cmd);
            if (!fence || !ng_vis_submitted(&s_ng_visibility,fence)) ng_fail("visibility submission fence");
        } else if (!SDL_SubmitGPUCommandBuffer(s_ng.cmd)) ng_fail("submit");
    }
    s_ng.cmd = NULL;
    s_ng.vertex_offset = 0;
    s_ng.command_samplers = 0;
    s_ng.vc_valid = s_ng.pc_valid = 0;
}
static void ng_submit(void)
{
    ng_flush_draws();
    ng_submit_encoded();
}
/* RE-SoT: caller holds s_hw.lock. GPU polling never blocks or submits. */
static void ng_visibility_complete(void *opaque, uint32_t at, uint64_t stamp, uint32_t count)
{
#if RESOT_RUNTIME_RETAIL
    static uint32_t logged;
    hw_visibility_complete(opaque,at,stamp,count);
    if (logged++ < 8)
        fprintf(stderr,"[HW native] visibility report addr=%08X pixels=%u stamp=%llu\n",
                at,count,(unsigned long long)stamp);
#else
    (void)opaque; (void)at; (void)stamp; (void)count;
#endif
}
static void ng_visibility_poll(void)
{
    if (!ng_vis_poll(&s_ng_visibility,ng_visibility_complete,NULL)) ng_fail("native visibility polling");
}
static void ng_visibility_method(uint32_t method, uint32_t value, uint64_t stamp)
{
    ng_flush_draws(); /* State transitions follow preceding queued draws. */
    if (method == 0x17C8) ng_vis_clear(&s_ng_visibility);
    else if (method == 0x17CC) s_ng_visibility.enabled = value != 0;
    else {
        ng_submit_encoded(); /* Make the report's queries available to GPU execution. */
        if (!ng_vis_report(&s_ng_visibility,value,stamp)) ng_fail("native visibility report");
    }
    ng_visibility_poll();
}
static SDL_GPUTexture *ng_image(uint32_t w, uint32_t h, int cube, uint32_t levels,
                                SDL_GPUTextureUsageFlags usage, SDL_GPUTextureFormat format)
{
    SDL_GPUTextureCreateInfo ci = {0};
    SDL_GPUTexture *image;
    ci.type = cube ? SDL_GPU_TEXTURETYPE_CUBE : SDL_GPU_TEXTURETYPE_2D;
    ci.format = format; ci.usage = usage;
    ci.width = w; ci.height = h; ci.layer_count_or_depth = cube ? 6 : 1;
    ci.num_levels = levels; ci.sample_count = SDL_GPU_SAMPLECOUNT_1;
    image = SDL_CreateGPUTexture(s_ng.device, &ci);
    if (!image) ng_fail("create image");
    return image;
}
static void ng_upload_cycle(SDL_GPUTexture *image, const uint32_t *pixels,
                            uint32_t w, uint32_t h, uint32_t layers, int mips, int cycle);
static void ng_upload(SDL_GPUTexture *image, const uint32_t *pixels,
                       uint32_t w, uint32_t h, uint32_t layers, int mips)
{
    ng_upload_cycle(image, pixels, w, h, layers, mips, 0);
}
/* RE-SoT: cycle only for a whole single-layer image rewritten every frame
 * (overlay, panel): SDL then gives it fresh storage if the GPU still reads
 * the previous contents, instead of a new texture each frame. */
static void ng_upload_cycle(SDL_GPUTexture *image, const uint32_t *pixels,
                            uint32_t w, uint32_t h, uint32_t layers, int mips, int cycle)
{
    SDL_GPUTransferBufferCreateInfo ci = {SDL_GPU_TRANSFERBUFFERUSAGE_UPLOAD, w*h*layers*4, 0};
    SDL_GPUTransferBuffer *transfer = SDL_CreateGPUTransferBuffer(s_ng.device, &ci);
    SDL_GPUCopyPass *copy;
    uint32_t layer;
    void *mapped;
    if (!transfer) ng_fail("texture transfer buffer");
    mapped = SDL_MapGPUTransferBuffer(s_ng.device, transfer, false);
    if (!mapped) ng_fail("map texture transfer");
    memcpy(mapped, pixels, ci.size);
    SDL_UnmapGPUTransferBuffer(s_ng.device, transfer);
    copy = SDL_BeginGPUCopyPass(ng_cmd());
    for (layer = 0; layer < layers; layer++) {
        SDL_GPUTextureTransferInfo src = {transfer, w*h*4*layer, w, h};
        SDL_GPUTextureRegion dst = {0};
        dst.texture = image; dst.layer = layer; dst.w = w; dst.h = h; dst.d = 1;
        /* Do not cycle between faces: all faces belong to the same image. */
        SDL_UploadToGPUTexture(copy, &src, &dst, cycle && layers == 1);
    }
    SDL_EndGPUCopyPass(copy);
    if (mips) SDL_GenerateMipmapsForGPUTexture(ng_cmd(), image);
    SDL_ReleaseGPUTransferBuffer(s_ng.device, transfer);
    s_hw.tex_uploads++;
}
static SDL_GPUShader *ng_shader(const unsigned char *dxil, size_t dxil_size,
                                const unsigned char *spirv, size_t spirv_size,
                                const char *entry, int vertex, uint32_t samplers, uint32_t uniforms)
{
    SDL_GPUShaderCreateInfo ci = {0};
    ci.format = s_ng.active == 12 ? SDL_GPU_SHADERFORMAT_DXIL : SDL_GPU_SHADERFORMAT_SPIRV;
    ci.code = s_ng.active == 12 ? dxil : spirv;
    ci.code_size = s_ng.active == 12 ? dxil_size : spirv_size;
    ci.entrypoint = entry;
    ci.stage = vertex ? SDL_GPU_SHADERSTAGE_VERTEX : SDL_GPU_SHADERSTAGE_FRAGMENT;
    ci.num_samplers = samplers; ci.num_uniform_buffers = uniforms;
    return SDL_CreateGPUShader(s_ng.device, &ci);
}
#define NG_SHADER(entry, vertex, samplers, uniforms) ng_shader(ng_##entry##_dxil, sizeof ng_##entry##_dxil, \
    ng_##entry##_spirv, sizeof ng_##entry##_spirv, #entry, vertex, samplers, uniforms)

static void ng_shutdown(void)
{
    uint32_t i,u,v,l;
    NgPipeline *pipeline;
    if (s_ng.cmd) { SDL_CancelGPUCommandBuffer(s_ng.cmd); s_ng.cmd = NULL; }
    if (s_ng.device) {
        SDL_WaitForGPUIdle(s_ng.device);
        ng_vis_destroy(&s_ng_visibility); /* RE-SoT: release native counters only after idle. */
        for (i = 0; i < HW_MAX_SURFACES; i++)
            if (s_ng.surfaces[i].color) SDL_ReleaseGPUTexture(s_ng.device,s_ng.surfaces[i].color);
        for (i = 0; i < HW_MAX_DEPTHS; i++)
            if (s_ng.depths[i].image) SDL_ReleaseGPUTexture(s_ng.device,s_ng.depths[i].image);
        for (i = 0; i < HW_MAX_TEXTURES; i++)
            if (s_ng.textures[i].image) SDL_ReleaseGPUTexture(s_ng.device,s_ng.textures[i].image);
        for (u = 0; u < 6; u++) for (v = 0; v < 6; v++) for (l = 0; l < 2; l++)
            if (s_ng.samplers[u][v][l]) SDL_ReleaseGPUSampler(s_ng.device,s_ng.samplers[u][v][l]);
        while ((pipeline = s_ng.pipelines) != NULL) {
            s_ng.pipelines = pipeline->next;
            SDL_ReleaseGPUGraphicsPipeline(s_ng.device,pipeline->gpu); free(pipeline);
        }
        if (s_ng.vertices) SDL_ReleaseGPUBuffer(s_ng.device,s_ng.vertices);
        if (s_ng.vertex_transfer) SDL_ReleaseGPUTransferBuffer(s_ng.device,s_ng.vertex_transfer);
        if (s_ng.overlay) SDL_ReleaseGPUTexture(s_ng.device,s_ng.overlay);
        if (s_ng.panel) SDL_ReleaseGPUTexture(s_ng.device,s_ng.panel);
        if (s_ng.white) SDL_ReleaseGPUTexture(s_ng.device,s_ng.white);
        if (s_ng.white_cube) SDL_ReleaseGPUTexture(s_ng.device,s_ng.white_cube);
        if (s_ng.composed) SDL_ReleaseGPUTexture(s_ng.device,s_ng.composed);
        if (s_ng.linear) SDL_ReleaseGPUSampler(s_ng.device,s_ng.linear);
        if (s_ng.vs) SDL_ReleaseGPUShader(s_ng.device,s_ng.vs);
        if (s_ng.blit_vs) SDL_ReleaseGPUShader(s_ng.device,s_ng.blit_vs);
        if (s_ng.ps) SDL_ReleaseGPUShader(s_ng.device,s_ng.ps);
        if (s_ng.blit_ps) SDL_ReleaseGPUShader(s_ng.device,s_ng.blit_ps);
        if (s_ng.solid_ps) SDL_ReleaseGPUShader(s_ng.device,s_ng.solid_ps);
        if (s_ng.panel_ps) SDL_ReleaseGPUShader(s_ng.device,s_ng.panel_ps);
        if (s_ng.window) SDL_ReleaseWindowFromGPUDevice(s_ng.device, s_ng.window);
        SDL_DestroyGPUDevice(s_ng.device);
    }
#if !defined(__ANDROID__)
    if (s_ng.window) SDL_DestroyWindow(s_ng.window);   /* RE-SoT: Android: the host's */
#endif
    free(s_ng.queued_vertices); free(s_ng.queued);
    memset(&s_ng, 0, sizeof s_ng);
}
static int ng_init(const char *backend)
{
#if defined(_WIN32)
    char dll_path[MAX_PATH];
    HMODULE module;
    SDL_PropertiesID props;
#endif
    SDL_GPUBufferCreateInfo vb = {SDL_GPU_BUFFERUSAGE_VERTEX, HW_VB_BYTES, 0};
    SDL_GPUSamplerCreateInfo sampler = {0};
    uint32_t white[6] = {~0u,~0u,~0u,~0u,~0u,~0u};
#if defined(_WIN32)
    /* RE-SoT: load only the SDK DLL beside this executable. Delay loading
     * keeps the D3D11 fallback usable in portable folders without SDL. */
    if (!GetModuleFileNameA(NULL, dll_path, sizeof dll_path) || !strrchr(dll_path, '\\') ||
        (size_t)(strrchr(dll_path, '\\')-dll_path)+sizeof("\\SDL3.dll") > sizeof dll_path) return 0;
    strcpy(strrchr(dll_path, '\\')+1, "SDL3.dll");
    module = LoadLibraryExA(dll_path, NULL, LOAD_LIBRARY_SEARCH_DLL_LOAD_DIR | LOAD_LIBRARY_SEARCH_DEFAULT_DIRS);
    if (!module) {
        fprintf(stderr,"[HW native] missing %s; falling back to D3D11\n",dll_path);
        return 0;
    }
    SDL_SetLogOutputFunction(ng_log,NULL);
    if (!SDL_InitSubSystem(SDL_INIT_VIDEO)) goto fail;
    props = SDL_CreateProperties();
    SDL_SetPointerProperty(props, SDL_PROP_WINDOW_CREATE_WIN32_HWND_POINTER, s_hw.hwnd);
    SDL_SetBooleanProperty(props, SDL_PROP_WINDOW_CREATE_EXTERNAL_GRAPHICS_CONTEXT_BOOLEAN, true);
    s_ng.window = SDL_CreateWindowWithProperties(props);
    SDL_DestroyProperties(props);
#else
    /* RE-SoT (Android): the host created the full-screen SDL window on its
     * own thread before the game started (port/android/src/main_android.c). */
    SDL_SetLogOutputFunction(ng_log,NULL);
    s_ng.window = (SDL_Window *)s_hw.hwnd;
#endif
    if (!s_ng.window) goto fail;
    s_ng.active = !_stricmp(backend, "d3d12") ? 12 : 100;
    s_ng.device = SDL_CreateGPUDevice(SDL_GPU_SHADERFORMAT_DXIL | SDL_GPU_SHADERFORMAT_SPIRV,
                                     getenv("RESOT_GPU_DEBUG") != NULL,
                                     s_ng.active == 12 ? "direct3d12" : "vulkan");
    if (!s_ng.device || !SDL_ClaimWindowForGPUDevice(s_ng.device, s_ng.window)) goto fail;
    if (strcmp(SDL_GetGPUDeviceDriver(s_ng.device), s_ng.active == 12 ? "direct3d12" : "vulkan")) goto fail;
#if RESOT_RUNTIME_RETAIL
    /* RE-SoT: retail XBE 0x000CE32E/0x000CE366 requires actual occlusion
     * counts. ABI lookup rejects an old/unmodified SDL DLL before GPU draws. */
    {
#if defined(_WIN32)
        ResotGetGpuQueryAPI get_api = (ResotGetGpuQueryAPI)GetProcAddress(module,
            s_ng.active == 12 ? "RESOT_GetD3D12QueryAPI" : "RESOT_GetVulkanQueryAPI");
#else
        ResotGetGpuQueryAPI get_api = RESOT_GetVulkanQueryAPI;
#endif
        void *probe;
        const ResotGpuQueryAPI *api = get_api ? get_api(RESOT_GPU_QUERY_ABI) : NULL;
        if (!api || api->version != RESOT_GPU_QUERY_ABI || api->size != sizeof *api ||
            strcmp(api->driver,SDL_GetGPUDeviceDriver(s_ng.device))) {
            SDL_SetError("retail requires reSOT native queries; run tools/setup-native-gpu.ps1"); goto fail;
        }
        s_ng_visibility.device = s_ng.device; s_ng_visibility.api = api;
        probe = api->create(s_ng.device);
        if (!probe) goto fail;
        api->destroy(s_ng.device,probe);
        fprintf(stderr,"[HW native] retail native occlusion queries ready: %s ABI %u\n",api->driver,api->version);
    }
#endif
    s_ng.depth_format = SDL_GPU_TEXTUREFORMAT_D24_UNORM_S8_UINT;
    if (!SDL_GPUTextureSupportsFormat(s_ng.device, s_ng.depth_format, SDL_GPU_TEXTURETYPE_2D,
                                       SDL_GPU_TEXTUREUSAGE_DEPTH_STENCIL_TARGET))
        s_ng.depth_format = SDL_GPU_TEXTUREFORMAT_D32_FLOAT_S8_UINT;
    s_ng.vs = NG_SHADER(vs_main, 1, 0, 1);
    s_ng.blit_vs = NG_SHADER(vs_blit, 1, 0, 0);
    s_ng.ps = NG_SHADER(ps_main, 0, 8, 1);
    s_ng.blit_ps = NG_SHADER(ps_blit, 0, 1, 0);
    s_ng.solid_ps = NG_SHADER(ps_solid, 0, 0, 1);
    s_ng.panel_ps = NG_SHADER(ps_debug, 0, 1, 0);
    s_ng.vertices = SDL_CreateGPUBuffer(s_ng.device, &vb);
    {
        SDL_GPUTransferBufferCreateInfo ti = {SDL_GPU_TRANSFERBUFFERUSAGE_UPLOAD, HW_VB_BYTES, 0};
        s_ng.vertex_transfer = SDL_CreateGPUTransferBuffer(s_ng.device, &ti);
    }
    sampler.min_filter = sampler.mag_filter = SDL_GPU_FILTER_LINEAR;
    sampler.mipmap_mode = SDL_GPU_SAMPLERMIPMAPMODE_NEAREST;
    sampler.address_mode_u = sampler.address_mode_v = sampler.address_mode_w = SDL_GPU_SAMPLERADDRESSMODE_CLAMP_TO_EDGE;
    sampler.max_lod = 1000;
    s_ng.linear = SDL_CreateGPUSampler(s_ng.device, &sampler);
    if (!s_ng.vs || !s_ng.blit_vs || !s_ng.ps || !s_ng.blit_ps || !s_ng.solid_ps ||
        !s_ng.panel_ps || !s_ng.vertices || !s_ng.vertex_transfer || !s_ng.linear) goto fail;
    s_ng.white = ng_image(1, 1, 0, 1, SDL_GPU_TEXTUREUSAGE_SAMPLER, SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM);
    s_ng.white_cube = ng_image(1, 1, 1, 1, SDL_GPU_TEXTUREUSAGE_SAMPLER, SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM);
    ng_upload(s_ng.white, white, 1, 1, 1, 0);
    ng_upload(s_ng.white_cube, white, 1, 1, 6, 0);
    ng_submit();
    s_hw.verts = (HwVertex *)malloc(sizeof(HwVertex) * HW_MAX_VERTS);
    if (!s_hw.verts) goto fail;
    s_hw.cpu_vsh = 1;
    s_hw.cull_face = 0x405; s_hw.front_face = 0x900;
    s_ng.present_mode = -1;
    InterlockedExchange(&s_hw_backend, s_ng.active);
    xbox_FramebufferWindowHwMode(1);
    fprintf(stderr, "[HW] active renderer: %s native (SDL GPU %s; NV2A vertex interpreter)\n",
            backend, SDL_GetGPUDeviceDriver(s_ng.device));
    return 1;
fail:
    fprintf(stderr, "[HW native] %s initialization failed: %s; falling back to %s\n", backend, SDL_GetError(),
            RESOT_HW_D3D11 ? "D3D11" : "the software rasteriser");
    ng_shutdown();
    return 0;
}

static NgSurface *ng_surface(void)
{
    uint32_t bpp = surface_bpp(), w, h, off, i;
    NgSurface *out = NULL, *old = &s_ng.surfaces[0];
    if (!s_gpu.color_offset || !bpp || !s_gpu.pitch) return NULL;
    off = dma_resolve(s_gpu.color_offset); w = s_gpu.pitch / bpp;
    h = s_gpu.clip_y + s_gpu.clip_h;
    if (!w || !h || w > 4096 || h > 4096) return NULL;
    for (i = 0; i < HW_MAX_SURFACES; i++) {
        NgSurface *s = &s_ng.surfaces[i];
        if (s->color && s->offset == off && s->w == w) {
            if (s->h >= h) return s;
            out = s; break;
        }
        if (!s->color || (old->color && s->frame < old->frame)) old = s;
    }
    if (!out) out = old;
    if (out->color) ng_flush_draws(); /* RE-SoT: queued draws still own this image. */
    if (out->color) SDL_ReleaseGPUTexture(s_ng.device, out->color);
    if (s_ng.front == out) s_ng.front = NULL;
    if (s_ng.largest == out) s_ng.largest = NULL;
    memset(out, 0, sizeof *out);
    out->offset = off; out->w = w; out->h = h; out->sc = hw_surface_scale(w);
    out->color = ng_image(hw_px(w, out->sc), h*out->sc, 0, 1,
        SDL_GPU_TEXTUREUSAGE_COLOR_TARGET | SDL_GPU_TEXTUREUSAGE_SAMPLER, SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM);
    {
        SDL_GPUColorTargetInfo target = {0};
        SDL_GPURenderPass *pass;
        target.texture = out->color; target.load_op = SDL_GPU_LOADOP_CLEAR;
        target.store_op = SDL_GPU_STOREOP_STORE; target.clear_color.a = 1;
        pass = SDL_BeginGPURenderPass(ng_cmd(), &target, 1, NULL);
        if (!pass) ng_fail("initialize surface");
        SDL_EndGPURenderPass(pass);
    }
    return out;
}
static void ng_mark(NgSurface *s)
{
    s->frame = s_hw.frame;
    if (!s_ng.largest || s->w*s->h >= s_ng.largest->w*s_ng.largest->h) s_ng.largest = s;
}
/* RE-SoT: the glow chain's 160x120 source, drawn this frame
 * (hw_postprocess_candidate's test on the D3D11 surfaces). */
static int ng_postprocess_source(uint32_t offset)
{
    uint32_t i;
    for (i = 0; i < HW_MAX_SURFACES; i++) {
        const NgSurface *s = &s_ng.surfaces[i];
        if (s->color && s->offset == offset && s->w == 160 && s->h == 120 && s->frame == s_hw.frame)
            return 1;
    }
    return 0;
}
static SDL_GPUTexture *ng_depth(NgSurface *s)
{
    NgDepth *depth = NULL;
    uint32_t i, w = hw_px(s->w,s->sc), h = s->h*s->sc;
    static uint32_t next;
    if (!s_gpu.zeta_offset) return NULL;
    /* RE-SoT: color targets can share one guest zeta allocation. Key depth
     * independently, as the D3D11 path does, rather than losing its contents. */
    for (i = 0; i < HW_MAX_DEPTHS; i++) {
        NgDepth *d = &s_ng.depths[i];
        if (d->image && d->offset == s_gpu.zeta_offset && d->w == w && d->h == h) {
            s->depth = d->image; return d->image;
        }
        if (!d->image) depth = d;
    }
    if (!depth) depth = &s_ng.depths[next++ % HW_MAX_DEPTHS];
    if (depth->image) ng_flush_draws(); /* RE-SoT: preserve queued depth users. */
    if (depth->image) SDL_ReleaseGPUTexture(s_ng.device,depth->image);
    {
        SDL_GPUDepthStencilTargetInfo ds = {0};
        SDL_GPURenderPass *pass;
        s->depth = depth->image = ng_image(w, h, 0, 1,
                           SDL_GPU_TEXTUREUSAGE_DEPTH_STENCIL_TARGET, s_ng.depth_format);
        ds.texture = s->depth; ds.clear_depth = 1;
        ds.load_op = ds.stencil_load_op = SDL_GPU_LOADOP_CLEAR;
        ds.store_op = ds.stencil_store_op = SDL_GPU_STOREOP_STORE;
        pass = SDL_BeginGPURenderPass(ng_cmd(), NULL, 0, &ds);
        if (!pass) ng_fail("initialize depth");
        SDL_EndGPURenderPass(pass);
    }
    depth->offset = s_gpu.zeta_offset; depth->w = w; depth->h = h;
    return s->depth;
}
static SDL_GPUTexture *ng_texture(int stage, NgSurface *target)
{
    const Texture *t = &s_gpu.texs[stage];
    NgSurface *best = NULL;
    NgTexture *c = NULL, *victim = NULL;
    uint32_t i, slot, hash, layers, face, x, y, *px, levels = 1;
    if (!t->valid || !t->width || !t->height || t->width > 4096 || t->height > 4096) return NULL;
    for (i = 0; !t->cube && i < HW_MAX_SURFACES; i++) {
        NgSurface *s = &s_ng.surfaces[i];
        if (s->color && s->offset == t->offset && (!best ||
            (s->w == t->width && best->w != t->width) ||
            ((s->w == t->width) == (best->w == t->width) && s->frame > best->frame))) best = s;
    }
    if (best) return best == target ? NULL : best->color;
    if (!hw_mem_ok(t->offset, t->cube ? 6*tex_face_stride(t) : hw_tex_bytes(t))) return NULL;
    slot = (t->offset >> 6)*2654435761u >> 22;
    for (i = 0; i < 16; i++) {
        NgTexture *e = &s_ng.textures[(slot+i) & (HW_MAX_TEXTURES-1)];
        const Texture *g = &e->guest;
        if (e->image && g->offset == t->offset && g->color == t->color &&
            g->width == t->width && g->height == t->height && g->pitch == t->pitch &&
            g->palette == t->palette && g->cube == t->cube && g->levels == t->levels) { c = e; break; }
        if (!victim || !e->image || (victim->image && e->used < victim->used)) victim = e;
    }
    if (c && c->checked == s_hw.frame) { c->used = s_hw.frame; return c->image; }
    hash = hw_tex_hash(t);
    if (c && c->hash == hash) { c->checked = c->used = s_hw.frame; return c->image; }
    if (!c) c = victim;
    /* Recreate changed textures: never overwrite an image sampled earlier in
     * this command buffer. SDL retires the old image after its last GPU use. */
    if (c->image) ng_flush_draws(); /* RE-SoT: retire a sampled version only after encoding its draws. */
    if (c->image) SDL_ReleaseGPUTexture(s_ng.device, c->image);
    layers = t->cube ? 6 : 1;
    if (t->levels > 1 && tex_size_from_format(t->color)) {
        uint32_t extent = t->width > t->height ? t->width : t->height;
        while ((extent >>= 1) != 0) levels++;
    }
    c->image = ng_image(t->width, t->height, t->cube, levels,
        SDL_GPU_TEXTUREUSAGE_SAMPLER | (levels > 1 ? SDL_GPU_TEXTUREUSAGE_COLOR_TARGET : 0),
        SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM);
    px = (uint32_t *)malloc((size_t)t->width*t->height*layers*4);
    if (!px) ng_fail("decode texture allocation");
    for (face = 0; face < layers; face++) for (y = 0; y < t->height; y++) for (x = 0; x < t->width; x++) {
        uint32_t argb = ~0u;
        sample_tex(t, t->cube ? face*tex_face_stride(t) : 0, x, y, &argb);
        px[((size_t)face*t->height+y)*t->width+x] = argb;
    }
    ng_upload(c->image, px, t->width, t->height, layers, levels > 1);
    free(px); c->guest = *t; c->hash = hash; c->checked = c->used = s_hw.frame;
    return c->image;
}
static SDL_GPUSampler *ng_sampler(const Texture *t)
{
    static const SDL_GPUSamplerAddressMode addr[6] = {
        SDL_GPU_SAMPLERADDRESSMODE_CLAMP_TO_EDGE, SDL_GPU_SAMPLERADDRESSMODE_REPEAT,
        SDL_GPU_SAMPLERADDRESSMODE_MIRRORED_REPEAT, SDL_GPU_SAMPLERADDRESSMODE_CLAMP_TO_EDGE,
        SDL_GPU_SAMPLERADDRESSMODE_CLAMP_TO_EDGE, SDL_GPU_SAMPLERADDRESSMODE_CLAMP_TO_EDGE};
    uint32_t u = t->addr_u < 6 ? t->addr_u : 3, v = t->addr_v < 6 ? t->addr_v : 3;
    uint32_t mag = (t->filter >> 24)&15, min = (t->filter >> 16)&255;
    int linear = mag == 2 || (min >= 2 && min <= 6);
    if (!s_ng.samplers[u][v][linear]) {
        SDL_GPUSamplerCreateInfo ci = {0};
        ci.min_filter = ci.mag_filter = linear ? SDL_GPU_FILTER_LINEAR : SDL_GPU_FILTER_NEAREST;
        ci.mipmap_mode = linear ? SDL_GPU_SAMPLERMIPMAPMODE_LINEAR : SDL_GPU_SAMPLERMIPMAPMODE_NEAREST;
        ci.address_mode_u = addr[u]; ci.address_mode_v = addr[v]; ci.address_mode_w = SDL_GPU_SAMPLERADDRESSMODE_CLAMP_TO_EDGE;
        ci.max_lod = 1000;
        s_ng.samplers[u][v][linear] = SDL_CreateGPUSampler(s_ng.device, &ci);
        if (!s_ng.samplers[u][v][linear]) ng_fail("create sampler");
    }
    return s_ng.samplers[u][v][linear];
}
static SDL_GPUBlendFactor ng_factor(uint32_t f, int alpha)
{
    switch (f) {
    case 0: return SDL_GPU_BLENDFACTOR_ZERO;
    case 1: return SDL_GPU_BLENDFACTOR_ONE;
    case 0x300: return alpha ? SDL_GPU_BLENDFACTOR_SRC_ALPHA : SDL_GPU_BLENDFACTOR_SRC_COLOR;
    case 0x301: return alpha ? SDL_GPU_BLENDFACTOR_ONE_MINUS_SRC_ALPHA : SDL_GPU_BLENDFACTOR_ONE_MINUS_SRC_COLOR;
    case 0x302: return SDL_GPU_BLENDFACTOR_SRC_ALPHA;
    case 0x303: return SDL_GPU_BLENDFACTOR_ONE_MINUS_SRC_ALPHA;
    case 0x304: return SDL_GPU_BLENDFACTOR_DST_ALPHA;
    case 0x305: return SDL_GPU_BLENDFACTOR_ONE_MINUS_DST_ALPHA;
    case 0x306: return alpha ? SDL_GPU_BLENDFACTOR_DST_ALPHA : SDL_GPU_BLENDFACTOR_DST_COLOR;
    case 0x307: return alpha ? SDL_GPU_BLENDFACTOR_ONE_MINUS_DST_ALPHA : SDL_GPU_BLENDFACTOR_ONE_MINUS_DST_COLOR;
    case 0x308: return alpha ? SDL_GPU_BLENDFACTOR_ONE : SDL_GPU_BLENDFACTOR_SRC_ALPHA_SATURATE;
    case 0x8001: case 0x8003: return SDL_GPU_BLENDFACTOR_CONSTANT_COLOR;
    case 0x8002: case 0x8004: return SDL_GPU_BLENDFACTOR_ONE_MINUS_CONSTANT_COLOR;
    default: return SDL_GPU_BLENDFACTOR_ONE;
    }
}
static SDL_GPUGraphicsPipeline *ng_pipeline(const NgPipelineKey *key)
{
    NgPipeline *p;
    SDL_GPUGraphicsPipelineCreateInfo ci = {0};
    SDL_GPUColorTargetDescription color = {0};
    SDL_GPUVertexAttribute attrs[8] = {0};
    SDL_GPUVertexBufferDescription vb = {0};
    uint32_t i;
    for (p = s_ng.pipelines; p; p = p->next) if (!memcmp(&p->key, key, sizeof *key)) return p->gpu;
    ci.vertex_shader = key->shader == 0 ? s_ng.vs : s_ng.blit_vs;
    ci.fragment_shader = key->shader == 0 ? s_ng.ps : key->shader == 1 ? s_ng.blit_ps :
                         key->shader == 2 ? s_ng.solid_ps : s_ng.panel_ps;
    if (!key->shader) {
        vb.pitch = sizeof(HwVertex); vb.input_rate = SDL_GPU_VERTEXINPUTRATE_VERTEX;
        ci.vertex_input_state.vertex_buffer_descriptions = &vb; ci.vertex_input_state.num_vertex_buffers = 1;
        for (i = 0; i < 8; i++) { attrs[i].location = i; attrs[i].format = SDL_GPU_VERTEXELEMENTFORMAT_FLOAT4; attrs[i].offset = i*16; }
        ci.vertex_input_state.vertex_attributes = attrs; ci.vertex_input_state.num_vertex_attributes = 8;
    }
    ci.primitive_type = SDL_GPU_PRIMITIVETYPE_TRIANGLELIST;
    ci.rasterizer_state.fill_mode = SDL_GPU_FILLMODE_FILL;
    ci.rasterizer_state.cull_mode = key->cull == 1 ? SDL_GPU_CULLMODE_BACK : key->cull == 2 ? SDL_GPU_CULLMODE_FRONT : SDL_GPU_CULLMODE_NONE;
    ci.rasterizer_state.front_face = key->ccw ? SDL_GPU_FRONTFACE_COUNTER_CLOCKWISE : SDL_GPU_FRONTFACE_CLOCKWISE;
    ci.rasterizer_state.enable_depth_clip = true;
    ci.multisample_state.sample_count = SDL_GPU_SAMPLECOUNT_1;
    ci.depth_stencil_state.enable_depth_test = (key->depth & 1) != 0;
    ci.depth_stencil_state.enable_depth_write = key->write != 0;
    /* NV compare encodings: NEVER=0x200, LESS=0x201, ..., ALWAYS=0x207. */
    ci.depth_stencil_state.compare_op = (SDL_GPUCompareOp)(SDL_GPU_COMPAREOP_NEVER + (key->cmp&7));
    color.format = key->format;
    color.blend_state.enable_blend = key->blend != 0;
    color.blend_state.src_color_blendfactor = ng_factor(key->src, 0);
    color.blend_state.dst_color_blendfactor = ng_factor(key->dst, 0);
    color.blend_state.src_alpha_blendfactor = ng_factor(key->src, 1);
    color.blend_state.dst_alpha_blendfactor = ng_factor(key->dst, 1);
    color.blend_state.color_blend_op = key->op == 0x800A ? SDL_GPU_BLENDOP_REVERSE_SUBTRACT :
        key->op == 0x800B ? SDL_GPU_BLENDOP_SUBTRACT : key->op == 0x8007 ? SDL_GPU_BLENDOP_MIN :
        key->op == 0x8008 ? SDL_GPU_BLENDOP_MAX : SDL_GPU_BLENDOP_ADD;
    color.blend_state.alpha_blend_op = color.blend_state.color_blend_op;
    color.blend_state.enable_color_write_mask = true; color.blend_state.color_write_mask = (Uint8)key->mask;
    ci.target_info.color_target_descriptions = &color; ci.target_info.num_color_targets = 1;
    ci.target_info.has_depth_stencil_target = (key->depth & 2) != 0;
    ci.target_info.depth_stencil_format = s_ng.depth_format;
    p = (NgPipeline *)calloc(1, sizeof *p);
    if (!p) ng_fail("pipeline allocation");
    p->key = *key; p->gpu = SDL_CreateGPUGraphicsPipeline(s_ng.device, &ci);
    if (!p->gpu) ng_fail("create pipeline");
    p->next = s_ng.pipelines; s_ng.pipelines = p;
    return p->gpu;
}

static void ng_constants(NgSurface *s, HwVsConst *vc, HwPsConst *pc, SDL_GPUTextureSamplerBinding tex[8])
{
    uint32_t i;
    int main_view = s->w == 640 && s_gpu.clip_w == 640 && s_gpu.clip_h >= 448;
    memset(vc, 0, sizeof *vc); memset(pc, 0, sizeof *pc);
    vc->vp[0] = 2.0f/s->w; vc->vp[1] = 2.0f/s->h; vc->vp[2] = 1.0f/hw_zmax_bits();
    vc->ws[0] = main_view && !s_hw.batch_full_width ? 1.0f/s_hw.widen : 1;
    if (main_view && s_hw.batch_projected_screen) vc->ws[0] = s_hw.widen;
    vc->ws[1] = (float)s->w; vc->ws[2] = 1;
    if (main_view && s_hw.batch_hud) { vc->ws[0] = 1; vc->ws[3] = hw_hud_shift(); }
    for (i = 0; i < 8; i++) {
        pc->cw[i][0] = s_gpu.rc.color_icw[i]; pc->cw[i][1] = s_gpu.rc.alpha_icw[i];
        pc->cw[i][2] = s_gpu.rc.color_ocw[i]; pc->cw[i][3] = s_gpu.rc.alpha_ocw[i];
        hw_color4(s_gpu.rc.factor0[i], pc->fac0[i]); hw_color4(s_gpu.rc.factor1[i], pc->fac1[i]);
    }
    pc->ctl[0] = s_gpu.rc.control; pc->ctl[1] = s_gpu.rc.stage_program;
    pc->ctl[2] = s_gpu.rc.final0; pc->ctl[3] = s_gpu.rc.final1;
    pc->atest[0] = s_gpu.alpha_test; pc->atest[1] = s_gpu.alpha_func;
    pc->atest[2] = s_gpu.alpha_ref; pc->atest[3] = s_gpu.clip_plane_mode;
    hw_color4(s_gpu.rc.final_c0, pc->finc0); hw_color4(s_gpu.rc.final_c1, pc->finc1);
    hw_color4(s_gpu.fog_color, pc->fogc);
    { float r = pc->fogc[2]; pc->fogc[2] = pc->fogc[0]; pc->fogc[0] = r; }
    pc->misc[0] = (uint32_t)s_gpu.rc_seen;
    for (i = 0; i < 4; i++) {
        const Texture *t = &s_gpu.texs[i];
        uint32_t mode = (s_gpu.rc.stage_program >> (5*i))&31;
        SDL_GPUTexture *image = NULL;
        if ((s_gpu.rc_seen ? mode >= 1 && mode <= 3 : i == 0) && t->valid) image = ng_texture(i, s);
        pc->tscale[i][0] = pc->tscale[i][1] = 1;
        if (t->valid && !tex_size_from_format(t->color)) {
            pc->tscale[i][0] = 1.0f/t->width; pc->tscale[i][1] = 1.0f/t->height;
        }
        pc->tscale[i][2] = image ? 1.0f : 0;
        pc->tscale[i][3] = image && t->cube ? 1.0f : 0;
        tex[i].texture = image && !t->cube ? image : s_ng.white;
        tex[i+4].texture = image && t->cube ? image : s_ng.white_cube;
        tex[i].sampler = tex[i+4].sampler = ng_sampler(t);
    }
}
/* RE-SoT: collect a run of guest draws, upload its vertices once, then
 * keep a native render pass open across compatible draws. Per-draw transfer
 * buffers and copy/render barriers otherwise dominate the initial encoder. */
static void ng_flush_draws(void)
{
    SDL_GPUTransferBufferLocation src = {0};
    SDL_GPUBufferRegion dst = {0};
    SDL_GPUCopyPass *copy;
    SDL_GPURenderPass *pass = NULL;
    NgVisSegment *query = NULL; /* RE-SoT: hardware query for this pass. */
    SDL_GPUTexture *last_color = NULL, *last_depth = NULL;
    SDL_GPUGraphicsPipeline *bound_pipeline = NULL;
    const NgDraw *bound_textures = NULL;
    uint32_t i;
    void *mapped;
    if (!s_ng.queued_count) return;
    /* RE-SoT: the persistent transfer buffer is cycled on map, so a flush
     * never waits for the GPU to finish reading the previous one. */
    mapped = SDL_MapGPUTransferBuffer(s_ng.device,s_ng.vertex_transfer,true);
    if (!mapped) ng_fail("vertex transfer mapping");
    memcpy(mapped,s_ng.queued_vertices,s_ng.queued_bytes);
    SDL_UnmapGPUTransferBuffer(s_ng.device,s_ng.vertex_transfer);
    copy = SDL_BeginGPUCopyPass(ng_cmd());
    src.transfer_buffer = s_ng.vertex_transfer; dst.buffer = s_ng.vertices; dst.size = s_ng.queued_bytes;
    /* Cycle once for the entire run, never between its individual draws. */
    SDL_UploadToGPUBuffer(copy,&src,&dst,true);
    SDL_EndGPUCopyPass(copy);
    for (i = 0; i < s_ng.queued_count; i++) {
        NgDraw *draw = &s_ng.queued[i];
        SDL_GPUGraphicsPipeline *pipeline = ng_pipeline(&draw->key);
        SDL_GPUBufferBinding vb = {s_ng.vertices,0};
        int new_samplers;
        /* RE-SoT: SDL 3.4.18's D3D12 descriptor writer checks only the
         * current index, not index+table size, against its 2048-sampler heap.
         * One-slot host blits followed by eight-slot guest draws can cross
         * that boundary. Bound each D3D12 submission to 1536 sampler
         * descriptors, preserving guest order without changing upstream SDL.
         * Descriptors are written only when the pipeline or the samplers
         * change, so draws that share them do not count; Vulkan has no limit. */
        new_samplers = !pass || last_color != draw->color || last_depth != draw->depth ||
            pipeline != bound_pipeline ||
            memcmp(bound_textures->textures,draw->textures,sizeof draw->textures);
        if (new_samplers && ng_sampler_budget(8)) {
            if (pass) {
                if (query) s_ng_visibility.api->end(s_ng.cmd,query->query);
                SDL_EndGPURenderPass(pass);
                if (query) s_ng_visibility.api->resolve(s_ng.cmd,query->query);
                query = NULL;
            }
            pass = NULL; last_color = last_depth = NULL;
            ng_submit_encoded();
        }
        if (!pass || last_color != draw->color || last_depth != draw->depth) {
            SDL_GPUColorTargetInfo ct = {0};
            SDL_GPUDepthStencilTargetInfo ds = {0};
            if (pass) {
                if (query) s_ng_visibility.api->end(s_ng.cmd,query->query);
                SDL_EndGPURenderPass(pass);
                if (query) s_ng_visibility.api->resolve(s_ng.cmd,query->query);
                query = NULL;
            }
            ct.texture = draw->color; ct.load_op = SDL_GPU_LOADOP_LOAD; ct.store_op = SDL_GPU_STOREOP_STORE;
            ds.texture = draw->depth; ds.load_op = ds.stencil_load_op = SDL_GPU_LOADOP_LOAD;
            ds.store_op = ds.stencil_store_op = SDL_GPU_STOREOP_STORE;
            query = ng_vis_prepare(&s_ng_visibility,ng_cmd(),draw->pixel_scale);
            if (s_ng_visibility.failed) ng_fail("prepare native visibility query");
            pass = SDL_BeginGPURenderPass(ng_cmd(),&ct,1,draw->depth ? &ds : NULL);
            if (!pass) ng_fail("draw render pass");
            if (query) s_ng_visibility.api->begin(s_ng.cmd,query->query);
            last_color = draw->color; last_depth = draw->depth;
            bound_pipeline = NULL; bound_textures = NULL;
        }
        if (pipeline != bound_pipeline) {
            SDL_BindGPUGraphicsPipeline(pass,pipeline);
            /* One binding per pass: draws select their run by first vertex. */
            SDL_BindGPUVertexBuffers(pass,0,&vb,1);
            bound_pipeline = pipeline; bound_textures = NULL;
        }
        SDL_SetGPUViewport(pass,&draw->vp); SDL_SetGPUScissor(pass,&draw->sc);
        SDL_SetGPUBlendConstants(pass,draw->blend);
        if (!bound_textures || memcmp(bound_textures->textures,draw->textures,sizeof draw->textures)) {
            SDL_BindGPUFragmentSamplers(pass,0,draw->textures,8);
            bound_textures = draw;
            s_ng.command_samplers += 8;
        }
        /* RE-SoT: CPU-transformed vs_main reads only the 64-byte header,
         * not the translated-program register arrays following it. */
        if (!s_ng.vc_valid || memcmp(&s_ng.last_vc,&draw->vc,64)) {
            SDL_PushGPUVertexUniformData(s_ng.cmd,0,&draw->vc,64);
            memcpy(&s_ng.last_vc,&draw->vc,64); s_ng.vc_valid = 1;
        }
        if (!s_ng.pc_valid || memcmp(&s_ng.last_pc,&draw->pc,sizeof draw->pc)) {
            SDL_PushGPUFragmentUniformData(s_ng.cmd,0,&draw->pc,sizeof draw->pc);
            s_ng.last_pc = draw->pc; s_ng.pc_valid = 1;
        }
        SDL_DrawGPUPrimitives(pass,draw->count,1,draw->offset/(uint32_t)sizeof(HwVertex),0);
    }
    if (pass) {
        if (query) s_ng_visibility.api->end(s_ng.cmd,query->query);
        SDL_EndGPURenderPass(pass);
        if (query) s_ng_visibility.api->resolve(s_ng.cmd,query->query);
    }
    s_ng.queued_count = s_ng.queued_bytes = 0;
}
static void ng_draw(const HwVertex *vertices, uint32_t count)
{
    NgSurface *s = ng_surface();
    SDL_GPUTexture *depth;
    NgDraw draw = {0};
    NgPipelineKey key = {0};
    SDL_GPUViewport vp;
    SDL_Rect sc;
    uint32_t bytes = count*sizeof(HwVertex);
    if (!s) return;
    if (bytes > HW_VB_BYTES) ng_fail("oversized vertex batch");
    if (!s_ng.queued_vertices) {
        s_ng.queued_vertices = (uint8_t *)malloc(HW_VB_BYTES);
        s_ng.queued = (NgDraw *)calloc(NG_DRAW_QUEUE,sizeof(NgDraw));
        if (!s_ng.queued_vertices || !s_ng.queued) ng_fail("draw queue allocation");
    }
    if (s_ng.queued_count == NG_DRAW_QUEUE || s_ng.queued_bytes+bytes > HW_VB_BYTES) ng_flush_draws();
    depth = ng_depth(s);
    ng_constants(s,&draw.vc,&draw.pc,draw.textures);
    key.format = SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM;
    key.mask = ((s_gpu.color_mask&0x10000) ? 1:0) | ((s_gpu.color_mask&0x100) ? 2:0) |
               ((s_gpu.color_mask&1) ? 4:0) | ((s_gpu.color_mask&0x1000000) ? 8:0);
    key.blend = s_gpu.blend_enable && !(s_gpu.blend_sfactor == 1 && s_gpu.blend_dfactor == 0);
    key.src = s_gpu.blend_sfactor; key.dst = s_gpu.blend_dfactor; key.op = s_gpu.blend_equation;
    key.depth = depth ? 2 | (s_gpu.depth_test ? 1 : 0) : 0;
    key.write = depth && s_gpu.depth_test && s_gpu.depth_mask;
    key.cmp = s_gpu.depth_func;
    key.ccw = s_hw.front_face == 0x901;
    key.cull = s_hw.cull_enable && !s_hw.nocull ? s_hw.cull_face == 0x404 ? 2 : s_hw.cull_face == 0x405 ? 1 : 0 : 0;
    vp.x = vp.y = 0; vp.w = (float)hw_px(s->w,s->sc); vp.h = (float)(s->h*s->sc); vp.min_depth = 0; vp.max_depth = 1;
    sc.x = hw_px(s_gpu.clip_x,s->sc); sc.y = s_gpu.clip_y*s->sc;
    sc.w = hw_px(s_gpu.clip_x+s_gpu.clip_w,s->sc)-sc.x; sc.h = s_gpu.clip_h*s->sc;
    draw.key = key; draw.vp = vp; draw.sc = sc;
    draw.color = s->color; draw.depth = depth;
    hw_color4(s_gpu.blend_color,(float *)&draw.blend);
    draw.offset = s_ng.queued_bytes; draw.count = count;
    draw.pixel_scale = ((double)hw_px(s->w,s->sc)/s->w)*s->sc;
    memcpy(s_ng.queued_vertices+s_ng.queued_bytes,vertices,bytes);
    s_ng.queued_bytes += bytes;
    s_ng.queued[s_ng.queued_count++] = draw;
    ng_mark(s); s_hw.draws++; s_hw.cpu_vsh_batches++; s_hw.tris += count/3;
    s_gpu.tris_drawn += count/3; s_gpu.xf_drawn += count/3;
}

/* RE-SoT: full-screen draws also implement masked/scissored guest clears. */
static void ng_blit(SDL_GPUTexture *target_image, SDL_GPUTextureFormat format,
                    SDL_GPUTexture *image, const SDL_GPUViewport *vp, const SDL_Rect *sc,
                    int shader, uint32_t mask, const float *solid, int clear)
{
    NgPipelineKey key = {0};
    SDL_GPUColorTargetInfo target = {0};
    SDL_GPUTextureSamplerBinding tex = {image, s_ng.linear};
    SDL_GPURenderPass *pass;
    SDL_GPUGraphicsPipeline *pipeline;
    if (ng_sampler_budget(1)) ng_submit(); /* RE-SoT: D3D12 sampler-heap budget. */
    key.shader = shader; key.mask = mask; key.format = format;
    if (shader == 3) { key.blend = 1; key.src = 0x302; key.dst = 0x303; }
    pipeline = ng_pipeline(&key);
    target.texture = target_image; target.store_op = SDL_GPU_STOREOP_STORE;
    target.load_op = clear ? SDL_GPU_LOADOP_CLEAR : SDL_GPU_LOADOP_LOAD;
    target.clear_color.a = 1;
    pass = SDL_BeginGPURenderPass(ng_cmd(), &target, 1, NULL);
    if (!pass) ng_fail("blit pass");
    SDL_BindGPUGraphicsPipeline(pass, pipeline);
    SDL_SetGPUViewport(pass, vp);
    if (sc) SDL_SetGPUScissor(pass, sc);
    if (shader == 2) {
        HwPsConst pc = {0};
        memcpy(pc.finc0, solid, 16);
        SDL_PushGPUFragmentUniformData(s_ng.cmd, 0, &pc, sizeof pc);
    } else SDL_BindGPUFragmentSamplers(pass, 0, &tex, 1);
    SDL_DrawGPUPrimitives(pass, 3, 1, 0, 0);
    if (shader != 2) s_ng.command_samplers++;
    SDL_EndGPURenderPass(pass);
}
static void ng_clear(uint32_t param)
{
    ng_flush_draws(); /* RE-SoT: the clear follows all preceding guest draws. */
    NgSurface *s = ng_surface();
    uint32_t x0 = s_gpu.clip_x, y0 = s_gpu.clip_y;
    uint32_t x1 = x0+s_gpu.clip_w, y1 = y0+s_gpu.clip_h;
    if (!s) return;
    if (s_hw.clear_rect_set) {
        uint32_t cx0 = s_hw.clear_rect_h&65535, cx1 = (s_hw.clear_rect_h>>16)+1;
        uint32_t cy0 = s_hw.clear_rect_v&65535, cy1 = (s_hw.clear_rect_v>>16)+1;
        if (cx0 > x0) x0 = cx0; if (cy0 > y0) y0 = cy0;
        if (cx1 < x1) x1 = cx1; if (cy1 < y1) y1 = cy1;
    }
    if ((param&3) && ng_depth(s)) {
        SDL_GPUDepthStencilTargetInfo ds = {0};
        SDL_GPURenderPass *pass;
        ds.texture = s->depth;
        ds.load_op = (param&1) ? SDL_GPU_LOADOP_CLEAR : SDL_GPU_LOADOP_LOAD;
        ds.stencil_load_op = (param&2) ? SDL_GPU_LOADOP_CLEAR : SDL_GPU_LOADOP_LOAD;
        ds.store_op = ds.stencil_store_op = SDL_GPU_STOREOP_STORE;
        ds.clear_depth = (float)(hw_zmax_bits() == 65535 ? s_gpu.zstencil_clear&65535 : s_gpu.zstencil_clear>>8)/hw_zmax_bits();
        ds.clear_stencil = s_gpu.zstencil_clear&255;
        pass = SDL_BeginGPURenderPass(ng_cmd(), NULL, 0, &ds);
        if (!pass) ng_fail("clear depth");
        SDL_EndGPURenderPass(pass);
    }
    if ((param&0xF0) && x1 > x0 && y1 > y0) {
        float color[4];
        SDL_GPUViewport vp = {0, 0, (float)hw_px(s->w,s->sc), (float)(s->h*s->sc), 0, 1};
        SDL_Rect sc;
        hw_color4(s_gpu.clear_color, color);
        sc.x = hw_px(x0,s->sc); sc.y = y0*s->sc;
        sc.w = hw_px(x1,s->sc)-sc.x; sc.h = (y1-y0)*s->sc;
        ng_blit(s->color, SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM, NULL, &vp, &sc, 2, (param>>4)&15, color, 0);
        ng_mark(s);
    }
    s_gpu.clears++;
}
static void ng_compose(void)
{
    ng_flush_draws(); /* RE-SoT: snapshot the completed guest surface. */
    uint32_t bw, bh, w, h, rect[4], serial;
    const uint32_t *pixels;
    RECT client;
    SDL_GPUViewport vp;
    float pw, ph, px, py;
    SDL_GPUColorTargetInfo target = {0};
    SDL_GPURenderPass *pass;
#if defined(_WIN32)
    GetClientRect(s_hw.hwnd, &client);
#else
    {   /* RE-SoT (Android): the swapchain's size is the window's in pixels. */
        int cw = 0, ch = 0;
        SDL_GetWindowSizeInPixels(s_ng.window, &cw, &ch);
        client.left = client.top = 0; client.right = cw; client.bottom = ch;
    }
#endif
    if (client.right < 16 || client.bottom < 16) return;
    bw = client.right; bh = client.bottom;
    if (!s_ng.composed || bw != s_ng.compose_w || bh != s_ng.compose_h) {
        if (s_ng.composed) SDL_ReleaseGPUTexture(s_ng.device, s_ng.composed);
        s_ng.composed = ng_image(bw,bh,0,1,SDL_GPU_TEXTUREUSAGE_COLOR_TARGET | SDL_GPU_TEXTUREUSAGE_SAMPLER,
                                 SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM);
        s_ng.compose_w = bw; s_ng.compose_h = bh;
    }
    target.texture = s_ng.composed; target.load_op = SDL_GPU_LOADOP_CLEAR;
    target.store_op = SDL_GPU_STOREOP_STORE; target.clear_color.a = 1;
    pass = SDL_BeginGPURenderPass(ng_cmd(), &target, 1, NULL);
    if (!pass) ng_fail("compose clear");
    SDL_EndGPURenderPass(pass);
    if (bw > bh*s_hw.aspect) { ph = (float)bh; pw = bh*s_hw.aspect; }
    else { pw = (float)bw; ph = bw/s_hw.aspect; }
    px = (bw-pw)*0.5f; py = (bh-ph)*0.5f;
    vp.x = px; vp.y = py; vp.w = pw; vp.h = ph; vp.min_depth = 0; vp.max_depth = 1;
    if (s_ng.front)
        ng_blit(s_ng.composed, SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM, s_ng.front->color, &vp, NULL, 1, 15, NULL, 0);
    if (xbox_FramebufferOverlayGet(&pixels, &w, &h, rect, &serial) && w && h) {
        float mw = ph*(4.0f/3.0f), mx = px+(pw-mw)*0.5f;
        if (!s_ng.overlay || s_ng.overlay_w != w || s_ng.overlay_h != h) {
            if (s_ng.overlay) SDL_ReleaseGPUTexture(s_ng.device,s_ng.overlay);
            s_ng.overlay = ng_image(w,h,0,1,SDL_GPU_TEXTUREUSAGE_SAMPLER,SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM);
            s_ng.overlay_w = w; s_ng.overlay_h = h; s_ng.overlay_serial = serial-1;
        }
        /* The overlay (a movie frame) changes only when its serial moves. */
        if (s_ng.overlay_serial != serial) {
            ng_upload_cycle(s_ng.overlay, pixels, w,h,1,0,1);
            s_ng.overlay_serial = serial;
        }
        vp.x = mx+rect[0]*mw/640; vp.y = py+rect[1]*ph/480;
        vp.w = rect[2]*mw/640; vp.h = rect[3]*ph/480;
        ng_blit(s_ng.composed,SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM,s_ng.overlay,&vp,NULL,1,15,NULL,0);
    }
    if (xbox_FramebufferDebugPanelGet(&pixels,&w,&h) && w && h) {
        float scale = bh/720.0f;
        if (scale < 0.75f) scale = 0.75f;
        if ((w+16)*scale > bw) scale = (float)bw/(w+16);
        if (!s_ng.panel || s_ng.panel_w != w || s_ng.panel_h != h) {
            if (s_ng.panel) SDL_ReleaseGPUTexture(s_ng.device,s_ng.panel);
            s_ng.panel = ng_image(w,h,0,1,SDL_GPU_TEXTUREUSAGE_SAMPLER,SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM);
            s_ng.panel_w = w; s_ng.panel_h = h;
        }
        ng_upload_cycle(s_ng.panel,pixels,w,h,1,0,1);
        vp.x = vp.y = 8*scale; vp.w = w*scale; vp.h = h*scale;
        ng_blit(s_ng.composed,SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM,s_ng.panel,&vp,NULL,3,15,NULL,0);
    }
    s_hw.pending_present = 1;
}
static void ng_present(int sync)
{
    extern int xbox_FramebufferVSync(void);
    SDL_GPUTexture *swap = NULL;
    SDL_GPUViewport vp;
    uint32_t w,h;
    int pref = xbox_FramebufferVSync();
    int enabled = sync && (pref < 0 ? s_hw.vsync : pref);
    LARGE_INTEGER before, after;
    SDL_GPUPresentMode mode = enabled ? SDL_GPU_PRESENTMODE_VSYNC : SDL_GPU_PRESENTMODE_IMMEDIATE;
    if (!s_hw.pending_present || !s_ng.composed) return;
    QueryPerformanceCounter(&before);
    /* RE-SoT: with VSync off and no tearing support, mailbox still lets the
     * game run unthrottled; plain VSync would silently ignore the option. */
    if (!SDL_WindowSupportsGPUPresentMode(s_ng.device,s_ng.window,mode))
        mode = !enabled && SDL_WindowSupportsGPUPresentMode(s_ng.device,s_ng.window,SDL_GPU_PRESENTMODE_MAILBOX)
            ? SDL_GPU_PRESENTMODE_MAILBOX : SDL_GPU_PRESENTMODE_VSYNC;
    if (s_ng.present_mode != (int)mode) {
        ng_submit();
        if (!SDL_SetGPUSwapchainParameters(s_ng.device,s_ng.window,SDL_GPU_SWAPCHAINCOMPOSITION_SDR,mode)) ng_fail("swapchain parameters");
        s_ng.present_mode = (int)mode;
    }
    /* RE-SoT: finish all offscreen work before acquiring a presentable image;
     * a descriptor-budget submission must never present it before its blit. */
    ng_submit();
    if (!SDL_WaitAndAcquireGPUSwapchainTexture(ng_cmd(),s_ng.window,&swap,&w,&h)) ng_fail("acquire swapchain");
    if (swap) {
        vp.x = vp.y = 0; vp.w = (float)w; vp.h = (float)h; vp.min_depth = 0; vp.max_depth = 1;
        ng_blit(swap,SDL_GetGPUSwapchainTextureFormat(s_ng.device,s_ng.window),s_ng.composed,&vp,NULL,1,15,NULL,1);
    }
    ng_submit();
    QueryPerformanceCounter(&after);
    s_hw.present_ticks += (uint64_t)(after.QuadPart-before.QuadPart);
    s_hw.pending_present = 0; s_hw.last_flip_ms = GetTickCount();
}
static void ng_flip(void)
{
    static DWORD last_log;
    static uint32_t last_frame;
    static uint64_t last_draws;
    DWORD now;
    if (s_hw.pending_present) nv2a_hw_flush_present();
    EnterCriticalSection(&s_hw.lock);
    if (s_ng.largest) s_ng.front = s_ng.largest;
    s_ng.largest = NULL; s_hw.frame++;
    hw_diag_sample(); /* RE-SoT: native CPU/GPU timings feed the existing F5/F6 UI. */
    now = GetTickCount();
    if (!last_log) { last_log = now; last_frame = s_hw.frame; last_draws = s_hw.draws; }
    else if (now-last_log >= 5000) {
        uint32_t frames = s_hw.frame-last_frame;
        fprintf(stderr,"[HW native] %s %.1f fps; %.1f draws/frame; %llu total draws (CPU vertex programs)\n",
                s_ng.active == 12 ? "D3D12" : "Vulkan",frames*1000.0/(now-last_log),
                frames ? (double)(s_hw.draws-last_draws)/frames : 0,(unsigned long long)s_hw.draws);
#if RESOT_RUNTIME_RETAIL
        fprintf(stderr,"[HW native] visibility: %llu queries, %llu/%llu reports completed\n",
                (unsigned long long)s_ng_visibility.queries,(unsigned long long)s_ng_visibility.completed,
                (unsigned long long)s_ng_visibility.reports);
#endif
        last_log = now; last_frame = s_hw.frame; last_draws = s_hw.draws;
    }
    ng_compose();
    if (!xbox_FramebufferDeferPresent()) ng_present(1);
    s_hw.last_flip_ms = GetTickCount();
    LeaveCriticalSection(&s_hw.lock);
}
static int ng_readback(uint32_t *dst, uint32_t w, uint32_t h)
{
    ng_flush_draws(); /* RE-SoT: publish queued geometry before GPU download. */
    SDL_GPUTextureRegion src = {0};
    SDL_GPUTextureTransferInfo out = {0};
    SDL_GPUTransferBufferCreateInfo ci = {0};
    SDL_GPUTransferBuffer *transfer;
    SDL_GPUCopyPass *copy;
    SDL_GPUFence *fence;
    const uint32_t *mapped;
    uint32_t sw, sh, pitch, x,y;
    if (!s_ng.front || !w || !h) return 0;
    sw = hw_px(s_ng.front->w,s_ng.front->sc); sh = s_ng.front->h*s_ng.front->sc;
    pitch = (sw+63)&~63u; /* RE-SoT: D3D12 texture transfer rows align to 256 bytes. */
    ci.usage = SDL_GPU_TRANSFERBUFFERUSAGE_DOWNLOAD; ci.size = pitch*sh*4;
    transfer = SDL_CreateGPUTransferBuffer(s_ng.device,&ci);
    if (!transfer) return 0;
    src.texture = s_ng.front->color; src.w = sw; src.h = sh; src.d = 1;
    out.transfer_buffer = transfer; out.pixels_per_row = pitch; out.rows_per_layer = sh;
    if (s_ng_visibility.pending) ng_submit_encoded(); /* RE-SoT: query fences retain their own ownership. */
    copy = SDL_BeginGPUCopyPass(ng_cmd()); SDL_DownloadFromGPUTexture(copy,&src,&out); SDL_EndGPUCopyPass(copy);
    fence = SDL_SubmitGPUCommandBufferAndAcquireFence(s_ng.cmd);
    s_ng.cmd = NULL; s_ng.vertex_offset = 0; s_ng.command_samplers = 0;
    s_ng.vc_valid = s_ng.pc_valid = 0;
    if (!fence) ng_fail("readback fence");
    if (!SDL_WaitForGPUFences(s_ng.device,true,&fence,1)) ng_fail("wait readback");
    mapped = (const uint32_t *)SDL_MapGPUTransferBuffer(s_ng.device,transfer,false);
    if (!mapped) ng_fail("map readback");
    for (y = 0; y < h; y++) for (x = 0; x < w; x++) dst[(size_t)y*w+x] = mapped[(size_t)(y*sh/h)*pitch+x*sw/w];
    SDL_UnmapGPUTransferBuffer(s_ng.device,transfer);
    SDL_ReleaseGPUFence(s_ng.device,fence); SDL_ReleaseGPUTransferBuffer(s_ng.device,transfer);
    return 1;
}
