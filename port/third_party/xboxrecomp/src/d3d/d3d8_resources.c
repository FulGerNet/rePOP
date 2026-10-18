/**
 * D3D8 Resource Management - Vertex Buffers, Index Buffers, Textures
 *
 * Implements Xbox D3D8 resource creation and Lock/Unlock using D3D11.
 * Resources use system memory staging with UpdateSubresource on Unlock
 * for maximum compatibility with D3D8 Lock semantics.
 */

#include "d3d8_internal.h"
#include "d3d8_swizzle.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>

/* Forward declarations for mip/slice addressing helpers (defined below,
 * used early by d3d8_refresh_palette). */
static UINT cube_level_width(const struct D3D8CubeTexture *cube, UINT level);
static BYTE *cube_level_ptr(const struct D3D8CubeTexture *cube, UINT face, UINT level);
static UINT vol_level_width(const struct D3D8VolumeTexture *vol, UINT level);
static UINT vol_level_height(const struct D3D8VolumeTexture *vol, UINT level);
static UINT vol_level_depth(const struct D3D8VolumeTexture *vol, UINT level);
static UINT vol_level_pitch(const struct D3D8VolumeTexture *vol, UINT level);
static UINT vol_level_rows(const struct D3D8VolumeTexture *vol, UINT level);
static UINT vol_level_offset(const struct D3D8VolumeTexture *vol, UINT level);
static void d3d8_upload_mip_level(ID3D11Texture2D *d3d11_texture, D3DFORMAT fmt,
                                  UINT w, UINT h, UINT subresource,
                                  const BYTE *src_data, UINT src_row_pitch,
                                  UINT palette);

/* ================================================================
 * Format conversion: Xbox D3DFORMAT → DXGI_FORMAT
 *
 * Xbox binary format constants follow the packed XDK layout above.
 * Formats that need a different D3D11 storage (YUV, P8, AL8) are
 * converted in software during LockRect upload.
 * ================================================================ */

DXGI_FORMAT d3d8_to_dxgi_format(D3DFORMAT fmt)
{
    switch (fmt) {
    /* 32-bit ARGB / RGB */
    case D3DFMT_A8R8G8B8:
    case D3DFMT_LIN_A8R8G8B8:
    case D3DFMT_B8G8R8A8:
    case D3DFMT_LIN_B8G8R8A8:
        return DXGI_FORMAT_B8G8R8A8_UNORM;
    case D3DFMT_X8R8G8B8:
    case D3DFMT_LIN_X8R8G8B8:
        return DXGI_FORMAT_B8G8R8X8_UNORM;
    case D3DFMT_R8G8B8A8:
    case D3DFMT_LIN_R8G8B8A8:
    case D3DFMT_A8B8G8R8:
    case D3DFMT_LIN_A8B8G8R8:
        return DXGI_FORMAT_R8G8B8A8_UNORM;

    /* Signed bump-map (SNORM) formats */
    case D3DFMT_Q8W8V8U8:
        return DXGI_FORMAT_R8G8B8A8_SNORM;
    case D3DFMT_X8L8V8U8:
        return DXGI_FORMAT_R8G8B8A8_SNORM;
    case D3DFMT_V8U8:
    case D3DFMT_LIN_V8U8:
        return DXGI_FORMAT_R8G8_SNORM;
    case D3DFMT_L6V5U5:
    case D3DFMT_LIN_L6V5U5:
        return DXGI_FORMAT_R8G8_SNORM;   /* L6V5U5 sign-extended to R8G8_SNORM at upload */
    case D3DFMT_V16U16:
    case D3DFMT_LIN_V16U16:
        return DXGI_FORMAT_R16G16_SNORM;

    /* 16-bit RGB */
    case D3DFMT_R5G6B5:
    case D3DFMT_LIN_R5G6B5:
    case D3DFMT_R6G5B5:
    case D3DFMT_LIN_R6G5B5:
        return DXGI_FORMAT_B5G6R5_UNORM;
    case D3DFMT_A1R5G5B5:
    case D3DFMT_X1R5G5B5:
    case D3DFMT_LIN_A1R5G5B5:
    case D3DFMT_LIN_X1R5G5B5:
        return DXGI_FORMAT_B5G5R5A1_UNORM;
    case D3DFMT_A4R4G4B4:
    case D3DFMT_LIN_A4R4G4B4:
        return DXGI_FORMAT_B4G4R4A4_UNORM;
    case D3DFMT_R5G5B5A1:       /* bit-reordered to B5G5R5A1 at upload */
    case D3DFMT_LIN_R5G5B5A1:
        return DXGI_FORMAT_B5G5R5A1_UNORM;
    case D3DFMT_R4G4B4A4:       /* bit-reordered to B4G4R4A4 at upload */
    case D3DFMT_LIN_R4G4B4A4:
        return DXGI_FORMAT_B4G4R4A4_UNORM;

    /* Compressed */
    case D3DFMT_DXT1:
    case D3DFMT_CTX1:           /* no real D3D11 equiv; approximate as BC1 */
    case D3DFMT_LIN_CTX1:
        return DXGI_FORMAT_BC1_UNORM;
    case D3DFMT_DXT3:
    case D3DFMT_DXT3A:          /* explicit-alpha DXT3 variant */
    case D3DFMT_LIN_DXT3A:
        return DXGI_FORMAT_BC2_UNORM;
    case D3DFMT_DXT5:
    case D3DFMT_DXT5A:          /* alpha-only DXT5 variant */
    case D3DFMT_LIN_DXT5A:
        return DXGI_FORMAT_BC3_UNORM;
    case D3DFMT_DXN:            /* 2-channel normal compression */
    case D3DFMT_LIN_DXN:
        return DXGI_FORMAT_BC5_UNORM;

    /* Alpha / luminance */
    case D3DFMT_A8:
    case D3DFMT_LIN_A8:
        return DXGI_FORMAT_A8_UNORM;
    case D3DFMT_L8:
    case D3DFMT_LIN_L8:
        return DXGI_FORMAT_R8_UNORM;
    case D3DFMT_L16:
    case D3DFMT_LIN_L16:
        return DXGI_FORMAT_R16_UNORM;
    case D3DFMT_A8L8:
    case D3DFMT_LIN_A8L8:
        return DXGI_FORMAT_R8G8_UNORM;
    case D3DFMT_AL8:            /* expanded to 16-bit at upload */
    case D3DFMT_LIN_AL8:
        return DXGI_FORMAT_R8G8_UNORM;

    /* 16-bit color channel pairs */
    case D3DFMT_G8B8:
    case D3DFMT_LIN_G8B8:
    case D3DFMT_R8B8:
    case D3DFMT_LIN_R8B8:
        return DXGI_FORMAT_R8G8_UNORM;

    /* Palette */
    case D3DFMT_P8:             /* expanded to BGRA through the palette */
        return DXGI_FORMAT_B8G8R8A8_UNORM;

    /* YUV (converted to BGRA at upload) */
    case D3DFMT_YUY2:
    case D3DFMT_UYVY:
        return DXGI_FORMAT_B8G8R8A8_UNORM;

    /* Depth/stencil */
    case D3DFMT_D24S8:
    case D3DFMT_F24S8:
    case D3DFMT_D24X8:
    case D3DFMT_D24FS8:          /* float depth; approximated as D24 UNORM + S8 */
    case D3DFMT_LIN_D24S8:
    case D3DFMT_LIN_F24S8:
    case D3DFMT_LIN_D24X8:
    case D3DFMT_LIN_D24FS8:
        return DXGI_FORMAT_D24_UNORM_S8_UINT;
    case D3DFMT_D16:
    case D3DFMT_LIN_D16:
        return DXGI_FORMAT_D16_UNORM;
    case D3DFMT_F16:            /* no float depth in D3D11; sample as R16 */
    case D3DFMT_LIN_F16:
        return DXGI_FORMAT_R16_FLOAT;
    case D3DFMT_D32:
    case D3DFMT_LIN_D32:        /* 32-bit fixed depth; approximated as float D32 */
        return DXGI_FORMAT_D32_FLOAT;

    /* 16/32-bit uncompressed pairs & luminance */
    case D3DFMT_G16R16:
    case D3DFMT_LIN_G16R16:
    case D3DFMT_A16L16:          /* luma+alpha -> R,G */
    case D3DFMT_LIN_A16L16:
        return DXGI_FORMAT_R16G16_UNORM;
    case D3DFMT_A16B16G16R16:   /* BGRA layout -> R16G16B16A16 (swizzled byte order at upload) */
    case D3DFMT_LIN_A16B16G16R16:
        return DXGI_FORMAT_R16G16B16A16_UNORM;
    case D3DFMT_A32B32G32R32:
    case D3DFMT_LIN_A32B32G32R32:
        return DXGI_FORMAT_R32G32B32A32_FLOAT;   /* no 128-bit UNORM in DXGI */
    case D3DFMT_G32R32:
    case D3DFMT_LIN_G32R32:
        return DXGI_FORMAT_R32G32_FLOAT;   /* no R32G32_UNORM in DXGI */
    case D3DFMT_L32:
    case D3DFMT_LIN_L32:        /* 32-bit luminance */
        return DXGI_FORMAT_R32_FLOAT;
    case D3DFMT_A32L32:
    case D3DFMT_LIN_A32L32:
        return DXGI_FORMAT_R32G32_FLOAT;

    /* Floating-point formats */
    case D3DFMT_R16F:
    case D3DFMT_LIN_R16F:
        return DXGI_FORMAT_R16_FLOAT;
    case D3DFMT_R32F:
    case D3DFMT_LIN_R32F:
        return DXGI_FORMAT_R32_FLOAT;
    case D3DFMT_G16R16F:
    case D3DFMT_LIN_G16R16F:
        return DXGI_FORMAT_R16G16_FLOAT;
    case D3DFMT_G32R32F:
    case D3DFMT_LIN_G32R32F:
        return DXGI_FORMAT_R32G32_FLOAT;
    case D3DFMT_A16B16G16R16F:
    case D3DFMT_LIN_A16B16G16R16F:
        return DXGI_FORMAT_R16G16B16A16_FLOAT;
    case D3DFMT_A32B32G32R32F:
    case D3DFMT_LIN_A32B32G32R32F:
        return DXGI_FORMAT_R32G32B32A32_FLOAT;

    /* 10-bit formats */
    case D3DFMT_A2R10G10B10:
    case D3DFMT_X2R10G10B10:
    case D3DFMT_A2B10G10R10:
    case D3DFMT_A2W10V10U10:
    case D3DFMT_LIN_A2R10G10B10:
    case D3DFMT_LIN_X2R10G10B10:
    case D3DFMT_LIN_A2B10G10R10:
    case D3DFMT_LIN_A2W10V10U10:
        return DXGI_FORMAT_R10G10B10A2_UNORM;
    case D3DFMT_R11G11B10:
    case D3DFMT_LIN_R11G11B10:
        return DXGI_FORMAT_R11G11B10_FLOAT;
    case D3DFMT_R10G11B11:
    case D3DFMT_LIN_R10G11B11:
        return DXGI_FORMAT_R11G11B10_FLOAT;   /* no exact DXGI; approximate */

    /* Signed bump (16/32/64-bit) */
    case D3DFMT_V32U32:
    case D3DFMT_LIN_V32U32:
        return DXGI_FORMAT_R32G32_FLOAT;   /* 32-bit signed ints sampled as float */
    case D3DFMT_Q16W16V16U16:
    case D3DFMT_LIN_Q16W16V16U16:
        return DXGI_FORMAT_R16G16B16A16_SNORM;
    case D3DFMT_Q32W32V32U32:
    case D3DFMT_LIN_Q32W32V32U32:
        return DXGI_FORMAT_R32G32B32A32_SINT;   /* no 128-bit SNORM in DXGI */

    /* Index buffers */
    case D3DFMT_INDEX16:        return DXGI_FORMAT_R16_UINT;
    case D3DFMT_INDEX32:        return DXGI_FORMAT_R32_UINT;

    default:
        fprintf(stderr, "D3D8: Unknown format 0x%X, using R8G8B8A8\n", fmt);
        return DXGI_FORMAT_R8G8B8A8_UNORM;
    }
}

UINT d3d8_format_bpp(D3DFORMAT fmt)
{
    switch (fmt) {
    /* 32 bits per pixel */
    case D3DFMT_A8R8G8B8:
    case D3DFMT_X8R8G8B8:
    case D3DFMT_LIN_A8R8G8B8:
    case D3DFMT_LIN_X8R8G8B8:
    case D3DFMT_A8B8G8R8:
    case D3DFMT_LIN_A8B8G8R8:
    case D3DFMT_B8G8R8A8:
    case D3DFMT_LIN_B8G8R8A8:
    case D3DFMT_R8G8B8A8:
    case D3DFMT_LIN_R8G8B8A8:
    case D3DFMT_Q8W8V8U8:
    case D3DFMT_X8L8V8U8:
    case D3DFMT_V16U16:
    case D3DFMT_LIN_V16U16:
    case D3DFMT_D24S8:
    case D3DFMT_F24S8:
    case D3DFMT_LIN_D24S8:
    case D3DFMT_LIN_F24S8:
    case D3DFMT_D24X8:
    case D3DFMT_D24FS8:
    case D3DFMT_D32:
    case D3DFMT_LIN_D24X8:
    case D3DFMT_LIN_D24FS8:
    case D3DFMT_LIN_D32:
    case D3DFMT_G16R16:
    case D3DFMT_LIN_G16R16:
    case D3DFMT_A16L16:
    case D3DFMT_LIN_A16L16:
    case D3DFMT_L32:
    case D3DFMT_LIN_L32:
    case D3DFMT_R32F:
    case D3DFMT_LIN_R32F:
    case D3DFMT_G16R16F:
    case D3DFMT_LIN_G16R16F:
    case D3DFMT_A2R10G10B10:
    case D3DFMT_X2R10G10B10:
    case D3DFMT_A2B10G10R10:
    case D3DFMT_A2W10V10U10:
    case D3DFMT_R10G11B11:
    case D3DFMT_R11G11B10:
    case D3DFMT_LIN_A2R10G10B10:
    case D3DFMT_LIN_X2R10G10B10:
    case D3DFMT_LIN_A2B10G10R10:
    case D3DFMT_LIN_A2W10V10U10:
    case D3DFMT_LIN_R10G11B11:
    case D3DFMT_LIN_R11G11B10:
    case D3DFMT_INDEX32:
        return 32;

    /* 16 bits per pixel */
    case D3DFMT_A1R5G5B5:
    case D3DFMT_X1R5G5B5:
    case D3DFMT_LIN_A1R5G5B5:
    case D3DFMT_LIN_X1R5G5B5:
    case D3DFMT_A4R4G4B4:
    case D3DFMT_LIN_A4R4G4B4:
    case D3DFMT_R5G6B5:
    case D3DFMT_LIN_R5G6B5:
    case D3DFMT_R6G5B5:
    case D3DFMT_LIN_R6G5B5:
    case D3DFMT_V8U8:
    case D3DFMT_LIN_V8U8:
    case D3DFMT_L6V5U5:
    case D3DFMT_LIN_L6V5U5:
    case D3DFMT_G8B8:
    case D3DFMT_LIN_G8B8:
    case D3DFMT_R8B8:
    case D3DFMT_LIN_R8B8:
    case D3DFMT_A8L8:
    case D3DFMT_LIN_A8L8:
    case D3DFMT_D16:
    case D3DFMT_LIN_D16:
    case D3DFMT_F16:
    case D3DFMT_LIN_F16:
    case D3DFMT_L16:
    case D3DFMT_LIN_L16:
    case D3DFMT_R5G5B5A1:
    case D3DFMT_LIN_R5G5B5A1:
    case D3DFMT_R4G4B4A4:
    case D3DFMT_LIN_R4G4B4A4:
    case D3DFMT_R16F:
    case D3DFMT_LIN_R16F:
    case D3DFMT_YUY2:
    case D3DFMT_UYVY:
    case D3DFMT_INDEX16:
        return 16;

    /* 8 bits per pixel */
    case D3DFMT_L8:
    case D3DFMT_LIN_L8:
    case D3DFMT_AL8:
    case D3DFMT_LIN_AL8:
    case D3DFMT_A8:
    case D3DFMT_LIN_A8:
    case D3DFMT_P8:
        return 8;

    /* 64 bits per pixel */
    case D3DFMT_A16B16G16R16:
    case D3DFMT_LIN_A16B16G16R16:
    case D3DFMT_G32R32:
    case D3DFMT_LIN_G32R32:
    case D3DFMT_A32L32:
    case D3DFMT_LIN_A32L32:
    case D3DFMT_G32R32F:
    case D3DFMT_LIN_G32R32F:
    case D3DFMT_A16B16G16R16F:
    case D3DFMT_LIN_A16B16G16R16F:
    case D3DFMT_V32U32:
    case D3DFMT_LIN_V32U32:
    case D3DFMT_Q16W16V16U16:
    case D3DFMT_LIN_Q16W16V16U16:
        return 64;

    /* 128 bits per pixel */
    case D3DFMT_A32B32G32R32:
    case D3DFMT_LIN_A32B32G32R32:
    case D3DFMT_A32B32G32R32F:
    case D3DFMT_LIN_A32B32G32R32F:
    case D3DFMT_Q32W32V32U32:
    case D3DFMT_LIN_Q32W32V32U32:
        return 128;

    /* Compressed (bits per pixel of the source data) */
    case D3DFMT_DXT1:
    case D3DFMT_CTX1:
    case D3DFMT_LIN_CTX1:
        return 4;   /* BC1 */
    case D3DFMT_DXT3:
    case D3DFMT_DXT3A:
    case D3DFMT_DXT5:
    case D3DFMT_DXT5A:
    case D3DFMT_DXN:
    case D3DFMT_LIN_DXT3A:
    case D3DFMT_LIN_DXT5A:
    case D3DFMT_LIN_DXN:
        return 8;   /* BC2/BC3/BC5 */
    default: return 32;
    }
}

BOOL d3d8_format_is_compressed(D3DFORMAT fmt)
{
    switch (fmt) {
    case D3DFMT_DXT1:
    case D3DFMT_CTX1:
    case D3DFMT_LIN_CTX1:
    case D3DFMT_DXT3:
    case D3DFMT_DXT3A:
    case D3DFMT_LIN_DXT3A:
    case D3DFMT_DXT5:
    case D3DFMT_DXT5A:
    case D3DFMT_LIN_DXT5A:
    case D3DFMT_DXN:
    case D3DFMT_LIN_DXN:
        return TRUE;
    default:
        return FALSE;
    }
}

BOOL d3d8_format_is_depth(D3DFORMAT fmt)
{
    switch (fmt) {
    case D3DFMT_D24S8:
    case D3DFMT_F24S8:
    case D3DFMT_D16:
    case D3DFMT_F16:
    case D3DFMT_D24X8:
    case D3DFMT_D24FS8:
    case D3DFMT_D32:
    case D3DFMT_LIN_D24S8:
    case D3DFMT_LIN_F24S8:
    case D3DFMT_LIN_D16:
    case D3DFMT_LIN_F16:
    case D3DFMT_LIN_D24X8:
    case D3DFMT_LIN_D24FS8:
    case D3DFMT_LIN_D32:
        return TRUE;
    default:
        return FALSE;
    }
}

UINT d3d8_row_pitch(D3DFORMAT fmt, UINT width)
{
    if (d3d8_format_is_compressed(fmt)) {
        UINT block_width = (width + 3) / 4;
        UINT block_bytes = (fmt == D3DFMT_DXT1 || fmt == D3DFMT_CTX1 || fmt == D3DFMT_LIN_CTX1) ? 8 : 16;
        return block_width * block_bytes;
    }
    return (width * d3d8_format_bpp(fmt)) / 8;
}

/* Bits per pixel of the data uploaded to the D3D11 texture
 * (after any software format conversion). */
UINT d3d8_upload_bpp(D3DFORMAT fmt)
{
    switch (fmt) {
    case D3DFMT_YUY2:
    case D3DFMT_UYVY:
    case D3DFMT_P8:
        return 32;   /* converted to BGRA */
    case D3DFMT_AL8:
    case D3DFMT_LIN_AL8:
        return 16;   /* expanded to A8L8-style R8G8 */
    default:
        return d3d8_format_bpp(fmt);
    }
}

BOOL d3d8_format_has_conversion(D3DFORMAT fmt)
{
    switch (fmt) {
    case D3DFMT_YUY2:
    case D3DFMT_UYVY:
    case D3DFMT_P8:
    case D3DFMT_AL8:
    case D3DFMT_LIN_AL8:
    case D3DFMT_R5G5B5A1:
    case D3DFMT_LIN_R5G5B5A1:
    case D3DFMT_R4G4B4A4:
    case D3DFMT_LIN_R4G4B4A4:
    case D3DFMT_L6V5U5:
    case D3DFMT_LIN_L6V5U5:
    case D3DFMT_A16B16G16R16:
    case D3DFMT_LIN_A16B16G16R16:
    case D3DFMT_A16B16G16R16F:
    case D3DFMT_LIN_A16B16G16R16F:
    case D3DFMT_A32B32G32R32:
    case D3DFMT_LIN_A32B32G32R32:
    case D3DFMT_A32B32G32R32F:
    case D3DFMT_LIN_A32B32G32R32F:
    case D3DFMT_A2R10G10B10:
    case D3DFMT_LIN_A2R10G10B10:
    case D3DFMT_X2R10G10B10:
    case D3DFMT_LIN_X2R10G10B10:
        return TRUE;
    default:
        return FALSE;
    }
}

BOOL d3d8_format_is_palettized(D3DFORMAT fmt)
{
    return fmt == D3DFMT_P8;
}

/* Convert width*height texels of a linear (unswizzled) Xbox layout into
 * the layout the D3D11 texture expects. src uses d3d8_format_bpp()/8,
 * dst uses d3d8_upload_bpp()/8 bytes per pixel. `palette` selects the
 * palette P8 indices are expanded through (the texture's stage). */
void d3d8_convert_linear_pixels(D3DFORMAT fmt, UINT width, UINT height,
                                const BYTE *src, BYTE *dst, UINT palette)
{
    UINT x, y;

    switch (fmt) {
    case D3DFMT_AL8:
    case D3DFMT_LIN_AL8: {
        /* 8-bit packed: high nibble alpha, low nibble luma.
         * Expand to 16-bit A8L8 (byte0 = luma, byte1 = alpha). */
        for (y = 0; y < height; y++) {
            const BYTE *s = src + (size_t)y * width;
            BYTE *d = dst + (size_t)y * width * 2;
            for (x = 0; x < width; x++) {
                d[x * 2 + 0] = (BYTE)(((s[x] & 0x0F) << 4) | (s[x] & 0x0F));
                d[x * 2 + 1] = (BYTE)(((s[x] >> 4) << 4) | (s[x] >> 4));
            }
        }
        break;
    }

    case D3DFMT_R5G5B5A1:
    case D3DFMT_LIN_R5G5B5A1: {
        /* R5G5B5A1 → A1R5G5B5 (B5G5R5A1 UNORM) bit reorder. */
        for (y = 0; y < height; y++) {
            const UINT16 *s = (const UINT16 *)(src + (size_t)y * width * 2);
            UINT16 *d = (UINT16 *)(dst + (size_t)y * width * 2);
            for (x = 0; x < width; x++) {
                UINT16 w = s[x];
                UINT16 a = (UINT16)(w & 1);
                UINT16 r = (UINT16)((w >> 11) & 0x1F);
                UINT16 g = (UINT16)((w >> 6) & 0x1F);
                UINT16 b = (UINT16)((w >> 1) & 0x1F);
                d[x] = (UINT16)((a << 15) | (r << 10) | (g << 5) | b);
            }
        }
        break;
    }

    case D3DFMT_R4G4B4A4:
    case D3DFMT_LIN_R4G4B4A4: {
        /* R4G4B4A4 → A4R4G4B4 (B4G4R4A4 UNORM) bit reorder. */
        for (y = 0; y < height; y++) {
            const UINT16 *s = (const UINT16 *)(src + (size_t)y * width * 2);
            UINT16 *d = (UINT16 *)(dst + (size_t)y * width * 2);
            for (x = 0; x < width; x++) {
                UINT16 w = s[x];
                UINT16 a = (UINT16)(w & 0xF);
                UINT16 r = (UINT16)((w >> 12) & 0xF);
                UINT16 g = (UINT16)((w >> 8) & 0xF);
                UINT16 b = (UINT16)((w >> 4) & 0xF);
                d[x] = (UINT16)((a << 12) | (r << 8) | (g << 4) | b);
            }
        }
        break;
    }

    case D3DFMT_L6V5U5:
    case D3DFMT_LIN_L6V5U5: {
        /* L6V5U5 (16-bit signed bump): bit15-11 = U (5-bit signed),
         * bit10-5 = L (6-bit luminance), bit4-0 = V (5-bit signed).
         * Sign-extend V -> R and U -> G of an R8G8_SNORM texel. */
        for (y = 0; y < height; y++) {
            const INT16 *s = (const INT16 *)(src + (size_t)y * width * 2);
            BYTE *d = dst + (size_t)y * width * 2;
            for (x = 0; x < width; x++) {
                UINT16 w = (UINT16)s[x];
                INT v = ((w >> 0) & 0x1F);
                INT u = ((w >> 11) & 0x1F);
                if (v & 0x10) v -= 0x20;   /* sign-extend 5 bits */
                if (u & 0x10) u -= 0x20;
                d[x * 2 + 0] = (BYTE)(INT8)(v << 3);   /* V -> R, 8-bit SNORM */
                d[x * 2 + 1] = (BYTE)(INT8)(u << 3);   /* U -> G, 8-bit SNORM */
            }
        }
        break;
    }

    case D3DFMT_P8: {
        /* Palettized: expand each 8-bit index to BGRA through the
         * texture stage's palette (identity default). */
        const DWORD *pal = d3d8_GetPalette(palette);
        for (y = 0; y < height; y++) {
            const BYTE *s = src + (size_t)y * width;
            BYTE *d = dst + (size_t)y * width * 4;
            for (x = 0; x < width; x++) {
                DWORD c = pal[s[x]];
                d[x * 4 + 0] = (BYTE)((c >> 16) & 0xFF);  /* B */
                d[x * 4 + 1] = (BYTE)((c >>  8) & 0xFF);  /* G */
                d[x * 4 + 2] = (BYTE)((c >>  0) & 0xFF);  /* R */
                d[x * 4 + 3] = (BYTE)((c >> 24) & 0xFF);  /* A */
            }
        }
        break;
    }

    case D3DFMT_YUY2:
    case D3DFMT_UYVY: {
        /* 4:2:2 packed YUV → BGRA (BT.601). YUY2 = [Y0 U Y1 V],
         * UYVY = [U Y0 V Y1]. Each 4-byte group yields 2 BGRA pixels. */
        const int yoff = (fmt == D3DFMT_YUY2) ? 0 : 1;
        for (y = 0; y < height; y++) {
            const BYTE *s = src + (size_t)y * width * 2;
            BYTE *d = dst + (size_t)y * width * 4;
            for (x = 0; x + 1 < width; x += 2) {
                int y0 = s[x * 2 + yoff];
                int u  = s[x * 2 + (1 - yoff)];
                int y1 = s[x * 2 + 2 + yoff];
                int v  = s[x * 2 + 3 - yoff];
                int yy[2] = { y0, y1 };
                for (int k = 0; k < 2; k++) {
                    int c  = yy[k] - 16;
                    int cu = u - 128;
                    int cv = v - 128;
                    int r = (298 * c + 409 * cv + 128) >> 8;
                    int g = (298 * c - 100 * cu - 208 * cv + 128) >> 8;
                    int b = (298 * c + 516 * cu + 128) >> 8;
                    if (r < 0) r = 0; if (r > 255) r = 255;
                    if (g < 0) g = 0; if (g > 255) g = 255;
                    if (b < 0) b = 0; if (b > 255) b = 255;
                    d[(x + k) * 4 + 0] = (BYTE)b;
                    d[(x + k) * 4 + 1] = (BYTE)g;
                    d[(x + k) * 4 + 2] = (BYTE)r;
                    d[(x + k) * 4 + 3] = 0xFF;
                }
            }
            /* Odd widths: duplicate the previous pixel (YUV rows are
             * 2-aligned on Xbox, so this is only hit defensively). */
            if (width & 1)
                memcpy(d + (size_t)(width - 1) * 4,
                       d + (size_t)(width - 2) * 4, 4);
        }
        break;
    }

    case D3DFMT_A16B16G16R16:
    case D3DFMT_LIN_A16B16G16R16:
    case D3DFMT_A16B16G16R16F:
    case D3DFMT_LIN_A16B16G16R16F: {
        /* In-memory BGRA16: [A][B][G][R] each 16-bit little-endian.
         * DXGI R16G16B16A16 expects [R][G][B][A]. Swap channels. */
        for (y = 0; y < height; y++) {
            const UINT16 *s = (const UINT16 *)(src + (size_t)y * width * 8);
            UINT16 *d = (UINT16 *)(dst + (size_t)y * width * 8);
            for (x = 0; x < width; x++) {
                const UINT16 *p = &s[x * 4];       /* A, B, G, R */
                UINT16 *q = &d[x * 4];             /* R, G, B, A */
                q[0] = p[3];  /* R */
                q[1] = p[2];  /* G */
                q[2] = p[1];  /* B */
                q[3] = p[0];  /* A */
            }
        }
        break;
    }

    case D3DFMT_A32B32G32R32:
    case D3DFMT_LIN_A32B32G32R32:
    case D3DFMT_A32B32G32R32F:
    case D3DFMT_LIN_A32B32G32R32F: {
        /* In-memory BGRA32: [A][B][G][R] each 32-bit. DXGI R32G32B32A32
         * expects [R][G][B][A]. Swap channels. */
        for (y = 0; y < height; y++) {
            const UINT32 *s = (const UINT32 *)(src + (size_t)y * width * 16);
            UINT32 *d = (UINT32 *)(dst + (size_t)y * width * 16);
            for (x = 0; x < width; x++) {
                const UINT32 *p = &s[x * 4];       /* A, B, G, R */
                UINT32 *q = &d[x * 4];             /* R, G, B, A */
                q[0] = p[3];  /* R */
                q[1] = p[2];  /* G */
                q[2] = p[1];  /* B */
                q[3] = p[0];  /* A */
            }
        }
        break;
    }

    case D3DFMT_A2R10G10B10:
    case D3DFMT_LIN_A2R10G10B10:
    case D3DFMT_X2R10G10B10:
    case D3DFMT_LIN_X2R10G10B10: {
        /* Xbox A2R10G10B10: bits 30-31=A, 20-29=R, 10-19=G, 0-9=B.
         * DXGI R10G10B10A2 needs R at 0-9, so swap the A and R fields. */
        for (y = 0; y < height; y++) {
            const UINT32 *s = (const UINT32 *)(src + (size_t)y * width * 4);
            UINT32 *d = (UINT32 *)(dst + (size_t)y * width * 4);
            for (x = 0; x < width; x++) {
                UINT32 w = s[x];
                UINT32 a = (w >> 30) & 0x3;
                UINT32 r = (w >> 20) & 0x3FF;
                UINT32 g = (w >> 10) & 0x3FF;
                UINT32 b = (w >>  0) & 0x3FF;
                d[x] = (r) | (g << 10) | (b << 20) | (a << 30);
            }
        }
        break;
    }

    default:
        /* No conversion: copy rows verbatim (width*bpp - already same). */
        for (y = 0; y < height; y++)
            memcpy(dst + (size_t)y * width * (d3d8_format_bpp(fmt) / 8),
                   src + (size_t)y * width * (d3d8_format_bpp(fmt) / 8),
                   (size_t)width * (d3d8_format_bpp(fmt) / 8));
        break;
    }
}

/* ================================================================
 * Vertex Buffer Implementation
 * ================================================================ */

static D3D8VertexBuffer *vb_from_iface(IDirect3DVertexBuffer8 *iface)
{
    return (D3D8VertexBuffer *)iface;
}

static HRESULT __stdcall vb_QueryInterface(IDirect3DVertexBuffer8 *self, const IID *riid, void **ppv)
{
    (void)self; (void)riid; (void)ppv;
    return E_NOINTERFACE;
}

static ULONG __stdcall vb_AddRef(IDirect3DVertexBuffer8 *self)
{
    D3D8VertexBuffer *vb = vb_from_iface(self);
    return (ULONG)InterlockedIncrement(&vb->ref_count);
}

static ULONG __stdcall vb_Release(IDirect3DVertexBuffer8 *self)
{
    D3D8VertexBuffer *vb = vb_from_iface(self);
    LONG ref = InterlockedDecrement(&vb->ref_count);
    if (ref <= 0) {
        if (vb->d3d11_buffer) ID3D11Buffer_Release(vb->d3d11_buffer);
        free(vb->sys_mem);
        free(vb);
    }
    return (ULONG)ref;
}

static HRESULT __stdcall vb_GetDevice(IDirect3DVertexBuffer8 *self, IDirect3DDevice8 **ppDevice)
{
    (void)self;
    *ppDevice = xbox_GetD3DDevice();
    return S_OK;
}

static DWORD __stdcall vb_SetPriority(IDirect3DVertexBuffer8 *self, DWORD Priority)
{
    (void)self; (void)Priority;
    return 0;
}

static DWORD __stdcall vb_GetPriority(IDirect3DVertexBuffer8 *self)
{
    (void)self;
    return 0;
}

static void __stdcall vb_PreLoad(IDirect3DVertexBuffer8 *self)
{
    (void)self;
}

static DWORD __stdcall vb_GetType(IDirect3DVertexBuffer8 *self)
{
    (void)self;
    return D3DRTYPE_VERTEXBUFFER;
}

static HRESULT __stdcall vb_Lock(IDirect3DVertexBuffer8 *self, UINT OffsetToLock, UINT SizeToLock, BYTE **ppbData, DWORD Flags)
{
    D3D8VertexBuffer *vb = vb_from_iface(self);
    (void)SizeToLock; (void)Flags;

    if (!ppbData) return E_INVALIDARG;
    if (vb->locked) return E_FAIL;

    *ppbData = vb->sys_mem + OffsetToLock;
    vb->locked = TRUE;
    return S_OK;
}

static HRESULT __stdcall vb_Unlock(IDirect3DVertexBuffer8 *self)
{
    D3D8VertexBuffer *vb = vb_from_iface(self);
    if (!vb->locked) return E_FAIL;

    vb->locked = FALSE;
    vb->dirty = TRUE;

    /* Upload to GPU */
    ID3D11DeviceContext *ctx = d3d8_GetD3D11Context();
    if (ctx && vb->d3d11_buffer) {
        ID3D11DeviceContext_UpdateSubresource(ctx,
            (ID3D11Resource *)vb->d3d11_buffer,
            0, NULL, vb->sys_mem, vb->size, 0);
        vb->dirty = FALSE;
    }
    return S_OK;
}

static HRESULT __stdcall vb_GetDesc(IDirect3DVertexBuffer8 *self, void *pDesc)
{
    (void)self; (void)pDesc;
    return E_NOTIMPL;
}

static const IDirect3DVertexBuffer8Vtbl g_vb_vtbl = {
    vb_QueryInterface,
    vb_AddRef,
    vb_Release,
    vb_GetDevice,
    vb_SetPriority,
    vb_GetPriority,
    vb_PreLoad,
    vb_GetType,
    vb_Lock,
    vb_Unlock,
    vb_GetDesc,
};

HRESULT d3d8_CreateVertexBufferImpl(UINT Length, DWORD Usage, DWORD FVF, IDirect3DVertexBuffer8 **ppVB)
{
    D3D8VertexBuffer *vb;
    D3D11_BUFFER_DESC bd;
    HRESULT hr;

    if (!ppVB) return E_INVALIDARG;

    vb = (D3D8VertexBuffer *)calloc(1, sizeof(*vb));
    if (!vb) return E_OUTOFMEMORY;

    vb->sys_mem = (BYTE *)calloc(1, Length);
    if (!vb->sys_mem) { free(vb); return E_OUTOFMEMORY; }

    /* Create D3D11 buffer */
    memset(&bd, 0, sizeof(bd));
    bd.ByteWidth = Length;
    bd.Usage = D3D11_USAGE_DEFAULT;
    bd.BindFlags = D3D11_BIND_VERTEX_BUFFER;

    hr = ID3D11Device_CreateBuffer(d3d8_GetD3D11Device(), &bd, NULL, &vb->d3d11_buffer);
    if (FAILED(hr)) {
        free(vb->sys_mem);
        free(vb);
        return hr;
    }

    vb->iface.lpVtbl = &g_vb_vtbl;
    vb->ref_count = 1;
    vb->size = Length;
    vb->fvf = FVF;
    vb->usage = Usage;

    *ppVB = &vb->iface;
    return S_OK;
}

/* ================================================================
 * Index Buffer Implementation
 * ================================================================ */

static D3D8IndexBuffer *ib_from_iface(IDirect3DIndexBuffer8 *iface)
{
    return (D3D8IndexBuffer *)iface;
}

static HRESULT __stdcall ib_QueryInterface(IDirect3DIndexBuffer8 *self, const IID *riid, void **ppv)
{
    (void)self; (void)riid; (void)ppv;
    return E_NOINTERFACE;
}

static ULONG __stdcall ib_AddRef(IDirect3DIndexBuffer8 *self)
{
    return (ULONG)InterlockedIncrement(&ib_from_iface(self)->ref_count);
}

static ULONG __stdcall ib_Release(IDirect3DIndexBuffer8 *self)
{
    D3D8IndexBuffer *ib = ib_from_iface(self);
    LONG ref = InterlockedDecrement(&ib->ref_count);
    if (ref <= 0) {
        if (ib->d3d11_buffer) ID3D11Buffer_Release(ib->d3d11_buffer);
        free(ib->sys_mem);
        free(ib);
    }
    return (ULONG)ref;
}

static HRESULT __stdcall ib_GetDevice(IDirect3DIndexBuffer8 *self, IDirect3DDevice8 **ppDevice)
{
    (void)self;
    *ppDevice = xbox_GetD3DDevice();
    return S_OK;
}

static DWORD __stdcall ib_SetPriority(IDirect3DIndexBuffer8 *self, DWORD Priority) { (void)self; (void)Priority; return 0; }
static DWORD __stdcall ib_GetPriority(IDirect3DIndexBuffer8 *self) { (void)self; return 0; }
static void  __stdcall ib_PreLoad(IDirect3DIndexBuffer8 *self) { (void)self; }
static DWORD __stdcall ib_GetType(IDirect3DIndexBuffer8 *self) { (void)self; return D3DRTYPE_INDEXBUFFER; }

static HRESULT __stdcall ib_Lock(IDirect3DIndexBuffer8 *self, UINT OffsetToLock, UINT SizeToLock, BYTE **ppbData, DWORD Flags)
{
    D3D8IndexBuffer *ib = ib_from_iface(self);
    (void)SizeToLock; (void)Flags;
    if (!ppbData) return E_INVALIDARG;
    if (ib->locked) return E_FAIL;
    *ppbData = ib->sys_mem + OffsetToLock;
    ib->locked = TRUE;
    return S_OK;
}

static HRESULT __stdcall ib_Unlock(IDirect3DIndexBuffer8 *self)
{
    D3D8IndexBuffer *ib = ib_from_iface(self);
    if (!ib->locked) return E_FAIL;
    ib->locked = FALSE;
    ib->dirty = TRUE;

    ID3D11DeviceContext *ctx = d3d8_GetD3D11Context();
    if (ctx && ib->d3d11_buffer) {
        ID3D11DeviceContext_UpdateSubresource(ctx,
            (ID3D11Resource *)ib->d3d11_buffer,
            0, NULL, ib->sys_mem, ib->size, 0);
        ib->dirty = FALSE;
    }
    return S_OK;
}

static HRESULT __stdcall ib_GetDesc(IDirect3DIndexBuffer8 *self, void *pDesc)
{
    (void)self; (void)pDesc;
    return E_NOTIMPL;
}

static const IDirect3DIndexBuffer8Vtbl g_ib_vtbl = {
    ib_QueryInterface, ib_AddRef, ib_Release,
    ib_GetDevice, ib_SetPriority, ib_GetPriority, ib_PreLoad, ib_GetType,
    ib_Lock, ib_Unlock, ib_GetDesc,
};

HRESULT d3d8_CreateIndexBufferImpl(UINT Length, DWORD Usage, D3DFORMAT Format, IDirect3DIndexBuffer8 **ppIB)
{
    D3D8IndexBuffer *ib;
    D3D11_BUFFER_DESC bd;
    HRESULT hr;

    if (!ppIB) return E_INVALIDARG;

    ib = (D3D8IndexBuffer *)calloc(1, sizeof(*ib));
    if (!ib) return E_OUTOFMEMORY;

    ib->sys_mem = (BYTE *)calloc(1, Length);
    if (!ib->sys_mem) { free(ib); return E_OUTOFMEMORY; }

    memset(&bd, 0, sizeof(bd));
    bd.ByteWidth = Length;
    bd.Usage = D3D11_USAGE_DEFAULT;
    bd.BindFlags = D3D11_BIND_INDEX_BUFFER;

    hr = ID3D11Device_CreateBuffer(d3d8_GetD3D11Device(), &bd, NULL, &ib->d3d11_buffer);
    if (FAILED(hr)) { free(ib->sys_mem); free(ib); return hr; }

    ib->iface.lpVtbl = &g_ib_vtbl;
    ib->ref_count = 1;
    ib->size = Length;
    ib->format = Format;
    ib->usage = Usage;

    *ppIB = &ib->iface;
    return S_OK;
}

/* ================================================================
 * Surface Implementation
 *
 * D3D8Surface (declared in d3d8_internal.h) is implemented below in the
 * "Surface Implementation (offscreen render targets, texture levels)"
 * section. Surface LockRect uses a staging readback round-trip and covers
 * palette/P8, MSAA and sub-rect locks. xbox_d3d8_surface_wrap() is provided
 * for wrapping a raw D3D11 texture (e.g. a back buffer) as a surface and is
 * implemented on top of d3d8_surface_create() below.
 * ================================================================ */

/* ================================================================
 * Texture Implementation
 * ================================================================ */

static D3D8Texture *tex_from_iface(IDirect3DTexture8 *iface)
{
    return (D3D8Texture *)iface;
}

/* Helpers for mip level addressing. Mip levels are laid out back to back
 * in tex->sys_mem: level 0 first, then level 1 (half size), etc. */
static UINT tex_level_width(const D3D8Texture *tex, UINT level)
{
    UINT w = tex->width >> level;
    return w < 1 ? 1 : w;
}

static UINT tex_level_height(const D3D8Texture *tex, UINT level)
{
    UINT h = tex->height >> level;
    return h < 1 ? 1 : h;
}

static UINT tex_level_pitch(const D3D8Texture *tex, UINT level)
{
    return d3d8_row_pitch(tex->d3d8_format, tex_level_width(tex, level));
}

static UINT tex_level_rows(const D3D8Texture *tex, UINT level)
{
    UINT h = tex_level_height(tex, level);
    return d3d8_format_is_compressed(tex->d3d8_format) ? (h + 3) / 4 : h;
}

static UINT tex_level_offset(const D3D8Texture *tex, UINT level)
{
    UINT off = 0, l;
    for (l = 0; l < level; l++)
        off += tex_level_pitch(tex, l) * tex_level_rows(tex, l);
    return off;
}

static UINT tex_total_size(const D3D8Texture *tex)
{
    return tex_level_offset(tex, tex->levels);
}

static HRESULT __stdcall tex_QueryInterface(IDirect3DTexture8 *self, const IID *riid, void **ppv)
{
    (void)self; (void)riid; (void)ppv;
    return E_NOINTERFACE;
}

static ULONG __stdcall tex_AddRef(IDirect3DTexture8 *self)
{
    return (ULONG)InterlockedIncrement(&tex_from_iface(self)->ref_count);
}

static ULONG __stdcall tex_Release(IDirect3DTexture8 *self)
{
    D3D8Texture *tex = tex_from_iface(self);
    LONG ref = InterlockedDecrement(&tex->ref_count);
    if (ref <= 0) {
        if (tex->srv) ID3D11ShaderResourceView_Release(tex->srv);
        if (tex->d3d11_texture) ID3D11Texture2D_Release(tex->d3d11_texture);
        free(tex->sys_mem);
        free(tex);
    }
    return (ULONG)ref;
}

static HRESULT __stdcall tex_GetDevice(IDirect3DTexture8 *self, IDirect3DDevice8 **ppDevice)
{
    (void)self;
    *ppDevice = xbox_GetD3DDevice();
    return S_OK;
}

static DWORD __stdcall tex_SetPriority(IDirect3DTexture8 *self, DWORD Priority) { (void)self; (void)Priority; return 0; }
static DWORD __stdcall tex_GetPriority(IDirect3DTexture8 *self) { (void)self; return 0; }
static void  __stdcall tex_PreLoad(IDirect3DTexture8 *self) { (void)self; }
static DWORD __stdcall tex_GetType(IDirect3DTexture8 *self) { (void)self; return D3DRTYPE_TEXTURE; }

static DWORD __stdcall tex_GetLevelCount(IDirect3DTexture8 *self)
{
    return tex_from_iface(self)->levels;
}

static HRESULT __stdcall tex_GetLevelDesc(IDirect3DTexture8 *self, UINT Level, D3DSURFACE_DESC *pDesc)
{
    D3D8Texture *tex = tex_from_iface(self);
    if (!pDesc || Level >= tex->levels) return E_INVALIDARG;
    pDesc->Format = tex->d3d8_format;
    pDesc->Width = tex->width >> Level;
    pDesc->Height = tex->height >> Level;
    if (pDesc->Width < 1) pDesc->Width = 1;
    if (pDesc->Height < 1) pDesc->Height = 1;
    pDesc->Pool = D3DPOOL_DEFAULT;
    return S_OK;
}

/* ================================================================
 * Surface Implementation (offscreen render targets, texture levels)
 * ================================================================ */

static D3D8Surface *sf_from_iface(IDirect3DSurface8 *iface)
{
    return (D3D8Surface *)iface;
}

static HRESULT __stdcall sf_QueryInterface(IDirect3DSurface8 *self, const IID *riid, void **ppv)
{
    (void)self; (void)riid; (void)ppv;
    return E_NOINTERFACE;
}

static ULONG __stdcall sf_AddRef(IDirect3DSurface8 *self)
{
    return (ULONG)InterlockedIncrement(&sf_from_iface(self)->ref_count);
}

static ULONG __stdcall sf_Release(IDirect3DSurface8 *self)
{
    D3D8Surface *sf = sf_from_iface(self);
    LONG ref = InterlockedDecrement(&sf->ref_count);
    if (ref <= 0) {
        if (sf->locked) {
            if (sf->staging && d3d8_GetD3D11Context()) {
                ID3D11DeviceContext_Unmap(d3d8_GetD3D11Context(),
                    (ID3D11Resource *)sf->staging, 0);
            }
            sf->locked = FALSE;
        }
        if (sf->staging) ID3D11Texture2D_Release(sf->staging);
        if (sf->rtv) ID3D11RenderTargetView_Release(sf->rtv);
        if (sf->dsv) ID3D11DepthStencilView_Release(sf->dsv);
        if (sf->d3d11_texture) ID3D11Texture2D_Release(sf->d3d11_texture);
        free(sf);
    }
    return (ULONG)ref;
}

static HRESULT __stdcall sf_GetDevice(IDirect3DSurface8 *self, IDirect3DDevice8 **ppDevice)
{
    (void)self;
    *ppDevice = xbox_GetD3DDevice();
    return S_OK;
}

static HRESULT __stdcall sf_GetDesc(IDirect3DSurface8 *self, D3DSURFACE_DESC *pDesc)
{
    D3D8Surface *sf = sf_from_iface(self);
    if (!pDesc) return E_INVALIDARG;
    pDesc->Format = sf->format;
    pDesc->Type = D3DRTYPE_SURFACE;
    pDesc->Usage = sf->usage;
    pDesc->Pool = sf->pool;
    pDesc->Size = (UINT)(d3d8_row_pitch(sf->format, sf->width) *
                         (d3d8_format_is_compressed(sf->format)
                             ? ((sf->height + 3) / 4) : sf->height));
    pDesc->MultiSampleType = sf->multsample_type;
    pDesc->Width = sf->width;
    pDesc->Height = sf->height;
    return S_OK;
}

/* CPU readback of a surface region. Copies the requested sub-rect of the
 * D3D11 texture into a staging texture, maps it, and returns the mapped
 * pointer. UnlockRect unmaps and writes the region back (unless the lock
 * was read-only). Supports MSAA sources via ResolveSubresource. */
static HRESULT __stdcall sf_LockRect(IDirect3DSurface8 *self, D3DLOCKED_RECT *pLockedRect, const RECT *pRect, DWORD Flags)
{
    D3D8Surface *sf = sf_from_iface(self);
    ID3D11DeviceContext *ctx;
    D3D11_TEXTURE2D_DESC tdesc, sdesc;
    D3D11_MAPPED_SUBRESOURCE mapped;
    HRESULT hr;
    UINT rx, ry, rw, rh;

    if (!pLockedRect) return E_INVALIDARG;
    if (sf->locked) return E_FAIL;

    /* P8 surfaces: the palette indices live in the parent texture's
     * sys_mem, not in the D3D11 texture. Expose them directly (
     * only the full level is addressable this way). */
    if (sf->palettized) {
        if (pRect &&
            (pRect->left != 0 || pRect->top != 0 ||
             (UINT)pRect->right != sf->width ||
             (UINT)pRect->bottom != sf->height)) {
            return E_NOTIMPL;   /* sub-rect not supported for P8 */
        }
        sf->locked = TRUE;
        sf->lock_readonly = (Flags & D3DLOCK_READONLY) != 0;
        pLockedRect->Pitch = (INT)sf->palette_pitch;
        pLockedRect->pBits = (void *)sf->palette_sys;
        return S_OK;
    }

    if (!sf->d3d11_texture) return E_FAIL;

    /* The lock rectangle defaults to the whole surface. */
    if (pRect) {
        rx = pRect->left;
        ry = pRect->top;
        rw = pRect->right - pRect->left;
        rh = pRect->bottom - pRect->top;
    } else {
        rx = 0; ry = 0;
        rw = sf->width; rh = sf->height;
    }
    if (rx + rw > sf->width || ry + rh > sf->height) return E_INVALIDARG;
    if (!rw || !rh) return E_INVALIDARG;

    ctx = d3d8_GetD3D11Context();
    if (!ctx) return E_FAIL;

    ID3D11Texture2D_GetDesc(sf->d3d11_texture, &tdesc);

    if (tdesc.SampleDesc.Count > 1) {
        /* MSAA sub-rects cannot be resolved individually; ignore the
         * sub-rect and expose the whole (resolved) surface. */
        rx = 0; ry = 0;
        rw = sf->width; rh = sf->height;
    }

    memset(&sdesc, 0, sizeof(sdesc));
    sdesc.Width = rw;
    sdesc.Height = rh;
    sdesc.MipLevels = 1;
    sdesc.ArraySize = 1;
    sdesc.Format = tdesc.Format;
    sdesc.SampleDesc.Count = 1;   /* staging is never multisampled */
    sdesc.Usage = D3D11_USAGE_STAGING;
    sdesc.CPUAccessFlags = D3D11_CPU_ACCESS_READ | D3D11_CPU_ACCESS_WRITE;

    hr = ID3D11Device_CreateTexture2D(d3d8_GetD3D11Device(), &sdesc, NULL, &sf->staging);
    if (FAILED(hr)) return hr;

    if (tdesc.SampleDesc.Count > 1) {
        /* MSAA: resolve into the staging copy (full surface). */
        ID3D11DeviceContext_ResolveSubresource(ctx,
            (ID3D11Resource *)sf->staging, 0,
            (ID3D11Resource *)sf->d3d11_texture, sf->subresource, tdesc.Format);
    } else {
        D3D11_BOX box;
        box.left = rx; box.top = ry; box.front = 0;
        box.right = rx + rw; box.bottom = ry + rh; box.back = 1;
        ID3D11DeviceContext_CopySubresourceRegion(ctx,
            (ID3D11Resource *)sf->staging, 0, 0, 0, 0,
            (ID3D11Resource *)sf->d3d11_texture, sf->subresource, &box);
    }

    hr = ID3D11DeviceContext_Map(ctx, (ID3D11Resource *)sf->staging, 0,
             (Flags & D3DLOCK_READONLY) ? D3D11_MAP_READ : D3D11_MAP_READ_WRITE,
             0, &mapped);
    if (FAILED(hr)) {
        ID3D11Texture2D_Release(sf->staging);
        sf->staging = NULL;
        return hr;
    }

    sf->locked = TRUE;
    sf->lock_readonly = (Flags & D3DLOCK_READONLY) != 0;
    sf->lock_x = rx;
    sf->lock_y = ry;
    sf->locked_pitch = (INT)mapped.RowPitch;
    sf->locked_bits = (BYTE *)mapped.pData;

    pLockedRect->Pitch = sf->locked_pitch;
    pLockedRect->pBits = sf->locked_bits;
    return S_OK;
}

static HRESULT __stdcall sf_UnlockRect(IDirect3DSurface8 *self)
{
    D3D8Surface *sf = sf_from_iface(self);
    ID3D11DeviceContext *ctx;

    if (!sf->locked) return E_FAIL;

    /* P8 surface: re-upload the raw indices through the surface's palette. */
    if (sf->palettized) {
        if (!sf->lock_readonly && sf->d3d11_texture && sf->palette_sys) {
            D3D11_TEXTURE2D_DESC td;
            ID3D11Texture2D_GetDesc(sf->d3d11_texture, &td);
            d3d8_upload_mip_level(sf->d3d11_texture, sf->format,
                sf->width, sf->height, sf->subresource,
                sf->palette_sys, sf->palette_pitch, sf->palette_index);
        }
        sf->locked = FALSE;
        return S_OK;
    }

    ctx = d3d8_GetD3D11Context();
    if (!ctx) { sf->locked = FALSE; return E_FAIL; }

    if (sf->staging) {
        ID3D11DeviceContext_Unmap(ctx, (ID3D11Resource *)sf->staging, 0);

        /* Write the (possibly modified) locked region back to the GPU
         * texture unless the lock was read-only. */
        if (!sf->lock_readonly && sf->d3d11_texture) {
            D3D11_TEXTURE2D_DESC tdesc;
            ID3D11Texture2D_GetDesc(sf->d3d11_texture, &tdesc);
            if (tdesc.SampleDesc.Count > 1) {
                /* MSAA: resolve the staging copy back into the RT. */
                DXGI_FORMAT fmt = tdesc.Format;
                ID3D11DeviceContext_ResolveSubresource(ctx,
                    (ID3D11Resource *)sf->d3d11_texture, sf->subresource,
                    (ID3D11Resource *)sf->staging, 0, fmt);
            } else {
                /* Copy the whole staging texture back at the lock origin
                 * (a NULL src box means "entire resource"). */
                ID3D11DeviceContext_CopySubresourceRegion(ctx,
                    (ID3D11Resource *)sf->d3d11_texture, sf->subresource,
                    sf->lock_x, sf->lock_y, 0,
                    (ID3D11Resource *)sf->staging, 0, NULL);
            }
        }
        ID3D11Texture2D_Release(sf->staging);
        sf->staging = NULL;
    }

    sf->locked = FALSE;
    sf->locked_bits = NULL;
    return S_OK;
}

static const IDirect3DSurface8Vtbl g_sf_vtbl = {
    sf_QueryInterface, sf_AddRef, sf_Release,
    sf_GetDevice, sf_GetDesc, sf_LockRect, sf_UnlockRect,
};

/* Create a surface wrapping an existing D3D11 texture (a texture mip level,
 * cube face, or a dedicated offscreen render target). Adds a render target
 * view or depth stencil view when the caller requests it. */
IDirect3DSurface8 *d3d8_surface_create(ID3D11Texture2D *texture,
                                       UINT mip_slice,
                                       UINT array_slice,
                                       UINT width, UINT height,
                                       D3DFORMAT fmt, D3DPOOL pool,
                                       DWORD usage,
                                       D3DMULTISAMPLE_TYPE multsample_type,
                                       const BYTE *raw_level_data,
                                       UINT palette_index)
{
    D3D8Surface *sf;
    DXGI_FORMAT dxgi;
    D3D11_TEXTURE2D_DESC td;
    BOOL is_depth;
    BOOL is_array;

    if (!texture) return NULL;

    sf = (D3D8Surface *)calloc(1, sizeof(*sf));
    if (!sf) return NULL;

    sf->iface.lpVtbl = &g_sf_vtbl;
    sf->ref_count = 1;
    sf->d3d11_texture = texture;
    ID3D11Texture2D_AddRef(texture);
    sf->width = width;
    sf->height = height;
    sf->format = fmt;
    sf->pool = pool;
    sf->usage = usage;

    ID3D11Texture2D_GetDesc(texture, &td);
    is_array = (td.ArraySize > 1);
    sf->subresource = array_slice * td.MipLevels + mip_slice;
    sf->sample_count = td.SampleDesc.Count ? td.SampleDesc.Count : 1;
    sf->multsample_type = multsample_type;

    dxgi = d3d8_to_dxgi_format(fmt);
    is_depth = d3d8_format_is_depth(fmt);

    if (is_depth) {
        /* F16 has no D3D11 depth equivalent; skip the DSV. */
        if (dxgi == DXGI_FORMAT_D16_UNORM ||
            dxgi == DXGI_FORMAT_D24_UNORM_S8_UINT) {
            D3D11_DEPTH_STENCIL_VIEW_DESC dsvd;
            memset(&dsvd, 0, sizeof(dsvd));
            dsvd.Format = dxgi;
            dsvd.ViewDimension = is_array
                ? D3D11_DSV_DIMENSION_TEXTURE2DARRAY
                : D3D11_DSV_DIMENSION_TEXTURE2D;
            if (is_array) {
                dsvd.Texture2DArray.MipSlice = mip_slice;
                dsvd.Texture2DArray.FirstArraySlice = array_slice;
                dsvd.Texture2DArray.ArraySize = 1;
            } else {
                dsvd.Texture2D.MipSlice = mip_slice;
            }
            ID3D11Device_CreateDepthStencilView(d3d8_GetD3D11Device(),
                (ID3D11Resource *)texture, &dsvd, &sf->dsv);
        }
    } else if (usage & D3DUSAGE_RENDERTARGET) {
        D3D11_RENDER_TARGET_VIEW_DESC rtvd;
        memset(&rtvd, 0, sizeof(rtvd));
        rtvd.Format = dxgi;
        rtvd.ViewDimension = is_array
            ? D3D11_RTV_DIMENSION_TEXTURE2DARRAY
            : D3D11_RTV_DIMENSION_TEXTURE2D;
        if (is_array) {
            rtvd.Texture2DArray.MipSlice = mip_slice;
            rtvd.Texture2DArray.FirstArraySlice = array_slice;
            rtvd.Texture2DArray.ArraySize = 1;
        } else {
            rtvd.Texture2D.MipSlice = mip_slice;
        }
        ID3D11Device_CreateRenderTargetView(d3d8_GetD3D11Device(),
            (ID3D11Resource *)texture, &rtvd, &sf->rtv);
    }

    /* P8 surfaces expose the raw palette indices through LockRect. The
     * index data is not in the D3D11 texture (it was palette-expanded to
     * BGRA at upload), so attach a pointer to the parent's raw sys_mem
     * region. Only the texture/cube/volume creators pass raw_level_data. */
    if (d3d8_format_is_palettized(fmt) && raw_level_data) {
        sf->palettized = TRUE;
        sf->palette_sys = raw_level_data;
        sf->palette_pitch = d3d8_row_pitch(fmt, width);
        sf->palette_index = palette_index;
    }

    return &sf->iface;
}

/* Wrap a raw D3D11 texture (e.g. a back buffer) as a surface. Borrowed from
 * upstream's "ponytail" fix so a surface can alias a GPU texture that is not
 * owned by a D3D8Texture. The surface adds a reference to the D3D11 texture. */
IDirect3DSurface8 *xbox_d3d8_surface_wrap(ID3D11Texture2D *tex, UINT w, UINT h,
                                          D3DFORMAT fmt)
{
    return d3d8_surface_create(tex, 0, 0, w, h, fmt,
                               D3DPOOL_DEFAULT, 0,
                               D3DMULTISAMPLE_NONE, NULL, 0);
}

static HRESULT __stdcall tex_GetSurfaceLevel(IDirect3DTexture8 *self, UINT Level, IDirect3DSurface8 **ppSurface)
{
    D3D8Texture *tex = tex_from_iface(self);
    if (!ppSurface || Level >= tex->levels) return E_INVALIDARG;

    *ppSurface = d3d8_surface_create(tex->d3d11_texture, Level, 0,
                                     tex_level_width(tex, Level),
                                     tex_level_height(tex, Level),
                                     tex->d3d8_format,
                                     D3DPOOL_DEFAULT, tex->usage,
                                     D3DMULTISAMPLE_NONE,
                                     d3d8_format_is_palettized(tex->d3d8_format)
                                         ? tex->sys_mem + tex_level_offset(tex, Level)
                                         : NULL,
                                     tex->palette);
    return *ppSurface ? S_OK : E_OUTOFMEMORY;
}

static HRESULT __stdcall tex_LockRect(IDirect3DTexture8 *self, UINT Level, D3DLOCKED_RECT *pLockedRect, const RECT *pRect, DWORD Flags)
{
    D3D8Texture *tex = tex_from_iface(self);
    (void)pRect; (void)Flags;

    if (!pLockedRect || Level >= tex->levels) return E_INVALIDARG;
    if (tex->locked) return E_FAIL;

    pLockedRect->Pitch = (INT)tex_level_pitch(tex, Level);
    pLockedRect->pBits = tex->sys_mem + tex_level_offset(tex, Level);
    tex->locked = TRUE;
    return S_OK;
}

/* Upload one 2D mip level (or a single cube face level) into the given
 * D3D11 texture subresource: unswizzle (swizzled formats), convert to the
 * D3D11 layout (YUV/P8/AL8/reordered 16-bit), then UpdateSubresource.
 * Shared by 2D textures, cube faces and volume slices. */
static void d3d8_upload_mip_level(ID3D11Texture2D *d3d11_texture, D3DFORMAT fmt,
                                  UINT w, UINT h, UINT subresource,
                                  const BYTE *src_data, UINT src_row_pitch,
                                  UINT palette)
{
    ID3D11DeviceContext *ctx = d3d8_GetD3D11Context();
    UINT bpp = d3d8_format_bpp(fmt) / 8;
    UINT rows = d3d8_format_is_compressed(fmt) ? (h + 3) / 4 : h;
    BYTE *linear = NULL;
    BYTE *converted = NULL;
    const BYTE *upload_data = src_data;
    UINT upload_pitch = src_row_pitch;

    if (!ctx || !d3d11_texture) return;

    /* Step 1: unswizzle swizzled formats into linear storage. */
    if (!d3d8_format_is_compressed(fmt) && d3d8_format_is_swizzled(fmt)) {
        linear = (BYTE *)malloc((size_t)w * h * bpp);
        if (linear) {
            xbox_unswizzle_rect(linear, src_data, w, h, bpp);
            upload_data = linear;
            upload_pitch = w * bpp;
        }
    }

    /* Step 2: convert formats whose D3D11 layout differs. */
    if (d3d8_format_has_conversion(fmt)) {
        UINT ubpp = d3d8_upload_bpp(fmt) / 8;
        converted = (BYTE *)malloc((size_t)w * h * ubpp);
        if (converted) {
            d3d8_convert_linear_pixels(fmt, w, h, upload_data, converted, palette);
            if (linear) { free(linear); linear = NULL; }
            upload_data = converted;
            upload_pitch = w * ubpp;
            rows = h;
        }
    }

    ID3D11DeviceContext_UpdateSubresource(ctx, (ID3D11Resource *)d3d11_texture,
        subresource, NULL, upload_data, upload_pitch, upload_pitch * rows);

    if (linear) free(linear);
    if (converted) free(converted);
}

static HRESULT __stdcall tex_UnlockRect(IDirect3DTexture8 *self, UINT Level)
{
    D3D8Texture *tex = tex_from_iface(self);
    if (Level >= tex->levels || !tex->locked) return E_FAIL;

    tex->locked = FALSE;
    tex->dirty = FALSE;

    d3d8_upload_mip_level(tex->d3d11_texture, tex->d3d8_format,
                          tex_level_width(tex, Level),
                          tex_level_height(tex, Level), Level,
                          tex->sys_mem + tex_level_offset(tex, Level),
                          tex_level_pitch(tex, Level), tex->palette);
    return S_OK;
}

static const IDirect3DTexture8Vtbl g_tex_vtbl = {
    tex_QueryInterface, tex_AddRef, tex_Release,
    tex_GetDevice, tex_SetPriority, tex_GetPriority, tex_PreLoad, tex_GetType,
    tex_GetLevelCount,
    tex_GetLevelDesc, tex_GetSurfaceLevel, tex_LockRect, tex_UnlockRect,
};

HRESULT d3d8_CreateTextureImpl(UINT Width, UINT Height, UINT Levels, DWORD Usage, D3DFORMAT Format, IDirect3DTexture8 **ppTex)
{
    D3D8Texture *tex;
    D3D11_TEXTURE2D_DESC td;
    D3D11_SHADER_RESOURCE_VIEW_DESC srvd;
    HRESULT hr;
    UINT max_dim;
    BOOL want_srv;

    if (!ppTex || !Width || !Height) return E_INVALIDARG;

    tex = (D3D8Texture *)calloc(1, sizeof(*tex));
    if (!tex) return E_OUTOFMEMORY;

    tex->d3d8_format = Format;
    tex->dxgi_format = d3d8_to_dxgi_format(Format);
    tex->width = Width;
    tex->height = Height;
    tex->usage = Usage;

    /* D3D8: Levels==0 means "generate the full chain down to 1x1". */
    max_dim = Width > Height ? Width : Height;
    tex->levels = Levels ? Levels : 0;
    if (!tex->levels) {
        tex->levels = 1;
        while (max_dim > 1) { max_dim >>= 1; tex->levels++; }
        if (tex->levels > 12) tex->levels = 12;
    }
    tex->pitch = d3d8_row_pitch(Format, Width);

    /* Allocate system memory for the full mip chain */
    tex->sys_mem = (BYTE *)calloc(1, tex_total_size(tex));
    if (!tex->sys_mem) { free(tex); return E_OUTOFMEMORY; }

    /* Create D3D11 texture */
    memset(&td, 0, sizeof(td));
    td.Width = Width;
    td.Height = Height;
    td.MipLevels = tex->levels;
    td.ArraySize = 1;
    td.Format = tex->dxgi_format;
    td.SampleDesc.Count = 1;
    td.Usage = D3D11_USAGE_DEFAULT;
    td.BindFlags = D3D11_BIND_SHADER_RESOURCE;
    if (Usage & D3DUSAGE_RENDERTARGET)     td.BindFlags |= D3D11_BIND_RENDER_TARGET;
    if (Usage & D3DUSAGE_DEPTHSTENCIL)     td.BindFlags |= D3D11_BIND_DEPTH_STENCIL;

    hr = ID3D11Device_CreateTexture2D(d3d8_GetD3D11Device(), &td, NULL, &tex->d3d11_texture);
    if (FAILED(hr)) {
        fprintf(stderr, "D3D8: CreateTexture2D failed: 0x%08lX (fmt=%d %ux%u)\n", hr, Format, Width, Height);
        free(tex->sys_mem);
        free(tex);
        return hr;
    }

    /* Depth textures are not sampled directly in D3D11. */
    want_srv = !d3d8_format_is_depth(Format);

    /* Create shader resource view */
    if (want_srv) {
        memset(&srvd, 0, sizeof(srvd));
        srvd.Format = tex->dxgi_format;
        srvd.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
        srvd.Texture2D.MipLevels = tex->levels;

        hr = ID3D11Device_CreateShaderResourceView(d3d8_GetD3D11Device(),
            (ID3D11Resource *)tex->d3d11_texture, &srvd, &tex->srv);
        if (FAILED(hr)) {
            ID3D11Texture2D_Release(tex->d3d11_texture);
            free(tex->sys_mem);
            free(tex);
            return hr;
        }
    }

    tex->iface.lpVtbl = &g_tex_vtbl;
    tex->ref_count = 1;

    *ppTex = &tex->iface;
    return S_OK;
}

/* ================================================================
 * Base-texture SRV access
 * ================================================================
 *
 * D3D8CubeTexture and D3D8VolumeTexture mirror the D3D8Texture field
 * layout up to and including the `srv` member (a layout overlay), so
 * dev_SetTexture can fetch the SRV of any bound base texture through a
 * single offset. Guarded by a one-time runtime check. */

static void d3d8_check_overlay(void)
{
    static BOOL checked = FALSE;
    if (checked) return;
    checked = TRUE;
    if (offsetof(D3D8CubeTexture, srv)   != offsetof(D3D8Texture, srv)   ||
        offsetof(D3D8VolumeTexture, srv) != offsetof(D3D8Texture, srv)   ||
        offsetof(D3D8CubeTexture, width) != offsetof(D3D8Texture, width) ||
        offsetof(D3D8VolumeTexture, levels) != offsetof(D3D8Texture, levels))
        fprintf(stderr, "D3D8: internal base-texture layout mismatch\n");
}

ID3D11ShaderResourceView *d3d8_base_srv(IDirect3DBaseTexture8 *texture)
{
    if (!texture) return NULL;
    d3d8_check_overlay();
    return *(ID3D11ShaderResourceView **)((BYTE *)texture +
        offsetof(D3D8Texture, srv));
}

/* Look up the palette index a base texture bakes. All wrapper types keep
 * `palette` at the same offset (behind srv), mirroring the SRV overlay. */
static UINT base_texture_palette(IDirect3DBaseTexture8 *texture)
{
    if (!texture) return 0;
    return *(UINT *)((BYTE *)texture + offsetof(D3D8Texture, palette));
}

/* Volume textures place depth before the format, unlike 2D/cube textures. */
D3DFORMAT d3d8_base_format(IDirect3DBaseTexture8 *texture)
{
    if (!texture) return D3DFMT_UNKNOWN;
    if (IDirect3DBaseTexture8_GetType(texture) == D3DRTYPE_VOLUMETEXTURE)
        return ((D3D8VolumeTexture *)texture)->d3d8_format;
    return *(D3DFORMAT *)((BYTE *)texture + offsetof(D3D8Texture, d3d8_format));
}

/* Set the palette index baked into a base texture. */
void d3d8_base_set_palette(IDirect3DBaseTexture8 *texture, UINT palette)
{
    if (!texture || palette >= 4) return;
    *(UINT *)((BYTE *)texture + offsetof(D3D8Texture, palette)) = palette;
}

/* Re-upload every level of a P8 (palettized) texture through the current
 * stage palette. Used to re-bake after dev_SetPalette. Non-P8 textures
 * are untouched. */
void d3d8_refresh_palette(IDirect3DBaseTexture8 *texture)
{
    D3DRESOURCETYPE type;
    UINT palette;

    if (!texture) return;
    type = IDirect3DBaseTexture8_GetType(texture);

    if (type == D3DRTYPE_CUBETEXTURE) {
        D3D8CubeTexture *cube = (D3D8CubeTexture *)texture;
        if (!d3d8_format_is_palettized(cube->d3d8_format)) return;
        palette = cube->palette;
        for (UINT face = 0; face < 6; face++) {
            for (UINT lvl = 0; lvl < cube->levels; lvl++) {
                UINT w = cube_level_width(cube, lvl);
                d3d8_upload_mip_level(cube->d3d11_texture, cube->d3d8_format,
                    w, w, face * cube->levels + lvl,
                    cube_level_ptr(cube, face, lvl),
                    d3d8_row_pitch(cube->d3d8_format, w), palette);
            }
        }
        return;
    }

    if (type == D3DRTYPE_VOLUMETEXTURE) {
        D3D8VolumeTexture *vol = (D3D8VolumeTexture *)texture;
        ID3D11DeviceContext *ctx;
        if (!d3d8_format_is_palettized(vol->d3d8_format)) return;
        ctx = d3d8_GetD3D11Context();
        if (!ctx) return;
        palette = vol->palette;
        for (UINT lvl = 0; lvl < vol->levels; lvl++) {
            UINT w = vol_level_width(vol, lvl);
            UINT h = vol_level_height(vol, lvl);
            UINT d = vol_level_depth(vol, lvl);
            UINT bpp = d3d8_format_bpp(vol->d3d8_format) / 8;
            UINT rows = vol_level_rows(vol, lvl);
            BYTE *src = vol->sys_mem + vol_level_offset(vol, lvl);
            BYTE *linear = NULL, *converted = NULL;
            const BYTE *upload_data = src;
            UINT up = vol_level_pitch(vol, lvl);
            UINT ud = up * rows;

            if (d3d8_format_is_swizzled(vol->d3d8_format)) {
                linear = (BYTE *)malloc((size_t)w * h * d * bpp);
                if (linear) {
                    xbox_unswizzle_box(linear, src, w, h, d, bpp);
                    upload_data = linear;
                    up = w * bpp;
                    ud = up * h;
                }
            }
            {
                UINT ubpp = d3d8_upload_bpp(vol->d3d8_format) / 8;
                UINT z;
                converted = (BYTE *)malloc((size_t)w * h * d * ubpp);
                if (converted) {
                    UINT slice_bytes = (size_t)w * h * bpp;
                    UINT usize = (size_t)w * h * ubpp;
                    for (z = 0; z < d; z++) {
                        d3d8_convert_linear_pixels(vol->d3d8_format, w, h,
                            upload_data + (size_t)z * slice_bytes,
                            converted + (size_t)z * usize, palette);
                    }
                    if (linear) { free(linear); linear = NULL; }
                    upload_data = converted;
                    up = w * ubpp;
                    ud = up * h;
                }
            }
            ID3D11DeviceContext_UpdateSubresource(ctx,
                (ID3D11Resource *)vol->d3d11_texture, lvl, NULL,
                upload_data, up, ud);
            if (linear) free(linear);
            if (converted) free(converted);
        }
        return;
    }

    /* 2D texture */
    {
        D3D8Texture *tex = (D3D8Texture *)texture;
        if (!d3d8_format_is_palettized(tex->d3d8_format)) return;
        palette = tex->palette;
        for (UINT lvl = 0; lvl < tex->levels; lvl++) {
            d3d8_upload_mip_level(tex->d3d11_texture, tex->d3d8_format,
                tex_level_width(tex, lvl), tex_level_height(tex, lvl), lvl,
                tex->sys_mem + tex_level_offset(tex, lvl),
                tex_level_pitch(tex, lvl), palette);
        }
    }
}

/* ================================================================
 * Cube texture implementation
 * ================================================================
 *
 * sys_mem layout: six faces, back to back. Each face holds its mip
 * chain (the same layout a D3D8Texture of edge->1x1 would use). */

static D3D8CubeTexture *cube_from_iface(IDirect3DCubeTexture8 *iface)
{
    return (D3D8CubeTexture *)iface;
}

static UINT cube_level_width(const D3D8CubeTexture *cube, UINT level)
{
    UINT w = cube->width >> level;
    return w < 1 ? 1 : w;
}

/* Total bytes of one face's mip chain (all six faces share it). */
static UINT cube_face_size(const D3D8CubeTexture *cube)
{
    return tex_total_size((const D3D8Texture *)cube);
}

/* Level data pointer within a given face. */
static BYTE *cube_level_ptr(const D3D8CubeTexture *cube, UINT face, UINT level)
{
    return cube->sys_mem + (size_t)face * cube_face_size(cube) +
           tex_level_offset((const D3D8Texture *)cube, level);
}

static HRESULT __stdcall cube_QueryInterface(IDirect3DCubeTexture8 *self, const IID *riid, void **ppv)
{
    (void)self; (void)riid; (void)ppv;
    return E_NOINTERFACE;
}

static ULONG __stdcall cube_AddRef(IDirect3DCubeTexture8 *self)
{
    return (ULONG)InterlockedIncrement(&cube_from_iface(self)->ref_count);
}

static ULONG __stdcall cube_Release(IDirect3DCubeTexture8 *self)
{
    D3D8CubeTexture *cube = cube_from_iface(self);
    LONG ref = InterlockedDecrement(&cube->ref_count);
    if (ref <= 0) {
        if (cube->srv) ID3D11ShaderResourceView_Release(cube->srv);
        if (cube->d3d11_texture) ID3D11Texture2D_Release(cube->d3d11_texture);
        free(cube->sys_mem);
        free(cube);
    }
    return (ULONG)ref;
}

static HRESULT __stdcall cube_GetDevice(IDirect3DCubeTexture8 *self, IDirect3DDevice8 **ppDevice)
{
    (void)self;
    *ppDevice = xbox_GetD3DDevice();
    return S_OK;
}

static DWORD __stdcall cube_SetPriority(IDirect3DCubeTexture8 *self, DWORD Priority) { (void)self; (void)Priority; return 0; }
static DWORD __stdcall cube_GetPriority(IDirect3DCubeTexture8 *self) { (void)self; return 0; }
static void  __stdcall cube_PreLoad(IDirect3DCubeTexture8 *self) { (void)self; }
static DWORD __stdcall cube_GetType(IDirect3DCubeTexture8 *self) { (void)self; return D3DRTYPE_CUBETEXTURE; }

static DWORD __stdcall cube_GetLevelCount(IDirect3DCubeTexture8 *self)
{
    return cube_from_iface(self)->levels;
}

static HRESULT __stdcall cube_GetLevelDesc(IDirect3DCubeTexture8 *self, UINT Level, D3DSURFACE_DESC *pDesc)
{
    D3D8CubeTexture *cube = cube_from_iface(self);
    if (!pDesc || Level >= cube->levels) return E_INVALIDARG;
    pDesc->Format = cube->d3d8_format;
    pDesc->Width = cube_level_width(cube, Level);
    pDesc->Height = cube_level_width(cube, Level);
    pDesc->Type = D3DRTYPE_CUBETEXTURE;
    pDesc->Usage = cube->usage;
    pDesc->Pool = D3DPOOL_DEFAULT;
    pDesc->MultiSampleType = D3DMULTISAMPLE_NONE;
    pDesc->Size = (UINT)(d3d8_row_pitch(cube->d3d8_format, pDesc->Width) *
                         (d3d8_format_is_compressed(cube->d3d8_format)
                             ? ((pDesc->Height + 3) / 4) : pDesc->Height));
    return S_OK;
}

static HRESULT __stdcall cube_GetCubeMapSurface(IDirect3DCubeTexture8 *self, D3DCUBEMAP_FACES FaceType, UINT Level, IDirect3DSurface8 **ppSurface)
{
    D3D8CubeTexture *cube = cube_from_iface(self);
    UINT face = (UINT)FaceType;
    UINT w, h;
    if (!ppSurface || face >= 6 || Level >= cube->levels) return E_INVALIDARG;

    w = h = cube_level_width(cube, Level);
    *ppSurface = d3d8_surface_create(cube->d3d11_texture, Level, face, w, h,
                                     cube->d3d8_format, D3DPOOL_DEFAULT,
                                     cube->usage,                                      D3DMULTISAMPLE_NONE,
                                     d3d8_format_is_palettized(cube->d3d8_format)
                                         ? cube_level_ptr(cube, face, Level)
                                         : NULL,
                                     cube->palette);
    return *ppSurface ? S_OK : E_OUTOFMEMORY;
}

static HRESULT __stdcall cube_LockRect(IDirect3DCubeTexture8 *self, D3DCUBEMAP_FACES FaceType, UINT Level, D3DLOCKED_RECT *pLockedRect, const RECT *pRect, DWORD Flags)
{
    D3D8CubeTexture *cube = cube_from_iface(self);
    UINT face = (UINT)FaceType;
    UINT w, pitch;
    (void)pRect; (void)Flags;

    if (!pLockedRect || face >= 6 || Level >= cube->levels) return E_INVALIDARG;
    if (cube->locked) return E_FAIL;

    w = cube_level_width(cube, Level);
    pitch = d3d8_row_pitch(cube->d3d8_format, w);
    pLockedRect->Pitch = (INT)pitch;
    pLockedRect->pBits = cube_level_ptr(cube, face, Level);
    cube->locked = TRUE;
    cube->dirty = TRUE;
    return S_OK;
}

static HRESULT __stdcall cube_UnlockRect(IDirect3DCubeTexture8 *self, D3DCUBEMAP_FACES FaceType, UINT Level)
{
    D3D8CubeTexture *cube = cube_from_iface(self);
    UINT face = (UINT)FaceType;
    UINT w;
    if (face >= 6 || Level >= cube->levels || !cube->locked) return E_FAIL;

    w = cube_level_width(cube, Level);
    d3d8_upload_mip_level(cube->d3d11_texture, cube->d3d8_format, w, w,
        face * cube->levels + Level, cube_level_ptr(cube, face, Level),
        d3d8_row_pitch(cube->d3d8_format, w), cube->palette);

    cube->locked = FALSE;
    cube->dirty = FALSE;
    return S_OK;
}

static const IDirect3DCubeTexture8Vtbl g_cube_vtbl = {
    cube_QueryInterface, cube_AddRef, cube_Release,
    cube_GetDevice, cube_SetPriority, cube_GetPriority, cube_PreLoad, cube_GetType,
    cube_GetLevelCount,
    cube_GetLevelDesc, cube_GetCubeMapSurface, cube_LockRect, cube_UnlockRect,
};

HRESULT d3d8_CreateCubeTextureImpl(UINT EdgeLength, UINT Levels, DWORD Usage, D3DFORMAT Format, IDirect3DCubeTexture8 **ppTex)
{
    D3D8CubeTexture *cube;
    D3D11_TEXTURE2D_DESC td;
    D3D11_SHADER_RESOURCE_VIEW_DESC srvd;
    HRESULT hr;
    UINT max_dim;
    UINT face_size;

    if (!ppTex || !EdgeLength) return E_INVALIDARG;

    cube = (D3D8CubeTexture *)calloc(1, sizeof(*cube));
    if (!cube) return E_OUTOFMEMORY;

    cube->d3d8_format = Format;
    cube->dxgi_format = d3d8_to_dxgi_format(Format);
    cube->width = EdgeLength;
    cube->height = EdgeLength;
    cube->usage = Usage;

    max_dim = EdgeLength;
    cube->levels = Levels ? Levels : 0;
    if (!cube->levels) {
        cube->levels = 1;
        while (max_dim > 1) { max_dim >>= 1; cube->levels++; }
        if (cube->levels > 12) cube->levels = 12;
    }
    cube->pitch = d3d8_row_pitch(Format, EdgeLength);

    face_size = tex_total_size((const D3D8Texture *)cube);
    cube->sys_mem = (BYTE *)calloc(1, (size_t)6 * face_size);
    if (!cube->sys_mem) { free(cube); return E_OUTOFMEMORY; }

    memset(&td, 0, sizeof(td));
    td.Width = EdgeLength;
    td.Height = EdgeLength;
    td.MipLevels = cube->levels;
    td.ArraySize = 6;
    td.Format = cube->dxgi_format;
    td.SampleDesc.Count = 1;
    td.Usage = D3D11_USAGE_DEFAULT;
    td.BindFlags = D3D11_BIND_SHADER_RESOURCE;
    if (Usage & D3DUSAGE_RENDERTARGET) td.BindFlags |= D3D11_BIND_RENDER_TARGET;
    td.MiscFlags = D3D11_RESOURCE_MISC_TEXTURECUBE;

    hr = ID3D11Device_CreateTexture2D(d3d8_GetD3D11Device(), &td, NULL, &cube->d3d11_texture);
    if (FAILED(hr)) {
        fprintf(stderr, "D3D8: CreateCubeTexture2D failed: 0x%08lX (fmt=%d edge=%u)\n", hr, Format, EdgeLength);
        free(cube->sys_mem);
        free(cube);
        return hr;
    }

    if (!d3d8_format_is_depth(Format) && cube->dxgi_format != DXGI_FORMAT_UNKNOWN) {
        memset(&srvd, 0, sizeof(srvd));
        srvd.Format = cube->dxgi_format;
        srvd.ViewDimension = D3D11_SRV_DIMENSION_TEXTURECUBE;
        srvd.TextureCube.MipLevels = cube->levels;
        hr = ID3D11Device_CreateShaderResourceView(d3d8_GetD3D11Device(),
            (ID3D11Resource *)cube->d3d11_texture, &srvd, &cube->srv);
        if (FAILED(hr)) {
            ID3D11Texture2D_Release(cube->d3d11_texture);
            free(cube->sys_mem);
            free(cube);
            return hr;
        }
    }

    d3d8_check_overlay();
    cube->iface.lpVtbl = &g_cube_vtbl;
    cube->ref_count = 1;

    *ppTex = &cube->iface;
    return S_OK;
}

/* ================================================================
 * Volume texture implementation
 * ================================================================
 *
 * sys_mem layout: all mip levels, back to back. Each level is a z-slice
 * major slab: row-major within a slice, slices stacked. Level data is
 * stored in the Xbox swizzled layout (or linear for compressed/LIN_*). */

static UINT vol_level_width(const D3D8VolumeTexture *vol, UINT level)
{
    UINT w = vol->width >> level;
    return w < 1 ? 1 : w;
}

static UINT vol_level_height(const D3D8VolumeTexture *vol, UINT level)
{
    UINT h = vol->height >> level;
    return h < 1 ? 1 : h;
}

static UINT vol_level_depth(const D3D8VolumeTexture *vol, UINT level)
{
    UINT d = vol->depth >> level;
    return d < 1 ? 1 : d;
}

static UINT vol_level_pitch(const D3D8VolumeTexture *vol, UINT level)
{
    return d3d8_row_pitch(vol->d3d8_format, vol_level_width(vol, level));
}

static UINT vol_level_rows(const D3D8VolumeTexture *vol, UINT level)
{
    UINT h = vol_level_height(vol, level);
    return d3d8_format_is_compressed(vol->d3d8_format) ? (h + 3) / 4 : h;
}

static UINT vol_level_size(const D3D8VolumeTexture *vol, UINT level)
{
    return vol_level_pitch(vol, level) * vol_level_rows(vol, level) *
           vol_level_depth(vol, level);
}

static UINT vol_level_offset(const D3D8VolumeTexture *vol, UINT level)
{
    UINT off = 0, l;
    for (l = 0; l < level; l++) off += vol_level_size(vol, l);
    return off;
}

static UINT vol_total_size(const D3D8VolumeTexture *vol)
{
    return vol_level_offset(vol, vol->levels);
}

static void vol_fill_desc(const D3D8VolumeTexture *vol, UINT level, D3DVOLUME_DESC *pDesc)
{
    pDesc->Format = vol->d3d8_format;
    pDesc->Type = D3DRTYPE_VOLUMETEXTURE;
    pDesc->Usage = vol->usage;
    pDesc->Pool = D3DPOOL_DEFAULT;
    pDesc->Width = vol_level_width(vol, level);
    pDesc->Height = vol_level_height(vol, level);
    pDesc->Depth = vol_level_depth(vol, level);
    pDesc->Size = vol_level_size(vol, level);
}

static HRESULT __stdcall voltex_QueryInterface(IDirect3DVolumeTexture8 *self, const IID *riid, void **ppv)
{
    (void)self; (void)riid; (void)ppv;
    return E_NOINTERFACE;
}

static ULONG __stdcall voltex_AddRef(IDirect3DVolumeTexture8 *self)
{
    return (ULONG)InterlockedIncrement(&((D3D8VolumeTexture *)self)->ref_count);
}

static ULONG __stdcall voltex_Release(IDirect3DVolumeTexture8 *self)
{
    D3D8VolumeTexture *vol = (D3D8VolumeTexture *)self;
    LONG ref = InterlockedDecrement(&vol->ref_count);
    if (ref <= 0) {
        if (vol->srv) ID3D11ShaderResourceView_Release(vol->srv);
        if (vol->d3d11_texture) ID3D11Texture3D_Release(vol->d3d11_texture);
        free(vol->sys_mem);
        free(vol);
    }
    return (ULONG)ref;
}

static HRESULT __stdcall voltex_GetDevice(IDirect3DVolumeTexture8 *self, IDirect3DDevice8 **ppDevice)
{
    (void)self;
    *ppDevice = xbox_GetD3DDevice();
    return S_OK;
}

static DWORD __stdcall voltex_SetPriority(IDirect3DVolumeTexture8 *self, DWORD Priority) { (void)self; (void)Priority; return 0; }
static DWORD __stdcall voltex_GetPriority(IDirect3DVolumeTexture8 *self) { (void)self; return 0; }
static void  __stdcall voltex_PreLoad(IDirect3DVolumeTexture8 *self) { (void)self; }
static DWORD __stdcall voltex_GetType(IDirect3DVolumeTexture8 *self) { (void)self; return D3DRTYPE_VOLUMETEXTURE; }

static DWORD __stdcall voltex_GetLevelCount(IDirect3DVolumeTexture8 *self)
{
    return ((D3D8VolumeTexture *)self)->levels;
}

static HRESULT __stdcall voltex_GetLevelDesc(IDirect3DVolumeTexture8 *self, UINT Level, D3DVOLUME_DESC *pDesc)
{
    D3D8VolumeTexture *vol = (D3D8VolumeTexture *)self;
    if (!pDesc || Level >= vol->levels) return E_INVALIDARG;
    vol_fill_desc(vol, Level, pDesc);
    return S_OK;
}

static HRESULT __stdcall voltex_LockBox(IDirect3DVolumeTexture8 *self, UINT Level, D3DLOCKED_BOX *pLockedVolume, const D3DBOX *pBox, DWORD Flags)
{
    D3D8VolumeTexture *vol = (D3D8VolumeTexture *)self;
    UINT w, rows;
    (void)pBox; (void)Flags;

    if (!pLockedVolume || Level >= vol->levels) return E_INVALIDARG;
    if (vol->locked) return E_FAIL;

    w = vol_level_width(vol, Level);
    rows = vol_level_rows(vol, Level);
    pLockedVolume->RowPitch = (UINT)vol_level_pitch(vol, Level);
    pLockedVolume->SlicePitch = (UINT)(pLockedVolume->RowPitch * rows);
    pLockedVolume->pBits = vol->sys_mem + vol_level_offset(vol, Level);
    (void)w;
    vol->locked = TRUE;
    vol->dirty = TRUE;
    return S_OK;
}

static HRESULT __stdcall voltex_UnlockBox(IDirect3DVolumeTexture8 *self, UINT Level)
{
    D3D8VolumeTexture *vol = (D3D8VolumeTexture *)self;
    ID3D11DeviceContext *ctx;
    UINT w, h, d, bpp, rows;
    BYTE *src, *linear = NULL, *converted = NULL;
    const BYTE *upload_data;
    UINT upload_pitch, upload_depth;
    UINT slice_bytes, usize;

    if (Level >= vol->levels || !vol->locked) return E_FAIL;

    ctx = d3d8_GetD3D11Context();
    if (!ctx || !vol->d3d11_texture) { vol->locked = FALSE; return E_FAIL; }

    w = vol_level_width(vol, Level);
    h = vol_level_height(vol, Level);
    d = vol_level_depth(vol, Level);
    bpp = d3d8_format_bpp(vol->d3d8_format) / 8;
    rows = vol_level_rows(vol, Level);
    src = vol->sys_mem + vol_level_offset(vol, Level);
    upload_data = src;
    upload_pitch = vol_level_pitch(vol, Level);
    upload_depth = upload_pitch * rows;

    /* Step 1: unswizzle the whole slab into z-slice-major order. */
    if (!d3d8_format_is_compressed(vol->d3d8_format) &&
        d3d8_format_is_swizzled(vol->d3d8_format)) {
        linear = (BYTE *)malloc((size_t)w * h * d * bpp);
        if (linear) {
            xbox_unswizzle_box(linear, src, w, h, d, bpp);
            upload_data = linear;
            upload_pitch = w * bpp;
            upload_depth = upload_pitch * h;
        }
    }

    /* Step 2: convert per slice for formats whose D3D11 layout differs. */
    if (d3d8_format_has_conversion(vol->d3d8_format)) {
        UINT ubpp = d3d8_upload_bpp(vol->d3d8_format) / 8;
        UINT z;
        converted = (BYTE *)malloc((size_t)w * h * d * ubpp);
        if (converted) {
            slice_bytes = (size_t)w * h * bpp;
            usize = (size_t)w * h * ubpp;
            for (z = 0; z < d; z++) {
                d3d8_convert_linear_pixels(vol->d3d8_format, w, h,
                    upload_data + (size_t)z * slice_bytes,
                    converted + (size_t)z * usize, vol->palette);
            }
            if (linear) { free(linear); linear = NULL; }
            upload_data = converted;
            upload_pitch = w * ubpp;
            upload_depth = upload_pitch * h;
        }
    }

    ID3D11DeviceContext_UpdateSubresource(ctx, (ID3D11Resource *)vol->d3d11_texture,
        Level, NULL, upload_data, upload_pitch, upload_depth);

    if (linear) free(linear);
    if (converted) free(converted);

    vol->locked = FALSE;
    vol->dirty = FALSE;
    return S_OK;
}

static HRESULT __stdcall voltex_GetVolumeLevel(IDirect3DVolumeTexture8 *self, UINT Level, IDirect3DVolume8 **ppVolume)
{
    D3D8VolumeTexture *vol = (D3D8VolumeTexture *)self;
    D3D8Volume *v;
    extern const IDirect3DVolume8Vtbl g_vol_vtbl;

    if (!ppVolume || Level >= vol->levels) return E_INVALIDARG;

    v = (D3D8Volume *)calloc(1, sizeof(*v));
    if (!v) return E_OUTOFMEMORY;

    v->iface.lpVtbl = &g_vol_vtbl;
    v->ref_count = 1;
    v->parent = self;
    IDirect3DVolumeTexture8_AddRef(self);
    v->level = Level;

    *ppVolume = &v->iface;
    return S_OK;
}

static const IDirect3DVolumeTexture8Vtbl g_voltex_vtbl = {
    voltex_QueryInterface, voltex_AddRef, voltex_Release,
    voltex_GetDevice, voltex_SetPriority, voltex_GetPriority, voltex_PreLoad, voltex_GetType,
    voltex_GetLevelCount,
    voltex_GetLevelDesc, voltex_GetVolumeLevel, voltex_LockBox, voltex_UnlockBox,
};

HRESULT d3d8_CreateVolumeTextureImpl(UINT Width, UINT Height, UINT Depth, UINT Levels, DWORD Usage, D3DFORMAT Format, IDirect3DVolumeTexture8 **ppTex)
{
    D3D8VolumeTexture *vol;
    D3D11_TEXTURE3D_DESC td;
    D3D11_SHADER_RESOURCE_VIEW_DESC srvd;
    HRESULT hr;
    UINT max_dim;

    if (!ppTex || !Width || !Height || !Depth) return E_INVALIDARG;

    vol = (D3D8VolumeTexture *)calloc(1, sizeof(*vol));
    if (!vol) return E_OUTOFMEMORY;

    vol->d3d8_format = Format;
    vol->dxgi_format = d3d8_to_dxgi_format(Format);
    vol->width = Width;
    vol->height = Height;
    vol->depth = Depth;
    vol->usage = Usage;

    max_dim = Width;
    if (Height > max_dim) max_dim = Height;
    if (Depth > max_dim) max_dim = Depth;
    vol->levels = Levels ? Levels : 0;
    if (!vol->levels) {
        vol->levels = 1;
        while (max_dim > 1) { max_dim >>= 1; vol->levels++; }
        if (vol->levels > 12) vol->levels = 12;
    }
    vol->pitch = d3d8_row_pitch(Format, Width);

    vol->sys_mem = (BYTE *)calloc(1, vol_total_size(vol));
    if (!vol->sys_mem) { free(vol); return E_OUTOFMEMORY; }

    memset(&td, 0, sizeof(td));
    td.Width = Width;
    td.Height = Height;
    td.Depth = Depth;
    td.MipLevels = vol->levels;
    td.Format = vol->dxgi_format;
    td.Usage = D3D11_USAGE_DEFAULT;
    td.BindFlags = D3D11_BIND_SHADER_RESOURCE;

    hr = ID3D11Device_CreateTexture3D(d3d8_GetD3D11Device(), &td, NULL, &vol->d3d11_texture);
    if (FAILED(hr)) {
        fprintf(stderr, "D3D8: CreateVolumeTexture3D failed: 0x%08lX (fmt=%d %ux%ux%u)\n",
                hr, Format, Width, Height, Depth);
        free(vol->sys_mem);
        free(vol);
        return hr;
    }

    if (!d3d8_format_is_depth(Format) && vol->dxgi_format != DXGI_FORMAT_UNKNOWN) {
        memset(&srvd, 0, sizeof(srvd));
        srvd.Format = vol->dxgi_format;
        srvd.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE3D;
        srvd.Texture3D.MipLevels = vol->levels;
        hr = ID3D11Device_CreateShaderResourceView(d3d8_GetD3D11Device(),
            (ID3D11Resource *)vol->d3d11_texture, &srvd, &vol->srv);
        if (FAILED(hr)) {
            ID3D11Texture3D_Release(vol->d3d11_texture);
            free(vol->sys_mem);
            free(vol);
            return hr;
        }
    }

    d3d8_check_overlay();
    vol->iface.lpVtbl = &g_voltex_vtbl;
    vol->ref_count = 1;

    *ppTex = &vol->iface;
    return S_OK;
}

/* ================================================================
 * Volume level wrapper (GetVolumeLevel)
 * ================================================================ */

static D3D8Volume *vol_from_iface(IDirect3DVolume8 *iface)
{
    return (D3D8Volume *)iface;
}

static HRESULT __stdcall vol_QueryInterface(IDirect3DVolume8 *self, const IID *riid, void **ppv)
{
    (void)self; (void)riid; (void)ppv;
    return E_NOINTERFACE;
}

static ULONG __stdcall vol_AddRef(IDirect3DVolume8 *self)
{
    return (ULONG)InterlockedIncrement(&vol_from_iface(self)->ref_count);
}

static ULONG __stdcall vol_Release(IDirect3DVolume8 *self)
{
    D3D8Volume *v = vol_from_iface(self);
    LONG ref = InterlockedDecrement(&v->ref_count);
    if (ref <= 0) {
        if (v->parent) IDirect3DVolumeTexture8_Release(v->parent);
        free(v);
    }
    return (ULONG)ref;
}

static HRESULT __stdcall vol_GetDevice(IDirect3DVolume8 *self, IDirect3DDevice8 **ppDevice)
{
    (void)self;
    *ppDevice = xbox_GetD3DDevice();
    return S_OK;
}

static HRESULT __stdcall vol_GetDesc(IDirect3DVolume8 *self, D3DVOLUME_DESC *pDesc)
{
    D3D8Volume *v = vol_from_iface(self);
    D3D8VolumeTexture *vol;
    if (!pDesc || !v->parent) return E_INVALIDARG;
    vol = (D3D8VolumeTexture *)v->parent;
    if (v->level >= vol->levels) return E_INVALIDARG;
    vol_fill_desc(vol, v->level, pDesc);
    return S_OK;
}

static HRESULT __stdcall vol_LockBox(IDirect3DVolume8 *self, D3DLOCKED_BOX *pLockedVolume, const D3DBOX *pBox, DWORD Flags)
{
    D3D8Volume *v = vol_from_iface(self);
    return v->parent->lpVtbl->LockBox(v->parent, v->level, pLockedVolume, pBox, Flags);
}

static HRESULT __stdcall vol_UnlockBox(IDirect3DVolume8 *self)
{
    D3D8Volume *v = vol_from_iface(self);
    return v->parent->lpVtbl->UnlockBox(v->parent, v->level);
}

static HRESULT __stdcall vol_GetContainer(IDirect3DVolume8 *self, const IID *riid, void **ppContainer)
{
    (void)self; (void)riid; (void)ppContainer;
    return E_NOINTERFACE;
}

const IDirect3DVolume8Vtbl g_vol_vtbl = {
    vol_QueryInterface, vol_AddRef, vol_Release,
    vol_GetDevice, vol_GetContainer,
    vol_GetDesc, vol_LockBox, vol_UnlockBox,
};

/* ================================================================
 * Image surface (CreateImageSurface): a standalone offscreen surface
 * usable as a render target and CPU-lockable.
 * ================================================================ */

HRESULT d3d8_CreateImageSurfaceImpl(UINT Width, UINT Height, D3DFORMAT Format, IDirect3DSurface8 **ppSurface)
{
    D3D11_TEXTURE2D_DESC td;
    ID3D11Texture2D *tex = NULL;
    HRESULT hr;

    if (!ppSurface || !Width || !Height) return E_INVALIDARG;
    if (d3d8_to_dxgi_format(Format) == DXGI_FORMAT_UNKNOWN) {
        fprintf(stderr, "D3D8: CreateImageSurface: unsupported format 0x%X\n", Format);
        return E_INVALIDARG;
    }

    memset(&td, 0, sizeof(td));
    td.Width = Width;
    td.Height = Height;
    td.MipLevels = 1;
    td.ArraySize = 1;
    td.Format = d3d8_to_dxgi_format(Format);
    td.SampleDesc.Count = 1;
    td.Usage = D3D11_USAGE_DEFAULT;
    td.BindFlags = D3D11_BIND_RENDER_TARGET | D3D11_BIND_SHADER_RESOURCE;

    hr = ID3D11Device_CreateTexture2D(d3d8_GetD3D11Device(), &td, NULL, &tex);
    if (FAILED(hr)) {
        fprintf(stderr, "D3D8: CreateImageSurface failed: 0x%08lX (fmt=0x%X %ux%u)\n",
                hr, Format, Width, Height);
        return hr;
    }

    *ppSurface = d3d8_surface_create(tex, 0, 0, Width, Height, Format,
                                     D3DPOOL_DEFAULT, D3DUSAGE_RENDERTARGET,
                                     D3DMULTISAMPLE_NONE, NULL, 0);
    ID3D11Texture2D_Release(tex);
    return *ppSurface ? S_OK : E_OUTOFMEMORY;
}
