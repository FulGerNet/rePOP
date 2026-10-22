/**
 * Manual function overrides and ICALL diagnostics
 *
 * This file provides:
 *   - recomp_lookup_manual()  : intercept specific Xbox VAs with hand-written code
 *   - recomp_icall_fail_log() : log when an indirect call target can't be resolved
 *   - ICALL trace ring buffer  : globals used by the RECOMP_ICALL macro
 *
 * The recomp pipeline generates an auto-dispatch table (recomp_lookup) that
 * resolves most function addresses. recomp_lookup_manual() is called FIRST,
 * giving you a chance to override any function with a custom implementation.
 *
 * Common reasons to add manual overrides:
 *   - Trace a function to understand call flow (wrap the generated version)
 *   - Fix a function the lifter translated incorrectly
 *   - Stub out a function that crashes (return early, set eax to a safe value)
 *   - Redirect a function to a native implementation (e.g., skip CRT init)
 *   - Intercept D3D/audio calls for custom rendering or sound
 */

#include <stdio.h>
#include <stdint.h>

/* ── ICALL trace ring buffer ───────────────────────────────── */

/*
 * These globals are written by the RECOMP_ICALL macro (defined in
 * recomp_types.h) every time an indirect call is dispatched. When a
 * crash occurs, the VEH handler or recomp_icall_fail_log() can dump
 * the last 16 call targets to help you trace what happened.
 *
 * The runtime owns them: xbox_kernel defines all three in
 * src/kernel/xbox_memory_layout.c, and recomp_types.h declares them extern.
 * Declare, do not define -- a definition here as well is a duplicate symbol,
 * and a project copied from this template failed to link on all three:
 *
 *   xbox_memory_layout.obj : error LNK2005: g_icall_count already defined
 *                            in recomp_manual.obj
 */
extern volatile uint32_t g_icall_trace[16];
extern volatile uint32_t g_icall_trace_idx;
extern volatile uint64_t g_icall_count;

typedef void (*recomp_func_t)(void);

/* ── Register state (defined in xbox_memory_layout.c) ──────── */

/* The registers are thread-local in the runtime and are declared that way
 * further down, with the tracing that reads them. */
extern ptrdiff_t g_xbox_mem_offset;

/* ── Manual function overrides ─────────────────────────────── */

/*
 * Return a function pointer to override the given Xbox VA, or NULL
 * to fall through to the auto-generated dispatch table.
 *
 * This is called on every indirect call (RECOMP_ICALL) and every
 * direct call through the dispatch table, so keep it fast. A chain
 * of if-statements on uint32_t compiles to a simple comparison
 * sequence; for large override tables, consider a sorted array
 * with binary search.
 *
 * Examples of common override patterns:
 *
 *   // Trace wrapper: log entry/exit around the generated function
 *   extern void sub_00012345(void);
 *   static void traced_sub_00012345(void) {
 *       fprintf(stderr, "[TRACE] sub_00012345 entered, eax=0x%08X\n", g_eax);
 *       sub_00012345();
 *       fprintf(stderr, "[TRACE] sub_00012345 returned, eax=0x%08X\n", g_eax);
 *   }
 *
 *   // Stub: skip a function entirely (return 0 in eax)
 *   static void stub_00067890(void) {
 *       g_eax = 0;
 *   }
 *
 *   // Fix: replace a broken lifted function with correct C
 *   static void fixed_sub_000ABCDE(void) {
 *       // Read arguments from stack/registers per calling convention
 *       uint32_t arg1 = g_ecx;
 *       uint32_t arg2 = MEM32(g_esp + 4);
 *       // ... correct implementation ...
 *       g_eax = result;
 *   }
 */
/* ── Tracing indirectly called routines ──────────────────────────────────
 *
 * RESOT_TRACE_ICALLS=<va>[,<va>...] (hexadecimal, up to 16) logs every call
 * that reaches one of those routines through a pointer -- a virtual call, a
 * callback -- with ecx on entry and eax on return. It is how "which
 * implementation answered that virtual call, and with what" gets settled
 * without a debugger: list the candidates' addresses (the slot of each
 * vtable) and read the log. Direct calls do not come through here. */
#include <stdlib.h>
#include <string.h>

#if defined(_MSC_VER)
#define RESOT_TLS __declspec(thread)
#else
#define RESOT_TLS __thread
#endif
extern RESOT_TLS uint32_t g_eax, g_ecx, g_esp;
extern recomp_func_t recomp_lookup(uint32_t xbox_va);

#define RESOT_TRACE_SLOTS 16
static struct { uint32_t va; recomp_func_t fn; unsigned calls; } s_trace[RESOT_TRACE_SLOTS];
static int s_trace_count = -1;

static void trace_run(int i)
{
    uint32_t ecx = g_ecx, esp = g_esp;
    const uint32_t *sp = (const uint32_t *)((uintptr_t)g_xbox_mem_offset + esp);
    unsigned n = ++s_trace[i].calls;

    s_trace[i].fn();
    /* Quiet after the first hundred calls of a routine unless it fails. */
    if (n <= 100 || (int32_t)g_eax < 0)
        fprintf(stderr, "[TRACE] %08X #%u (ecx=%08X ret=%08X args %08X %08X %08X) -> eax=%08X\n",
                s_trace[i].va, n, ecx, sp[0], sp[1], sp[2], sp[3], g_eax);
}

#define RESOT_TRACE_FN(i) static void trace_fn_##i(void) { trace_run(i); }
RESOT_TRACE_FN(0)  RESOT_TRACE_FN(1)  RESOT_TRACE_FN(2)  RESOT_TRACE_FN(3)
RESOT_TRACE_FN(4)  RESOT_TRACE_FN(5)  RESOT_TRACE_FN(6)  RESOT_TRACE_FN(7)
RESOT_TRACE_FN(8)  RESOT_TRACE_FN(9)  RESOT_TRACE_FN(10) RESOT_TRACE_FN(11)
RESOT_TRACE_FN(12) RESOT_TRACE_FN(13) RESOT_TRACE_FN(14) RESOT_TRACE_FN(15)
static const recomp_func_t s_trace_fn[RESOT_TRACE_SLOTS] = {
    trace_fn_0, trace_fn_1, trace_fn_2, trace_fn_3, trace_fn_4, trace_fn_5,
    trace_fn_6, trace_fn_7, trace_fn_8, trace_fn_9, trace_fn_10, trace_fn_11,
    trace_fn_12, trace_fn_13, trace_fn_14, trace_fn_15
};

static void trace_init(void)
{
    const char *spec = getenv("RESOT_TRACE_ICALLS");
    char *end;

    s_trace_count = 0;
    while (spec && *spec && s_trace_count < RESOT_TRACE_SLOTS) {
        uint32_t va = (uint32_t)strtoul(spec, &end, 16);
        if (end == spec)
            break;
        s_trace[s_trace_count].va = va;
        s_trace[s_trace_count].fn = recomp_lookup(va);
        if (s_trace[s_trace_count].fn)
            s_trace_count++;
        else
            fprintf(stderr, "[TRACE] 0x%08X is not a lifted routine; ignored\n", va);
        spec = (*end == ',') ? end + 1 : end;
    }
}

recomp_func_t recomp_lookup_manual(uint32_t xbox_va)
{
    int i;

    /* Retail 0x00096130 is deliberately left to the lifted callback: its
     * completed/pending byte counters must change before the task backend
     * returns to consumers 0x00095BE0/0x00095E80. Deferring that update until
     * another scheduler lock acquisition starved menu/gameplay music.
     * Restoring the original callback was heard on Windows (2026-10-22). */

    if (s_trace_count < 0)
        trace_init();
    for (i = 0; i < s_trace_count; i++)
        if (s_trace[i].va == xbox_va)
            return s_trace_fn[i];
    return (recomp_func_t)0;
}

/* ── ICALL failure logging ─────────────────────────────────── */

/*
 * Called when RECOMP_ICALL cannot resolve a target address.
 * This usually means one of:
 *   - A vtable dispatch to an address not in the dispatch table
 *   - A function pointer loaded from uninitialized or corrupt memory
 *   - A kernel thunk address that the bridge doesn't handle
 *
 * During early bring-up you will see many of these. Most are harmless
 * (the ICALL macro pops the dummy return address and continues).
 * Focus on the ones that cause crashes or incorrect behavior.
 */
void recomp_icall_fail_log(uint32_t va)
{
    fprintf(stderr, "[ICALL] Failed to resolve VA 0x%08X (total calls: %llu)\n",
            va, (unsigned long long)g_icall_count);

    /* Dump last 16 call targets from the ring buffer */
    fprintf(stderr, "  Recent ICALL targets:\n");
    for (int i = 0; i < 16; i++) {
        int idx = (g_icall_trace_idx - 16 + i) & 15;
        if (g_icall_trace[idx])
            fprintf(stderr, "    [%2d] 0x%08X\n", i, g_icall_trace[idx]);
    }
    fflush(stderr);
}

/* An indirect call whose target is not code: a null or wild function pointer.
 *
 * Skipping these is right -- calling a data address is worse -- but skipping
 * them *silently* is not. They almost always arrive inside a loop, so the
 * symptom is a hang with no output rather than a diagnosable null vtable call.
 *
 * Rate-limited per address: a spin can produce millions of these, and the
 * useful information is which addresses occur, not how often.
 */
void recomp_icall_not_code_log(uint32_t va)
{
    enum { SLOTS = 16 };
    static uint32_t seen[SLOTS];
    static uint64_t hits[SLOTS];
    static int count;
    int i;

    for (i = 0; i < count; i++)
        if (seen[i] == va)
            break;
    if (i == count) {
        if (count == SLOTS)
            return;
        seen[count] = va;
        hits[count] = 0;
        count++;
    }
    hits[i]++;
    /* Report at 1, 10, 100, 1000 ... rather than once. A single line says a
     * wild pointer was skipped; the progression says it is being skipped in a
     * loop, which is the difference between a curiosity and the reason the
     * title is hung. */
    {
        uint64_t n = hits[i];
        while (n >= 10 && n % 10 == 0)
            n /= 10;
        if (n != 1)
            return;
    }
    fprintf(stderr, "[ICALL] target 0x%08X is not code -- skipped %llu time(s) "
                    "(null or wild function pointer, at call #%llu)\n",
            va, (unsigned long long)hits[i],
            (unsigned long long)g_icall_count);
    fflush(stderr);
}

/* ── EFLAGS image and CPUID ──────────────────────────────────────────────
 *
 * The demo's CRT and Bink (XBE 0x0028A326) detect MMX by toggling EFLAGS.ID
 * with pushfd/popfd and reading CPUID leaf 1. The Xbox CPU is a Pentium III
 * "Coppermine" derivative: family 6, model 8, MMX + FXSR + SSE, no SSE2.
 * Only bits the lifter does not model as condition codes live here. */
#if defined(_MSC_VER)
__declspec(thread) uint32_t g_recomp_eflags = 0x00000202u;
#else
__thread uint32_t g_recomp_eflags = 0x00000202u;
#endif

void recomp_cpuid(uint32_t leaf, uint32_t subleaf, uint32_t out[4])
{
    (void)subleaf;
    out[0] = out[1] = out[2] = out[3] = 0;
    switch (leaf) {
    case 0:
        out[0] = 2;
        out[1] = 0x756E6547u;   /* "Genu" */
        out[3] = 0x49656E69u;   /* "ineI" */
        out[2] = 0x6C65746Eu;   /* "ntel" */
        break;
    case 1:
        out[0] = 0x0000068Au;   /* family 6, model 8, stepping 10 */
        out[3] = 0x0383F9FFu;   /* FPU..CMOV, MMX, FXSR, SSE */
        break;
    case 2:
        out[0] = 0x03020101u;
        out[3] = 0x0C040841u;
        break;
    default:
        break;
    }
}

/* ── Untranslated instructions ───────────────────────────────────────────
 *
 * The lifter emits RECOMP_UNIMPL(text, va) at every instruction it has no
 * translation for, in place of the bare comment it used to leave. The
 * instruction is still a no-op; this only stops the omission being silent.
 * RECOMP_UNIMPL_TRAP=1 aborts at the first hit, at the guest address of the
 * cause rather than wherever the damage surfaces. */
#include <stdlib.h>

void recomp_unimpl(const char *text, uint32_t va)
{
    static int printed, stop = -1;
    if (stop < 0) {   /* read once: a reached instruction may be in a loop */
        const char *trap = getenv("RECOMP_UNIMPL_TRAP");
        stop = trap && *trap && *trap != '0';
    }

    if (printed < 50 || stop) {
        printed++;
        fprintf(stderr,
                "[UNIMPL] untranslated instruction REACHED: `%s` at 0x%08X"
                " (a no-op; set RECOMP_UNIMPL_TRAP=1 to stop here)\n",
                text, va);
        fflush(stderr);
    }
    if (stop) abort();
}
