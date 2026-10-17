/* F6: the diagnostics panel. Like F5 a translucent overlay that leaves the
 * game playable, with what the runtime measures (frame, executor, renderer,
 * batch reuse, guest memory, APU voices, DPCs and IRQL), the current world
 * and the end of this run's stderr log. Ctrl+Shift+C, or a click on Copy,
 * puts all of it on the clipboard as text.
 *
 * Every number comes from the runtime copy this executable was built with
 * (xbox_Diag* in port/third_party/xboxrecomp-<target>/src, marked RE-SoT)
 * and is sampled twice a second on the window thread that draws the panel. */
#include <windows.h>
#define PSAPI_VERSION 2
#include <psapi.h>
#include <io.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "options.h"
#include "target.h"

enum { PW = 600, PH = 630, LINE_H = 18, LOG_LINES = 9, COPY_LOG_LINES = 80,
       COPY_X = PW - 82, COPY_Y = 10, COPY_W = 70, COPY_H = 26 };

extern void *xbox_FramebufferWindowHandle(void);
extern int xbox_DiagRenderer(double *out, int n);
extern int xbox_DiagAudio(int *out, int n);
extern int xbox_DiagDpc(int *out, int n);
extern int xbox_DiagMemory(uint32_t *out, int n);
extern int xbox_IrqlRaisedCount(void);
extern int xbox_IrqlTransitions(void);
extern void resot_current_wow(char *out, size_t size);

static volatile LONG s_open;
static SRWLOCK s_lock = SRWLOCK_INIT;
static HDC s_dc;
static HBITMAP s_bitmap;
static uint32_t *s_bits;
static HFONT s_font, s_title_font, s_mono;
static char s_lines[24][200];        /* the measurements, as drawn and copied */
static int s_line_count;
static char s_log[COPY_LOG_LINES][200];   /* [0] is the newest line */
static int s_log_count;
static char s_status[120];
static DWORD s_status_until;

static void text(int x, int y, int width, const char *value, COLORREF color)
{
    RECT r = { x, y, x + width, y + LINE_H + 2 };
    SetTextColor(s_dc, color);
    DrawTextA(s_dc, value, -1, &r, DT_SINGLELINE | DT_VCENTER | DT_END_ELLIPSIS | DT_NOPREFIX);
}

static void box(int x, int y, int w, int h, COLORREF color)
{
    RECT r = { x, y, x + w, y + h };
    HBRUSH brush = CreateSolidBrush(color);
    FillRect(s_dc, &r, brush);
    DeleteObject(brush);
}

/* The panel is drawn at (8, 8) and scaled with the backbuffer, as the
 * runtime composes it (hw_compose_locked: height / 720, at least 0.75,
 * narrowed to fit). */
static float panel_scale(HWND window)
{
    RECT r;
    float scale;
    GetClientRect(window, &r);
    scale = (float)r.bottom / 720.0f;
    if (scale < 0.75f) scale = 0.75f;
    if ((PW + 16) * scale > r.right) scale = (float)r.right / (PW + 16);
    return scale > 0 ? scale : 1;
}

/* The last lines of the file stderr writes to (logs/<target>-err.txt, or
 * whatever run.ps1 redirected it to). */
static void read_log(void)
{
    HANDLE h = (HANDLE)_get_osfhandle(2), f;
    wchar_t path[MAX_PATH];
    char buf[24576], *p, *end;
    DWORD n = 0;
    LARGE_INTEGER size, at;
    int i;
    s_log_count = 0;
    if (h == INVALID_HANDLE_VALUE || !GetFinalPathNameByHandleW(h, path, MAX_PATH, 0))
        return;
    f = CreateFileW(path, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE,
                    NULL, OPEN_EXISTING, 0, NULL);
    if (f == INVALID_HANDLE_VALUE)
        return;
    if (GetFileSizeEx(f, &size)) {
        at.QuadPart = size.QuadPart > (LONGLONG)sizeof buf - 1 ? size.QuadPart - (sizeof buf - 1) : 0;
        if (SetFilePointerEx(f, at, NULL, FILE_BEGIN))
            ReadFile(f, buf, sizeof buf - 1, &n, NULL);
    }
    CloseHandle(f);
    buf[n] = 0;
    end = buf + n;
    while (end > buf && (end[-1] == '\n' || end[-1] == '\r')) *--end = 0;
    /* Walk back over whole lines from the end: s_log[0] is the newest. */
    for (p = end; p > buf && s_log_count < COPY_LOG_LINES; ) {
        char *line = p;
        while (line > buf && line[-1] != '\n') line--;
        if (line == buf && at.QuadPart) break;      /* a partial first line */
        {
            char *q = line;
            size_t len = (size_t)(p - line);
            while (len && (q[len - 1] == '\r')) len--;
            while (len && (*q == ' ' || *q == '\t')) { q++; len--; }
            if (len) {
                if (len >= sizeof s_log[0]) len = sizeof s_log[0] - 1;
                char *dst = s_log[s_log_count++];   /* newest first */
                memcpy(dst, q, len);
                dst[len] = 0;
                for (i = 0; i < (int)len; i++)
                    if ((unsigned char)dst[i] < 32) dst[i] = ' ';
            }
        }
        p = line > buf ? line - 1 : buf;
    }
}

#define LINE(...) do { if (s_line_count < 24) \
    snprintf(s_lines[s_line_count++], sizeof s_lines[0], __VA_ARGS__); } while (0)

static void sample(void)
{
    static DWORD last;
    static LONG last_dpc[2];
    static int last_irql, last_vp;
    static ULONGLONG last_cpu;
    double r[15] = {0};
    int a[6] = {0}, d[4] = {0}, irql, dt_ok;
    uint32_t m[8] = {0};
    DWORD now = GetTickCount(), dt = now - last;
    char wow[256] = "", settings[160] = "";
    PROCESS_MEMORY_COUNTERS_EX pm;
    FILETIME c, e, k, u;
    ULONGLONG cpu = 0;
    SYSTEM_INFO si;
    double reuse;

    dt_ok = last && dt > 0;
    xbox_DiagRenderer(r, 15);
    xbox_DiagAudio(a, 6);
    xbox_DiagDpc(d, 4);
    xbox_DiagMemory(m, 8);
    irql = xbox_IrqlTransitions();
    resot_current_wow(wow, sizeof wow);
    resot_options_summary(settings, sizeof settings);
    memset(&pm, 0, sizeof pm);
    pm.cb = sizeof pm;
    GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS *)&pm, sizeof pm);
    if (GetProcessTimes(GetCurrentProcess(), &c, &e, &k, &u))
        cpu = (((ULONGLONG)k.dwHighDateTime << 32) | k.dwLowDateTime)
            + (((ULONGLONG)u.dwHighDateTime << 32) | u.dwLowDateTime);
    GetSystemInfo(&si);

    s_line_count = 0;
    LINE("Frame: %.1f fps, %.2f ms per frame; %s", r[0], r[1], settings);
    LINE("Executor: %.2f ms (interpreter %.2f, draw calls %.2f); present %.2f ms; title %.2f ms",
         r[10], r[8], r[9], r[11], r[12]);
    LINE("Per frame: %.0f draws (%.0f GPU-transformed, %.0f interpreted), %.0f triangles,"
         " %.0f vertices, %.1f texture uploads", r[2], r[3], r[4], r[5], r[7], r[6]);
    reuse = r[13] + r[14] > 0 ? 100.0 * r[13] / (r[13] + r[14]) : 0.0;
    LINE("Batch reuse: %.0f hits, %.0f misses (%.1f%% reused, since start)", r[13], r[14], reuse);
    LINE("Guest heap: %.1f of %.1f MB reached, %.1f MB in %u live blocks",
         m[0] / 1024.0, m[2] / 1024.0, m[1] / 1024.0, m[6]);
    LINE("Contiguous: %.1f of %.1f MB reached, %.1f MB in %u tracked blocks",
         m[3] / 1024.0, m[5] / 1024.0, m[4] / 1024.0, m[7]);
    LINE("Host process: %.0f MB working set, %.0f MB private, CPU %.0f%% of one core (%lu cores)",
         pm.WorkingSetSize / 1048576.0, pm.PrivateUsage / 1048576.0,
         dt_ok && cpu >= last_cpu ? (double)(cpu - last_cpu) / (dt * 100.0) : 0.0,
         (unsigned long)si.dwNumberOfProcessors);
    LINE("Audio: voices 2D %d, 3D %d, multipass %d; %d streaming; %d held by a lock;"
         " %.0f VP frames/s", a[0], a[1], a[2], a[3], a[4],
         dt_ok ? (a[5] - last_vp) * 1000.0 / dt : 0.0);
    LINE("DPC: %.0f queued/s, %.0f run/s, %d pending, %d dropped since start",
         dt_ok ? (d[0] - last_dpc[0]) * 1000.0 / dt : 0.0,
         dt_ok ? (d[1] - last_dpc[1]) * 1000.0 / dt : 0.0, d[3], d[2]);
    LINE("IRQL: %d threads at DISPATCH_LEVEL or above; %.0f transitions/s",
         xbox_IrqlRaisedCount(), dt_ok ? (irql - last_irql) * 1000.0 / dt : 0.0);
    LINE("World: %s", wow[0] ? wow : "None");
    last = now; last_cpu = cpu; last_vp = a[5]; last_irql = irql;
    last_dpc[0] = d[0]; last_dpc[1] = d[1];
    read_log();
}

static void copy_all(HWND window)
{
    size_t size = 512 + sizeof s_lines + sizeof s_log + 4 * COPY_LOG_LINES, used = 0;
    HGLOBAL mem;
    char *out;
    int i, lines;
    SYSTEMTIME t;
    AcquireSRWLockExclusive(&s_lock);
    sample();
    mem = GlobalAlloc(GMEM_MOVEABLE, size);
    out = mem ? (char *)GlobalLock(mem) : NULL;
    if (!out) { ReleaseSRWLockExclusive(&s_lock); if (mem) GlobalFree(mem); return; }
    GetLocalTime(&t);
    used += (size_t)snprintf(out + used, size - used,
        "reSOT diagnostics, %s, %04u-%02u-%02u %02u:%02u:%02u\r\n",
        RESOT_TARGET_ID, t.wYear, t.wMonth, t.wDay, t.wHour, t.wMinute, t.wSecond);
    for (i = 0; i < s_line_count && used < size; i++)
        used += (size_t)snprintf(out + used, size - used, "%s\r\n", s_lines[i]);
    if (used < size)
        used += (size_t)snprintf(out + used, size - used, "--- last %d log lines ---\r\n", s_log_count);
    for (i = s_log_count - 1; i >= 0 && used < size; i--)
        used += (size_t)snprintf(out + used, size - used, "%s\r\n", s_log[i]);
    lines = s_line_count + s_log_count;
    GlobalUnlock(mem);
    if (OpenClipboard(window)) {
        EmptyClipboard();
        if (SetClipboardData(CF_TEXT, mem)) mem = NULL;
        CloseClipboard();
    }
    if (mem) GlobalFree(mem);
    snprintf(s_status, sizeof s_status, "Copied %d lines to the clipboard.", lines);
    s_status_until = GetTickCount() + 3000;
    ReleaseSRWLockExclusive(&s_lock);
}

int resot_diag_event(void *handle, unsigned message, uintptr_t wp, intptr_t lp)
{
    HWND window = (HWND)handle;
    if ((message == WM_KEYDOWN || message == WM_SYSKEYDOWN) && wp == VK_F6) {
        if (!(lp & (1L << 30)))
            InterlockedExchange(&s_open, !s_open);
        return 1;
    }
    if (!InterlockedCompareExchange(&s_open, 0, 0))
        return 0;
    if (message == WM_KEYDOWN && wp == 'C' && !(lp & (1L << 30))
            && (GetKeyState(VK_CONTROL) & 0x8000) && (GetKeyState(VK_SHIFT) & 0x8000)) {
        copy_all(window);
        return 1;
    }
    if (message == WM_LBUTTONDOWN || message == WM_LBUTTONUP || message == WM_LBUTTONDBLCLK) {
        float scale = panel_scale(window);
        int x = (int)(((short)LOWORD(lp)) / scale) - 8;
        int y = (int)(((short)HIWORD(lp)) / scale) - 8;
        if (x >= COPY_X && x < COPY_X + COPY_W && y >= COPY_Y && y < COPY_Y + COPY_H) {
            if (message == WM_LBUTTONDOWN)
                copy_all(window);
            return 1;                /* the game does not see this click */
        }
    }
    return 0;
}

int resot_diag_panel(const uint32_t **pixels, uint32_t *width, uint32_t *height)
{
    static DWORD drawn;
    DWORD now = GetTickCount();
    size_t n;
    int i, y;
    if (!InterlockedCompareExchange(&s_open, 0, 0))
        return 0;
    AcquireSRWLockExclusive(&s_lock);
    if (!s_dc) {
        BITMAPINFO info;
        memset(&info, 0, sizeof info);
        info.bmiHeader.biSize = sizeof info.bmiHeader;
        info.bmiHeader.biWidth = PW;
        info.bmiHeader.biHeight = -PH;
        info.bmiHeader.biPlanes = 1;
        info.bmiHeader.biBitCount = 32;
        s_dc = CreateCompatibleDC(NULL);
        s_bitmap = s_dc ? CreateDIBSection(s_dc, &info, DIB_RGB_COLORS, (void **)&s_bits, NULL, 0) : NULL;
        if (!s_dc || !s_bitmap) { ReleaseSRWLockExclusive(&s_lock); return 0; }
        SelectObject(s_dc, s_bitmap);
        SetBkMode(s_dc, TRANSPARENT);
        s_font = CreateFontA(15, 0, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE, DEFAULT_CHARSET, 0, 0,
                             CLEARTYPE_QUALITY, 0, "Segoe UI");
        s_title_font = CreateFontA(22, 0, 0, 0, FW_SEMIBOLD, FALSE, FALSE, FALSE, DEFAULT_CHARSET,
                                   0, 0, CLEARTYPE_QUALITY, 0, "Segoe UI");
        s_mono = CreateFontA(13, 0, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE, DEFAULT_CHARSET, 0, 0,
                             CLEARTYPE_QUALITY, FIXED_PITCH, "Consolas");
        drawn = 0;
    }
    if (!drawn || now - drawn >= 500) {
        static const char *const heads[] = { "Frame", "Executor", "Per frame", "Batch reuse",
            "Guest heap", "Contiguous", "Host process", "Audio", "DPC", "IRQL", "World" };
        drawn = now;
        sample();
        for (n = 0; n < (size_t)PW * PH; n++) s_bits[n] = 0xC0151C29u;
        SelectObject(s_dc, s_title_font);
        text(16, 8, 400, "reSOT Diagnostics", RGB(245, 248, 255));
        SelectObject(s_dc, s_font);
        box(COPY_X, COPY_Y, COPY_W, COPY_H, RGB(46, 72, 99));
        text(COPY_X + 17, COPY_Y + 3, COPY_W - 10, "Copy", RGB(235, 242, 251));
        text(16, 34, PW - 32, now < s_status_until ? s_status :
             "F6 closes. Ctrl+Shift+C copies everything below.", RGB(147, 170, 199));
        y = 60;
        for (i = 0; i < s_line_count; i++, y += 2 * LINE_H) {
            const char *colon = strchr(s_lines[i], ':');
            box(12, y, PW - 24, 2 * LINE_H - 2, (i & 1) ? RGB(28, 37, 51) : RGB(24, 31, 44));
            text(18, y, PW - 36, i < (int)(sizeof heads / sizeof heads[0]) ? heads[i] : "",
                 RGB(110, 193, 249));
            text(30, y + LINE_H - 2, PW - 48, colon ? colon + 2 : s_lines[i], RGB(220, 229, 242));
        }
        y += 4;
        text(16, y, PW - 32, "Log (newest last)", RGB(110, 193, 249));
        y += LINE_H + 2;
        SelectObject(s_dc, s_mono);
        for (i = s_log_count < LOG_LINES ? s_log_count - 1 : LOG_LINES - 1; i >= 0; i--, y += 15) {
            RECT r = { 18, y, PW - 14, y + 15 };
            SetTextColor(s_dc, RGB(185, 200, 220));
            DrawTextA(s_dc, s_log[i], -1, &r, DT_SINGLELINE | DT_END_ELLIPSIS | DT_NOPREFIX);
        }
        GdiFlush();
        for (n = 0; n < (size_t)PW * PH; n++)
            s_bits[n] = (s_bits[n] & 0xFFFFFFu) |
                ((s_bits[n] & 0xFFFFFFu) == 0x151C29u ? 0xC0000000u : 0xFF000000u);
    }
    *pixels = s_bits; *width = PW; *height = PH;
    ReleaseSRWLockExclusive(&s_lock);
    return 1;
}
