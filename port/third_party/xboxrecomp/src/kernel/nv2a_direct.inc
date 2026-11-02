/* RE-SoT: the direct path's records. Contract and reasons in nv2a_direct.h. */
#define NV_DIRECT_SLOTS 16384
#define NV_DIRECT_BUCKETS 8192

typedef struct NvDirectRecord {
    struct NvDirectRecord *next;   /* bucket, or the dead list */
    uint32_t va, slot;
    uint16_t *indices;
    NvDirectDraw draw;
    volatile long pending;
} NvDirectRecord;

NvDirectDraw *g_nv2a_direct_draw;
void nv2a_pb_exec_method(uint32_t subch, uint32_t method, uint32_t param);
static CRITICAL_SECTION s_direct_lock;
static NvDirectRecord *s_direct_bucket[NV_DIRECT_BUCKETS], *s_direct_dead;
static NvDirectRecord *volatile s_direct_slot[NV_DIRECT_SLOTS];
static uint32_t s_direct_free[NV_DIRECT_SLOTS], s_direct_free_count;
static int s_direct_modeval = -1;
static uint64_t s_direct_tokens, s_direct_words, s_direct_draws, s_direct_indices;
static uint64_t s_direct_records, s_direct_changed, s_direct_full, s_direct_long;
static uint64_t s_direct_compared;
extern void nv2a_pb_dump_recent(const char *why);
#define NV_DIRECT_UP_SLOTS 65536 /* more than the ring can hold tokens */
/* RE-SoT: slots are taken by the title thread and returned by the executor, in
 * whatever order, through a ring of free token numbers with one writer at each end:
 * no lock. Most slots are a few dozen words (vertex state 34, combiner 58): those live
 * in the slot itself; only longer ones are allocated. A malloc and a lock per token
 * were about 2% of the title thread's samples (RESOT_PROFILE_MS, retail, 2026-11-02). */
#define NV_DIRECT_UP_INLINE 64
static struct { uint32_t prim, words; uint32_t *data; uint32_t inline_words[NV_DIRECT_UP_INLINE]; } s_direct_up[NV_DIRECT_UP_SLOTS];
static uint32_t s_direct_up_free[NV_DIRECT_UP_SLOTS];
static volatile LONG s_direct_up_head, s_direct_up_tail;   /* title takes at head, executor returns at tail */
static uint32_t s_direct_array_prim;

/* RE-SoT: pushbuffers D3D copies into the ring whole (NV097_RESOT_DIRECT_PUSHBUFFER).
 * Retail Vulkan, heavy scene, 2026-11-02: about two thirds of all draws came that way,
 * as index packets the executor decoded and whose vertices it converted again on every
 * frame. A record is the buffer's words, split into runs of packets and draws; it lives
 * until the title's words differ, then dies as an index record does (direct_reap). */
#define NV_DIRECT_PB_SLOTS 4096
#define NV_DIRECT_PB_BUCKETS 2048
#define NV_DIRECT_PB_MAX_WORDS (1u << 20)
typedef struct { uint32_t at, end; int32_t draw; } NvDirectPbRun;   /* draw < 0: packets [at, end) */
typedef struct { NvDirectDraw draw; uint16_t *indices; } NvDirectPbDraw;
typedef struct NvDirectPb {
    struct NvDirectPb *next;
    uint32_t va, words, slot, nruns, ndraws;
    uint32_t *data;
    NvDirectPbRun *runs;
    NvDirectPbDraw *draws;
    volatile long pending;
} NvDirectPb;
static NvDirectPb *s_direct_pb_bucket[NV_DIRECT_PB_BUCKETS], *s_direct_pb_dead;
static NvDirectPb *volatile s_direct_pb_slot[NV_DIRECT_PB_SLOTS];
static uint32_t s_direct_pb_free[NV_DIRECT_PB_SLOTS], s_direct_pb_free_count;
static uint64_t s_direct_pb_runs, s_direct_pb_records, s_direct_pb_changed, s_direct_pb_refused;
static uint64_t s_direct_pb_full, s_direct_pb_draws;
static uint64_t s_direct_arrays, s_direct_ups, s_direct_up_words, s_direct_up_refused;

int nv2a_direct_mode(void)
{
    static volatile long claimed;
    if (s_direct_modeval < 0) {
        /* The title's first draw and the executor's encoder start can meet here. */
        if (!InterlockedCompareExchange(&claimed, 1, 0)) {
            const char *e = getenv("RESOT_DIRECT_DRAW");
            InitializeCriticalSection(&s_direct_lock);
            for (uint32_t i = 1; i < NV_DIRECT_SLOTS; i++) s_direct_free[s_direct_free_count++] = NV_DIRECT_SLOTS - i;
            for (uint32_t i = 0; i < NV_DIRECT_UP_SLOTS; i++) s_direct_up_free[i] = i;
            for (uint32_t i = 1; i < NV_DIRECT_PB_SLOTS; i++) s_direct_pb_free[s_direct_pb_free_count++] = NV_DIRECT_PB_SLOTS - i;
            s_direct_up_tail = NV_DIRECT_UP_SLOTS;
            /* RE-SoT: on by default on every renderer and host since 2026-11-02, at
             * the user's request, after the demo and retail were played with it
             * (D3D12). RESOT_DIRECT_DRAW=0 returns to the NV2A ring. */
            s_direct_modeval = e ? atoi(e) : 1;
            fprintf(stderr, "[DIRECT] mode %d (%s)\n", s_direct_modeval, e ? "RESOT_DIRECT_DRAW" : "default");
        }
        while (s_direct_modeval < 0) Sleep(0);
    }
    return s_direct_modeval;
}

/* Every live record goes to the dead list; the ones still in use are found again
 * as new records. Keeps the tables bounded across levels. */
static void direct_drop_all(void)
{
    for (uint32_t b = 0; b < NV_DIRECT_BUCKETS; b++) {
        while (s_direct_bucket[b]) {
            NvDirectRecord *r = s_direct_bucket[b];
            s_direct_bucket[b] = r->next;
            r->next = s_direct_dead; s_direct_dead = r;
        }
    }
}

uint32_t nv2a_direct_prepare(uint32_t prim, uint32_t count, uint32_t indices_va)
{
    const uint8_t *mem = (const uint8_t *)xbox_GetMemoryOffset();
    const uint16_t *guest = (const uint16_t *)(mem + indices_va);
    NvDirectRecord *r, **p;
    uint32_t token;
    if (!nv2a_direct_mode()) return 0;
    if (!count || count > NV_MAX_INDICES) { s_direct_long++; return 0; }
    EnterCriticalSection(&s_direct_lock);
    p = &s_direct_bucket[((indices_va >> 1) ^ (count * 2654435761u)) % NV_DIRECT_BUCKETS];
    while (*p && ((*p)->va != indices_va || (*p)->draw.count != count || (*p)->draw.prim != prim)) p = &(*p)->next;
    r = *p;
    if (r && memcmp(r->indices, guest, (size_t)count * 2)) {
        *p = r->next;
        r->next = s_direct_dead; s_direct_dead = r;
        s_direct_changed++;
        r = NULL;
    }
    if (!r) {
        uint32_t lo = 65535, hi = 0;
        if (!s_direct_free_count) {
            /* Slots return when the executor reaps, at its next flip. */
            direct_drop_all();
            s_direct_full++;
            LeaveCriticalSection(&s_direct_lock);
            return 0;
        }
        r = (NvDirectRecord *)calloc(1, sizeof *r);
        r->indices = (uint16_t *)malloc((size_t)count * 2);
        memcpy(r->indices, guest, (size_t)count * 2);
        for (uint32_t i = 0; i < count; i++) {
            if (r->indices[i] < lo) lo = r->indices[i];
            if (r->indices[i] > hi) hi = r->indices[i];
        }
        r->va = indices_va;
        r->draw.prim = prim; r->draw.count = count;
        r->draw.lo = (uint16_t)lo; r->draw.hi = (uint16_t)hi;
        r->slot = s_direct_free[--s_direct_free_count];
        s_direct_slot[r->slot] = r;
        r->next = s_direct_bucket[((indices_va >> 1) ^ (count * 2654435761u)) % NV_DIRECT_BUCKETS];
        s_direct_bucket[((indices_va >> 1) ^ (count * 2654435761u)) % NV_DIRECT_BUCKETS] = r;
        s_direct_records++;
    }
    InterlockedIncrement(&r->pending);
    token = r->slot;
    s_direct_tokens++;
    s_direct_compared += count;
    /* The packets 0x002A2A53.. would have written, less the token's two words. */
    s_direct_words += (count + 1) / 2 + count / 1022 + 4;
    LeaveCriticalSection(&s_direct_lock);
    return token;
}

/* RE-SoT: how far the title may run ahead, in frames. Retail Vulkan, heavy scene,
 * 2026-11-02, KickOff 32 submissions ahead: 145 fps instead of about 100, but after
 * some minutes most of the level drew black, while the light probes' zero results rose
 * from 24% to 42% of reports: the title reads a query's report a fixed number of
 * frames after issuing it, and about two frames ahead it read them unfinished. The
 * KickOff limit counts submissions (about 17 a frame there), so it cannot say
 * frames; this does. The title may compute the next frame while the executor draws
 * this one, as it did with 8 submissions, but not flip again before the executor
 * has executed its previous flip. */
static volatile LONG s_direct_flips_issued, s_direct_flips_done;
static HANDLE s_direct_flip_ev;
static uint64_t s_direct_flip_waits, s_direct_flip_timeouts;
static int s_direct_flip_ahead = -1;
static void direct_flip_init(void)
{
    const char *e = getenv("RESOT_FLIP_AHEAD");
    if (!s_direct_flip_ev) s_direct_flip_ev = CreateEventA(NULL, FALSE, FALSE, NULL);
    /* RE-SoT: 2 since 2026-11-02 (night). With 1 the title waited at most flips
     * and title and executor alternated: empty view about 400 fps against 780,
     * heavy scene about 84 against 145. With 2 (user, Vulkan, retail, about 33,000
     * flips): about 700 and 143 fps, no black level seen, the title never waited.
     * The black level appeared between flips 40,000 and 54,000 with no limit, so
     * a longer session at 2 is still to be seen. */
    s_direct_flip_ahead = e ? atoi(e) : 2;
    if (s_direct_flip_ahead < 0) s_direct_flip_ahead = 0;
    fprintf(stderr, "[DIRECT] flips ahead of the executor: at most %d%s\n",
        s_direct_flip_ahead, s_direct_flip_ahead ? "" : " (no limit)");
}
/* Title thread: whether nv2a_direct_flip_wait would wait. The title then kicks
 * first, so that the commands up to its previous flip reach the executor: without
 * that kick the flip waited for was often still unsubmitted, and the title sat out
 * the 100 ms timeout on most frames (8 fps, 2026-11-02). */
int nv2a_direct_flip_behind(void)
{
    if (s_direct_flip_ahead < 0) direct_flip_init();
    return s_direct_flip_ahead > 0 && s_direct_flips_issued - s_direct_flips_done >= s_direct_flip_ahead;
}
/* Only while the executor still has submitted work: an idle executor has executed
 * everything it was given, so it is not behind, and the flip waited for was never
 * submitted (D3D can hold it back, e.g. KickOff's 0x2000 branch, which writes no
 * DMA_PUT). Waiting for it then only ran into the timeout: 8 fps after some minutes,
 * even with the kick in sub_0036C840 (2026-11-02). */
void nv2a_direct_flip_wait(void)
{
    extern int xbox_Nv2aExecutorIdle(void);
    if (s_direct_flip_ahead < 0) direct_flip_init();
    if (nv2a_direct_flip_behind() && !xbox_Nv2aExecutorIdle()) {
        DWORD start = GetTickCount();
        s_direct_flip_waits++;
        while (nv2a_direct_flip_behind() && !xbox_Nv2aExecutorIdle()) {
            if (GetTickCount() - start > 100) { s_direct_flip_timeouts++; break; }
            if (s_direct_flip_ev) WaitForSingleObject(s_direct_flip_ev, 1);
            else Sleep(0);
        }
    }
    InterlockedIncrement(&s_direct_flips_issued);
}
/* Executor thread, at a flip token. */
static void direct_flip_done(void)
{
    InterlockedIncrement(&s_direct_flips_done);
    if (s_direct_flip_ev) SetEvent(s_direct_flip_ev);
}

static void direct_pb_free(NvDirectPb *r)
{
    for (uint32_t i = 0; i < r->ndraws; i++) {
        s_direct_source_bytes -= r->draws[i].draw.resident.bytes;
        free(r->draws[i].draw.resident.source);
        free(r->draws[i].indices);
    }
    free(r->draws); free(r->runs); free(r->data); free(r);
}

/* Title thread. The words as packets: only plain method headers (no JUMP, CALL or
 * RETURN), each wholly inside the buffer. A draw is a one-method SET_BEGIN_END with a
 * primitive, then only ARRAY_ELEMENT16 (non-incrementing or single) and ARRAY_ELEMENT32
 * (single) packets, then a one-method SET_BEGIN_END 0, all on subchannel 0, with 1 to
 * NV_MAX_INDICES indices: exactly what the executor's BEGIN, element and END cases turn
 * into a draw_primitive. Anything else stays packets. NULL: not plain packets. */
static NvDirectPb *direct_pb_parse(const uint32_t *w, uint32_t n)
{
    NvDirectPb *r;
    uint32_t at, start = 0, draws = 0, packets = 0;
    for (at = 0; at < n; ) {
        uint32_t h = w[at], count = (h >> 18) & 0x7FFu;
        if ((h & 0x00030003u) || ((h & 0xE0000000u) && (h & 0xE0000000u) != 0x40000000u) || at + 1 + count > n)
            return NULL;
        at += 1 + count;
        packets++;
    }
    r = (NvDirectPb *)calloc(1, sizeof *r);
    if (!r) return NULL;
    r->data = (uint32_t *)malloc((size_t)n * 4);
    r->runs = (NvDirectPbRun *)malloc((size_t)(packets + 1) * sizeof *r->runs);
    r->draws = (NvDirectPbDraw *)calloc(packets / 2 + 1, sizeof *r->draws);
    if (!r->data || !r->runs || !r->draws) { direct_pb_free(r); return NULL; }
    memcpy(r->data, w, (size_t)n * 4);
    r->words = n;
    for (at = 0; at < n; ) {
        uint32_t h = w[at], count = (h >> 18) & 0x7FFu, q, indices = 0;
        if (h == 0x000417FCu && w[at + 1]) {
            for (q = at + 2; q < n; ) {
                uint32_t e = w[q], c = (e >> 18) & 0x7FFu;
                int noninc = (e & 0xE0000000u) == 0x40000000u;
                if (((e & 0x1FFCu) == 0x1800u && !(e & 0xE000u) && (noninc || c == 1)))
                    indices += 2 * c;
                else if (e == 0x00041808u)
                    indices += 1;
                else
                    break;
                q += 1 + c;
            }
            if (q + 1 < n && w[q] == 0x000417FCu && !w[q + 1] && indices && indices <= NV_MAX_INDICES) {
                NvDirectPbDraw *d = &r->draws[draws];
                uint32_t k = 0, lo = 65535, hi = 0;
                d->indices = (uint16_t *)malloc((size_t)indices * 2);
                if (!d->indices) { r->ndraws = draws; direct_pb_free(r); return NULL; }
                for (uint32_t p = at + 2; p < q; ) {
                    uint32_t e = w[p], c = (e >> 18) & 0x7FFu;
                    for (uint32_t i = 1; i <= c; i++) {
                        if ((e & 0x1FFCu) == 0x1800u) {
                            d->indices[k++] = (uint16_t)(w[p + i] & 0xFFFF);
                            d->indices[k++] = (uint16_t)(w[p + i] >> 16);
                        } else d->indices[k++] = (uint16_t)(w[p + i] & 0xFFFF);
                    }
                    p += 1 + c;
                }
                for (uint32_t i = 0; i < k; i++) {
                    if (d->indices[i] < lo) lo = d->indices[i];
                    if (d->indices[i] > hi) hi = d->indices[i];
                }
                d->draw.prim = w[at + 1]; d->draw.count = k;
                d->draw.lo = (uint16_t)lo; d->draw.hi = (uint16_t)hi;
                if (at > start) r->runs[r->nruns++] = (NvDirectPbRun){start, at, -1};
                r->runs[r->nruns++] = (NvDirectPbRun){at, q + 2, (int32_t)draws};
                draws++;
                at = start = q + 2;
                continue;
            }
        }
        at += 1 + count;
    }
    if (n > start) r->runs[r->nruns++] = (NvDirectPbRun){start, n, -1};
    r->ndraws = draws;
    return r;
}

uint32_t nv2a_direct_pushbuffer(uint32_t va, uint32_t words)
{
    const uint32_t *guest = (const uint32_t *)((const uint8_t *)xbox_GetMemoryOffset() + va);
    uint32_t b = ((va >> 2) ^ (words * 2654435761u)) % NV_DIRECT_PB_BUCKETS;
    NvDirectPb *r, **p;
    if (nv2a_direct_mode() <= 0 || !words || words > NV_DIRECT_PB_MAX_WORDS) return 0;
    EnterCriticalSection(&s_direct_lock);
    for (p = &s_direct_pb_bucket[b]; *p && ((*p)->va != va || (*p)->words != words); p = &(*p)->next) {}
    r = *p;
    if (r && memcmp(r->data, guest, (size_t)words * 4)) {
        *p = r->next;
        r->next = s_direct_pb_dead; s_direct_pb_dead = r;
        s_direct_pb_changed++;
        r = NULL;
    }
    if (!r) {
        if (!s_direct_pb_free_count) {
            /* Slots return when the executor reaps, at its next flip. */
            for (uint32_t i = 0; i < NV_DIRECT_PB_BUCKETS; i++)
                while (s_direct_pb_bucket[i]) {
                    NvDirectPb *d = s_direct_pb_bucket[i];
                    s_direct_pb_bucket[i] = d->next;
                    d->next = s_direct_pb_dead; s_direct_pb_dead = d;
                }
            s_direct_pb_full++;
            LeaveCriticalSection(&s_direct_lock);
            return 0;
        }
        if (!(r = direct_pb_parse(guest, words))) {
            s_direct_pb_refused++;
            LeaveCriticalSection(&s_direct_lock);
            return 0;
        }
        r->va = va;
        r->slot = s_direct_pb_free[--s_direct_pb_free_count];
        s_direct_pb_slot[r->slot] = r;
        r->next = s_direct_pb_bucket[b]; s_direct_pb_bucket[b] = r;
        s_direct_pb_records++;
    }
    InterlockedIncrement(&r->pending);
    s_direct_pb_runs++;
    LeaveCriticalSection(&s_direct_lock);
    return r->slot;
}

uint32_t *nv2a_direct_up_begin(uint32_t prim, uint32_t words, uint32_t *token)
{
    uint32_t *data, t;
    LONG head;
    if (!words || words > NV_MAX_INLINE) { s_direct_up_refused++; return NULL; }
    /* One title thread in practice; the exchange keeps a second D3D caller safe. */
    do {
        head = s_direct_up_head;
        if (s_direct_up_tail == head) { s_direct_up_refused++; return NULL; }
        MemoryBarrier();                 /* the entry the executor wrote before moving tail */
        t = s_direct_up_free[(uint32_t)head % NV_DIRECT_UP_SLOTS];
    } while (InterlockedCompareExchange(&s_direct_up_head, head + 1, head) != head);
    data = words <= NV_DIRECT_UP_INLINE ? s_direct_up[t].inline_words : (uint32_t *)malloc((size_t)words * 4);
    if (!data) { s_direct_up_refused++; return NULL; }   /* out of memory: the slot is lost */
    s_direct_up[t].prim = prim;
    s_direct_up[t].words = words;
    s_direct_up[t].data = data;
    *token = t;
    return data;
}

void nv2a_direct_up_trim(uint32_t token, uint32_t words)
{
    s_direct_up[token].words = words;   /* before its token is written */
}

/* Executor thread: the slot goes back to the title. */
static void direct_slot_free(uint32_t token, uint32_t *data)
{
    s_direct_up[token].data = NULL;
    if (data != s_direct_up[token].inline_words) free(data);
    s_direct_up_free[(uint32_t)s_direct_up_tail % NV_DIRECT_UP_SLOTS] = token;
    MemoryBarrier();
    InterlockedExchange(&s_direct_up_tail, s_direct_up_tail + 1);
}

/* Executor thread, between frames. A dead record with no token pending can no
 * longer be reached: its token is the only way to it. */
static void direct_reap(void)
{
    NvDirectRecord **p;
    EnterCriticalSection(&s_direct_lock);
    p = &s_direct_dead;
    while (*p) {
        NvDirectRecord *r = *p;
        if (r->pending) { p = &r->next; continue; }
        *p = r->next;
        s_direct_slot[r->slot] = NULL;
        s_direct_free[s_direct_free_count++] = r->slot;
        s_direct_source_bytes -= r->draw.resident.bytes;
        free(r->draw.resident.source);
        free(r->indices); free(r);
    }
    {
        NvDirectPb **q = &s_direct_pb_dead;
        while (*q) {
            NvDirectPb *r = *q;
            if (r->pending) { q = &r->next; continue; }
            *q = r->next;
            s_direct_pb_slot[r->slot] = NULL;
            s_direct_pb_free[s_direct_pb_free_count++] = r->slot;
            direct_pb_free(r);
        }
    }
    LeaveCriticalSection(&s_direct_lock);
}

/* Executor thread: what the copied words would have done. A draw is the BEGIN, element
 * and END cases of nv2a_pb_exec_method run as one, as direct_execute runs an index
 * record, so the native encoder keeps the draw's resident geometry across frames. */
static void direct_execute_pushbuffer(uint32_t token)
{
    NvDirectPb *r = token < NV_DIRECT_PB_SLOTS ? s_direct_pb_slot[token] : NULL;
    if (!r) {
        static unsigned told;
        nv2a_pb_dump_recent("unknown pushbuffer token");
        if (told++ < 8) fprintf(stderr, "[DIRECT] unknown pushbuffer token %u\n", token);
        return;
    }
    for (uint32_t k = 0; k < r->nruns; k++) {
        const NvDirectPbRun *run = &r->runs[k];
        if (run->draw < 0) {
            for (uint32_t at = run->at; at < run->end; ) {
                uint32_t w = r->data[at++], count = (w >> 18) & 0x7FFu;
                int noninc = (w & 0xE0000000u) == 0x40000000u;
                for (uint32_t i = 0; i < count && at < run->end; i++)
                    nv2a_pb_exec_method((w >> 13) & 7u, noninc ? (w & 0x1FFCu) : (w & 0x1FFCu) + i * 4, r->data[at++]);
            }
        } else {
            NvDirectPbDraw *d = &r->draws[run->draw];
            s_gpu.prim = d->draw.prim;
            s_gpu.inline_count = 0; s_gpu.imm_count = 0;
            memcpy(s_gpu.idx, d->indices, (size_t)d->draw.count * sizeof s_gpu.idx[0]);
            s_gpu.idx_count = d->draw.count;
            g_nv2a_direct_draw = &d->draw;
            draw_primitive();
            g_nv2a_direct_draw = NULL;
            s_gpu.prim = 0;
            s_gpu.inline_count = 0; s_gpu.imm_count = 0;
            s_direct_pb_draws++;
        }
    }
    InterlockedDecrement(&r->pending);
}

/* Executor thread: what walking the list would have ended in. draw_primitive
 * keeps every policy that applies to a pushbuffer draw. */
static void direct_execute(uint32_t token)
{
    NvDirectRecord *r = token < NV_DIRECT_SLOTS ? s_direct_slot[token] : NULL;
    NvDirectDraw *d;
    if (!r) {
        static unsigned told;
        nv2a_pb_dump_recent("unknown token");
        if (told++ < 8) fprintf(stderr, "[DIRECT] unknown token %u\n", token);
        return;
    }
    d = &r->draw;
    s_gpu.prim = d->prim;
    s_gpu.idx_count = d->count;
    s_gpu.inline_count = 0; s_gpu.imm_count = 0;
    memcpy(s_gpu.idx, r->indices, (size_t)d->count * sizeof s_gpu.idx[0]);
    g_nv2a_direct_draw = d;
    draw_primitive();
    g_nv2a_direct_draw = NULL;
    s_direct_draws++; s_direct_indices += d->count;
    s_gpu.prim = 0;
    InterlockedDecrement(&r->pending);
}

/* Executor thread: what BEGIN, DRAW_ARRAYS.. and END would have ended in. */
static void direct_execute_arrays(uint32_t start_count)
{
    uint32_t start = start_count >> 16, count = start_count & 0xFFFFu;
    for (uint32_t i = 0; i < count; i++) s_gpu.idx[i] = (uint16_t)(start + i);
    s_gpu.prim = s_direct_array_prim;
    s_gpu.idx_count = count;
    s_gpu.inline_count = 0; s_gpu.imm_count = 0;
    draw_primitive();
    s_direct_arrays++;
    s_gpu.prim = 0;
}

/* Executor thread: what BEGIN, INLINE_ARRAY.. and END would have ended in. */
static void direct_execute_up(uint32_t token)
{
    uint32_t *data;
    if (token >= NV_DIRECT_UP_SLOTS || !s_direct_up[token].data) {
        static unsigned told;
        nv2a_pb_dump_recent("unknown UP token");
        if (told++ < 8) fprintf(stderr, "[DIRECT] unknown UP token %u\n", token);
        return;
    }
    data = s_direct_up[token].data;
    s_gpu.prim = s_direct_up[token].prim;
    s_gpu.idx_count = 0; s_gpu.imm_count = 0;
    s_gpu.inline_count = s_direct_up[token].words;
    memcpy(s_gpu.inline_buf, data, (size_t)s_gpu.inline_count * 4);
    s_direct_ups++; s_direct_up_words += s_gpu.inline_count;
    draw_inline_array();
    s_gpu.prim = 0; s_gpu.inline_count = 0;
    direct_slot_free(token, data);
}

/* Executor thread: VERTEX_DATA_ARRAY_FORMAT and _OFFSET. Word 0 is 1 if formats are
 * set, 1..16 the formats, 17 a mask of offsets set, 18..33 the offsets. */
static void direct_execute_vertex_state(uint32_t token)
{
    uint32_t *data;
    if (token >= NV_DIRECT_UP_SLOTS || !s_direct_up[token].data) {
        nv2a_pb_dump_recent("unknown vertex state token");
        return;
    }
    data = s_direct_up[token].data;
    for (uint32_t i = 0; i < NV_VERTEX_ATTRS; i++) {
        if (data[0]) {
            VertexAttr *a = &s_gpu.attr[i];
            a->type = data[1 + i] & 0x0F;
            a->size = (data[1 + i] >> 4) & 0x0F;
            a->stride = (data[1 + i] >> 8) & 0xFF;
        }
        if (data[17] >> i & 1) s_gpu.attr[i].offset = dma_resolve(data[18 + i]);
    }
    direct_slot_free(token, data);
}

/* Executor thread: see NV097_RESOT_DIRECT_PACKETS. Only ever holds what the capture
 * accepted, packets on subchannels the routine wrote, with no JUMP or CALL. */
static void direct_execute_packets(uint32_t token)
{
    uint32_t *data, words;
    if (token >= NV_DIRECT_UP_SLOTS || !s_direct_up[token].data) {
        nv2a_pb_dump_recent("unknown packets token");
        return;
    }
    data = s_direct_up[token].data;
    words = s_direct_up[token].words;
    for (uint32_t at = 0; at < words; ) {
        uint32_t w = data[at++], count = (w >> 18) & 0x7FFu;
        int noninc = (w & 0xE0000000u) == 0x40000000u;
        for (uint32_t i = 0; i < count && at < words; i++)
            nv2a_pb_exec_method((w >> 13) & 7u, noninc ? (w & 0x1FFCu) : (w & 0x1FFCu) + i * 4, data[at++]);
    }
    direct_slot_free(token, data);
}

#define DIRECT_SLOT(what) \
    if (token >= NV_DIRECT_UP_SLOTS || !s_direct_up[token].data) { \
        nv2a_pb_dump_recent("unknown " what " token"); \
        return; \
    } \
    data = s_direct_up[token].data

/* Executor thread: a combiner program object as 0x002A2693..0x002A2752 sends it. Word 0
 * is 1 if the final combiner applies, then the object's first 0x39 words. */
static void direct_execute_combiner(uint32_t token)
{
    uint32_t *data, *p;
    DIRECT_SLOT("combiner");
    p = data + 1;
    for (uint32_t i = 0; i < 8; i++) {
        s_gpu.rc.alpha_icw[i] = p[i];
        s_gpu.rc.factor0[i] = p[10 + i];
        s_gpu.rc.factor1[i] = p[18 + i];
        s_gpu.rc.alpha_ocw[i] = p[26 + i];
        s_gpu.rc.color_icw[i] = p[34 + i];
        s_gpu.rc.color_ocw[i] = p[45 + i];
    }
    if (data[0]) { s_gpu.rc.final0 = p[8]; s_gpu.rc.final1 = p[9]; }
    s_gpu.clip_plane_mode = p[42];
    s_gpu.rc.final_c0 = p[43];
    s_gpu.rc.final_c1 = p[44];
    s_gpu.rc.control = p[53];
    s_gpu.rc_seen = 1;
    direct_slot_free(token, data);
}

/* Executor thread: bump-environment words of stages 1 to 3 (0x0029B9B6..0x0029B9F3). */
static void direct_execute_bump(uint32_t token)
{
    uint32_t *data;
    DIRECT_SLOT("bump");
    for (uint32_t s = 0; s < 3; s++)
        for (uint32_t i = 0; i < 6; i++)
            tex_stage_method(0x1B68 + s * 0x40 + i * 4, data[s * 6 + i]);
    direct_slot_free(token, data);
}

/* Executor thread: one immediate call: first method, then its values. */
static void direct_execute_immediate(uint32_t token)
{
    uint32_t *data;
    DIRECT_SLOT("immediate");
    for (uint32_t i = 1; i < s_direct_up[token].words; i++)
        imm_vertex_method(data[0] + (i - 1) * 4, data[i]);
    direct_slot_free(token, data);
}

/* Executor thread: SURFACE_CLIP_HORIZONTAL and _VERTICAL. */
static void direct_execute_clip(uint32_t token)
{
    uint32_t *data;
    DIRECT_SLOT("clip");
    s_gpu.clip_x = data[0] & 0xFFFFu; s_gpu.clip_w = data[0] >> 16;
    s_gpu.clip_y = data[1] & 0xFFFFu; s_gpu.clip_h = data[1] >> 16;
    direct_slot_free(token, data);
}

/* Executor thread: one clear: rectangle, values and mask. The clear itself keeps the
 * executor's one implementation, under its method number. */
static void direct_execute_clear(uint32_t token)
{
    uint32_t *data;
    DIRECT_SLOT("clear");
    nv2a_pb_exec_method(0, 0x1D98, data[0]);
    nv2a_pb_exec_method(0, 0x1D9C, data[1]);
    s_gpu.zstencil_clear = data[2];
    s_gpu.clear_color = data[3];
    nv2a_pb_exec_method(0, NV097_CLEAR_SURFACE, data[4]);
    direct_slot_free(token, data);
}

/* Executor thread: TRANSFORM_CONSTANT_LOAD, then the words as the batched path takes them. */
static void direct_execute_constants(uint32_t token)
{
    uint32_t *data;
    DIRECT_SLOT("constants");
    nv2a_vsh_set_constant_load(data[0]);
    nv2a_vsh_constant_words(data + 1, s_direct_up[token].words - 1);
    direct_slot_free(token, data);
}

/* Executor thread: load slot, then the program's words. */
static void direct_execute_program(uint32_t token)
{
    uint32_t *data;
    DIRECT_SLOT("program");
    nv2a_vsh_set_load_slot(data[0]);
    nv2a_vsh_program_words(data + 1, s_direct_up[token].words - 1);
    direct_slot_free(token, data);
}

/* Executor thread: the viewport lives in the constant file, c[59] offset, c[58] scale. */
static void direct_execute_viewport(uint32_t token)
{
    uint32_t *data;
    DIRECT_SLOT("viewport");
    for (uint32_t i = 0; i < 4; i++) {
        nv2a_vsh_constant_component(59, i, data[1 + i]);
        if (data[0]) nv2a_vsh_constant_component(58, i, data[5 + i]);
    }
    direct_slot_free(token, data);
}

/* Executor thread: see NV097_RESOT_DIRECT_FIXED_COMBINER. */
static void direct_execute_fixed_combiner(uint32_t token)
{
    uint32_t *data;
    DIRECT_SLOT("fixed combiner");
    s_gpu.rc.control = data[0];
    s_gpu.rc_seen = 1;
    for (uint32_t i = 0; i < 8; i++) {
        s_gpu.rc.color_icw[i] = data[1 + i];
        s_gpu.rc.color_ocw[i] = data[9 + i];
        s_gpu.rc.alpha_icw[i] = data[17 + i];
        s_gpu.rc.alpha_ocw[i] = data[25 + i];
    }
    direct_slot_free(token, data);
}

/* Executor thread: the stage's registers 0x08, 0x0C and 0x14. */
static void direct_execute_texture(uint32_t token)
{
    uint32_t *data, base;
    if (token >= NV_DIRECT_UP_SLOTS || !s_direct_up[token].data) {
        nv2a_pb_dump_recent("unknown texture token");
        return;
    }
    data = s_direct_up[token].data;
    base = NV_TEX_FIRST + data[0] * 0x40;
    tex_stage_method(base + 0x08, data[1]);
    tex_stage_method(base + 0x0C, data[2]);
    tex_stage_method(base + 0x14, data[3]);
    direct_slot_free(token, data);
}

/* Executor thread: the fields SURFACE_PITCH, COLOR_OFFSET, ZETA_OFFSET and
 * DEPTH_TEST_ENABLE would have set. Slots are shared with UP. */
static void direct_execute_surface(uint32_t token)
{
    uint32_t *data;
    if (token >= NV_DIRECT_UP_SLOTS || !s_direct_up[token].data) {
        nv2a_pb_dump_recent("unknown surface token");
        return;
    }
    data = s_direct_up[token].data;
    s_gpu.pitch = data[0] & 0xFFFFu;
    if (s_ftrace == 2)
        fprintf(stderr, "[FTRACE] color offset -> %08X%c", data[1], 10);
    s_gpu.color_offset = data[1];
    s_gpu.zeta_offset = data[2];
    s_gpu.depth_test = data[3];
    direct_slot_free(token, data);
}

/* Executor thread: the fog fields FOG_ENABLE, FOG_MODE and FOG_PARAM would have set.
 * Disabling writes only the enable, as 0x002A1471 does. Slots are shared with UP. */
static void direct_execute_fog(uint32_t token)
{
    uint32_t *data;
    if (token >= NV_DIRECT_UP_SLOTS || !s_direct_up[token].data) {
        nv2a_pb_dump_recent("unknown fog token");
        return;
    }
    data = s_direct_up[token].data;
    s_gpu.fog_enable = data[0];
    if (data[0]) {
        s_gpu.fog_mode = data[1];
        memcpy(&s_gpu.fog_param[0], &data[2], 4);
        memcpy(&s_gpu.fog_param[1], &data[3], 4);
    }
    direct_slot_free(token, data);
}

/* RESOT_FRAME_LOG=<file>: one line per guest flip, milliseconds since the last,
 * for percentiles. Written in blocks so that it does not disturb what it times. */
static void direct_frame_log(void)
{
    static const char *path = (const char *)-1;
    static FILE *file;
    static LARGE_INTEGER last, frequency;
    static char block[65536];
    static uint32_t used;
    LARGE_INTEGER now;
    if (path == (const char *)-1) {
        path = getenv("RESOT_FRAME_LOG");
        if (path) file = fopen(path, "w");
        QueryPerformanceFrequency(&frequency);
    }
    if (!file) return;
    QueryPerformanceCounter(&now);
    if (last.QuadPart) {
        used += (uint32_t)snprintf(block + used, 32, "%.3f\n",
            1000.0 * (double)(now.QuadPart - last.QuadPart) / (double)frequency.QuadPart);
        if (used > 4096) { fwrite(block, 1, used, file); fflush(file); used = 0; }
    }
    last = now;
}

/* Executor thread, at each guest flip. */
static void direct_flip(void)
{
    static LARGE_INTEGER last, frequency;
    LARGE_INTEGER now;
    direct_frame_log();
    if (nv2a_direct_mode() <= 0) return;
    direct_reap();
    if (!frequency.QuadPart) QueryPerformanceFrequency(&frequency);
    QueryPerformanceCounter(&now);
    if (now.QuadPart - last.QuadPart < 5 * frequency.QuadPart) return;
    last = now;
    fprintf(stderr, "[DIRECT] %llu tokens, %llu ring words avoided, %llu draws, %llu indices; "
        "%llu records, %llu lists changed, %llu table full, %llu refused\n",
        (unsigned long long)s_direct_tokens, (unsigned long long)s_direct_words,
        (unsigned long long)s_direct_draws, (unsigned long long)s_direct_indices,
        (unsigned long long)s_direct_records, (unsigned long long)s_direct_changed,
        (unsigned long long)s_direct_full, (unsigned long long)s_direct_long);
    fprintf(stderr, "[DRAWS] by path: direct indexed %llu, pushbuffer %llu, user-pointer %llu; Begin/End token "
        "immediate %llu inline %llu indexed %llu; ring immediate %llu inline %llu indexed %llu\n",
        (unsigned long long)s_direct_draws, (unsigned long long)s_direct_pb_draws, (unsigned long long)s_direct_ups,
        (unsigned long long)s_draw_path[0][0], (unsigned long long)s_draw_path[0][1],
        (unsigned long long)s_draw_path[0][2], (unsigned long long)s_draw_path[1][0],
        (unsigned long long)s_draw_path[1][1], (unsigned long long)s_draw_path[1][2]);
    fprintf(stderr, "[DIRECT] flips: %ld issued, %ld executed; title waited %llu times, %llu after 100 ms\n",
        (long)s_direct_flips_issued, (long)s_direct_flips_done,
        (unsigned long long)s_direct_flip_waits, (unsigned long long)s_direct_flip_timeouts);
    fprintf(stderr, "[DIRECT] pushbuffers: %llu runs, %llu draws, %llu records, %llu changed, "
        "%llu not plain packets, %llu table full\n",
        (unsigned long long)s_direct_pb_runs, (unsigned long long)s_direct_pb_draws,
        (unsigned long long)s_direct_pb_records, (unsigned long long)s_direct_pb_changed,
        (unsigned long long)s_direct_pb_refused, (unsigned long long)s_direct_pb_full);
    fprintf(stderr, "[DIRECT] %llu array draws, %llu user-pointer draws, %llu words; %llu refused\n",
        (unsigned long long)s_direct_arrays, (unsigned long long)s_direct_ups,
        (unsigned long long)s_direct_up_words, (unsigned long long)s_direct_up_refused);
    /* What the draws last saw: a wrong token shows here long before it can be found in a picture. */
    fprintf(stderr, "[DIRECT] state: xf %u, surface %08X pitch %u clip %u,%u %ux%u format %X; c58 %g %g %g %g c59 %g %g %g %g\n",
        s_gpu.xf_mode, s_gpu.color_offset, s_gpu.pitch, s_gpu.clip_x, s_gpu.clip_y, s_gpu.clip_w, s_gpu.clip_h, s_gpu.format,
        nv2a_vsh_constant(58)[0], nv2a_vsh_constant(58)[1], nv2a_vsh_constant(58)[2], nv2a_vsh_constant(58)[3],
        nv2a_vsh_constant(59)[0], nv2a_vsh_constant(59)[1], nv2a_vsh_constant(59)[2], nv2a_vsh_constant(59)[3]);
    {
        const uint32_t *pw; const uint8_t *pi; uint32_t pn = 0, pc = nv2a_vsh_pack_gpu(&pw, &pi, &pn);
        fprintf(stderr, "[DIRECT] program: %u instructions, %u inputs, first %08X %08X; input 0 is %u\n",
            pc, pn, pc ? pw[0] : 0, pc ? pw[1] : 0, pn ? pi[0] : 99);
    }
    for (int i = 0; i < 4; i++)
        fprintf(stderr, "[DIRECT] attr %d: type %u size %u stride %u offset %08X\n", i,
            s_gpu.attr[i].type, s_gpu.attr[i].size, s_gpu.attr[i].stride, s_gpu.attr[i].offset);
    fprintf(stderr, "[DIRECT] resident: %llu hits, %llu changed, %llu new, %llu in the ring; "
        "%llu bytes uploaded, %llu avoided, %llu resets, %u source bytes\n",
        (unsigned long long)s_direct_res_hits, (unsigned long long)s_direct_res_changed,
        (unsigned long long)s_direct_res_new, (unsigned long long)s_direct_res_ring,
        (unsigned long long)s_direct_res_upload, (unsigned long long)s_direct_res_avoided,
        (unsigned long long)s_direct_res_resets, s_direct_source_bytes);
}
