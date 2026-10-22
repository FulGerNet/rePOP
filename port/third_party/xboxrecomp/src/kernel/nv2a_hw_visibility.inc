/* RE-SoT: asynchronous NV2A visibility reports backed by D3D11 occlusion
 * queries. Included after D3D11 headers. No waits and no per-draw readback;
 * only GET_REPORT flushes commands, and poll checks completed reports FIFO.
 * A report snapshots query references, so CLEAR/reuse cannot reset its data. */
typedef struct NvHwVisSegment {
    ID3D11Query *query;
    double pixel_scale;
} NvHwVisSegment;
typedef struct NvHwVisReport {
    struct NvHwVisReport *next;
    uint32_t address, count;
    uint64_t stamp;
    NvHwVisSegment segments[1];
} NvHwVisReport;
typedef struct NvHwVisibility {
    NvHwVisSegment *segments;
    uint32_t count, capacity;
    int enabled, active, failed;
    HRESULT device_error; /* terminal query failure, never publish fake completion */
    NvHwVisReport *first, *last;
} NvHwVisibility;

static void nv_hw_vis_end(NvHwVisibility *v, ID3D11DeviceContext *ctx)
{
    if (v->active) {
        ID3D11DeviceContext_End(ctx, (ID3D11Asynchronous *)v->segments[v->count - 1].query);
        v->active = 0;
    }
}
static void nv_hw_vis_clear(NvHwVisibility *v, ID3D11DeviceContext *ctx)
{
    uint32_t i;
    nv_hw_vis_end(v, ctx);
    for (i = 0; i < v->count; i++) ID3D11Query_Release(v->segments[i].query);
    v->count = 0; v->failed = 0;
}
static void nv_hw_vis_enable(NvHwVisibility *v, ID3D11DeviceContext *ctx, int enabled)
{
    if (!enabled) nv_hw_vis_end(v, ctx);
    v->enabled = enabled != 0;
}
static int nv_hw_vis_draw(NvHwVisibility *v, ID3D11Device *dev,
                          ID3D11DeviceContext *ctx, double pixel_scale)
{
    ID3D11Query *q = NULL;
    D3D11_QUERY_DESC desc = {D3D11_QUERY_OCCLUSION, 0};
    if (!v->enabled) return 1;
    if (v->active) {
        if (v->segments[v->count - 1].pixel_scale == pixel_scale) return 1;
        nv_hw_vis_end(v, ctx); /* surface scale changed within the counter */
    }
    if (v->count == v->capacity) {
        uint32_t capacity = v->capacity ? v->capacity * 2 : 4;
        NvHwVisSegment *segments = (NvHwVisSegment *)realloc(v->segments,
                                                (size_t)capacity * sizeof *segments);
        if (!segments) { v->failed = 1; return 0; }
        v->segments = segments;
        v->capacity = capacity;
    }
    if (FAILED(ID3D11Device_CreateQuery(dev, &desc, &q))) { v->failed = 1; return 0; }
    v->segments[v->count].query = q;
    v->segments[v->count].pixel_scale = pixel_scale > 0 ? pixel_scale : 1;
    v->count++;
    ID3D11DeviceContext_Begin(ctx, (ID3D11Asynchronous *)q);
    v->active = 1;
    return 1;
}
static int nv_hw_vis_report(NvHwVisibility *v, ID3D11DeviceContext *ctx,
                            uint32_t address, uint64_t stamp)
{
    uint32_t i;
    NvHwVisReport *r;
    nv_hw_vis_end(v, ctx); /* snapshot, even if counting remains enabled */
    if (v->failed) return 0;
    r = (NvHwVisReport *)calloc(1, sizeof *r + (size_t)v->count * sizeof r->segments[0]);
    if (!r) return 0;
    r->address = address; r->stamp = stamp; r->count = v->count;
    for (i = 0; i < r->count; i++) {
        r->segments[i] = v->segments[i];
        ID3D11Query_AddRef(r->segments[i].query);
    }
    if (v->last) v->last->next = r;
    else v->first = r;
    v->last = r;
    /* Issue once per guest report; polling never forces a flush or spins. */
    ID3D11DeviceContext_Flush(ctx);
    return 1;
}
typedef void (*NvHwVisComplete)(void *, uint32_t, uint64_t, uint32_t);
static void nv_hw_vis_poll(NvHwVisibility *v, ID3D11DeviceContext *ctx,
                           NvHwVisComplete complete, void *opaque)
{
    if (FAILED(v->device_error)) return;
    while (v->first) {
        NvHwVisReport *r = v->first;
        uint32_t i;
        double pixels = 0;
        for (i = 0; i < r->count; i++) {
            UINT64 samples = 0;
            HRESULT hr = ID3D11DeviceContext_GetData(ctx,
                (ID3D11Asynchronous *)r->segments[i].query, &samples, sizeof samples,
                D3D11_ASYNC_GETDATA_DONOTFLUSH);
            if (FAILED(hr)) { v->device_error = hr; return; }
            if (hr != S_OK) return; /* pending: one poll, no wait or forced flush */
            pixels += (double)samples / r->segments[i].pixel_scale;
        }
        complete(opaque, r->address, r->stamp,
                 pixels >= 4294967295.0 ? 0xFFFFFFFFu : (uint32_t)(pixels + 0.5));
        v->first = r->next;
        if (!v->first) v->last = NULL;
        for (i = 0; i < r->count; i++) ID3D11Query_Release(r->segments[i].query);
        free(r);
    }
}
static void nv_hw_vis_destroy(NvHwVisibility *v, ID3D11DeviceContext *ctx)
{
    NvHwVisReport *r;
    nv_hw_vis_clear(v, ctx);
    while ((r = v->first) != NULL) {
        uint32_t i;
        v->first = r->next;
        for (i = 0; i < r->count; i++) ID3D11Query_Release(r->segments[i].query);
        free(r);
    }
    free(v->segments);
    memset(v, 0, sizeof *v);
}
