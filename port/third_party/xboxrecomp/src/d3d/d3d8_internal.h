/**
 * D3D8 Compatibility Layer - Internal Header
 *
 * Shared types and declarations for the D3D8→D3D11 implementation.
 * Not part of the public API - only included by d3d8_*.c files.
 */

#ifndef BURNOUT3_D3D8_INTERNAL_H
#define BURNOUT3_D3D8_INTERNAL_H

#define COBJMACROS
#include "d3d8_xbox.h"

/* Portable: D3D8 device accessor used by recompiled code on both backends
 * (d3d8_device.c on Windows, d3d8_gl.c on POSIX). */
IDirect3DDevice8 *d3d8_GetDevice(void);

#if defined(_WIN32)
/* === Everything below is the D3D11 backend. The POSIX d3d8_compat
 * library (d3d8_gl.c) implements its own internal state and does not
 * need any of these declarations. === */

#include <d3d11.h>
#include <dxgi.h>

/* ================================================================
 * D3D11 device accessors (implemented in d3d8_device.c)
 * ================================================================ */

IDirect3DDevice8    *d3d8_GetDevice(void);
ID3D11Device        *d3d8_GetD3D11Device(void);
ID3D11DeviceContext *d3d8_GetD3D11Context(void);
IDXGISwapChain      *d3d8_GetSwapChain(void);
ID3D11RenderTargetView *d3d8_GetDefaultRTV(void);
HWND                 d3d8_GetHWND(void);
UINT                 d3d8_GetBackbufferWidth(void);
UINT                 d3d8_GetBackbufferHeight(void);

/* Presentation-only gamma. End restores the saved backbuffer even if Present fails. */
void d3d8_gamma_set(const D3DGAMMARAMP *ramp);
void d3d8_gamma_get(D3DGAMMARAMP *ramp);
HRESULT d3d8_gamma_begin(ID3D11RenderTargetView *target);
void d3d8_gamma_end(ID3D11RenderTargetView *target);
void d3d8_gamma_shutdown(void);

/* Current render state array accessor */
const DWORD         *d3d8_GetRenderStates(void);
const DWORD         *d3d8_GetTSS(DWORD stage);

/* Base texture currently bound to a texture stage (2D/cube/volume),
 * or NULL if nothing is bound. */
IDirect3DBaseTexture8 *d3d8_GetStageTexture(DWORD stage);

/* Transform accessors */
const D3DMATRIX     *d3d8_GetTransform(D3DTRANSFORMSTATETYPE type);

/* Lighting accessors (d3d8_device.c) */
const D3DLIGHT8     *d3d8_GetLight(DWORD index);
BOOL                 d3d8_GetLightEnable(DWORD index);
const D3DMATERIAL8  *d3d8_GetMaterial(void);
UINT                 d3d8_GetNumLights(void);
DWORD                d3d8_GetCurrentFVF(void);

/* ================================================================
 * Resource wrapper structures
 * ================================================================ */

typedef struct D3D8VertexBuffer {
    IDirect3DVertexBuffer8  iface;      /* COM interface (must be first) */
    LONG                    ref_count;
    ID3D11Buffer           *d3d11_buffer;
    UINT                    size;
    DWORD                   fvf;
    DWORD                   usage;
    BYTE                   *sys_mem;    /* System memory for Lock */
    BOOL                    locked;
    BOOL                    dirty;
} D3D8VertexBuffer;

typedef struct D3D8IndexBuffer {
    IDirect3DIndexBuffer8   iface;
    LONG                    ref_count;
    ID3D11Buffer           *d3d11_buffer;
    UINT                    size;
    D3DFORMAT               format;     /* INDEX16 or INDEX32 */
    DWORD                   usage;
    BYTE                   *sys_mem;
    BOOL                    locked;
    BOOL                    dirty;
} D3D8IndexBuffer;

typedef struct D3D8Texture {
    IDirect3DTexture8       iface;
    LONG                    ref_count;
    ID3D11Texture2D        *d3d11_texture;
    ID3D11ShaderResourceView *srv;
    UINT                    width;
    UINT                    height;
    UINT                    levels;
    D3DFORMAT               d3d8_format;
    DXGI_FORMAT             dxgi_format;
    DWORD                   usage;
    BYTE                   *sys_mem;    /* All mip levels, back to back (level 0 first) */
    UINT                    pitch;      /* Row pitch of level 0 */
    BOOL                    locked;
    BOOL                    dirty;
    UINT                    palette;    /* Palette index (texture stage) this P8 texture bakes */
} D3D8Texture;

typedef struct D3D8Surface {
    IDirect3DSurface8       iface;
    LONG                    ref_count;
    ID3D11Texture2D        *d3d11_texture;
    ID3D11RenderTargetView *rtv;
    ID3D11DepthStencilView *dsv;
    UINT                    width;
    UINT                    height;
    D3DFORMAT               format;
    D3DPOOL                 pool;
    DWORD                   usage;

    /* D3D11 subresource this surface aliases (array*MipLevels+mip).
     * 0 for a standalone offscreen surface. */
    UINT                    subresource;

    /* Multisample state (requested Xbox type + resolved D3D11 count). */
    D3DMULTISAMPLE_TYPE     multsample_type;
    UINT                    sample_count;

    /* Surface LockRect readback (staging round-trip). */
    ID3D11Texture2D        *staging;
    BYTE                   *locked_bits;
    INT                     locked_pitch;
    UINT                    lock_x;
    UINT                    lock_y;
    BOOL                    locked;
    BOOL                    lock_readonly;

    /* P8 (palettized) surfaces: raw index data lives in the parent
     * texture's sys_mem. LockRect returns the indices directly instead
     * of the palette-expanded BGRA that the D3D11 texture holds. */
    BOOL                    palettized;
    const BYTE             *palette_sys;  /* raw level data (1 byte/texel) */
    UINT                    palette_pitch;
    UINT                    palette_index; /* stage palette baked into it */
} D3D8Surface;

/* 2D texture (D3D11 Texture2D). See tex_* implementation.
 *
 * D3D8CubeTexture/D3D8VolumeTexture intentionally mirror the field
 * layout of D3D8Texture up to and including the `srv` member (a
 * "layout overlay"), so dev_SetTexture can fetch the SRV of any
 * bound base texture through the D3D8Texture offset. */
typedef struct D3D8CubeTexture {
    IDirect3DCubeTexture8   iface;
    LONG                    ref_count;
    ID3D11Texture2D        *d3d11_texture;
    ID3D11ShaderResourceView *srv;
    UINT                    width;      /* edge length */
    UINT                    height;     /* == width (cube faces are square) */
    UINT                    levels;
    D3DFORMAT               d3d8_format;
    DXGI_FORMAT             dxgi_format;
    DWORD                   usage;
    BYTE                   *sys_mem;    /* 6 faces * mip chain per face */
    UINT                    pitch;      /* row pitch of face level 0 */
    BOOL                    locked;
    BOOL                    dirty;
    UINT                    palette;    /* Palette index (texture stage) this P8 texture bakes */
} D3D8CubeTexture;

/* 3D texture (D3D11 Texture3D). The leading fields mirror D3D8CubeTexture
 * up to `srv` (layout overlay) when read through the D3D8Texture prefix.
 * Note `depth` is placed AFTER `levels` so width/height/levels stay at the
 * same offsets as the 2D types. */
typedef struct D3D8VolumeTexture {
    IDirect3DVolumeTexture8 iface;
    LONG                    ref_count;
    ID3D11Texture3D        *d3d11_texture;
    ID3D11ShaderResourceView *srv;
    UINT                    width;
    UINT                    height;
    UINT                    levels;
    UINT                    depth;
    D3DFORMAT               d3d8_format;
    DXGI_FORMAT             dxgi_format;
    DWORD                   usage;
    BYTE                   *sys_mem;    /* all levels, back to back */
    UINT                    pitch;      /* row pitch of level 0 */
    BOOL                    locked;
    BOOL                    dirty;
    UINT                    palette;    /* Palette index this P8 texture bakes */
} D3D8VolumeTexture;

/* A single volume level handed out by GetVolumeLevel(). */
typedef struct D3D8Volume {
    IDirect3DVolume8        iface;
    LONG                    ref_count;
    IDirect3DVolumeTexture8 *parent;    /* owning texture (AddRef'd) */
    UINT                    level;
} D3D8Volume;

/* ================================================================
 * Format conversion (d3d8_resources.c)
 * ================================================================ */

DXGI_FORMAT d3d8_to_dxgi_format(D3DFORMAT fmt);
UINT        d3d8_format_bpp(D3DFORMAT fmt);
BOOL        d3d8_format_is_compressed(D3DFORMAT fmt);
UINT        d3d8_row_pitch(D3DFORMAT fmt, UINT width);

/* Is the Xbox format a depth/stencil format? */
BOOL d3d8_format_is_depth(D3DFORMAT fmt);

/* bpp of the data actually uploaded to D3D11 (post-conversion). */
UINT d3d8_upload_bpp(D3DFORMAT fmt);

/* Does this format need software conversion at upload time? */
BOOL d3d8_format_has_conversion(D3DFORMAT fmt);

/* Is this a palettized (P8) format? */
BOOL d3d8_format_is_palettized(D3DFORMAT fmt);

/* Convert one linear (unswizzled) row of pixels from the Xbox layout
 * to the layout expected by the D3D11 texture. dst holds
 * d3d8_upload_bpp()/8 * width bytes per row. src is the raw
 * d3d8_format_bpp()/8 * width pitch. `palette` is the palette index
 * (texture stage) P8 texels are expanded through. */
void d3d8_convert_linear_pixels(D3DFORMAT fmt, UINT width, UINT height,
                                const BYTE *src, BYTE *dst, UINT palette);

/* Surface implementation (d3d8_resources.c) */
IDirect3DSurface8 *d3d8_surface_create(ID3D11Texture2D *texture,
                                       UINT mip_slice,
                                       UINT array_slice,
                                       UINT width, UINT height,
                                       D3DFORMAT fmt, D3DPOOL pool,
                                       DWORD usage,
                                       D3DMULTISAMPLE_TYPE multsample_type,
                                       const BYTE *raw_level_data,
                                       UINT palette_index);

/* Wrap a raw D3D11 texture (back buffer, etc.) as a surface. */
IDirect3DSurface8 *xbox_d3d8_surface_wrap(ID3D11Texture2D *texture,
                                          UINT width, UINT height,
                                          D3DFORMAT fmt);

HRESULT d3d8_CreateImageSurfaceImpl(UINT Width, UINT Height, D3DFORMAT Format,
                                    IDirect3DSurface8 **ppSurface);

/* Fetch the pixel-shader SRV of any bound base texture (2D, cube or
 * volume). All three implementations keep the SRV at the same offset
 * as D3D8Texture. */
ID3D11ShaderResourceView *d3d8_base_srv(IDirect3DBaseTexture8 *texture);

/* Read the D3DFORMAT of any base texture. */
D3DFORMAT d3d8_base_format(IDirect3DBaseTexture8 *texture);
void      d3d8_base_set_palette(IDirect3DBaseTexture8 *texture, UINT palette);

/* Re-upload every level of a P8 (palettized) texture through its
 * current stage palette. No-op for non-palettized textures. */
void d3d8_refresh_palette(IDirect3DBaseTexture8 *texture);

/* Cube/volume texture implementations (d3d8_resources.c) */
HRESULT d3d8_CreateCubeTextureImpl(UINT EdgeLength, UINT Levels, DWORD Usage,
                                   D3DFORMAT Format, IDirect3DCubeTexture8 **ppTex);
HRESULT d3d8_CreateVolumeTextureImpl(UINT Width, UINT Height, UINT Depth,
                                     UINT Levels, DWORD Usage, D3DFORMAT Format,
                                     IDirect3DVolumeTexture8 **ppTex);

/* ================================================================
 * Palette management (d3d8_device.c)
 * ================================================================ */

#define D3D8_MAX_PALETTES 4
void            d3d8_SetPalette(DWORD stage, const DWORD *entries);
const DWORD    *d3d8_GetPalette(DWORD stage);

/* Resource creation (d3d8_resources.c) */
HRESULT d3d8_CreateVertexBufferImpl(UINT Length, DWORD Usage, DWORD FVF, IDirect3DVertexBuffer8 **ppVB);
HRESULT d3d8_CreateIndexBufferImpl(UINT Length, DWORD Usage, D3DFORMAT Format, IDirect3DIndexBuffer8 **ppIB);
HRESULT d3d8_CreateTextureImpl(UINT Width, UINT Height, UINT Levels, DWORD Usage, D3DFORMAT Format, IDirect3DTexture8 **ppTex);

/* ================================================================
 * Shader management (d3d8_shaders.c)
 * ================================================================ */

HRESULT d3d8_shaders_init(void);
void    d3d8_shaders_shutdown(void);

/* Select programmable/FVF vertex state and refresh fixed-function pixel state. */
void    d3d8_shaders_prepare_draw(DWORD handle);

/* ================================================================
 * NV2A Register Combiner pixel shaders (d3d8_combiners.c)
 * ================================================================ */

#include "d3d8_combiners.h"

/* ================================================================
 * NV2A Programmable Vertex Shaders (d3d8_vsh.c)
 * ================================================================ */

#include "d3d8_vsh.h"

/* ================================================================
 * Render state management (d3d8_states.c)
 * ================================================================ */

HRESULT d3d8_states_init(void);
void    d3d8_states_shutdown(void);

/* Apply current D3D8 render states as D3D11 state objects */
void    d3d8_states_apply(void);

/* Create sampler state from TSS and apply to slot */
void    d3d8_states_apply_sampler(DWORD stage);

#endif /* _WIN32 -- end of D3D11 backend section */

#endif /* BURNOUT3_D3D8_INTERNAL_H */
