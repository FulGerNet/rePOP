/**
 * reSOT - host entry point shared by every recompiled Xbox target.
 *
 * Loads the user's XBE for its data sections, maps the Xbox address space,
 * brings up the kernel replacement and calls the lifted entry point. Nothing
 * here is specific to one build of the game: the entry point, the Direct3D
 * fence layout and the diagnostic addresses come from the target's
 * source/<target>/target.h, selected by the build.
 */

#define COBJMACROS
#include <windows.h>
#include <dbghelp.h>
#include <bcrypt.h>
#include <io.h>
#include <share.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include "options.h"
#include "launcher.h"
#include "console_logs.h"

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
#define YOUR_GAME_DIR           resot_game_dir()

/* Portable installs use the executable's own folder. Without game files
 * there, the launcher (launcher.c) installs them from the game's Xbox ISO;
 * RESOT_ASSET_DIR is an explicit override (run.ps1, and the launcher when it
 * hands over to the other target's executable). */
static char s_game_dir[MAX_PATH];
static const char *resot_game_dir(void)
{
    char *local = s_game_dir;
    const char *env = getenv("RESOT_ASSET_DIR");
    if (local[0]) return local;
    if (env && *env) {
        if (GetFullPathNameA(env, MAX_PATH, local, NULL) >= MAX_PATH) return env;
        return local;
    }
    if (!local[0]) {
        DWORD n = GetModuleFileNameA(NULL, local, MAX_PATH);
        char *slash;
        if (!n || n >= MAX_PATH) { local[0] = 0; return "."; }
        slash = strrchr(local, '\\');
        if (!slash) { local[0] = 0; return "."; }
        *slash = 0;
    }
    return local;
}
static void resot_redirect_log(FILE *stream, const char *path)
{
    FILE *reopened = NULL, *log;
    const char *mode = "w";
    /* Preserve the previous run before opening the familiar latest-log name.
     * A fresh launch must not erase the crash we are about to investigate. */
    if (GetFileAttributesA(path) != INVALID_FILE_ATTRIBUTES) {
        SYSTEMTIME now;
        char archive[MAX_PATH];
        const char *name = strrchr(path, '\\');
        GetLocalTime(&now);
        CreateDirectoryA("logs\\history", NULL);
        snprintf(archive, sizeof archive,
                 "logs\\history\\%04u%02u%02u-%02u%02u%02u-%03u-%lu-%s",
                 now.wYear, now.wMonth, now.wDay, now.wHour, now.wMinute,
                 now.wSecond, now.wMilliseconds, GetCurrentProcessId(), name ? name + 1 : path);
        if (!CopyFileA(path, archive, TRUE)) mode = "a";
    }
    if (freopen_s(&reopened, "NUL", "w", stream) != 0) return;
    log = _fsopen(path, mode, _SH_DENYNO);
    if (log) {
        if(_dup2(_fileno(log), _fileno(stream))==0)
            resot_console_log_path(stream,path);
        fclose(log);
    }
}

static const char *resot_missing_game_file(void)
{
    static const struct { const char *name; int directory; } required[] = {
        {"prince.bf", 0}, {"video", 1}, {"sound", 1}, {"shaders.bin", 0}
    };
    unsigned i, count = strcmp(RESOT_TARGET_ID, "xbox-retail") == 0 ? 4 : 3;
    for (i = 0; i < count; ++i) {
        char path[MAX_PATH];
        DWORD attributes;
        snprintf(path, sizeof path, "%s\\%s", resot_game_dir(), required[i].name);
        attributes = GetFileAttributesA(path);
        if (attributes == INVALID_FILE_ATTRIBUTES
            || (required[i].directory != !!(attributes & FILE_ATTRIBUTE_DIRECTORY)))
            return required[i].name;
    }
    return NULL;
}

/* The same merged input report the guest receives, including non-XInput
 * pads and developer pad scripts. Only the focused game can skip a movie. */
int resot_movie_skip_down(void)
{
    extern void *xbox_FramebufferWindowHandle(void);
    extern int xbox_FramebufferKeyDown(int vk);
    extern int usb_gamepad_report(int pad, uint8_t *out, int max);
    uint8_t report[20];
    HWND window = (HWND)xbox_FramebufferWindowHandle();
    if (!window || GetForegroundWindow() != window) return 0;
    return xbox_FramebufferKeyDown(VK_SPACE)
        || (usb_gamepad_report(0, report, sizeof report) == 20 && report[4] > 30);
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

static void resot_thread_dump_once(void)
{
    DWORD self = GetCurrentThreadId();
    DWORD pid = GetCurrentProcessId();

    {
        HANDLE snap;
        THREADENTRY32 te;

        snap = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
        if (snap == INVALID_HANDLE_VALUE)
            return;
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

static DWORD WINAPI resot_thread_dump_main(LPVOID param)
{
    DWORD secs = (DWORD)(uintptr_t)param;
    for (;;) {
        Sleep(secs * 1000);
        resot_thread_dump_once();
    }
}

/* reSOT: one dump when the title has stopped kicking the GPU for 20 s
 * (user run 2026-10-29: after about 30 Special Load Maps, back to the menu
 * from 8101 Bridge Support, the loading screen stayed with 0 KickOffs and
 * the log could not say what the title waited for). Re-armed once it
 * kicks again; RESOT_STALL_DUMP=0 turns it off. */
extern long xbox_Nv2aKickTotal(void);
static DWORD WINAPI resot_stall_watch_main(LPVOID unused)
{
    long last = -1;
    int still = 0, dumped = 0;
    (void)unused;
    for (;;) {
        long now;
        Sleep(5000);
        now = xbox_Nv2aKickTotal();
        if (now != last) { last = now; still = 0; dumped = 0; continue; }
        if (now > 0 && !dumped && ++still >= 4) {
            fprintf(stderr, "[THREADS] no KickOff for 20 s (total %ld): call chains follow\n", now);
            resot_thread_dump_once();
            dumped = 1;
        }
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
    const char *stall = getenv("RESOT_STALL_DUMP");
    int secs = e ? atoi(e) : 0;
    HANDLE th;

    if (!(stall && *stall == '0')) {
        th = CreateThread(NULL, 0, resot_stall_watch_main, NULL, 0, NULL);
        if (th)
            CloseHandle(th);
    }
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

static BOOL load_embedded_xbe(void **out_data, size_t *out_size);

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

    /* A child copy of this executable that only runs extract-xiso for the
     * launcher's ISO installation (launcher.c): no game, no logs. */
    if (__argc >= 2 && __argv && __argv[1] && strcmp(__argv[1], RESOT_XISO_SWITCH) == 0)
        return resot_xiso_child(__argc - 1, __argv + 1);

    /* Resolve an explicit relative asset path before changing directory.
     * Caches and diagnostics belong to this application, independent of the
     * directory from which Explorer/a shortcut/the terminal launched it. */
    resot_options_prepare_config();
    resot_game_dir();
    {
        char directory[MAX_PATH];
        DWORD n = GetModuleFileNameA(NULL, directory, sizeof directory);
        char *slash = n && n < sizeof directory ? strrchr(directory, '\\') : NULL;
        if (n && n < sizeof directory && slash) {
            *slash = 0;
            SetCurrentDirectoryA(directory);
            if (!GetStdHandle(STD_ERROR_HANDLE)
                || GetStdHandle(STD_ERROR_HANDLE) == INVALID_HANDLE_VALUE) {
                CreateDirectoryA("logs", NULL);
                resot_redirect_log(stderr, "logs\\" RESOT_TARGET_ID "-err.txt");
                resot_redirect_log(stdout, "logs\\" RESOT_TARGET_ID "-out.txt");
            }
        }
    }

    /* The title screen: what is installed in the game folder, Start Demo /
     * Start Game, or the game's installation from its Xbox ISO when there
     * are no game files. Before any runtime default below is put into the
     * environment, so that handing over to the other target's executable
     * passes none of this target's settings. run.ps1 (RESOT_LAUNCHER_CONFIGURED)
     * and that hand-over (RESOT_SKIP_LAUNCHER) go straight to the game. */
    {
        int flags = getenv("RESOT_LAUNCHER_CONFIGURED")
                 || (getenv("RESOT_SKIP_LAUNCHER") && *getenv("RESOT_SKIP_LAUNCHER"))
                  ? RESOT_LAUNCHER_NO_SCREEN : 0;
        _putenv_s("RESOT_SKIP_LAUNCHER", "");
        for (;;) {
            const char *missing;
            if (resot_launcher_run(RESOT_TARGET_ID, s_game_dir, sizeof s_game_dir, flags)
                    != RESOT_LAUNCH_HERE)
                return 0;
            /* What this target needs in particular (retail: shaders.bin). */
            if (!(missing = resot_missing_game_file())) break;
            {
                char message[768];
                snprintf(message, sizeof message,
                    "This folder does not contain the supported %s game files.\n\n%s\n\nMissing: %s\n\n"
                    "Choose the game's Xbox ISO to install them.",
                    RESOT_TARGET_ID, resot_game_dir(), missing);
                MessageBoxA(NULL, message, "reSOT - Game files", MB_ICONWARNING);
            }
            flags = RESOT_LAUNCHER_ASK_ISO;
        }
    }

    /* A packaged executable has the same working defaults as run.ps1.
     * The developer launcher supplies its own full configuration. */
    if (!getenv("RESOT_LAUNCHER_CONFIGURED")) {
        const char *defaults[][2] = {
            {"RECOMP_PB_EXEC", "1"}, {"RECOMP_FB_WINDOW", "1"},
            {"RECOMP_VBLANK", "1"}, {"RECOMP_HW", "1"},
            {"RECOMP_AC97_READY", "1"}, {"RECOMP_APU_DSP_ACK", "gp+0x810"},
            {"RECOMP_HEAP_RECLAIM", "1"}
        };
        unsigned i;
        for (i = 0; i < sizeof defaults / sizeof defaults[0]; ++i)
            if (!getenv(defaults[i][0]))
                _putenv_s(defaults[i][0], defaults[i][1]);
    }
#if defined(RESOT_DEFAULT_EXT_VMA) && RESOT_DEFAULT_EXT_VMA
    if (!getenv("RECOMP_EXT_VMA"))
        _putenv_s("RECOMP_EXT_VMA", "1");
#endif
    {
        extern void resot_current_wow(char *, size_t);
        extern void resot_menu_pointer_event(float,float,int);
        extern int resot_menu_scene(void);
        extern void resot_menu_pointer_viewport(float);
        extern void xbox_FramebufferSetMenuPointer(void (*)(float,float,int),int (*)(void),void (*)(float));
        extern void xbox_FramebufferSetWowProvider(void (*)(char *, size_t));
        xbox_FramebufferSetWowProvider(resot_current_wow);
        xbox_FramebufferSetMenuPointer(resot_menu_pointer_event,resot_menu_scene,resot_menu_pointer_viewport);
    }
    resot_options_init();

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
    fprintf(stderr, "[SESSION] target=%s pid=%lu ext-vma=%s xbe=%s\n",
            RESOT_TARGET_ID, GetCurrentProcessId(),
            getenv("RECOMP_EXT_VMA") ? getenv("RECOMP_EXT_VMA") : "0", RESOT_XBE_SHA256);
    printf("Loading compiled Xbox image...\n");

    /* Install VEH handler (first handler in chain) */
    /* Load symbols up front rather than from inside the handler: at fault
     * time the process is already in a bad way, and SymInitialize
     * allocates. Failure is not fatal -- the handler prints no name. */
    SymSetOptions(SYMOPT_DEFERRED_LOADS | SYMOPT_UNDNAME);
    SymInitialize(GetCurrentProcess(), NULL, TRUE);
    AddVectoredExceptionHandler(1, veh_handler);

    /* The checked guest image is part of this native executable. Only the
     * large disc assets are external; default.xbe is a build-time input. */
    if (!load_embedded_xbe(&xbe_data, &xbe_size)) {
        MessageBoxA(NULL, "The compiled game image is missing or damaged. Rebuild or replace this executable.",
                    "reSOT - Invalid executable", MB_ICONERROR);
        return 1;
    }
    /* The game folder was checked by the launcher above. */
    printf("Embedded Xbox image loaded: %zu bytes\n", xbe_size);
    fprintf(stderr, "[BOOT] game folder: %s\n", resot_game_dir());

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
#ifdef RESOT_D3D_NOTIFY_EVENT
    xbox_Nv2aNotifyEvent(RESOT_D3D_DEVICE_GLOBAL, RESOT_D3D_NOTIFY_EVENT, RESOT_D3D_FENCE_STATUS_SHIFT);
#endif
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

static BOOL load_embedded_xbe(void **out_data, size_t *out_size)
{
    HMODULE module = GetModuleHandleA(NULL);
    HRSRC resource = FindResourceA(module, MAKEINTRESOURCEA(101), MAKEINTRESOURCEA(10));
    HGLOBAL loaded = resource ? LoadResource(module, resource) : NULL;
    DWORD size = resource ? SizeofResource(module, resource) : 0;
    const void *source = loaded ? LockResource(loaded) : NULL;
    void *data;
    if (!source || !size || !(data = malloc(size))) return FALSE;
    memcpy(data, source, size);
    /* The lifted code contains fixed addresses for exactly this revision.
     * Verify the embedded copy before mapping or executing any guest code. */
    {
        BCRYPT_ALG_HANDLE algorithm = NULL;
        BCRYPT_HASH_HANDLE hash = NULL;
        unsigned char digest[32];
        char hex[65];
        int ok = 0, i;
        if (BCryptOpenAlgorithmProvider(&algorithm, BCRYPT_SHA256_ALGORITHM, NULL, 0) >= 0
            && BCryptCreateHash(algorithm, &hash, NULL, 0, NULL, 0, 0) >= 0
            && BCryptHashData(hash, data, (ULONG)size, 0) >= 0
            && BCryptFinishHash(hash, digest, sizeof digest, 0) >= 0) {
            for (i = 0; i < 32; ++i) sprintf_s(hex + i * 2, 3, "%02X", digest[i]);
            ok = strcmp(hex, RESOT_XBE_SHA256) == 0;
        }
        if (hash) BCryptDestroyHash(hash);
        if (algorithm) BCryptCloseAlgorithmProvider(algorithm, 0);
        if (!ok) {
            fprintf(stderr, "Unsupported default.xbe for " RESOT_TARGET_ID
                    "; expected SHA-256 " RESOT_XBE_SHA256 "\n");
            free(data);
            return FALSE;
        }
    }
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
