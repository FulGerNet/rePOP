/**
 * reSOT - host entry point shared by every recompiled Xbox target.
 *
 * Loads the user's XBE for its data sections, maps the Xbox address space,
 * brings up the kernel replacement and calls the lifted entry point. Nothing
 * here is specific to one build of the game: the entry point, the Direct3D
 * fence layout and the diagnostic addresses come from the target's
 * source/<target>/target.h, selected by the build.
 */

#include <windows.h>
#include <dbghelp.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

/* xboxrecomp runtime headers */
#include <xbox/xboxrecomp.h>

/*
 * If xboxrecomp.h is not an umbrella header in your setup, include
 * the individual headers directly:
 *
 * #include "kernel.h"
 * #include "xbox_memory_layout.h"
 * #include "d3d8_xbox.h"
 * #include "dsound_xbox.h"
 * #include "xinput_xbox.h"
 */

/* ── Global register state (defined in xbox_memory_layout.c) ── */

/* RECOMP_TLS is not optional here. The runtime defines these thread-local, and
 * a plain `extern` referencing a __declspec(thread) variable does not resolve
 * to the calling thread's copy -- it resolves to the image's TLS template. The
 * host side then writes g_esp somewhere the generated code never reads, so the
 * guest starts with every register at zero and faults immediately, having
 * apparently ignored the setup that visibly ran. */
extern RECOMP_TLS uint32_t g_eax, g_ecx, g_edx, g_esp;
extern RECOMP_TLS uint32_t g_ebx, g_esi, g_edi;
extern RECOMP_TLS uint32_t g_seh_ebp;
/* x87 and SSE state. Global for the same reason the volatile GPRs are: one
 * guest routine can lift to several C functions, so a value written in one
 * body is read in the next. Defined in xbox_memory_layout.c like the rest of
 * the register file. */
extern RECOMP_TLS double g_fp_stack[8];
extern RECOMP_TLS int g_fp_top;
extern RECOMP_TLS uint16_t g_fp_control_word;
extern RECOMP_TLS int g_fp_cmp;
extern RECOMP_TLS RecompXmm g_xmm0, g_xmm1, g_xmm2, g_xmm3;
extern RECOMP_TLS RecompXmm g_xmm4, g_xmm5, g_xmm6, g_xmm7;
extern ptrdiff_t g_xbox_mem_offset;

/* ── XBE Constants ─────────────────────────────────────────── */

#include "target.h"   /* source/<target>/target.h: this build's XBE facts */

#define YOUR_GAME_ENTRY_POINT   RESOT_ENTRY_POINT
#define YOUR_GAME_XBE_PATH      resot_xbe_path()
#define YOUR_GAME_DIR           resot_game_dir()

/* The user-supplied game files live in reSOT/Assets/<target>. The directory
 * is baked in at configure time and can be overridden with the
 * RESOT_ASSET_DIR environment variable. Nothing from it is redistributed. */
#ifndef RESOT_ASSET_DIR
#define RESOT_ASSET_DIR "Assets\\" RESOT_TARGET_ID
#endif
static const char *resot_game_dir(void)
{
    const char *env = getenv("RESOT_ASSET_DIR");
    return (env && *env) ? env : RESOT_ASSET_DIR;
}
static const char *resot_xbe_path(void)
{
    static char path[MAX_PATH];
    snprintf(path, sizeof(path), "%s\\default.xbe", resot_game_dir());
    return path;
}

/* ── Every thread's call chain ─────────────────────────────── */

/* RESOT_THREAD_DUMP_SECS=<n>: every n seconds, print the host call chain of
 * every thread in the process.
 *
 * The runtime's watchdog shows the guest stack of the thread that runs the
 * game, which is half of a deadlock. A guest call is a host call and every
 * lifted routine is a symbol, so walking each host stack names the guest
 * routines the other threads are inside (sub_XXXXXXXX) and the kernel
 * replacement they are blocked in. Each thread is suspended only while its
 * stack is read. */
#include <tlhelp32.h>

static DWORD WINAPI resot_thread_dump_main(LPVOID param)
{
    DWORD secs = (DWORD)(uintptr_t)param, self = GetCurrentThreadId();
    DWORD pid = GetCurrentProcessId();

    for (;;) {
        HANDLE snap;
        THREADENTRY32 te;

        Sleep(secs * 1000);
        snap = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
        if (snap == INVALID_HANDLE_VALUE)
            continue;
        fprintf(stderr, "[THREADS] call chains, innermost first\n");
        te.dwSize = sizeof te;
        if (Thread32First(snap, &te)) do {
            HANDLE th;
            CONTEXT ctx;
            STACKFRAME64 frame;
            int depth, shown = 0;

            if (te.th32OwnerProcessID != pid || te.th32ThreadID == self)
                continue;
            th = OpenThread(THREAD_SUSPEND_RESUME | THREAD_GET_CONTEXT
                            | THREAD_QUERY_INFORMATION, FALSE, te.th32ThreadID);
            if (!th)
                continue;
            if (SuspendThread(th) == (DWORD)-1) {
                CloseHandle(th);
                continue;
            }
            memset(&ctx, 0, sizeof ctx);
            ctx.ContextFlags = CONTEXT_FULL;
            if (GetThreadContext(th, &ctx)) {
                char line[1024];
                size_t len;
                memset(&frame, 0, sizeof frame);
                frame.AddrPC.Offset = ctx.Rip;    frame.AddrPC.Mode = AddrModeFlat;
                frame.AddrFrame.Offset = ctx.Rbp; frame.AddrFrame.Mode = AddrModeFlat;
                frame.AddrStack.Offset = ctx.Rsp; frame.AddrStack.Mode = AddrModeFlat;
                len = (size_t)snprintf(line, sizeof line, "[THREADS] thread %lu:",
                                       (unsigned long)te.th32ThreadID);
                for (depth = 0; depth < 48 && shown < 14; depth++) {
                    char buf[sizeof(SYMBOL_INFO) + 256];
                    SYMBOL_INFO *sym = (SYMBOL_INFO *)buf;
                    DWORD64 disp = 0;

                    if (!StackWalk64(IMAGE_FILE_MACHINE_AMD64, GetCurrentProcess(), th,
                                     &frame, &ctx, NULL, SymFunctionTableAccess64,
                                     SymGetModuleBase64, NULL)
                        || !frame.AddrPC.Offset)
                        break;
                    memset(buf, 0, sizeof buf);
                    sym->SizeOfStruct = sizeof(SYMBOL_INFO);
                    sym->MaxNameLen = 255;
                    if (SymFromAddr(GetCurrentProcess(), frame.AddrPC.Offset, &disp, sym)
                        && len + strlen(sym->Name) + 2 < sizeof line) {
                        len += (size_t)snprintf(line + len, sizeof line - len, " %s", sym->Name);
                        shown++;
                    }
                }
                /* One write per thread, so other output cannot split it. */
                fprintf(stderr, "%s\n", line);
            }
            ResumeThread(th);
            CloseHandle(th);
        } while (Thread32Next(snap, &te));
        CloseHandle(snap);
        fflush(stderr);
    }
}

/* RESOT_PROFILE_MS=<n>: a sampling profiler. Every ten seconds the two
 * threads that used the most CPU in the previous ten are chosen (the game's
 * own thread and the one executing the pushbuffer, in practice) and sampled
 * every n milliseconds; the report says where the samples fell, by the
 * innermost routine of this executable (system DLL frames are walked past),
 * as a share of that thread's samples. Lifted routines appear as
 * sub_XXXXXXXX. */
#define RESOT_PROF_SLOTS 2048
typedef struct { DWORD64 addr; char name[64]; unsigned hits; } ResotProfSlot;
typedef struct { DWORD tid; HANDLE h; ULONGLONG cpu, used; } ResotProfThread;

static ULONGLONG resot_thread_cpu(HANDLE h)
{
    FILETIME c, e, k, u;
    if (!GetThreadTimes(h, &c, &e, &k, &u))
        return 0;
    return (((ULONGLONG)k.dwHighDateTime << 32) | k.dwLowDateTime)
         + (((ULONGLONG)u.dwHighDateTime << 32) | u.dwLowDateTime);
}

static DWORD WINAPI resot_profile_main(LPVOID param)
{
    static ResotProfSlot slot[2][RESOT_PROF_SLOTS];
    static ResotProfThread th[128];
    DWORD ms = (DWORD)(uintptr_t)param, self = GetCurrentThreadId();
    DWORD pid = GetCurrentProcessId(), last = GetTickCount();
    DWORD64 lo = (DWORD64)(uintptr_t)GetModuleHandle(NULL), hi = lo;
    unsigned total[2] = {0, 0}, i;
    int nth = 0, target[2] = {-1, -1}, t;

    {
        const IMAGE_DOS_HEADER *dos = (const IMAGE_DOS_HEADER *)(uintptr_t)lo;
        const IMAGE_NT_HEADERS *nt = (const IMAGE_NT_HEADERS *)((const char *)dos + dos->e_lfanew);
        hi = lo + nt->OptionalHeader.SizeOfImage;
    }
    for (;;) {
        Sleep(ms);
        for (t = 0; t < 2; t++) {
            CONTEXT ctx;
            STACKFRAME64 frame;
            DWORD64 pc = 0;
            HANDLE h;
            int depth;

            if (target[t] < 0)
                continue;
            h = th[target[t]].h;
            if (SuspendThread(h) == (DWORD)-1)
                continue;
            memset(&ctx, 0, sizeof ctx);
            ctx.ContextFlags = CONTEXT_FULL;
            if (GetThreadContext(h, &ctx)) {
                memset(&frame, 0, sizeof frame);
                frame.AddrPC.Offset = ctx.Rip;    frame.AddrPC.Mode = AddrModeFlat;
                frame.AddrFrame.Offset = ctx.Rbp; frame.AddrFrame.Mode = AddrModeFlat;
                frame.AddrStack.Offset = ctx.Rsp; frame.AddrStack.Mode = AddrModeFlat;
                for (depth = 0; depth < 24 && !pc; depth++) {
                    if (!StackWalk64(IMAGE_FILE_MACHINE_AMD64, GetCurrentProcess(), h,
                                     &frame, &ctx, NULL, SymFunctionTableAccess64,
                                     SymGetModuleBase64, NULL)
                        || !frame.AddrPC.Offset)
                        break;
                    if (frame.AddrPC.Offset >= lo && frame.AddrPC.Offset < hi)
                        pc = frame.AddrPC.Offset;
                }
            }
            ResumeThread(h);
            total[t]++;
            if (pc) {
                char buf[sizeof(SYMBOL_INFO) + 256];
                SYMBOL_INFO *sym = (SYMBOL_INFO *)buf;
                DWORD64 disp = 0;
                memset(buf, 0, sizeof buf);
                sym->SizeOfStruct = sizeof(SYMBOL_INFO);
                sym->MaxNameLen = 255;
                if (SymFromAddr(GetCurrentProcess(), pc, &disp, sym)) {
                    unsigned hsh = (unsigned)(sym->Address >> 4) % RESOT_PROF_SLOTS;
                    for (i = 0; i < RESOT_PROF_SLOTS; i++, hsh = (hsh + 1) % RESOT_PROF_SLOTS) {
                        ResotProfSlot *e = &slot[t][hsh];
                        if (!e->addr) {
                            e->addr = sym->Address;
                            strncpy(e->name, sym->Name, sizeof e->name - 1);
                        }
                        if (e->addr == sym->Address) {
                            e->hits++;
                            break;
                        }
                    }
                }
            }
        }
        if (GetTickCount() - last < 10000)
            continue;
        last = GetTickCount();

        for (t = 0; t < 2; t++) {
            int n;
            if (target[t] < 0 || !total[t])
                continue;
            fprintf(stderr, "[PROFILE] thread %lu (%.0f%% of a core), %u samples:",
                    (unsigned long)th[target[t]].tid,
                    (double)th[target[t]].used / 1e5, total[t]);
            for (n = 0; n < 28; n++) {
                unsigned best = RESOT_PROF_SLOTS;
                for (i = 0; i < RESOT_PROF_SLOTS; i++)
                    if (slot[t][i].hits
                        && (best == RESOT_PROF_SLOTS || slot[t][i].hits > slot[t][best].hits))
                        best = i;
                if (best == RESOT_PROF_SLOTS || slot[t][best].hits * 250 < total[t])
                    break;
                fprintf(stderr, " %s %.1f%%", slot[t][best].name,
                        100.0 * slot[t][best].hits / total[t]);
                slot[t][best].hits = 0;
            }
            fprintf(stderr, "\n");
        }
        fflush(stderr);
        memset(slot, 0, sizeof slot);
        total[0] = total[1] = 0;

        /* Pick the next window's two threads: the busiest of this one. */
        {
            HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
            THREADENTRY32 te;
            te.dwSize = sizeof te;
            if (snap != INVALID_HANDLE_VALUE) {
                if (Thread32First(snap, &te)) do {
                    int k;
                    if (te.th32OwnerProcessID != pid || te.th32ThreadID == self)
                        continue;
                    for (k = 0; k < nth && th[k].tid != te.th32ThreadID; k++)
                        ;
                    if (k == nth && nth < 128) {
                        th[k].tid = te.th32ThreadID;
                        th[k].h = OpenThread(THREAD_SUSPEND_RESUME | THREAD_GET_CONTEXT
                                             | THREAD_QUERY_INFORMATION, FALSE, te.th32ThreadID);
                        th[k].cpu = th[k].h ? resot_thread_cpu(th[k].h) : 0;
                        if (th[k].h)
                            nth++;
                    }
                } while (Thread32Next(snap, &te));
                CloseHandle(snap);
            }
            target[0] = target[1] = -1;
            for (t = 0; t < nth; t++) {
                ULONGLONG now = resot_thread_cpu(th[t].h);
                th[t].used = now >= th[t].cpu ? now - th[t].cpu : 0;
                th[t].cpu = now;
                if (target[0] < 0 || th[t].used > th[target[0]].used) {
                    target[1] = target[0];
                    target[0] = t;
                } else if (target[1] < 0 || th[t].used > th[target[1]].used) {
                    target[1] = t;
                }
            }
        }
    }
}

static void resot_thread_dump_start(void)
{
    {
        const char *p = getenv("RESOT_PROFILE_MS");
        int ms = p ? atoi(p) : 0;
        if (ms > 0) {
            HANDLE th = CreateThread(NULL, 0, resot_profile_main,
                                     (LPVOID)(uintptr_t)ms, 0, NULL);
            if (th)
                CloseHandle(th);
        }
    }
    {
    const char *e = getenv("RESOT_THREAD_DUMP_SECS");
    int secs = e ? atoi(e) : 0;
    HANDLE th;

    if (secs <= 0)
        return;
    th = CreateThread(NULL, 0, resot_thread_dump_main, (LPVOID)(uintptr_t)secs, 0, NULL);
    if (th)
        CloseHandle(th);
    }
}

static DWORD WINAPI resot_log_flush_main(LPVOID unused)
{
    (void)unused;
    for (;;) {
        Sleep(250);
        fflush(stderr);
    }
}

/* ── Forward declarations ──────────────────────────────────── */

static BOOL load_xbe(const char *path, void **out_data, size_t *out_size);

/* Recompiled entry point (generated by recomp pipeline) */
extern void xbe_entry_point(void);

/* ── VEH crash handler ─────────────────────────────────────── */

/*
 * Vectored Exception Handler for crash diagnostics.
 *
 * When the recompiled game hits an access violation, this handler prints
 * the faulting address, all Xbox register values, and a native stack trace.
 * This is your primary debugging tool during bring-up.
 *
 * Customize this for your game:
 *   - Add game-specific address checks (GPU register probes, etc.)
 *   - Add dumps of game-specific globals (heap handles, state flags)
 *   - Add SEH simulation if your game uses __try/__except
 */
/* Name the guest function a fault happened in, and recover the call chain.
 *
 * Recompiled code faults as ordinary native code, so the exception record
 * carries a host RIP and nothing else -- there is no guest program counter to
 * report, and the host address changes every build. Two things recover the
 * guest view:
 *
 *   - every generated function is a real symbol in the image (sub_005A03C0
 *     and so on), so the linker's PDB already maps host address back to guest
 *     function. dbghelp turns an anonymous RIP into that name.
 *
 *   - every lifted call pushes its guest return address onto the guest stack
 *     before jumping, so the stack still holds the chain. Scanning up from esp
 *     for values inside the code sections recovers it.
 *
 * ponytail: the stack scan is a scan, not a frame walk -- these are FPO frames
 * with no reliable ebp chain, so there is nothing to walk. It over-reports,
 * since addresses from returned-from calls linger below esp, but naming the
 * guest function is the whole question at a fault.
 *
 * Requires linking dbghelp and keeping the .pdb beside the .exe.
 */
static void print_guest_context(void *rip)
{
    /* SYMBOL_INFO is variable-length: the name is written past the struct, so
     * it must be over-allocated with MaxNameLen set to the slack. */
    char buf[sizeof(SYMBOL_INFO) + 256];
    SYMBOL_INFO *sym = (SYMBOL_INFO *)buf;
    DWORD64 disp = 0;

    memset(buf, 0, sizeof(buf));
    sym->SizeOfStruct = sizeof(SYMBOL_INFO);
    sym->MaxNameLen = 255;
    if (SymFromAddr(GetCurrentProcess(), (DWORD64)(uintptr_t)rip, &disp, sym))
        fprintf(stderr, "  in %s+0x%llX\n",
                sym->Name, (unsigned long long)disp);

    if (g_xbox_mem_offset && g_esp) {
        const uint32_t *sp =
            (const uint32_t *)((uintptr_t)g_xbox_mem_offset + g_esp);
        int shown = 0, i;
        fprintf(stderr, "  guest stack (return addresses, innermost first):\n");
        for (i = 0; i < 256 && shown < 24; i++) {
            uint32_t v = sp[i];
            if (v > g_xbox_code_lo && v < g_xbox_code_hi) {
                fprintf(stderr, "    [esp+%-4d] 0x%08X\n", i * 4, v);
                shown++;
            }
        }
        /* When the frame is gone, say so, and fall back on what is left.
         *
         * A fault inside a block copy leaves no return address in range: the
         * copy is a host memmove and its caller's frame is further up than
         * this reaches. Worse, a copy that ran past its buffer overwrites the
         * stack itself, so the list comes out empty exactly when it is most
         * needed -- and an empty list under a promising heading reads like
         * "nothing to see" rather than "the evidence is destroyed". */
        if (!shown)
            fprintf(stderr, "    (no return addresses in range)\n");

        /* Everything below only pays for itself when the scan came back
         * empty. A crash where the chain was recovered already says what
         * happened, and burying that under another twenty lines makes the
         * common report worse to read. */
        if (!shown) {
            uint32_t k;

            /* The indirect-call history, which the stack cannot overwrite.
             * recomp_manual.c prints this too, but only from
             * recomp_icall_fail_log -- a page fault inside a block copy
             * never reaches that path, and this is the same information by
             * the route the fault actually took.
             *
             * Declared here rather than included: main.c does not pull in
             * recomp_types.h, and recomp_manual.c spells it the same way. */
            extern volatile uint32_t g_icall_trace[16];
            extern volatile uint32_t g_icall_trace_idx;

            fprintf(stderr, "  recent ICALL targets:");
            for (k = 0; k < 16; k++)
                fprintf(stderr, " %08X",
                        g_icall_trace[(g_icall_trace_idx + k) & 15]);
            fprintf(stderr, "\n");

            /* The frame unfiltered. The pointers and lengths handed to
             * whatever faulted live here and look nothing like code, so the
             * filter above drops exactly what is wanted. On the crash this
             * was written for, one of these words was the end of the mapped
             * RAM mirror -- which is what identified the fault as a copy
             * running off its buffer rather than a stray pointer. */
            for (i = 0; i < 20; i++)
                fprintf(stderr, "    raw[esp+%-4d] 0x%08X\n", i * 4, sp[i]);
        }
    }
}

/* The emulated APU.
 *
 * Two entry points that had no callers anywhere in the tree. apu_mmio_hook.c
 * documents apu_hook_handle_mmio as "called from VEH in main.c" and no main.c
 * called it; apu_decode_and_handle's first line is `if (!g_apu_state) return
 * false` and nothing assigned g_apu_state. So with RECOMP_AC97_READY set the
 * APU's registers were unmapped to be trapped, and every trap was then
 * declined and surfaced as an access violation on the first register
 * DirectSound touched.
 *
 * Declared rather than included so this does not depend on src/apu being on
 * the include path. */
typedef struct MCPXAPUState MCPXAPUState;
extern MCPXAPUState *mcpx_apu_init_standalone(uint8_t *ram_ptr);
extern MCPXAPUState *g_apu_state;
extern bool apu_hook_handle_mmio(PCONTEXT ctx, uintptr_t fault_addr,
                                 uint32_t fault_xbox_va, int is_write);

/* The trapped span, matching what MemoryLayoutInit unmaps: the APU's own
 * 512 KB, not the whole MCPX aperture. AC'97 above it stays plain memory,
 * which is what the codec-ready bit needs. */
/* The emulated OHCI controllers (src/usb/ohci.h), declared the same way. */
extern void xbox_OhciInit(void);
extern int  xbox_OhciOwnsAddress(uint32_t xbox_va);
extern int  xbox_OhciHandleMmio(void *ctx, uint32_t xbox_va);

#define APU_TRAP_BASE 0xFE800000u
#define APU_TRAP_END  0xFE880000u

static LONG CALLBACK veh_handler(PEXCEPTION_POINTERS ep)
{
    if (ep->ExceptionRecord->ExceptionCode == EXCEPTION_ACCESS_VIOLATION) {
        uintptr_t fault_addr = ep->ExceptionRecord->ExceptionInformation[1];

        /*
         * GPU register probe at 0xFD000000 range.
         * Some games probe NV2A registers directly. On real hardware this
         * returns GPU state; here we just skip the instruction.
         * TODO: Implement mini x86-64 decoder for instruction skipping,
         * or connect to the xbox_nv2a library for proper handling.
         */
        if (fault_addr >= 0xFD000000 && fault_addr < 0xFE000000) {
            return EXCEPTION_CONTINUE_SEARCH;
        }

        /* APU registers -> the emulated APU.
         *
         * The other half of RECOMP_AC97_READY: reporting the codec ready is
         * what lets DirectSoundCreate past its first gate, and from there it
         * drives the APU directly, so the registers have to fault to be seen.
         * "Handled" means the access was decoded and the instruction stepped
         * over, so execution resumes instead of unwinding. */
        {
            uint32_t xbox_va =
                (uint32_t)(fault_addr - (uintptr_t)g_xbox_mem_offset);

            if (xbox_va >= APU_TRAP_BASE && xbox_va < APU_TRAP_END
                    && apu_hook_handle_mmio(
                           ep->ContextRecord, fault_addr, xbox_va,
                           ep->ExceptionRecord->ExceptionInformation[0]
                               ? 1 : 0)) {
                return EXCEPTION_CONTINUE_EXECUTION;
            }
        }

        /* USB host controllers -> the emulated OHCI. XAPI is linked into the
         * XBE and drives the controller registers itself, so the gamepad only
         * exists if these accesses are answered (RECOMP_USB). */
        {
            uint32_t xbox_va =
                (uint32_t)(fault_addr - (uintptr_t)g_xbox_mem_offset);

            if (xbox_OhciOwnsAddress(xbox_va)
                    && xbox_OhciHandleMmio(ep->ContextRecord, xbox_va))
                return EXCEPTION_CONTINUE_EXECUTION;
        }

        fprintf(stderr, "[CRASH] Access violation at RIP=0x%llX, fault addr=0x%llX (%s)\n",
            (unsigned long long)ep->ContextRecord->Rip,
            (unsigned long long)fault_addr,
            ep->ExceptionRecord->ExceptionInformation[0] ? "write" : "read");
        fprintf(stderr, "  Xbox regs: eax=0x%08X ecx=0x%08X edx=0x%08X esp=0x%08X\n",
            g_eax, g_ecx, g_edx, g_esp);
        fprintf(stderr, "  Xbox regs: ebx=0x%08X esi=0x%08X edi=0x%08X\n",
            g_ebx, g_esi, g_edi);
        fprintf(stderr, "  Xbox VA of fault: 0x%08X\n",
            (uint32_t)(fault_addr - (uintptr_t)g_xbox_mem_offset));
        print_guest_context((void *)ep->ContextRecord->Rip);
        {
            MEMORY_BASIC_INFORMATION mbi;
            if (VirtualQuery((void *)fault_addr, &mbi, sizeof mbi))
                fprintf(stderr, "  Fault page: base=%p allocation=%p size=0x%llX state=0x%lX protect=0x%lX type=0x%lX\n",
                        mbi.BaseAddress, mbi.AllocationBase,
                        (unsigned long long)mbi.RegionSize, mbi.State, mbi.Protect, mbi.Type);
        }

#ifdef RESOT_JADE_WORLD_CURRENT
        /* Jade world state: the world being updated,
         * the active-world table and the object table 0x1C9B0 walks. */
        {
            const uint8_t *m = (const uint8_t *)(uintptr_t)g_xbox_mem_offset;
            #define GM32(a) (*(const uint32_t *)(m + (uint32_t)(a)))
            uint32_t w = GM32(RESOT_JADE_WORLD_CURRENT), a;
            fprintf(stderr, "  world cur=0x%08X active=[0x%08X..0x%08X) pending=0x%02X"
                            " state=%u\n", w, GM32(RESOT_JADE_ACTIVE_BEGIN), GM32(RESOT_JADE_ACTIVE_END),
                    GM32(RESOT_JADE_PENDING_MODE) & 0xFF,
                    GM32(RESOT_JADE_STATE_PTR) > 0x10000 && GM32(RESOT_JADE_STATE_PTR) < 0x04000000
                        ? GM32(GM32(RESOT_JADE_STATE_PTR) + RESOT_JADE_STATE_FIELD) : 0xFFFFFFFFu);
            for (a = GM32(RESOT_JADE_ACTIVE_BEGIN); a && a < GM32(RESOT_JADE_ACTIVE_END)
                     && a < 0x04000000 && a - GM32(RESOT_JADE_ACTIVE_BEGIN) < 0x80; a += 8)
                fprintf(stderr, "    active %08X flags %08X\n", GM32(a), GM32(a + 4));
            if (w > 0x10000 && w < 0x04000000 - 0x430) {
                fprintf(stderr, "  world+0x000: %08X %08X %08X %08X\n",
                        GM32(w), GM32(w + 4), GM32(w + 8), GM32(w + 12));
                fprintf(stderr, "  world+0x160: %08X %08X %08X %08X %08X %08X\n",
                        GM32(w + 0x160), GM32(w + 0x164), GM32(w + 0x168),
                        GM32(w + 0x16C), GM32(w + 0x170), GM32(w + 0x174));
                fprintf(stderr, "  world+0x420: %08X\n", GM32(w + 0x420));
            }
            #undef GM32
        }
#endif

        /*
         * TODO: Add game-specific diagnostics here. Examples:
         *
         * Dump CRT heap handle:
         *   uint32_t heap = *(uint32_t *)((uint8_t *)g_xbox_mem_offset + HEAP_HANDLE_VA);
         *   fprintf(stderr, "  CRT heap handle: 0x%08X\n", heap);
         *
         * Dump game state:
         *   uint32_t state = *(uint32_t *)((uint8_t *)g_xbox_mem_offset + GAME_STATE_VA);
         *   fprintf(stderr, "  Game state: %u\n", state);
         */

        /* Print native stack return addresses for debugging */
        {
            CONTEXT ctx = *ep->ContextRecord;
            STACKFRAME64 frame = {0};
            frame.AddrPC.Offset = ctx.Rip;
            frame.AddrStack.Offset = ctx.Rsp;
            frame.AddrFrame.Offset = ctx.Rbp;
            frame.AddrPC.Mode = frame.AddrStack.Mode = frame.AddrFrame.Mode = AddrModeFlat;
            fprintf(stderr, "  Native stack (unwound from fault context):\n");
            for (int i = 0; i < 16; i++) {
                char buf[sizeof(SYMBOL_INFO) + 256] = {0};
                SYMBOL_INFO *sym = (SYMBOL_INFO *)buf;
                DWORD64 disp = 0;
                sym->SizeOfStruct = sizeof *sym;
                sym->MaxNameLen = 255;
                if (SymFromAddr(GetCurrentProcess(), frame.AddrPC.Offset, &disp, sym))
                    fprintf(stderr, "    %s+0x%llX\n", sym->Name, (unsigned long long)disp);
                else
                    fprintf(stderr, "    0x%llX\n", (unsigned long long)frame.AddrPC.Offset);
                if (!StackWalk64(IMAGE_FILE_MACHINE_AMD64, GetCurrentProcess(), GetCurrentThread(),
                                 &frame, &ctx, NULL, SymFunctionTableAccess64, SymGetModuleBase64, NULL)
                        || !frame.AddrPC.Offset) break;
            }
        }
        fflush(stderr);
    }

    return EXCEPTION_CONTINUE_SEARCH;
}

/* ── WinMain ───────────────────────────────────────────────── */

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine, int nCmdShow)
{
    void *xbe_data = NULL;
    size_t xbe_size = 0;

    (void)hInstance;
    (void)hPrevInstance;
    (void)lpCmdLine;
    (void)nCmdShow;

    /* 1 ms scheduler granularity: the runtime's timer thread drives the
     * 60 Hz vertical blank and the title's timed waits with Sleep(1), which
     * is 15.6 ms at Windows' default resolution. */
    {
        extern __declspec(dllimport) unsigned int __stdcall timeBeginPeriod(unsigned int);
        timeBeginPeriod(1);
    }

    /* The picture shape this executable was built with (CMake RESOT_ASPECT),
     * unless RECOMP_HW_ASPECT already chooses one: the renderer and the
     * target's projection hook both read the variable. */
#ifdef RESOT_DEFAULT_ASPECT
    if (!getenv("RECOMP_HW_ASPECT"))
        _putenv_s("RECOMP_HW_ASPECT", RESOT_DEFAULT_ASPECT);
#endif

#ifdef RESOT_PROJECTED_UI
    if (!getenv("RECOMP_HW_PROJECTED_UI"))
        _putenv_s("RECOMP_HW_PROJECTED_UI", "1");
#endif

    /* Full screen (a borderless window over the monitor) unless
     * RECOMP_HW_FULLSCREEN=0 asks for a window (run.ps1 -Windowed). The
     * keyboard and mouse play as the pad unless RECOMP_KEYBOARD=0. */
    if (!getenv("RECOMP_HW_FULLSCREEN"))
        _putenv_s("RECOMP_HW_FULLSCREEN", "1");
    if (!getenv("RECOMP_KEYBOARD"))
        _putenv_s("RECOMP_KEYBOARD", "1");

    /* Diagnostics are buffered and flushed four times a second (and by the
     * crash handler). Unbuffered, every fprintf was one or more blocking
     * writes to the pipe run.ps1 redirects stderr into, on whichever thread
     * printed -- the profiler put the pushbuffer thread in fprintf for half
     * of its time. RESOT_LOG_UNBUFFERED=1 restores immediate output, for a
     * fault that kills the process before the handler runs. */
    setvbuf(stdout, NULL, _IONBF, 0);
    if (getenv("RESOT_LOG_UNBUFFERED")) {
        setvbuf(stderr, NULL, _IONBF, 0);
    } else {
        HANDLE th;
        setvbuf(stderr, NULL, _IOFBF, 1 << 16);
        th = CreateThread(NULL, 0, resot_log_flush_main, NULL, 0, NULL);
        if (th)
            CloseHandle(th);
    }

    printf("=== " RESOT_TARGET_NAME " - static recompilation ===\n");
    printf("Loading XBE...\n");

    /* Install VEH handler (first handler in chain) */
    /* Load symbols up front rather than from inside the handler: at fault
     * time the process is already in a bad way, and SymInitialize
     * allocates. Failure is not fatal -- the handler prints no name. */
    SymSetOptions(SYMOPT_DEFERRED_LOADS | SYMOPT_UNDNAME);
    SymInitialize(GetCurrentProcess(), NULL, TRUE);
    AddVectoredExceptionHandler(1, veh_handler);

    /* Step 1: Load XBE */
    if (!load_xbe(YOUR_GAME_XBE_PATH, &xbe_data, &xbe_size)) {
        MessageBoxA(NULL, "Failed to load default.xbe.\n"
                    "Place the game files in Assets\\" RESOT_TARGET_ID " or set RESOT_ASSET_DIR.",
                    "Recomp", MB_ICONERROR);
        return 1;
    }
    printf("XBE loaded: %zu bytes\n", xbe_size);

    /* Step 2: Initialize Xbox memory layout */
    printf("Initializing Xbox memory layout...\n");
    if (!xbox_MemoryLayoutInit(xbe_data, xbe_size)) {
        MessageBoxA(NULL, "Failed to initialize Xbox memory layout.\n"
                    "The required virtual address range may be unavailable.",
                    "Recomp", MB_ICONERROR);
        free(xbe_data);
        return 1;
    }

    g_xbox_mem_offset = xbox_GetMemoryOffset();
    printf("Xbox memory mapped. Offset: 0x%llX\n", (unsigned long long)g_xbox_mem_offset);

    /* Bring up the emulated APU.
     *
     * Gated on the same variable that unmaps its registers, because the two
     * halves are useless apart: a trap with no model declines every access,
     * and a model nothing traps into never sees a register. The APU walks
     * Xbox physical RAM to find voice buffers, so it gets the guest RAM
     * base. */
    if (getenv("RECOMP_AC97_READY")) {
        g_apu_state = mcpx_apu_init_standalone((uint8_t *)xbox_GetMemoryBase());
        fprintf(stderr, "[BOOT] emulated APU %s\n",
                g_apu_state ? "up" : "FAILED to initialise");
    }

    /* Step 3: Initialize Xbox kernel */
    printf("Initializing Xbox kernel replacement...\n");
    xbox_kernel_init();

    /* Step 4: Set game directory for file I/O path translation */
    {
        extern void xbox_path_init(const char *game_dir, const char *save_dir);
        xbox_path_init(YOUR_GAME_DIR, NULL);
    }

    /* Step 5: Initialize kernel bridge (thunk table in Xbox memory) */
    printf("Initializing kernel bridge...\n");
    xbox_kernel_bridge_init();

    /* XDK D3D fences ("BlockOnTime"): the device pointer global, the offset
     * of the last fence time issued and the offset of the pointer to the dword
     * the GPU writes back through BACK_END_WRITE_SEMAPHORE_RELEASE. Without
     * this the first Present spins waiting for a fence nothing signals. */
#ifdef RESOT_D3D_DEVICE_GLOBAL
    xbox_Nv2aMirrorFence(RESOT_D3D_DEVICE_GLOBAL, RESOT_D3D_FENCE_ISSUED,
                         RESOT_D3D_FENCE_GPU_PTR);
#else
    fprintf(stderr, "[BOOT] no D3D fence layout for this target yet\n");
#endif

    /* DirectSound's buffers in ordinary RAM need physical addresses the
     * audio processor cannot mistake for contiguous memory. */
#ifdef RESOT_DSOUND_CODE_BEGIN
    xbox_SetApuPhysicalCallers(RESOT_DSOUND_CODE_BEGIN, RESOT_DSOUND_CODE_END);
#endif

    /* Gamepad: unprotects nothing and changes nothing unless RECOMP_USB is
     * set, in which case the two controller register blocks start faulting
     * into the handler above. */
    xbox_OhciInit();

    /* Step 6: Initialize stack */
    g_esp = XBOX_STACK_TOP;

    /*
     * TODO: Pre-initialize CRT globals if needed.
     *
     * Many Xbox games use the MSVC CRT. The CRT's __heap_init sets up a
     * heap descriptor at a game-specific address. You may need to
     * pre-initialize __active_heap to avoid small-block heap issues:
     *
     *   uint32_t *active_heap = (uint32_t *)((uint8_t *)g_xbox_mem_offset + ACTIVE_HEAP_VA);
     *   *active_heap = 1;  // 1 = system heap (HeapAlloc), avoids SBH init
     *
     * Find ACTIVE_HEAP_VA by searching the disassembly for __heap_init
     * or by looking for the CRT's __active_heap global in the data section.
     */

    printf("\n=== Initialization complete ===\n");
    printf("Entry point: 0x%08X\n", YOUR_GAME_ENTRY_POINT);
    printf("ESP: 0x%08X\n", g_esp);

    /* Build the flat dispatch table before the guest runs.
     *
     * Without this recomp_lookup falls back to a binary search over the
     * whole function table -- roughly log2(n) branches on *every*
     * indirect call, which for a 45,000-function C++ title is about 16
     * every time the game goes through a vtable. Half-Life 2 spent most
     * of its static initialisation inside recomp_lookup for exactly this
     * reason, and it read as a hang.
     *
     * Optional by design: if the allocation fails the search still works,
     * so a failure is worth one line and not a fatal error. */
    if (!recomp_dispatch_init())
        fprintf(stderr, "[BOOT] flat dispatch unavailable; "
                        "indirect calls will use the binary search\n");

    /* Arm the hang watchdog. Does nothing unless RECOMP_WATCHDOG_SECS is set,
     * and must be called from this thread -- the guest registers it samples are
     * thread-local, so it has to be handed the copies belonging to the thread
     * that runs guest code.
     *
     * Not optional boilerplate: without this call RECOMP_WATCHDOG_SECS is
     * silently inert, and the one diagnostic that tells a hang from slowness
     * does nothing while appearing to be set. */
    xbox_WatchdogStart();
    resot_thread_dump_start();

    /* Step 7: Call the recompiled entry point */
    printf("\nStarting game...\n");
    fflush(stdout);

    xbe_entry_point();

    printf("\nGame returned. Cleaning up...\n");

    /* Cleanup */
    xbox_kernel_shutdown();
    xbox_MemoryLayoutShutdown();
    free(xbe_data);

    return 0;
}

/* ── XBE Loading ───────────────────────────────────────────── */

static BOOL load_xbe(const char *path, void **out_data, size_t *out_size)
{
    FILE *f = fopen(path, "rb");
    if (!f) {
        fprintf(stderr, "Cannot open XBE: %s\n", path);
        return FALSE;
    }

    fseek(f, 0, SEEK_END);
    long size = ftell(f);
    fseek(f, 0, SEEK_SET);

    if (size <= 0) {
        fclose(f);
        return FALSE;
    }

    void *data = malloc((size_t)size);
    if (!data) {
        fclose(f);
        return FALSE;
    }

    if (fread(data, 1, (size_t)size, f) != (size_t)size) {
        free(data);
        fclose(f);
        return FALSE;
    }

    fclose(f);
    *out_data = data;
    *out_size = (size_t)size;
    return TRUE;
}

/* Console entry point (for debugging -- lets you see printf output) */
int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    return WinMain(GetModuleHandle(NULL), NULL, GetCommandLineA(), SW_SHOW);
}
