/**
 * reSOT - Android host entry point shared by both recompiled Xbox targets.
 *
 * The counterpart of port/windows/src/main.c. One shared library per target
 * (libresot_xbox-demo.so, libresot_xbox-retail.so) is loaded by GameActivity
 * in its own process; SDL calls SDL_main here on its SDLThread with:
 *
 *   --game <dir>   the installed game folder (the extracted disc), which
 *                  holds default.xbe, prince.bf, video, sound, ...
 *   --data <dir>   the app's external files folder (Android/data/
 *                  com.fulger.resot/files): logs, saves, options
 *
 * Unlike Windows, default.xbe is not embedded: it is read from the game
 * folder and must have this target's SHA-256 (target.h) before any of it is
 * mapped. The SDL thread keeps the window and its events; the lifted entry
 * point runs on a thread of its own with a large stack.
 */

#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <jni.h>
#include <android/log.h>
#include <dlfcn.h>
#include <errno.h>
#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/resource.h>
#include <time.h>
#include <ucontext.h>
#include <unistd.h>

#include "platform/win32_compat.h"
#include "kernel.h"
#include "xbox_memory_layout.h"
#include "apu.h"
#include "target.h"
#include "host_files.h"
#include "sha256.h"
#include "../../windows/src/options.h"

extern RECOMP_TLS uint32_t g_eax, g_ecx, g_edx, g_esp;
extern RECOMP_TLS uint32_t g_ebx, g_esi, g_edi;
extern ptrdiff_t g_xbox_mem_offset;
extern MCPXAPUState *g_apu_state;

extern void xbe_entry_point(void);
extern int recomp_dispatch_init(void);
extern bool apu_hook_handle_mmio(void *ctx, uintptr_t fault_addr,
                                 uint32_t fault_xbox_va, int is_write);
extern void xbox_OhciInit(void);
extern int  xbox_OhciOwnsAddress(uint32_t xbox_va);
extern int  xbox_OhciHandleMmio(void *ctx, uint32_t xbox_va);
extern int  xbox_Ac97HandleFault(void *ucontext, uintptr_t fault);
extern void xbox_path_init(const char *game_dir, const char *save_dir);
extern void xbox_FramebufferAndroidSetWindow(void *sdl_window);
extern void xbox_FramebufferSetWowProvider(void (*)(char *, size_t));
extern void resot_current_wow(char *, size_t);
extern void resot_android_input_start(SDL_Window *window);
extern void resot_android_input_event(const SDL_Event *event);

#define TAG "reSOT"
#define APU_TRAP_BASE 0xFE800000u
#define APU_TRAP_END  0xFE880000u

static char s_game_dir[1024], s_data_dir[1024];
static SDL_Window *s_window;
static volatile int s_game_running;
static pthread_t s_event_thread, s_title_thread;
static __thread int s_profile_role = -1;
static pthread_mutex_t s_foreground_lock = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t s_foreground_changed = PTHREAD_COND_INITIALIZER;
static int s_foreground = 1;
static unsigned s_resume_generation;
/* RE-SoT: thermal events set an effective cap without touching the user's INI.
 * No JNI, temperature polling or allocation on the frame pacing hot path. */
static int s_thermal_frame_limit;
JNIEXPORT void JNICALL Java_com_fulger_resot_GameActivity_nativeThermalFrameLimit(
    JNIEnv *env, jclass cls, jint fps)
{
    (void)env; (void)cls;
    if (fps!=0 && fps!=30 && fps!=45 && fps!=60 && fps!=90) return;
    int old=__atomic_exchange_n(&s_thermal_frame_limit,(int)fps,__ATOMIC_RELAXED);
    if(old!=fps) fprintf(stderr,"[POWER] Android thermal FPS budget: %d (0 = user limit)\n",(int)fps);
}
int resot_android_effective_frame_limit(int configured)
{
    int cap=__atomic_load_n(&s_thermal_frame_limit,__ATOMIC_RELAXED);
    return cap && (!configured || cap<configured)?cap:configured;
}

/* Park GPU work when the activity is hidden. The SDL event thread remains
 * available to wake it, so no polling or guest timing changes are needed. */
void resot_android_wait_foreground(void)
{
    pthread_mutex_lock(&s_foreground_lock);
    while (!s_foreground) pthread_cond_wait(&s_foreground_changed, &s_foreground_lock);
    pthread_mutex_unlock(&s_foreground_lock);
}

static void set_foreground(int active)
{
    pthread_mutex_lock(&s_foreground_lock);
    if (active && !s_foreground) ++s_resume_generation;
    s_foreground = active;
    pthread_cond_broadcast(&s_foreground_changed);
    pthread_mutex_unlock(&s_foreground_lock);
    fprintf(stderr,"[POWER] renderer %s\n",active?"resumed":"suspended in background");
}

unsigned resot_android_resume_generation(void)
{
    unsigned generation;
    pthread_mutex_lock(&s_foreground_lock);
    generation = s_resume_generation;
    pthread_mutex_unlock(&s_foreground_lock);
    return generation;
}

/* SDL queues Android lifecycle events just before its event pump may block
 * on pause. Handle them when queued, as SDL_events.h requires, rather than
 * waiting for SDL_WaitEventTimeout to return. This also works if the GPU
 * thread pumps lifecycle events while Android replaces its native surface. */
static bool SDLCALL lifecycle_watch(void *unused, SDL_Event *event)
{
    (void)unused;
    if (event->type == SDL_EVENT_WILL_ENTER_BACKGROUND) set_foreground(0);
    if (event->type == SDL_EVENT_DID_ENTER_FOREGROUND) set_foreground(1);
    return true;
}

/* Keep the display request in step with the shared live FPS option. */
void resot_android_set_frame_limit(int fps)
{
    JNIEnv *env = (JNIEnv *)SDL_GetAndroidJNIEnv();
    jobject activity = (jobject)SDL_GetAndroidActivity();
    if (!env || !activity) return;
    jclass cls = (*env)->GetObjectClass(env, activity);
    jmethodID method = cls ? (*env)->GetMethodID(env, cls, "setRenderFrameLimit", "(I)V") : NULL;
    if (method) (*env)->CallVoidMethod(env, activity, method, (jint)fps);
    if ((*env)->ExceptionCheck(env)) {
        (*env)->ExceptionClear(env);
        fprintf(stderr, "[VIDEO] display frame-limit request failed\n");
    }
    if (cls) (*env)->DeleteLocalRef(env, cls);
    (*env)->DeleteLocalRef(env, activity);
}
static uintptr_t s_profile_pc[2];

static void profile_signal(int signal_number, siginfo_t *info, void *context)
{
    (void)signal_number; (void)info;
    if (s_profile_role >= 0)
        __atomic_store_n(&s_profile_pc[s_profile_role],
                         (uintptr_t)((ucontext_t *)context)->uc_mcontext.pc, __ATOMIC_RELAXED);
}

static void *profile_main(void *unused)
{
    struct { uintptr_t pc; unsigned role, hits; } samples[400] = {0};
    unsigned count = 0;
    (void)unused;
    sleep(15);
    for (unsigned tick = 0; tick < 200; tick++) {
        pthread_kill(s_event_thread, SIGUSR2);
        pthread_kill(s_title_thread, SIGUSR2);
        usleep(5000);
        for (unsigned role = 0; role < 2; role++) {
            uintptr_t pc = __atomic_exchange_n(&s_profile_pc[role], 0, __ATOMIC_RELAXED);
            unsigned entry;
            if (!pc) continue;
            for (entry = 0; entry < count; entry++)
                if (samples[entry].pc == pc && samples[entry].role == role) break;
            if (entry == count && count < 400) {
                samples[count].pc = pc; samples[count].role = role; count++;
            }
            if (entry < count) samples[entry].hits++;
        }
    }
    for (unsigned entry = 0; entry < count; entry++) {
        Dl_info symbol = {0};
        dladdr((void *)samples[entry].pc, &symbol);
        fprintf(stderr, "[CPU profile] %s %u %s+0x%llx %s\n",
                samples[entry].role ? "title" : "events", samples[entry].hits,
                symbol.dli_fname ? symbol.dli_fname : "?",
                (unsigned long long)(samples[entry].pc - (uintptr_t)symbol.dli_fbase),
                symbol.dli_sname ? symbol.dli_sname : "?");
    }
    fprintf(stderr, "[CPU profile] completed; stopping diagnostic session\n");
    fflush(stderr);
    _exit(0);
    return NULL;
}

const char *resot_android_data_dir(void) { return s_data_dir; }

/* ── logs ──────────────────────────────────────────────────── */

/* <data>/logs/<target>-err.txt and -out.txt, the previous run kept in
 * logs/history, as on Windows. */
static void redirect_log(FILE *stream, const char *name)
{
    char path[1200], archive[1400], dir[1100];
    time_t now = time(NULL);
    struct tm tm;
    snprintf(dir, sizeof dir, "%s/logs", s_data_dir);
    mkdir(dir, 0755);
    snprintf(path, sizeof path, "%s/%s", dir, name);
    if (access(path, F_OK) == 0) {
        snprintf(archive, sizeof archive, "%s/history", dir);
        mkdir(archive, 0755);
        localtime_r(&now, &tm);
        snprintf(archive, sizeof archive, "%s/history/%04d%02d%02d-%02d%02d%02d-%d-%s", dir,
                 tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min,
                 tm.tm_sec, (int)getpid(), name);
        rename(path, archive);
    }
    if (!freopen(path, "w", stream))
        __android_log_print(ANDROID_LOG_WARN, TAG, "cannot open %s: %s", path, strerror(errno));
}

static void *log_flush_main(void *unused)
{
    (void)unused;
    for (;;) {
        usleep(250000);
        fflush(stderr);
        fflush(stdout);
    }
    return NULL;
}

/* ── MMIO and crashes ──────────────────────────────────────── */

static struct sigaction s_old_segv, s_old_bus;

/* The registers that have to fault to be answered (the APU, the AC'97 bus
 * master and, with RECOMP_USB, the OHCI controllers), as veh_handler does on
 * Windows. Anything else is a crash: it is described and handed to the
 * previous handler (Android's debuggerd), which writes the tombstone. */
static void segv_handler(int sig, siginfo_t *si, void *uctx)
{
    uintptr_t fault = (uintptr_t)si->si_addr;
    uintptr_t rel = fault - (uintptr_t)g_xbox_mem_offset;
    ucontext_t *uc = (ucontext_t *)uctx;

    if (sig == SIGSEGV && g_xbox_mem_offset && rel < 0x100000000ull) {
        uint32_t va = (uint32_t)rel;
        if (va >= APU_TRAP_BASE && va < APU_TRAP_END
                && apu_hook_handle_mmio(uctx, fault, va, 0))
            return;
        if (xbox_OhciOwnsAddress(va) && xbox_OhciHandleMmio(uctx, va))
            return;
        if (xbox_Ac97HandleFault(uctx, fault))
            return;
    }
    fprintf(stderr, "[CRASH] signal %d at PC=0x%llX, fault addr=0x%llX\n", sig,
            (unsigned long long)uc->uc_mcontext.pc, (unsigned long long)fault);
    if (g_xbox_mem_offset && rel < 0x100000000ull)
        fprintf(stderr, "  Xbox VA of fault: 0x%08X\n", (uint32_t)rel);
    fprintf(stderr, "  Xbox regs: eax=0x%08X ecx=0x%08X edx=0x%08X esp=0x%08X\n",
            g_eax, g_ecx, g_edx, g_esp);
    fprintf(stderr, "  Xbox regs: ebx=0x%08X esi=0x%08X edi=0x%08X\n", g_ebx, g_esi, g_edi);
    {   /* The lifted routines (sub_XXXXXXXX) and the runtime's exported
         * functions are in the dynamic symbol table: name where it stopped. */
        const char *what[2] = {"PC", "LR"};
        uintptr_t at[2] = {(uintptr_t)uc->uc_mcontext.pc, (uintptr_t)uc->uc_mcontext.regs[30]};
        int i;
        for (i = 0; i < 2; i++) {
            Dl_info info;
            if (dladdr((void *)at[i], &info) && info.dli_fname)
                fprintf(stderr, "  %s: %s+0x%llX (%s+0x%llX)\n", what[i],
                        info.dli_sname ? info.dli_sname : "?",
                        (unsigned long long)(info.dli_saddr ? at[i] - (uintptr_t)info.dli_saddr : 0),
                        strrchr(info.dli_fname, '/') ? strrchr(info.dli_fname, '/') + 1 : info.dli_fname,
                        (unsigned long long)(at[i] - (uintptr_t)info.dli_fbase));
        }
    }
    fflush(stderr);
    __android_log_print(ANDROID_LOG_FATAL, TAG, "crash: signal %d at pc %llx addr %llx", sig,
                        (unsigned long long)uc->uc_mcontext.pc, (unsigned long long)fault);
    /* The instruction faults again on return, now into the old handler. */
    sigaction(SIGSEGV, &s_old_segv, NULL);
    sigaction(SIGBUS, &s_old_bus, NULL);
}

static void install_fault_handler(void)
{
    struct sigaction sa;
    memset(&sa, 0, sizeof sa);
    sa.sa_sigaction = segv_handler;
    sa.sa_flags = SA_SIGINFO | SA_ONSTACK;
    sigemptyset(&sa.sa_mask);
    sigaction(SIGSEGV, &sa, &s_old_segv);
    sigaction(SIGBUS, &sa, &s_old_bus);
}

/* ── the game ──────────────────────────────────────────────── */

static int game_file(const char *name, int directory)
{
    return resot_path_kind(s_game_dir, name, NULL, 0) == (directory ? 2 : 1);
}

static const char *missing_game_file(void)
{
    static const struct { const char *name; int directory; } required[] = {
        {"prince.bf", 0}, {"video", 1}, {"sound", 1}, {"default.xbe", 0}, {"shaders.bin", 0}
    };
    unsigned i, count = strcmp(RESOT_TARGET_ID, "xbox-retail") == 0 ? 5 : 4;
    for (i = 0; i < count; ++i)
        if (!game_file(required[i].name, required[i].directory))
            return required[i].name;
    return NULL;
}

static int load_xbe(void **out_data, size_t *out_size, char *why, size_t why_size)
{
    char path[1200], hex[65];
    ResotSha256 sha;
    FILE *f;
    long size;
    void *data;
    if (!resot_path_kind(s_game_dir, "default.xbe", path, sizeof path))
        snprintf(path, sizeof path, "%s/default.xbe", s_game_dir);
    f = fopen(path, "rb");
    if (!f) { snprintf(why, why_size, "Cannot open %s.", path); return 0; }
    fseek(f, 0, SEEK_END);
    size = ftell(f);
    fseek(f, 0, SEEK_SET);
    data = size > 0 ? malloc((size_t)size) : NULL;
    if (!data || fread(data, 1, (size_t)size, f) != (size_t)size) {
        fclose(f); free(data);
        snprintf(why, why_size, "Cannot read %s.", path);
        return 0;
    }
    fclose(f);
    /* Every address in the lifted code belongs to exactly this revision. */
    resot_sha256_init(&sha);
    resot_sha256_update(&sha, data, (size_t)size);
    resot_sha256_hex(&sha, hex);
    if (strcmp(hex, RESOT_XBE_SHA256) != 0) {
        free(data);
        snprintf(why, why_size, "This default.xbe is not the %s build reSOT supports.\n"
                 "SHA-256 %s, expected %s.", RESOT_TARGET_ID, hex, RESOT_XBE_SHA256);
        return 0;
    }
    *out_data = data;
    *out_size = (size_t)size;
    return 1;
}

static void fail(const char *message)
{
    fprintf(stderr, "[BOOT] %s\n", message);
    fflush(stderr);
    __android_log_print(ANDROID_LOG_ERROR, TAG, "%s", message);
    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "reSOT", message, s_window);
}

static void set_default(const char *name, const char *value)
{
    if (!getenv(name)) setenv(name, value, 1);
}

static void *game_main(void *unused)
{
    s_profile_role = 1;
    void *xbe_data = NULL;
    size_t xbe_size = 0;
    char why[512], save_dir[1200];
    const char *missing;
    (void)unused;
    if (setpriority(PRIO_PROCESS, 0, 0) != 0)
        fprintf(stderr, "[THREAD] game normal priority failed: %s\n", strerror(errno));

    if ((missing = missing_game_file()) != NULL) {
        snprintf(why, sizeof why, "The folder %s does not contain the %s game files.\n\nMissing: %s",
                 s_game_dir, RESOT_TARGET_ID, missing);
        fail(why);
        s_game_running = 0;
        return NULL;
    }
    if (!load_xbe(&xbe_data, &xbe_size, why, sizeof why)) {
        fail(why);
        s_game_running = 0;
        return NULL;
    }

    printf("=== " RESOT_TARGET_NAME " - static recompilation (Android) ===\n");
    fprintf(stderr, "[SESSION] target=%s pid=%d ext-vma=%s xbe=%s\n", RESOT_TARGET_ID, (int)getpid(),
            getenv("RECOMP_EXT_VMA") ? getenv("RECOMP_EXT_VMA") : "0", RESOT_XBE_SHA256);
    fprintf(stderr, "[BOOT] game folder: %s\n", s_game_dir);

    if (!xbox_MemoryLayoutInit(xbe_data, xbe_size)) {
        fail("Failed to initialize the Xbox memory layout: the 4 GB guest address range "
             "could not be reserved.");
        free(xbe_data);
        s_game_running = 0;
        return NULL;
    }
    g_xbox_mem_offset = xbox_GetMemoryOffset();
    printf("Xbox memory mapped. Offset: 0x%llX\n", (unsigned long long)g_xbox_mem_offset);

    if (getenv("RECOMP_AC97_READY")) {
        g_apu_state = mcpx_apu_init_standalone((uint8_t *)xbox_GetMemoryBase());
        fprintf(stderr, "[BOOT] emulated APU %s\n", g_apu_state ? "up" : "FAILED to initialise");
    }
    xbox_kernel_init();
    snprintf(save_dir, sizeof save_dir, "%s/saves/%s", s_data_dir, RESOT_TARGET_ID);
    xbox_path_init(s_game_dir, save_dir);
    xbox_kernel_bridge_init();
#ifdef RESOT_D3D_DEVICE_GLOBAL
    xbox_Nv2aMirrorFence(RESOT_D3D_DEVICE_GLOBAL, RESOT_D3D_FENCE_ISSUED, RESOT_D3D_FENCE_GPU_PTR);
#endif
#ifdef RESOT_DSOUND_CODE_BEGIN
    xbox_SetApuPhysicalCallers(RESOT_DSOUND_CODE_BEGIN, RESOT_DSOUND_CODE_END);
#endif
    xbox_OhciInit();
    g_esp = XBOX_STACK_TOP;
    if (!recomp_dispatch_init())
        fprintf(stderr, "[BOOT] flat dispatch unavailable; indirect calls will use the binary search\n");
    xbox_WatchdogStart();

    printf("\nStarting game...\n");
    fflush(stdout);
    xbe_entry_point();
    printf("\nGame returned.\n");
    fflush(stdout);
    _exit(0);
    return NULL;
}

/* ── SDL_main ──────────────────────────────────────────────── */

int SDL_main(int argc, char **argv)
{
    s_profile_role = 0;
    s_event_thread = pthread_self();
    pthread_t thread, flush;
    pthread_attr_t attr;
    int i;

    for (i = 1; i + 1 < argc; i++) {
        if (!strcmp(argv[i], "--game")) snprintf(s_game_dir, sizeof s_game_dir, "%s", argv[++i]);
        else if (!strcmp(argv[i], "--data")) snprintf(s_data_dir, sizeof s_data_dir, "%s", argv[++i]);
    }
    if (!s_data_dir[0]) snprintf(s_data_dir, sizeof s_data_dir, "%s", s_game_dir);
    if (chdir(s_data_dir) != 0)
        __android_log_print(ANDROID_LOG_WARN, TAG, "chdir %s: %s", s_data_dir, strerror(errno));

    if (!getenv("RESOT_LOG_LOGCAT")) {
        redirect_log(stderr, RESOT_TARGET_ID "-err.txt");
        redirect_log(stdout, RESOT_TARGET_ID "-out.txt");
    }
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IOFBF, 1 << 16);
    pthread_create(&flush, NULL, log_flush_main, NULL);
    pthread_detach(flush);
    __android_log_print(ANDROID_LOG_INFO, TAG, "%s: game %s, data %s", RESOT_TARGET_ID,
                        s_game_dir, s_data_dir);

    /* The working defaults of a packaged Windows executable (main.c), with
     * the only Android renderer. */
    set_default("RECOMP_PB_EXEC", "1");
    set_default("RECOMP_FB_WINDOW", "1");
    set_default("RECOMP_VBLANK", "1");
    set_default("RECOMP_HW", "1");
    set_default("RECOMP_AC97_READY", "1");
    set_default("RECOMP_APU_DSP_ACK", "gp+0x810");
    set_default("RECOMP_HEAP_RECLAIM", "1");
    set_default("RESOT_RENDERER", "vulkan");
    /* RE-SoT: opt-in same-scene packet decoder A/B; no per-frame file checks.
     * The shared executor polls this existing file at its report cadence. */
    if (access("pb-payload-control", F_OK) == 0)
        set_default("RESOT_PB_PAYLOAD_CONTROL", "pb-payload-control");
    /* RE-SoT: opt-in live geometry-cache comparison, shared native encoder. */
    if (access("geometry-cache-control", F_OK) == 0)
        set_default("RESOT_NATIVE_GEOMETRY_CONTROL", "geometry-cache-control");
    /* Opt-in developer frame capture: avoid a per-frame filesystem probe
     * in ordinary runs. The second file triggers the existing one-frame trace. */
    /* RE-SoT: optional per-game A/B override of automatic driver workarounds.
     * A file containing 0 or 1 is read only at boot; no persistent setting
     * or saved preference is rewritten. Windows uses the same environment. */
    {
        FILE *mode = fopen("gpu-compatibility", "rb");
        if (mode) {
            int c = fgetc(mode);
            fclose(mode);
            if (c == '0' || c == '1') set_default("RESOT_NATIVE_COMPAT", c == '1' ? "1" : "0");
        }
    }
    if (access("frame-trace-enable", F_OK) == 0)
        set_default("RECOMP_FRAME_TRACE", "frame-trace.flag");
    if (access("menu-pointer-trace-enable", F_OK) == 0)
        set_default("RESOT_POINTER_TRACE", "1");
#if defined(RESOT_DEFAULT_EXT_VMA) && RESOT_DEFAULT_EXT_VMA
    set_default("RECOMP_EXT_VMA", "1");
#endif
#ifdef RESOT_PROJECTED_UI
    set_default("RECOMP_HW_PROJECTED_UI", "1");
#endif

    if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMEPAD | SDL_INIT_AUDIO | SDL_INIT_EVENTS)) {
        __android_log_print(ANDROID_LOG_ERROR, TAG, "SDL_Init: %s", SDL_GetError());
        return 1;
    }
    if (!SDL_AddEventWatch(lifecycle_watch, NULL)) {
        fail("Could not register Android lifecycle handling.");
        return 1;
    }
    {
        extern void resot_android_driver_init(int, char **);
        resot_android_driver_init(argc,argv);
    }
    SDL_SetHint(SDL_HINT_ORIENTATIONS, "LandscapeLeft LandscapeRight");
    s_window = SDL_CreateWindow("reSOT - " RESOT_TARGET_NAME, 0, 0,
                                SDL_WINDOW_FULLSCREEN | SDL_WINDOW_HIGH_PIXEL_DENSITY);
    if (!s_window) {
        __android_log_print(ANDROID_LOG_ERROR, TAG, "SDL_CreateWindow: %s", SDL_GetError());
        return 1;
    }
    /* Use the landscape drawable, including the device's ultrawide sides,
     * before either target's projection hooks or the renderer cache Hor+.
     * Keep an explicit environment override; Windows retains its 16:9 default. */
    {
        int width = 0, height = 0;
        char aspect[48];
        if (SDL_GetWindowSizeInPixels(s_window, &width, &height)
            && height > 0 && width >= height
            && (double)width / height >= 4.0 / 3.0
            && (double)width / height <= 4.0) {
            snprintf(aspect, sizeof aspect, "%d:%d", width, height);
            set_default("RECOMP_HW_ASPECT", aspect);
        }
#ifdef RESOT_DEFAULT_ASPECT
        else set_default("RECOMP_HW_ASPECT", RESOT_DEFAULT_ASPECT);
#endif
        fprintf(stderr, "[VIDEO] Android drawable %dx%d, Hor+ aspect %s\n",
                width, height, getenv("RECOMP_HW_ASPECT")
                    ? getenv("RECOMP_HW_ASPECT") : "4:3");
    }
    xbox_FramebufferAndroidSetWindow(s_window);
    {
        extern void xbox_FramebufferSetWowProvider(void (*)(char *, size_t));
        xbox_FramebufferSetWowProvider(resot_current_wow);
    }
    resot_options_init();
    resot_android_input_start(s_window);
    install_fault_handler();

    pthread_attr_init(&attr);
    pthread_attr_setstacksize(&attr, 64u << 20);
    s_game_running = 1;
    if (pthread_create(&thread, &attr, game_main, NULL) != 0) {
        fail("Could not start the game thread.");
        return 1;
    }
    pthread_attr_destroy(&attr);
    s_title_thread = thread;
    pthread_detach(thread);
    if (access("cpu-profile-enable", F_OK) == 0) {
        struct sigaction action = {0};
        pthread_t profiler;
        action.sa_sigaction = profile_signal;
        action.sa_flags = SA_SIGINFO | SA_RESTART;
        sigemptyset(&action.sa_mask);
        sigaction(SIGUSR2, &action, NULL);
        if (pthread_create(&profiler, NULL, profile_main, NULL) == 0)
            pthread_detach(profiler);
    }

    /* The window's events: input, and the activity's lifecycle. */
    for (;;) {
        SDL_Event event;
        while (SDL_WaitEventTimeout(&event, 8)) {
            if (event.type == SDL_EVENT_QUIT || event.type == SDL_EVENT_TERMINATING) {
                fprintf(stderr, "  [FBWIN] close requested; exiting game process\n");
                fflush(stderr);
                _exit(0);
            }
            resot_android_input_event(&event);
        }
        if (!s_game_running) {
            /* The game could not start: the message was shown, go back. */
            fflush(stderr);
            _exit(1);
        }
    }
    return 0;
}
