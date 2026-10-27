/* RE-SoT: explicit GPU encoder shared by SDL GPU's native D3D12 and Vulkan
 * drivers. No D3D11 device, command context, 11On12 or DXVK is used here.
 * RE-SoT: supported vertex programs use vs_uber, with CPU fallback; triangles,
 * register combiners, blending, depth tests and render targets run on the GPU.
 * SDL owns native resource barriers, command submission and resource retirement.
 * Included after the common NV2A/D3D11 helpers, not a standalone translation unit. */
#include <SDL3/SDL.h>
#include "nv2a_native_shaders.h"
#include "nv2a_native_scale.h" /* RE-SoT: Android percentage scales. */
#include "nv2a_native_simple.h" /* RE-SoT: exact mobile combiner whitelist. */
#include "nv2a_native_device.h" /* RE-SoT: shared tested feature contract. */
#include "nv2a_native_compat.h" /* RE-SoT: bounded device workaround; environment override for A/B. */
#include "nv2a_texture_probe.h" /* RE-SoT: separate source/upload/mip corruption using readbacks. */
#include "resot_geometry_cache.h" /* RE-SoT: reuse immutable input geometry, keep per-draw constants live. */
#include "resot_hd_font.h" /* RE-SoT: the user's HD menu font for the title's sheet. */
#include "nv2a_hw_native_visibility.inc"
static NgVisibility s_ng_visibility; /* RE-SoT: retail-only counting, shared native drivers. */
static int s_ng_compat; /* RE-SoT: reference GPU shaders, not the CPU vertex interpreter. */
static int s_ng_compact_pipelines; /* RE-SoT: Mali must not compile the large reference PSO just to wait for a compact one. */
#if defined(__ANDROID__)
/* RE-SoT: Android links the patched SDL directly; the query table is not
 * looked up in a DLL that may be absent (port/third_party/sdl-gpu-query). */
extern const ResotGpuQueryAPI *SDLCALL RESOT_GetVulkanQueryAPI(Uint32 version);
extern void SDLCALL RESOT_SetVulkanPipelineCachePath(const char *path);
extern bool SDLCALL RESOT_SaveVulkanPipelineCache(SDL_GPUDevice *device);
#endif
/* RE-SoT: persistent Vulkan pipeline cache (resot_pipeline_cache_vulkan.inc).
 * Optional on Windows, where an older SDL3.dll lacks the exports. */
static void (SDLCALL *s_ng_cache_path)(const char *);
static bool (SDLCALL *s_ng_cache_save)(SDL_GPUDevice *);

#include "resot_native_vsh.h" /* RE-SoT: exact small-register program admission. */
#include "shader_compiler.h" /* RE-SoT: shared Windows/Android native compiler. */
#include "resot_native_translate.h" /* RE-SoT: immutable vertex translation. */
#include "resot_native_specialize.h" /* RE-SoT: constant Vulkan combiner programs. */
/* RE-SoT: the specialization key reads only these immutable program words. */
_Static_assert(sizeof(HwPsConst)==168*4 && offsetof(HwPsConst,ctl)==96*4 &&
               offsetof(HwPsConst,misc)==132*4,"Native fragment constant ABI changed");

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
    int hd; /* RE-SoT: the HD menu font in place of the guest sheet (resot_hd_font.h). */
} NgTexture;
/* RE-SoT: stable, collision-checked program entries. Workers only read the
 * immutable source/key; shader publication is protected by each entry's lock.
 * No arbitrary 256-program limit returns later levels to generic shaders. */
typedef struct NgTranslatedVertex {
    struct NgTranslatedVertex *next;
    uint32_t count, words[NV2A_VSH_SLOTS*4];
    char *source;
    SDL_Mutex *lock;
    SDL_GPUShader *shader;
    int attempted;
} NgTranslatedVertex;
typedef struct NgTranslatedFragment {
    struct NgTranslatedFragment *next;
    uint32_t key[RESOT_PS_SPEC_WORDS];
    SDL_Mutex *lock;
    SDL_GPUShader *shader;
    int attempted;
} NgTranslatedFragment;
typedef struct {
    uint32_t shader, mask, blend, src, dst, op, depth, write, cmp, cull, ccw;
    uint32_t vertex_stride; /* RE-SoT: compact native program inputs, zero for HwVertex. */
    uint32_t small_vsh; /* RE-SoT: no reads of temporary registers R4..R11. */
    uint32_t clear_stencil; /* RE-SoT: scissored depth/stencil clears preserve other pixels. */
    NgTranslatedFragment *specialized_ps; /* RE-SoT: stable program identity. */
    NgTranslatedVertex *translated_vs; /* RE-SoT: direct Vulkan vertex program. */
    SDL_GPUTextureFormat format;
} NgPipelineKey;
_Static_assert(sizeof(HwVertex) == 128, "Native vertex ring alignment requires 128-byte HwVertex"); /* RE-SoT: compact pitches divide this alignment. */
typedef struct NgPipeline {
    NgPipelineKey key;
    SDL_GPUGraphicsPipeline *gpu;
    struct NgPipeline *next;
    struct NgPipeline *bucket_next; /* RE-SoT: indexed lookup, retain list for destruction. */
    /* RE-SoT: background compilation (ng_pipeline). NG_PSO_PENDING until a
     * compiler thread publishes gpu; the executor reads gpu only after
     * reading NG_PSO_READY. */
    SDL_AtomicInt state;
    struct NgPipeline *job_next;
    int reported; /* RE-SoT: a driver rejection has been logged (executor only). */
} NgPipeline;
enum { NG_PSO_READY, NG_PSO_PENDING, NG_PSO_FAILED };
#define NG_DRAW_QUEUE 1024
/* RE-SoT: immutable state snapshots keep deferred native draws in guest order. */
typedef struct {
    /* RE-SoT: native vs_main consumes only this header. Avoid copying the
     * unused 3 KB of D3D11 program constants for every queued native draw. */
    float vp[4], fogp[4], ws[4], pad[4];
} NgVsConst;
typedef struct {
    NgPipelineKey key;
    SDL_GPUTexture *color,*depth;
    SDL_GPUTextureSamplerBinding textures[8];
    NgVsConst vc;
    HwPsConst pc;
    SDL_GPUViewport vp;
    SDL_Rect sc;
    SDL_FColor blend;
    uint32_t offset,count;
    uint32_t reused_geometry; /* RE-SoT: offsets already refer to the current GPU ring generation. */
    /* RE-SoT: vs_uber draws: an index run over the batch's distinct vertices,
     * and the constant/program snapshots (s_ng.cpool/ppool) they run with. */
    uint32_t first_index,index_count,cslot,pslot,pcount;
    double pixel_scale; /* RE-SoT: guest pixel count normalization. */
} NgDraw;
static void ng_flush_draws(void);
static struct {
    SDL_Window *window;
#if defined(__ANDROID__)
    unsigned resume_generation; /* RE-SoT: Android replaces the native presentation surface on resume. */
#endif
    SDL_GPUDevice *device;
    SDL_GPUCommandBuffer *cmd;
    SDL_GPUShader *vs, *blit_vs, *ps, *blit_ps, *solid_ps, *panel_ps;
    SDL_GPUShader *simple_ps, *simple_alpha_ps; /* RE-SoT: opaque one-stage combiner, no discard. */
    uint64_t simple_draws, guest_draws; /* RE-SoT: observe fast-path coverage on-device. */
    uint64_t small_vsh_draws; /* RE-SoT: measure actual program admission. */
    SDL_GPUShader *small_vs; /* RE-SoT: fewer live temporary vectors on mobile GPUs. */
    /* RE-SoT: bounded variants; retain failed entries to avoid retrying every draw. */
    NgTranslatedFragment *spec_ps[256];
    NgTranslatedVertex *translated_vs[256];
    /* RE-SoT: packed-program generation changes on every guest upload/start
     * change. Repeated draws need neither rehash nor compare the whole program. */
    NgTranslatedVertex *last_translated_vs;
    uint32_t last_translated_generation;
    uint64_t translated_vsh_draws; /* RE-SoT: admitted direct-program coverage. */
    uint64_t reference_draws; /* RE-SoT: reference draws while translation pipelines compile. */
    uint64_t rejected_draws; /* RE-SoT: draws skipped because the driver rejected every program. */
    uint64_t pipeline_waits, pipeline_wait_ticks; /* RE-SoT: measure cold stalls while preserving geometry. */
    uint64_t flare_depth_draws; /* RE-SoT: observe the retail light-halo correction separately from queries. */
    uint32_t spec_ps_count;
    uint64_t spec_ps_draws; /* RE-SoT: measure specialization coverage. */
    SDL_GPUBuffer *vertices;
    SDL_GPUTexture *white, *white_cube, *composed;
    uint32_t compose_w, compose_h, vertex_offset;
    SDL_GPUSampler *samplers[6][6][2], *linear;
    NgSurface surfaces[HW_MAX_SURFACES], *front, *largest;
    NgDepth depths[HW_MAX_DEPTHS];
    NgTexture textures[HW_MAX_TEXTURES];
    NgPipeline *pipelines;
    NgPipeline *pipeline_buckets[256]; /* RE-SoT: avoid scanning all PSOs per draw. */
    SDL_GPUTextureFormat depth_format;
    uint8_t *queued_vertices;
    NgDraw *queued;
    uint32_t queued_count,queued_bytes,command_samplers;
    /* RE-SoT: one persistent upload buffer, cycled by SDL while in flight,
     * instead of creating and releasing one for every flush. */
    SDL_GPUTransferBuffer *vertex_transfer;
    uint32_t vertex_transfer_size; /* RE-SoT: allocate staging for the run, not the whole GPU ring. */
    /* RE-SoT: reuse texture staging storage on Vulkan/D3D12; SDL cycling
     * preserves earlier uploads still referenced by submitted commands. */
    SDL_GPUTransferBuffer *texture_transfer;
    uint32_t texture_transfer_size;
    /* RE-SoT: uniform data persists for the rest of a command buffer; the
     * last pushed copies skip identical pushes. Cleared at each submission. */
    NgVsConst last_vc;
    HwPsConst last_pc;
    int vc_valid, pc_valid;
    /* RE-SoT: overlay and F5/F6 panel images, kept while their size holds. */
    SDL_GPUTexture *overlay, *panel;
    uint32_t overlay_w, overlay_h, overlay_serial, panel_w, panel_h;
    DWORD movie_log;
    uint32_t movie_composes; /* RE-SoT: distinguish movie repaint cadence from guest flips. */
    int active, present_mode;
    /* RE-SoT: vertex programs on the GPU (vs_uber). The CPU interpreter cost
     * 20-50 ms a frame on Android. Constants and programs are snapshotted
     * once per change into pools that live as long as the queued run. */
    SDL_GPUShader *uber_vs;
    SDL_GPUBuffer *indices;
    uint8_t *queued_indices;
    uint32_t index_offset, queued_index_bytes;
    float (*cpool)[NV2A_VSH_CONSTANTS][4];
    uint32_t (*ppool)[NV2A_VSH_SLOTS][4];
    uint32_t ccount, pcount, c_gen, p_gen;
    uint32_t p_small; /* RE-SoT: original and remapped programs cannot share a snapshot. */
    int last_cslot, last_pslot, gpu_vsh;
    ResotGeometryCache geometry; /* RE-SoT: bounded exact source snapshots. */
    uint32_t geometry_generation;
    int geometry_enabled;
    uint32_t boot_trace; /* RE-SoT: first-frame Mali checkpoints, never per-frame logging. */
    int texture_probe; /* RE-SoT: automatic Adreno 640 diagnostic, bounded per format. */
    uint8_t texture_probe_formats[256],texture_probe_count;
} s_ng;
/* RE-SoT: pipeline compiler threads. On Adreno a new pipeline with the
 * NV2A combiner shader took 0.15-1.8 s inside vkCreateGraphicsPipelines;
 * eight new state combinations on entering an area froze one retail run for
 * 12 s in total (2026-10-20 device logs, "[HW native] pipeline N created in").
 * RE-SoT: translated jobs use reference PSOs while compiling; cold reference
 * jobs wait without dropping geometry. Cache saves also run off the executor. */
#define NG_COMPILERS 2
static struct {
    SDL_Mutex *lock;
    SDL_Condition *cond;
    SDL_Thread *thread[NG_COMPILERS];
    NgPipeline *head, *tail;
    int quit, save, running, async;
    SDL_AtomicInt compiled, skipped;
} s_ngc;
static void ng_compiler_start(void);
static void ng_compiler_stop(void);
/* RE-SoT: SDL 3.4.18's D3D12 sampler heap (see ng_flush_draws). Vulkan
 * allocates its descriptor sets from growing pools and needs no budget. */
#define NG_D3D12_SAMPLER_BUDGET 1536
static int ng_sampler_budget(uint32_t samplers)
{
    return s_ng.active == 12 && s_ng.command_samplers + samplers > NG_D3D12_SAMPLER_BUDGET;
}

static int ng_active(void) { return s_ng.active != 0 && s_ng.device != NULL; }
/* RE-SoT: distinguish the Samsung's first draw/resource/compile/submit stalls.
 * These callers already hold the shared renderer lock. */
static void ng_boot_stage(uint32_t bit,const char *stage)
{
    if(!s_ng_compact_pipelines || (s_ng.boot_trace&bit)) return;
    s_ng.boot_trace|=bit;
    fprintf(stderr,"[HW native] startup: %s\n",stage); fflush(stderr);
}
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
#if defined(__ANDROID__)
    /* RE-SoT: Android's hidden surface must not keep encoding frames and
     * burning CPU/GPU. Its separate SDL event loop wakes this condition. */
    extern void resot_android_wait_foreground(void);
    resot_android_wait_foreground();
#endif
    if (!s_ng.cmd) s_ng.cmd = SDL_AcquireGPUCommandBuffer(s_ng.device);
    if (!s_ng.cmd) ng_fail("acquire command buffer");
    return s_ng.cmd;
}
static void ng_submit_encoded(void)
{
    if (s_ng.cmd) {
        if(s_ng.boot_trace&64) ng_boot_stage(128,"guest command submission begin"); /* RE-SoT */
        if (s_ng_visibility.pending) {
            SDL_GPUFence *fence = SDL_SubmitGPUCommandBufferAndAcquireFence(s_ng.cmd);
            if (!fence || !ng_vis_submitted(&s_ng_visibility,fence)) ng_fail("visibility submission fence");
        } else if (!SDL_SubmitGPUCommandBuffer(s_ng.cmd)) ng_fail("submit");
        if(s_ng.boot_trace&64) ng_boot_stage(256,"guest command submission complete"); /* RE-SoT */
    }
    s_ng.cmd = NULL;
    /* RE-SoT: retain the append position across submissions; cycle only
     * when the vertex ring wraps, preserving resources used by prior draws. */
    s_ng.command_samplers = 0;
    s_ng.vc_valid = s_ng.pc_valid = 0;
    s_ng.last_cslot = s_ng.last_pslot = -1; /* RE-SoT: uniforms live per command buffer. */
}
static void ng_submit(void)
{
    ng_flush_draws();
    ng_submit_encoded();
}
/* RE-SoT: both hosts use the same internal scale, independent of the window. */
static int s_applied_render_percent;
#if defined(_WIN32)
/* RE-SoT: SDL subclasses the adopted HWND. Its WM_NCCALCSIZE handler uses
 * cached BORDERLESS/RESIZABLE flags, so changing GWL_STYLE alone cannot
 * restore a caption or resize frame on Vulkan/D3D12 after F11. The host
 * window thread calls this before applying its saved Win32 placement. */
void nv2a_hw_set_window_frame(int bordered)
{
    if(!s_ng.window)return;
    if(!SDL_SetWindowBordered(s_ng.window,bordered!=0))
        fprintf(stderr,"[WINDOW] border change failed: %s\n",SDL_GetError());
    if(!SDL_SetWindowResizable(s_ng.window,true))
        fprintf(stderr,"[WINDOW] resize frame change failed: %s\n",SDL_GetError());
}
#endif
static uint32_t ng_px(uint32_t x,uint32_t scale) { return hw_px(x,scale); }
static uint32_t ng_py(uint32_t y,uint32_t scale) { return hw_py(y,scale); }
/* RE-SoT: caller holds s_hw.lock. GPU polling never blocks or submits. */
static void ng_visibility_complete(void *opaque, uint32_t at, uint64_t stamp, uint32_t count)
{
#if RESOT_RUNTIME_RETAIL
    static uint32_t logged;
    hw_visibility_complete(opaque,at,stamp,count);
    if (logged++ < 8 || s_ftrace == 2) /* RE-SoT: correlate actual light-query results in a one-frame trace. */
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
        if (s_ftrace == 2) fprintf(stderr,"[FTRACE native] report addr=%08X stamp=%llu segments=%u\n",
            value,(unsigned long long)stamp,s_ng_visibility.count); /* RE-SoT: no fabricated light visibility. */
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
    SDL_GPUTransferBuffer *transfer;
    SDL_GPUCopyPass *copy;
    uint32_t layer;
    void *mapped;
    /* RE-SoT: avoid a driver allocation/release for every texture or video
     * upload. Grow only when necessary, and cycle before overwriting. */
    if (!s_ng.texture_transfer || s_ng.texture_transfer_size < ci.size) {
        transfer = SDL_CreateGPUTransferBuffer(s_ng.device, &ci);
        if (!transfer) ng_fail("texture transfer buffer");
        if (s_ng.texture_transfer)
            SDL_ReleaseGPUTransferBuffer(s_ng.device, s_ng.texture_transfer);
        s_ng.texture_transfer = transfer;
        s_ng.texture_transfer_size = ci.size;
    }
    transfer = s_ng.texture_transfer;
    mapped = SDL_MapGPUTransferBuffer(s_ng.device, transfer, true);
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

/* RE-SoT: specialize only the generic Vulkan path; existing simple shaders
 * remain cheaper. Full-key equality prevents hash collisions changing math.
 * Constants, texture scales/borders and alpha reference remain uniforms. */
static uint32_t ng_program_bucket(const uint32_t *words,uint32_t count)
{
    uint32_t hash=2166136261u;
    for(uint32_t i=0;i<count;i++) hash=(hash^words[i])*16777619u;
    return hash&255;
}
static NgTranslatedFragment *ng_specialized_ps(const HwPsConst *pc)
{
    uint32_t key[RESOT_PS_SPEC_WORDS],bucket;
    NgTranslatedFragment *entry;
    static int enabled=-1;
    if(enabled<0) { const char *e=getenv("RESOT_NATIVE_SPECIALIZE"); enabled=!(e && *e=='0'); }
    if(!enabled || s_ng_compat || s_ng.active!=100) return NULL; /* RE-SoT: driver workaround. */
    resot_ps_spec_key(key,pc); bucket=ng_program_bucket(key,RESOT_PS_SPEC_WORDS);
    for(entry=s_ng.spec_ps[bucket];entry;entry=entry->next)
        if(!memcmp(key,entry->key,sizeof key)) return entry;
    entry=(NgTranslatedFragment*)calloc(1,sizeof *entry);
    if(!entry) return NULL;
    entry->lock=SDL_CreateMutex();
    if(!entry->lock) { free(entry); return NULL; }
    memcpy(entry->key,key,sizeof key);
    entry->next=s_ng.spec_ps[bucket]; s_ng.spec_ps[bucket]=entry; s_ng.spec_ps_count++;
    return entry;
}
/* RE-SoT: only immutable packed words enter the cache: uniforms, game target
 * addresses and the live viewport never enter a translated program's key. */
static NgTranslatedVertex *ng_translated_vs(const uint32_t *words,uint32_t count)
{
    uint32_t bucket, generation;
    NgTranslatedVertex *entry;
    static int enabled=-1;
    if(enabled<0) { const char *e=getenv("RESOT_NATIVE_TRANSLATE"); enabled=!(e && *e=='0'); }
    if(!enabled || s_ng_compat || s_ng.active!=100) return NULL; /* RE-SoT: driver workaround. */
    generation=nv2a_vsh_program_generation(); /* RE-SoT: same identity used by the immutable draw pool. */
    if(s_ng.last_translated_vs && s_ng.last_translated_generation==generation)
        return s_ng.last_translated_vs;
    bucket=ng_program_bucket(words,count*4);
    for(entry=s_ng.translated_vs[bucket];entry;entry=entry->next)
        if(entry->count==count && !memcmp(entry->words,words,count*16)) break;
    if(entry) {
        s_ng.last_translated_generation=generation; s_ng.last_translated_vs=entry; /* RE-SoT */
        return entry;
    }
    entry=(NgTranslatedVertex*)calloc(1,sizeof *entry);
    if(!entry) return NULL;
    entry->lock=SDL_CreateMutex();
    entry->source=resot_translate_vertex(ng_translated_vertex_head,words,count);
    if(!entry->lock || !entry->source) {
        if(entry->lock) SDL_DestroyMutex(entry->lock);
        free(entry->source); free(entry); return NULL;
    }
    entry->count=count; memcpy(entry->words,words,count*16);
    entry->next=s_ng.translated_vs[bucket]; s_ng.translated_vs[bucket]=entry;
    s_ng.last_translated_generation=generation; s_ng.last_translated_vs=entry; /* RE-SoT */
    return entry;
}
/* RE-SoT: called on the existing pipeline workers, not on every draw.
 * Compilation failure keeps a reference shader; the entry is not retried. */
static SDL_GPUShader *ng_vertex_compile(NgTranslatedVertex *entry)
{
    SDL_LockMutex(entry->lock);
    if(!entry->attempted) {
        size_t bytes=0; uint32_t *code=resot_compile_vertex(entry->source,&bytes);
        if(code) { entry->shader=ng_shader(NULL,0,(const unsigned char*)code,bytes,"main",1,0,2); free(code); }
        if(entry->shader) fprintf(stderr,"[HW native] translated vertex: %u instructions, %zu SPIR-V bytes\n",entry->count,bytes);
        if(!entry->shader) fprintf(stderr,"[HW native] vertex translation failed; using reference interpreter\n");
        entry->attempted=1;
    }
    SDL_GPUShader *shader=entry->shader;
    SDL_UnlockMutex(entry->lock); return shader;
}
static SDL_GPUShader *ng_fragment_compile(NgTranslatedFragment *entry)
{
    SDL_LockMutex(entry->lock);
    if(!entry->attempted) {
        size_t bytes,optimized_bytes=0;
        const unsigned char *source=ng_ps_specialized_source(entry->key[32]&255,&bytes);
        uint32_t *code=resot_ps_specialize(source,bytes,entry->key);
        if(code) {
            uint32_t *optimized=resot_optimize_fragment(code,bytes,&optimized_bytes);
            if(optimized) {
                entry->shader=ng_shader(NULL,0,(const unsigned char*)optimized,optimized_bytes,"ps_main",0,8,1);
                free(optimized);
            }
            if(!entry->shader) entry->shader=ng_shader(NULL,0,(const unsigned char*)code,bytes,"ps_main",0,8,1);
            free(code);
        }
        if(!entry->shader) fprintf(stderr,"[HW native] fragment translation failed; using reference combiner\n");
        entry->attempted=1;
    }
    SDL_GPUShader *shader=entry->shader;
    SDL_UnlockMutex(entry->lock); return shader;
}

static void ng_shutdown(void)
{
    uint32_t i,u,v,l;
    NgPipeline *pipeline;
    if (s_ng.cmd) { SDL_CancelGPUCommandBuffer(s_ng.cmd); s_ng.cmd = NULL; }
    if (s_ng.device) {
        SDL_WaitForGPUIdle(s_ng.device);
        ng_compiler_stop(); /* RE-SoT: no background creation past this point. */
        if (s_ng_cache_save) s_ng_cache_save(s_ng.device);
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
            if (pipeline->gpu) SDL_ReleaseGPUGraphicsPipeline(s_ng.device,pipeline->gpu);
            free(pipeline);
        }
        if (s_ng.vertices) SDL_ReleaseGPUBuffer(s_ng.device,s_ng.vertices);
        if (s_ng.vertex_transfer) SDL_ReleaseGPUTransferBuffer(s_ng.device,s_ng.vertex_transfer);
        if (s_ng.texture_transfer) SDL_ReleaseGPUTransferBuffer(s_ng.device,s_ng.texture_transfer);
        if (s_ng.overlay) SDL_ReleaseGPUTexture(s_ng.device,s_ng.overlay);
        if (s_ng.panel) SDL_ReleaseGPUTexture(s_ng.device,s_ng.panel);
        if (s_ng.white) SDL_ReleaseGPUTexture(s_ng.device,s_ng.white);
        if (s_ng.white_cube) SDL_ReleaseGPUTexture(s_ng.device,s_ng.white_cube);
        if (s_ng.composed) SDL_ReleaseGPUTexture(s_ng.device,s_ng.composed);
        if (s_ng.linear) SDL_ReleaseGPUSampler(s_ng.device,s_ng.linear);
        if (s_ng.vs) SDL_ReleaseGPUShader(s_ng.device,s_ng.vs);
        if (s_ng.blit_vs) SDL_ReleaseGPUShader(s_ng.device,s_ng.blit_vs);
        if (s_ng.ps) SDL_ReleaseGPUShader(s_ng.device,s_ng.ps);
        if (s_ng.simple_ps) SDL_ReleaseGPUShader(s_ng.device,s_ng.simple_ps); /* RE-SoT */
        if (s_ng.simple_alpha_ps) SDL_ReleaseGPUShader(s_ng.device,s_ng.simple_alpha_ps); /* RE-SoT */
        if (s_ng.blit_ps) SDL_ReleaseGPUShader(s_ng.device,s_ng.blit_ps);
        if (s_ng.solid_ps) SDL_ReleaseGPUShader(s_ng.device,s_ng.solid_ps);
        if (s_ng.panel_ps) SDL_ReleaseGPUShader(s_ng.device,s_ng.panel_ps);
        if (s_ng.uber_vs) SDL_ReleaseGPUShader(s_ng.device,s_ng.uber_vs);
        if (s_ng.small_vs) SDL_ReleaseGPUShader(s_ng.device,s_ng.small_vs); /* RE-SoT */
        /* RE-SoT: workers stopped and pipelines released before program entries. */
        for(i=0;i<256;i++) {
            NgTranslatedVertex *vertex;
            NgTranslatedFragment *fragment;
            while((vertex=s_ng.translated_vs[i])!=NULL) {
                s_ng.translated_vs[i]=vertex->next;
                if(vertex->shader) SDL_ReleaseGPUShader(s_ng.device,vertex->shader);
                SDL_DestroyMutex(vertex->lock); free(vertex->source); free(vertex);
            }
            while((fragment=s_ng.spec_ps[i])!=NULL) {
                s_ng.spec_ps[i]=fragment->next;
                if(fragment->shader) SDL_ReleaseGPUShader(s_ng.device,fragment->shader);
                SDL_DestroyMutex(fragment->lock); free(fragment);
            }
        }
        if (s_ng.indices) SDL_ReleaseGPUBuffer(s_ng.device,s_ng.indices);
        if (s_ng.window) SDL_ReleaseWindowFromGPUDevice(s_ng.device, s_ng.window);
        SDL_DestroyGPUDevice(s_ng.device);
    }
#if !defined(__ANDROID__)
    if (s_ng.window) SDL_DestroyWindow(s_ng.window);   /* RE-SoT: Android: the host's */
#endif
    free(s_ng.queued_vertices); free(s_ng.queued);
    free(s_ng.queued_indices); free(s_ng.cpool); free(s_ng.ppool);
    resot_geometry_destroy(&s_ng.geometry); /* RE-SoT: no source snapshots survive device recreation. */
    memset(&s_ng, 0, sizeof s_ng);
}
static int ng_init(const char *backend)
{
    /* RE-SoT: Vulkan only; D3D12's existing encoder and D3D11 reuse stay as-is. */
    const char *geometry=getenv("RESOT_NATIVE_GEOMETRY_CACHE");
    s_ng.geometry_enabled=!(geometry && *geometry=='0');
    s_ng.geometry_generation=1;
    /* RE-SoT: Android's CWD is the writable app files directory; Windows'
     * is the executable directory. Source equality versions cache entries. */
    resot_shader_cache_init("shadercache");
#if defined(_WIN32)
    char dll_path[MAX_PATH];
    HMODULE module;
#endif
#if defined(_WIN32)
    SDL_PropertiesID props; /* RE-SoT: adopted Windows window properties. */
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
    if (s_ng.active == 100) {
        char cache[MAX_PATH + 64];
#if defined(_WIN32)
        s_ng_cache_path = (void (SDLCALL *)(const char *))GetProcAddress(module, "RESOT_SetVulkanPipelineCachePath");
        s_ng_cache_save = (bool (SDLCALL *)(SDL_GPUDevice *))GetProcAddress(module, "RESOT_SaveVulkanPipelineCache");
        /* Beside the executable, as the D3D11 shader cache. */
        strcpy(cache, dll_path);
        strcpy(strrchr(cache, '\\') + 1, "shadercache");
        CreateDirectoryA(cache, NULL);
        strcat(cache, "\\vulkan-pipelines.bin");
#else
        s_ng_cache_path = RESOT_SetVulkanPipelineCachePath;
        s_ng_cache_save = RESOT_SaveVulkanPipelineCache;
        /* The host's working directory is the game's writable data folder.
         * Absolute: SDL on Android reads relative paths from the APK assets. */
        if (!getcwd(cache, MAX_PATH)) cache[0] = 0;
        if (cache[0]) strcat(cache, "/vulkan-pipelines.bin");
#endif
        if (s_ng_cache_path && s_ng_cache_save && cache[0]) s_ng_cache_path(cache);
        else s_ng_cache_save = NULL;
    }
    /* RE-SoT: SDL enables optional Vulkan features by default. We use no
     * clip distances, depth clamping, anisotropy or indirect draws. Requiring
     * those features excludes otherwise usable mobile devices (including
     * Mali). Keep hardware homogeneous depth clipping enabled in pipelines. */
    s_ng.device = resot_native_device(s_ng.active == 12 ? "direct3d12" : "vulkan",
                                      getenv("RESOT_GPU_DEBUG") != NULL);
    if (!s_ng.device || !SDL_ClaimWindowForGPUDevice(s_ng.device, s_ng.window)) goto fail;
    fprintf(stderr,"[HW native] GPU: %s (%s)\n",
        SDL_GetStringProperty(SDL_GetGPUDeviceProperties(s_ng.device), SDL_PROP_GPU_DEVICE_NAME_STRING,"unknown"),
        SDL_GetGPUDeviceDriver(s_ng.device)); /* RE-SoT: remote reports need the actual GPU identity. */
    /* RE-SoT: distinguish API support from driver revision in remote reports;
     * DEVICE_LOST alone cannot establish that a driver is old. */
    {
        SDL_PropertiesID device_props=SDL_GetGPUDeviceProperties(s_ng.device);
        uint32_t api=(uint32_t)SDL_GetNumberProperty(device_props,"resot.vulkan.api_version",0);
        fprintf(stderr,"[HW native] driver: %s; version=%s; info=%s\n",
            SDL_GetStringProperty(device_props,SDL_PROP_GPU_DEVICE_DRIVER_NAME_STRING,"not reported"),
            SDL_GetStringProperty(device_props,SDL_PROP_GPU_DEVICE_DRIVER_VERSION_STRING,"not reported"),
            SDL_GetStringProperty(device_props,SDL_PROP_GPU_DEVICE_DRIVER_INFO_STRING,"not reported"));
        if(api) fprintf(stderr,"[HW native] physical-device Vulkan API: %u.%u.%u (raw %u)\n",
            (api>>22)&127,(api>>12)&1023,api&4095,api);
    }
    s_ng_compat = s_ng.active == 100 && resot_native_compat(
        SDL_GetStringProperty(SDL_GetGPUDeviceProperties(s_ng.device), SDL_PROP_GPU_DEVICE_NAME_STRING,""),
        getenv("RESOT_NATIVE_COMPAT")); /* RE-SoT: includes Windows Vulkan for reproducible A/B. */
    fprintf(stderr,"[HW native] reference shader compatibility: %s (geometry cache retained)\n",
        s_ng_compat ? "on" : "off");
    s_ng_compact_pipelines = s_ng.active == 100 && resot_native_compact_pipelines(
        SDL_GetStringProperty(SDL_GetGPUDeviceProperties(s_ng.device), SDL_PROP_GPU_DEVICE_NAME_STRING,""),s_ng_compat);
    fprintf(stderr,"[HW native] cold pipeline policy: %s\n",s_ng_compact_pipelines ?
        "wait for compact shaders (mobile); no duplicate reference compilation" : "reference fallback");
    {
        const char *probe=getenv("RESOT_TEXTURE_PROBE");
        /* RE-SoT: handset fix confirmed; keep startup readbacks opt-in for diagnostics. */
        s_ng.texture_probe=s_ng.active==100 && probe && *probe=='1';
        if(s_ng.texture_probe) fprintf(stderr,"[HW native] texture verification: first two images per format, maximum 12, checksum-only logs\n");
    } /* RE-SoT: no changes to texture content or sampling policy. */
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
        /* RE-SoT: user reports a slowdown after the Vulkan pooling revision;
         * same-scene A/B has substantial drift and no reproducible pool win.
         * Restore Vulkan allocation/retirement; D3D12 retains heap reuse.
         * Developer control can still compare both without dropping queries. */
        s_ng_visibility.pool_disabled = s_ng.active == 100;
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
    s_ng.simple_alpha_ps = NG_SHADER(ps_simple_alpha, 0, 1, 1); /* RE-SoT: foliage specialization. */
    s_ng.simple_ps = NG_SHADER(ps_simple, 0, 1, 1); /* RE-SoT: native mobile specialization. */
    s_ng.blit_ps = NG_SHADER(ps_blit, 0, 1, 0);
    s_ng.solid_ps = NG_SHADER(ps_solid, 0, 0, 1);
    s_ng.panel_ps = NG_SHADER(ps_debug, 0, 1, 0);
    s_ng.vertices = SDL_CreateGPUBuffer(s_ng.device, &vb);
    /* RE-SoT: GPU vertex programs. RESOT_NATIVE_CPU_VSH=1 keeps the CPU
     * interpreter (the previous behaviour), for comparison and fallback.
     * Both hosts: an Android build with the CPU interpreter on worker
     * threads stalled its executor (2026-10-19 logs). */
    {
        SDL_GPUBufferCreateInfo ib = {SDL_GPU_BUFFERUSAGE_INDEX, HW_IB_BYTES, 0};
        const char *cpu = getenv("RESOT_NATIVE_CPU_VSH");
        int want_gpu = !resot_native_cpu_vertices(s_ng_compact_pipelines,cpu); /* RE-SoT: isolate Mali vertex execution after device loss. */
        s_ng.last_cslot = s_ng.last_pslot = -1;
        if (want_gpu) {
            s_ng.uber_vs = NG_SHADER(vs_uber, 1, 0, 3);
#if RESOT_RUNTIME_RETAIL
            /* RE-SoT: retail-only until demo device validation. */
            s_ng.small_vs = NG_SHADER(vs_uber_small, 1, 0, 3);
#endif
            s_ng.indices = SDL_CreateGPUBuffer(s_ng.device, &ib);
            s_ng.gpu_vsh = s_ng.uber_vs && s_ng.indices;
            if (!s_ng.gpu_vsh)
                fprintf(stderr,"[HW native] GPU vertex programs unavailable (%s); CPU interpreter\n",SDL_GetError());
        }
        fprintf(stderr,"[HW native] vertex execution: %s; fragment shaders remain on the GPU\n",
            s_ng.gpu_vsh ? "GPU" : "CPU interpreter"); /* RE-SoT: make the actual fallback explicit. */
    }
    {
        SDL_GPUTransferBufferCreateInfo ti = {SDL_GPU_TRANSFERBUFFERUSAGE_UPLOAD, 65536, 0};
        s_ng.vertex_transfer = SDL_CreateGPUTransferBuffer(s_ng.device, &ti);
        s_ng.vertex_transfer_size = ti.size;
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
    ng_compiler_start(); /* RE-SoT: background pipelines and cache saves. */
    InterlockedExchange(&s_hw_backend, s_ng.active);
    xbox_FramebufferWindowHwMode(1);
    fprintf(stderr, "[HW] active renderer: %s native (SDL GPU %s; NV2A vertex programs on the %s)\n",
            backend, SDL_GetGPUDeviceDriver(s_ng.device), s_ng.gpu_vsh ? "GPU" : "CPU");
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
    /* RE-SoT: retire old targets only after their queued draws are submitted.
     * SDL retains in-flight resources; the independent composed frame remains
     * available while the guest begins drawing at its new internal size. */
    int percent = (int)InterlockedCompareExchange(&s_render_percent,0,0);
    if (percent != s_applied_render_percent) {
        ng_submit();
        for (i=0;i<HW_MAX_SURFACES;i++) {
            if (s_ng.surfaces[i].color) SDL_ReleaseGPUTexture(s_ng.device,s_ng.surfaces[i].color);
        }
        for (i=0;i<HW_MAX_DEPTHS;i++) {
            if (s_ng.depths[i].image) SDL_ReleaseGPUTexture(s_ng.device,s_ng.depths[i].image);
        }
        memset(s_ng.surfaces,0,sizeof s_ng.surfaces);
        memset(s_ng.depths,0,sizeof s_ng.depths);
        s_ng.front=s_ng.largest=NULL;
        s_applied_render_percent=percent;
        fprintf(stderr,"[HW native] Internal resolution: %d%% (%dp for 480-line guest)\n",percent,480*percent/100);
    }
    if (!s_gpu.color_offset || !bpp || !s_gpu.pitch) return NULL;
    off = dma_resolve(s_gpu.color_offset); w = s_gpu.pitch / bpp;
    h = s_gpu.clip_y + s_gpu.clip_h;
    if (!w || !h || w > 4096 || h > 4096) return NULL;
    for (i = 0; i < HW_MAX_SURFACES; i++) {
        NgSurface *s = &s_ng.surfaces[i];
        if (s->color && s->offset == off && s->w == w) {
            /* RE-SoT: rebuild a learned effect target when its quality changes. */
            if (s->h >= h && s->sc == hw_surface_scale(w)) return s;
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

    out->color = ng_image(ng_px(w, out->sc), ng_py(h,out->sc), 0, 1,
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
/* RE-SoT: distinguish render-to-texture effects from static UI textures. */
static int ng_effect_source(uint32_t offset,uint32_t w,uint32_t h)
{
    unsigned i;
    for(i=0;i<HW_MAX_SURFACES;i++)if(s_ng.surfaces[i].color
        && s_ng.surfaces[i].offset==offset && s_ng.surfaces[i].w==w
        && s_ng.surfaces[i].h==h)return 1;
    return 0;
}
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
    uint32_t i, w = ng_px(s->w,s->sc), h = ng_py(s->h,s->sc);
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
    uint32_t i, slot, hash, layers, face, *px, levels = 1, w, h;
    int reuse_image = 0; /* RE-SoT: SDL cycling preserves earlier sampled versions. */
    if (!t->valid || !t->width || !t->height || t->width > 4096 || t->height > 4096) return NULL;
    for (i = 0; !t->cube && i < HW_MAX_SURFACES; i++) {
        NgSurface *s = &s_ng.surfaces[i];
        if (s->color && s->offset == t->offset && (!best ||
            (s->w == t->width && best->w != t->width) ||
            ((s->w == t->width) == (best->w == t->width) && s->frame > best->frame))) best = s;
    }
    if (best) {
        hw_trace_effect_source(stage,best->offset,best->w,best->h,best->frame); /* RE-SoT */
        return best == target ? NULL : best->color;
    }
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
#if RESOT_RUNTIME_RETAIL || RESOT_RUNTIME_DEMO
    /* RE-SoT: content changes do not require a new 2D resource. Flush its
     * readers, then cycle storage on upload; SDL retires the old backing
     * allocation after those draws. Demo menu independently has repeated
     * uploads (android-demo-simple-trace.txt); both native backends pass
     * test_texture_cycle's earlier-image readback. Keep cube faces on the
     * existing path; the cache match above checks dimensions and format. */
    reuse_image = c && !t->cube;
#endif
    if (!c) c = victim;
    /* RE-SoT: flush readers before cycling or recreating. SDL retires the
     * old backing image after its last encoded GPU use. */
    if (c->image) ng_flush_draws(); /* RE-SoT: retire a sampled version only after encoding its draws. */
    layers = t->cube ? 6 : 1;
    px = (uint32_t *)malloc((size_t)t->width*t->height*layers*4);
    if (!px) ng_fail("decode texture allocation");
    /* RE-SoT: same bulk P8/ARGB conversion as D3D11, including Android. */
    for (face = 0; face < layers; face++)
        hw_decode_texture(t, t->cube ? face*tex_face_stride(t) : 0,
            px + (size_t)face*t->width*t->height);
    /* RE-SoT: the menu font sheet becomes the user's HD font, a larger image
     * with the same layout (resot_hd_font.h); the image is decoded first so
     * its size is known before the host image is made. */
    {
        int hd = t->cube ? 0 : resot_hd_font_match(px, t->width, t->height);
        uint32_t *big = hd ? resot_hd_font_pixels(hd) : NULL;
        if (big) { free(px); px = big; w = RESOT_HD_FONT_W; h = RESOT_HD_FONT_H; }
        else { hd = 0; w = t->width; h = t->height; }
        if (reuse_image && c->hd != hd) reuse_image = 0;
        c->hd = hd;
    }
    if (c->image && !reuse_image) SDL_ReleaseGPUTexture(s_ng.device, c->image);
    if (t->levels > 1 && tex_size_from_format(t->color)) {
        uint32_t extent = w > h ? w : h;
        while ((extent >>= 1) != 0) levels++;
    }
    if (!reuse_image) c->image = ng_image(w, h, t->cube, levels,
        SDL_GPU_TEXTUREUSAGE_SAMPLER | (levels > 1 ? SDL_GPU_TEXTUREUSAGE_COLOR_TARGET : 0),
        SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM);
    ng_upload_cycle(c->image, px, w, h, layers, levels > 1, reuse_image);
    if(s_ng.texture_probe && !c->hd && !t->cube && t->color<256 && s_ng.texture_probe_count<12 &&
       s_ng.texture_probe_formats[t->color]<2 && (uint64_t)t->width*t->height<=1024*1024) {
        ResotTextureProbe probes[RESOT_PROBE_MIPS];
        const uint8_t *raw=(const uint8_t *)xbox_GetMemoryOffset()+t->offset;
        uint32_t hash=2166136261u,bytes=hw_tex_bytes(t);
        for(uint32_t b=0;b<bytes;b++) hash=(hash^raw[b])*16777619u;
        s_ng.texture_probe_count++; s_ng.texture_probe_formats[t->color]++;
        /* RE-SoT: drain existing query/draw ownership before the independent
         * readback submission. Keep decoded pixels alive until comparison. */
        ng_submit();
        fprintf(stderr,"[TEXCHECK] begin offset=%08X fmt=%02X size=%ux%u levels=%u raw=%08X\n",
            t->offset,t->color,t->width,t->height,levels,hash); fflush(stderr);
        if(resot_probe_texture(s_ng.device,c->image,px,t->width,t->height,levels,probes)) {
            for(uint32_t level=0;level<levels;level++) fprintf(stderr,
                "[TEXCHECK] mip=%u pixels=%u mismatches=%u maxdelta=%u cpu=%08X gpu=%08X\n",
                level,probes[level].pixels,probes[level].mismatches,probes[level].max_delta,
                probes[level].cpu_hash,probes[level].gpu_hash);
        } else fprintf(stderr,"[TEXCHECK] unavailable: %s\n",SDL_GetError());
        fflush(stderr);
    } /* RE-SoT: checks only; no texture/fence error is hidden or substituted. */
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
/* Builds the pipeline for key; called by the executor or a compiler thread.
 * Reads only the key and shaders created before the key existed. */
static SDL_GPUGraphicsPipeline *ng_pipeline_build(const NgPipelineKey *key, int background)
{
    /* RE-SoT: Samsung logs previously recorded only completed compilations,
     * leaving a stalled first guest pipeline invisible. Correlate translator
     * entry, driver entry and completion without changing guest work. */
    static SDL_AtomicInt attempted;
    int compile_id = SDL_AddAtomicInt(&attempted,1)+1;
    int log_begin = compile_id<=16 || s_ng_compact_pipelines;
    if(log_begin) {
        fprintf(stderr,"[HW native] pipeline %d begin shader=%u directVS=%u specializedPS=%u background=%d\n",
            compile_id,key->shader,key->translated_vs!=NULL,key->specialized_ps!=NULL,background);
        fflush(stderr);
    }
    SDL_GPUGraphicsPipeline *gpu;
    SDL_GPUGraphicsPipelineCreateInfo ci = {0};
    SDL_GPUColorTargetDescription color = {0};
    SDL_GPUVertexAttribute attrs[8] = {0};
    SDL_GPUVertexBufferDescription vb = {0};
    uint32_t i;
    /* RE-SoT: vs_uber uses only its packed program's referenced inputs. */
    ci.vertex_shader = key->shader == 0 || key->shader == 6 || key->shader == 8 ? s_ng.vs : key->shader == 4 || key->shader == 5 || key->shader == 7 ? s_ng.uber_vs : s_ng.blit_vs;
    if (key->small_vsh) ci.vertex_shader = s_ng.small_vs; /* RE-SoT: selector already proved absent high-temp reads. */
    ci.fragment_shader = key->shader == 7 || key->shader == 8 ? s_ng.simple_alpha_ps : key->shader == 5 || key->shader == 6 ? s_ng.simple_ps : key->shader == 0 || key->shader == 4 ? s_ng.ps : key->shader == 1 ? s_ng.blit_ps :
                         key->shader == 2 ? s_ng.solid_ps : s_ng.panel_ps;
    /* RE-SoT: compile immutable programs once; reference shaders survive failures. */
    if(key->translated_vs) {
        SDL_GPUShader *translated=ng_vertex_compile(key->translated_vs);
        if(translated) ci.vertex_shader=translated;
    }
    if(key->specialized_ps) {
        SDL_GPUShader *translated=ng_fragment_compile(key->specialized_ps);
        if(translated) ci.fragment_shader=translated;
    }
    if (!key->shader || key->shader >= 4) { /* RE-SoT: guest shader input layout, including simple variants. */
        vb.pitch = key->vertex_stride ? key->vertex_stride : sizeof(HwVertex);
        vb.input_rate = SDL_GPU_VERTEXINPUTRATE_VERTEX;
        ci.vertex_input_state.vertex_buffer_descriptions = &vb; ci.vertex_input_state.num_vertex_buffers = 1;
        /* RE-SoT: unused shader locations alias slot zero; the packed program
         * cannot reference them. Keep all declared locations valid in Vulkan. */
        for (i = 0; i < 8; i++) { attrs[i].location = i; attrs[i].format = SDL_GPU_VERTEXELEMENTFORMAT_FLOAT4; attrs[i].offset = i*16 < vb.pitch ? i*16 : 0; }
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
    /* RE-SoT: only the explicit rectangle-clear pipeline replaces stencil. */
    if (key->clear_stencil) {
        ci.depth_stencil_state.enable_stencil_test = true;
        ci.depth_stencil_state.compare_mask = ci.depth_stencil_state.write_mask = 255;
        ci.depth_stencil_state.front_stencil_state.compare_op = SDL_GPU_COMPAREOP_ALWAYS;
        ci.depth_stencil_state.front_stencil_state.fail_op = SDL_GPU_STENCILOP_KEEP;
        ci.depth_stencil_state.front_stencil_state.depth_fail_op = SDL_GPU_STENCILOP_KEEP;
        ci.depth_stencil_state.front_stencil_state.pass_op = SDL_GPU_STENCILOP_REPLACE;
        ci.depth_stencil_state.back_stencil_state = ci.depth_stencil_state.front_stencil_state;
    }
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
    {
        /* RE-SoT: driver shader compilation happens here; log slow or early
         * creations (Android first-frame stalls) and which thread paid. */
        LARGE_INTEGER t0, t1, f;
        double ms;
        int n=compile_id;
        if(log_begin) { fprintf(stderr,"[HW native] pipeline %d driver compile begin\n",n); fflush(stderr); }
        QueryPerformanceCounter(&t0);
        gpu = SDL_CreateGPUGraphicsPipeline(s_ng.device, &ci);
        QueryPerformanceCounter(&t1); QueryPerformanceFrequency(&f);
        ms = (double)(t1.QuadPart - t0.QuadPart) * 1000.0 / (double)f.QuadPart;
        if (log_begin || ms >= 50.0)
            fprintf(stderr, "[HW native] pipeline %d (shader %u) created in %.1f ms%s\n",
                    n, key->shader, ms, background ? " (background)" : "");
    }
    return gpu;
}

static int SDLCALL ng_compiler(void *unused)
{
    (void)unused;
    SDL_LockMutex(s_ngc.lock);
    for (;;) {
        NgPipeline *p;
        while (!s_ngc.quit && !s_ngc.head && !s_ngc.save)
            SDL_WaitCondition(s_ngc.cond, s_ngc.lock);
        if (s_ngc.quit) break;
        if (s_ngc.head) {
            p = s_ngc.head;
            s_ngc.head = p->job_next;
            if (!s_ngc.head) s_ngc.tail = NULL;
            SDL_UnlockMutex(s_ngc.lock);
            p->gpu = ng_pipeline_build(&p->key, 1);
            /* Release order: gpu is visible before READY. */
            SDL_SetAtomicInt(&p->state, p->gpu ? NG_PSO_READY : NG_PSO_FAILED);
            SDL_AddAtomicInt(&s_ngc.compiled, 1);
            SDL_LockMutex(s_ngc.lock);
            /* RE-SoT: wake all reference waiters after publication, under the
             * same mutex as their predicate check (no lost completion wakeup).
             * A signal could wake only an idle compiler instead of a waiter. */
            SDL_BroadcastCondition(s_ngc.cond);
        } else {
            s_ngc.save = 0;
            SDL_UnlockMutex(s_ngc.lock);
            if (!s_ng_cache_save(s_ng.device))
                fprintf(stderr, "[HW native] pipeline cache save failed: %s\n", SDL_GetError());
            SDL_LockMutex(s_ngc.lock);
        }
    }
    SDL_UnlockMutex(s_ngc.lock);
    return 0;
}

/* RE-SoT: RESOT_ASYNC_PIPELINES=0 compiles on the executor; =1 forces
 * workers. Default on for Vulkan on both hosts: dedicated program compilation
 * must not stall the executor. D3D12 retains its existing default. */
static void ng_compiler_start(void)
{
    const char *e = getenv("RESOT_ASYNC_PIPELINES");
    int i;
#if defined(__ANDROID__)
    s_ngc.async = !(e && *e == '0');
#else
    s_ngc.async = e && *e ? *e != '0' : s_ng.active == 100;
#endif
    if (!s_ngc.async && !s_ng_cache_save) return;
    s_ngc.lock = SDL_CreateMutex();
    s_ngc.cond = SDL_CreateCondition();
    if (!s_ngc.lock || !s_ngc.cond) { s_ngc.async = 0; return; }
    s_ngc.quit = 0;
    for (i = 0; i < (s_ngc.async ? NG_COMPILERS : 1); i++) {
        s_ngc.thread[i] = SDL_CreateThread(ng_compiler, "resot-pso", NULL);
        if (s_ngc.thread[i]) s_ngc.running++;
    }
    if (!s_ngc.running) s_ngc.async = 0;
    fprintf(stderr, "[HW native] pipeline compilation: %s (%d thread%s)\n",
            s_ngc.async ? "background, cold reference draws wait" : "on the executor", /* RE-SoT: report the actual fallback policy. */
            s_ngc.running, s_ngc.running == 1 ? "" : "s");
}

static void ng_compiler_stop(void)
{
    int i;
    if (s_ngc.lock) {
        SDL_LockMutex(s_ngc.lock);
        s_ngc.quit = 1;
        SDL_BroadcastCondition(s_ngc.cond);
        SDL_UnlockMutex(s_ngc.lock);
    }
    for (i = 0; i < NG_COMPILERS; i++)
        if (s_ngc.thread[i]) { SDL_WaitThread(s_ngc.thread[i], NULL); s_ngc.thread[i] = NULL; }
    /* Jobs nobody took stay PENDING; their gpu is NULL and is not released. */
    s_ngc.head = s_ngc.tail = NULL;
    s_ngc.running = s_ngc.async = 0;
    if (s_ngc.cond) { SDL_DestroyCondition(s_ngc.cond); s_ngc.cond = NULL; }
    if (s_ngc.lock) { SDL_DestroyMutex(s_ngc.lock); s_ngc.lock = NULL; }
}

/* RE-SoT: NULL while compiling lets the caller try the reference program.
 * Cold reference draws, blits and presentation wait instead of dropping work. */
static SDL_GPUGraphicsPipeline *ng_pipeline(const NgPipelineKey *key, int may_defer)
{
    /* RE-SoT: inactive state cannot change pixels. Avoid duplicate PSOs from
     * stale guest registers during room transitions, on both native drivers. */
    NgPipelineKey canonical = *key;
    if (!canonical.blend) { canonical.src=1; canonical.dst=0; canonical.op=0x8006; }
    if (!(canonical.depth & 1)) { canonical.write=0; canonical.cmp=0x207; }
    if (!canonical.cull) canonical.ccw=0;
    key = &canonical;
    NgPipeline *p;
    uint32_t i, bucket = 2166136261u;
    int state;
    /* RE-SoT: retail scenes issue hundreds/thousands of draws and accumulate
     * many pipelines. Hash the entire initialized key, retaining full-key
     * comparison so collisions never substitute a different pipeline. */
    for (i = 0; i < sizeof *key; i++) bucket = (bucket ^ ((const uint8_t *)key)[i])*16777619u;
    bucket &= 255;
    for (p = s_ng.pipeline_buckets[bucket]; p; p = p->bucket_next)
        if (!memcmp(&p->key, key, sizeof *key)) break;
    if (!p) {
        p = (NgPipeline *)calloc(1, sizeof *p);
        if (!p) ng_fail("pipeline allocation");
        p->key = *key;
        p->next = s_ng.pipelines; s_ng.pipelines = p;
        p->bucket_next = s_ng.pipeline_buckets[bucket]; s_ng.pipeline_buckets[bucket] = p;
        if (may_defer && s_ngc.async) {
            SDL_SetAtomicInt(&p->state, NG_PSO_PENDING);
            SDL_LockMutex(s_ngc.lock);
            /* RE-SoT: prioritize reference pipelines so a cold translation
             * cannot leave geometry absent throughout shader optimization. */
            if (!key->translated_vs && !key->specialized_ps) {
                p->job_next=s_ngc.head; s_ngc.head=p;
                if(!s_ngc.tail) s_ngc.tail=p;
            } else {
                if (s_ngc.tail) s_ngc.tail->job_next = p; else s_ngc.head = p;
                s_ngc.tail = p;
            }
            SDL_SignalCondition(s_ngc.cond);
            SDL_UnlockMutex(s_ngc.lock);
        } else {
            p->gpu = ng_pipeline_build(key, 0);
            SDL_SetAtomicInt(&p->state, p->gpu ? NG_PSO_READY : NG_PSO_FAILED);
        }
    }
    state = SDL_GetAtomicInt(&p->state);
    if (state == NG_PSO_PENDING) {
        if (may_defer) return NULL; /* RE-SoT: caller obtains a ready reference pipeline. */
        /* RE-SoT: cold reference completion is an event, not a 1 ms poll.
         * Release the queue mutex while sleeping so workers can publish and
         * take jobs. Recheck after locking to cover completion before wait. */
        SDL_LockMutex(s_ngc.lock);
        while (SDL_GetAtomicInt(&p->state) == NG_PSO_PENDING) {
            /* RE-SoT: a bounded diagnostic wait retains every guest draw;
             * it never times out the pipeline or substitutes blank frames. */
            if(!SDL_WaitConditionTimeout(s_ngc.cond,s_ngc.lock,5000) &&
               SDL_GetAtomicInt(&p->state) == NG_PSO_PENDING) {
                fprintf(stderr,"[HW native] still waiting for pipeline shader=%u directVS=%u specializedPS=%u\n",
                    p->key.shader,p->key.translated_vs!=NULL,p->key.specialized_ps!=NULL);
                fflush(stderr);
            }
        }
        SDL_UnlockMutex(s_ngc.lock);
        state = SDL_GetAtomicInt(&p->state);
    }
    /* RE-SoT: a pipeline the driver rejects is no longer fatal here. Mali
     * reports (GitHub #8, #9: Exynos 2100 Mali-G78, Helio G96 Mali-G57) end in
     * SIGABRT about a second after Start Game, the shape of this abort on the
     * first scene's pipelines. Guest draws retry their reference program and
     * are skipped only when that fails too (ng_flush_draws); host blits and
     * clears still require theirs. Logged once per failed key. */
    if (state == NG_PSO_FAILED) {
        if (!p->reported) {
            static int shown;
            p->reported = 1;
            if (shown++ < 32)
                fprintf(stderr, "[HW native] pipeline rejected by the driver: shader=%u directVS=%u specializedPS=%u format=%u\n",
                        p->key.shader, p->key.translated_vs != NULL, p->key.specialized_ps != NULL, (unsigned)p->key.format);
        }
        return NULL;
    }
    return p->gpu;
}

static void ng_constants(NgSurface *s, NgVsConst *vc, HwPsConst *pc, SDL_GPUTextureSamplerBinding tex[8])
{
    uint32_t i;
    int main_view = s->w == 640 && s_gpu.clip_w == 640 && s_gpu.clip_h >= 448;
    memset(vc, 0, sizeof *vc); memset(pc, 0, sizeof *pc);
    vc->vp[0] = 2.0f/s->w; vc->vp[1] = 2.0f/s->h; vc->vp[2] = 1.0f/hw_zmax_bits();
    vc->vp[3] = (float)hw_depthless_shadow(); /* RE-SoT: preserve depthless shadow casters on Vulkan/D3D12 too. */
    vc->ws[0] = main_view && !s_hw.batch_full_width ? 1.0f/s_hw.widen : 1;
    if (main_view && s_hw.batch_projected_screen) vc->ws[0] = s_hw.widen;
    if (main_view && s_hw.batch_projected_2d) vc->ws[0] = 1; /* RE-SoT: hw_classify_screen */
    vc->ws[1] = (float)s->w; vc->ws[2] = 1;
    if (main_view && s_hw.batch_hud) { vc->ws[0] = 1; vc->ws[3] = hw_hud_shift(); }
    /* RE-SoT: the demo's corner logo, moved left just enough to end
     * RESOT_LOGO_MARGIN pixels inside the picture (hw_classify_screen). The
     * shader squeezes flat x inside (ws.z, ws.y - ws.z), then adds ws.w. */
    if (main_view && s_hw.batch_logo_right > 0) {
#define RESOT_LOGO_MARGIN 24.0f /* host value, 640-wide units */
        float r = s_hw.batch_logo_right, mid = 0.5f*vc->ws[1];
        static unsigned told;
        if (r > vc->ws[2] && r < vc->ws[1] - vc->ws[2]) r = (r - mid)*vc->ws[0] + mid;
        r += vc->ws[3];
        if (r > vc->ws[1] - RESOT_LOGO_MARGIN) {
            vc->ws[3] -= r - (vc->ws[1] - RESOT_LOGO_MARGIN);
            if (told++ < 4)
                fprintf(stderr, "[HUD] demo logo ended at x %.1f of %.0f: moved %.1f left\n",
                        r, vc->ws[1], r - (vc->ws[1] - RESOT_LOGO_MARGIN));
        }
    }
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
        hw_border_constants(pc, i, t); /* RE-SoT: same guest border as D3D11. */
        SDL_GPUTexture *image = NULL;
        if ((s_gpu.rc_seen ? mode >= 1 && mode <= 3 : i == 0) && t->valid) image = ng_texture(i, s);
        pc->tscale[i][0] = pc->tscale[i][1] = 1;
        if (t->valid && !tex_size_from_format(t->color)) {
            pc->tscale[i][0] = 1.0f/t->width; pc->tscale[i][1] = 1.0f/t->height;
        }
        pc->tscale[i][2] = image ? 1.0f : 0;
        pc->tscale[i][3] = image && t->cube ? 1.0f : 0;
        /* RE-SoT: RGB565 target alpha is implicit one, not the BGRA clear
         * alpha left by RGB-only casters. Clip only proven shadow receivers. */
        if(t->valid && (t->color==0x05 || t->color==0x11)) pc->misc[2]|=1u<<i;
        if(hw_shadow_receiver(t)) pc->misc[1]|=1u<<i;
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
    const NgDraw *bound_dynamic = NULL; /* RE-SoT: retain unchanged viewport/scissor/blend within a pass. */
    /* RE-SoT: expose every cold reference job before waiting for the first.
     * Resolve PSOs before upload/render encoding so compilation never leaves
     * an open guest render pass idle. Only job scheduling changes draw order. */
    SDL_GPUGraphicsPipeline *ready[NG_DRAW_QUEUE];
    uint8_t reference_draw[NG_DRAW_QUEUE] = {0};
    uint32_t i;
    void *mapped;
    uint32_t staged;
    if (!s_ng.queued_count) return;
    ng_boot_stage(8,"first guest queue flush begin"); /* RE-SoT */
    for (i = 0; i < s_ng.queued_count; i++) {
        const NgPipelineKey *key = &s_ng.queued[i].key;
        ready[i] = ng_pipeline(key,1);
        if (!ready[i] && !s_ng_compact_pipelines && (key->translated_vs || key->specialized_ps)) {
            NgPipelineKey reference = *key;
            reference.translated_vs = NULL; reference.specialized_ps = NULL;
            ready[i] = ng_pipeline(&reference,1);
            reference_draw[i] = 1;
        }
    }
    for (i = 0; i < s_ng.queued_count; i++) {
        if (!ready[i]) {
            NgPipelineKey reference = s_ng.queued[i].key;
            Uint64 start = SDL_GetPerformanceCounter();
            if(!s_ng_compact_pipelines) {
                reference_draw[i] = (reference.translated_vs || reference.specialized_ps) != 0;
                reference.translated_vs = NULL; reference.specialized_ps = NULL;
            } /* RE-SoT: Mali waits for the original compact key, preserving all draw state. */
            ready[i] = ng_pipeline(&reference,0);
            /* RE-SoT: the driver rejected the compact program; try the
             * reference one before giving the draw up (see ng_pipeline). */
            if (!ready[i] && (reference.translated_vs || reference.specialized_ps)) {
                reference.translated_vs = NULL; reference.specialized_ps = NULL;
                reference_draw[i] = 1;
                ready[i] = ng_pipeline(&reference,0);
            }
            s_ng.pipeline_wait_ticks += SDL_GetPerformanceCounter()-start;
            s_ng.pipeline_waits++;
            if (!ready[i]) s_ng.rejected_draws++;
        }
    }
    /* RE-SoT: visibility transitions flush small runs very frequently in
     * retail. Cycling a full 16 MB staging allocation and GPU allocation
     * for each run creates hundreds of MB of transient buffers per frame.
     * Grow staging to the run size, then append to the GPU ring. A wrap
     * cycles its backing storage so queued/in-flight draws keep their data.
     * The run's indices (vs_uber draws) follow its vertices in staging. */
    ng_boot_stage(16,"first guest pipelines ready"); /* RE-SoT */
    staged = s_ng.queued_bytes + s_ng.queued_index_bytes;
    if (staged > s_ng.vertex_transfer_size) {
        SDL_GPUTransferBufferCreateInfo ti = {SDL_GPU_TRANSFERBUFFERUSAGE_UPLOAD, s_ng.vertex_transfer_size, 0};
        SDL_GPUTransferBuffer *transfer;
        while (ti.size < staged) ti.size *= 2;
        transfer = SDL_CreateGPUTransferBuffer(s_ng.device,&ti);
        if (!transfer) ng_fail("grow vertex staging");
        SDL_ReleaseGPUTransferBuffer(s_ng.device,s_ng.vertex_transfer);
        s_ng.vertex_transfer = transfer; s_ng.vertex_transfer_size = ti.size;
    }
    /* RE-SoT: every supported vertex pitch divides HwVertex's 128 bytes. */
    s_ng.vertex_offset = (s_ng.vertex_offset + sizeof(HwVertex)-1) & ~(uint32_t)(sizeof(HwVertex)-1);
    /* RE-SoT: admission reserves space before queuing any draw, including
     * cached draws referring to older ranges. Never cycle underneath them. */
    if (s_ng.vertex_offset + s_ng.queued_bytes > HW_VB_BYTES ||
        s_ng.index_offset + s_ng.queued_index_bytes > HW_IB_BYTES) ng_fail("unreserved geometry ring wrap");
    if (staged) { /* RE-SoT: an all-cache-hit run needs no map/copy pass. */
    mapped = SDL_MapGPUTransferBuffer(s_ng.device,s_ng.vertex_transfer,true);
    if (!mapped) ng_fail("vertex transfer mapping");
    memcpy(mapped,s_ng.queued_vertices,s_ng.queued_bytes);
    if (s_ng.queued_index_bytes)
        memcpy((uint8_t *)mapped+s_ng.queued_bytes,s_ng.queued_indices,s_ng.queued_index_bytes);
    SDL_UnmapGPUTransferBuffer(s_ng.device,s_ng.vertex_transfer);
    copy = SDL_BeginGPUCopyPass(ng_cmd());
    src.transfer_buffer = s_ng.vertex_transfer; dst.buffer = s_ng.vertices; dst.size = s_ng.queued_bytes;
    dst.offset = s_ng.vertex_offset;
    /* RE-SoT: only the first run after wrapping needs fresh backing storage. */
    if (s_ng.queued_bytes) SDL_UploadToGPUBuffer(copy,&src,&dst,s_ng.vertex_offset == 0);
    if (s_ng.queued_index_bytes) {
        src.offset = s_ng.queued_bytes;
        dst.buffer = s_ng.indices; dst.size = s_ng.queued_index_bytes; dst.offset = s_ng.index_offset;
        SDL_UploadToGPUBuffer(copy,&src,&dst,s_ng.index_offset == 0);
    }
    SDL_EndGPUCopyPass(copy);
    }
    ng_boot_stage(32,"first guest geometry uploaded"); /* RE-SoT */
    for (i = 0; i < s_ng.queued_count; i++) {
        NgDraw *draw = &s_ng.queued[i];
        SDL_GPUGraphicsPipeline *pipeline = ready[i]; /* RE-SoT: resolved before encoding. */
        SDL_GPUBufferBinding vb = {s_ng.vertices,0}; /* RE-SoT: absolute ring ranges also address cached geometry. */
        uint32_t sampler_count = draw->key.shader >= 5 ? 1 : 8; /* RE-SoT */
        int new_samplers,reference_pipeline=reference_draw[i]; /* RE-SoT */
        if (!pipeline) continue; /* RE-SoT: no program the driver accepts (counted above). */
        s_ng.reference_draws+=reference_pipeline;
        /* RE-SoT: SDL 3.4.18's D3D12 descriptor writer checks only the
         * current index, not index+table size, against its 2048-sampler heap.
         * One-slot host blits followed by eight-slot guest draws can cross
         * that boundary. Bound each D3D12 submission to 1536 sampler
         * descriptors, preserving guest order without changing upstream SDL.
         * Descriptors are written only when the pipeline or the samplers
         * change, so draws that share them do not count; Vulkan has no limit. */
        new_samplers = !pass || last_color != draw->color || last_depth != draw->depth ||
            pipeline != bound_pipeline ||
            memcmp(bound_textures->textures,draw->textures,sampler_count*sizeof draw->textures[0]);
        if (new_samplers && ng_sampler_budget(sampler_count)) {
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
            if (s_ng.indices) { /* RE-SoT: all-cache-hit runs have no new index bytes. */
                SDL_GPUBufferBinding ib = {s_ng.indices,0}; /* RE-SoT: cached and fresh indices share this generation. */
                SDL_BindGPUIndexBuffer(pass,&ib,SDL_GPU_INDEXELEMENTSIZE_16BIT);
            }
            last_color = draw->color; last_depth = draw->depth;
            bound_pipeline = NULL; bound_textures = NULL; bound_dynamic = NULL;
        }
        if (pipeline != bound_pipeline) {
            SDL_BindGPUGraphicsPipeline(pass,pipeline);
            SDL_BindGPUVertexBuffers(pass,0,&vb,1); /* RE-SoT: D3D12 views inherit the selected vertex pitch. */
            bound_pipeline = pipeline; bound_textures = NULL;
        }
        if (!bound_dynamic || memcmp(&bound_dynamic->vp,&draw->vp,sizeof draw->vp))
            SDL_SetGPUViewport(pass,&draw->vp);
        if (!bound_dynamic || memcmp(&bound_dynamic->sc,&draw->sc,sizeof draw->sc))
            SDL_SetGPUScissor(pass,&draw->sc);
        if (!bound_dynamic || memcmp(&bound_dynamic->blend,&draw->blend,sizeof draw->blend))
            SDL_SetGPUBlendConstants(pass,draw->blend);
        bound_dynamic = draw;
        if (!bound_textures || memcmp(bound_textures->textures,draw->textures,sampler_count*sizeof draw->textures[0])) {
            SDL_BindGPUFragmentSamplers(pass,0,draw->textures,sampler_count);
            bound_textures = draw;
            s_ng.command_samplers += sampler_count;
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
        if (draw->index_count) {
            /* RE-SoT: vs_uber's constants (3 KB) and program, pushed when the
             * snapshot changes rather than for every draw. */
            if (s_ng.last_cslot != (int)draw->cslot) {
                SDL_PushGPUVertexUniformData(s_ng.cmd,1,s_ng.cpool[draw->cslot],sizeof s_ng.cpool[0]);
                s_ng.last_cslot = (int)draw->cslot;
            }
            /* RE-SoT: ng_pipeline acquired the worker's ready publication;
             * shader is immutable after that point. Successful translations
             * consume constants only, so omit the interpreter program UBO. */
            if ((reference_pipeline || !draw->key.translated_vs || !draw->key.translated_vs->shader) &&
                s_ng.last_pslot != (int)draw->pslot) {
                SDL_PushGPUVertexUniformData(s_ng.cmd,2,s_ng.ppool[draw->pslot],draw->pcount*16);
                s_ng.last_pslot = (int)draw->pslot;
            }
            SDL_DrawGPUIndexedPrimitives(pass,draw->index_count,1,
                draw->first_index+(draw->reused_geometry?0:s_ng.index_offset/2),
                (Sint32)((draw->offset+(draw->reused_geometry?0:s_ng.vertex_offset))/
                    (draw->key.vertex_stride ? draw->key.vertex_stride : (uint32_t)sizeof(HwVertex))),0); /* RE-SoT: absolute range. */
        } else
            SDL_DrawGPUPrimitives(pass,draw->count,1,(s_ng.vertex_offset+draw->offset)/(uint32_t)sizeof(HwVertex),0); /* RE-SoT */
        ng_boot_stage(64,"first guest draw encoded"); /* RE-SoT */
    }
    if (pass) {
        if (query) s_ng_visibility.api->end(s_ng.cmd,query->query);
        SDL_EndGPURenderPass(pass);
        if (query) s_ng_visibility.api->resolve(s_ng.cmd,query->query);
    }
    s_ng.vertex_offset += s_ng.queued_bytes; /* RE-SoT: advance after encoding all run draws. */
    s_ng.index_offset += s_ng.queued_index_bytes;
    s_ng.queued_count = s_ng.queued_bytes = s_ng.queued_index_bytes = 0;
    /* RE-SoT: pool slots are reused by the next run; force fresh pushes. */
    s_ng.ccount = s_ng.pcount = 0;
    s_ng.last_cslot = s_ng.last_pslot = -1;
}
/* RE-SoT: flush all references before cycling either append ring. Cached
 * ranges survive submissions/frames, but never a storage generation change. */
static void ng_queue_reserve(uint32_t vertices,uint32_t indices)
{
    s_ng.queued_bytes=(s_ng.queued_bytes+127u)&~127u;
    if(s_ng.queued_count==NG_DRAW_QUEUE || s_ng.queued_bytes+vertices>HW_VB_BYTES ||
       s_ng.queued_index_bytes+indices>HW_IB_BYTES) ng_flush_draws();
    if(((s_ng.vertex_offset+127u)&~127u)+s_ng.queued_bytes+vertices>HW_VB_BYTES ||
       s_ng.index_offset+s_ng.queued_index_bytes+indices>HW_IB_BYTES) {
        ng_flush_draws();
        s_ng.vertex_offset=s_ng.index_offset=0;
        if(++s_ng.geometry_generation==0) {
            resot_geometry_destroy(&s_ng.geometry); s_ng.geometry_generation=1;
        }
    }
}
static void ng_queue_alloc(void);
static void ng_draw_state(NgSurface *s, SDL_GPUTexture *depth, NgDraw *out);
static int ng_simple_combiner(void); /* RE-SoT: shared by GPU and CPU vertex paths. */
static void ng_draw(const HwVertex *vertices, uint32_t count)
{
    ng_boot_stage(1,"first guest resources begin (CPU-transformed vertices)"); /* RE-SoT */
    NgSurface *s = ng_surface();
    SDL_GPUTexture *depth;
    NgDraw draw = {0};
    uint32_t bytes = count*sizeof(HwVertex);
    if (!s) return;
    if (bytes > HW_VB_BYTES) ng_fail("oversized vertex batch");
    ng_queue_alloc();
    /* RE-SoT: align after preceding compact program vertices. */
    ng_queue_reserve(bytes,0); /* RE-SoT: CPU fallback draws can also exhaust the shared rings. */
    depth = ng_depth(s);
    ng_constants(s,&draw.vc,&draw.pc,draw.textures);
    ng_boot_stage(4,"first guest textures/constants ready"); /* RE-SoT */
    ng_queue_reserve(bytes,0); /* RE-SoT: texture uploads may flush the preceding run. */
    ng_draw_state(s,depth,&draw);
    { int simple = ng_simple_combiner(); draw.key.shader = simple ? (simple == 2 ? 8 : 6) : 0; } /* RE-SoT: same fragment specialization on fallback vertices. */
    if(draw.key.shader==0) draw.key.specialized_ps=ng_specialized_ps(&draw.pc); /* RE-SoT */
    s_ng.spec_ps_draws+=draw.key.specialized_ps!=0; /* RE-SoT */
    s_ng.guest_draws++; if (draw.key.shader >= 5) s_ng.simple_draws++;
    draw.offset = s_ng.queued_bytes; draw.count = count;
    memcpy(s_ng.queued_vertices+s_ng.queued_bytes,vertices,bytes);
    s_ng.queued_bytes += bytes;
    s_ng.queued[s_ng.queued_count++] = draw;
    ng_mark(s); s_hw.draws++; s_hw.cpu_vsh_batches++; s_hw.tris += count/3;
    s_gpu.tris_drawn += count/3; s_gpu.xf_drawn += count/3;
}
static void ng_queue_alloc(void)
{
    if (s_ng.queued_vertices) return;
    s_ng.queued_vertices = (uint8_t *)malloc(HW_VB_BYTES);
    s_ng.queued_indices = (uint8_t *)malloc(HW_IB_BYTES);
    s_ng.queued = (NgDraw *)calloc(NG_DRAW_QUEUE,sizeof(NgDraw));
    s_ng.cpool = calloc(NG_DRAW_QUEUE,sizeof *s_ng.cpool);
    s_ng.ppool = calloc(NG_DRAW_QUEUE,sizeof *s_ng.ppool);
    if (!s_ng.queued_vertices || !s_ng.queued_indices || !s_ng.queued || !s_ng.cpool || !s_ng.ppool)
        ng_fail("draw queue allocation");
}
/* RE-SoT: pipeline key, viewport and scissor of a guest draw (both kinds). */
static void ng_draw_state(NgSurface *s, SDL_GPUTexture *depth, NgDraw *out)
{
    NgPipelineKey key = {0};
    SDL_GPUViewport vp;
    SDL_Rect sc;
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
#if RESOT_RUNTIME_RETAIL
    /* RE-SoT: user-requested foreground occlusion of retail light halos.
     * retail-light-query.txt identifies this final additive material after
     * the ALWAYS/LEQUAL query pair. The guest deliberately submits ALWAYS
     * for the large halo, making it cover foreground objects even when its
     * centre's visibility ratio is correct. Apply scene depth only to this
     * material's final quad; never change visibility probes or their counts,
     * particles, alpha writes, HUD, or fullscreen effect consumers. This is
     * an intentional halo presentation correction, not Xbox behavior inferred
     * from the demo. No texture heap address is used as material identity. */
    /* RE-SoT: already-LEQUAL and batched final halos still need attenuation;
     * their query probes remain excluded by the shared retail predicate. */
    if (hw_retail_halo(s->w,s->h,depth != NULL,s_ng_visibility.enabled)) {
        key.cmp = 0x203; s_ng.flare_depth_draws++;
        /* RE-SoT: the captured DXT1 image has a soft star-shaped falloff.
         * This material doubles RGB (OCW 0x00010C00) before ONE/ONE and
         * the bloom chain, clipping that falloff into a white disc. Keep
         * its original image and visibility modulation, but reduce only
         * this final halo's emission (net 0.5x texture RGB). This is a
         * presentation adjustment, not a general combiner correction. */
        out->pc.fac0[0][0] *= 0.25f;
        out->pc.fac0[0][1] *= 0.25f;
        out->pc.fac0[0][2] *= 0.25f;
    }
#endif
    vp.x = vp.y = 0; vp.w = (float)ng_px(s->w,s->sc); vp.h = (float)ng_py(s->h,s->sc); vp.min_depth = 0; vp.max_depth = 1;
    sc.x = ng_px(s_gpu.clip_x,s->sc); sc.y = ng_py(s_gpu.clip_y,s->sc);
    sc.w = ng_px(s_gpu.clip_x+s_gpu.clip_w,s->sc)-sc.x; sc.h = ng_py(s_gpu.clip_y+s_gpu.clip_h,s->sc)-sc.y;
    out->key = key; out->vp = vp; out->sc = sc;
    out->color = s->color; out->depth = depth;
    hw_color4(s_gpu.blend_color,(float *)&out->blend);
    out->pixel_scale = ((double)ng_px(s->w,s->sc)/s->w)*ng_py(s->h,s->sc)/s->h;
}

/* RE-SoT: demo evidence (demo-hud-after-err.txt and
 * hourglass-ftrace-visible2.txt) has the same exact one-stage states as
 * retail: 08040000/18140000 -> 00010C00/00000C00, final 130C0300/00001C80.
 * Enable the state whitelist for both checked XBEs; never infer an address
 * or accept additional combiner states from the other target. A switch
 * permits same-build A/B tests at identical resolution and pacing. */
static int ng_simple_combiner(void)
{
#if RESOT_RUNTIME_RETAIL || RESOT_RUNTIME_DEMO
    static int enabled = -1;
    if (enabled < 0) { const char *e = getenv("RESOT_NATIVE_SIMPLE"); enabled = !(e && *e == '0'); }
    int eligible = enabled && !s_ng_compat && s_ng.simple_ps && s_ng.simple_alpha_ps && s_gpu.rc_seen && resot_native_simple(
        s_gpu.rc.control,s_gpu.rc.stage_program,s_gpu.rc.color_icw[0],s_gpu.rc.alpha_icw[0],
        s_gpu.rc.color_ocw[0],s_gpu.rc.alpha_ocw[0],s_gpu.rc.final0,s_gpu.rc.final1,
        s_gpu.alpha_test,s_gpu.alpha_func,s_gpu.texs[0].cube);
    return eligible ? (s_gpu.alpha_test && s_gpu.alpha_func != 0x207 ? 2 : 1) : 0;
#else
    return 0;
#endif
}

/* RE-SoT: describe exactly the raw inputs consumed by fetch_attr. This is
 * target-independent NV2A state, not an inferred mesh identity or address.
 * Inline payloads retain the original path; sparse/oversized ranges bypass. */
static ResotGeometryEntry *ng_geometry_find(const uint8_t *inputs,uint32_t ninputs,uint32_t stride,
                                           ResotGeometryKey *key)
{
    uint32_t lo=65535,hi=0,n=s_gpu.idx_count;
    if(s_ng.active!=100 || !s_ng.geometry_enabled || s_gpu.inline_active || ninputs>8) return NULL;
    memset(key,0,sizeof *key);
    key->primitive=s_gpu.prim; key->inputs=ninputs; key->stride=stride; key->indices=n;
    for(uint32_t i=0;i<n;i++) { if(s_gpu.idx[i]<lo) lo=s_gpu.idx[i]; if(s_gpu.idx[i]>hi) hi=s_gpu.idx[i]; }
    for(uint32_t i=0;i<ninputs;i++) {
        const VertexAttr *at=&s_gpu.attr[inputs[i]];
        key->attributes[i][0]=inputs[i];
        memcpy(&key->attributes[i][1],at,sizeof *at);
        if(!at->offset || !at->stride || !at->size) {
            memcpy(key->current[i],s_gpu.imm_attr[inputs[i]],16);
        } else {
            uint32_t components=at->size<4?at->size:4;
            uint32_t bytes=at->type==0 || at->type==6?4:at->type==4?components:
                at->type==1 || at->type==5?components*2:components*4;
            uint64_t first=(uint64_t)at->offset+(uint64_t)lo*at->stride;
            uint64_t span=(uint64_t)(hi-lo)*at->stride+bytes;
            if(first>UINT32_MAX || span>RESOT_GEOMETRY_MAX_SOURCE ||
               !hw_mem_ok((uint32_t)first,(uint32_t)span) ||
               !resot_geometry_span(key,(uint32_t)first,(uint32_t)span)) return NULL;
        }
    }
    if(!resot_geometry_source_bytes(key)) return NULL;
    return resot_geometry_slot(&s_ng.geometry,key,s_gpu.idx);
}

/* RE-SoT: the batch's vertex program runs on the GPU (vs_uber): its distinct
 * vertices go up as their raw input registers (fetch_attr, as the CPU
 * interpreter reads them), the primitive as 16-bit indices. Mirrors
 * hw_draw_program_batch (D3D11). Returns 0 for the interpreter path. */
static int ng_draw_program_batch(void)
{
    static uint32_t stamp[65536], batch_id;
    static uint16_t remap[65536];
    const uint32_t *words;
    const uint8_t *inputs;
    uint32_t ninputs, pcount, stride, slots, n = s_gpu.idx_count, i, a, nv = 0, ni = 0;
    NgSurface *s;
    SDL_GPUTexture *depth;
    NgDraw local, *draw;
    ResotGeometryKey geometry_key; /* RE-SoT: full source/format validation. */
    ResotGeometryEntry *geometry=NULL;
    int reused=0;
    int simple;
    uint8_t *vout;
    uint16_t *iout;
    LARGE_INTEGER t0, t1;
    if (!s_ng.gpu_vsh || n < 3 || n > NV_MAX_INDICES) return 0;
    switch (s_gpu.prim) {
    case NV_PRIM_TRIANGLES: case NV_PRIM_TRIANGLE_STRIP: case NV_PRIM_TRIANGLE_FAN:
    case NV_PRIM_POLYGON: case NV_PRIM_QUADS: case NV_PRIM_QUAD_STRIP:
        break;
    default:
        return 1;                           /* points and lines: not drawn on either path */
    }
    pcount = nv2a_vsh_pack_gpu(&words, &inputs, &ninputs);
    if (!pcount) return 0;
    if (hw_skip_shadow()) return 1; /* RE-SoT: same effect policy as D3D11/CPU. */
    /* RE-SoT: use 1/2/4/8 float4 inputs instead of always uploading eight.
     * This removes unused zero stores and cuts CPU/GPU transfer bytes for
     * small programs; formats still use the exact fetch_attr conversion. */
    slots = ninputs <= 1 ? 1 : ninputs <= 2 ? 2 : ninputs <= 4 ? 4 : 8;
    /* RE-SoT: SDL 3.4.18 D3D12 caches vertex views by buffer/offset and
     * does not invalidate their stride on pipeline changes. Keep its fixed
     * pitch; Vulkan's input stride belongs to the selected pipeline. */
    if (s_ng.active == 12) slots = 8;
    stride = slots * 16;
    if ((uint64_t)n * stride > HW_VB_BYTES || (uint64_t)n * 6 + 4 > HW_IB_BYTES) return 0;
    /* The same CPU checks hw_draw_program_batch makes: the glow composite's
     * corners, and the bounds of a flat 2D batch for the widened picture. */
    if (hw_postprocess_candidate(n)) {
        Nv2aVshOutput post[4];
        float in[NV2A_VSH_INPUTS][4];
        for (i = 0; i < 4; i++) {
            for (a = 0; a < NV2A_VSH_INPUTS; a++)
                fetch_attr(&s_gpu.attr[a], s_gpu.idx[i], in[a]);
            if (!nv2a_vsh_run((const float (*)[4])in, &post[i])) break;
        }
        if (i == 4 && hw_skip_postprocess(post, 4)) return 1;
    }
    s_hw.batch_full_width = s_hw.batch_projected_screen = s_hw.batch_hud = 0; s_hw.batch_logo_right = 0; /* RE-SoT */
    s_hw.batch_projected_2d = 0;
    if (s_hw.widen > 1.0f && s_gpu.clip_w == 640 && s_gpu.clip_h >= 448) {
        float in[NV2A_VSH_INPUTS][4], lo = 1e9f, hi = -1e9f, top = 1e9f, bottom = -1e9f;
        Nv2aVshOutput o;
        uint32_t k;
        for (k = 0; k < n; k++) {
            for (a = 0; a < ninputs; a++)
                fetch_attr(&s_gpu.attr[inputs[a]], s_gpu.idx[k], in[inputs[a]]);
            if (!nv2a_vsh_run((const float (*)[4])in, &o) || fabsf(o.pos[3] - 1.0f) > 0.0001f)
                break;
            if (o.pos[0] < lo) lo = o.pos[0];
            if (o.pos[0] > hi) hi = o.pos[0];
            if (o.pos[1] < top) top = o.pos[1];
            if (o.pos[1] > bottom) bottom = o.pos[1];
        }
        if (k == n)
            hw_classify_screen(lo, hi, top, bottom);
    }

    QueryPerformanceCounter(&t0);
    EnterCriticalSection(&s_hw.lock);
    ng_boot_stage(2,"first guest resources begin (GPU vertex program)"); /* RE-SoT */
    s = ng_surface();
    if (!s) { LeaveCriticalSection(&s_hw.lock); return 1; }
    ng_queue_alloc();
    ng_queue_reserve(0,0); /* RE-SoT: hits need a draw slot, no new geometry. */
    depth = ng_depth(s);
    /* ng_constants may flush (a texture changed), so the queue position is
     * taken only afterwards, as in ng_draw. */
    memset(&local, 0, sizeof local);
    draw = &local;
    ng_constants(s,&draw->vc,&draw->pc,draw->textures);
    ng_boot_stage(4,"first guest textures/constants ready"); /* RE-SoT */
    geometry=ng_geometry_find(inputs,ninputs,stride,&geometry_key);
    if(geometry && resot_geometry_match(geometry,&geometry_key,s_gpu.idx,
            (const uint8_t*)xbox_GetMemoryOffset(),s_ng.geometry_generation)) {
        reused=1; s_ng.geometry.hits++;
        s_ng.geometry.saved_vertices+=geometry->vertices;
        s_ng.geometry.saved_bytes+=(uint64_t)geometry->vertices*stride+geometry->indices*2;
    } else {
        if(geometry) s_ng.geometry.misses++; else s_ng.geometry.bypasses++;
        ng_queue_reserve(n*stride,n*6+4); /* RE-SoT: only misses consume ring storage. */
    }
    ng_draw_state(s,depth,draw);
    draw->key.vertex_stride = stride;
    if (s_ftrace == 2 && n <= 24) {
        /* RE-SoT: generic frame traces retain stale CPU vertices when the
         * GPU runs the program. Trace a few true outputs for light/visibility
         * quads; diagnostic only, never replace the submitted GPU vertices. */
        fprintf(stderr,"[FTRACE native] n=%u color=%08X zeta=%08X mask=%X z=%u/%X/%u tex=%08X\n",
            n,s_gpu.color_offset,s_gpu.zeta_offset,draw->key.mask,
            s_gpu.depth_test,s_gpu.depth_func,s_gpu.depth_mask,s_gpu.texs[0].offset);
        for (uint32_t sample=0;sample<n && sample<4;sample++) {
            float in[NV2A_VSH_INPUTS][4]; Nv2aVshOutput out;
            for (uint32_t attr=0;attr<NV2A_VSH_INPUTS;attr++)
                fetch_attr(&s_gpu.attr[attr],s_gpu.idx[sample],in[attr]);
            if (nv2a_vsh_run((const float (*)[4])in,&out))
                fprintf(stderr,"[FTRACE native] v%u pos=%g,%g,%g,%g d0=%g,%g,%g,%g uv=%g,%g,%g,%g\n",
                    sample,out.pos[0],out.pos[1],out.pos[2],out.pos[3],
                    out.d0[0],out.d0[1],out.d0[2],out.d0[3],
                    out.tex[0][0],out.tex[0][1],out.tex[0][2],out.tex[0][3]);
        }
    }
    simple = ng_simple_combiner();
    draw->key.translated_vs=ng_translated_vs(words,pcount); /* RE-SoT: both targets. */
    s_ng.translated_vsh_draws+=draw->key.translated_vs!=NULL;
#if RESOT_RUNTIME_RETAIL
    {
        static uint32_t checked_generation;
        static uint32_t compact_words[NV2A_VSH_SLOTS * 4];
        static int eligible;
        static uint32_t compact_count; /* RE-SoT: discard empty interpreter iterations. */
        uint32_t generation = nv2a_vsh_program_generation();
        if (generation != checked_generation) {
            eligible = resot_native_pack_small_vsh(words,pcount,compact_words);
            if (eligible) compact_count = resot_native_trim_small_vsh(compact_words,pcount);
            checked_generation = generation;
        }
        /* RE-SoT: this variant retains four packed inputs and only the
         * outputs consumed by the one-stage fragment shaders: d0/fog/t0. */
        draw->key.small_vsh = !draw->key.translated_vs && s_ng.small_vs && eligible && ninputs <= 4 && simple;
        if (draw->key.small_vsh) { words = compact_words; pcount = compact_count; } /* RE-SoT */
        s_ng.small_vsh_draws += draw->key.small_vsh;
    }
#endif
    draw->key.shader = simple ? (simple == 2 ? 7 : 5) : 4; /* RE-SoT: exact opaque fragment specialization. */
    if(draw->key.shader==4) draw->key.specialized_ps=ng_specialized_ps(&draw->pc); /* RE-SoT */
    s_ng.spec_ps_draws+=draw->key.specialized_ps!=0; /* RE-SoT */
    s_ng.guest_draws++; if (draw->key.shader >= 5) s_ng.simple_draws++;
    draw->vc.fogp[0] = s_gpu.fog_param[0]; draw->vc.fogp[1] = s_gpu.fog_param[1];
    draw->vc.fogp[2] = (float)s_gpu.fog_mode; draw->vc.fogp[3] = s_gpu.fog_enable ? 1.0f : 0.0f;

    if(reused) {
        nv=geometry->vertices; ni=geometry->indices;
        draw->offset=geometry->vertex_offset; draw->first_index=geometry->index_offset/2;
        draw->reused_geometry=1;
    } else {
    vout = s_ng.queued_vertices + s_ng.queued_bytes;
    iout = (uint16_t *)(s_ng.queued_indices + s_ng.queued_index_bytes);
    if (++batch_id == 0) { memset(stamp, 0, sizeof stamp); batch_id = 1; }
    for (i = 0; i < n; i++) {
        uint16_t ix = s_gpu.idx[i];
        float (*slot)[4];
        if (stamp[ix] == batch_id) continue;
        stamp[ix] = batch_id;
        remap[ix] = (uint16_t)nv;
        slot = (float (*)[4])(vout + (size_t)nv * stride);
        for (a = 0; a < ninputs; a++)
            fetch_attr(&s_gpu.attr[inputs[a]], ix, slot[a]);
        for (; a < slots; a++)
            slot[a][0] = slot[a][1] = slot[a][2] = slot[a][3] = 0.0f;
        nv++;
    }
#define NG_IDX(x, y, z) do { iout[ni] = remap[s_gpu.idx[x]]; \
        iout[ni + 1] = remap[s_gpu.idx[y]]; iout[ni + 2] = remap[s_gpu.idx[z]]; \
        ni += 3; } while (0)
    switch (s_gpu.prim) {
    case NV_PRIM_TRIANGLES:
        for (i = 0; i + 2 < n; i += 3) NG_IDX(i, i + 1, i + 2);
        break;
    case NV_PRIM_TRIANGLE_STRIP:
        for (i = 0; i + 2 < n; i++) {
            if (i & 1) NG_IDX(i + 1, i, i + 2);      /* keep the winding */
            else       NG_IDX(i, i + 1, i + 2);
        }
        break;
    case NV_PRIM_TRIANGLE_FAN:
    case NV_PRIM_POLYGON:
        for (i = 1; i + 1 < n; i++) NG_IDX(0, i, i + 1);
        break;
    case NV_PRIM_QUADS:
        for (i = 0; i + 3 < n; i += 4) {
            NG_IDX(i, i + 1, i + 2);
            NG_IDX(i, i + 2, i + 3);
        }
        break;
    default:                                         /* quad strip */
        for (i = 0; i + 3 < n; i += 2) {
            NG_IDX(i, i + 1, i + 3);
            NG_IDX(i, i + 3, i + 2);
        }
        break;
    }
#undef NG_IDX
    /* RE-SoT: offsets are reserved in this generation before queuing. The
     * single copy pass uploads all misses before any cached/fresh draws. */
    if(ni && geometry && resot_geometry_store(&s_ng.geometry,geometry,&geometry_key,s_gpu.idx,
            (const uint8_t*)xbox_GetMemoryOffset())) {
        geometry->generation=s_ng.geometry_generation;
        geometry->vertex_offset=((s_ng.vertex_offset+127u)&~127u)+s_ng.queued_bytes;
        geometry->index_offset=s_ng.index_offset+s_ng.queued_index_bytes;
        geometry->vertices=nv; geometry->indices=ni;
    }
    draw->offset=s_ng.queued_bytes; draw->first_index=s_ng.queued_index_bytes/2;
    s_ng.queued_bytes+=nv*stride;
    s_ng.queued_index_bytes+=(ni*2+3)&~3u;
    }
    if (ni) {
        uint32_t cgen = nv2a_vsh_constant_generation(), pgen = nv2a_vsh_program_generation();
        if (!s_ng.ccount || s_ng.c_gen != cgen) {
            memcpy(s_ng.cpool[s_ng.ccount++], nv2a_vsh_constants(), sizeof s_ng.cpool[0]);
            s_ng.c_gen = cgen;
        }
        if (!s_ng.pcount || s_ng.p_gen != pgen || s_ng.p_small != draw->key.small_vsh) { /* RE-SoT */
            memcpy(s_ng.ppool[s_ng.pcount++], words, (size_t)pcount * 16);
            s_ng.p_gen = pgen;
            s_ng.p_small = draw->key.small_vsh; /* RE-SoT: distinguish the remapped snapshot. */
        }
        draw->cslot = s_ng.ccount - 1; draw->pslot = s_ng.pcount - 1; draw->pcount = pcount;
        draw->count=nv; draw->index_count=ni; /* RE-SoT: cache hits retain their absolute ranges. */
        s_ng.queued[s_ng.queued_count++] = local;
        ng_mark(s); s_hw.draws++; s_hw.gpu_vsh_batches++; s_hw.tris += ni/3;
        s_gpu.tris_drawn += ni/3; s_gpu.xf_drawn += ni/3;
        s_hw_stat_verts += nv;
    }
    LeaveCriticalSection(&s_hw.lock);
    QueryPerformanceCounter(&t1);
    s_hw_stat_draw_ticks += (uint64_t)(t1.QuadPart - t0.QuadPart);
    return 1;
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
    pipeline = ng_pipeline(&key,0);
    if (!pipeline) ng_fail("create blit pipeline");
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
        /* RE-SoT: host fills replaced slot zero outside the guest cache. */
        s_ng.pc_valid = 0;
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
    if ((param&3) && x1 > x0 && y1 > y0 && ng_depth(s)) {
        SDL_GPUDepthStencilTargetInfo ds = {0};
        SDL_GPURenderPass *pass;
        ds.texture = s->depth;
        ds.load_op = (param&1) ? SDL_GPU_LOADOP_CLEAR : SDL_GPU_LOADOP_LOAD;
        ds.stencil_load_op = (param&2) ? SDL_GPU_LOADOP_CLEAR : SDL_GPU_LOADOP_LOAD;
        ds.store_op = ds.stencil_store_op = SDL_GPU_STOREOP_STORE;
        ds.clear_depth = (float)(hw_zmax_bits() == 65535 ? s_gpu.zstencil_clear&65535 : s_gpu.zstencil_clear>>8)/hw_zmax_bits();
        ds.clear_stencil = s_gpu.zstencil_clear&255;
        if (x0 == 0 && y0 == 0 && x1 >= s->w && y1 >= s->h) {
            pass = SDL_BeginGPURenderPass(ng_cmd(), NULL, 0, &ds);
            if (!pass) ng_fail("clear depth");
            SDL_EndGPURenderPass(pass);
        } else {
            /* RE-SoT: load-op CLEAR ignores scissor. Draw a depth-only
             * fullscreen triangle through the requested rectangle instead.
             * A constant viewport depth supplies the exact clear value. */
            NgPipelineKey key = {0};
            SDL_GPUColorTargetInfo ct = {0};
            SDL_GPUViewport vp = {0,0,(float)ng_px(s->w,s->sc),(float)ng_py(s->h,s->sc),ds.clear_depth,ds.clear_depth};
            SDL_Rect sc = {(int)ng_px(x0,s->sc),(int)ng_py(y0,s->sc),
                (int)(ng_px(x1,s->sc)-ng_px(x0,s->sc)),(int)(ng_py(y1,s->sc)-ng_py(y0,s->sc))};
            HwPsConst pc = {0};
            key.shader = 2; key.format = SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM;
            key.depth = 2 | ((param&1) != 0); key.write = (param&1) != 0;
            key.cmp = 0x207; key.clear_stencil = (param&2) != 0;
            ct.texture = s->color; ct.load_op = SDL_GPU_LOADOP_LOAD; ct.store_op = SDL_GPU_STOREOP_STORE;
            ds.load_op = ds.stencil_load_op = SDL_GPU_LOADOP_LOAD;
            SDL_GPUGraphicsPipeline *pipeline = ng_pipeline(&key,0);
            if (!pipeline) ng_fail("create depth-clear pipeline");
            pass = SDL_BeginGPURenderPass(ng_cmd(),&ct,1,&ds);
            if (!pass) ng_fail("rectangle depth clear");
            SDL_BindGPUGraphicsPipeline(pass,pipeline);
            SDL_SetGPUViewport(pass,&vp); SDL_SetGPUScissor(pass,&sc);
            SDL_SetGPUStencilReference(pass,ds.clear_stencil);
            SDL_PushGPUFragmentUniformData(s_ng.cmd,0,&pc,sizeof pc);
            s_ng.pc_valid = 0;
            SDL_DrawGPUPrimitives(pass,3,1,0,0);
            SDL_EndGPURenderPass(pass);
        }
    }
    if ((param&0xF0) && x1 > x0 && y1 > y0) {
        float color[4];
        SDL_GPUViewport vp = {0, 0, (float)ng_px(s->w,s->sc), (float)ng_py(s->h,s->sc), 0, 1};
        SDL_Rect sc;
        hw_color4(s_gpu.clear_color, color);
        sc.x = ng_px(x0,s->sc); sc.y = ng_py(y0,s->sc);
        sc.w = ng_px(x1,s->sc)-sc.x; sc.h = ng_py(y1,s->sc)-sc.y;
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
#if defined(__ANDROID__)
    /* RE-SoT: without host overlays and letterboxing, preserve the frame at
     * its existing internal resolution, then upscale once in ng_present.
     * The old path upscaled into a full-display intermediate, stored it,
     * and sampled all those pixels again. An exact ordered copy retains
     * deferred-present lifetime without lowering the game's resolution. */
    if (s_ng.front) {
        const uint32_t *unused_pixels;
        uint32_t ow,oh,orct[4],oserial;
        uint32_t fw=ng_px(s_ng.front->w,s_ng.front->sc), fh=ng_py(s_ng.front->h,s_ng.front->sc);
        int64_t aspect_error=(int64_t)fw*bh-(int64_t)fh*bw;
        if (fw<=bw && fh<=bh && llabs(aspect_error)<=(int64_t)bw &&
            !xbox_FramebufferOverlayGet(&unused_pixels,&ow,&oh,orct,&oserial) &&
            !xbox_FramebufferDebugPanelGet(&unused_pixels,&ow,&oh)) {
            SDL_GPUTextureLocation from={0},to={0};
            SDL_GPUCopyPass *copy;
            if (!s_ng.composed || s_ng.compose_w!=fw || s_ng.compose_h!=fh) {
                if(s_ng.composed) SDL_ReleaseGPUTexture(s_ng.device,s_ng.composed);
                s_ng.composed=ng_image(fw,fh,0,1,SDL_GPU_TEXTUREUSAGE_COLOR_TARGET|SDL_GPU_TEXTUREUSAGE_SAMPLER,
                                        SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM);
                s_ng.compose_w=fw; s_ng.compose_h=fh;
                fprintf(stderr,"[POWER] exact frame snapshot %ux%u, display %ux%u\n",fw,fh,bw,bh); /* RE-SoT: observe use, not assumed power savings. */
            }
            from.texture=s_ng.front->color; to.texture=s_ng.composed;
            copy=SDL_BeginGPUCopyPass(ng_cmd());
            if(!copy) ng_fail("frame snapshot");
            SDL_CopyGPUTextureToTexture(copy,&from,&to,fw,fh,1,true);
            SDL_EndGPUCopyPass(copy);
            s_ng.movie_log=0; s_ng.movie_composes=0;
            s_hw.pending_present=1;
            return;
        }
    }
#endif
    if (!s_ng.composed || bw != s_ng.compose_w || bh != s_ng.compose_h) {
        if (s_ng.composed) SDL_ReleaseGPUTexture(s_ng.device, s_ng.composed);
        s_ng.composed = ng_image(bw,bh,0,1,SDL_GPU_TEXTUREUSAGE_COLOR_TARGET | SDL_GPU_TEXTUREUSAGE_SAMPLER,
                                 SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM);
        s_ng.compose_w = bw; s_ng.compose_h = bh;
    }
    /* RE-SoT: combine the background clear with the front-surface draw.
     * Tile GPUs otherwise store and reload a full display-sized attachment. */
    if (!s_ng.front) {
    target.texture = s_ng.composed; target.load_op = SDL_GPU_LOADOP_CLEAR;
    target.store_op = SDL_GPU_STOREOP_STORE; target.clear_color.a = 1;
    pass = SDL_BeginGPURenderPass(ng_cmd(), &target, 1, NULL);
    if (!pass) ng_fail("compose clear");
    SDL_EndGPURenderPass(pass);
    }
    if (bw > bh*s_hw.aspect) { ph = (float)bh; pw = bh*s_hw.aspect; }
    else { pw = (float)bw; ph = bw/s_hw.aspect; }
    px = (bw-pw)*0.5f; py = (bh-ph)*0.5f;
    vp.x = px; vp.y = py; vp.w = pw; vp.h = ph; vp.min_depth = 0; vp.max_depth = 1;
    if (s_ng.front)
        ng_blit(s_ng.composed, SDL_GPU_TEXTUREFORMAT_B8G8R8A8_UNORM, s_ng.front->color, &vp, NULL, 1, 15, NULL, 1);
    if (xbox_FramebufferOverlayGet(&pixels, &w, &h, rect, &serial) && w && h) {
        /* RE-SoT: movies often issue no FLIP_STALL; guest FPS cannot measure
         * their presenter. Report compositions, not claimed decoded frames. */
        DWORD now = GetTickCount();
        if (!s_ng.movie_log) s_ng.movie_log = now;
        ++s_ng.movie_composes;
        if (now-s_ng.movie_log >= 1000) {
            fprintf(stderr,"[HW native] movie composition %.1f Hz\n",
                    s_ng.movie_composes*1000.0/(now-s_ng.movie_log));
            s_ng.movie_log = now; s_ng.movie_composes = 0;
        }
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
    else { s_ng.movie_log = 0; s_ng.movie_composes = 0; }
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
#if defined(__ANDROID__)
    {
        /* RE-SoT: an Android SurfaceView can be destroyed while hidden.
         * Adreno then reports an abandoned BufferQueue without reliably
         * returning SURFACE_LOST on SDL's old swapchain acquisition loop.
         * Reclaim only the presentation window, retaining all guest images,
         * shaders, queries and the independent composed frame. Executor only. */
        extern void resot_android_wait_foreground(void);
        extern unsigned resot_android_resume_generation(void);
        unsigned generation;
        resot_android_wait_foreground();
        generation=resot_android_resume_generation();
        if (generation != s_ng.resume_generation) {
            if (!SDL_GetPointerProperty(SDL_GetWindowProperties(s_ng.window),
                    SDL_PROP_WINDOW_ANDROID_WINDOW_POINTER,NULL)) return;
            ng_submit();
            SDL_ReleaseWindowFromGPUDevice(s_ng.device,s_ng.window);
            if (!SDL_ClaimWindowForGPUDevice(s_ng.device,s_ng.window))
                ng_fail("reclaim Android presentation surface");
            s_ng.present_mode=-1;
            s_ng.resume_generation=generation;
            fprintf(stderr,"[POWER] Vulkan presentation surface reclaimed (%u)\n",generation);
        }
    }
#endif
    /* RE-SoT: Android may temporarily lose its surface while backgrounded.
     * Defer presentation until it is usable instead of treating that as fatal. */
    if (SDL_GetWindowFlags(s_ng.window) & SDL_WINDOW_MINIMIZED) return;
    QueryPerformanceCounter(&before);
    /* RE-SoT: with VSync off and no tearing support, mailbox still lets the
     * game run unthrottled; plain VSync would silently ignore the option. */
    if (!SDL_WindowSupportsGPUPresentMode(s_ng.device,s_ng.window,mode))
        mode = !enabled && SDL_WindowSupportsGPUPresentMode(s_ng.device,s_ng.window,SDL_GPU_PRESENTMODE_MAILBOX)
            ? SDL_GPU_PRESENTMODE_MAILBOX : SDL_GPU_PRESENTMODE_VSYNC;
    if (s_ng.present_mode != (int)mode) {
        ng_submit();
        /* RE-SoT: SDL's composition/present support queries can fail while an
         * Android surface is being replaced. Retain the last valid mode and
         * retry next frame; SDL rejects unsupported composition before mutation. */
        if (!SDL_WindowSupportsGPUSwapchainComposition(s_ng.device,s_ng.window,SDL_GPU_SWAPCHAINCOMPOSITION_SDR)) return;
        if (!SDL_SetGPUSwapchainParameters(s_ng.device,s_ng.window,SDL_GPU_SWAPCHAINCOMPOSITION_SDR,mode)) {
            static DWORD last_warning;
            DWORD now=GetTickCount();
            if (!last_warning || now-last_warning>5000) {
                fprintf(stderr,"[HW native] swapchain change deferred: %s\n",SDL_GetError());
                last_warning=now;
            }
            return;
        }
        s_ng.present_mode = (int)mode;
    }
    /* RE-SoT: Vulkan has growing descriptor pools and can submit the guest
     * rendering and presentation together. D3D12 must reserve a fresh heap
     * before acquiring an image, or a budget flush could present it early. */
    if (s_ng.active == 12) ng_submit();
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
    {
        /* RE-SoT: keep new driver-compiled pipelines for the next run; the
         * save is skipped when nothing was created since the last one. */
        static DWORD last_save;
        DWORD t = GetTickCount();
        if (s_ng_cache_save && t - last_save >= 5000) {
            last_save = t;
            /* RE-SoT: 2.7 MB through Android's FUSE storage; the compiler
             * thread writes it, not the executor holding s_hw.lock. */
            if (s_ngc.running) {
                SDL_LockMutex(s_ngc.lock);
                s_ngc.save = 1;
                SDL_SignalCondition(s_ngc.cond);
                SDL_UnlockMutex(s_ngc.lock);
            } else if (!s_ng_cache_save(s_ng.device))
                fprintf(stderr, "[HW native] pipeline cache save failed: %s\n", SDL_GetError());
        }
    }
    if (s_ng.largest) s_ng.front = s_ng.largest;
    s_ng.largest = NULL; s_hw.frame++;
    hw_diag_sample(); /* RE-SoT: native CPU/GPU timings feed the existing F5/F6 UI. */
    now = GetTickCount();
    if (!last_log) { last_log = now; last_frame = s_hw.frame; last_draws = s_hw.draws; }
    else if (now-last_log >= 5000) {
        /* RE-SoT: optional same-scene A/B. Cache data stays valid while off;
         * re-enabling still checks every source byte and ring generation. */
        const char *geometry_control=getenv("RESOT_NATIVE_GEOMETRY_CONTROL");
        if(geometry_control) {
            FILE *f=fopen(geometry_control,"r");
            if(f) { int value=fgetc(f); fclose(f);
                if(value=='0' || value=='1') s_ng.geometry_enabled=value=='1'; }
        }
        /* RE-SoT: developer-only A/B: bit 0 selects payload batching in the
         * executor, bit 1 disables query pooling. No probe in ordinary runs. */
        const char *control = getenv("RESOT_PB_PAYLOAD_CONTROL");
        if (control) {
            FILE *f = fopen(control,"r");
            if (f) { int mode = fgetc(f); fclose(f);
                if (mode >= '0' && mode <= '3') s_ng_visibility.pool_disabled = ((mode-'0') & 2) != 0; }
        }
        uint32_t frames = s_hw.frame-last_frame;
        fprintf(stderr,"[HW native] %s %.1f fps; %.1f draws/frame; %llu total draws (vertex programs on the %s)\n",
                s_ng.active == 12 ? "D3D12" : "Vulkan",frames*1000.0/(now-last_log),
                frames ? (double)(s_hw.draws-last_draws)/frames : 0,(unsigned long long)s_hw.draws,
                s_ng.gpu_vsh ? "GPU" : "CPU");
        fprintf(stderr,"[HW native] simple combiners: %llu/%llu guest draws\n",
            (unsigned long long)s_ng.simple_draws,(unsigned long long)s_ng.guest_draws); /* RE-SoT: verify coverage, not assumed speedup. */
        fprintf(stderr,"[HW native] geometry cache %s: %llu hits, %llu misses, %llu bypasses, %u source bytes, gen %u, %llu upload bytes avoided\n",
            s_ng.geometry_enabled?"on":"off",(unsigned long long)s_ng.geometry.hits,
            (unsigned long long)s_ng.geometry.misses,(unsigned long long)s_ng.geometry.bypasses,
            s_ng.geometry.bytes,s_ng.geometry_generation,(unsigned long long)s_ng.geometry.saved_bytes); /* RE-SoT: measure reuse separately from FPS. */
        fprintf(stderr,"[HW native] small-register programs: %llu/%llu guest draws\n",
            (unsigned long long)s_ng.small_vsh_draws,(unsigned long long)s_ng.guest_draws); /* RE-SoT: distinguish eligibility from speedup. */
        fprintf(stderr,"[HW native] specialized combiners: %llu/%llu guest draws, %u cached variants\n",
            (unsigned long long)s_ng.spec_ps_draws,(unsigned long long)s_ng.guest_draws,s_ng.spec_ps_count); /* RE-SoT */
        fprintf(stderr,"[HW native] direct vertex programs admitted %llu/%llu guest draws\n",
            (unsigned long long)s_ng.translated_vsh_draws,(unsigned long long)s_ng.guest_draws); /* RE-SoT: admission is not compilation success. */
        fprintf(stderr,"[HW native] reference pipeline draws while translating: %llu\n",
            (unsigned long long)s_ng.reference_draws); /* RE-SoT: distinguish temporary fallbacks. */
        if (s_ng.rejected_draws)
            fprintf(stderr,"[HW native] draws skipped, no program accepted by the driver: %llu\n",
                (unsigned long long)s_ng.rejected_draws);
        fprintf(stderr,"[HW native] cold reference waits: %llu, %.1f ms total (draws preserved)\n",
            (unsigned long long)s_ng.pipeline_waits,
            1000.0*s_ng.pipeline_wait_ticks/SDL_GetPerformanceFrequency()); /* RE-SoT */
        fprintf(stderr,"[HW native] retail depth-tested halo draws: %llu\n",
            (unsigned long long)s_ng.flare_depth_draws); /* RE-SoT: probes are excluded by enabled query state. */
        if (s_ngc.async) /* RE-SoT: what background compilation cost in skipped draws. */
            fprintf(stderr,"[HW native] background pipelines: %d compiled, %d guest draws skipped while compiling\n",
                    SDL_GetAtomicInt(&s_ngc.compiled),SDL_GetAtomicInt(&s_ngc.skipped));
        /* RE-SoT: expose the existing F6 timings on Android as well, where
         * there is no diagnostics panel. Avoid inferring CPU/GPU bottlenecks
         * from FPS alone. Values are the latest half-second sample. */
        {
            extern int xbox_DiagRenderer(double *, int);
            double timing[15];
            xbox_DiagRenderer(timing,15);
            fprintf(stderr,"[HW native] ms/frame: vertex %.2f draw %.2f executor %.2f present %.2f title %.2f; textures %.1f vertices %.0f\n",
                    timing[8],timing[9],timing[10],timing[11],timing[12],timing[6],timing[7]);
        }
#if RESOT_RUNTIME_RETAIL
        fprintf(stderr,"[HW native] visibility: %llu queries, %llu/%llu reports completed\n",
                (unsigned long long)s_ng_visibility.queries,(unsigned long long)s_ng_visibility.completed,
                (unsigned long long)s_ng_visibility.reports);
        /* RE-SoT: distinguish real resource reuse from query/draw omission. */
        fprintf(stderr,"[HW native] visibility resources: %llu allocated, %llu reused, %u idle\n",
                (unsigned long long)s_ng_visibility.allocated,(unsigned long long)s_ng_visibility.reused,
                s_ng_visibility.idle_count);
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
    sw = ng_px(s_ng.front->w,s_ng.front->sc); sh = ng_py(s_ng.front->h,s_ng.front->sc);
    pitch = (sw+63)&~63u; /* RE-SoT: D3D12 texture transfer rows align to 256 bytes. */
    ci.usage = SDL_GPU_TRANSFERBUFFERUSAGE_DOWNLOAD; ci.size = pitch*sh*4;
    transfer = SDL_CreateGPUTransferBuffer(s_ng.device,&ci);
    if (!transfer) return 0;
    src.texture = s_ng.front->color; src.w = sw; src.h = sh; src.d = 1;
    out.transfer_buffer = transfer; out.pixels_per_row = pitch; out.rows_per_layer = sh;
    if (s_ng_visibility.pending) ng_submit_encoded(); /* RE-SoT: query fences retain their own ownership. */
    copy = SDL_BeginGPUCopyPass(ng_cmd()); SDL_DownloadFromGPUTexture(copy,&src,&out); SDL_EndGPUCopyPass(copy);
    fence = SDL_SubmitGPUCommandBufferAndAcquireFence(s_ng.cmd);
    s_ng.cmd = NULL; s_ng.vertex_offset = s_ng.index_offset = 0; s_ng.command_samplers = 0;
    s_ng.vc_valid = s_ng.pc_valid = 0;
    s_ng.last_cslot = s_ng.last_pslot = -1;
    if (!fence) ng_fail("readback fence");
    if (!SDL_WaitForGPUFences(s_ng.device,true,&fence,1)) ng_fail("wait readback");
    mapped = (const uint32_t *)SDL_MapGPUTransferBuffer(s_ng.device,transfer,false);
    if (!mapped) ng_fail("map readback");
    for (y = 0; y < h; y++) for (x = 0; x < w; x++) dst[(size_t)y*w+x] = mapped[(size_t)(y*sh/h)*pitch+x*sw/w];
    SDL_UnmapGPUTransferBuffer(s_ng.device,transfer);
    SDL_ReleaseGPUFence(s_ng.device,fence); SDL_ReleaseGPUTransferBuffer(s_ng.device,transfer);
    return 1;
}
