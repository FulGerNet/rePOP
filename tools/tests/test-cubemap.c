/* Standalone D3D11 WARP convention test: no guest/game code or game data.
 * Six unique BGRA faces must sample in NV2A/D3D +X,-X,+Y,-Y,+Z,-Z order.
 * Guest face strides and the production shader remain separate checks. */
#define COBJMACROS
#include <d3d11.h>
#include <d3dcompiler.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#define CHECK(x)                                                                                   \
    do {                                                                                           \
        HRESULT hr = (x);                                                                          \
        if (FAILED(hr)) {                                                                          \
            printf("FAIL line %d hr=%08lx\n", __LINE__, hr);                                       \
            return 1;                                                                              \
        }                                                                                          \
    } while (0)
int main(void) {
    ID3D11Device *dev;
    ID3D11DeviceContext *ctx;
    D3D_FEATURE_LEVEL fl;
    ID3D11Texture2D *tex;
    ID3D11ShaderResourceView *srv;
    ID3D11Buffer *out, *stage;
    ID3D11UnorderedAccessView *uav;
    ID3D11ComputeShader *cs;
    ID3DBlob *code, *err = NULL;
    D3D11_TEXTURE2D_DESC td = {0};
    D3D11_SUBRESOURCE_DATA init[6] = {{0}};
    D3D11_BUFFER_DESC bd = {0};
    D3D11_UNORDERED_ACCESS_VIEW_DESC ud = {0};
    D3D11_MAPPED_SUBRESOURCE map;
    UINT i, j;
    unsigned char px[6][16];
    const char *shader =
        "TextureCube<float4> tx:register(t0); RWStructuredBuffer<float4> dest:register(u0); "
        "SamplerState sm:register(s0); [numthreads(6,1,1)] void main(uint3 "
        "id:SV_DispatchThreadID){ float3 "
        "dirs[6]={float3(1,0,0),float3(-1,0,0),float3(0,1,0),float3(0,-1,0),float3(0,0,1),float3(0,"
        "0,-1)}; dest[id.x]=tx.SampleLevel(sm,dirs[id.x],0);}";
    CHECK(D3D11CreateDevice(NULL, D3D_DRIVER_TYPE_WARP, NULL, 0, NULL, 0, D3D11_SDK_VERSION, &dev,
                            &fl, &ctx));
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            px[i][j * 4] = 10 + i * 30;
            px[i][j * 4 + 1] = 20 + i * 20;
            px[i][j * 4 + 2] = 30 + i * 10;
            px[i][j * 4 + 3] = 255;
        }
        init[i].pSysMem = px[i];
        init[i].SysMemPitch = 8;
    }
    td.Width = td.Height = 2;
    td.MipLevels = 1;
    td.ArraySize = 6;
    td.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
    td.SampleDesc.Count = 1;
    td.BindFlags = D3D11_BIND_SHADER_RESOURCE;
    td.MiscFlags = D3D11_RESOURCE_MISC_TEXTURECUBE;
    CHECK(ID3D11Device_CreateTexture2D(dev, &td, init, &tex));
    CHECK(ID3D11Device_CreateShaderResourceView(dev, (ID3D11Resource *)tex, NULL, &srv));
    {
        D3D11_SHADER_RESOURCE_VIEW_DESC sd;
        ID3D11ShaderResourceView_GetDesc(srv, &sd);
        if (sd.ViewDimension != D3D11_SRV_DIMENSION_TEXTURECUBE)
            return 2;
    }
    bd.ByteWidth = 6 * 16;
    bd.BindFlags = D3D11_BIND_UNORDERED_ACCESS;
    bd.MiscFlags = D3D11_RESOURCE_MISC_BUFFER_STRUCTURED;
    bd.StructureByteStride = 16;
    CHECK(ID3D11Device_CreateBuffer(dev, &bd, NULL, &out));
    ud.Format = DXGI_FORMAT_UNKNOWN;
    ud.ViewDimension = D3D11_UAV_DIMENSION_BUFFER;
    ud.Buffer.NumElements = 6;
    CHECK(ID3D11Device_CreateUnorderedAccessView(dev, (ID3D11Resource *)out, &ud, &uav));
    CHECK(D3DCompile(shader, strlen(shader), "cube-test", NULL, NULL, "main", "cs_5_0", 0, 0, &code,
                     &err));
    CHECK(ID3D11Device_CreateComputeShader(dev, ID3D10Blob_GetBufferPointer(code),
                                           ID3D10Blob_GetBufferSize(code), NULL, &cs));
    {
        D3D11_SAMPLER_DESC sd = {0};
        ID3D11SamplerState *sm;
        sd.Filter = D3D11_FILTER_MIN_MAG_MIP_POINT;
        sd.AddressU = sd.AddressV = sd.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;
        sd.MaxLOD = D3D11_FLOAT32_MAX;
        CHECK(ID3D11Device_CreateSamplerState(dev, &sd, &sm));
        ID3D11DeviceContext_CSSetSamplers(ctx, 0, 1, &sm);
        ID3D11SamplerState_Release(sm);
    }
    ID3D11DeviceContext_CSSetShader(ctx, cs, NULL, 0);
    ID3D11DeviceContext_CSSetShaderResources(ctx, 0, 1, &srv);
    ID3D11DeviceContext_CSSetUnorderedAccessViews(ctx, 0, 1, &uav, NULL);
    ID3D11DeviceContext_Dispatch(ctx, 1, 1, 1);
    bd.BindFlags = 0;
    bd.MiscFlags = 0;
    bd.StructureByteStride = 0;
    bd.Usage = D3D11_USAGE_STAGING;
    bd.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
    CHECK(ID3D11Device_CreateBuffer(dev, &bd, NULL, &stage));
    ID3D11DeviceContext_CopyResource(ctx, (ID3D11Resource *)stage, (ID3D11Resource *)out);
    CHECK(ID3D11DeviceContext_Map(ctx, (ID3D11Resource *)stage, 0, D3D11_MAP_READ, 0, &map));
    for (i = 0; i < 6; i++) {
        float *v = (float *)map.pData + i * 4;
        int r = (int)(v[0] * 255 + 0.5f), g = (int)(v[1] * 255 + 0.5f),
            b = (int)(v[2] * 255 + 0.5f);
        if (r != 30 + i * 10 || g != 20 + i * 20 || b != 10 + i * 30) {
            printf("FAIL face %u rgb %d %d %d\n", i, r, g, b);
            return 3;
        }
        printf("ok cube face %u RGB %d %d %d\n", i, r, g, b);
    }
    ID3D11DeviceContext_Unmap(ctx, (ID3D11Resource *)stage, 0);
    ID3D11DeviceContext_ClearState(ctx);
    ID3D11Buffer_Release(stage);
    ID3D11UnorderedAccessView_Release(uav);
    ID3D11Buffer_Release(out);
    ID3D11ComputeShader_Release(cs);
    ID3D10Blob_Release(code);
    if (err) ID3D10Blob_Release(err);
    ID3D11ShaderResourceView_Release(srv);
    ID3D11Texture2D_Release(tex);
    ID3D11DeviceContext_Release(ctx);
    ID3D11Device_Release(dev);
    return 0;
}
