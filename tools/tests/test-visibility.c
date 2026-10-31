/* Production query-manager regression on real D3D11 WARP occlusion/depth. */
#define COBJMACROS
#include <d3d11.h>
#include <d3dcompiler.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "nv2a_hw_visibility.inc"
#define HR(x)                                                                                      \
    do {                                                                                           \
        HRESULT h = (x);                                                                           \
        if (FAILED(h)) {                                                                           \
            printf("line%d hr%08lx\n", __LINE__, h);                                               \
            return 1;                                                                              \
        }                                                                                          \
    } while (0)
#define CHECK(x)                                                                                   \
    do {                                                                                           \
        if (!(x)) {                                                                                \
            printf("line%d %s\n", __LINE__, #x);                                                   \
            return 1;                                                                              \
        }                                                                                          \
    } while (0)
static uint32_t counts[16], addresses[16], done;
static uint64_t stamps[16];
static void complete(void *unused, uint32_t addr, uint64_t stamp, uint32_t count) {
    (void)unused;
    addresses[done] = addr;
    stamps[done] = stamp;
    counts[done++] = count;
}
int main(void) {
    ID3D11Device *dev;
    ID3D11DeviceContext *ctx;
    D3D_FEATURE_LEVEL level;
    ID3D11Texture2D *rt, *depth;
    ID3D11RenderTargetView *rtv;
    ID3D11DepthStencilView *dsv;
    ID3D11VertexShader *vs[3];
    ID3D11PixelShader *ps;
    ID3D11DepthStencilState *ds;
    ID3D11RasterizerState *rs;
    ID3DBlob *code, *errors = NULL;
    D3D11_TEXTURE2D_DESC td = {0};
    D3D11_DEPTH_STENCIL_DESC dd = {0};
    D3D11_RASTERIZER_DESC rd = {0};
    D3D11_VIEWPORT vp = {0, 0, 16, 16, 0, 1};
    NvHwVisibility v = {0};
    char shader[1024];
    unsigned i;
    DWORD deadline;
    float z[3] = {.5f, .8f, .2f};
    const char *vertex =
        "float4 main(uint id:SV_VertexID):SV_Position{float2 p=float2((id<<1)&2,id&2);return "
        "float4(p*float2(2,-2)+float2(-1,1),%f,1);}";
    const char *pixel = "float4 main():SV_Target{return float4(1,1,1,1);}";
    HR(D3D11CreateDevice(NULL, D3D_DRIVER_TYPE_WARP, NULL, 0, NULL, 0, D3D11_SDK_VERSION, &dev,
                         &level, &ctx));
    td.Width = td.Height = 16;
    td.ArraySize = td.MipLevels = 1;
    td.SampleDesc.Count = 1;
    td.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    td.BindFlags = D3D11_BIND_RENDER_TARGET;
    HR(ID3D11Device_CreateTexture2D(dev, &td, NULL, &rt));
    HR(ID3D11Device_CreateRenderTargetView(dev, (ID3D11Resource *)rt, NULL, &rtv));
    td.Format = DXGI_FORMAT_D32_FLOAT;
    td.BindFlags = D3D11_BIND_DEPTH_STENCIL;
    HR(ID3D11Device_CreateTexture2D(dev, &td, NULL, &depth));
    HR(ID3D11Device_CreateDepthStencilView(dev, (ID3D11Resource *)depth, NULL, &dsv));
    for (i = 0; i < 3; i++) {
        sprintf(shader, vertex, z[i]);
        HR(D3DCompile(shader, strlen(shader), "visibility", NULL, NULL, "main", "vs_4_0", 0, 0,
                      &code, &errors));
        HR(ID3D11Device_CreateVertexShader(dev, ID3D10Blob_GetBufferPointer(code),
                                           ID3D10Blob_GetBufferSize(code), NULL, &vs[i]));
        ID3D10Blob_Release(code);
    }
    HR(D3DCompile(pixel, strlen(pixel), "visibility", NULL, NULL, "main", "ps_4_0", 0, 0, &code,
                  &errors));
    HR(ID3D11Device_CreatePixelShader(dev, ID3D10Blob_GetBufferPointer(code),
                                      ID3D10Blob_GetBufferSize(code), NULL, &ps));
    ID3D10Blob_Release(code);
    dd.DepthEnable = TRUE;
    dd.DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ALL;
    dd.DepthFunc = D3D11_COMPARISON_LESS_EQUAL;
    HR(ID3D11Device_CreateDepthStencilState(dev, &dd, &ds));
    rd.FillMode = D3D11_FILL_SOLID;
    rd.CullMode = D3D11_CULL_NONE;
    rd.DepthClipEnable = TRUE;
    HR(ID3D11Device_CreateRasterizerState(dev, &rd, &rs));
    ID3D11DeviceContext_RSSetState(ctx, rs);
    ID3D11DeviceContext_RSSetViewports(ctx, 1, &vp);
    ID3D11DeviceContext_OMSetRenderTargets(ctx, 1, &rtv, dsv);
    ID3D11DeviceContext_OMSetDepthStencilState(ctx, ds, 0);
    ID3D11DeviceContext_IASetPrimitiveTopology(ctx, D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    ID3D11DeviceContext_PSSetShader(ctx, ps, NULL, 0);
#define DRAW(k, scale)                                                                             \
    do {                                                                                           \
        ID3D11DeviceContext_VSSetShader(ctx, vs[k], NULL, 0);                                      \
        CHECK(nv_hw_vis_draw(&v, dev, ctx, scale));                                                \
        ID3D11DeviceContext_Draw(ctx, 3, 0);                                                       \
    } while (0)
#define REPORT(a, t) CHECK(nv_hw_vis_report(&v, ctx, a, t))
    ID3D11DeviceContext_ClearDepthStencilView(ctx, dsv, D3D11_CLEAR_DEPTH, 1, 0);
    DRAW(0, 1); /* occluder z=.5 while counting disabled */
    nv_hw_vis_clear(&v, ctx);
    nv_hw_vis_enable(&v, ctx, 1);
    DRAW(1, 1);
    nv_hw_vis_enable(&v, ctx, 0);
    REPORT(0, 1);
    nv_hw_vis_clear(&v, ctx);
    nv_hw_vis_enable(&v, ctx, 1);
    DRAW(2, 1);
    nv_hw_vis_enable(&v, ctx, 0);
    REPORT(1, 2);
    REPORT(2, 3);
    /* Clear/reuse before polling must not alter queued query snapshots. */
    nv_hw_vis_clear(&v, ctx);
    nv_hw_vis_enable(&v, ctx, 1);
    DRAW(1, 1);
    nv_hw_vis_enable(&v, ctx, 0);
    REPORT(0, 4);
    /* Snapshot while enabled, then continue counting and report cumulative sum. */
    nv_hw_vis_clear(&v, ctx);
    nv_hw_vis_enable(&v, ctx, 1);
    DRAW(2, 1);
    REPORT(3, 5);
    DRAW(2, 1);
    REPORT(4, 6);
    nv_hw_vis_clear(&v, ctx);
    DRAW(2, 1);
    DRAW(2, 4);
    nv_hw_vis_enable(&v, ctx, 0);
    REPORT(5, 7);
    nv_hw_vis_clear(&v, ctx);
    REPORT(6, 8);
    CHECK(done == 0);
    deadline = GetTickCount() + 3000;
    while (done < 8 && (int32_t)(deadline - GetTickCount()) > 0) {
        nv_hw_vis_kick(&v, ctx, 1); /* RE-SoT: what the window thread's idle tick does. */
        nv_hw_vis_poll(&v, ctx, complete, NULL);
        if (done < 8)
            Sleep(1);
    }
    CHECK(done == 8);
    {
        uint32_t expected[] = {0, 256, 256, 0, 256, 512, 320, 0}, addr[] = {0, 1, 2, 0, 3, 4, 5, 6};
        for (i = 0; i < 8; i++) {
            CHECK(counts[i] == expected[i]);
            CHECK(addresses[i] == addr[i]);
            CHECK(stamps[i] == i + 1);
            printf("ok report%u count%u\n", i, counts[i]);
        }
    }
    nv_hw_vis_poll(&v, ctx, complete, NULL);
    CHECK(done == 8);
    CHECK(v.idle_count > 0); /* RE-SoT: finished queries return for reuse. */
    nv_hw_vis_destroy(&v, ctx);
    ID3D11DeviceContext_ClearState(ctx);
    ID3D11RasterizerState_Release(rs);
    ID3D11DepthStencilState_Release(ds);
    ID3D11PixelShader_Release(ps);
    for (i = 0; i < 3; i++)
        ID3D11VertexShader_Release(vs[i]);
    ID3D11DepthStencilView_Release(dsv);
    ID3D11Texture2D_Release(depth);
    ID3D11RenderTargetView_Release(rtv);
    ID3D11Texture2D_Release(rt);
    ID3D11DeviceContext_Release(ctx);
    ID3D11Device_Release(dev);
    return 0;
}
