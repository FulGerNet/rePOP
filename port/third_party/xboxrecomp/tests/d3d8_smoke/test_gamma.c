/* Exercise real device entry points on WARP. Only the swap-chain Present is
 * replaced, so the pixels submitted for display can be checked headlessly. */
#include "../../src/d3d/d3d8_device.c"
#include <stdlib.h>

#define REQUIRE(call) do { HRESULT hr_ = (call); if (FAILED(hr_)) { \
    fprintf(stderr, "%s: 0x%08lx\n", #call, (unsigned long)hr_); exit(2); } } while (0)
#define CHECK(label, condition) do { if (!(condition)) { \
    fprintf(stderr, "FAIL: %s\n", label); failures++; } } while (0)

static int failures, presents;
static HRESULT present_result = S_OK;
static ID3D11Texture2D *target, *readback;
static const BYTE original[16] = {16,64,128,32, 255,0,127,255, 0,255,255,0, 96,32,0,128};
static BYTE expected[16];

static void check_pixels(const char *label, const BYTE *want)
{
    D3D11_MAPPED_SUBRESOURCE mapped;
    ID3D11DeviceContext *ctx = g_device_state.d3d11_context;
    ID3D11DeviceContext_CopyResource(ctx, (ID3D11Resource *)readback, (ID3D11Resource *)target);
    REQUIRE(ID3D11DeviceContext_Map(ctx, (ID3D11Resource *)readback, 0, D3D11_MAP_READ, 0, &mapped));
    CHECK(label, memcmp(mapped.pData, want, 16) == 0);
    ID3D11DeviceContext_Unmap(ctx, (ID3D11Resource *)readback, 0);
}

static HRESULT STDMETHODCALLTYPE capture_present(IDXGISwapChain *self, UINT interval, UINT flags)
{
    (void)self;
    CHECK("presentation arguments", interval == 1 && flags == 0);
    check_pixels("displayed gamma pixels", expected);
    presents++;
    return present_result;
}

static IDXGISwapChainVtbl swap_vtbl = {.Present = capture_present};
static IDXGISwapChain swap_chain = {&swap_vtbl};

int main(void)
{
    D3DGAMMARAMP ramp, got;
    D3D11_TEXTURE2D_DESC td = {0};
    D3D11_BUFFER_DESC bd = {0};
    D3D11_BLEND_DESC blend_desc = {0};
    D3D11_RASTERIZER_DESC raster_desc = {0};
    D3D11_VIEWPORT viewport = {1, 0, 2, 1, 0.25f, 0.75f}, bound_viewport;
    ID3D11Buffer *buffer, *bound_buffer;
    ID3D11BlendState *blend, *bound_blend;
    ID3D11RasterizerState *raster, *bound_raster;
    ID3D11RenderTargetView *bound_rtv;
    ID3D11VertexShader *vs, *bound_vs;
    ID3D11PixelShader *ps, *bound_ps;
    D3D11_PRIMITIVE_TOPOLOGY topology;
    ID3D11Device *device;
    ID3D11DeviceContext *ctx;
    UINT i, route, count, mask;
    float factor[4] = {0.1f, 0.2f, 0.3f, 0.4f}, bound_factor[4];

    REQUIRE(D3D11CreateDevice(NULL, D3D_DRIVER_TYPE_WARP, NULL, 0, NULL, 0,
        D3D11_SDK_VERSION, &device, NULL, &ctx));
    g_device_state.d3d11_device = device;
    g_device_state.d3d11_context = ctx;
    g_device_state.width = 4; g_device_state.height = 1;
    g_device_state.ref_count = 1;
    g_device_state.swap_chain = &swap_chain;
    g_device.lpVtbl = &g_device_vtbl;
    d3d8_init_default_states(&g_device_state);
    REQUIRE(d3d8_shaders_init());
    td.Width = 4; td.Height = td.MipLevels = td.ArraySize = td.SampleDesc.Count = 1;
    td.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    td.BindFlags = D3D11_BIND_RENDER_TARGET;
    REQUIRE(ID3D11Device_CreateTexture2D(device, &td, NULL, &target));
    REQUIRE(ID3D11Device_CreateRenderTargetView(device, (ID3D11Resource *)target,
        NULL, &g_device_state.default_rtv));
    td.BindFlags = 0; td.Usage = D3D11_USAGE_STAGING; td.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
    REQUIRE(ID3D11Device_CreateTexture2D(device, &td, NULL, &readback));
    ID3D11DeviceContext_UpdateSubresource(ctx, (ID3D11Resource *)target, 0, NULL, original, 16, 0);
    bd.ByteWidth = 16; bd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
    REQUIRE(ID3D11Device_CreateBuffer(device, &bd, NULL, &buffer));
    REQUIRE(ID3D11Device_CreateBlendState(device, &blend_desc, &blend)); /* zero write mask */
    raster_desc.FillMode = D3D11_FILL_WIREFRAME;
    raster_desc.CullMode = D3D11_CULL_FRONT;
    raster_desc.ScissorEnable = TRUE;
    REQUIRE(ID3D11Device_CreateRasterizerState(device, &raster_desc, &raster));
    d3d8_shaders_prepare_draw(D3DFVF_XYZRHW | D3DFVF_DIFFUSE);
    ID3D11DeviceContext_VSGetShader(ctx, &vs, NULL, NULL);
    ID3D11DeviceContext_PSGetShader(ctx, &ps, NULL, NULL);
    ID3D11DeviceContext_PSSetConstantBuffers(ctx, 0, 1, &buffer);
    ID3D11DeviceContext_OMSetBlendState(ctx, blend, factor, 0x1234);
    ID3D11DeviceContext_RSSetState(ctx, raster);
    ID3D11DeviceContext_RSSetViewports(ctx, 1, &viewport);
    ID3D11DeviceContext_IASetPrimitiveTopology(ctx, D3D11_PRIMITIVE_TOPOLOGY_LINELIST);
    ID3D11DeviceContext_OMSetRenderTargets(ctx, 1, &g_device_state.default_rtv, NULL);

    for (i = 0; i < 256; i++) ramp.red[i] = ramp.green[i] = ramp.blue[i] = (WORD)(i * 257);
    memset(&got, 0, sizeof(got));
    g_device.lpVtbl->GetGammaRamp(&g_device, &got);
    CHECK("default identity ramp", memcmp(&got, &ramp, sizeof(ramp)) == 0);
    memcpy(expected, original, sizeof(expected));
    REQUIRE(dev_Present(&g_device, NULL, NULL, NULL, NULL));
    for (i = 0; i < 256; i++) {
        ramp.red[i] = (WORD)((255 - i) * 257);
        ramp.green[i] = (WORD)(i * 129); /* Exercise low bits of WORD entries. */
        ramp.blue[i] = 12345;
    }
    g_device.lpVtbl->SetGammaRamp(&g_device, 0, &ramp);
    g_device.lpVtbl->SetGammaRamp(&g_device, 0, NULL);
    g_device.lpVtbl->GetGammaRamp(&g_device, NULL);
    g_device.lpVtbl->GetGammaRamp(&g_device, &got);
    CHECK("ramp round trip", memcmp(&got, &ramp, sizeof(ramp)) == 0);
    for (i = 0; i < 4; i++) {
        expected[4*i] = (BYTE)((ramp.red[original[4*i]] * 255u + 32767u) / 65535u);
        expected[4*i+1] = (BYTE)((ramp.green[original[4*i+1]] * 255u + 32767u) / 65535u);
        expected[4*i+2] = (BYTE)((12345u * 255u + 32767u) / 65535u);
    }
    for (route = 0; route < 4; route++) {
        present_result = route == 3 ? E_FAIL : S_OK;
        if (route == 1) REQUIRE(dev_Swap(&g_device, 0));
        else if (route == 2) d3d8_PresentFrame();
        else CHECK("Present HRESULT", dev_Present(&g_device, NULL, NULL, NULL, NULL) == present_result);
        check_pixels("guest backbuffer preserved", original);
        count = 1;
        ID3D11DeviceContext_RSGetViewports(ctx, &count, &bound_viewport);
        CHECK("viewport restored", count == 1 && memcmp(&viewport, &bound_viewport, sizeof(viewport)) == 0);
        ID3D11DeviceContext_OMGetBlendState(ctx, &bound_blend, bound_factor, &mask);
        CHECK("blend restored", blend == bound_blend && mask == 0x1234 && memcmp(factor, bound_factor, sizeof(factor)) == 0);
        ID3D11DeviceContext_RSGetState(ctx, &bound_raster);
        CHECK("raster restored", raster == bound_raster);
        ID3D11DeviceContext_PSGetConstantBuffers(ctx, 0, 1, &bound_buffer);
        CHECK("constant buffer restored", buffer == bound_buffer);
        ID3D11DeviceContext_VSGetShader(ctx, &bound_vs, NULL, NULL);
        ID3D11DeviceContext_PSGetShader(ctx, &bound_ps, NULL, NULL);
        CHECK("shaders restored", vs == bound_vs && ps == bound_ps);
        ID3D11DeviceContext_IAGetPrimitiveTopology(ctx, &topology);
        CHECK("topology restored", topology == D3D11_PRIMITIVE_TOPOLOGY_LINELIST);
        ID3D11DeviceContext_OMGetRenderTargets(ctx, 1, &bound_rtv, NULL);
        CHECK("render target restored", bound_rtv == g_device_state.default_rtv);
        if (bound_blend) ID3D11BlendState_Release(bound_blend);
        if (bound_raster) ID3D11RasterizerState_Release(bound_raster);
        if (bound_buffer) ID3D11Buffer_Release(bound_buffer);
        if (bound_vs) ID3D11VertexShader_Release(bound_vs);
        if (bound_ps) ID3D11PixelShader_Release(bound_ps);
        if (bound_rtv) ID3D11RenderTargetView_Release(bound_rtv);
    }
    for (i = 0; i < 256; i++) ramp.red[i] = ramp.green[i] = ramp.blue[i] = (WORD)(i * 257);
    g_device.lpVtbl->SetGammaRamp(&g_device, 0, &ramp);
    memcpy(expected, original, sizeof(expected));
    present_result = S_OK;
    REQUIRE(dev_Swap(&g_device, 0));
    CHECK("all presentation paths exercised", presents == 6);
    /* Teardown must reset the CPU ramp and permit lazy GPU recreation. */
    ramp.red[16] = 65535;
    g_device.lpVtbl->SetGammaRamp(&g_device, 0, &ramp);
    expected[0] = 255;
    REQUIRE(dev_Present(&g_device, NULL, NULL, NULL, NULL));
    d3d8_gamma_shutdown();
    g_device.lpVtbl->GetGammaRamp(&g_device, &got);
    for (i = 0; i < 256; i++)
        CHECK("identity after shutdown", got.red[i] == i*257 && got.green[i] == i*257 && got.blue[i] == i*257);
    memcpy(expected, original, sizeof(expected));
    REQUIRE(dev_Present(&g_device, NULL, NULL, NULL, NULL));
    g_device.lpVtbl->SetGammaRamp(&g_device, 1, &ramp);
    expected[0] = 255;
    REQUIRE(dev_Present(&g_device, NULL, NULL, NULL, NULL));
    check_pixels("guest pixels after gamma recreation", original);
    /* Also exercise DXGI's real DISCARD presentation and restoration ordering.
     * The window stays hidden; the captured presents above verify display RGB. */
    {
        IDXGIFactory *factory;
        IDXGISwapChain *real_swap;
        DXGI_SWAP_CHAIN_DESC scd = {0};
        HWND window = CreateWindowExA(0, "STATIC", "gamma test", WS_POPUP,
            0, 0, 4, 1, NULL, NULL, GetModuleHandleA(NULL), NULL);
        CHECK("hidden window created", window != NULL);
        REQUIRE(CreateDXGIFactory(&IID_IDXGIFactory, (void **)&factory));
        scd.BufferCount = 1;
        scd.BufferDesc.Width = 4; scd.BufferDesc.Height = 1;
        scd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        scd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
        scd.SampleDesc.Count = 1;
        scd.OutputWindow = window; scd.Windowed = TRUE;
        scd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
        REQUIRE(IDXGIFactory_CreateSwapChain(factory, (IUnknown *)device, &scd, &real_swap));
        ID3D11DeviceContext_OMSetRenderTargets(ctx, 0, NULL, NULL);
        ID3D11RenderTargetView_Release(g_device_state.default_rtv);
        ID3D11Texture2D_Release(target);
        REQUIRE(IDXGISwapChain_GetBuffer(real_swap, 0, &IID_ID3D11Texture2D, (void **)&target));
        REQUIRE(ID3D11Device_CreateRenderTargetView(device, (ID3D11Resource *)target,
            NULL, &g_device_state.default_rtv));
        g_device_state.swap_chain = real_swap;
        ID3D11DeviceContext_UpdateSubresource(ctx, (ID3D11Resource *)target, 0, NULL, original, 16, 0);
        REQUIRE(dev_Present(&g_device, NULL, NULL, NULL, NULL));
        check_pixels("guest pixels after real DXGI Present", original);
        g_device_state.swap_chain = &swap_chain;
        IDXGISwapChain_Release(real_swap);
        IDXGIFactory_Release(factory);
        DestroyWindow(window);
    }
    ID3D11DeviceContext_ClearState(ctx);
    ID3D11VertexShader_Release(vs); ID3D11PixelShader_Release(ps);
    ID3D11Buffer_Release(buffer); ID3D11BlendState_Release(blend);
    ID3D11RasterizerState_Release(raster);
    ID3D11Texture2D_Release(target); ID3D11Texture2D_Release(readback);
    g_device_state.swap_chain = NULL;
    dev_Release(&g_device);
    printf("d3d8_gamma: %d failures, %d captured + 1 real DXGI presents\n", failures, presents);
    return failures != 0;
}
