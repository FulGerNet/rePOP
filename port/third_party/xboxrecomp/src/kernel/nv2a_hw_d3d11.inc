/**
 * RE-SoT: hardware rasterisation for the pushbuffer executor (Direct3D 11).
 *
 * Included by nv2a_pb_exec.c, after its state and helpers, so it reads the
 * executor's decoded NV2A state (s_gpu) directly. The division of labour:
 *
 *   - the executor keeps decoding methods and keeps running vertex programs on
 *     the CPU (nv2a_vsh_interp.c), exactly as for the software rasteriser;
 *   - this file takes the transformed vertices of a batch and draws them with
 *     the host GPU instead of filling pixels on the CPU. The register
 *     combiners are evaluated by one pixel shader that interprets the
 *     combiner control words (a port of nv2a_combiner.c), so no shader is
 *     generated per state.
 *
 * Surfaces live on the host GPU and are keyed by the guest surface offset; a
 * texture stage that names a surface offset samples that render target.
 * Ordinary textures are decoded from guest memory through sample_tex(), the
 * same decoder the software path uses, and cached.
 *
 * Enabled with RECOMP_HW=1. RECOMP_HW_SCALE=<n> renders at n times the guest
 * resolution (default 2). RECOMP_HW_NOCULL=1 ignores the cull state.
 *
 * Vertex programs run on the host GPU as well: each distinct program is
 * translated to HLSL once (nv2a_vsh_emit_hlsl) and fed the raw attributes.
 * RECOMP_HW_CPU_VSH=1 goes back to the interpreter, for comparison.
 *
 * RECOMP_HW_ASPECT=<w:h or ratio> widens the picture: every host surface gets
 * the extra width, vertices that arrive with w == 1 (the title's 2D) are drawn
 * at their 4:3 size around the centre, and the title's own projection is
 * widened by the target's hooks (src/<target>/target_hooks.c): Hor+, more
 * picture at the sides only.
 * RECOMP_HW_VSYNC=0 presents without waiting; RECOMP_HW_FULLSCREEN=1 makes
 * the window borderless over its monitor (0: a window; Alt+Enter or F11
 * switches while running).
 *
 * Known gaps: stencil, bump-env and dot-product
 * texture modes, point/line primitives, guest-visible framebuffer contents
 * (nothing is copied back to guest memory).
 */
#if defined(_WIN32) || defined(__ANDROID__)

/* RE-SoT: Windows builds both encoders (Direct3D 11 and the native SDL GPU
 * one in nv2a_hw_native.inc). Android builds only the native encoder, on
 * Vulkan: the NV2A state, the surface bookkeeping and the dispatch below are
 * shared, every Direct3D 11 body is inside RESOT_HW_D3D11. */
#if defined(_WIN32)
#define RESOT_HW_D3D11 1
#else
#define RESOT_HW_D3D11 0
#endif

#if RESOT_HW_D3D11
#define COBJMACROS
#include <d3d11.h>
#include <d3dcompiler.h>
#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "d3dcompiler.lib")
#pragma comment(lib, "dxguid.lib")
#else
/* The shared state keeps its Direct3D 11 members as opaque pointers, so its
 * layout and every shared field are the same on both hosts. */
typedef struct ID3D11Device ID3D11Device;
typedef struct ID3D11DeviceContext ID3D11DeviceContext;
typedef struct IDXGISwapChain IDXGISwapChain;
typedef struct ID3D11Texture2D ID3D11Texture2D;
typedef struct ID3D11RenderTargetView ID3D11RenderTargetView;
typedef struct ID3D11ShaderResourceView ID3D11ShaderResourceView;
typedef struct ID3D11DepthStencilView ID3D11DepthStencilView;
typedef struct ID3D11VertexShader ID3D11VertexShader;
typedef struct ID3D11PixelShader ID3D11PixelShader;
typedef struct ID3D11InputLayout ID3D11InputLayout;
typedef struct ID3D11Buffer ID3D11Buffer;
typedef struct ID3D11SamplerState ID3D11SamplerState;
typedef struct ID3D11BlendState ID3D11BlendState;
typedef struct ID3D11DepthStencilState ID3D11DepthStencilState;
typedef struct ID3D11RasterizerState ID3D11RasterizerState;
typedef struct ID3D10Blob ID3DBlob;
#endif

/* RE-SoT: native D3D12/Vulkan use a separate explicit command encoder. */
static int ng_init(const char *backend);
static int ng_active(void);
static void ng_visibility_poll(void);
static void ng_visibility_method(uint32_t method, uint32_t value, uint64_t stamp);

static void ng_clear(uint32_t param);
static void ng_compose(void);
static void ng_present(int sync);
static void ng_flip(void);
static int ng_readback(uint32_t *dst, uint32_t w, uint32_t h);
static int ng_postprocess_source(uint32_t offset);
static void hw_diag_sample(void); /* RE-SoT: shared host diagnostics, either GPU encoder. */
void nv2a_hw_flush_present(void); /* RE-SoT: native encoder shares deferred presentation. */
static volatile LONG s_hw_backend;
int nv2a_hw_backend(void) { return (int)InterlockedCompareExchange(&s_hw_backend, 0, 0); }

extern void *xbox_FramebufferWindowHandle(void);
extern void  xbox_FramebufferWindowHwMode(int on);
/* RE-SoT: end-of-submission presentation leaves decoded fences unblocked. */
extern int   xbox_FramebufferDeferPresent(void);
extern void  xbox_FramebufferLimitFrame(void);
extern int   xbox_FramebufferPostProcessing(void); /* RE-SoT: live graphics option. */
/* RE-SoT: the F5 panel is host UI, drawn after the title's movie overlay. */
extern int   xbox_FramebufferDebugPanelGet(const uint32_t **px, uint32_t *w,
                                          uint32_t *h);
extern int   xbox_FramebufferOverlayGet(const uint32_t **px, uint32_t *w,
                                        uint32_t *h, uint32_t rect[4],
                                        uint32_t *serial);

#define HW_MAX_SURFACES 32
#define HW_MAX_DEPTHS   16
#define HW_MAX_TEXTURES 1024
#define HW_MAX_VERTS    (NV_MAX_INDICES * 3)
#if RESOT_RUNTIME_DEMO
/* RE-SoT: larger rings on the demo, so batches reused across frames (see
 * HwReuse) stay in them for many frames before a wrap discards them. */
#define HW_VB_BYTES     (64u << 20)     /* vertex ring, appended NO_OVERWRITE */
#define HW_IB_BYTES     (8u << 20)      /* index ring, likewise */
#else
#define HW_VB_BYTES     (16u << 20)     /* vertex ring, appended NO_OVERWRITE */
#define HW_IB_BYTES     (2u << 20)      /* index ring, likewise */
#endif
#define HW_VSP_MAX      192             /* translated vertex programs kept */
#define HW_VSP_SLOTS    8               /* attributes a translated program reads */

typedef struct {
    uint32_t offset, w, h;              /* guest (resolved) address and size */
    uint32_t sc;                        /* host pixels per guest pixel (before widening) */
    ID3D11Texture2D *tex;
    ID3D11RenderTargetView *rtv;
    ID3D11ShaderResourceView *srv;
    uint32_t drawn_frame;
} HwSurface;

typedef struct {
    uint32_t offset, w, h;
    ID3D11Texture2D *tex;
    ID3D11DepthStencilView *dsv;
} HwDepth;

typedef struct {
    uint32_t offset, fmt, w, h, pitch, palette;
    uint32_t cube, levels; /* RE-SoT: resource shape is part of the cache key. */
    uint32_t hash, checked_frame, used_frame;
    ID3D11Texture2D *tex;
    ID3D11ShaderResourceView *srv;
} HwTexture;

typedef struct {
    float pos[4], d0[4], d1[4], fog[4], tex[4][4];
} HwVertex;

/* Vertex-shader constants; layout mirrors cbuffer VSC below. */
typedef struct {
    float vp[4];                        /* 2/w, 2/h, 1/zmax */
    float fogp[4];                      /* fog param 0, param 1, mode, enable */
    float ws[4];                        /* 2D squeeze, surface width, edge margin */
    float pad[4];
    float cur[NV_VERTEX_ATTRS][4];      /* RE-SoT: attribute values with no array */
    float c[NV2A_VSH_CONSTANTS][4];     /* the program's constants */
} HwVsConst;

/* One translated vertex program: the NV2A program by content, and which
 * attribute each of its input slots carries. */
typedef struct {
    uint32_t key, mask;
    ID3D11VertexShader *vs;             /* NULL: translation failed */
    volatile LONG pending;              /* RE-SoT: compiling in the background */
    ID3DBlob *volatile ready;           /* the background compile's result */
} HwVsp;

/* Pixel-shader constants; layout mirrors cbuffer PSC below. */
typedef struct {
    uint32_t cw[8][4];
    float    fac0[8][4], fac1[8][4];
    uint32_t ctl[4];
    uint32_t atest[4];
    float    finc0[4], finc1[4], fogc[4];
    float    tscale[4][4];
    uint32_t misc[4];
} HwPsConst;

static struct {
    int tried, ok, scale, nocull;
    int fx_scale;                       /* the same for surfaces smaller than the display */
    int vsync, cpu_vsh;
    float aspect;                       /* shown width / height */
    float widen;                        /* host surface width multiple over 4:3 */
    CRITICAL_SECTION lock;
    HWND hwnd;
    ID3D11Device *dev;
    ID3D11DeviceContext *ctx;
    IDXGISwapChain *swap;
    ID3D11RenderTargetView *bb_rtv;
    uint32_t bb_w, bb_h;
    ID3D11VertexShader *vs, *vs_blit;
    ID3D11PixelShader *ps, *ps_blit, *ps_solid;
    ID3D11InputLayout *layout, *layout_prog;
    ID3D11Buffer *vb, *ib, *vs_cb, *ps_cb;
    uint32_t vb_off, ib_off;
    HwVsp vsp[HW_VSP_MAX];
    int nvsp;
    HwVsConst vs_last;                  /* what vs_cb holds */
    uint32_t vs_last_gen;
    int vs_last_full, vs_last_valid;
    HwPsConst ps_last;
    int ps_last_valid;
    ID3D11SamplerState *samp[6][6][2];
    ID3D11SamplerState *samp_blit;
    ID3D11ShaderResourceView *white;
    struct { uint64_t key; ID3D11BlendState *st; } blend[64];
    int nblend;
    struct { uint32_t key; ID3D11DepthStencilState *st; } ds[32];
    int nds;
    ID3D11RasterizerState *rs[3];        /* none, back, front (front = CW) */
    ID3D11RasterizerState *rs_ccw[3];    /* same with front = CCW */
    ID3D11RasterizerState *rs_blit;
    HwSurface surf[HW_MAX_SURFACES];
    HwDepth depth[HW_MAX_DEPTHS];
    HwTexture *texs;                     /* HW_MAX_TEXTURES, open addressing */
    HwSurface *front, *biggest;          /* shown / largest drawn this frame */
    uint32_t biggest_area;
    uint32_t frame;
    DWORD last_flip_ms;
    int pending_present; /* RE-SoT: backbuffer awaiting submission completion. */
    ID3D11Texture2D *ovl_tex;
    ID3D11ShaderResourceView *ovl_srv;
    uint32_t ovl_w, ovl_h, ovl_serial;
    /* RE-SoT: separate resources so host UI never replaces movie pixels. */
    ID3D11Texture2D *debug_tex;
    uint32_t debug_width, debug_height; /* RE-SoT: F5 and F6 have different sizes. */
    ID3D11ShaderResourceView *debug_srv;
    ID3D11PixelShader *ps_debug;        /* RE-SoT: preserve host panel alpha. */
    ID3D11BlendState *debug_blend;       /* RE-SoT: translucent panel only. */
    HwVertex *verts;
    uint32_t cull_enable, cull_face, front_face;
    uint32_t clear_rect_h, clear_rect_v;
    int clear_rect_set;
    uint64_t draws, tris, tex_uploads;
    uint64_t present_ticks, gpu_vsh_batches, cpu_vsh_batches;
    /* The batch being drawn is 2D that spans the whole width (a fade, the
     * pause menu's fog grid): it keeps the full width in a wide picture. */
    int batch_full_width;
    int batch_projected_screen;          /* RE-SoT: screen quad already narrowed by Hor+ */
    int batch_hud;                       /* RE-SoT: projected HUD: -1 left, +1 right, 0 none */
} s_hw;

/* RE-SoT: the projection hook already gives the HUD its 4:3 proportions,
 * centred (raw x = 320 + (x43 - 320) / widen), so it needs no second squeeze.
 * A side element then moves by 320 * (1 - 1 / widen) towards its edge: its
 * margin from the wide picture's edge is the 4:3 one, in 4:3 units.
 * RECOMP_HW_HUD_EDGE=0 leaves it inside the centred 4:3 frame instead. */
static float hw_hud_shift(void)
{
    static int edge = -1;
    if (edge < 0) {
        const char *e = getenv("RECOMP_HW_HUD_EDGE");
        edge = !(e && *e == '0');
    }
    return edge ? (float)s_hw.batch_hud * 320.0f * (1.0f - 1.0f / s_hw.widen) : 0.0f;
}

#if RESOT_RUNTIME_RETAIL
/* RE-SoT: retail XBE 0x000CE32E/0x000CE366 issue visibility tests.
 * The old hardware path always reported zero because only the software
 * rasterizer updated zpass_count. Queries cover enabled intervals, not batches. */
#if RESOT_HW_D3D11
#include "nv2a_hw_visibility.inc"
static NvHwVisibility s_hw_visibility;
#endif
static void hw_visibility_complete(void *opaque, uint32_t at, uint64_t stamp, uint32_t count)
{
    uint8_t *mem = (uint8_t *)xbox_GetMemoryOffset();
    (void)opaque;
    memcpy(mem + at, &stamp, 8);
    memcpy(mem + at + 8, &count, 4);
    MemoryBarrier(); /* publish count before the guest's completion marker */
    InterlockedExchange((volatile LONG *)(mem + at + 12), 0);
}
static void hw_visibility_poll(void)
{
    if (ng_active()) { ng_visibility_poll(); return; } /* RE-SoT: retail native query engine. */
#if RESOT_HW_D3D11
    HRESULT before = s_hw_visibility.device_error;
    nv_hw_vis_poll(&s_hw_visibility, s_hw.ctx, hw_visibility_complete, NULL);
    if (SUCCEEDED(before) && FAILED(s_hw_visibility.device_error)) {
        fprintf(stderr, "[HW] fatal visibility query failure 0x%08lX\n",
                (unsigned long)s_hw_visibility.device_error);
        abort(); /* RE-SoT: device failure must not leave the guest polling forever. */
    }
#endif
}
static void hw_visibility_method(uint32_t method, uint32_t value, uint64_t stamp)
{
    EnterCriticalSection(&s_hw.lock);
    if (ng_active()) {
        ng_visibility_method(method,value,stamp); LeaveCriticalSection(&s_hw.lock); return;
    } /* RE-SoT: the retail report dispatch never touches a D3D11 context in native modes. */
#if RESOT_HW_D3D11
    hw_visibility_poll();
    if (method == 0x17C8) nv_hw_vis_clear(&s_hw_visibility, s_hw.ctx);
    else if (method == 0x17CC) nv_hw_vis_enable(&s_hw_visibility, s_hw.ctx, value != 0);
    else if (!nv_hw_vis_report(&s_hw_visibility, s_hw.ctx, value, stamp)) {
        fprintf(stderr, "[HW] fatal visibility report allocation failure\n");
        abort(); /* RE-SoT: no fabricated visibility result on host allocation failure. */
    }
    hw_visibility_poll();
#endif
    LeaveCriticalSection(&s_hw.lock);
}
#else
/* RE-SoT: xbox-demo. The retail visibility queries were not checked against
 * the demo XBE: no host queries, the software report path stays as it was
 * (nv2a_pb_exec.c reaches hw_visibility_method only in retail builds). */
static void hw_visibility_poll(void) { }
static void hw_visibility_method(uint32_t method, uint32_t value, uint64_t stamp)
{
    (void)method; (void)value; (void)stamp;
}
#define nv_hw_vis_end(vis, ctx) ((void)0)
#define nv_hw_vis_draw(vis, dev, ctx, scale) 1
#endif

/* Shared by every vertex shader: the constants and what a vertex leaves as.
 * vs_finish is the tail of the pipeline -- the program's oPos is already in
 * screen space (pixels, depth-buffer z, clip w), so this only maps it to
 * Direct3D's clip space. Colours are clamped to 0..1 as the NV2A does before
 * interpolating them. With a widened picture (ws.x < 1) a vertex that arrives
 * with w == 1 belongs to the title's 2D: it keeps its 4:3 size around the
 * centre, unless it sits on the surface's edge (full-screen fades and
 * post-processing quads, which must keep covering everything). */
static const char s_hw_hlsl_vs_common[] =
"cbuffer VSC : register(b0) { float4 vp; float4 fogp; float4 ws; float4 vpad; float4 cur[16];\n"
"                             float4 c[192]; };\n"
"struct VO { float4 pos:SV_Position; float4 d0:COLOR0; float4 d1:COLOR1; float4 fog:FOG;\n"
"            float4 t0:TEXCOORD0; float4 t1:TEXCOORD1; float4 t2:TEXCOORD2; float4 t3:TEXCOORD3; };\n"
"VO vs_finish(float4 p, float4 d0, float4 d1, float fog, float4 t0, float4 t1, float4 t2, float4 t3) {\n"
"  VO o; float w = p.w; float x = p.x, y = p.y;\n"
"  bool flat = abs(w - 1.0) < 0.0001;\n"
"  if (ws.x != 1.0 && flat && x > ws.z && x < ws.y - ws.z)\n"
"    x = (x - 0.5 * ws.y) * ws.x + 0.5 * ws.y;\n"
/* RE-SoT: HUD width is already corrected by the projection. Only translate
 * it towards its side of the screen (hw_hud_shift); ws.w is zero for other
 * batches. */
"  if (flat) x += ws.w;\n"
"  o.pos = float4((x * vp.x - 1.0) * w, (1.0 - y * vp.y) * w,\n"
"                 saturate(p.z * vp.z) * w, w);\n"
"  o.d0 = saturate(d0); o.d1 = saturate(d1); o.fog = float4(fog, 0, 0, 0);\n"
"  o.t0 = t0; o.t1 = t1; o.t2 = t2; o.t3 = t3; return o; }\n";

/* A translated vertex program: this, the attribute mapping, the body from
 * nv2a_vsh_emit_hlsl, then s_hw_hlsl_vsp_tail. The helpers follow
 * nv2a_vsh_interp.c's run_ilu and fog_factor above. */
static const char s_hw_hlsl_vsp_head[] =
"struct PI { float4 a0:ATTR0; float4 a1:ATTR1; float4 a2:ATTR2; float4 a3:ATTR3;\n"
"            float4 a4:ATTR4; float4 a5:ATTR5; float4 a6:ATTR6; float4 a7:ATTR7; };\n"
"static const float VSH_INF = asfloat(0x7F800000);\n"
"float vsh_rcp(float x) { return x == 0.0 ? VSH_INF : 1.0 / x; }\n"
"float vsh_rcc(float x) {\n"
"  float f = 1.0 / x;\n"
"  if (abs(f) < 5.42101e-20) f = f < 0.0 ? -5.42101e-20 : 5.42101e-20;\n"
"  if (abs(f) > 1.884467e19) f = f < 0.0 ? -1.884467e19 : 1.884467e19;\n"
"  return f; }\n"
"float4 vsh_log(float4 cc) {\n"
"  float ax = abs(cc.x); float4 r = cc;\n"
"  if (ax == 0.0) { r.x = -VSH_INF; r.z = -VSH_INF; r.y = 1.0; }\n"
"  else { float e = floor(log2(ax)); r.x = e; r.y = ax / exp2(e); r.z = log2(ax); }\n"
"  r.w = 1.0; return r; }\n"
"float4 vsh_lit(float4 cc) {\n"
"  float nl = max(cc.x, 0.0), nh = max(cc.y, 0.0);\n"
"  float pw = clamp(cc.w, -127.9961, 127.9961);\n"
"  return float4(1.0, nl, cc.x > 0.0 ? pow(nh, pw) : 0.0, 1.0); }\n"
"int vsh_cidx(int i) { return (i < 0 || i >= 192) ? 0 : i; }\n"
"float vsh_fog(float d) {\n"
"  if (fogp.w < 0.5) return 1.0;\n"
"  float f; uint mode = (uint)fogp.z;\n"
"  if (mode == 0x800 || mode == 0x802) f = fogp.x + exp2(d * fogp.y * 16.0) - 1.5;\n"
"  else if (mode == 0x801 || mode == 0x803) f = fogp.x + exp2(-d * d * fogp.y * fogp.y * 32.0) - 1.5;\n"
"  else f = fogp.x + d * fogp.y - 1.0;\n"
"  if (mode == 0x802 || mode == 0x803 || mode == 0x804) f = abs(f);\n"
"  if (f != f) f = 1.0;\n"
"  return saturate(f); }\n"
"VO vs_prog(PI i) {\n"
"  float4 v[16]; float4 R[13]; float4 o[13]; int a0 = 0; int k;\n"
"  for (k = 0; k < 16; k++) v[k] = cur[k];\n"
"  for (k = 0; k < 13; k++) { R[k] = float4(0, 0, 0, 0); o[k] = float4(0, 0, 0, 0); }\n"
"  o[3].w = 1.0; o[4].w = 1.0; o[9].w = 1.0; o[10].w = 1.0; o[11].w = 1.0; o[12].w = 1.0;\n";
static const char s_hw_hlsl_vsp_tail[] =
"  return vs_finish(R[12], o[3], o[4], vsh_fog(o[5].x), o[9], o[10], o[11], o[12]); }\n";

/* RE-SoT: the native SDL GPU encoders have no shader compiler at run time
 * (Android least of all), so they cannot translate each program as above.
 * vs_uber is compiled once, offline, and interprets the program instead:
 * nv2a_vsh_pack_gpu's words in VUP, the constants in VUC, the vertex's
 * inputs in eight slots. Every vertex of a draw runs the same instructions,
 * so the loop is uniform. Semantics follow nv2a_vsh_run line for line.
 * No local array is indexed at run time: the first version's R[13], o[13]
 * and v[8] made Adreno keep the registers in slow private memory (Android
 * present waited 40-90 ms a frame on the GPU, 2026-10-19 logs). Registers
 * are named variables chosen by uniform selects instead. */
static const char s_hw_hlsl_uber[] =
"cbuffer VUC : register(b1) { float4 uc[192]; };\n"
"cbuffer VUP : register(b2) { uint4 uins[136]; };\n"
"struct UI { float4 a0:TEXCOORD0; float4 a1:TEXCOORD1; float4 a2:TEXCOORD2; float4 a3:TEXCOORD3;\n"
"            float4 a4:TEXCOORD4; float4 a5:TEXCOORD5; float4 a6:TEXCOORD6; float4 a7:TEXCOORD7; };\n"
"static const float UB_INF = asfloat(0x7F800000);\n"
"#define UB_RP float4 R0, float4 R1, float4 R2, float4 R3, float4 R4, float4 R5, float4 R6, float4 R7, float4 R8, float4 R9, float4 R10, float4 R11, float4 P\n"
"#define UB_RW inout float4 R0, inout float4 R1, inout float4 R2, inout float4 R3, inout float4 R4, inout float4 R5, inout float4 R6, inout float4 R7, inout float4 R8, inout float4 R9, inout float4 R10, inout float4 R11, inout float4 P\n"
"#define UB_RA R0, R1, R2, R3, R4, R5, R6, R7, R8, R9, R10, R11, P\n"
"#define UB_VP float4 v0, float4 v1, float4 v2, float4 v3, float4 v4, float4 v5, float4 v6, float4 v7\n"
"#define UB_VA v0, v1, v2, v3, v4, v5, v6, v7\n"
"float ub_c(float4 x, uint i) { return i == 0 ? x.x : (i == 1 ? x.y : (i == 2 ? x.z : x.w)); }\n"
"float4 ub_temp(uint r, UB_RP) {\n"
"  if (r < 6) { if (r < 3) return r == 0 ? R0 : (r == 1 ? R1 : R2);\n"
"               return r == 3 ? R3 : (r == 4 ? R4 : R5); }\n"
"  if (r < 9) return r == 6 ? R6 : (r == 7 ? R7 : R8);\n"
"  if (r < 12) return r == 9 ? R9 : (r == 10 ? R10 : R11);\n"
"  return r == 12 ? P : R0; }\n"
"float4 ub_in(uint i, UB_VP) {\n"
"  if (i < 4) return i == 0 ? v0 : (i == 1 ? v1 : (i == 2 ? v2 : v3));\n"
"  return i == 4 ? v4 : (i == 5 ? v5 : (i == 6 ? v6 : v7)); }\n"
"float4 ub_src(uint s, UB_VP, UB_RP, int a0, uint ci, bool rel, uint vin) {\n"
"  uint mux = s & 3, swz = (s >> 6) & 255; float4 x;\n"
"  if (mux == 1) x = ub_temp((s >> 2) & 15, UB_RA);\n"
"  else if (mux == 2) x = ub_in(vin, UB_VA);\n"
"  else { int k = int(ci) + (rel ? a0 : 0); x = uc[(k < 0 || k >= 192) ? 0 : k]; }\n"
"  float4 r = float4(ub_c(x, swz >> 6), ub_c(x, (swz >> 4) & 3), ub_c(x, (swz >> 2) & 3), ub_c(x, swz & 3));\n"
"  return (s & 0x4000) ? -r : r; }\n"
"float4 ub_wm(float4 d, float4 s, uint m) {\n"
"  return float4((m & 8) ? s.x : d.x, (m & 4) ? s.y : d.y, (m & 2) ? s.z : d.z, (m & 1) ? s.w : d.w); }\n"
"float ub_lt(float a, float b) { return a < b ? 1.0 : 0.0; }\n"
"float ub_ge(float a, float b) { return a >= b ? 1.0 : 0.0; }\n"
"float ub_fog(float d) {\n"
"  if (fogp.w < 0.5) return 1.0;\n"
"  float f; uint mode = (uint)fogp.z;\n"
"  if (mode == 0x800 || mode == 0x802) f = fogp.x + exp2(d * fogp.y * 16.0) - 1.5;\n"
"  else if (mode == 0x801 || mode == 0x803) f = fogp.x + exp2(-d * d * fogp.y * fogp.y * 32.0) - 1.5;\n"
"  else f = fogp.x + d * fogp.y - 1.0;\n"
"  if (mode == 0x802 || mode == 0x803 || mode == 0x804) f = abs(f);\n"
"  if (f != f) f = 1.0;\n"
"  return saturate(f); }\n"
"void ub_wt(uint t, float4 s, uint m, UB_RW) {\n"
"  if (t < 6) { if (t == 0) R0 = ub_wm(R0, s, m); else if (t == 1) R1 = ub_wm(R1, s, m);\n"
"    else if (t == 2) R2 = ub_wm(R2, s, m); else if (t == 3) R3 = ub_wm(R3, s, m);\n"
"    else if (t == 4) R4 = ub_wm(R4, s, m); else R5 = ub_wm(R5, s, m); }\n"
"  else if (t < 12) { if (t == 6) R6 = ub_wm(R6, s, m); else if (t == 7) R7 = ub_wm(R7, s, m);\n"
"    else if (t == 8) R8 = ub_wm(R8, s, m); else if (t == 9) R9 = ub_wm(R9, s, m);\n"
"    else if (t == 10) R10 = ub_wm(R10, s, m); else R11 = ub_wm(R11, s, m); }\n"
"  else if (t == 12) P = ub_wm(P, s, m); }\n"
"VO vs_uber(UI i) {\n"
"  float4 v0 = i.a0, v1 = i.a1, v2 = i.a2, v3 = i.a3, v4 = i.a4, v5 = i.a5, v6 = i.a6, v7 = i.a7;\n"
"  float4 R0 = 0, R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0, R6 = 0, R7 = 0, R8 = 0, R9 = 0, R10 = 0, R11 = 0, P = 0;\n"
"  float4 O3 = float4(0, 0, 0, 1), O4 = O3, O5 = 0, O9 = O3, O10 = O3, O11 = O3, O12 = O3;\n"
"  int a0 = 0; uint k;\n"
"  [loop] for (k = 0; k < 136; k++) {\n"
"    uint4 d = uins[k];\n"
"    uint mac = d.x & 15, ilu = (d.x >> 4) & 7, mm = (d.x >> 7) & 15, im = (d.x >> 11) & 15;\n"
"    uint td = (d.x >> 15) & 15, om = (d.x >> 19) & 15, oa = d.y & 255;\n"
"    bool rel = (d.x & 0x2000000) != 0;\n"
"    uint ci = (d.y >> 8) & 255, vin = (d.y >> 16) & 7;\n"
"    float4 a = ub_src(d.z & 0xFFFF, UB_VA, UB_RA, a0, ci, rel, vin);\n"
"    float4 b = ub_src(d.z >> 16, UB_VA, UB_RA, a0, ci, rel, vin);\n"
"    float4 cc = ub_src(d.w & 0xFFFF, UB_VA, UB_RA, a0, ci, rel, vin);\n"
"    float4 m = a, l = cc; float x = cc.x;\n"
"    if (mac == 2) m = a * b;\n"
"    else if (mac == 3) m = a + cc;\n"
"    else if (mac == 4) m = a * b + cc;\n"
"    else if (mac == 5) m = dot(a.xyz, b.xyz).xxxx;\n"
"    else if (mac == 6) m = (dot(a.xyz, b.xyz) + b.w).xxxx;\n"
"    else if (mac == 7) m = dot(a, b).xxxx;\n"
"    else if (mac == 8) m = float4(1.0, a.y * b.y, a.z, b.w);\n"
"    else if (mac == 9) m = float4(a.x < b.x ? a.x : b.x, a.y < b.y ? a.y : b.y, a.z < b.z ? a.z : b.z, a.w < b.w ? a.w : b.w);\n"
"    else if (mac == 10) m = float4(a.x >= b.x ? a.x : b.x, a.y >= b.y ? a.y : b.y, a.z >= b.z ? a.z : b.z, a.w >= b.w ? a.w : b.w);\n"
"    else if (mac == 11) m = float4(ub_lt(a.x, b.x), ub_lt(a.y, b.y), ub_lt(a.z, b.z), ub_lt(a.w, b.w));\n"
"    else if (mac == 12) m = float4(ub_ge(a.x, b.x), ub_ge(a.y, b.y), ub_ge(a.z, b.z), ub_ge(a.w, b.w));\n"
"    else if (mac == 13) a0 = (int)floor(a.x + 0.001);\n"
"    if (ilu == 2) l = (x == 0.0 ? UB_INF : 1.0 / x).xxxx;\n"
"    else if (ilu == 3) { float f = 1.0 / x;\n"
"      if (abs(f) < 5.42101e-20) f = f < 0.0 ? -5.42101e-20 : 5.42101e-20;\n"
"      if (abs(f) > 1.884467e19) f = f < 0.0 ? -1.884467e19 : 1.884467e19;\n"
"      l = f.xxxx; }\n"
"    else if (ilu == 4) l = (1.0 / sqrt(abs(x))).xxxx;\n"
"    else if (ilu == 5) l = float4(exp2(floor(x)), x - floor(x), exp2(x), 1.0);\n"
"    else if (ilu == 6) { float ax = abs(x);\n"
"      if (ax == 0.0) l = float4(-UB_INF, 1.0, -UB_INF, 1.0);\n"
"      else { float e = floor(log2(ax)); l = float4(e, ax / exp2(e), log2(ax), 1.0); } }\n"
"    else if (ilu == 7) { float nl = max(cc.x, 0.0), nh = max(cc.y, 0.0);\n"
"      float pw = clamp(cc.w, -127.9961, 127.9961);\n"
"      l = float4(1.0, nl, cc.x > 0.0 ? pow(nh, pw) : 0.0, 1.0); }\n"
"    if (mac != 0 && mac != 13 && mm != 0 && td <= 12) ub_wt(td, m, mm, UB_RA);\n"
"    if (ilu != 0 && im != 0) { uint it = mac != 0 ? 1 : td; ub_wt(it, l, im, UB_RA); }\n"
"    if (om != 0 && (d.x & 0x1000000) != 0) {\n"
"      float4 src = (d.x & 0x800000) != 0 ? l : m;\n"
"      if (oa == 0) P = ub_wm(P, src, om); else if (oa == 3) O3 = ub_wm(O3, src, om);\n"
"      else if (oa == 4) O4 = ub_wm(O4, src, om); else if (oa == 5) O5 = ub_wm(O5, src, om);\n"
"      else if (oa == 9) O9 = ub_wm(O9, src, om); else if (oa == 10) O10 = ub_wm(O10, src, om);\n"
"      else if (oa == 11) O11 = ub_wm(O11, src, om); else if (oa == 12) O12 = ub_wm(O12, src, om); }\n"
"    if ((d.x & 0x4000000) != 0) break;\n"
"  }\n"
"  return vs_finish(P, O3, O4, ub_fog(O5.x), O9, O10, O11, O12); }\n";

static const char s_hw_hlsl[] =
"struct VI { float4 pos:POSITION; float4 d0:COLOR0; float4 d1:COLOR1; float4 fog:FOG;\n"
"            float4 t0:TEXCOORD0; float4 t1:TEXCOORD1; float4 t2:TEXCOORD2; float4 t3:TEXCOORD3; };\n"
"VO vs_main(VI i) {\n"
"  return vs_finish(i.pos, i.d0, i.d1, i.fog.x, i.t0, i.t1, i.t2, i.t3); }\n"
"struct BO { float4 pos:SV_Position; float2 uv:TEXCOORD0; };\n"
"BO vs_blit(uint id : SV_VertexID) {\n"
"  BO o; float2 p = float2((id << 1) & 2, id & 2);\n"
"  o.uv = p; o.pos = float4(p * float2(2, -2) + float2(-1, 1), 0, 1); return o; }\n"
"Texture2D tx0 : register(t0); Texture2D tx1 : register(t1);\n"
"Texture2D tx2 : register(t2); Texture2D tx3 : register(t3);\n"
/* RE-SoT: separate slots keep 2D blits and cube sampling type-correct. */
"TextureCube cx0 : register(t4); TextureCube cx1 : register(t5);\n"
"TextureCube cx2 : register(t6); TextureCube cx3 : register(t7);\n"
"SamplerState sm0 : register(s0); SamplerState sm1 : register(s1);\n"
"SamplerState sm2 : register(s2); SamplerState sm3 : register(s3);\n"
"float4 ps_blit(BO i) : SV_Target { return float4(tx0.Sample(sm0, i.uv).rgb, 1.0); }\n"
/* RE-SoT: movie blits stay opaque; only the host panel uses its texture alpha. */
"float4 ps_debug(BO i) : SV_Target { return tx0.Sample(sm0, i.uv); }\n"
"cbuffer PSC : register(b0) {\n"
"  uint4 cw[8]; float4 fac0[8]; float4 fac1[8];\n"
"  uint4 ctl; uint4 atest; float4 finc0; float4 finc1; float4 fogc;\n"
"  float4 tscale[4]; uint4 misc; };\n"
"float4 ps_solid(VO i) : SV_Target { return finc0; }\n"
"float map_in(float x, uint b) {\n"
"  float p = max(x, 0.0); uint m = (b >> 5) & 7;\n"
"  if (m == 0) return p;\n"
"  if (m == 1) return 1.0 - saturate(x);\n"
"  if (m == 2) return 2.0 * p - 1.0;\n"
"  if (m == 3) return 1.0 - 2.0 * p;\n"
"  if (m == 4) return p - 0.5;\n"
"  if (m == 5) return 0.5 - p;\n"
"  if (m == 6) return x;\n"
"  return -x; }\n"
"float3 rd_rgb(float4 r, uint b) {\n"
"  float3 v = (b & 0x10) ? r.aaa : r.rgb;\n"
"  return float3(map_in(v.x, b), map_in(v.y, b), map_in(v.z, b)); }\n"
"float rd_a(float4 r, uint b) { return map_in((b & 0x10) ? r.a : r.b, b); }\n"
"float3 map_out3(float3 x, uint m) {\n"
"  if (m == 0x08) x = x - 0.5;\n"
"  else if (m == 0x10) x = x * 2.0;\n"
"  else if (m == 0x18) x = (x - 0.5) * 2.0;\n"
"  else if (m == 0x20) x = x * 4.0;\n"
"  else if (m == 0x30) x = x * 0.5;\n"
"  return clamp(x, -1.0, 1.0); }\n"
"float4 stage_tex(uint mode, float4 tc, float4 smp, float bound, inout bool keep, uint cpm) {\n"
"  if (mode == 0) return float4(0, 0, 0, 1);\n"
"  if (mode >= 1 && mode <= 3) return bound > 0.5 ? smp : float4(1, 1, 1, 1);\n"
"  if (mode == 4) return saturate(tc);\n"
"  if (mode == 5) {\n"
"    for (int j = 0; j < 4; j++) {\n"
"      bool ge = ((cpm >> j) & 1) != 0;\n"
"      if (ge ? (tc[j] >= 0.0) : (tc[j] < 0.0)) keep = false; }\n"
"    return float4(0, 0, 0, 0); }\n"
"  return float4(0, 0, 0, 0); }\n"
"float2 proj_uv(float4 tc, float4 sc) { float q = tc.w != 0.0 ? tc.w : 1.0; return tc.xy / q * sc.xy; }\n"
/* RE-SoT: combiner registers are named variables (Q1-Q15; R0 reads zero)
 * chosen by the draw's uniform control words, not an indexed R[16]. Faster
 * on the desktop GPU (Vulkan menu 145-152 FPS, was 42-77; 2026-10-19). */
"#define RC_P float4 Q1, float4 Q2, float4 Q3, float4 Q4, float4 Q5, float4 Q6, float4 Q7, float4 Q8, float4 Q9, float4 Q10, float4 Q11, float4 Q12, float4 Q13, float4 Q14, float4 Q15\n"
"#define RC_W inout float4 Q1, inout float4 Q2, inout float4 Q3, inout float4 Q4, inout float4 Q5, inout float4 Q6, inout float4 Q7, inout float4 Q8, inout float4 Q9, inout float4 Q10, inout float4 Q11, inout float4 Q12, inout float4 Q13, inout float4 Q14, inout float4 Q15\n"
"#define RC_A Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15\n"
"float4 rc_r(uint i, RC_P) {\n"
"  if (i < 8) { if (i < 4) return i == 0 ? float4(0, 0, 0, 0) : (i == 1 ? Q1 : (i == 2 ? Q2 : Q3));\n"
"               return i == 4 ? Q4 : (i == 5 ? Q5 : (i == 6 ? Q6 : Q7)); }\n"
"  if (i < 12) return i == 8 ? Q8 : (i == 9 ? Q9 : (i == 10 ? Q10 : Q11));\n"
"  return i == 12 ? Q12 : (i == 13 ? Q13 : (i == 14 ? Q14 : Q15)); }\n"
"float4 rc_m(float4 r, float4 v, uint m) {\n"
"  return float4((m & 1) ? v.x : r.x, (m & 2) ? v.y : r.y, (m & 4) ? v.z : r.z, (m & 8) ? v.w : r.w); }\n"
"void rc_w(uint d, float4 v, uint m, RC_W) {\n"
"  if (d < 8) { if (d == 1) Q1 = rc_m(Q1, v, m); else if (d == 2) Q2 = rc_m(Q2, v, m);\n"
"    else if (d == 3) Q3 = rc_m(Q3, v, m); else if (d == 4) Q4 = rc_m(Q4, v, m);\n"
"    else if (d == 5) Q5 = rc_m(Q5, v, m); else if (d == 6) Q6 = rc_m(Q6, v, m);\n"
"    else if (d == 7) Q7 = rc_m(Q7, v, m); }\n"
"  else if (d < 12) { if (d == 8) Q8 = rc_m(Q8, v, m); else if (d == 9) Q9 = rc_m(Q9, v, m);\n"
"    else if (d == 10) Q10 = rc_m(Q10, v, m); else Q11 = rc_m(Q11, v, m); }\n"
"  else { if (d == 12) Q12 = rc_m(Q12, v, m); else if (d == 13) Q13 = rc_m(Q13, v, m);\n"
"    else if (d == 14) Q14 = rc_m(Q14, v, m); else Q15 = rc_m(Q15, v, m); } }\n"
"float4 ps_main(VO i) : SV_Target {\n"
"  float4 s0 = float4(1, 1, 1, 1);\n"
"  [branch] if (tscale[0].z > 0.5) { if (tscale[0].w > 0.5) s0 = cx0.Sample(sm0, i.t0.xyz);\n"
"    else s0 = tx0.Sample(sm0, proj_uv(i.t0, tscale[0])); }\n"
"  float4 s1 = float4(1, 1, 1, 1);\n"
"  [branch] if (tscale[1].z > 0.5) { if (tscale[1].w > 0.5) s1 = cx1.Sample(sm1, i.t1.xyz);\n"
"    else s1 = tx1.Sample(sm1, proj_uv(i.t1, tscale[1])); }\n"
"  float4 s2 = float4(1, 1, 1, 1);\n"
"  [branch] if (tscale[2].z > 0.5) { if (tscale[2].w > 0.5) s2 = cx2.Sample(sm2, i.t2.xyz);\n"
"    else s2 = tx2.Sample(sm2, proj_uv(i.t2, tscale[2])); }\n"
"  float4 s3 = float4(1, 1, 1, 1);\n"
"  [branch] if (tscale[3].z > 0.5) { if (tscale[3].w > 0.5) s3 = cx3.Sample(sm3, i.t3.xyz);\n"
"    else s3 = tx3.Sample(sm3, proj_uv(i.t3, tscale[3])); }\n"
"  bool keep = true; uint sp = ctl.y; uint cpm = atest.w;\n"
"  float4 Q1 = 0, Q2 = 0, Q3 = 0, Q4 = 0, Q5 = 0, Q6 = 0, Q7 = 0, Q12 = 0, Q13 = 0, Q14 = 0, Q15 = 0;\n"
"  float4 Q8  = stage_tex(sp & 31, i.t0, s0, tscale[0].z, keep, cpm);\n"
"  float4 Q9  = stage_tex((sp >> 5) & 31, i.t1, s1, tscale[1].z, keep, cpm >> 4);\n"
"  float4 Q10 = stage_tex((sp >> 10) & 31, i.t2, s2, tscale[2].z, keep, cpm >> 8);\n"
"  float4 Q11 = stage_tex((sp >> 15) & 31, i.t3, s3, tscale[3].z, keep, cpm >> 12);\n"
"  if (!keep) discard;\n"
"  float4 o;\n"
"  if (misc.x == 0) {\n"
"    o = i.d0; if (tscale[0].z > 0.5) o *= s0;\n"
"  } else {\n"
"    Q3 = float4(fogc.rgb, i.fog.x); Q4 = i.d0; Q5 = i.d1;\n"
"    Q12.a = (sp & 31) ? Q8.a : 1.0;\n"
"    uint n = min(ctl.x & 0xFF, 8u); uint flags = ctl.x >> 8;\n"
"    [loop] for (uint s = 0; s < n; s++) {\n"
"      uint icw = cw[s].x, aicw = cw[s].y, ocw = cw[s].z, aocw = cw[s].w;\n"
"      uint fl = ocw >> 12, afl = aocw >> 12;\n"
"      Q1 = fac0[(flags & 0x010) ? s : 0]; Q2 = fac1[(flags & 0x100) ? s : 0];\n"
"      bool mux = (flags & 1) ? (Q12.a >= 0.5) : ((uint(Q12.a * 255.0) & 1) != 0);\n"
"      float3 A = rd_rgb(rc_r((icw >> 24) & 15, RC_A), icw >> 24), B = rd_rgb(rc_r((icw >> 16) & 15, RC_A), icw >> 16);\n"
"      float3 C = rd_rgb(rc_r((icw >> 8) & 15, RC_A), icw >> 8), D = rd_rgb(rc_r(icw & 15, RC_A), icw);\n"
"      float aA = rd_a(rc_r((aicw >> 24) & 15, RC_A), aicw >> 24), aB = rd_a(rc_r((aicw >> 16) & 15, RC_A), aicw >> 16);\n"
"      float aC = rd_a(rc_r((aicw >> 8) & 15, RC_A), aicw >> 8), aD = rd_a(rc_r(aicw & 15, RC_A), aicw);\n"
"      float3 pab = (fl & 2) ? dot(A, B).xxx : A * B;\n"
"      float3 pcd = (fl & 1) ? dot(C, D).xxx : C * D;\n"
"      float3 sum = (fl & 4) ? (mux ? pcd : pab) : pab + pcd;\n"
"      float3 ab = map_out3(pab, fl & 0x38), cd = map_out3(pcd, fl & 0x38), ms = map_out3(sum, fl & 0x38);\n"
"      float qab = aA * aB, qcd = aC * aD;\n"
"      float qsum = (afl & 4) ? (mux ? qcd : qab) : qab + qcd;\n"
"      float aab = map_out3(qab.xxx, afl & 0x38).x, acd = map_out3(qcd.xxx, afl & 0x38).x;\n"
"      float ams = map_out3(qsum.xxx, afl & 0x38).x;\n"
"      uint d;\n"
"      d = (ocw >> 4) & 15; if (d) rc_w(d, float4(ab, ab.b), (fl & 0x80) ? 15u : 7u, RC_A);\n"
"      d = ocw & 15;        if (d) rc_w(d, float4(cd, cd.b), (fl & 0x40) ? 15u : 7u, RC_A);\n"
"      d = (ocw >> 8) & 15; if (d) rc_w(d, float4(ms, 0.0), 7u, RC_A);\n"
"      d = (aocw >> 4) & 15; if (d) rc_w(d, aab.xxxx, 8u, RC_A);\n"
"      d = aocw & 15;        if (d) rc_w(d, acd.xxxx, 8u, RC_A);\n"
"      d = (aocw >> 8) & 15; if (d) rc_w(d, ams.xxxx, 8u, RC_A);\n"
"    }\n"
"    if (ctl.z != 0 || ctl.w != 0) {\n"
"      uint f0 = ctl.z, f1 = ctl.w, ff = f1 & 0xFF;\n"
"      Q1 = finc0; Q2 = finc1;\n"
"      float3 a = (ff & 0x40) ? 1.0 - Q5.rgb : Q5.rgb;\n"
"      float3 b = (ff & 0x20) ? 1.0 - Q12.rgb : Q12.rgb;\n"
"      Q14 = float4((ff & 0x80) ? saturate(a + b) : a + b, 0);\n"
"      float3 E = rd_rgb(rc_r((f1 >> 24) & 15, RC_A), f1 >> 24), F = rd_rgb(rc_r((f1 >> 16) & 15, RC_A), f1 >> 16);\n"
"      Q15 = float4(E * F, 0);\n"
"      float3 A = rd_rgb(rc_r((f0 >> 24) & 15, RC_A), f0 >> 24), B = rd_rgb(rc_r((f0 >> 16) & 15, RC_A), f0 >> 16);\n"
"      float3 C = rd_rgb(rc_r((f0 >> 8) & 15, RC_A), f0 >> 8), D = rd_rgb(rc_r(f0 & 15, RC_A), f0);\n"
"      o.rgb = D + C * (1.0 - A) + B * A;\n"
"      o.a = rd_a(rc_r((f1 >> 8) & 15, RC_A), f1 >> 8);\n"
"    } else o = Q12;\n"
"  }\n"
"  o = saturate(o);\n"
"  if (atest.x != 0) {\n"
"    int v = int(o.a * 255.0 + 0.5), r = int(atest.z & 0xFF); uint f = atest.y; bool ok = true;\n"
"    if (f == 0x200) ok = false; else if (f == 0x201) ok = v < r;\n"
"    else if (f == 0x202) ok = v == r; else if (f == 0x203) ok = v <= r;\n"
"    else if (f == 0x204) ok = v > r; else if (f == 0x205) ok = v != r;\n"
"    else if (f == 0x206) ok = v >= r;\n"
"    if (!ok) discard; }\n"
"  return o; }\n";


#if RESOT_HW_D3D11
/* RE-SoT: compiled shaders are kept on disk (shadercache beside the exe, or
 * RECOMP_HW_SHADER_CACHE=<dir>; "0" turns it off), keyed by a hash of the
 * HLSL, the entry point and the profile. D3DCompile takes tens of
 * milliseconds per vertex program, and every program the title uses for the
 * first time used to cost a dropped frame or two -- on every run. */
static const char *hw_shader_cache_dir(void)
{
    static const char *dir = (const char *)-1;
    if (dir == (const char *)-1) {
        dir = getenv("RECOMP_HW_SHADER_CACHE");
        if (!dir)
            /* RE-SoT: WinMain sets the executable directory as CWD. Portable
             * packages have no nested bin directory: the old bin\\shadercache
             * silently failed CreateDirectory and recompiled on every run. */
            dir = "shadercache";
        if (!*dir || strcmp(dir, "0") == 0)
            dir = NULL;
        else if (!CreateDirectoryA(dir, NULL) && GetLastError() != ERROR_ALREADY_EXISTS) {
            /* RE-SoT: report a cache location that cannot be created once. */
            fprintf(stderr, "  [HW] shader cache unavailable: %s (error %lu)\n",
                    dir, (unsigned long)GetLastError());
            dir = NULL;
        }
    }
    return dir;
}

static void hw_shader_cache_path(char *path, size_t cap, const char *src, size_t len,
                                 const char *entry, const char *target)
{
    uint64_t h = 1469598103934665603ull;
    size_t i;
    for (i = 0; i < len; i++)
        h = (h ^ (uint8_t)src[i]) * 1099511628211ull;
    for (i = 0; entry[i]; i++)
        h = (h ^ (uint8_t)entry[i]) * 1099511628211ull;
    for (i = 0; target[i]; i++)
        h = (h ^ (uint8_t)target[i]) * 1099511628211ull;
    snprintf(path, cap, "%s\\%016llx.cso", hw_shader_cache_dir(), (unsigned long long)h);
}

/* RE-SoT: the disk cache alone, without compiling on a miss. */
static ID3DBlob *hw_shader_cache_load(const char *src, size_t len, const char *entry,
                                      const char *target)
{
    ID3DBlob *code = NULL;
    char path[MAX_PATH];
    FILE *f;
    long n;

    if (!hw_shader_cache_dir())
        return NULL;
    hw_shader_cache_path(path, sizeof path, src, len, entry, target);
    f = fopen(path, "rb");
    if (!f)
        return NULL;
    fseek(f, 0, SEEK_END);
    n = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (n > 0 && SUCCEEDED(D3DCreateBlob((SIZE_T)n, &code))
        && fread(ID3D10Blob_GetBufferPointer(code), 1, (size_t)n, f) == (size_t)n) {
        fclose(f);
        return code;
    }
    if (code) ID3D10Blob_Release(code);
    fclose(f);
    return NULL;
}

static ID3DBlob *hw_compile_src(const char *src, size_t len, const char *entry,
                                const char *target)
{
    ID3DBlob *code = NULL, *err = NULL;
    HRESULT hr;
    char path[MAX_PATH];
    FILE *f;
    /* RE-SoT: expose cold shader stalls separately from frame averages. */
    LARGE_INTEGER compile_start, compile_end, frequency;

    if (hw_shader_cache_dir()) {
        hw_shader_cache_path(path, sizeof path, src, len, entry, target);
        f = fopen(path, "rb");
        if (f) {
            long n;
            fseek(f, 0, SEEK_END);
            n = ftell(f);
            fseek(f, 0, SEEK_SET);
            if (n > 0 && SUCCEEDED(D3DCreateBlob((SIZE_T)n, &code))
                && fread(ID3D10Blob_GetBufferPointer(code), 1, (size_t)n, f) == (size_t)n) {
                fclose(f);
                /* RE-SoT: one line per new program, never per draw/frame;
                 * distinguish warm-cache playback from compilation stalls. */
                fprintf(stderr, "  [HW] shader cache hit: %s\n", entry);
                return code;
            }
            if (code) { ID3D10Blob_Release(code); code = NULL; }
            fclose(f);
        }
    }
    QueryPerformanceCounter(&compile_start);
    hr = D3DCompile(src, len, "nv2a_hw", NULL, NULL, entry, target,
                    D3DCOMPILE_OPTIMIZATION_LEVEL1
                    | D3DCOMPILE_IEEE_STRICTNESS, 0, &code, &err);
    QueryPerformanceCounter(&compile_end);
    QueryPerformanceFrequency(&frequency);
    fprintf(stderr, "  [HW] cold shader %s compiled in %.2f ms%s\n", entry,
            1000.0 * (compile_end.QuadPart - compile_start.QuadPart) / frequency.QuadPart,
            hw_shader_cache_dir() ? " (disk cache enabled)" : " (disk cache disabled)");
    if (SUCCEEDED(hr) && hw_shader_cache_dir()) {
        f = fopen(path, "wb");
        if (f) {
            fwrite(ID3D10Blob_GetBufferPointer(code), 1, ID3D10Blob_GetBufferSize(code), f);
            fclose(f);
        }
    }
    if (FAILED(hr)) {
        fprintf(stderr, "  [HW] shader %s failed: %s\n", entry,
                err ? (const char *)ID3D10Blob_GetBufferPointer(err) : "?");
        fflush(stderr);
        if (err) ID3D10Blob_Release(err);
        return NULL;
    }
    if (err) ID3D10Blob_Release(err);
    return code;
}

static ID3DBlob *hw_compile(const char *entry, const char *target)
{
    static char *src;
    static size_t len;
    if (!src) {
        len = sizeof s_hw_hlsl_vs_common - 1 + sizeof s_hw_hlsl - 1;
        src = (char *)malloc(len + 1);
        if (!src)
            return NULL;
        memcpy(src, s_hw_hlsl_vs_common, sizeof s_hw_hlsl_vs_common - 1);
        memcpy(src + sizeof s_hw_hlsl_vs_common - 1, s_hw_hlsl, sizeof s_hw_hlsl);
    }
    return hw_compile_src(src, len, entry, target);
}

#endif /* RESOT_HW_D3D11 */

/* Host pixels across a guest width, on a surface rendered `sc` times the
 * guest resolution. */
/* RE-SoT: shared live internal scale. The encoded percentage retains the
 * legacy integer environment scale until the host supplies its INI option. */
#define HW_PERCENT_SCALE 0x10000u
#include "nv2a_native_scale.h" /* RE-SoT: tested fractional rounding on both hosts. */
static volatile LONG s_render_percent;
void xbox_SetRenderScalePercent(int percent)
{
    if (percent!=50 && percent!=75 && percent!=100 && percent!=150 &&
        percent!=225 && percent!=300) percent=100;
    InterlockedExchange(&s_render_percent,percent);
}
static uint32_t hw_py(uint32_t y,uint32_t sc)
{
    return sc & HW_PERCENT_SCALE ? resot_internal_extent(y,sc & 0xffffu) : y*sc;
}
static uint32_t hw_px(uint32_t x,uint32_t sc)
{
    if (sc & HW_PERCENT_SCALE)
        return hw_py((uint32_t)((float)x*s_hw.widen+0.5f),sc);
    return (uint32_t)((float)x*(float)sc*s_hw.widen+0.5f);
}

/* RE-SoT: how much finer than the guest a surface is rendered. The display
 * surface (and anything as wide) gets RECOMP_HW_SCALE. Smaller surfaces are
 * the title's post-processing chain (the demo's glow: 640 -> 320 -> 160 ->
 * 80 and back) and shadow buffers; their filters are fixed tap offsets in
 * guest texels, so at twice the resolution each blur covered half the area
 * and left sharp, shifted copies of the scene -- "layers out of register".
 * They stay at the guest's own resolution (RECOMP_HW_FX_SCALE to change). */
static uint32_t hw_surface_scale(uint32_t w)
{
    /* RE-SoT: effect and shadow surfaces retain their guest resolution. */
    int percent=(int)InterlockedCompareExchange(&s_render_percent,0,0);
    if(w>=640 && percent) return HW_PERCENT_SCALE | (uint32_t)percent;
    return w >= 640 ? (uint32_t)s_hw.scale : (uint32_t)s_hw.fx_scale;
}

#if RESOT_HW_D3D11
static void hw_resize_backbuffer(void)
{
    RECT rc;
    ID3D11Texture2D *bb = NULL;

    GetClientRect(s_hw.hwnd, &rc);
    if (rc.right < 16 || rc.bottom < 16)
        return;
    if (s_hw.bb_rtv && (uint32_t)rc.right == s_hw.bb_w
        && (uint32_t)rc.bottom == s_hw.bb_h)
        return;
    if (s_hw.bb_rtv) {
        ID3D11DeviceContext_OMSetRenderTargets(s_hw.ctx, 0, NULL, NULL);
        ID3D11RenderTargetView_Release(s_hw.bb_rtv);
        s_hw.bb_rtv = NULL;
        IDXGISwapChain_ResizeBuffers(s_hw.swap, 0, (UINT)rc.right,
                                     (UINT)rc.bottom, DXGI_FORMAT_UNKNOWN, 0);
    }
    if (SUCCEEDED(IDXGISwapChain_GetBuffer(s_hw.swap, 0, &IID_ID3D11Texture2D,
                                           (void **)&bb))) {
        ID3D11Device_CreateRenderTargetView(s_hw.dev, (ID3D11Resource *)bb,
                                            NULL, &s_hw.bb_rtv);
        ID3D11Texture2D_Release(bb);
    }
    s_hw.bb_w = (uint32_t)rc.right;
    s_hw.bb_h = (uint32_t)rc.bottom;
}

#endif /* RESOT_HW_D3D11 */

static int hw_init(void)
{
#if RESOT_HW_D3D11
    static const D3D11_INPUT_ELEMENT_DESC il[] = {
        {"POSITION", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 0,   D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"COLOR",    0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 16,  D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"COLOR",    1, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 32,  D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"FOG",      0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 48,  D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 64,  D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 1, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 80,  D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 2, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 96,  D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 3, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 112, D3D11_INPUT_PER_VERTEX_DATA, 0},
    };
    DXGI_SWAP_CHAIN_DESC sd;
    D3D_FEATURE_LEVEL fl;
    ID3DBlob *b;
    HRESULT hr;
    int i;
    RECT wr;
#endif
    int wait;
    const char *e;

    extern void xbox_FramebufferWindowStart(void);
    xbox_FramebufferWindowStart();
    for (wait = 0; wait < 300 && !xbox_FramebufferWindowHandle(); wait++)
        Sleep(10);
    s_hw.hwnd = (HWND)xbox_FramebufferWindowHandle();
    if (!s_hw.hwnd) {
        fprintf(stderr, "  [HW] no window (RECOMP_FB_WINDOW not set?); software path\n");
        return 0;
    }
    e = getenv("RECOMP_HW_SCALE");
    s_hw.scale = e ? atoi(e) : 2;
    if (s_hw.scale < 1) s_hw.scale = 1;
    if (s_hw.scale > 8) s_hw.scale = 8;
    e = getenv("RECOMP_HW_FX_SCALE");
    s_hw.fx_scale = e ? atoi(e) : 1;
    if (s_hw.fx_scale < 1) s_hw.fx_scale = 1;
    if (s_hw.fx_scale > s_hw.scale) s_hw.fx_scale = s_hw.scale;
    s_hw.nocull = getenv("RECOMP_HW_NOCULL") != NULL;
    s_hw.cpu_vsh = getenv("RECOMP_HW_CPU_VSH") != NULL;
    e = getenv("RECOMP_HW_VSYNC");
    s_hw.vsync = e ? atoi(e) != 0 : 1;
    s_hw.aspect = 4.0f / 3.0f;
    e = getenv("RECOMP_HW_ASPECT");
    if (e && *e) {
        const char *colon = strchr(e, ':');
        float a = (float)atof(e);
        if (colon && atof(colon + 1) > 0.0)
            a /= (float)atof(colon + 1);
        if (a >= 1.0f && a <= 4.0f)
            s_hw.aspect = a;
    }
    s_hw.widen = s_hw.aspect / (4.0f / 3.0f);
    if (s_hw.widen < 1.0f) s_hw.widen = 1.0f;

#if !RESOT_HW_D3D11
    /* RE-SoT (Android): the host's window already fills the screen, and the
     * only renderer is the native encoder on Vulkan. */
    return ng_init("vulkan");
#else
    e = getenv("RECOMP_HW_FULLSCREEN");          /* RE-SoT: "0" is a window */
    if (e && *e && strcmp(e, "0") != 0) {
        MONITORINFO mi;
        mi.cbSize = sizeof mi;
        if (GetMonitorInfoA(MonitorFromWindow(s_hw.hwnd, MONITOR_DEFAULTTONEAREST), &mi)) {
            SetWindowLongPtrA(s_hw.hwnd, GWL_STYLE, WS_POPUP | WS_VISIBLE);
            SetWindowPos(s_hw.hwnd, HWND_TOP, mi.rcMonitor.left, mi.rcMonitor.top,
                         mi.rcMonitor.right - mi.rcMonitor.left,
                         mi.rcMonitor.bottom - mi.rcMonitor.top,
                         SWP_FRAMECHANGED | SWP_NOACTIVATE);
        }
    } else {
        /* A window large enough to be worth rendering above guest resolution:
         * 1280x960 at 4:3, the same width and less height when wider. */
        wr.left = 0; wr.top = 0; wr.right = 1280;
        wr.bottom = (LONG)(1280.0f / s_hw.aspect + 0.5f);
        AdjustWindowRect(&wr, WS_OVERLAPPEDWINDOW, FALSE);
        SetWindowPos(s_hw.hwnd, NULL, 0, 0, wr.right - wr.left, wr.bottom - wr.top,
                     SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE);
    }

    memset(&sd, 0, sizeof sd);
    sd.BufferCount = 2;
    sd.BufferDesc.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = s_hw.hwnd;
    sd.SampleDesc.Count = 1;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
    /* RE-SoT: these modes bypass every D3D11 device/context/resource call. */
    e = getenv("RESOT_RENDERER");
    if (e && (!_stricmp(e, "d3d12") || !_stricmp(e, "vulkan")))
        if (ng_init(e)) return 1;
    hr = D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, 0,
                                    NULL, 0, D3D11_SDK_VERSION, &sd,
                                    &s_hw.swap, &s_hw.dev, &fl, &s_hw.ctx);
    if (FAILED(hr)) {
        fprintf(stderr, "  [HW] D3D11CreateDeviceAndSwapChain failed 0x%08lX\n", hr);
        return 0;
    }
    fl = ID3D11Device_GetFeatureLevel(s_hw.dev);
    hw_resize_backbuffer();
    if (!s_hw.bb_rtv) return 0; /* RE-SoT: do not report a usable backend without output. */

    if (!(b = hw_compile("vs_main", "vs_4_0"))) return 0;
    ID3D11Device_CreateVertexShader(s_hw.dev, ID3D10Blob_GetBufferPointer(b),
                                    ID3D10Blob_GetBufferSize(b), NULL, &s_hw.vs);
    ID3D11Device_CreateInputLayout(s_hw.dev, il, 8, ID3D10Blob_GetBufferPointer(b),
                                   ID3D10Blob_GetBufferSize(b), &s_hw.layout);
    ID3D10Blob_Release(b);
    if (!(b = hw_compile("vs_blit", "vs_4_0"))) return 0;
    ID3D11Device_CreateVertexShader(s_hw.dev, ID3D10Blob_GetBufferPointer(b),
                                    ID3D10Blob_GetBufferSize(b), NULL, &s_hw.vs_blit);
    ID3D10Blob_Release(b);
    if (!(b = hw_compile("ps_main", "ps_4_0"))) return 0;
    ID3D11Device_CreatePixelShader(s_hw.dev, ID3D10Blob_GetBufferPointer(b),
                                   ID3D10Blob_GetBufferSize(b), NULL, &s_hw.ps);
    ID3D10Blob_Release(b);
    if (!(b = hw_compile("ps_blit", "ps_4_0"))) return 0;
    ID3D11Device_CreatePixelShader(s_hw.dev, ID3D10Blob_GetBufferPointer(b),
                                   ID3D10Blob_GetBufferSize(b), NULL, &s_hw.ps_blit);
    ID3D10Blob_Release(b);
    /* RE-SoT: compile the alpha-preserving host panel shader independently. */
    if (!(b = hw_compile("ps_debug", "ps_4_0"))) return 0;
    ID3D11Device_CreatePixelShader(s_hw.dev, ID3D10Blob_GetBufferPointer(b),
                                   ID3D10Blob_GetBufferSize(b), NULL, &s_hw.ps_debug);
    ID3D10Blob_Release(b);
    {
        D3D11_BLEND_DESC bd;
        memset(&bd, 0, sizeof bd);
        bd.RenderTarget[0].BlendEnable = TRUE;
        bd.RenderTarget[0].SrcBlend = D3D11_BLEND_SRC_ALPHA;
        bd.RenderTarget[0].DestBlend = D3D11_BLEND_INV_SRC_ALPHA;
        bd.RenderTarget[0].BlendOp = D3D11_BLEND_OP_ADD;
        bd.RenderTarget[0].SrcBlendAlpha = D3D11_BLEND_ONE;
        bd.RenderTarget[0].DestBlendAlpha = D3D11_BLEND_INV_SRC_ALPHA;
        bd.RenderTarget[0].BlendOpAlpha = D3D11_BLEND_OP_ADD;
        bd.RenderTarget[0].RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE_ALL;
        ID3D11Device_CreateBlendState(s_hw.dev, &bd, &s_hw.debug_blend);
    }
    if (!(b = hw_compile("ps_solid", "ps_4_0"))) return 0;
    ID3D11Device_CreatePixelShader(s_hw.dev, ID3D10Blob_GetBufferPointer(b),
                                   ID3D10Blob_GetBufferSize(b), NULL, &s_hw.ps_solid);
    ID3D10Blob_Release(b);
    if (!s_hw.vs || !s_hw.ps || !s_hw.layout || !s_hw.vs_blit || !s_hw.ps_blit
        || !s_hw.ps_solid || !s_hw.ps_debug || !s_hw.debug_blend) /* RE-SoT */
        return 0;

    {
        D3D11_BUFFER_DESC bd;
        memset(&bd, 0, sizeof bd);
        /* Rings: a batch is appended with NO_OVERWRITE and the buffer is
         * only discarded when it wraps. Discarding a buffer sized for the
         * largest batch on every draw made the driver hand out megabytes of
         * fresh memory hundreds of times a frame. */
        bd.ByteWidth = HW_VB_BYTES;
        bd.Usage = D3D11_USAGE_DYNAMIC;
        bd.BindFlags = D3D11_BIND_VERTEX_BUFFER;
        bd.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
        ID3D11Device_CreateBuffer(s_hw.dev, &bd, NULL, &s_hw.vb);
        bd.ByteWidth = HW_IB_BYTES;
        bd.BindFlags = D3D11_BIND_INDEX_BUFFER;
        ID3D11Device_CreateBuffer(s_hw.dev, &bd, NULL, &s_hw.ib);
        bd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
        bd.ByteWidth = sizeof(HwVsConst);
        ID3D11Device_CreateBuffer(s_hw.dev, &bd, NULL, &s_hw.vs_cb);
        bd.ByteWidth = (sizeof(HwPsConst) + 15) & ~15u;
        ID3D11Device_CreateBuffer(s_hw.dev, &bd, NULL, &s_hw.ps_cb);
    }
    {
        D3D11_RASTERIZER_DESC rd;
        static const D3D11_CULL_MODE modes[3] = {
            D3D11_CULL_NONE, D3D11_CULL_BACK, D3D11_CULL_FRONT };
        memset(&rd, 0, sizeof rd);
        rd.FillMode = D3D11_FILL_SOLID;
        rd.DepthClipEnable = FALSE;
        rd.ScissorEnable = TRUE;
        for (i = 0; i < 3; i++) {
            rd.CullMode = modes[i];
            rd.FrontCounterClockwise = FALSE;
            ID3D11Device_CreateRasterizerState(s_hw.dev, &rd, &s_hw.rs[i]);
            rd.FrontCounterClockwise = TRUE;
            ID3D11Device_CreateRasterizerState(s_hw.dev, &rd, &s_hw.rs_ccw[i]);
        }
        rd.CullMode = D3D11_CULL_NONE;
        rd.ScissorEnable = FALSE;
        ID3D11Device_CreateRasterizerState(s_hw.dev, &rd, &s_hw.rs_blit);
    }
    {
        D3D11_SAMPLER_DESC sm;
        memset(&sm, 0, sizeof sm);
        sm.Filter = D3D11_FILTER_MIN_MAG_LINEAR_MIP_POINT;
        sm.AddressU = sm.AddressV = sm.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;
        sm.MaxLOD = D3D11_FLOAT32_MAX;
        ID3D11Device_CreateSamplerState(s_hw.dev, &sm, &s_hw.samp_blit);
    }
    {
        /* What an unusable stage samples: opaque white. */
        D3D11_TEXTURE2D_DESC td;
        D3D11_SUBRESOURCE_DATA init;
        ID3D11Texture2D *t = NULL;
        static const uint32_t px = 0xFFFFFFFFu;
        memset(&td, 0, sizeof td);
        td.Width = td.Height = 1; td.MipLevels = 1; td.ArraySize = 1;
        td.Format = DXGI_FORMAT_B8G8R8A8_UNORM; td.SampleDesc.Count = 1;
        td.BindFlags = D3D11_BIND_SHADER_RESOURCE;
        init.pSysMem = &px; init.SysMemPitch = 4; init.SysMemSlicePitch = 4;
        ID3D11Device_CreateTexture2D(s_hw.dev, &td, &init, &t);
        if (t) {
            ID3D11Device_CreateShaderResourceView(s_hw.dev, (ID3D11Resource *)t,
                                                  NULL, &s_hw.white);
            ID3D11Texture2D_Release(t);
        }
    }
    s_hw.texs = (HwTexture *)calloc(HW_MAX_TEXTURES, sizeof(HwTexture));
    s_hw.verts = (HwVertex *)malloc(sizeof(HwVertex) * HW_MAX_VERTS);
    if (!s_hw.texs || !s_hw.verts || !s_hw.vb || !s_hw.ib || !s_hw.white)
        return 0;
    s_hw.cull_face = 0x405;
    s_hw.front_face = 0x900;
    /* RE-SoT: publish only after renderer resources initialized successfully. */
    InterlockedExchange(&s_hw_backend, 11);
    fprintf(stderr, "  [HW] active renderer: %s\n",
            "Direct3D 11");
    xbox_FramebufferWindowHwMode(1);
    /* RE-SoT: name the actual API in diagnostics, including the interop path. */
    fprintf(stderr, "  [HW] %s rasteriser up (feature level 0x%X, scale %dx,"
                    " aspect %.3f, vsync %d, vertex programs on the %s)\n",
            "Direct3D 11",
            (unsigned)fl, s_hw.scale, s_hw.aspect, s_hw.vsync,
            s_hw.cpu_vsh ? "CPU" : "GPU");
    fflush(stderr);
    return 1;
#endif /* RESOT_HW_D3D11 */
}

/* Is the hardware path in use? Tries to bring it up on the first call that
 * finds a window, and gives a single answer for the rest of the run. */
static int hw_active(void)
{
    if (!s_hw.tried) {
        s_hw.tried = 1;
        InitializeCriticalSection(&s_hw.lock);
        if (getenv("RECOMP_HW"))
            s_hw.ok = hw_init();
    }
    return s_hw.ok;
}

static uint32_t hw_zmax_bits(void)
{
    return ((s_gpu.format >> 4) & 0xF) == 1 ? 0xFFFFu : 0xFFFFFFu;
}

#if RESOT_HW_D3D11
/* The colour surface the title is drawing into. */
static HwSurface *hw_surface(void)
{
    uint32_t bpp = surface_bpp(), off, w, h, i;
    HwSurface *s = NULL, *oldest = &s_hw.surf[0];
    D3D11_TEXTURE2D_DESC td;

    if (!s_gpu.color_offset || !bpp || !s_gpu.pitch)
        return NULL;
    off = dma_resolve(s_gpu.color_offset);
    w = s_gpu.pitch / bpp;
    h = s_gpu.clip_y + s_gpu.clip_h;
    if (!w || !h || w > 4096 || h > 4096)
        return NULL;
    for (i = 0; i < HW_MAX_SURFACES; i++) {
        HwSurface *c = &s_hw.surf[i];
        if (c->tex && c->offset == off && c->w == w) {
            if (c->h >= h && c->sc == hw_surface_scale(w))
                return c;
            s = c;                      /* same surface, taller than thought */
            break;
        }
        if (!c->tex) { oldest = c; continue; }
        if (oldest->tex && c->drawn_frame < oldest->drawn_frame)
            oldest = c;
    }
    if (!s)
        s = oldest;
    if (s->tex) {
        if (s_hw.front == s) s_hw.front = NULL;
        if (s_hw.biggest == s) s_hw.biggest = NULL;
        ID3D11ShaderResourceView_Release(s->srv);
        ID3D11RenderTargetView_Release(s->rtv);
        ID3D11Texture2D_Release(s->tex);
        memset(s, 0, sizeof *s);
    }
    memset(&td, 0, sizeof td);
    td.Width = hw_px(w, hw_surface_scale(w));
    td.Height = hw_py(h,hw_surface_scale(w));
    td.MipLevels = 1; td.ArraySize = 1;
    td.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
    td.SampleDesc.Count = 1;
    td.BindFlags = D3D11_BIND_RENDER_TARGET | D3D11_BIND_SHADER_RESOURCE;
    if (FAILED(ID3D11Device_CreateTexture2D(s_hw.dev, &td, NULL, &s->tex)))
        return NULL;
    ID3D11Device_CreateRenderTargetView(s_hw.dev, (ID3D11Resource *)s->tex, NULL, &s->rtv);
    ID3D11Device_CreateShaderResourceView(s_hw.dev, (ID3D11Resource *)s->tex, NULL, &s->srv);
    {
        static const float black[4] = {0, 0, 0, 1};
        ID3D11DeviceContext_ClearRenderTargetView(s_hw.ctx, s->rtv, black);
    }
    s->offset = off; s->w = w; s->h = h; s->sc = hw_surface_scale(w);
    s->drawn_frame = s_hw.frame;
    fprintf(stderr, "  [HW] surface 0x%08X %ux%u x%u (format %08X pitch %08X clip %ux%u+%u+%u mask %08X zeta %08X)\n",
            off, w, h, s->sc, s_gpu.format, s_gpu.pitch, s_gpu.clip_w, s_gpu.clip_h,
            s_gpu.clip_x, s_gpu.clip_y, s_gpu.color_mask, s_gpu.zeta_offset);
    return s;
}

static HwDepth *hw_depth(const HwSurface *s)
{
    uint32_t off = s_gpu.zeta_offset, i;
    HwDepth *d = NULL;
    D3D11_TEXTURE2D_DESC td;
    static uint32_t next;

    if (!off)
        return NULL;
    for (i = 0; i < HW_MAX_DEPTHS; i++)
        if (s_hw.depth[i].tex && s_hw.depth[i].offset == off
            && s_hw.depth[i].w == hw_px(s->w,s->sc) && s_hw.depth[i].h == hw_py(s->h,s->sc))
            return &s_hw.depth[i];
    for (i = 0; i < HW_MAX_DEPTHS && !d; i++)
        if (!s_hw.depth[i].tex)
            d = &s_hw.depth[i];
    if (!d) {
        d = &s_hw.depth[next++ % HW_MAX_DEPTHS];
        ID3D11DepthStencilView_Release(d->dsv);
        ID3D11Texture2D_Release(d->tex);
        memset(d, 0, sizeof *d);
    }
    memset(&td, 0, sizeof td);
    td.Width = hw_px(s->w, s->sc);
    td.Height = hw_py(s->h,s->sc);
    td.MipLevels = 1; td.ArraySize = 1;
    td.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;
    td.SampleDesc.Count = 1;
    td.BindFlags = D3D11_BIND_DEPTH_STENCIL;
    if (FAILED(ID3D11Device_CreateTexture2D(s_hw.dev, &td, NULL, &d->tex)))
        return NULL;
    ID3D11Device_CreateDepthStencilView(s_hw.dev, (ID3D11Resource *)d->tex, NULL, &d->dsv);
    ID3D11DeviceContext_ClearDepthStencilView(s_hw.ctx, d->dsv, D3D11_CLEAR_DEPTH, 1.0f, 0);
    d->offset = off; d->w = td.Width; d->h = td.Height;
    return d;
}

#endif /* RESOT_HW_D3D11 */

/* A cheap fingerprint of a texture's bytes: enough to notice a texture being
 * rewritten in place (streamed mips, a video frame) without reading all of
 * it for every batch. Checked once per frame per texture. */
static uint32_t hw_tex_bytes(const Texture *t)
{
    uint32_t bb = d3d8_format_dxt_block_bytes(t->color);
    if (bb)
        return ((t->width + 3) / 4) * ((t->height + 3) / 4) * bb;
    if (tex_size_from_format(t->color))
        return t->width * t->height * tex_texel_bytes(t->color);
    return t->pitch * t->height;
}

static uint32_t hw_tex_hash(const Texture *t)
{
    const uint8_t *p = (const uint8_t *)xbox_GetMemoryOffset() + t->offset;
    /* RE-SoT: hash every face; rewriting a nonzero face must invalidate it. */
    uint32_t n = (t->cube ? 6 * tex_face_stride(t) : hw_tex_bytes(t)) / 4, step = n > 2048 ? n / 2048 : 1, i;
    uint32_t h = 2166136261u;
    for (i = 0; i < n; i += step)
        h = (h ^ ((const uint32_t *)p)[i]) * 16777619u;
    if (t->palette)
        for (i = 0; i < 256; i += 8)
            h = (h ^ ((const uint32_t *)((const uint8_t *)xbox_GetMemoryOffset()
                                         + t->palette))[i]) * 16777619u;
    return h;
}

static int hw_mem_ok(uint32_t va, uint32_t bytes)
{
    /* Everything a texture can name: the image and heap, or the contiguous
     * window and its tiled alias. */
    if (va >= 0x00010000u && va < 0x04000000u && bytes <= 0x04000000u - va)
        return 1;
    if (va >= 0x80000000u && va < 0x84000000u && bytes <= 0x84000000u - va)
        return 1;
    return 0;
}

#if RESOT_HW_D3D11
static ID3D11ShaderResourceView *hw_texture(int stage, const HwSurface *target)
{
    const Texture *t = &s_gpu.texs[stage];
    HwTexture *c = NULL, *victim = NULL;
    uint32_t i, slot, hash, x, y, face, face_stride, *px;
    D3D11_TEXTURE2D_DESC td;
    int mips;

    if (!t->valid || t->width > 4096 || t->height > 4096)
        return NULL;
    /* A render target used as a texture. */
    /* The same guest memory can have been drawn into under more than one
     * shape (the demo's glow chain reuses 0x806C0000 as 640x480 and as
     * 320x240): take the one whose width the stage declares, else the one
     * drawn into most recently. */
    {
        HwSurface *best = NULL;
        for (i = 0; i < HW_MAX_SURFACES; i++) {
            HwSurface *c2 = &s_hw.surf[i];
            if (t->cube || !c2->tex || c2->offset != t->offset)
                continue;
            if (!best || (c2->w == t->width && best->w != t->width)
                || ((c2->w == t->width) == (best->w == t->width)
                    && c2->drawn_frame > best->drawn_frame))
                best = c2;
        }
        /* RE-SoT: frame-trace evidence for stale render-target aliases in the
         * post-processing chain; diagnostic only, no per-frame disk output. */
        if (best && s_ftrace == 2)
            fprintf(stderr, "  [HW-TEX] stage=%d offset=%08X declared=%ux%u selected=%ux%u frame=%u now=%u feedback=%d\n",
                stage, t->offset, t->width, t->height, best->w, best->h,
                best->drawn_frame, s_hw.frame, best == target);
        if (best)
            return best == target ? NULL : best->srv;
    }
    if (!hw_mem_ok(t->offset, t->cube ? 6 * tex_face_stride(t) : hw_tex_bytes(t)))
        return NULL;

    slot = (t->offset >> 6) * 2654435761u >> 22;      /* 10 bits */
    for (i = 0; i < 16; i++) {
        HwTexture *e = &s_hw.texs[(slot + i) & (HW_MAX_TEXTURES - 1)];
        if (e->srv && e->offset == t->offset && e->fmt == t->color
            && e->w == t->width && e->h == t->height && e->pitch == t->pitch
            && e->palette == t->palette && e->cube == (uint32_t)t->cube
            && e->levels == t->levels) {
            c = e;
            break;
        }
        if (!victim || !e->srv || (victim->srv && e->used_frame < victim->used_frame))
            victim = e;
    }
    if (c && c->checked_frame == s_hw.frame) {
        c->used_frame = s_hw.frame;
        return c->srv;
    }
    hash = hw_tex_hash(t);
    if (c && c->hash == hash) {
        c->checked_frame = c->used_frame = s_hw.frame;
        return c->srv;
    }
    if (!c) {
        c = victim;
        if (c->srv) {
            ID3D11ShaderResourceView_Release(c->srv);
            ID3D11Texture2D_Release(c->tex);
        }
        memset(c, 0, sizeof *c);
    }

    px = (uint32_t *)malloc((size_t)t->width * t->height * 4 * (t->cube ? 6 : 1));
    if (!px)
        return NULL;
    /* RE-SoT: NV2A stores each face with its mip chain and 128-byte alignment. */
    face_stride = t->cube ? tex_face_stride(t) : 0;
    for (face = 0; face < (t->cube ? 6u : 1u); face++)
    for (y = 0; y < t->height; y++)
        for (x = 0; x < t->width; x++) {
            uint32_t argb = 0xFFFFFFFFu;
            if (!sample_tex(t, face * face_stride, x, y, &argb))
                argb = 0xFFFFFFFFu;
            px[((size_t)face * t->height + y) * t->width + x] = argb;
        }
    mips = t->levels > 1 && tex_size_from_format(t->color);
    if (!c->tex) {
        memset(&td, 0, sizeof td);
        td.Width = t->width; td.Height = t->height;
        td.MipLevels = mips ? 0 : 1; td.ArraySize = t->cube ? 6 : 1;
        td.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
        td.SampleDesc.Count = 1;
        td.BindFlags = D3D11_BIND_SHADER_RESOURCE | (mips ? D3D11_BIND_RENDER_TARGET : 0);
        td.MiscFlags = (mips ? D3D11_RESOURCE_MISC_GENERATE_MIPS : 0)
                     | (t->cube ? D3D11_RESOURCE_MISC_TEXTURECUBE : 0);
        if (FAILED(ID3D11Device_CreateTexture2D(s_hw.dev, &td, NULL, &c->tex))) {
            free(px);
            memset(c, 0, sizeof *c);
            return NULL;
        }
        ID3D11Device_CreateShaderResourceView(s_hw.dev, (ID3D11Resource *)c->tex,
                                              NULL, &c->srv);
    }
    /* RE-SoT: subresources are mip + face * host mip count. */
    ID3D11Texture2D_GetDesc(c->tex, &td);
    for (face = 0; face < (t->cube ? 6u : 1u); face++)
        ID3D11DeviceContext_UpdateSubresource(s_hw.ctx, (ID3D11Resource *)c->tex,
            face * td.MipLevels, NULL, px + (size_t)face * t->width * t->height,
            t->width * 4, 0);
    if (mips)
        ID3D11DeviceContext_GenerateMips(s_hw.ctx, c->srv);
    free(px);
    c->offset = t->offset; c->fmt = t->color; c->w = t->width; c->h = t->height;
    c->pitch = t->pitch; c->palette = t->palette;
    c->cube = t->cube; c->levels = t->levels; /* RE-SoT: cache resource shape. */
    c->hash = hash;
    c->checked_frame = c->used_frame = s_hw.frame;
    /* RE-SoT: make real cube use observable in an explicitly requested trace. */
    if (t->cube && s_ftrace == 2)
        fprintf(stderr, "  [HW-CUBE] stage=%d offset=%08X size=%ux%u stride=%u levels=%u\n",
            stage, t->offset, t->width, t->height, face_stride, t->levels);
    s_hw.tex_uploads++;
    return c->srv;
}

static ID3D11SamplerState *hw_sampler(const Texture *t)
{
    static const D3D11_TEXTURE_ADDRESS_MODE am[6] = {
        D3D11_TEXTURE_ADDRESS_CLAMP, D3D11_TEXTURE_ADDRESS_WRAP,
        D3D11_TEXTURE_ADDRESS_MIRROR, D3D11_TEXTURE_ADDRESS_CLAMP,
        D3D11_TEXTURE_ADDRESS_BORDER, D3D11_TEXTURE_ADDRESS_CLAMP };
    uint32_t u = t->addr_u < 6 ? t->addr_u : 3, v = t->addr_v < 6 ? t->addr_v : 3;
    uint32_t mag = (t->filter >> 24) & 0xF, min = (t->filter >> 16) & 0xFF;
    int lin = mag == 2 || min == 2 || min == 4 || min == 6 || min == 3 || min == 5;

    if (!s_hw.samp[u][v][lin]) {
        D3D11_SAMPLER_DESC sm;
        memset(&sm, 0, sizeof sm);
        sm.Filter = lin ? D3D11_FILTER_MIN_MAG_MIP_LINEAR : D3D11_FILTER_MIN_MAG_MIP_POINT;
        sm.AddressU = am[u]; sm.AddressV = am[v];
        sm.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;
        sm.MaxLOD = D3D11_FLOAT32_MAX;
        ID3D11Device_CreateSamplerState(s_hw.dev, &sm, &s_hw.samp[u][v][lin]);
    }
    return s_hw.samp[u][v][lin];
}

static D3D11_BLEND hw_blend_factor(uint32_t f, int alpha)
{
    switch (f) {
    case 0x0000: return D3D11_BLEND_ZERO;
    case 0x0001: return D3D11_BLEND_ONE;
    case 0x0300: return alpha ? D3D11_BLEND_SRC_ALPHA : D3D11_BLEND_SRC_COLOR;
    case 0x0301: return alpha ? D3D11_BLEND_INV_SRC_ALPHA : D3D11_BLEND_INV_SRC_COLOR;
    case 0x0302: return D3D11_BLEND_SRC_ALPHA;
    case 0x0303: return D3D11_BLEND_INV_SRC_ALPHA;
    case 0x0304: return D3D11_BLEND_DEST_ALPHA;
    case 0x0305: return D3D11_BLEND_INV_DEST_ALPHA;
    case 0x0306: return alpha ? D3D11_BLEND_DEST_ALPHA : D3D11_BLEND_DEST_COLOR;
    case 0x0307: return alpha ? D3D11_BLEND_INV_DEST_ALPHA : D3D11_BLEND_INV_DEST_COLOR;
    case 0x0308: return alpha ? D3D11_BLEND_ONE : D3D11_BLEND_SRC_ALPHA_SAT;
    case 0x8001: case 0x8003: return D3D11_BLEND_BLEND_FACTOR;
    case 0x8002: case 0x8004: return D3D11_BLEND_INV_BLEND_FACTOR;
    default:     return f ? D3D11_BLEND_ONE : D3D11_BLEND_ZERO;
    }
}

static ID3D11BlendState *hw_blend_state(void)
{
    int enable = s_gpu.blend_enable
              && !(s_gpu.blend_sfactor == 1 && s_gpu.blend_dfactor == 0);
    uint32_t mask = 0;
    uint64_t key;
    D3D11_BLEND_DESC bd;
    int i;

    if (s_gpu.color_mask & 0x00010000u) mask |= D3D11_COLOR_WRITE_ENABLE_RED;
    if (s_gpu.color_mask & 0x00000100u) mask |= D3D11_COLOR_WRITE_ENABLE_GREEN;
    if (s_gpu.color_mask & 0x00000001u) mask |= D3D11_COLOR_WRITE_ENABLE_BLUE;
    if (s_gpu.color_mask & 0x01000000u) mask |= D3D11_COLOR_WRITE_ENABLE_ALPHA;
    key = (uint64_t)mask | ((uint64_t)enable << 4);
    if (enable)
        key |= ((uint64_t)(s_gpu.blend_sfactor & 0xFFFF) << 8)
             | ((uint64_t)(s_gpu.blend_dfactor & 0xFFFF) << 24)
             | ((uint64_t)(s_gpu.blend_equation & 0xFFFF) << 40);
    for (i = 0; i < s_hw.nblend; i++)
        if (s_hw.blend[i].key == key)
            return s_hw.blend[i].st;
    memset(&bd, 0, sizeof bd);
    bd.RenderTarget[0].BlendEnable = enable;
    bd.RenderTarget[0].RenderTargetWriteMask = (UINT8)mask;
    bd.RenderTarget[0].SrcBlend = hw_blend_factor(s_gpu.blend_sfactor, 0);
    bd.RenderTarget[0].DestBlend = hw_blend_factor(s_gpu.blend_dfactor, 0);
    bd.RenderTarget[0].SrcBlendAlpha = hw_blend_factor(s_gpu.blend_sfactor, 1);
    bd.RenderTarget[0].DestBlendAlpha = hw_blend_factor(s_gpu.blend_dfactor, 1);
    switch (s_gpu.blend_equation) {
    case 0x800A: bd.RenderTarget[0].BlendOp = D3D11_BLEND_OP_REV_SUBTRACT; break;
    case 0x800B: bd.RenderTarget[0].BlendOp = D3D11_BLEND_OP_SUBTRACT; break;
    case 0x8007: bd.RenderTarget[0].BlendOp = D3D11_BLEND_OP_MIN; break;
    case 0x8008: bd.RenderTarget[0].BlendOp = D3D11_BLEND_OP_MAX; break;
    default:     bd.RenderTarget[0].BlendOp = D3D11_BLEND_OP_ADD; break;
    }
    bd.RenderTarget[0].BlendOpAlpha = bd.RenderTarget[0].BlendOp;
    if (s_hw.nblend == 64)
        s_hw.nblend = 0;                 /* recycle: states are tiny */
    i = s_hw.nblend++;
    if (s_hw.blend[i].st)
        ID3D11BlendState_Release(s_hw.blend[i].st);
    s_hw.blend[i].st = NULL;
    ID3D11Device_CreateBlendState(s_hw.dev, &bd, &s_hw.blend[i].st);
    s_hw.blend[i].key = key;
    return s_hw.blend[i].st;
}

static ID3D11DepthStencilState *hw_depth_state(int have_depth)
{
    uint32_t test = have_depth && s_gpu.depth_test;
    uint32_t write = test && s_gpu.depth_mask;
    uint32_t key = test | (write << 1) | ((s_gpu.depth_func & 7) << 2);
    D3D11_DEPTH_STENCIL_DESC dd;
    int i;

    for (i = 0; i < s_hw.nds; i++)
        if (s_hw.ds[i].key == key)
            return s_hw.ds[i].st;
    memset(&dd, 0, sizeof dd);
    /* RE-SoT: disabling depth testing disables depth writes too. Forcing
     * ALWAYS when only DEPTH_MASK is set lets the pause fog grids (z=0.95)
     * overwrite the depth buffer and reject the Prince's later alpha-only
     * silhouette (z about 0.97), even though the game disabled depth testing. */
    dd.DepthEnable = test;
    dd.DepthWriteMask = write ? D3D11_DEPTH_WRITE_MASK_ALL : D3D11_DEPTH_WRITE_MASK_ZERO;
    dd.DepthFunc = test ? (D3D11_COMPARISON_FUNC)((s_gpu.depth_func & 7) + 1)
                        : D3D11_COMPARISON_ALWAYS;
    i = s_hw.nds < 32 ? s_hw.nds++ : 0;
    if (s_hw.ds[i].st)
        ID3D11DepthStencilState_Release(s_hw.ds[i].st);
    s_hw.ds[i].st = NULL;
    ID3D11Device_CreateDepthStencilState(s_hw.dev, &dd, &s_hw.ds[i].st);
    s_hw.ds[i].key = key;
    return s_hw.ds[i].st;
}

#endif /* RESOT_HW_D3D11 */

static void hw_color4(uint32_t argb, float out[4])
{
    nv2a_rc_unpack(argb, out);
}

#if RESOT_HW_D3D11
/* Bind everything a batch needs and return the surface, or NULL. prog is the
 * translated vertex program to run, or NULL for vertices the interpreter has
 * already transformed. */
static HwSurface *hw_bind_draw_state(const HwVsp *prog)
{
    HwSurface *s = hw_surface();
    HwDepth *d;
    HwPsConst pc;
    D3D11_MAPPED_SUBRESOURCE map;
    D3D11_VIEWPORT vp;
    D3D11_RECT sc;
    ID3D11ShaderResourceView *srv[8] = {0}; /* RE-SoT: four 2D and four cube slots. */
    ID3D11SamplerState *smp[4];
    HwVsConst *vc = &s_hw.vs_last;
    /* The header (vp, fogp, ws, pad) and then cur[]: everything in HwVsConst
     * before the program constants. */
    float hdr[16 + NV_VERTEX_ATTRS * 4], bf[4];
    int st, i;
    UINT stride = sizeof(HwVertex), zero = 0;
    uint32_t area;

    if (!s)
        return NULL;
    d = hw_depth(s);
    ID3D11DeviceContext_OMSetRenderTargets(s_hw.ctx, 1, &s->rtv, d ? d->dsv : NULL);
    vp.TopLeftX = 0; vp.TopLeftY = 0;
    vp.Width = (float)hw_px(s->w, s->sc);
    vp.Height = (float)(hw_py(s->h,s->sc));
    vp.MinDepth = 0; vp.MaxDepth = 1;
    ID3D11DeviceContext_RSSetViewports(s_hw.ctx, 1, &vp);
    sc.left = (LONG)hw_px(s_gpu.clip_x, s->sc);
    sc.top = (LONG)(hw_py(s_gpu.clip_y,s->sc));
    sc.right = (LONG)hw_px(s_gpu.clip_x + s_gpu.clip_w, s->sc);
    sc.bottom = (LONG)(hw_py(s_gpu.clip_y+s_gpu.clip_h,s->sc));
    ID3D11DeviceContext_RSSetScissorRects(s_hw.ctx, 1, &sc);

    {
        int mode = 0;
        ID3D11RasterizerState **set = s_hw.front_face == 0x901 ? s_hw.rs_ccw : s_hw.rs;
        if (s_hw.cull_enable && !s_hw.nocull)
            mode = s_hw.cull_face == 0x404 ? 2 : (s_hw.cull_face == 0x405 ? 1 : 0);
        ID3D11DeviceContext_RSSetState(s_hw.ctx, set[mode]);
    }
    hw_color4(s_gpu.blend_color, bf);
    ID3D11DeviceContext_OMSetBlendState(s_hw.ctx, hw_blend_state(), bf, 0xFFFFFFFFu);
    ID3D11DeviceContext_OMSetDepthStencilState(s_hw.ctx, hw_depth_state(d != NULL), 0);

    memset(&pc, 0, sizeof pc);
    for (i = 0; i < 8; i++) {
        pc.cw[i][0] = s_gpu.rc.color_icw[i]; pc.cw[i][1] = s_gpu.rc.alpha_icw[i];
        pc.cw[i][2] = s_gpu.rc.color_ocw[i]; pc.cw[i][3] = s_gpu.rc.alpha_ocw[i];
        hw_color4(s_gpu.rc.factor0[i], pc.fac0[i]);
        hw_color4(s_gpu.rc.factor1[i], pc.fac1[i]);
    }
    pc.ctl[0] = s_gpu.rc.control; pc.ctl[1] = s_gpu.rc.stage_program;
    pc.ctl[2] = s_gpu.rc.final0;  pc.ctl[3] = s_gpu.rc.final1;
    pc.atest[0] = s_gpu.alpha_test; pc.atest[1] = s_gpu.alpha_func;
    pc.atest[2] = s_gpu.alpha_ref;  pc.atest[3] = s_gpu.clip_plane_mode;
    hw_color4(s_gpu.rc.final_c0, pc.finc0);
    hw_color4(s_gpu.rc.final_c1, pc.finc1);
    hw_color4(s_gpu.fog_color, pc.fogc);       /* FOG_COLOR has R in bits 0-7 */
    { float r = pc.fogc[2]; pc.fogc[2] = pc.fogc[0]; pc.fogc[0] = r; }
    pc.misc[0] = (uint32_t)s_gpu.rc_seen;
    for (st = 0; st < 4; st++) {
        const Texture *t = &s_gpu.texs[st];
        uint32_t mode = (s_gpu.rc.stage_program >> (st * 5)) & 0x1F;
        srv[st] = NULL;
        if ((s_gpu.rc_seen ? (mode >= 1 && mode <= 3) : st == 0) && t->valid)
            srv[st] = hw_texture(st, s);
        pc.tscale[st][0] = pc.tscale[st][1] = 1.0f;
        if (t->valid && !tex_size_from_format(t->color)) {
            pc.tscale[st][0] = 1.0f / (float)t->width;
            pc.tscale[st][1] = 1.0f / (float)t->height;
        }
        pc.tscale[st][2] = srv[st] ? 1.0f : 0.0f;
        if (!srv[st])
            srv[st] = s_hw.white;
        /* RE-SoT: cube directions use xyz without projective division. */
        pc.tscale[st][3] = t->cube && pc.tscale[st][2] > 0.5f ? 1.0f : 0.0f;
        if (pc.tscale[st][3] > 0.5f) {
            srv[st + 4] = srv[st];
            srv[st] = s_hw.white;
        }
        smp[st] = hw_sampler(t);
    }
    /* Consecutive batches mostly share their combiner set-up. */
    if (!s_hw.ps_last_valid || memcmp(&pc, &s_hw.ps_last, sizeof pc)) {
        if (SUCCEEDED(ID3D11DeviceContext_Map(s_hw.ctx, (ID3D11Resource *)s_hw.ps_cb, 0,
                                              D3D11_MAP_WRITE_DISCARD, 0, &map))) {
            memcpy(map.pData, &pc, sizeof pc);
            ID3D11DeviceContext_Unmap(s_hw.ctx, (ID3D11Resource *)s_hw.ps_cb, 0);
            s_hw.ps_last = pc;
            s_hw.ps_last_valid = 1;
        }
    }
    memset(hdr, 0, sizeof hdr);
    hdr[0] = 2.0f / (float)s->w; hdr[1] = 2.0f / (float)s->h;
    hdr[2] = 1.0f / (float)hw_zmax_bits();
    hdr[4] = s_gpu.fog_param[0]; hdr[5] = s_gpu.fog_param[1];
    hdr[6] = (float)s_gpu.fog_mode; hdr[7] = s_gpu.fog_enable ? 1.0f : 0.0f;
    {
        /* Only the full display surface: the glow chain draws w == 1 quads
         * into parts of its own targets (320 wide into a 640 surface), and
         * moving those vertices left the level a flat colour.
         *   ws.x: the 2D (w == 1) keeps its 4:3 size around the centre.
         * The 3D needs nothing here: the target's hooks widen the title's
         * own projection (src/<target>/target_hooks.c). */
        int main_view = s->w == 640 && s_gpu.clip_w == 640 && s_gpu.clip_h >= 448;
        hdr[8] = main_view && !s_hw.batch_full_width ? 1.0f / s_hw.widen : 1.0f;
        /* RE-SoT: demo pause layers have already passed through the Hor+
         * projection. Undo that narrowing, rather than narrowing them again. */
        if (main_view && s_hw.batch_projected_screen)
            hdr[8] = s_hw.widen;
        hdr[9] = (float)s->w; hdr[10] = 1.0f;
        if (main_view && s_hw.batch_hud) {
            /* RE-SoT: every piece on one side gets the same shift, so frame,
             * fill and pips stay aligned (hw_hud_shift). */
            hdr[8] = 1.0f;
            hdr[11] = hw_hud_shift();
        }
    }
    /* RE-SoT: an attribute with no array reads the value last set with
     * SET_VERTEX_DATA*, as on the NV2A -- not 0,0,0,1. XDK D3D's
     * SetVertexData4ub gives a whole batch one diffuse colour that way; the
     * demo draws its shadow silhouettes with it, and with 0,0,0,1 every
     * silhouette came out black on black and no shadow was cast. */
    memcpy(&hdr[16], s_gpu.imm_attr, sizeof s_gpu.imm_attr);
    {
        /* A discard map loses the old contents, so the constants go with
         * every upload that needs them -- and the upload is skipped when
         * neither the header nor (for a program) the constants moved. */
        uint32_t gen = nv2a_vsh_constant_generation();
        int full = prog != NULL;
        if (!s_hw.vs_last_valid || memcmp(hdr, vc, sizeof hdr)
            || (full && (!s_hw.vs_last_full || s_hw.vs_last_gen != gen))) {
            memcpy(vc, hdr, sizeof hdr);
            if (full)
                memcpy(vc->c, nv2a_vsh_constants(), sizeof vc->c);
            if (SUCCEEDED(ID3D11DeviceContext_Map(s_hw.ctx, (ID3D11Resource *)s_hw.vs_cb, 0,
                                                  D3D11_MAP_WRITE_DISCARD, 0, &map))) {
                memcpy(map.pData, vc, full ? sizeof *vc : sizeof hdr);
                ID3D11DeviceContext_Unmap(s_hw.ctx, (ID3D11Resource *)s_hw.vs_cb, 0);
                s_hw.vs_last_valid = 1;
                s_hw.vs_last_full = full;
                s_hw.vs_last_gen = gen;
            }
        }
    }
    ID3D11DeviceContext_IASetInputLayout(s_hw.ctx, prog ? s_hw.layout_prog : s_hw.layout);
    ID3D11DeviceContext_IASetPrimitiveTopology(s_hw.ctx, D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    ID3D11DeviceContext_IASetVertexBuffers(s_hw.ctx, 0, 1, &s_hw.vb, &stride, &zero);
    ID3D11DeviceContext_VSSetShader(s_hw.ctx, prog ? prog->vs : s_hw.vs, NULL, 0);
    ID3D11DeviceContext_VSSetConstantBuffers(s_hw.ctx, 0, 1, &s_hw.vs_cb);
    ID3D11DeviceContext_PSSetShader(s_hw.ctx, s_hw.ps, NULL, 0);
    ID3D11DeviceContext_PSSetConstantBuffers(s_hw.ctx, 0, 1, &s_hw.ps_cb);
    ID3D11DeviceContext_PSSetShaderResources(s_hw.ctx, 0, 8, srv);
    ID3D11DeviceContext_PSSetSamplers(s_hw.ctx, 0, 4, smp);

#if RESOT_RUNTIME_RETAIL
    /* RE-SoT: normalize supersampled/widened host pixels to guest pixels. */
    {
        double pixel_scale = ((double)hw_px(s->w, s->sc) / s->w) * ((double)hw_py(s->h,s->sc)/s->h);
        hw_visibility_poll();
        if (!nv_hw_vis_draw(&s_hw_visibility, s_hw.dev, s_hw.ctx, pixel_scale)) {
            fprintf(stderr, "[HW] fatal visibility query creation/allocation failure\n");
            abort(); /* RE-SoT: propagate terminal renderer failure immediately. */
        }
    }
#endif
    s->drawn_frame = s_hw.frame;
    area = s->w * s->h;
    if (!s_hw.biggest || area >= s_hw.biggest_area) {
        s_hw.biggest = s;
        s_hw.biggest_area = area;
    }
    return s;
}

/* RE-SoT: RECOMP_HW_GLOW_DUMP=<prefix>, under the frame trace: the display
 * surface as it is just before the first batch that samples another render
 * target into it (the title's glow composite), and as it is at the flip, at
 * host resolution. The two differ only by the post-processing, so they show
 * whether it lands where the scene is. */
static void hw_dump_surface(ID3D11Texture2D *tex, const char *path)
{
    D3D11_TEXTURE2D_DESC td;
    D3D11_MAPPED_SUBRESOURCE map;
    ID3D11Texture2D *stage = NULL;
    FILE *f;
    uint32_t y, x, row, hdr[13];
    uint8_t *line;

    ID3D11Texture2D_GetDesc(tex, &td);
    td.Usage = D3D11_USAGE_STAGING; td.BindFlags = 0;
    td.CPUAccessFlags = D3D11_CPU_ACCESS_READ; td.MiscFlags = 0;
    if (FAILED(ID3D11Device_CreateTexture2D(s_hw.dev, &td, NULL, &stage)))
        return;
    ID3D11DeviceContext_CopyResource(s_hw.ctx, (ID3D11Resource *)stage, (ID3D11Resource *)tex);
    if (SUCCEEDED(ID3D11DeviceContext_Map(s_hw.ctx, (ID3D11Resource *)stage, 0,
                                          D3D11_MAP_READ, 0, &map))) {
        f = fopen(path, "wb");
        row = (td.Width * 3 + 3) & ~3u;
        line = (uint8_t *)calloc(1, row);
        if (f && line) {
            memset(hdr, 0, sizeof hdr);
            hdr[0] = 54 + row * td.Height;             /* file size (after "BM") */
            hdr[2] = 54; hdr[3] = 40; hdr[4] = td.Width; hdr[5] = td.Height;
            hdr[6] = 1 | (24u << 16); hdr[8] = row * td.Height;
            fwrite("BM", 1, 2, f);
            fwrite(hdr, 4, 13, f);
            for (y = 0; y < td.Height; y++) {
                const uint8_t *src = (const uint8_t *)map.pData
                                   + (size_t)(td.Height - 1 - y) * map.RowPitch;
                for (x = 0; x < td.Width; x++)
                    memcpy(line + x * 3, src + x * 4, 3);
                fwrite(line, 1, row, f);
            }
        }
        if (f) fclose(f);
        free(line);
        ID3D11DeviceContext_Unmap(s_hw.ctx, (ID3D11Resource *)stage, 0);
    }
    ID3D11Texture2D_Release(stage);
}

/* RE-SoT: each independently requested trace gets its own exact GPU frame.
 * Raw main-surface readback is taken at FLIP_STALL, before presentation; the
 * flip ID in the file/log matches "frame begins", even after that counter
 * advances. Re-arm on the next traced frame, not only once per process. */
static void hw_glow_dump_check(const HwSurface *s, int at_flip)
{
    static const char *prefix = (const char *)-1;
    static uint32_t capture_flip = 0xFFFFFFFFu;
    static int armed, before_done;
    char path[600];
    uint32_t i;

    if (prefix == (const char *)-1)
        prefix = getenv("RECOMP_HW_GLOW_DUMP");
    if (!prefix || !s)
        return;
    if (at_flip) {
        if (armed) {
            snprintf(path, sizeof path, "%s_flip%u_after.bmp", prefix, capture_flip);
            hw_dump_surface(s->tex, path);
            fprintf(stderr, "[FTRACE] capture flip %u main %08X -> %s\n",
                    capture_flip, s->offset, path);
            for (i = 0; i < HW_MAX_SURFACES; i++)
                if (s_hw.surf[i].tex && s_hw.surf[i].w < 640) {
                    snprintf(path, sizeof path, "%s_flip%u_%08X_%u.bmp", prefix,
                             capture_flip, s_hw.surf[i].offset, s_hw.surf[i].w);
                    hw_dump_surface(s_hw.surf[i].tex, path);
                }
            armed = 0;
        }
        return;
    }
    if (s_ftrace != 2)
        return;
    if (capture_flip != s_gpu.flips) {
        capture_flip = s_gpu.flips;
        armed = 1;
        before_done = 0;
    }
    if (before_done || s->w != 640 || !s_gpu.texs[0].valid)
        return;
    for (i = 0; i < HW_MAX_SURFACES; i++)
        if (s_hw.surf[i].tex && &s_hw.surf[i] != s
            && s_hw.surf[i].offset == s_gpu.texs[0].offset) {
            snprintf(path, sizeof path, "%s_flip%u_before.bmp", prefix, capture_flip);
            hw_dump_surface(s->tex, path);
            before_done = 1;
            return;
        }
}

/* RE-SoT: under the frame trace, how many pixels each batch really left on
 * the host GPU (an occlusion query around the draw) and the state that can
 * remove all of them. A batch with triangles and no pixels is geometry that
 * is missing from the picture; the state says which stage removed it. */
static ID3D11Query *s_hw_trace_q;

static void hw_trace_begin(void)
{
    if (s_ftrace != 2)
        return;
    if (!s_hw_trace_q) {
        D3D11_QUERY_DESC qd;
        qd.Query = D3D11_QUERY_OCCLUSION;
        qd.MiscFlags = 0;
        ID3D11Device_CreateQuery(s_hw.dev, &qd, &s_hw_trace_q);
    }
    if (s_hw_trace_q)
        ID3D11DeviceContext_Begin(s_hw.ctx, (ID3D11Asynchronous *)s_hw_trace_q);
}

static void hw_trace_end(void)
{
    UINT64 px = 0;
    DWORD t0 = GetTickCount();

    if (s_ftrace != 2 || !s_hw_trace_q)
        return;
    ID3D11DeviceContext_End(s_hw.ctx, (ID3D11Asynchronous *)s_hw_trace_q);
    /* The first batch of a frame waits behind the whole previous frame. */
    while (ID3D11DeviceContext_GetData(s_hw.ctx, (ID3D11Asynchronous *)s_hw_trace_q,
                                       &px, sizeof px, 0) == S_FALSE
           && GetTickCount() - t0 < 2000)
        ;
    fprintf(stderr, "[FTRACE]     hw px %llu | cull %u face %X front %X | atest %u"
                    " func %X ref %X | cmask %08X | zbuf %s | fog %u mode %X %g %g\n",
            (unsigned long long)px, s_hw.cull_enable, s_hw.cull_face, s_hw.front_face,
            s_gpu.alpha_test, s_gpu.alpha_func, s_gpu.alpha_ref, s_gpu.color_mask,
            s_gpu.zeta_offset ? "yes" : "no", s_gpu.fog_enable, s_gpu.fog_mode,
            s_gpu.fog_param[0], s_gpu.fog_param[1]);
}

#endif /* RESOT_HW_D3D11 */

/* Reserve `bytes` at the ring's write position (aligned to `align`), wrapping
 * with a discard when it does not fit. The caller writes at *off and then
 * advances it by what it used. */
/* RE-SoT: a DISCARD map invalidates everything earlier in that ring; batch
 * reuse (hw_reuse_find) only trusts ranges written in the current generation. */
static uint32_t s_hw_vb_gen = 1, s_hw_ib_gen = 1;

#if RESOT_HW_D3D11
static int hw_ring_map(ID3D11Buffer *buf, uint32_t *off, uint32_t size,
                       uint32_t bytes, uint32_t align, D3D11_MAPPED_SUBRESOURCE *map)
{
    D3D11_MAP how = D3D11_MAP_WRITE_NO_OVERWRITE;

    *off = (*off + align - 1) / align * align;
    if (bytes > size)
        return 0;
    if (*off == 0 || *off + bytes > size) {
        *off = 0;
        how = D3D11_MAP_WRITE_DISCARD;
        if (buf == s_hw.vb) s_hw_vb_gen++;
        else if (buf == s_hw.ib) s_hw_ib_gen++;
    }
    return SUCCEEDED(ID3D11DeviceContext_Map(s_hw.ctx, (ID3D11Resource *)buf, 0,
                                             how, 0, map));
}

/* RE-SoT: create the shader (and, the first time, the input layout every
 * program shares) from a compiled blob; releases the blob. */
static void hw_vsp_finish(HwVsp *e, ID3DBlob *b)
{
    int i;
    if (!b)
        return;
    ID3D11Device_CreateVertexShader(s_hw.dev, ID3D10Blob_GetBufferPointer(b),
                                    ID3D10Blob_GetBufferSize(b), NULL, &e->vs);
    if (!s_hw.layout_prog) {
        D3D11_INPUT_ELEMENT_DESC il[HW_VSP_SLOTS];
        for (i = 0; i < HW_VSP_SLOTS; i++) {
            memset(&il[i], 0, sizeof il[i]);
            il[i].SemanticName = "ATTR";
            il[i].SemanticIndex = (UINT)i;
            il[i].Format = DXGI_FORMAT_R32G32B32A32_FLOAT;
            il[i].AlignedByteOffset = (UINT)i * 16;
            il[i].InputSlotClass = D3D11_INPUT_PER_VERTEX_DATA;
        }
        ID3D11Device_CreateInputLayout(s_hw.dev, il, HW_VSP_SLOTS,
                                       ID3D10Blob_GetBufferPointer(b),
                                       ID3D10Blob_GetBufferSize(b),
                                       &s_hw.layout_prog);
    }
    ID3D10Blob_Release(b);
    if (!s_hw.layout_prog && e->vs) {
        ID3D11VertexShader_Release(e->vs);
        e->vs = NULL;
    }
}

/* RE-SoT: background compilation of vertex programs (xbox-demo).
 *
 * D3DCompile takes 24-158 ms for one translated program (37 programs of the
 * first level: mean 69 ms; skipping optimisation still 44 ms, so the flags
 * are not the answer). It ran on the executor, which also holds the dispatch
 * lock, so every program met for the first time froze the picture and the
 * sound together: in the hourglass room (0103_Hourglass) the user saw 7 fps,
 * then 1 fps, with "cold shader vs_prog compiled in 157.16 ms" and a 160 ms
 * stall of the APU thread in the log. A program missing from the disk cache
 * is now compiled by this thread, and its batches go through the vertex
 * interpreter -- the path every untranslatable program already takes --
 * until the shader is ready, usually a few frames. RESOT_ASYNC_VSH=0
 * compiles in place as before. */
#if RESOT_RUNTIME_DEMO
typedef struct { HwVsp *e; char *src; size_t len; } HwVspJob;
static HwVspJob s_vsp_jobs[HW_VSP_MAX];
static LONG s_vsp_job_head, s_vsp_job_tail;   /* under s_vsp_job_cs */
static HANDLE s_vsp_job_ev;
static CRITICAL_SECTION s_vsp_job_cs;

static DWORD WINAPI hw_vsp_worker(LPVOID unused)
{
    (void)unused;
    for (;;) {
        HwVspJob job = { NULL, NULL, 0 };
        int have = 0;
        EnterCriticalSection(&s_vsp_job_cs);
        if (s_vsp_job_tail != s_vsp_job_head) {
            job = s_vsp_jobs[s_vsp_job_tail % HW_VSP_MAX];
            s_vsp_job_tail++;
            have = 1;
        }
        LeaveCriticalSection(&s_vsp_job_cs);
        if (!have) {
            WaitForSingleObject(s_vsp_job_ev, INFINITE);
            continue;
        }
        {
            ID3DBlob *b = hw_compile_src(job.src, job.len, "vs_prog", "vs_4_0");
            free(job.src);
            InterlockedExchangePointer((PVOID volatile *)&job.e->ready, b);
            InterlockedExchange(&job.e->pending, 0);
        }
    }
}

static int hw_vsp_async(void)
{
    static int on = -1;
    if (on < 0) {
        const char *v = getenv("RESOT_ASYNC_VSH");
        on = !v || atoi(v) != 0;
        if (on) {
            InitializeCriticalSection(&s_vsp_job_cs);
            s_vsp_job_ev = CreateEventA(NULL, FALSE, FALSE, NULL);
            if (!s_vsp_job_ev) {
                on = 0;
            } else {
                HANDLE th = CreateThread(NULL, 0, hw_vsp_worker, NULL, 0, NULL);
                if (th) {
                    SetThreadPriority(th, THREAD_PRIORITY_BELOW_NORMAL);
                    CloseHandle(th);
                } else {
                    on = 0;
                }
            }
        }
        fprintf(stderr, "  [HW] vertex programs compile %s\n",
                on ? "in the background" : "in place (RESOT_ASYNC_VSH=0)");
    }
    return on;
}

/* Hands src (malloc'd) to the worker; 0 when the queue is full. */
static int hw_vsp_queue(HwVsp *e, char *src, size_t len)
{
    int ok = 0;
    EnterCriticalSection(&s_vsp_job_cs);
    if (s_vsp_job_head - s_vsp_job_tail < HW_VSP_MAX) {
        HwVspJob *j = &s_vsp_jobs[s_vsp_job_head % HW_VSP_MAX];
        j->e = e; j->src = src; j->len = len;
        e->pending = 1;
        s_vsp_job_head++;
        ok = 1;
    }
    LeaveCriticalSection(&s_vsp_job_cs);
    if (ok)
        SetEvent(s_vsp_job_ev);
    return ok;
}
#else
static int hw_vsp_async(void) { return 0; }
static int hw_vsp_queue(HwVsp *e, char *src, size_t len)
{
    (void)e; (void)src; (void)len;
    return 0;
}
#endif

/* The translated form of the vertex program that would run now, for a batch
 * whose enabled attributes are `mask` (bit per attribute, assigned to input
 * slots in ascending order). NULL when it cannot run on the GPU (RE-SoT: or
 * is still compiling in the background); the caller then uses the
 * interpreter. */
static const HwVsp *hw_vsp_get(uint32_t mask)
{
    static uint32_t seen_gen, seen_mask;
    static const HwVsp *seen;
    static int seen_valid;
    uint32_t gen = nv2a_vsh_program_generation(), key;
    HwVsp *e;
    char *src;
    size_t cap = 1u << 17, len, body;
    ID3DBlob *b = NULL;
    int ok, i, slot;

    if (seen_valid && seen_gen == gen && seen_mask == mask)
        return seen;
    seen_valid = 1; seen_gen = gen; seen_mask = mask; seen = NULL;

    key = nv2a_vsh_program_key(&ok);
    if (!ok)
        return NULL;
    for (i = 0; i < s_hw.nvsp; i++)
        if (s_hw.vsp[i].key == key && s_hw.vsp[i].mask == mask) {
            e = &s_hw.vsp[i];
            if (e->ready) {             /* RE-SoT: a background compile landed */
                hw_vsp_finish(e, (ID3DBlob *)InterlockedExchangePointer(
                                     (PVOID volatile *)&e->ready, NULL));
                fprintf(stderr, "  [HW] vertex program %08X (attributes %04X): %s"
                                " (compiled in the background)\n",
                        key, mask, e->vs ? "on the GPU" : "NOT translated, interpreter");
            }
            if (e->pending)
                seen_valid = 0;         /* ask again on the next batch */
            seen = e->vs ? e : NULL;
            return seen;
        }
    if (s_hw.nvsp == HW_VSP_MAX)
        return NULL;                        /* table full: interpreter */
    e = &s_hw.vsp[s_hw.nvsp++];
    e->key = key; e->mask = mask; e->vs = NULL; e->pending = 0; e->ready = NULL;

    src = (char *)malloc(cap);
    if (!src)
        return NULL;
    len = (size_t)snprintf(src, cap, "%s%s", s_hw_hlsl_vs_common, s_hw_hlsl_vsp_head);
    for (i = 0, slot = 0; i < NV_VERTEX_ATTRS; i++)
        if (mask & (1u << i))
            len += (size_t)snprintf(src + len, cap - len, "  v[%d] = i.a%d;\n", i, slot++);
    body = nv2a_vsh_emit_hlsl(src + len, cap - len - sizeof s_hw_hlsl_vsp_tail);
    if (body) {
        const char *dump = getenv("RECOMP_HW_VSH_DUMP");
        len += body;
        memcpy(src + len, s_hw_hlsl_vsp_tail, sizeof s_hw_hlsl_vsp_tail);
        len += sizeof s_hw_hlsl_vsp_tail - 1;
        /* RE-SoT: RECOMP_HW_VSH_DUMP=all prints every translation, not only
         * the ones that fail to compile. */
        if (dump && strcmp(dump, "all") == 0)
            fprintf(stderr, "[VSH %08X]\n%s\n", key, src);
        if (hw_vsp_async()) {
            b = hw_shader_cache_load(src, len, "vs_prog", "vs_4_0");
            if (b) {
                fprintf(stderr, "  [HW] shader cache hit: vs_prog\n");
            } else if (hw_vsp_queue(e, src, len)) {
                fprintf(stderr, "  [HW] vertex program %08X (attributes %04X): compiling in"
                                " the background, interpreter meanwhile (%d translated)\n",
                        key, mask, s_hw.nvsp);
                seen_valid = 0;
                return NULL;                /* src now belongs to the worker */
            }
        }
        if (!b)
            b = hw_compile_src(src, len, "vs_prog", "vs_4_0");
        hw_vsp_finish(e, b);
        if (dump && strcmp(dump, "all") != 0 && !e->vs)
            fprintf(stderr, "[VSH %08X]\n%s\n", key, src);
    }
    free(src);
    fprintf(stderr, "  [HW] vertex program %08X (attributes %04X): %s (%d translated)\n",
            key, mask, e->vs ? "on the GPU" : "NOT translated, interpreter", s_hw.nvsp);
    seen = e->vs ? e : NULL;
    return seen;
}

#endif /* RESOT_HW_D3D11 */

/* RE-SoT: the demo's sub_000EF140 projection hook narrows a full-screen
 * flat layer to 640 / widen, centred on x=320 (observed: 80.531..560.531
 * at 16:9). Its fog grids must cover the display, including inner vertices.
 * It is on for xbox-retail too (RESOT_PROJECTED_UI), whose
 * sub_000CD970 hook narrows the projection the same way. Without it the menu
 * backdrop stops short of the sides (2026-10-15). The HUD rule below was
 * traced on both: retail's health bar is x=107.531..250.892,
 * y=36.531..68.531 at 16:9 (2026-10-18). */
static void hw_classify_screen(float left, float right, float top, float bottom)
{
    static int projected_ui = -1;
    if (projected_ui < 0) {
        const char *e = getenv("RECOMP_HW_PROJECTED_UI");
        projected_ui = e && *e && *e != '0';
    }
    s_hw.batch_full_width = left <= 8.0f && right >= 632.0f;
    s_hw.batch_projected_screen = projected_ui
        && s_hw.widen > 1.0f
        && fabsf((right - left) - 640.0f / s_hw.widen) < 2.0f
        && fabsf((left + right) * 0.5f - 320.0f) < 2.0f
        && top <= 1.0f && bottom >= 479.0f;
    /* RE-SoT: traced health frame/fill: flat, depth test off, upper
     * left (x=118.931..280.211, y=38.931..115.731 at 16:9). Use the shared
     * UI region, not texture heap addresses, which change across loads.
     * Include depth_mask=1: the white sand crescents use it with depth
     * testing disabled, while the health frame/fill and gold pips use 0.
     * A HUD piece lies inside the projected 4:3 frame, wholly on one side of
     * the centre and in the top or bottom band; it is anchored to that side
     * (hw_hud_shift). Pieces across the centre keep the default rule. */
    s_hw.batch_hud = 0;
    if (projected_ui && s_hw.widen > 1.0f && !s_gpu.depth_test
        && !s_hw.batch_projected_screen
        && left >= 320.0f - 320.0f / s_hw.widen - 0.5f
        && right <= 320.0f + 320.0f / s_hw.widen + 0.5f
        && (bottom <= 192.0f || top >= 288.0f))
        s_hw.batch_hud = right < 320.0f ? -1 : left > 320.0f ? 1 : 0;
}

/* RE-SoT: the demo's traced final glow pass (unpaused frame 1917) and
 * retail's independently traced one (frame 3615) composite
 * the current 160x120 render target over the full 640x480 image, with alpha
 * blending and no depth test. Source offsets vary with allocation: identify
 * the pass by its decoded state and coverage, never by texture addresses.
 * Smaller UI/bar quads, pause layers and shadow targets do not match. */
static int hw_postprocess_candidate(uint32_t n)
{
    const Texture *t = &s_gpu.texs[0];
    uint32_t i;
    if ((xbox_FramebufferPostProcessing() && s_ftrace != 2)
        || n != 4 || s_gpu.prim != NV_PRIM_QUADS
        || s_gpu.clip_w != 640 || s_gpu.clip_h != 480
        || s_gpu.depth_test || !s_gpu.blend_enable
        || s_gpu.blend_sfactor != 0x302 || s_gpu.blend_dfactor != 0x303
        || !t->valid || t->width != 160 || t->height != 120 || t->color != 0x12)
        return 0;
    /* RE-SoT: the native D3D12/Vulkan encoder keeps its own surfaces; looking
     * only at the D3D11 ones left the option without effect there. */
    if (ng_active()) return ng_postprocess_source(t->offset);
    for (i = 0; i < HW_MAX_SURFACES; i++)
        if (s_hw.surf[i].srv && s_hw.surf[i].offset == t->offset
            && s_hw.surf[i].w == 160 && s_hw.surf[i].h == 120
            && s_hw.surf[i].drawn_frame == s_hw.frame)
            return 1;
    return 0;
}

static int hw_skip_postprocess(const Nv2aVshOutput *v, uint32_t n)
{
    float left = 1e9f, right = -1e9f, top = 1e9f, bottom = -1e9f;
    uint32_t i;
    int enabled;
    if (!hw_postprocess_candidate(n)) return 0;
    for (i = 0; i < n; i++) {
        if (fabsf(v[i].pos[3] - 1.0f) > 0.0001f) return 0;
        if (v[i].pos[0] < left) left = v[i].pos[0];
        if (v[i].pos[0] > right) right = v[i].pos[0];
        if (v[i].pos[1] < top) top = v[i].pos[1];
        if (v[i].pos[1] > bottom) bottom = v[i].pos[1];
    }
    if (left < -1 || left > 1 || right < 639 || right > 641
        || top < -1 || top > 1 || bottom < 479 || bottom > 481)
        return 0;
    enabled = xbox_FramebufferPostProcessing();
    if (s_ftrace == 2)
        fprintf(stderr, "  [POSTFX] final glow composite %s frame=%u source=%08X 160x120\n",
                enabled ? "on" : "skipped", s_hw.frame, s_gpu.texs[0].offset);
    return !enabled;
}

/* RE-SoT: batch reuse, both targets (written for the demo, 2026-10-17). There, the
 * first level's vegetation is ~1290 instances per frame of the same three
 * batches (same arrays and index list, only instance constants differ), and
 * re-converting them held the executor to 26 fps; reuse measured 43 fps.
 * Retail's own instancing was not profiled before this port. A batch whose index list,
 * attribute layout and sampled source bytes match one already uploaded in
 * this frame and ring generation draws from those host ranges instead.
 *
 * RE-SoT (xbox-demo): across frames too. With reuse limited to one frame,
 * 89% of batches missed (bath fight and hourglass room, 2026-10-18) and every
 * static mesh of the level was converted and uploaded again each frame: the
 * executor reached 7.3 ms a frame at 850-1300 draws, 67-90 fps. A batch now
 * stays valid while the ring generation that holds it lasts, and its source
 * bytes are hashed in full, not sampled, so a vertex that changed is a miss
 * rather than a stale draw. */
#if RESOT_RUNTIME_DEMO
#define HW_REUSE_ENTRIES 8192
#define HW_REUSE_ACROSS_FRAMES 1
#else
#define HW_REUSE_ENTRIES 1024
#define HW_REUSE_ACROSS_FRAMES 0
#endif
typedef struct {
    uint64_t key;
    uint32_t content, frame, vb_gen, ib_gen, vb_off, ib_off, ni, n, prim, nslot;
    VertexAttr attr[HW_VSP_SLOTS];
} HwReuse;
static HwReuse s_hw_reuse[HW_REUSE_ENTRIES];
static uint64_t s_hw_reuse_hits, s_hw_reuse_misses;

static uint32_t hw_attr_bytes(const VertexAttr *a)
{
    switch (a->type) {
    case 0: case 6: return 4;
    case 4:         return a->size;
    case 1: case 5: return 2 * a->size;
    default:        return 4 * a->size;
    }
}

#if HW_REUSE_ACROSS_FRAMES
/* Every byte of a source range, eight at a time: a reuse can be many frames
 * old. Instanced batches share one array (about 1300 vegetation draws a
 * frame in the demo's first level), and hashing it again for each one put
 * 56-60% of the executor in hw_reuse_key; a range is hashed once per
 * executed segment. The title does not write vertex data while a segment it
 * kicked is being executed (KickOff waits for the executor). */
extern uint32_t g_nv2a_scan_serial;
#define HW_SPAN_MEMO 512
static struct { uint32_t offset, words, serial, hash; } s_hw_span_memo[HW_SPAN_MEMO];

static uint32_t hw_span_hash(uint32_t offset, uint32_t words, const uint8_t *p)
{
    uint32_t slot = ((offset >> 4) ^ (words * 2654435761u)) & (HW_SPAN_MEMO - 1);
    uint64_t c64 = 14695981039346656037ull;
    uint32_t q, quads = words / 2, h;

    if (s_hw_span_memo[slot].offset == offset && s_hw_span_memo[slot].words == words
        && s_hw_span_memo[slot].serial == g_nv2a_scan_serial)
        return s_hw_span_memo[slot].hash;
    for (q = 0; q < quads; q++)
        c64 = (c64 ^ ((const uint64_t *)p)[q]) * 1099511628211ull;
    if (words & 1)
        c64 = (c64 ^ ((const uint32_t *)p)[words - 1]) * 1099511628211ull;
    h = (uint32_t)(c64 ^ (c64 >> 32));
    s_hw_span_memo[slot].offset = offset;
    s_hw_span_memo[slot].words = words;
    s_hw_span_memo[slot].serial = g_nv2a_scan_serial;
    s_hw_span_memo[slot].hash = h;
    return h;
}
#endif

/* Key: primitive, layout and the whole index list. Content: every dword of
 * a small source range, 64 spread dwords of a large one. Returns 0 when the
 * batch cannot be checked (inline arrays, memory outside the guest RAM). */
static int hw_reuse_key(const uint8_t *slot_attr, uint32_t nslot,
                        uint64_t *key, uint32_t *content)
{
    const uint8_t *mem = (const uint8_t *)xbox_GetMemoryOffset();
    uint64_t h = 1469598103934665603ull;
    uint32_t c = 2166136261u, i, a, n = s_gpu.idx_count, top = 0, lo = 0xFFFFu;
    if (s_gpu.inline_active)
        return 0;
    for (i = 0; i < n; i++) {
        uint16_t ix = s_gpu.idx[i];
        if (ix > top) top = ix;
        if (ix < lo) lo = ix;
        h = (h ^ ix) * 1099511628211ull;
    }
    h = (h ^ ((uint64_t)n << 8 | s_gpu.prim)) * 1099511628211ull;
    for (a = 0; a < nslot; a++) {
        const VertexAttr *at = &s_gpu.attr[slot_attr[a]];
        uint32_t span = top * at->stride + hw_attr_bytes(at), words, step, w;
        const uint8_t *p;
        h = (h ^ slot_attr[a]) * 1099511628211ull;
        h = (h ^ at->offset) * 1099511628211ull;
        h = (h ^ (at->type << 24 | at->size << 16 | at->stride)) * 1099511628211ull;
        if (!hw_mem_ok(at->offset, span))
            return 0;
        p = mem + at->offset;
        words = span / 4;
#if HW_REUSE_ACROSS_FRAMES
        {
            /* Only the vertices the batch can reach: from its lowest index,
             * not from vertex 0 of an array shared by the whole level. */
            uint32_t first = lo * at->stride;
            c = (c ^ hw_span_hash(at->offset + first, (span - first) / 4,
                                  p + first)) * 16777619u;
        }
        (void)step; (void)w;
#else
        step = words > 4096 / 4 ? words / 64 : 1;
        for (w = 0; w < words; w += step)
            c = (c ^ ((const uint32_t *)p)[w]) * 16777619u;
        if (words) c = (c ^ ((const uint32_t *)p)[words - 1]) * 16777619u;
#endif
    }
    *key = h;
    *content = c;
    return 1;
}

static HwReuse *hw_reuse_slot(uint64_t key)
{
    return &s_hw_reuse[(uint32_t)(key ^ (key >> 32)) & (HW_REUSE_ENTRIES - 1)];
}

static int hw_reuse_match(const HwReuse *e, uint64_t key, uint32_t content,
                          const uint8_t *slot_attr, uint32_t nslot)
{
    uint32_t a;
    if (e->key != key || e->content != content
        || (!HW_REUSE_ACROSS_FRAMES && e->frame != s_hw.frame)
        || e->vb_gen != s_hw_vb_gen || e->ib_gen != s_hw_ib_gen
        || e->n != s_gpu.idx_count || e->prim != s_gpu.prim || e->nslot != nslot)
        return 0;
    for (a = 0; a < nslot; a++)
        if (memcmp(&e->attr[a], &s_gpu.attr[slot_attr[a]], sizeof e->attr[a]))
            return 0;
    return 1;
}

/* Draw the current batch with its vertex program running on the GPU: the
 * distinct vertices of the batch go up as raw attributes, the primitive as an
 * index list. Returns 0 when the batch has to take the interpreter path. */
static int ng_draw_program_batch(void);
static int hw_draw_program_batch(void)
{
    /* RE-SoT: the native encoders run the program in vs_uber, or return 0
     * for the CPU interpreter (no FINAL, constant writes, >8 inputs). */
    if (ng_active()) return ng_draw_program_batch();
#if RESOT_HW_D3D11
    static uint32_t stamp[65536], batch_id;
    static uint16_t remap[65536];
    D3D11_MAPPED_SUBRESOURCE vmap, imap;
    uint8_t slot_attr[HW_VSP_SLOTS];
    const HwVsp *prog;
    uint32_t n = s_gpu.idx_count, mask = 0, nslot = 0, a, i, nv = 0, ni = 0;
    HwSurface *bound;
    float (*vout)[4];
    uint16_t *iout;
    LARGE_INTEGER t0, t1;
    HwReuse *reuse = NULL;                  /* RE-SoT: see HwReuse */
    uint64_t reuse_key = 0;
    uint32_t reuse_content = 0;
    int reuse_ok;

    if (s_hw.cpu_vsh || n < 3 || n > NV_MAX_INDICES)
        return 0;
    /* RE-SoT: verify the four corners of a possible final glow composite. */
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
    for (a = 0; a < NV_VERTEX_ATTRS; a++) {
        const VertexAttr *at = &s_gpu.attr[a];
        if (!at->size || !at->stride || (!s_gpu.inline_active && !at->offset))
            continue;                       /* reads as 0,0,0,1 */
        if (nslot == HW_VSP_SLOTS)
            return 0;
        slot_attr[nslot++] = (uint8_t)a;
        mask |= 1u << a;
    }
    switch (s_gpu.prim) {
    case NV_PRIM_TRIANGLES: case NV_PRIM_TRIANGLE_STRIP: case NV_PRIM_TRIANGLE_FAN:
    case NV_PRIM_POLYGON: case NV_PRIM_QUADS: case NV_PRIM_QUAD_STRIP:
        break;
    default:
        return 1;                           /* points and lines: not yet */
    }
    prog = hw_vsp_get(mask);
    if (!prog)
        return 0;

    /* RE-SoT: classify the whole flat batch, including the pause layers
     * already narrowed by the target's projection. The full-height bounds
     * distinguish these from smaller UI widgets. */
    s_hw.batch_full_width = s_hw.batch_projected_screen = s_hw.batch_hud = 0;
    if (s_hw.widen > 1.0f && s_gpu.clip_w == 640 && s_gpu.clip_h >= 448) {
        float in[NV2A_VSH_INPUTS][4], lo = 1e9f, hi = -1e9f;
        float top = 1e9f, bottom = -1e9f;
        Nv2aVshOutput o;
        uint32_t k, a2;
        for (k = 0; k < n; k++) {
            for (a2 = 0; a2 < NV2A_VSH_INPUTS; a2++)
                fetch_attr(&s_gpu.attr[a2], s_gpu.idx[k], in[a2]);
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

    /* The frame trace (RECOMP_FRAME_TRACE) prints the executor's s_xf, which
     * this path never fills. Run the interpreter on the first and last
     * vertices of a traced batch so the trace shows where it really lands. */
    if (s_ftrace == 2) {
        float in[NV2A_VSH_INPUTS][4];
        Nv2aVshOutput o0, o1;
        uint32_t k, last = s_gpu.idx[n - 1];
        for (k = 0; k < NV2A_VSH_INPUTS; k++)
            fetch_attr(&s_gpu.attr[k], s_gpu.idx[0], in[k]);
        nv2a_vsh_run((const float (*)[4])in, &o0);
        for (k = 0; k < NV2A_VSH_INPUTS; k++)
            fetch_attr(&s_gpu.attr[k], last, in[k]);
        nv2a_vsh_run((const float (*)[4])in, &o1);
        fprintf(stderr, "[FTRACE]     gpu batch n %u: first %g %g %g w %g, last %g %g %g w %g"
                        " | d0 %g %g %g %g fog %g | vsh %08X\n",
                n, o0.pos[0], o0.pos[1], o0.pos[2], o0.pos[3],
                o1.pos[0], o1.pos[1], o1.pos[2], o1.pos[3],
                o0.d0[0], o0.d0[1], o0.d0[2], o0.d0[3], o0.fog[0], prog->key);
        {
            /* Where the whole batch lands, and its fog and w ranges. */
            float lo[4] = {1e30f, 1e30f, 1e30f, 1e30f}, hi[4] = {-1e30f, -1e30f, -1e30f, -1e30f};
            float flo = 1e30f, fhi = -1e30f, alo = 1e30f, ahi = -1e30f;
            uint32_t c;
            for (k = 0; k < n; k++) {
                for (c = 0; c < NV2A_VSH_INPUTS; c++)
                    fetch_attr(&s_gpu.attr[c], s_gpu.idx[k], in[c]);
                nv2a_vsh_run((const float (*)[4])in, &o0);
                for (c = 0; c < 4; c++) {
                    if (o0.pos[c] < lo[c]) lo[c] = o0.pos[c];
                    if (o0.pos[c] > hi[c]) hi[c] = o0.pos[c];
                }
                if (o0.fog[0] < flo) flo = o0.fog[0];
                if (o0.fog[0] > fhi) fhi = o0.fog[0];
                if (o0.d0[3] < alo) alo = o0.d0[3];
                if (o0.d0[3] > ahi) ahi = o0.d0[3];
                if (n <= 4)
                    fprintf(stderr, "[FTRACE]     vtx %u pos %g %g t0 %g %g t1 %g %g"
                                    " t2 %g %g t3 %g %g\n", k, o0.pos[0], o0.pos[1],
                            o0.tex[0][0], o0.tex[0][1], o0.tex[1][0], o0.tex[1][1],
                            o0.tex[2][0], o0.tex[2][1], o0.tex[3][0], o0.tex[3][1]);
            }
            fprintf(stderr, "[FTRACE]     bbox x %g..%g y %g..%g z %g..%g w %g..%g"
                            " fog %g..%g d0.a %g..%g hud %d\n",
                    lo[0], hi[0], lo[1], hi[1], lo[2], hi[2], lo[3], hi[3],
                    flo, fhi, alo, ahi, s_hw.batch_hud);
        }
    }

    QueryPerformanceCounter(&t0);
    reuse_ok = hw_reuse_key(slot_attr, nslot, &reuse_key, &reuse_content);
    EnterCriticalSection(&s_hw.lock);
    if (!(bound = hw_bind_draw_state(prog))) {
        LeaveCriticalSection(&s_hw.lock);
        return 1;
    }
    /* RE-SoT: an identical batch already uploaded this frame (see HwReuse). */
    reuse = reuse_ok ? hw_reuse_slot(reuse_key) : NULL;
    if (reuse && hw_reuse_match(reuse, reuse_key, reuse_content, slot_attr, nslot)) {
        s_hw_reuse_hits++;
        if (reuse->ni) {
            ID3D11DeviceContext_IASetIndexBuffer(s_hw.ctx, s_hw.ib, DXGI_FORMAT_R16_UINT, 0);
            hw_glow_dump_check(bound, 0);
            hw_trace_begin();
            ID3D11DeviceContext_DrawIndexed(s_hw.ctx, reuse->ni, reuse->ib_off / 2,
                                            (INT)(reuse->vb_off / (uint32_t)sizeof(HwVertex)));
            hw_trace_end();
            s_hw.draws++;
            s_hw.gpu_vsh_batches++;
            s_hw.tris += reuse->ni / 3;
            s_gpu.tris_drawn += reuse->ni / 3;
            s_gpu.xf_drawn += reuse->ni / 3;
        }
        LeaveCriticalSection(&s_hw.lock);
        QueryPerformanceCounter(&t1);
        s_hw_stat_draw_ticks += (uint64_t)(t1.QuadPart - t0.QuadPart);
        return 1;
    }
    if (reuse) s_hw_reuse_misses++;
    if (!hw_ring_map(s_hw.vb, &s_hw.vb_off, HW_VB_BYTES,
                        n * (uint32_t)sizeof(HwVertex), sizeof(HwVertex), &vmap)) {
        LeaveCriticalSection(&s_hw.lock);
        return 1;
    }
    if (!hw_ring_map(s_hw.ib, &s_hw.ib_off, HW_IB_BYTES, n * 3 * 2, 2, &imap)) {
        ID3D11DeviceContext_Unmap(s_hw.ctx, (ID3D11Resource *)s_hw.vb, 0);
        LeaveCriticalSection(&s_hw.lock);
        return 1;
    }
    vout = (float (*)[4])((uint8_t *)vmap.pData + s_hw.vb_off);
    iout = (uint16_t *)((uint8_t *)imap.pData + s_hw.ib_off);

    if (++batch_id == 0) {
        memset(stamp, 0, sizeof stamp);
        batch_id = 1;
    }
    for (i = 0; i < n; i++) {
        uint16_t ix = s_gpu.idx[i];
        float in[HW_VSP_SLOTS][4];
        if (stamp[ix] == batch_id)
            continue;
        stamp[ix] = batch_id;
        remap[ix] = (uint16_t)nv;
        for (a = 0; a < nslot; a++)
            fetch_attr(&s_gpu.attr[slot_attr[a]], ix, in[a]);
        for (; a < HW_VSP_SLOTS; a++)
            in[a][0] = in[a][1] = in[a][2] = in[a][3] = 0.0f;
        memcpy(vout[nv * HW_VSP_SLOTS], in, sizeof in);   /* write-combined: no reads */
        nv++;
    }
#define HW_IDX(x, y, z) do { iout[ni] = remap[s_gpu.idx[x]]; \
        iout[ni + 1] = remap[s_gpu.idx[y]]; iout[ni + 2] = remap[s_gpu.idx[z]]; \
        ni += 3; } while (0)
    switch (s_gpu.prim) {
    case NV_PRIM_TRIANGLES:
        for (i = 0; i + 2 < n; i += 3) HW_IDX(i, i + 1, i + 2);
        break;
    case NV_PRIM_TRIANGLE_STRIP:
        for (i = 0; i + 2 < n; i++) {
            if (i & 1) HW_IDX(i + 1, i, i + 2);      /* keep the winding */
            else       HW_IDX(i, i + 1, i + 2);
        }
        break;
    case NV_PRIM_TRIANGLE_FAN:
    case NV_PRIM_POLYGON:
        for (i = 1; i + 1 < n; i++) HW_IDX(0, i, i + 1);
        break;
    case NV_PRIM_QUADS:
        for (i = 0; i + 3 < n; i += 4) {
            HW_IDX(i, i + 1, i + 2);
            HW_IDX(i, i + 2, i + 3);
        }
        break;
    default:                                         /* quad strip */
        for (i = 0; i + 3 < n; i += 2) {
            HW_IDX(i, i + 1, i + 3);
            HW_IDX(i, i + 3, i + 2);
        }
        break;
    }
#undef HW_IDX
    ID3D11DeviceContext_Unmap(s_hw.ctx, (ID3D11Resource *)s_hw.ib, 0);
    ID3D11DeviceContext_Unmap(s_hw.ctx, (ID3D11Resource *)s_hw.vb, 0);
    if (ni) {
        ID3D11DeviceContext_IASetIndexBuffer(s_hw.ctx, s_hw.ib, DXGI_FORMAT_R16_UINT, 0);
        hw_glow_dump_check(bound, 0);
        hw_trace_begin();
        ID3D11DeviceContext_DrawIndexed(s_hw.ctx, ni, s_hw.ib_off / 2,
                                        (INT)(s_hw.vb_off / (uint32_t)sizeof(HwVertex)));
        hw_trace_end();
        s_hw.draws++;
        s_hw.gpu_vsh_batches++;
        s_hw.tris += ni / 3;
        s_gpu.tris_drawn += ni / 3;
        s_gpu.xf_drawn += ni / 3;
    }
    if (reuse) {
        /* Both maps are done, so these generations own the ranges just written. */
        reuse->key = reuse_key; reuse->content = reuse_content;
        reuse->frame = s_hw.frame;
        reuse->vb_gen = s_hw_vb_gen; reuse->ib_gen = s_hw_ib_gen;
        reuse->vb_off = s_hw.vb_off; reuse->ib_off = s_hw.ib_off;
        reuse->ni = ni; reuse->n = n; reuse->prim = s_gpu.prim; reuse->nslot = nslot;
        for (a = 0; a < nslot; a++)
            reuse->attr[a] = s_gpu.attr[slot_attr[a]];
    }
    s_hw.vb_off += nv * (uint32_t)sizeof(HwVertex);
    s_hw.ib_off += ni * 2;
    s_hw_stat_verts += nv;
    LeaveCriticalSection(&s_hw.lock);
    QueryPerformanceCounter(&t1);
    s_hw_stat_draw_ticks += (uint64_t)(t1.QuadPart - t0.QuadPart);
    return 1;
#else
    return 0;
#endif /* RESOT_HW_D3D11 */
}

static void hw_put_vertex(HwVertex *o, const Nv2aVshOutput *v)
{
    memcpy(o->pos, v->pos, sizeof o->pos);
    memcpy(o->d0, v->d0, sizeof o->d0);
    memcpy(o->d1, v->d1, sizeof o->d1);
    o->fog[0] = fog_factor(v->fog[0]);
    o->fog[1] = o->fog[2] = o->fog[3] = 0.0f;
    memcpy(o->tex, v->tex, sizeof o->tex);
}

/* RE-SoT: separate native command encoder, sharing only NV2A state and shader math. */
#include "nv2a_hw_native.inc"

/* One batch of transformed vertices, in the primitive type the title used. */
static void hw_draw_batch(const Nv2aVshOutput *v, uint32_t n)
{
    HwVertex *o = s_hw.verts;
#if RESOT_HW_D3D11
    D3D11_MAPPED_SUBRESOURCE map;
#endif
    uint32_t i, count = 0;

    if (hw_skip_postprocess(v, n)) return; /* RE-SoT: CPU-transformed batches too. */

    /* Full-width 2D keeps its width (see hw_draw_program_batch). */
    {
        float lo = 1e9f, hi = -1e9f, top = 1e9f, bottom = -1e9f;
        s_hw.batch_full_width = s_hw.batch_projected_screen = s_hw.batch_hud = 0;
        for (i = 0; i < n; i++) {
            if (fabsf(v[i].pos[3] - 1.0f) > 0.0001f)
                break;
            if (v[i].pos[0] < lo) lo = v[i].pos[0];
            if (v[i].pos[0] > hi) hi = v[i].pos[0];
            if (v[i].pos[1] < top) top = v[i].pos[1];
            if (v[i].pos[1] > bottom) bottom = v[i].pos[1];
        }
        if (i == n)
            hw_classify_screen(lo, hi, top, bottom);
        /* RE-SoT: where the CPU path's flat 2D lands, for the HUD rule. */
        if (s_ftrace == 2 && i == n && n)
            fprintf(stderr, "[FTRACE]     cpu bbox x %g..%g y %g..%g w 1..1 z test %u hud %d\n",
                    lo, hi, top, bottom, (unsigned)s_gpu.depth_test, s_hw.batch_hud);
    }
    if (s_ftrace == 2 && n <= 4)
        for (i = 0; i < n; i++)
            fprintf(stderr, "[FTRACE]     cpu vtx %u pos %g %g %g w %g t0 %g %g %g %g t1 %g %g\n",
                    i, v[i].pos[0], v[i].pos[1], v[i].pos[2], v[i].pos[3],
                    v[i].tex[0][0], v[i].tex[0][1], v[i].tex[0][2], v[i].tex[0][3],
                    v[i].tex[1][0], v[i].tex[1][1]);

#define HW_TRI(a, b, c) do { hw_put_vertex(&o[count], &v[a]); \
        hw_put_vertex(&o[count + 1], &v[b]); \
        hw_put_vertex(&o[count + 2], &v[c]); count += 3; } while (0)
    switch (s_gpu.prim) {
    case NV_PRIM_TRIANGLES:
        for (i = 0; i + 2 < n; i += 3) HW_TRI(i, i + 1, i + 2);
        break;
    case NV_PRIM_TRIANGLE_STRIP:
        for (i = 0; i + 2 < n; i++) {
            if (i & 1) HW_TRI(i + 1, i, i + 2);      /* keep the winding */
            else       HW_TRI(i, i + 1, i + 2);
        }
        break;
    case NV_PRIM_TRIANGLE_FAN:
    case NV_PRIM_POLYGON:
        for (i = 1; i + 1 < n; i++) HW_TRI(0, i, i + 1);
        break;
    case NV_PRIM_QUADS:
        for (i = 0; i + 3 < n; i += 4) {
            HW_TRI(i, i + 1, i + 2);
            HW_TRI(i, i + 2, i + 3);
        }
        break;
    case NV_PRIM_QUAD_STRIP:
        for (i = 0; i + 3 < n; i += 2) {
            HW_TRI(i, i + 1, i + 3);
            HW_TRI(i, i + 3, i + 2);
        }
        break;
    default:
        return;                                   /* points and lines: not yet */
    }
#undef HW_TRI
    if (!count)
        return;

    {
    LARGE_INTEGER t0, t1;
    QueryPerformanceCounter(&t0);
    EnterCriticalSection(&s_hw.lock);
    if (ng_active()) {
        ng_draw(o, count);
        LeaveCriticalSection(&s_hw.lock);
        QueryPerformanceCounter(&t1);
        s_hw_stat_draw_ticks += (uint64_t)(t1.QuadPart - t0.QuadPart);
        return;
    }
#if RESOT_HW_D3D11
    HwSurface *bound;
    if ((bound = hw_bind_draw_state(NULL)) != NULL
        && hw_ring_map(s_hw.vb, &s_hw.vb_off, HW_VB_BYTES,
                       (uint32_t)sizeof(HwVertex) * count, sizeof(HwVertex), &map)) {
        memcpy((uint8_t *)map.pData + s_hw.vb_off, o, sizeof(HwVertex) * count);
        ID3D11DeviceContext_Unmap(s_hw.ctx, (ID3D11Resource *)s_hw.vb, 0);
        hw_glow_dump_check(bound, 0);
        hw_trace_begin();
        ID3D11DeviceContext_Draw(s_hw.ctx, count, s_hw.vb_off / (uint32_t)sizeof(HwVertex));
        hw_trace_end();
        s_hw.vb_off += (uint32_t)sizeof(HwVertex) * count;
        s_hw.cpu_vsh_batches++;
        s_hw.draws++;
        s_hw.tris += count / 3;
        s_gpu.tris_drawn += count / 3;
        s_gpu.xf_drawn += count / 3;
    }
#endif /* RESOT_HW_D3D11 */
    LeaveCriticalSection(&s_hw.lock);
    QueryPerformanceCounter(&t1);
    s_hw_stat_draw_ticks += (uint64_t)(t1.QuadPart - t0.QuadPart);
    }
}

/* NV097_CLEAR_SURFACE: bit 0 depth, bit 1 stencil, bits 4-7 colour channels. */
static void hw_clear(uint32_t param)
{
    if (ng_active()) {
        EnterCriticalSection(&s_hw.lock); ng_clear(param); LeaveCriticalSection(&s_hw.lock);
        return;
    }
#if RESOT_HW_D3D11
    HwSurface *s;
    HwDepth *d;
    uint32_t x0 = s_gpu.clip_x, y0 = s_gpu.clip_y;
    uint32_t x1 = s_gpu.clip_x + s_gpu.clip_w, y1 = s_gpu.clip_y + s_gpu.clip_h;

    EnterCriticalSection(&s_hw.lock);
    nv_hw_vis_end(&s_hw_visibility, s_hw.ctx); /* RE-SoT: exclude clear draws. */
    s = hw_surface();
    if (!s) {
        LeaveCriticalSection(&s_hw.lock);
        return;
    }
    if (s_hw.clear_rect_set) {
        /* SET_CLEAR_RECT: min in the low half, max (inclusive) in the high. */
        uint32_t cx0 = s_hw.clear_rect_h & 0xFFFF, cx1 = (s_hw.clear_rect_h >> 16) + 1;
        uint32_t cy0 = s_hw.clear_rect_v & 0xFFFF, cy1 = (s_hw.clear_rect_v >> 16) + 1;
        if (cx0 > x0) x0 = cx0;
        if (cy0 > y0) y0 = cy0;
        if (cx1 < x1) x1 = cx1;
        if (cy1 < y1) y1 = cy1;
    }
    d = hw_depth(s);
    if ((param & 0x03) && d) {
        float z = (float)(hw_zmax_bits() == 0xFFFFu ? (s_gpu.zstencil_clear & 0xFFFF)
                                                    : (s_gpu.zstencil_clear >> 8))
                / (float)hw_zmax_bits();
        ID3D11DeviceContext_ClearDepthStencilView(
            s_hw.ctx, d->dsv,
            ((param & 1) ? D3D11_CLEAR_DEPTH : 0) | ((param & 2) ? D3D11_CLEAR_STENCIL : 0),
            z, (UINT8)(s_gpu.zstencil_clear & 0xFF));
    }
    if (param & NV097_CLEAR_COLOR_MASK) {
        float c[4];
        hw_color4(s_gpu.clear_color, c);
        if (x0 == 0 && y0 == 0 && x1 >= s->w && y1 >= s->h
            && (param & NV097_CLEAR_COLOR_MASK) == NV097_CLEAR_COLOR_MASK) {
            ID3D11DeviceContext_ClearRenderTargetView(s_hw.ctx, s->rtv, c);
        } else if (x1 > x0 && y1 > y0) {
            /* Part of the surface, or only some channels: a scissored fill. */
            HwPsConst pc;
            D3D11_MAPPED_SUBRESOURCE map;
            D3D11_VIEWPORT vp;
            D3D11_RECT sc;
            D3D11_BLEND_DESC bd;
            ID3D11BlendState *bs = NULL;
            static const float bf[4] = {0, 0, 0, 0};

            memset(&pc, 0, sizeof pc);
            memcpy(pc.finc0, c, sizeof c);
            if (SUCCEEDED(ID3D11DeviceContext_Map(s_hw.ctx, (ID3D11Resource *)s_hw.ps_cb,
                                                  0, D3D11_MAP_WRITE_DISCARD, 0, &map))) {
                memcpy(map.pData, &pc, sizeof pc);
                ID3D11DeviceContext_Unmap(s_hw.ctx, (ID3D11Resource *)s_hw.ps_cb, 0);
            }
            memset(&bd, 0, sizeof bd);
            /* CLEAR_SURFACE bits: 0x10 R, 0x20 G, 0x40 B, 0x80 A. */
            bd.RenderTarget[0].RenderTargetWriteMask =
                (UINT8)(((param & 0x10) ? D3D11_COLOR_WRITE_ENABLE_RED : 0)
                      | ((param & 0x20) ? D3D11_COLOR_WRITE_ENABLE_GREEN : 0)
                      | ((param & 0x40) ? D3D11_COLOR_WRITE_ENABLE_BLUE : 0)
                      | ((param & 0x80) ? D3D11_COLOR_WRITE_ENABLE_ALPHA : 0));
            ID3D11Device_CreateBlendState(s_hw.dev, &bd, &bs);
            ID3D11DeviceContext_OMSetRenderTargets(s_hw.ctx, 1, &s->rtv, NULL);
            vp.TopLeftX = 0; vp.TopLeftY = 0;
            vp.Width = (float)hw_px(s->w, s->sc);
            vp.Height = (float)(hw_py(s->h,s->sc));
            vp.MinDepth = 0; vp.MaxDepth = 1;
            ID3D11DeviceContext_RSSetViewports(s_hw.ctx, 1, &vp);
            sc.left = (LONG)hw_px(x0, s->sc);
            sc.top = (LONG)(hw_py(y0,s->sc));
            sc.right = (LONG)hw_px(x1, s->sc);
            sc.bottom = (LONG)(hw_py(y1,s->sc));
            ID3D11DeviceContext_RSSetScissorRects(s_hw.ctx, 1, &sc);
            ID3D11DeviceContext_RSSetState(s_hw.ctx, s_hw.rs[0]);
            ID3D11DeviceContext_OMSetBlendState(s_hw.ctx, bs, bf, 0xFFFFFFFFu);
            ID3D11DeviceContext_OMSetDepthStencilState(s_hw.ctx, hw_depth_state(0), 0);
            ID3D11DeviceContext_IASetInputLayout(s_hw.ctx, NULL);
            ID3D11DeviceContext_IASetPrimitiveTopology(s_hw.ctx, D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
            ID3D11DeviceContext_VSSetShader(s_hw.ctx, s_hw.vs_blit, NULL, 0);
            ID3D11DeviceContext_PSSetShader(s_hw.ctx, s_hw.ps_solid, NULL, 0);
            ID3D11DeviceContext_PSSetConstantBuffers(s_hw.ctx, 0, 1, &s_hw.ps_cb);
            ID3D11DeviceContext_Draw(s_hw.ctx, 3, 0);
            if (bs) ID3D11BlendState_Release(bs);
        }
        s->drawn_frame = s_hw.frame;
        if (!s_hw.biggest || s->w * s->h >= s_hw.biggest_area) {
            s_hw.biggest = s;
            s_hw.biggest_area = s->w * s->h;
        }
    }
    s_gpu.clears++;
    LeaveCriticalSection(&s_hw.lock);
#endif /* RESOT_HW_D3D11 */
}

#if RESOT_HW_D3D11
/* Put a surface (and the movie overlay, when one is showing) in the window.
 * Called with the lock held. */
static void hw_compose_locked(void) /* RE-SoT: snapshot before post-flip fences. */
{
    D3D11_VIEWPORT vp;
    const uint32_t *opx;
    uint32_t ow, oh, orect[4], oserial;
    float px, py, pw, ph;
    static const float black[4] = {0, 0, 0, 1}, bf[4] = {0, 0, 0, 0};
    ID3D11ShaderResourceView *none[8] = {0}; /* RE-SoT: unbind cubes too. */

    nv_hw_vis_end(&s_hw_visibility, s_hw.ctx); /* RE-SoT: exclude host UI/blits. */
    hw_resize_backbuffer();
    if (!s_hw.bb_rtv)
        return;
    ID3D11DeviceContext_OMSetRenderTargets(s_hw.ctx, 1, &s_hw.bb_rtv, NULL);
    ID3D11DeviceContext_ClearRenderTargetView(s_hw.ctx, s_hw.bb_rtv, black);
    /* The picture keeps its shape in whatever shape the window has. */
    {
        float bw = (float)s_hw.bb_w, bh = (float)s_hw.bb_h;
        if (bw > bh * s_hw.aspect) { ph = bh; pw = bh * s_hw.aspect; }
        else                       { pw = bw; ph = bw / s_hw.aspect; }
        px = (bw - pw) * 0.5f; py = (bh - ph) * 0.5f;
    }
    vp.TopLeftX = px; vp.TopLeftY = py;
    vp.Width = pw; vp.Height = ph;
    vp.MinDepth = 0; vp.MaxDepth = 1;
    ID3D11DeviceContext_RSSetViewports(s_hw.ctx, 1, &vp);
    ID3D11DeviceContext_RSSetState(s_hw.ctx, s_hw.rs_blit);
    ID3D11DeviceContext_OMSetBlendState(s_hw.ctx, NULL, bf, 0xFFFFFFFFu);
    ID3D11DeviceContext_OMSetDepthStencilState(s_hw.ctx, hw_depth_state(0), 0);
    ID3D11DeviceContext_IASetInputLayout(s_hw.ctx, NULL);
    ID3D11DeviceContext_IASetPrimitiveTopology(s_hw.ctx, D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    ID3D11DeviceContext_VSSetShader(s_hw.ctx, s_hw.vs_blit, NULL, 0);
    ID3D11DeviceContext_PSSetShader(s_hw.ctx, s_hw.ps_blit, NULL, 0);
    ID3D11DeviceContext_PSSetSamplers(s_hw.ctx, 0, 1, &s_hw.samp_blit);
    if (s_hw.front && s_hw.front->srv) {
        ID3D11DeviceContext_PSSetShaderResources(s_hw.ctx, 0, 1, &s_hw.front->srv);
        ID3D11DeviceContext_Draw(s_hw.ctx, 3, 0);
    }
    if (xbox_FramebufferOverlayGet(&opx, &ow, &oh, orect, &oserial) && ow && oh) {
        if (!s_hw.ovl_tex || s_hw.ovl_w != ow || s_hw.ovl_h != oh) {
            D3D11_TEXTURE2D_DESC td;
            if (s_hw.ovl_srv) ID3D11ShaderResourceView_Release(s_hw.ovl_srv);
            if (s_hw.ovl_tex) ID3D11Texture2D_Release(s_hw.ovl_tex);
            s_hw.ovl_srv = NULL; s_hw.ovl_tex = NULL;
            memset(&td, 0, sizeof td);
            td.Width = ow; td.Height = oh; td.MipLevels = 1; td.ArraySize = 1;
            td.Format = DXGI_FORMAT_B8G8R8A8_UNORM; td.SampleDesc.Count = 1;
            td.BindFlags = D3D11_BIND_SHADER_RESOURCE;
            if (SUCCEEDED(ID3D11Device_CreateTexture2D(s_hw.dev, &td, NULL, &s_hw.ovl_tex)))
                ID3D11Device_CreateShaderResourceView(s_hw.dev, (ID3D11Resource *)s_hw.ovl_tex,
                                                      NULL, &s_hw.ovl_srv);
            s_hw.ovl_w = ow; s_hw.ovl_h = oh;
            s_hw.ovl_serial = oserial - 1;
        }
        if (s_hw.ovl_srv) {
            if (s_hw.ovl_serial != oserial) {
                ID3D11DeviceContext_UpdateSubresource(s_hw.ctx, (ID3D11Resource *)s_hw.ovl_tex,
                                                      0, NULL, opx, ow * 4, 0);
                s_hw.ovl_serial = oserial;
            }
            /* The overlay's destination is in 640x480 display coordinates,
             * a 4:3 area in the middle of a wider picture. */
            float mw = ph * (4.0f / 3.0f), mx = px + (pw - mw) * 0.5f;
            vp.TopLeftX = mx + (float)orect[0] * mw / 640.0f;
            vp.TopLeftY = py + (float)orect[1] * ph / 480.0f;
            vp.Width = (float)orect[2] * mw / 640.0f;
            vp.Height = (float)orect[3] * ph / 480.0f;
            ID3D11DeviceContext_RSSetViewports(s_hw.ctx, 1, &vp);
            ID3D11DeviceContext_PSSetShaderResources(s_hw.ctx, 0, 1, &s_hw.ovl_srv);
            ID3D11DeviceContext_Draw(s_hw.ctx, 3, 0);
        }
    }
    /* RE-SoT: top-left host menu remains visible over every movie. Keep the
     * panel at its native pixel size at 720p, scale up with larger windows. */
    if (xbox_FramebufferDebugPanelGet(&opx, &ow, &oh)) {
        /* RE-SoT: safely resize the host overlay texture when switching F5/F6. */
        if (s_hw.debug_tex && (s_hw.debug_width != ow || s_hw.debug_height != oh)) {
            if (s_hw.debug_srv) ID3D11ShaderResourceView_Release(s_hw.debug_srv);
            ID3D11Texture2D_Release(s_hw.debug_tex);
            s_hw.debug_srv = NULL; s_hw.debug_tex = NULL;
        }
        if (!s_hw.debug_tex) {
            s_hw.debug_width = ow; s_hw.debug_height = oh;
            D3D11_TEXTURE2D_DESC td;
            memset(&td, 0, sizeof td);
            td.Width = ow; td.Height = oh; td.MipLevels = 1; td.ArraySize = 1;
            td.Format = DXGI_FORMAT_B8G8R8A8_UNORM; td.SampleDesc.Count = 1;
            td.BindFlags = D3D11_BIND_SHADER_RESOURCE;
            if (SUCCEEDED(ID3D11Device_CreateTexture2D(s_hw.dev, &td, NULL, &s_hw.debug_tex)))
                ID3D11Device_CreateShaderResourceView(s_hw.dev,
                    (ID3D11Resource *)s_hw.debug_tex, NULL, &s_hw.debug_srv);
        }
        if (s_hw.debug_srv) {
            float scale = (float)s_hw.bb_h / 720.0f;
            if (scale < 0.75f) scale = 0.75f;
            if ((ow + 16) * scale > s_hw.bb_w) scale = (float)s_hw.bb_w / (ow + 16);
            ID3D11DeviceContext_UpdateSubresource(s_hw.ctx,
                (ID3D11Resource *)s_hw.debug_tex, 0, NULL, opx, ow * 4, 0);
            vp.TopLeftX = 8 * scale; vp.TopLeftY = 8 * scale;
            vp.Width = ow * scale; vp.Height = oh * scale;
            /* RE-SoT: straight-alpha background lets the scene show through. */
            ID3D11DeviceContext_PSSetShader(s_hw.ctx, s_hw.ps_debug, NULL, 0);
            ID3D11DeviceContext_OMSetBlendState(s_hw.ctx, s_hw.debug_blend, bf, 0xFFFFFFFFu);
            ID3D11DeviceContext_RSSetViewports(s_hw.ctx, 1, &vp);
            ID3D11DeviceContext_PSSetShaderResources(s_hw.ctx, 0, 1, &s_hw.debug_srv);
            ID3D11DeviceContext_Draw(s_hw.ctx, 3, 0);
        }
    }
    ID3D11DeviceContext_PSSetShaderResources(s_hw.ctx, 0, 8, none);
}

/* RE-SoT: composition and the host wait are separate. The backbuffer holds
 * the completed flip even if subsequent methods modify the guest surfaces. */
static void hw_swap_locked(int vsync)
{
    LARGE_INTEGER t0, t1;
    if (!s_hw.bb_rtv) return;
    /* A flip waits for the host's vertical blank, which is what paces a title
     * that draws as fast as it is allowed to; repaints do not. */
    QueryPerformanceCounter(&t0);
    /* RE-SoT: F6 changes the sync interval live; idle repaints remain
     * nonblocking. This does not alter the guest engine's own timing. */
    {
        extern int xbox_FramebufferVSync(void);
        int preference = xbox_FramebufferVSync();
        int enabled = preference < 0 ? s_hw.vsync : preference;
        int interval = vsync && enabled ? 1 : 0;
        /* RE-SoT: report actual guest-flip presentation on preference changes,
         * excluding movie/idle repaints which intentionally never wait. */
        static int last_preference = -1;
        if (vsync && last_preference != enabled) {
            fprintf(stderr, "  [HW] host VSync %s; game Present sync interval=%d\n",
                    enabled ? "on" : "off", interval);
            last_preference = enabled;
        }
        HRESULT hr;
        hr = IDXGISwapChain_Present(s_hw.swap, interval, 0);
        if (FAILED(hr))
            fprintf(stderr, "  [HW] Present failed: 0x%08lX\n", hr);
    }
    QueryPerformanceCounter(&t1);
    s_hw.present_ticks += (uint64_t)(t1.QuadPart - t0.QuadPart);
}

/* RE-SoT: idle/movie presentation still composes and swaps immediately. */
static void hw_present_locked(int vsync)
{
    hw_compose_locked();
    hw_swap_locked(vsync);
}

#endif /* RESOT_HW_D3D11 */

/* RE-SoT: called after DMA_GET is published for the fully decoded submission.
 * The completed picture was already captured into the swapchain at the flip. */
void nv2a_hw_flush_present(void)
{
    if (ng_active()) {
        if (!s_hw.ok) return;
        EnterCriticalSection(&s_hw.lock); ng_visibility_poll(); LeaveCriticalSection(&s_hw.lock);
        if (!s_hw.pending_present) return;
        xbox_FramebufferLimitFrame();
        EnterCriticalSection(&s_hw.lock); ng_present(1); LeaveCriticalSection(&s_hw.lock);
        return;
    }
#if RESOT_HW_D3D11
#if RESOT_RUNTIME_RETAIL
    if (!s_hw.ok) return;
    /* RE-SoT: visibility reports also progress in submissions without flips. */
    EnterCriticalSection(&s_hw.lock);
    hw_visibility_poll();
    LeaveCriticalSection(&s_hw.lock);
    if (!s_hw.pending_present) return;
#else
    if (!s_hw.ok || !s_hw.pending_present) return;
#endif
    xbox_FramebufferLimitFrame(); /* never sleep while holding the D3D lock */
    EnterCriticalSection(&s_hw.lock);
    if (s_hw.pending_present) {
        hw_swap_locked(1);
        s_hw.pending_present = 0;
        s_hw.last_flip_ms = GetTickCount();
    }
    LeaveCriticalSection(&s_hw.lock);
#endif /* RESOT_HW_D3D11 */
}

/* RE-SoT: opt-in clock check separates guest time sources from frame rate.
 * It verifies the exposed clocks, not the title's own simulation integrator. */
static void hw_clock_check(void)
{
    static int enabled = -1;
    static LONGLONG previous_host, previous_system;
    static uint64_t previous_tsc;
    LARGE_INTEGER host, system, frequency;
    uint64_t tsc;
    extern uint64_t xbox_ReadTimeStampCounter(void);
    if (enabled < 0) enabled = getenv("RESOT_CLOCK_CHECK") != NULL;
    if (!enabled) return;
    QueryPerformanceCounter(&host);
    QueryPerformanceFrequency(&frequency);
    xbox_KeQuerySystemTime(&system);
    tsc = xbox_ReadTimeStampCounter();
    if (previous_host)
        fprintf(stderr, "  [CLOCK] host %.3f s; guest TSC %.3f s; guest system %.3f s\n",
                (double)(host.QuadPart - previous_host) / frequency.QuadPart,
                (double)(tsc - previous_tsc) / 733333333.0,
                (double)(system.QuadPart - previous_system) / 10000000.0);
    previous_host = host.QuadPart; previous_system = system.QuadPart; previous_tsc = tsc;
}

/* RE-SoT: the F6 diagnostics panel reads a half-second snapshot of what a
 * frame costs (the same quantities as the five-second [HW] report): fps,
 * frame ms, draws, GPU- and CPU-transformed batches, triangles, texture
 * uploads, vertices, interpreter ms, draw-call ms, executor ms, present ms,
 * title ms, then the cumulative batch reuse hits and misses. Doubles written
 * by the flip and read by the window thread; a torn read shows one stale
 * number for half a second. */
#define HW_DIAG_N 15
static volatile double s_hw_diag[HW_DIAG_N];
int xbox_DiagRenderer(double *out, int n)
{
    int i;
    for (i = 0; i < n && i < HW_DIAG_N; i++) out[i] = s_hw_diag[i];
    return i;
}

static void hw_diag_sample(void)
{
    static DWORD t0;
    static uint32_t f0;
    static uint64_t d0, tr0, up0, vs0, dr0, vx0, pr0, ex0, gb0, cb0;
    DWORD now = GetTickCount();
    LARGE_INTEGER qf;
    uint32_t frames;
    if (t0 && now - t0 < 500) return;
    frames = s_hw.frame - f0;
    QueryPerformanceFrequency(&qf);
    if (t0 && frames) {
        double ms = 1000.0 / (double)qf.QuadPart / frames;
        double frame_ms = (double)(now - t0) / frames;
        double exec_ms = (double)(g_nv2a_exec_ticks - ex0) * ms;
        double present_ms = (double)(s_hw.present_ticks - pr0) * ms;
        int defer = xbox_FramebufferDeferPresent();
        s_hw_diag[0] = frames * 1000.0 / (now - t0);
        s_hw_diag[1] = frame_ms;
        s_hw_diag[2] = (double)(s_hw.draws - d0) / frames;
        s_hw_diag[3] = (double)(s_hw.gpu_vsh_batches - gb0) / frames;
        s_hw_diag[4] = (double)(s_hw.cpu_vsh_batches - cb0) / frames;
        s_hw_diag[5] = (double)(s_hw.tris - tr0) / frames;
        s_hw_diag[6] = (double)(s_hw.tex_uploads - up0) / frames;
        s_hw_diag[7] = (double)(s_hw_stat_verts - vx0) / frames;
        s_hw_diag[8] = (double)(s_hw_stat_vsh_ticks - vs0) * ms;
        s_hw_diag[9] = (double)(s_hw_stat_draw_ticks - dr0) * ms;
        s_hw_diag[10] = exec_ms - (defer ? 0.0 : present_ms);
        s_hw_diag[11] = present_ms;
        s_hw_diag[12] = frame_ms - exec_ms - (defer ? present_ms : 0.0);
    }
    s_hw_diag[13] = (double)s_hw_reuse_hits;
    s_hw_diag[14] = (double)s_hw_reuse_misses;
    t0 = now; f0 = s_hw.frame;
    d0 = s_hw.draws; tr0 = s_hw.tris; up0 = s_hw.tex_uploads;
    vs0 = s_hw_stat_vsh_ticks; dr0 = s_hw_stat_draw_ticks; vx0 = s_hw_stat_verts;
    pr0 = s_hw.present_ticks; ex0 = g_nv2a_exec_ticks;
    gb0 = s_hw.gpu_vsh_batches; cb0 = s_hw.cpu_vsh_batches;
}

/* NV097_FLIP_STALL: the frame the title just finished becomes the one shown. */
static void hw_flip(void)
{
    if (ng_active()) { ng_flip(); return; }
#if RESOT_HW_D3D11
    /* RE-SoT: preserve the older frame if a submission contains two flips. */
    if (s_hw.pending_present) nv2a_hw_flush_present();
    EnterCriticalSection(&s_hw.lock);
    hw_glow_dump_check(s_hw.biggest, 1);
    if (s_hw.biggest)
        s_hw.front = s_hw.biggest;
    s_hw.biggest = NULL;
    s_hw.biggest_area = 0;
    s_hw.frame++;
    hw_diag_sample(); /* RE-SoT: F6 diagnostics */
    {
        /* Every five seconds: what a frame costs, so "slow" has a reason. */
        static DWORD t0;
        static uint64_t d0, tr0, up0, vs0, dr0, vx0, pr0, ex0, gb0, cb0;
        LARGE_INTEGER qf;
        static uint32_t f0;
        DWORD now = GetTickCount();
        if (now - t0 >= 5000) {
            uint32_t frames = s_hw.frame - f0;
            QueryPerformanceFrequency(&qf);
            if (t0 && frames) {
                double ms = 1000.0 / (double)qf.QuadPart / frames;
                double frame_ms = (double)(now - t0) / frames;
                double exec_ms = (double)(g_nv2a_exec_ticks - ex0) * ms;
                double present_ms = (double)(s_hw.present_ticks - pr0) * ms;
                /* "executor" is everything done for the pushbuffer except the
                 * wait in Present; "title" is what is left of the frame. */
                fprintf(stderr, "  [HW] %.1f fps (%.1f ms); per frame: %llu draws"
                                " (%llu GPU-transformed, %llu interpreted), %llu triangles,"
                                " %.1f texture uploads, %llu vertices;"
                                " %.1f ms interpreter, %.1f ms draw calls,"
                                " %.1f ms executor, %.1f ms present, %.1f ms title\n",
                        frames * 1000.0 / (now - t0), frame_ms,
                        (unsigned long long)((s_hw.draws - d0) / frames),
                        (unsigned long long)((s_hw.gpu_vsh_batches - gb0) / frames),
                        (unsigned long long)((s_hw.cpu_vsh_batches - cb0) / frames),
                        (unsigned long long)((s_hw.tris - tr0) / frames),
                        (double)(s_hw.tex_uploads - up0) / frames,
                        (unsigned long long)((s_hw_stat_verts - vx0) / frames),
                        (double)(s_hw_stat_vsh_ticks - vs0) * ms,
                        (double)(s_hw_stat_draw_ticks - dr0) * ms,
                        /* RE-SoT: deferred Present is outside the scan timer. */
                        exec_ms - (xbox_FramebufferDeferPresent() ? 0.0 : present_ms),
                        present_ms, frame_ms - exec_ms
                            - (xbox_FramebufferDeferPresent() ? present_ms : 0.0));
                /* RE-SoT: cumulative batch reuse (HwReuse). */
                fprintf(stderr, "  [HW] batch reuse: %llu hits, %llu misses\n",
                        (unsigned long long)s_hw_reuse_hits,
                        (unsigned long long)s_hw_reuse_misses);
            }
            t0 = now; f0 = s_hw.frame;
            hw_clock_check(); /* RE-SoT: optional host/guest clock comparison. */
            d0 = s_hw.draws; tr0 = s_hw.tris; up0 = s_hw.tex_uploads;
            vs0 = s_hw_stat_vsh_ticks; dr0 = s_hw_stat_draw_ticks; vx0 = s_hw_stat_verts;
            pr0 = s_hw.present_ticks; ex0 = g_nv2a_exec_ticks;
            gb0 = s_hw.gpu_vsh_batches; cb0 = s_hw.cpu_vsh_batches;
        }
    }
    s_hw.last_flip_ms = GetTickCount();
    if (xbox_FramebufferDeferPresent()) {
        /* RE-SoT: snapshot before later methods can modify the guest surface. */
        hw_compose_locked();
        s_hw.pending_present = s_hw.bb_rtv != NULL;
    } else hw_present_locked(1);
    LeaveCriticalSection(&s_hw.lock);
#endif /* RESOT_HW_D3D11 */
}

/* Called by the window thread about 60 times a second. A title that is not
 * flipping (a movie playing through the overlay, a load) still needs its
 * window repainted; one that is flipping presents from hw_flip instead. */
void nv2a_hw_idle_present(void)
{
    if (ng_active()) {
        if (!s_hw.ok) return;
        /* RE-SoT: Bink uses PVIDEO without guest flips. The generic 100-ms
         * idle repaint limit reduced native movies to 10 Hz. Service a live
         * overlay at the presentation thread's cadence (also on Android). */
        const uint32_t *movie_pixels;
        uint32_t movie_w, movie_h, movie_rect[4], movie_serial;
        DWORD interval = xbox_FramebufferOverlayGet(&movie_pixels,&movie_w,&movie_h,
                                                    movie_rect,&movie_serial) ? 0 : 100;
        EnterCriticalSection(&s_hw.lock); ng_visibility_poll(); LeaveCriticalSection(&s_hw.lock);
        if (GetTickCount()-s_hw.last_flip_ms < interval) return;
        EnterCriticalSection(&s_hw.lock);
        if (!s_hw.pending_present && GetTickCount()-s_hw.last_flip_ms >= interval) { ng_compose(); ng_present(0); }
        LeaveCriticalSection(&s_hw.lock);
        return;
    }
#if RESOT_HW_D3D11
    if (!s_hw.ok)
        return;
#if RESOT_RUNTIME_RETAIL
    /* RE-SoT: the title may be polling a report without submitting another
     * frame. Nonblocking polling here lets that report finish independently. */
    EnterCriticalSection(&s_hw.lock);
    hw_visibility_poll();
    LeaveCriticalSection(&s_hw.lock);
#endif
    if (GetTickCount() - s_hw.last_flip_ms < 100)
        return;
    EnterCriticalSection(&s_hw.lock);
    /* RE-SoT: a flip may have arrived while idle presentation waited. */
    if (!s_hw.pending_present && GetTickCount() - s_hw.last_flip_ms >= 100)
        hw_present_locked(0);
    LeaveCriticalSection(&s_hw.lock);
#endif /* RESOT_HW_D3D11 */
}

/* Copy the shown frame into a caller buffer of w x h XRGB pixels (for the
 * window's BMP dump). Returns 0 when there is nothing to copy. */
int nv2a_hw_readback(uint32_t *dst, uint32_t w, uint32_t h)
{
    if (ng_active()) {
        int result;
        EnterCriticalSection(&s_hw.lock); result = ng_readback(dst,w,h); LeaveCriticalSection(&s_hw.lock);
        return result;
    }
#if RESOT_HW_D3D11
    D3D11_TEXTURE2D_DESC td;
    D3D11_MAPPED_SUBRESOURCE map;
    ID3D11Texture2D *stage = NULL;
    uint32_t x, y;
    int ok = 0;

    if (!s_hw.ok)
        return 0;
    EnterCriticalSection(&s_hw.lock);
    if (s_hw.front && s_hw.front->tex) {
        ID3D11Texture2D_GetDesc(s_hw.front->tex, &td);
        td.Usage = D3D11_USAGE_STAGING;
        td.BindFlags = 0;
        td.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
        if (SUCCEEDED(ID3D11Device_CreateTexture2D(s_hw.dev, &td, NULL, &stage))) {
            ID3D11DeviceContext_CopyResource(s_hw.ctx, (ID3D11Resource *)stage,
                                             (ID3D11Resource *)s_hw.front->tex);
            if (SUCCEEDED(ID3D11DeviceContext_Map(s_hw.ctx, (ID3D11Resource *)stage, 0,
                                                  D3D11_MAP_READ, 0, &map))) {
                for (y = 0; y < h; y++) {
                    const uint32_t *row = (const uint32_t *)
                        ((const uint8_t *)map.pData
                         + (size_t)(y * td.Height / h) * map.RowPitch);
                    for (x = 0; x < w; x++)
                        dst[(size_t)y * w + x] = row[x * td.Width / w];
                }
                ID3D11DeviceContext_Unmap(s_hw.ctx, (ID3D11Resource *)stage, 0);
                ok = 1;
            }
            ID3D11Texture2D_Release(stage);
        }
    }
    LeaveCriticalSection(&s_hw.lock);
    return ok;
#else
    return 0;
#endif /* RESOT_HW_D3D11 */
}

/* Methods only the hardware path acts on. Returns 1 when it took the method. */
static int hw_method(uint32_t method, uint32_t param)
{
    switch (method) {
    case 0x0308: s_hw.cull_enable = param; return 1;   /* CULL_FACE_ENABLE */
    case 0x039C: s_hw.cull_face = param;   return 1;   /* CULL_FACE        */
    case 0x03A0: s_hw.front_face = param;  return 1;   /* FRONT_FACE       */
    case 0x1D98: s_hw.clear_rect_h = param; s_hw.clear_rect_set = 1; return 1;
    case 0x1D9C: s_hw.clear_rect_v = param; s_hw.clear_rect_set = 1; return 1;
    default:     return 0;
    }
}

#else  /* neither _WIN32 nor __ANDROID__ */
static int  hw_active(void) { return 0; }
static void hw_visibility_method(uint32_t m, uint32_t v, uint64_t t) { (void)m; (void)v; (void)t; }
static void hw_draw_batch(const Nv2aVshOutput *v, uint32_t n) { (void)v; (void)n; }
static int  hw_draw_program_batch(void) { return 0; }
static void hw_clear(uint32_t param) { (void)param; }
static void hw_flip(void) {}
static int  hw_method(uint32_t method, uint32_t param) { (void)method; (void)param; return 0; }
void nv2a_hw_idle_present(void) {}
void nv2a_hw_flush_present(void) {} /* RE-SoT: no hardware pending frame. */
int  xbox_DiagRenderer(double *out, int n) { (void)out; (void)n; return 0; } /* RE-SoT */
int  nv2a_hw_readback(uint32_t *dst, uint32_t w, uint32_t h) { (void)dst; (void)w; (void)h; return 0; }
#endif
