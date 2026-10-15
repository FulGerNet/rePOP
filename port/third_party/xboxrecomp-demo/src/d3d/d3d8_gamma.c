/* Gamma is a display transform, not a modification to guest render targets.
 * Snapshot before presentation, then restore even when the swap chain fails. */
#include "d3d8_internal.h"
#include <d3dcompiler.h>
#include <string.h>

static D3DGAMMARAMP g_ramp;
static BOOL g_initialized, g_enabled, g_active;
static ID3D11DeviceContext *g_deferred;
static ID3D11VertexShader *g_vs;
static ID3D11PixelShader *g_ps;
static ID3D11Buffer *g_constants;
static ID3D11Texture2D *g_snapshot;
static ID3D11ShaderResourceView *g_source;

static void gamma_release_resources(void)
{
    if (g_source) { ID3D11ShaderResourceView_Release(g_source); g_source = NULL; }
    if (g_snapshot) { ID3D11Texture2D_Release(g_snapshot); g_snapshot = NULL; }
    if (g_constants) { ID3D11Buffer_Release(g_constants); g_constants = NULL; }
    if (g_vs) { ID3D11VertexShader_Release(g_vs); g_vs = NULL; }
    if (g_ps) { ID3D11PixelShader_Release(g_ps); g_ps = NULL; }
    if (g_deferred) { ID3D11DeviceContext_Release(g_deferred); g_deferred = NULL; }
}

void d3d8_gamma_shutdown(void)
{
    gamma_release_resources();
    g_initialized = g_enabled = g_active = FALSE;
}

void d3d8_gamma_get(D3DGAMMARAMP *ramp)
{
    UINT i;
    if (!g_initialized) {
        for (i = 0; i < 256; i++)
            g_ramp.red[i] = g_ramp.green[i] = g_ramp.blue[i] = (WORD)(i * 257);
        g_initialized = TRUE;
    }
    if (ramp) *ramp = g_ramp;
}

void d3d8_gamma_set(const D3DGAMMARAMP *ramp)
{
    UINT i;
    if (!ramp) return;
    g_ramp = *ramp;
    g_initialized = TRUE;
    g_enabled = FALSE;
    for (i = 0; i < 256; i++) {
        if (ramp->red[i] != i * 257 || ramp->green[i] != i * 257 || ramp->blue[i] != i * 257)
            g_enabled = TRUE;
    }
}

static HRESULT gamma_create_shaders(void)
{
    static const char shader[] =
        "Texture2D pixels : register(t0);\n"
        "cbuffer Gamma : register(b0) { float4 ramp[256]; };\n"
        "float4 vs(uint id : SV_VertexID) : SV_Position {\n"
        " return float4(id==2?3:-1,id==1?3:-1,0,1); }\n"
        "float4 ps(float4 p : SV_Position) : SV_Target {\n"
        " float4 c = pixels.Load(int3(p.xy,0));\n"
        " uint3 i = (uint3)(saturate(c.rgb)*255+0.5);\n"
        " return float4(ramp[i.r].r,ramp[i.g].g,ramp[i.b].b,c.a); }\n";
    ID3D11Device *device = d3d8_GetD3D11Device();
    ID3DBlob *vs = NULL, *ps = NULL;
    D3D11_BUFFER_DESC bd = {0};
    HRESULT hr;
    if (g_deferred) return S_OK;
    hr = D3DCompile(shader, sizeof(shader) - 1, NULL, NULL, NULL, "vs", "vs_4_0", 0, 0, &vs, NULL);
    if (SUCCEEDED(hr)) hr = D3DCompile(shader, sizeof(shader) - 1, NULL, NULL, NULL, "ps", "ps_4_0", 0, 0, &ps, NULL);
    if (SUCCEEDED(hr)) hr = ID3D11Device_CreateVertexShader(device,
        ID3D10Blob_GetBufferPointer(vs), ID3D10Blob_GetBufferSize(vs), NULL, &g_vs);
    if (SUCCEEDED(hr)) hr = ID3D11Device_CreatePixelShader(device,
        ID3D10Blob_GetBufferPointer(ps), ID3D10Blob_GetBufferSize(ps), NULL, &g_ps);
    bd.ByteWidth = 256 * 4 * sizeof(float);
    bd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
    if (SUCCEEDED(hr)) hr = ID3D11Device_CreateBuffer(device, &bd, NULL, &g_constants);
    if (SUCCEEDED(hr)) hr = ID3D11Device_CreateDeferredContext(device, 0, &g_deferred);
    if (vs) ID3D10Blob_Release(vs);
    if (ps) ID3D10Blob_Release(ps);
    if (FAILED(hr)) gamma_release_resources();
    return hr;
}

HRESULT d3d8_gamma_begin(ID3D11RenderTargetView *target)
{
    ID3D11Device *device = d3d8_GetD3D11Device();
    ID3D11DeviceContext *ctx = d3d8_GetD3D11Context();
    ID3D11Resource *backbuffer;
    ID3D11CommandList *commands = NULL;
    D3D11_TEXTURE2D_DESC desc, saved;
    D3D11_VIEWPORT viewport = {0};
    float values[256][4];
    HRESULT hr;
    UINT i;
    if (g_active) return E_UNEXPECTED;
    if (!g_enabled) return S_FALSE; /* Identity needs no GPU work or resources. */
    if (!device || !ctx || !target) return E_INVALIDARG;
    hr = gamma_create_shaders();
    if (FAILED(hr)) return hr;
    ID3D11RenderTargetView_GetResource(target, &backbuffer);
    /* The device's default render target is always a single-sample Texture2D. */
    ID3D11Texture2D_GetDesc((ID3D11Texture2D *)backbuffer, &desc);
    if (desc.SampleDesc.Count != 1) {
        ID3D11Resource_Release(backbuffer);
        return E_NOTIMPL;
    }
    if (g_snapshot) {
        ID3D11Texture2D_GetDesc(g_snapshot, &saved);
        if (saved.Width != desc.Width || saved.Height != desc.Height || saved.Format != desc.Format) {
            ID3D11ShaderResourceView_Release(g_source); g_source = NULL;
            ID3D11Texture2D_Release(g_snapshot); g_snapshot = NULL;
        }
    }
    if (!g_snapshot) {
        desc.Usage = D3D11_USAGE_DEFAULT;
        desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
        desc.CPUAccessFlags = desc.MiscFlags = 0;
        hr = ID3D11Device_CreateTexture2D(device, &desc, NULL, &g_snapshot);
        if (SUCCEEDED(hr)) hr = ID3D11Device_CreateShaderResourceView(device,
            (ID3D11Resource *)g_snapshot, NULL, &g_source);
        if (FAILED(hr)) {
            ID3D11Resource_Release(backbuffer);
            gamma_release_resources();
            return hr;
        }
    }
    for (i = 0; i < 256; i++) {
        values[i][0] = g_ramp.red[i] / 65535.0f;
        values[i][1] = g_ramp.green[i] / 65535.0f;
        values[i][2] = g_ramp.blue[i] / 65535.0f;
        values[i][3] = 0;
    }
    ID3D11DeviceContext_UpdateSubresource(ctx, (ID3D11Resource *)g_constants, 0, NULL, values, 0, 0);
    viewport.Width = (float)desc.Width; viewport.Height = (float)desc.Height; viewport.MaxDepth = 1;
    ID3D11DeviceContext_CopyResource(g_deferred, (ID3D11Resource *)g_snapshot, backbuffer);
    ID3D11DeviceContext_RSSetViewports(g_deferred, 1, &viewport);
    ID3D11DeviceContext_OMSetRenderTargets(g_deferred, 1, &target, NULL);
    ID3D11DeviceContext_IASetPrimitiveTopology(g_deferred, D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    ID3D11DeviceContext_VSSetShader(g_deferred, g_vs, NULL, 0);
    ID3D11DeviceContext_PSSetShader(g_deferred, g_ps, NULL, 0);
    ID3D11DeviceContext_PSSetConstantBuffers(g_deferred, 0, 1, &g_constants);
    ID3D11DeviceContext_PSSetShaderResources(g_deferred, 0, 1, &g_source);
    ID3D11DeviceContext_Draw(g_deferred, 3, 0);
    hr = ID3D11DeviceContext_FinishCommandList(g_deferred, FALSE, &commands);
    ID3D11Resource_Release(backbuffer);
    if (FAILED(hr)) {
        gamma_release_resources();
        return hr;
    }
    /* The runtime preserves the entire game pipeline, including cached states. */
    ID3D11DeviceContext_ExecuteCommandList(ctx, commands, TRUE);
    ID3D11CommandList_Release(commands);
    g_active = TRUE;
    return S_OK;
}

void d3d8_gamma_end(ID3D11RenderTargetView *target)
{
    ID3D11Resource *backbuffer;
    if (!g_active) return;
    ID3D11RenderTargetView_GetResource(target, &backbuffer);
    ID3D11DeviceContext_CopyResource(d3d8_GetD3D11Context(), backbuffer, (ID3D11Resource *)g_snapshot);
    ID3D11Resource_Release(backbuffer);
    g_active = FALSE;
}
