/**
 * reSOT - title screen and game installer, shown before the game starts.
 *
 * With extracted game files in the game folder the screen names what is
 * installed there, the demo or the retail game, from default.xbe's SHA-256
 * (the same hashes tools/recomp.ps1 checks) or, without default.xbe, from the
 * files only one of them has; Start Demo and Start Game run this executable or
 * hand over to the other target's executable beside it. Without game files
 * the player chooses the game's Xbox ISO, which extract-xiso
 * (port/third_party/extract-xiso, run in a child copy of this executable)
 * extracts into a folder beside the executable; that folder becomes the game
 * folder and is remembered in resot-options.ini ([Launcher] GameDir).
 *
 * Everything is drawn into one 32-bit back buffer: a night-to-sand gradient
 * with dunes and a Persian arch, drifting sand, the reSOT logo, and the
 * Atlantis MF face for the title and buttons when the build embedded it
 * (port/windows/res/AtlantisMF.ttf), Palatino Linotype otherwise.
 */

#define COBJMACROS
#include <windows.h>
#include <windowsx.h>
#include <shobjidl.h>
#include <shellapi.h>
#include <wincodec.h>
#include <bcrypt.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include "launcher.h"

#if !defined(RESOT_DEMO_XBE_SHA256) || !defined(RESOT_RETAIL_XBE_SHA256)
#error "CMakeLists.txt passes both targets' XBE hashes (source/<target>/target.h)"
#endif

#define GITHUB_URL   L"https://github.com/FulGerNet/rePOP"
#define GITHUB_TEXT  L"github.com/FulGerNet/rePOP"
#define WIN_W 1000
#define WIN_H 640
#define RES_FONT 201          /* port/windows/res/resot.rc */
#define RES_LOGO 202
#define LOGO_SIZE 188
#define TITLE_H 84
#define N_SAND 260
#define WM_APP_ASK_ISO   (WM_APP + 1)
#define WM_APP_EXTRACTED (WM_APP + 2)

enum { GAME_NONE, GAME_DEMO, GAME_RETAIL };
enum { BTN_DEMO, BTN_GAME, BTN_ISO, BTN_GITHUB, BTN_CLOSE, BTN_CANCEL, BTN_COUNT };

typedef struct {
    int kind;                /* GAME_* */
    int present;             /* prince.bf, video and sound are there */
    int exact;               /* default.xbe is the build reSOT was lifted from */
    wchar_t line[160];       /* what is installed */
    wchar_t note[200];       /* a warning, or empty */
} GameInfo;

typedef struct { RECT r; int enabled, visible; } Button;
typedef struct { float x, y, vx, vy, size, alpha, phase; int glint; } Grain;

static struct {
    HWND hwnd;
    HDC dc;
    HBITMAP bmp;
    uint32_t *px, *bg;
    HDC logo_dc;
    HBITMAP logo_bmp;
    int logo_w, logo_h;
    uint8_t *title_mask;              /* WIN_W x TITLE_H coverage of the title */
    HANDLE font_mem;
    int atlantis;
    HFONT f_title, f_button, f_sub, f_text, f_small, f_label;
    Button btn[BTN_COUNT];
    int hover, pressed, focus, tracking;
    Grain sand[N_SAND];
    uint32_t rng;
    ULONGLONG last_tick;
    float time;

    const char *target_id;
    int this_kind, flags, running, result;
    wchar_t exe_dir[MAX_PATH], exe_path[MAX_PATH], sibling[MAX_PATH];
    int sibling_exists;
    char game_dir[MAX_PATH];
    GameInfo info;

    /* extraction (worker thread) */
    int extracting;
    CRITICAL_SECTION lock;
    volatile LONG64 done_bytes, total_bytes;
    volatile LONG cancel;
    HANDLE child, worker;
    wchar_t iso_w[MAX_PATH], status[260], error[400];
    char iso_a[MAX_PATH], out_a[MAX_PATH];
} L;

/* ── small helpers ─────────────────────────────────────────── */

static int to_ansi(const wchar_t *w, char *out, size_t size)
{
    BOOL lossy = FALSE;
    int n = WideCharToMultiByte(CP_ACP, WC_NO_BEST_FIT_CHARS, w, -1, out, (int)size, NULL, &lossy);
    if (!n || lossy) { if (size) out[0] = 0; return 0; }
    return 1;
}

static void to_wide(const char *a, wchar_t *out, size_t count)
{
    if (!MultiByteToWideChar(CP_ACP, 0, a, -1, out, (int)count) && count) out[0] = 0;
}

static int path_kind(const char *dir, const char *name)
{
    char path[MAX_PATH];
    DWORD attributes;
    if (snprintf(path, sizeof path, "%s\\%s", dir, name) >= (int)sizeof path) return 0;
    attributes = GetFileAttributesA(path);
    if (attributes == INVALID_FILE_ATTRIBUTES) return 0;
    return attributes & FILE_ATTRIBUTE_DIRECTORY ? 2 : 1;
}

static int game_files_present(const char *dir)
{
    return dir && dir[0] && path_kind(dir, "prince.bf") == 1
        && path_kind(dir, "video") == 2 && path_kind(dir, "sound") == 2;
}

static int sha256_file(const char *path, char hex[65])
{
    HANDLE file = CreateFileA(path, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
    BCRYPT_ALG_HANDLE algorithm = NULL;
    BCRYPT_HASH_HANDLE hash = NULL;
    unsigned char digest[32], *buffer = NULL;
    DWORD got;
    int ok = 0, i;
    if (file == INVALID_HANDLE_VALUE) return 0;
    buffer = (unsigned char *)malloc(1 << 20);
    if (buffer && BCryptOpenAlgorithmProvider(&algorithm, BCRYPT_SHA256_ALGORITHM, NULL, 0) >= 0
        && BCryptCreateHash(algorithm, &hash, NULL, 0, NULL, 0, 0) >= 0) {
        ok = 1;
        while (ok && ReadFile(file, buffer, 1 << 20, &got, NULL) && got)
            ok = BCryptHashData(hash, buffer, got, 0) >= 0;
        ok = ok && BCryptFinishHash(hash, digest, sizeof digest, 0) >= 0;
    }
    if (ok)
        for (i = 0; i < 32; ++i) sprintf_s(hex + i * 2, 3, "%02X", digest[i]);
    if (hash) BCryptDestroyHash(hash);
    if (algorithm) BCryptCloseAlgorithmProvider(algorithm, 0);
    free(buffer);
    CloseHandle(file);
    return ok;
}

/* Title ID from the XBE certificate (header +0x104 base, +0x118 certificate,
 * certificate +0x08 title ID): 0x5553001D is the retail game; the demo's
 * certificate carries 0 and the same title name. */
static int xbe_title(const char *path, uint32_t *title_id, wchar_t name[41])
{
    HANDLE file = CreateFileA(path, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
    unsigned char head[0x1000];
    DWORD got = 0;
    uint32_t base, cert, at;
    if (file == INVALID_HANDLE_VALUE) return 0;
    ReadFile(file, head, sizeof head, &got, NULL);
    CloseHandle(file);
    if (got < 0x120 || memcmp(head, "XBEH", 4)) return 0;
    memcpy(&base, head + 0x104, 4);
    memcpy(&cert, head + 0x118, 4);
    at = cert - base;
    if (cert < base || at + 0x0C + 80 > got) return 0;
    memcpy(title_id, head + at + 8, 4);
    memcpy(name, head + at + 0x0C, 80);
    name[40] = 0;
    return 1;
}

static void detect_game(const char *dir, GameInfo *g)
{
    char xbe[MAX_PATH], hex[65];
    memset(g, 0, sizeof *g);
    g->present = game_files_present(dir);
    if (!g->present) {
        wcscpy_s(g->line, 160, L"No game files in this folder");
        wcscpy_s(g->note, 200, L"Install from your Xbox disc image (ISO) to play.");
        return;
    }
    snprintf(xbe, sizeof xbe, "%s\\default.xbe", dir);
    if (path_kind(dir, "default.xbe") == 1 && sha256_file(xbe, hex)) {
        uint32_t title_id = 0;
        wchar_t name[41] = {0};
        if (!strcmp(hex, RESOT_DEMO_XBE_SHA256)) {
            g->kind = GAME_DEMO; g->exact = 1;
            wcscpy_s(g->line, 160, L"Xbox demo  \x2022  E3 2003  \x2022  default.xbe of 2003-07-18");
            return;
        }
        if (!strcmp(hex, RESOT_RETAIL_XBE_SHA256)) {
            g->kind = GAME_RETAIL; g->exact = 1;
            wcscpy_s(g->line, 160, L"Xbox retail  \x2022  NTSC  \x2022  default.xbe of 2003-10-20");
            return;
        }
        if (xbe_title(xbe, &title_id, name) && wcsstr(name, L"Prince of Persia")) {
            g->kind = title_id == 0x5553001Du ? GAME_RETAIL : GAME_DEMO;
            swprintf(g->line, 160, L"Xbox %ls  \x2022  another revision (title %08X)",
                     g->kind == GAME_RETAIL ? L"retail" : L"demo", title_id);
            wcscpy_s(g->note, 200, L"This default.xbe is not the build reSOT supports; the game may not run.");
            return;
        }
        wcscpy_s(g->line, 160, L"Unknown game in this folder");
        wcscpy_s(g->note, 200, L"default.xbe is not Prince of Persia: The Sands of Time.");
        return;
    }
    /* No default.xbe (a portable package): what only one of them ships. */
    if (path_kind(dir, "shaders.bin") == 1 || path_kind(dir, "POP1") == 2) {
        g->kind = GAME_RETAIL;
        wcscpy_s(g->line, 160, L"Xbox retail  \x2022  recognised by its files");
    } else if (path_kind(dir, "preview.bik") == 1) {
        g->kind = GAME_DEMO;
        wcscpy_s(g->line, 160, L"Xbox demo  \x2022  recognised by its files");
    } else {
        wcscpy_s(g->line, 160, L"Game files found, build not identified");
        wcscpy_s(g->note, 200, L"Add the disc's default.xbe to this folder to identify it.");
    }
}

/* resot-options.ini beside the executable, [Launcher] GameDir: relative to
 * the executable's folder when the game is inside it, so the folder can move. */
static void ini_path(char *out, size_t size)
{
    char dir[MAX_PATH];
    if (!to_ansi(L.exe_dir, dir, sizeof dir)) { out[0] = 0; return; }
    snprintf(out, size, "%s\\resot-options.ini", dir);
}

static int remembered_dir(char *out, size_t size)
{
    char ini[MAX_PATH], value[MAX_PATH], dir[MAX_PATH];
    ini_path(ini, sizeof ini);
    if (!ini[0] || !GetPrivateProfileStringA("Launcher", "GameDir", "", value, sizeof value, ini))
        return 0;
    if ((value[0] && value[1] == ':') || (value[0] == '\\' && value[1] == '\\')) {
        strncpy_s(out, size, value, _TRUNCATE);
    } else {
        if (!to_ansi(L.exe_dir, dir, sizeof dir)) return 0;
        snprintf(out, size, "%s\\%s", dir, value);
    }
    return game_files_present(out);
}

static void remember_dir(const char *game_dir)
{
    char ini[MAX_PATH], dir[MAX_PATH];
    const char *value = game_dir;
    size_t n;
    ini_path(ini, sizeof ini);
    if (!ini[0]) return;
    if (to_ansi(L.exe_dir, dir, sizeof dir)) {
        n = strlen(dir);
        if (!_strnicmp(game_dir, dir, n) && game_dir[n] == '\\' && game_dir[n + 1])
            value = game_dir + n + 1;
    }
    WritePrivateProfileStringA("Launcher", "GameDir", value, ini);
}

/* ── drawing into the back buffer ──────────────────────────── */

static uint32_t rnd(void)
{
    L.rng ^= L.rng << 13; L.rng ^= L.rng >> 17; L.rng ^= L.rng << 5;
    return L.rng;
}
static float frand(float lo, float hi) { return lo + (hi - lo) * (float)(rnd() & 0xFFFFFF) / 16777215.0f; }
static int clampi(int v) { return v < 0 ? 0 : v > 255 ? 255 : v; }

static void blend(int x, int y, int r, int g, int b, float a)
{
    uint32_t *p, c;
    int pr, pg, pb;
    if ((unsigned)x >= WIN_W || (unsigned)y >= WIN_H || a <= 0.0f) return;
    if (a > 1.0f) a = 1.0f;
    p = &L.px[y * WIN_W + x];
    c = *p;
    pr = (c >> 16) & 255; pg = (c >> 8) & 255; pb = c & 255;
    pr += (int)((r - pr) * a); pg += (int)((g - pg) * a); pb += (int)((b - pb) * a);
    *p = 0xFF000000u | (uint32_t)clampi(pr) << 16 | (uint32_t)clampi(pg) << 8 | (uint32_t)clampi(pb);
}

static void add(uint32_t *buffer, int x, int y, float r, float g, float b)
{
    uint32_t *p, c;
    if ((unsigned)x >= WIN_W || (unsigned)y >= WIN_H) return;
    p = &buffer[y * WIN_W + x];
    c = *p;
    *p = 0xFF000000u
        | (uint32_t)clampi(((c >> 16) & 255) + (int)r) << 16
        | (uint32_t)clampi(((c >> 8) & 255) + (int)g) << 8
        | (uint32_t)clampi((c & 255) + (int)b);
}

static void fill(int x, int y, int w, int h, int r, int g, int b, float a)
{
    int i, j;
    for (j = y; j < y + h; ++j)
        for (i = x; i < x + w; ++i) blend(i, j, r, g, b, a);
}

static void frame(int x, int y, int w, int h, int t, int r, int g, int b, float a)
{
    fill(x, y, w, t, r, g, b, a);
    fill(x, y + h - t, w, t, r, g, b, a);
    fill(x, y + t, t, h - 2 * t, r, g, b, a);
    fill(x + w - t, y + t, t, h - 2 * t, r, g, b, a);
}

static void diamond(int cx, int cy, int s, int r, int g, int b, float a)
{
    int i, j;
    for (j = -s; j <= s; ++j)
        for (i = -s; i <= s; ++i)
            if (abs(i) + abs(j) <= s) blend(cx + i, cy + j, r, g, b, a);
}

/* A soft dot, added (light), for sand grains and the arch's strokes. */
static void glow(uint32_t *buffer, float x, float y, float radius, float r, float g, float b, float a)
{
    int x0 = (int)floorf(x - radius - 1), x1 = (int)ceilf(x + radius + 1);
    int y0 = (int)floorf(y - radius - 1), y1 = (int)ceilf(y + radius + 1), i, j;
    for (j = y0; j <= y1; ++j)
        for (i = x0; i <= x1; ++i) {
            float dx = i + 0.5f - x, dy = j + 0.5f - y;
            float d = sqrtf(dx * dx + dy * dy) / (radius + 0.5f), k;
            if (d >= 1.0f) continue;
            k = (1.0f - d) * (1.0f - d) * a;
            add(buffer, i, j, r * k, g * k, b * k);
        }
}

/* A horizontal rule that fades out at both ends, with a diamond at its centre. */
static void divider(int cx, int y, int half)
{
    int i;
    for (i = -half; i <= half; ++i) {
        float a = 1.0f - fabsf((float)i) / half;
        blend(cx + i, y, 214, 170, 90, a * 0.9f);
        blend(cx + i, y + 3, 214, 170, 90, a * 0.35f);
    }
    diamond(cx, y + 1, 6, 236, 196, 110, 1.0f);
    diamond(cx, y + 1, 3, 40, 24, 10, 1.0f);
    diamond(cx - half / 2, y + 1, 3, 214, 170, 90, 0.8f);
    diamond(cx + half / 2, y + 1, 3, 214, 170, 90, 0.8f);
}

static float dune(float x, float base, float a1, float f1, float p1, float a2, float f2)
{
    return base + a1 * sinf(x * f1 + p1) + a2 * sinf(x * f2 + p1 * 1.7f);
}

/* The static picture: the sky from night to a sand-coloured horizon, a glow
 * behind the logo, two dune ridges, a pointed arch around the logo, the
 * double gold border and its corners. */
static void build_background(void)
{
    int x, y, i;
    float cx = WIN_W / 2.0f;
    for (y = 0; y < WIN_H; ++y) {
        float t = (float)y / (WIN_H - 1);
        for (x = 0; x < WIN_W; ++x) {
            float r, g, b, dx, dy, d, k, v, n;
            float d1 = dune((float)x, WIN_H - 112.0f, 16, 0.0062f, 0.6f, 9, 0.019f);
            float d2 = dune((float)x, WIN_H - 66.0f, 13, 0.0094f, 2.1f, 7, 0.026f);
            if (t < 0.62f) {
                float s = t / 0.62f;
                r = 9 + 34 * s; g = 8 + 18 * s; b = 20 + 4 * s;
            } else {
                float s = (t - 0.62f) / 0.38f;
                r = 43 + 52 * s; g = 26 + 30 * s; b = 24 - 8 * s;
            }
            /* warm light behind the logo and the title */
            dx = (x - cx) / 420.0f; dy = (y - 170.0f) / 300.0f;
            d = sqrtf(dx * dx + dy * dy);
            k = d < 1.0f ? (1.0f - d) * (1.0f - d) : 0.0f;
            r += 150 * k; g += 88 * k; b += 30 * k;
            /* the horizon line catches the last light */
            k = expf(-fabsf(y - (d1 - 6.0f)) / 26.0f) * 0.55f;
            r += 70 * k; g += 40 * k; b += 10 * k;
            if (y > d1) { float s = (y - d1) / 120.0f; r = 74 - 20 * s; g = 46 - 14 * s; b = 20 - 6 * s; }
            if (y > d2) { float s = (y - d2) / 70.0f; r = 46 - 14 * s; g = 28 - 9 * s; b = 13 - 4 * s; }
            /* vignette */
            dx = (x - cx) / cx; dy = (y - WIN_H / 2.0f) / (WIN_H / 2.0f);
            v = 1.0f - 0.42f * fminf(1.0f, (dx * dx + dy * dy) * 0.55f);
            /* sand grain */
            n = (float)(((x * 73856093u) ^ (y * 19349663u)) % 9u) - 4.0f;
            L.bg[y * WIN_W + x] = 0xFF000000u
                | (uint32_t)clampi((int)(r * v + n)) << 16
                | (uint32_t)clampi((int)(g * v + n * 0.8f)) << 8
                | (uint32_t)clampi((int)(b * v + n * 0.5f));
        }
    }
    /* A pointed (Persian) arch around the logo: two arcs of radius R meeting
     * at the apex, with short jambs. */
    {
        uint32_t *save = L.px;
        float aw = 136.0f, R = aw * 1.28f, spring = 196.0f, jamb = 252.0f, angle;
        float top = sqrtf(R * R - (R - aw) * (R - aw));
        L.px = L.bg;
        for (angle = 0.0f; angle <= 1.0f; angle += 0.0015f) {
            float a0 = asinf(top / R) * angle;
            float lx = cx - aw + R - R * cosf(a0), ly = spring - R * sinf(a0);
            glow(L.bg, lx, ly, 1.3f, 120, 84, 34, 0.9f);
            glow(L.bg, 2 * cx - lx, ly, 1.3f, 120, 84, 34, 0.9f);
            glow(L.bg, lx + 9, ly + 6 * angle + 4, 0.9f, 80, 52, 20, 0.6f);
            glow(L.bg, 2 * cx - lx - 9, ly + 6 * angle + 4, 0.9f, 80, 52, 20, 0.6f);
        }
        for (angle = spring; angle <= jamb; angle += 0.6f) {
            glow(L.bg, cx - aw, angle, 1.3f, 120, 84, 34, 0.9f * (jamb - angle) / (jamb - spring));
            glow(L.bg, cx + aw, angle, 1.3f, 120, 84, 34, 0.9f * (jamb - angle) / (jamb - spring));
        }
        diamond((int)cx, (int)(spring - top) - 9, 4, 214, 170, 90, 0.9f);
        /* border */
        frame(8, 8, WIN_W - 16, WIN_H - 16, 1, 150, 112, 50, 0.65f);
        frame(14, 14, WIN_W - 28, WIN_H - 28, 2, 200, 156, 76, 0.85f);
        frame(20, 20, WIN_W - 40, WIN_H - 40, 1, 120, 86, 36, 0.55f);
        for (i = 0; i < 4; ++i) {
            int x0 = i & 1 ? WIN_W - 15 : 15, y0 = i & 2 ? WIN_H - 15 : 15;
            diamond(x0, y0, 9, 22, 14, 8, 1.0f);
            diamond(x0, y0, 7, 214, 170, 90, 1.0f);
            diamond(x0, y0, 3, 60, 36, 14, 1.0f);
        }
        diamond(WIN_W / 2, 15, 6, 214, 170, 90, 1.0f);
        diamond(WIN_W / 2, WIN_H - 15, 6, 214, 170, 90, 1.0f);
        L.px = save;
    }
}

static void spawn_grain(Grain *s, int anywhere)
{
    s->glint = (rnd() % 7) == 0;
    s->x = frand(-40.0f, (float)WIN_W);
    s->y = anywhere ? frand(0.0f, (float)WIN_H) : frand(-30.0f, -2.0f);
    s->vx = frand(8.0f, 26.0f);
    s->vy = s->glint ? frand(-14.0f, -4.0f) : frand(14.0f, 46.0f);
    if (s->glint && !anywhere) s->y = frand((float)WIN_H * 0.55f, (float)WIN_H);
    s->size = s->glint ? frand(1.2f, 2.2f) : frand(0.5f, 1.6f);
    s->alpha = s->glint ? frand(0.5f, 1.0f) : frand(0.25f, 0.85f);
    s->phase = frand(0.0f, 6.283f);
}

static void step_sand(float dt)
{
    int i;
    for (i = 0; i < N_SAND; ++i) {
        Grain *s = &L.sand[i];
        s->x += (s->vx + 6.0f * sinf(L.time * 0.7f + s->phase)) * dt;
        s->y += s->vy * dt;
        if (s->x > WIN_W + 20 || s->y > WIN_H + 10 || s->y < -40) spawn_grain(s, 0);
    }
}

static void draw_sand(void)
{
    int i;
    for (i = 0; i < N_SAND; ++i) {
        const Grain *s = &L.sand[i];
        float twinkle = 0.65f + 0.35f * sinf(L.time * (s->glint ? 5.0f : 2.0f) + s->phase);
        float a = s->alpha * twinkle;
        if (s->glint) glow(L.px, s->x, s->y, s->size * 2.2f, 255, 214, 140, a * 0.9f);
        else glow(L.px, s->x, s->y, s->size, 230, 170, 90, a);
    }
}

/* Coverage of a text drawn in white on black, from the red channel. */
static uint8_t *text_mask(HFONT font, const wchar_t *text, int w, int h)
{
    BITMAPINFO bi = {0};
    void *bits = NULL;
    HDC dc = CreateCompatibleDC(NULL);
    HBITMAP bmp;
    uint8_t *mask = (uint8_t *)calloc((size_t)w * h, 1);
    RECT r = {0, 0, w, h};
    int i;
    bi.bmiHeader.biSize = sizeof bi.bmiHeader;
    bi.bmiHeader.biWidth = w; bi.bmiHeader.biHeight = -h;
    bi.bmiHeader.biPlanes = 1; bi.bmiHeader.biBitCount = 32;
    bmp = CreateDIBSection(dc, &bi, DIB_RGB_COLORS, &bits, NULL, 0);
    if (!dc || !bmp || !mask) { if (bmp) DeleteObject(bmp); if (dc) DeleteDC(dc); free(mask); return NULL; }
    SelectObject(dc, bmp);
    SelectObject(dc, font);
    SetBkMode(dc, TRANSPARENT);
    SetTextColor(dc, RGB(255, 255, 255));
    DrawTextW(dc, text, -1, &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE | DT_NOPREFIX);
    GdiFlush();
    for (i = 0; i < w * h; ++i) mask[i] = (uint8_t)((((uint32_t *)bits)[i] >> 16) & 255);
    DeleteObject(bmp);
    DeleteDC(dc);
    return mask;
}

/* The title in gold: a dark drop shadow, then a vertical gradient from pale
 * gold to bronze, with a slow light passing across it. */
static void draw_title(int y0)
{
    int x, y;
    float sweep = fmodf(L.time * 120.0f, WIN_W * 2.2f) - WIN_W * 0.6f;
    if (!L.title_mask) return;
    for (y = 0; y < TITLE_H; ++y)
        for (x = 0; x < WIN_W; ++x) {
            uint8_t m = L.title_mask[y * WIN_W + x];
            if (m) blend(x + 3, y0 + y + 4, 12, 6, 2, m / 255.0f * 0.85f);
        }
    for (y = 0; y < TITLE_H; ++y) {
        float t = (float)y / TITLE_H;
        int r = (int)(255 - 70 * t), g = (int)(232 - 112 * t), b = (int)(170 - 130 * t);
        for (x = 0; x < WIN_W; ++x) {
            uint8_t m = L.title_mask[y * WIN_W + x];
            float shine;
            if (!m) continue;
            shine = 1.0f - fabsf(x - sweep - y * 0.6f) / 70.0f;
            if (shine > 0) blend(x, y0 + y, clampi(r + 60), clampi(g + 60), clampi(b + 60), m / 255.0f);
            else blend(x, y0 + y, r, g, b, m / 255.0f);
        }
    }
}

static void draw_button(int id, const wchar_t *label)
{
    Button *b = &L.btn[id];
    RECT r = b->r;
    int w = r.right - r.left, h = r.bottom - r.top;
    int hot = b->enabled && L.hover == id, down = hot && L.pressed == id, focus = b->enabled && L.focus == id;
    int y;
    if (!b->visible) return;
    for (y = 0; y < h; ++y) {
        float t = (float)y / h;
        if (!b->enabled) fill(r.left, r.top + y, w, 1, 24, 18, 14, 0.72f);
        else if (hot) fill(r.left, r.top + y, w, 1, (int)(120 - 60 * t), (int)(74 - 40 * t), (int)(26 - 14 * t), down ? 0.95f : 0.88f);
        else fill(r.left, r.top + y, w, 1, (int)(52 - 24 * t), (int)(34 - 16 * t), (int)(16 - 8 * t), 0.86f);
    }
    if (b->enabled) {
        frame(r.left, r.top, w, h, 2, hot || focus ? 255 : 212, hot || focus ? 214 : 170, hot || focus ? 130 : 90, 1.0f);
        frame(r.left + 5, r.top + 5, w - 10, h - 10, 1, 150, 110, 50, 0.8f);
        diamond(r.left, r.top + h / 2, 7, 22, 14, 8, 1.0f);
        diamond(r.right - 1, r.top + h / 2, 7, 22, 14, 8, 1.0f);
        diamond(r.left, r.top + h / 2, 5, 236, 196, 110, 1.0f);
        diamond(r.right - 1, r.top + h / 2, 5, 236, 196, 110, 1.0f);
        if (hot) glow(L.px, (float)(r.left + w / 2), (float)r.bottom, w * 0.45f, 120, 70, 20, 0.25f);
    } else {
        frame(r.left, r.top, w, h, 1, 110, 92, 70, 0.6f);
    }
    (void)label;
}

static void button_text(int id, const wchar_t *label, HFONT font)
{
    Button *b = &L.btn[id];
    RECT r = b->r, s;
    int hot = b->enabled && L.hover == id;
    if (!b->visible) return;
    SelectObject(L.dc, font);
    s = r; OffsetRect(&s, 2, 3);
    SetTextColor(L.dc, RGB(10, 5, 2));
    if (b->enabled) DrawTextW(L.dc, label, -1, &s, DT_CENTER | DT_VCENTER | DT_SINGLELINE | DT_NOPREFIX);
    SetTextColor(L.dc, !b->enabled ? RGB(112, 98, 80) : hot ? RGB(255, 238, 190) : RGB(240, 204, 128));
    DrawTextW(L.dc, label, -1, &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE | DT_NOPREFIX);
}

static void text_at(HFONT font, COLORREF color, const wchar_t *text, int x, int y, int w, int h, UINT format)
{
    RECT r = {x, y, x + w, y + h};
    SelectObject(L.dc, font);
    SetTextColor(L.dc, color);
    DrawTextW(L.dc, text, -1, &r, format | DT_NOPREFIX);
}

static const wchar_t *kind_exe(int kind)
{
    return kind == GAME_RETAIL ? L"sot-xbox-retail.exe" : L"sot-xbox-demo.exe";
}

static void layout(void)
{
    int i, gw = 310, gh = 64, gap = 40, x0 = (WIN_W - 2 * gw - gap) / 2, y0 = 470;
    int has = L.info.present && L.info.kind != GAME_NONE;
    for (i = 0; i < BTN_COUNT; ++i) L.btn[i].visible = !L.extracting;
    SetRect(&L.btn[BTN_DEMO].r, x0, y0, x0 + gw, y0 + gh);
    SetRect(&L.btn[BTN_GAME].r, x0 + gw + gap, y0, x0 + 2 * gw + gap, y0 + gh);
    SetRect(&L.btn[BTN_ISO].r, WIN_W - 250, WIN_H - 62, WIN_W - 40, WIN_H - 34);
    SetRect(&L.btn[BTN_GITHUB].r, 40, WIN_H - 62, 330, WIN_H - 34);
    SetRect(&L.btn[BTN_CLOSE].r, WIN_W - 64, 30, WIN_W - 30, 64);
    SetRect(&L.btn[BTN_CANCEL].r, (WIN_W - 220) / 2, 520, (WIN_W + 220) / 2, 572);
    L.btn[BTN_CANCEL].visible = L.extracting;
    L.btn[BTN_CLOSE].visible = 1;
    /* A button starts a target installed here whose executable exists. */
    L.btn[BTN_DEMO].enabled = has && L.info.kind == GAME_DEMO
        && (L.this_kind == GAME_DEMO || L.sibling_exists);
    L.btn[BTN_GAME].enabled = has && L.info.kind == GAME_RETAIL
        && (L.this_kind == GAME_RETAIL || L.sibling_exists);
    L.btn[BTN_ISO].enabled = L.btn[BTN_GITHUB].enabled = 1;
    L.btn[BTN_CLOSE].enabled = L.btn[BTN_CANCEL].enabled = 1;
    if (!L.btn[L.focus].enabled || !L.btn[L.focus].visible)
        L.focus = L.btn[BTN_DEMO].enabled ? BTN_DEMO : L.btn[BTN_GAME].enabled ? BTN_GAME : BTN_ISO;
}

static void render(void)
{
    wchar_t text[400], dir_w[MAX_PATH];
    int i;
    GdiFlush();
    memcpy(L.px, L.bg, (size_t)WIN_W * WIN_H * 4);
    draw_sand();
    draw_title(252);
    divider(WIN_W / 2, 378, 250);
    for (i = 0; i < BTN_COUNT; ++i) {
        if (i == BTN_DEMO || i == BTN_GAME || i == BTN_CANCEL) draw_button(i, NULL);
    }
    if (L.extracting) {
        LONG64 done = L.done_bytes, total = L.total_bytes;
        float f = total > 0 ? (float)((double)done / (double)total) : 0.0f;
        int bx = 200, by = 452, bw = WIN_W - 400, bh = 20, fillw;
        if (f > 1.0f) f = 1.0f;
        fillw = (int)(bw * f);
        fill(bx, by, bw, bh, 14, 10, 6, 0.85f);
        for (i = 0; i < bh; ++i) {
            float t = (float)i / bh;
            fill(bx, by + i, fillw, 1, (int)(250 - 70 * t), (int)(196 - 90 * t), (int)(104 - 70 * t), 1.0f);
        }
        for (i = 0; fillw > 8 && i < 18; ++i)   /* sand running in the bar */
            glow(L.px, bx + fmodf(L.time * 90.0f + i * 53.0f, (float)(fillw > 4 ? fillw : 4)),
                 by + 4.0f + (i * 7) % (bh - 8), 1.2f, 255, 230, 160, 0.7f);
        frame(bx - 3, by - 3, bw + 6, bh + 6, 1, 214, 170, 90, 1.0f);
        diamond(bx - 3, by + bh / 2, 5, 236, 196, 110, 1.0f);
        diamond(bx + bw + 2, by + bh / 2, 5, 236, 196, 110, 1.0f);
    }
    if (L.hover == BTN_GITHUB || L.focus == BTN_GITHUB)
        fill(L.btn[BTN_GITHUB].r.left + 20, L.btn[BTN_GITHUB].r.bottom - 3, 250, 1, 240, 204, 128, 0.8f);
    if (L.hover == BTN_ISO || L.focus == BTN_ISO)
        fill(L.btn[BTN_ISO].r.left, L.btn[BTN_ISO].r.bottom - 3, 210, 1, 240, 204, 128, 0.8f);

    SetBkMode(L.dc, TRANSPARENT);
    text_at(L.f_sub, RGB(226, 190, 128), L"The Sands of Time  \x2022  Xbox, recompiled for Windows",
            0, 336, WIN_W, 32, DT_CENTER | DT_SINGLELINE);
    if (L.extracting) {
        LONG64 done = L.done_bytes, total = L.total_bytes;
        swprintf(text, 400, L"Extracting the disc image  \x2022  %ls", wcsrchr(L.iso_w, L'\\') ? wcsrchr(L.iso_w, L'\\') + 1 : L.iso_w);
        text_at(L.f_text, RGB(244, 226, 190), text, 60, 398, WIN_W - 120, 30, DT_CENTER | DT_SINGLELINE | DT_END_ELLIPSIS);
        if (total > 0)
            swprintf(text, 400, L"%.0f%%  \x2022  %.1f of %.1f MB", 100.0 * (double)done / (double)total,
                     done / 1048576.0, total / 1048576.0);
        else
            wcscpy_s(text, 400, L"Reading the disc's file table\x2026");
        text_at(L.f_small, RGB(214, 186, 140), text, 0, 480, WIN_W, 20, DT_CENTER | DT_SINGLELINE);
        EnterCriticalSection(&L.lock);
        text_at(L.f_small, RGB(150, 132, 108), L.status, 120, 500, WIN_W - 240, 18, DT_CENTER | DT_SINGLELINE | DT_PATH_ELLIPSIS);
        LeaveCriticalSection(&L.lock);
        button_text(BTN_CANCEL, L"Cancel", L.f_text);
    } else {
        COLORREF dot = L.info.kind != GAME_NONE && L.info.exact ? RGB(150, 210, 120)
                     : L.info.present ? RGB(236, 170, 70) : RGB(150, 130, 110);
        text_at(L.f_label, RGB(196, 156, 86), L"INSTALLED IN THIS FOLDER", 0, 392, WIN_W, 18, DT_CENTER | DT_SINGLELINE);
        text_at(L.f_text, RGB(244, 226, 190), L.info.line, 60, 412, WIN_W - 120, 30, DT_CENTER | DT_SINGLELINE | DT_END_ELLIPSIS);
        to_wide(L.game_dir, dir_w, MAX_PATH);
        text_at(L.f_small, RGB(150, 132, 108), dir_w, 160, 442, WIN_W - 320, 18, DT_CENTER | DT_SINGLELINE | DT_PATH_ELLIPSIS);
        {
            /* the status mark before the line */
            SIZE size;
            int width;
            SelectObject(L.dc, L.f_text);
            GetTextExtentPoint32W(L.dc, L.info.line, (int)wcslen(L.info.line), &size);
            width = size.cx < WIN_W - 120 ? size.cx : WIN_W - 120;
            text_at(L.f_small, dot, L"\x25C6", (WIN_W - width) / 2 - 24, 418, 16, 20, DT_SINGLELINE);
        }
        button_text(BTN_DEMO, L"Start Demo", L.f_button);
        button_text(BTN_GAME, L"Start Game", L.f_button);
        text[0] = 0;
        if (L.error[0]) wcscpy_s(text, 400, L.error);
        else if (L.info.note[0]) wcscpy_s(text, 400, L.info.note);
        else if (L.info.kind != GAME_NONE && L.info.kind != L.this_kind && !L.sibling_exists)
            swprintf(text, 400, L"%ls is not beside this program: copy it here to start this game.",
                     kind_exe(L.info.kind));
        if (text[0])
            text_at(L.f_small, L.error[0] ? RGB(240, 120, 90) : RGB(236, 176, 96), text, 60, 546, WIN_W - 120, 20,
                    DT_CENTER | DT_SINGLELINE | DT_END_ELLIPSIS);
        text_at(L.f_small, L.hover == BTN_GITHUB ? RGB(255, 232, 170) : RGB(214, 178, 112), L"\x2605  " GITHUB_TEXT,
                L.btn[BTN_GITHUB].r.left, L.btn[BTN_GITHUB].r.top, 290, 28, DT_LEFT | DT_VCENTER | DT_SINGLELINE);
        text_at(L.f_small, L.hover == BTN_ISO ? RGB(255, 232, 170) : RGB(214, 178, 112), L"Install from ISO\x2026  \x25B8",
                L.btn[BTN_ISO].r.left, L.btn[BTN_ISO].r.top, 210, 28, DT_RIGHT | DT_VCENTER | DT_SINGLELINE);
    }
    text_at(L.f_text, L.hover == BTN_CLOSE ? RGB(255, 232, 170) : RGB(196, 156, 86), L"\x2715",
            L.btn[BTN_CLOSE].r.left, L.btn[BTN_CLOSE].r.top, 34, 34, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    text_at(L.f_label, RGB(120, 96, 64), L"reSOT", 34, 30, 120, 18, DT_LEFT | DT_SINGLELINE);
    if (L.logo_dc) {
        BLENDFUNCTION bf = {AC_SRC_OVER, 0, 255, AC_SRC_ALPHA};
        AlphaBlend(L.dc, (WIN_W - L.logo_w) / 2, 46, L.logo_w, L.logo_h, L.logo_dc, 0, 0, L.logo_w, L.logo_h, bf);
    }
}

/* ── resources ─────────────────────────────────────────────── */

static const void *resource(int id, DWORD *size)
{
    HRSRC found = FindResourceW(NULL, MAKEINTRESOURCEW(id), MAKEINTRESOURCEW(10) /* RT_RCDATA */);
    HGLOBAL loaded = found ? LoadResource(NULL, found) : NULL;
    *size = found ? SizeofResource(NULL, found) : 0;
    return loaded ? LockResource(loaded) : NULL;
}

static void load_logo(void)
{
    DWORD size;
    const void *png = resource(RES_LOGO, &size);
    IWICImagingFactory *factory = NULL;
    IWICStream *stream = NULL;
    IWICBitmapDecoder *decoder = NULL;
    IWICBitmapFrameDecode *frame_ = NULL;
    IWICBitmapScaler *scaler = NULL;
    IWICFormatConverter *converter = NULL;
    UINT w = 0, h = 0;
    HRESULT hr;
    if (!png) return;
    hr = CoCreateInstance(&CLSID_WICImagingFactory, NULL, CLSCTX_INPROC_SERVER,
                          &IID_IWICImagingFactory, (void **)&factory);
    if (SUCCEEDED(hr)) hr = IWICImagingFactory_CreateStream(factory, &stream);
    if (SUCCEEDED(hr)) hr = IWICStream_InitializeFromMemory(stream, (BYTE *)png, size);
    if (SUCCEEDED(hr)) hr = IWICImagingFactory_CreateDecoderFromStream(factory, (IStream *)stream, NULL,
                                                                       WICDecodeMetadataCacheOnLoad, &decoder);
    if (SUCCEEDED(hr)) hr = IWICBitmapDecoder_GetFrame(decoder, 0, &frame_);
    if (SUCCEEDED(hr)) hr = IWICBitmapFrameDecode_GetSize(frame_, &w, &h);
    if (SUCCEEDED(hr) && w && h) {
        L.logo_h = LOGO_SIZE;
        L.logo_w = (int)((double)LOGO_SIZE * w / h + 0.5);
        hr = IWICImagingFactory_CreateBitmapScaler(factory, &scaler);
    } else hr = E_FAIL;
    if (SUCCEEDED(hr)) hr = IWICBitmapScaler_Initialize(scaler, (IWICBitmapSource *)frame_, L.logo_w, L.logo_h,
                                                        WICBitmapInterpolationModeFant);
    if (SUCCEEDED(hr)) hr = IWICImagingFactory_CreateFormatConverter(factory, &converter);
    if (SUCCEEDED(hr)) hr = IWICFormatConverter_Initialize(converter, (IWICBitmapSource *)scaler,
                                                           &GUID_WICPixelFormat32bppPBGRA, WICBitmapDitherTypeNone,
                                                           NULL, 0.0, WICBitmapPaletteTypeCustom);
    if (SUCCEEDED(hr)) {
        BITMAPINFO bi = {0};
        void *bits = NULL;
        bi.bmiHeader.biSize = sizeof bi.bmiHeader;
        bi.bmiHeader.biWidth = L.logo_w; bi.bmiHeader.biHeight = -L.logo_h;
        bi.bmiHeader.biPlanes = 1; bi.bmiHeader.biBitCount = 32;
        L.logo_dc = CreateCompatibleDC(NULL);
        L.logo_bmp = CreateDIBSection(L.logo_dc, &bi, DIB_RGB_COLORS, &bits, NULL, 0);
        if (L.logo_bmp && SUCCEEDED(IWICFormatConverter_CopyPixels(converter, NULL, L.logo_w * 4,
                                                                   L.logo_w * L.logo_h * 4, (BYTE *)bits))) {
            SelectObject(L.logo_dc, L.logo_bmp);
        } else {
            if (L.logo_bmp) DeleteObject(L.logo_bmp);
            DeleteDC(L.logo_dc);
            L.logo_dc = NULL; L.logo_bmp = NULL;
        }
    }
    if (converter) IWICFormatConverter_Release(converter);
    if (scaler) IWICBitmapScaler_Release(scaler);
    if (frame_) IWICBitmapFrameDecode_Release(frame_);
    if (decoder) IWICBitmapDecoder_Release(decoder);
    if (stream) IWICStream_Release(stream);
    if (factory) IWICImagingFactory_Release(factory);
}

static HFONT make_font(const wchar_t *face, int px, int weight, int italic, DWORD quality)
{
    return CreateFontW(-px, 0, 0, 0, weight, italic, 0, 0, DEFAULT_CHARSET, OUT_TT_PRECIS,
                       CLIP_DEFAULT_PRECIS, quality, DEFAULT_PITCH | FF_ROMAN, face);
}

static void load_fonts(void)
{
    DWORD size, count = 0;
    const void *ttf = resource(RES_FONT, &size);
    const wchar_t *display, *serif = L"Palatino Linotype";
    HFONT mask_font;
    if (ttf) L.font_mem = AddFontMemResourceEx((void *)ttf, size, NULL, &count);
    L.atlantis = L.font_mem && count;
    display = L.atlantis ? L"Atlantis MF" : serif;
    L.f_button = make_font(display, L.atlantis ? 32 : 28, L.atlantis ? FW_NORMAL : FW_SEMIBOLD, 0, CLEARTYPE_QUALITY);
    L.f_sub = make_font(serif, 21, FW_NORMAL, 1, CLEARTYPE_QUALITY);
    L.f_text = make_font(serif, 22, FW_NORMAL, 0, CLEARTYPE_QUALITY);
    L.f_small = make_font(L"Segoe UI", 15, FW_NORMAL, 0, CLEARTYPE_QUALITY);
    L.f_label = make_font(L"Segoe UI", 13, FW_SEMIBOLD, 0, CLEARTYPE_QUALITY);
    mask_font = make_font(display, L.atlantis ? 70 : 58, L.atlantis ? FW_NORMAL : FW_BOLD, 0, ANTIALIASED_QUALITY);
    L.title_mask = text_mask(mask_font, L"Prince of Persia", WIN_W, TITLE_H);
    DeleteObject(mask_font);
}

/* ── extraction ────────────────────────────────────────────── */

/* extract-xiso's main(), renamed by CMakeLists.txt. */
extern int resot_extract_xiso_main(int argc, char **argv);

int resot_xiso_child(int argc, char **argv)
{
    /* The parent reads progress from a pipe: unbuffered, line by line. */
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
    return resot_extract_xiso_main(argc, argv);
}

/* Runs "<this exe> --resot-extract-xiso <args>" with its output on a pipe and
 * hands every line (extract-xiso ends progress lines with \r) to on_line. */
static int run_xiso(const wchar_t *args, void (*on_line)(char *line), DWORD *exit_code)
{
    SECURITY_ATTRIBUTES sa = {sizeof sa, NULL, TRUE};
    STARTUPINFOW si = {sizeof si};
    PROCESS_INFORMATION pi = {0};
    HANDLE read_end = NULL, write_end = NULL;
    wchar_t *command;
    char buffer[4096], line[1024];
    size_t used = 0, length;
    DWORD got;
    int ok;
    length = wcslen(L.exe_path) + wcslen(args) + 64;
    command = (wchar_t *)malloc(length * sizeof(wchar_t));
    if (!command) return 0;
    swprintf(command, length, L"\"%ls\" " RESOT_XISO_SWITCH_W L" %ls", L.exe_path, args);
    if (!CreatePipe(&read_end, &write_end, &sa, 0)) { free(command); return 0; }
    SetHandleInformation(read_end, HANDLE_FLAG_INHERIT, 0);
    si.dwFlags = STARTF_USESTDHANDLES | STARTF_USESHOWWINDOW;
    si.wShowWindow = SW_HIDE;
    si.hStdOutput = si.hStdError = write_end;
    si.hStdInput = NULL;
    ok = CreateProcessW(L.exe_path, command, NULL, NULL, TRUE, CREATE_NO_WINDOW, NULL, L.exe_dir, &si, &pi);
    free(command);
    CloseHandle(write_end);
    if (!ok) { CloseHandle(read_end); return 0; }
    EnterCriticalSection(&L.lock);
    L.child = pi.hProcess;
    LeaveCriticalSection(&L.lock);
    if (L.cancel) TerminateProcess(pi.hProcess, 1);
    while (ReadFile(read_end, buffer, sizeof buffer, &got, NULL) && got) {
        DWORD i;
        for (i = 0; i < got; ++i) {
            char c = buffer[i];
            if (c == '\r' || c == '\n') {
                line[used] = 0;
                if (used) on_line(line);
                used = 0;
            } else if (used + 1 < sizeof line) {
                line[used++] = c;
            }
        }
    }
    if (used) { line[used] = 0; on_line(line); }
    CloseHandle(read_end);
    WaitForSingleObject(pi.hProcess, INFINITE);
    GetExitCodeProcess(pi.hProcess, exit_code);
    EnterCriticalSection(&L.lock);
    L.child = NULL;
    LeaveCriticalSection(&L.lock);
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    return 1;
}

static char s_last_error[400];
static char s_current[600];
static LONG64 s_completed, s_current_size;

static void remember_error(const char *line)
{
    /* log_err() writes "extract-xiso.c:<line> <message>". */
    const char *tag = strstr(line, "extract-xiso.c:");
    if (tag) {
        const char *message = strchr(tag, ' ');
        strncpy_s(s_last_error, sizeof s_last_error, message ? message + 1 : tag, _TRUNCATE);
    } else if (strstr(line, "rror") || strstr(line, "WARNING")) {
        strncpy_s(s_last_error, sizeof s_last_error, line, _TRUNCATE);
    }
}

/* "-l" ends with "<n> files in <iso> total <bytes> bytes". */
static void on_list_line(char *line)
{
    char *total = NULL, *p = line;
    while ((p = strstr(p, " total ")) != NULL) total = p++;
    remember_error(line);
    if (total && strstr(total, " bytes"))
        L.total_bytes = _strtoi64(total + 7, NULL, 10);
}

/* "-x" progress: "extracting <path><name> (<size> bytes) [<percent>%]". */
static void on_extract_line(char *line)
{
    char *open = strrchr(line, '(');
    unsigned long long size = 0;
    unsigned percent = 0;
    remember_error(line);
    if (strncmp(line, "extracting ", 11) || !open || open == line
        || sscanf_s(open, "(%llu bytes) [%u%%]", &size, &percent) != 2)
        return;
    open[-1] = 0;
    if (strcmp(s_current, line + 11)) {
        s_completed += s_current_size;
        strncpy_s(s_current, sizeof s_current, line + 11, _TRUNCATE);
        s_current_size = (LONG64)size;
        EnterCriticalSection(&L.lock);
        to_wide(s_current, L.status, 260);
        LeaveCriticalSection(&L.lock);
    }
    L.done_bytes = s_completed + (LONG64)((double)size * (percent > 100 ? 100 : percent) / 100.0);
}

static DWORD WINAPI extract_main(void *unused)
{
    wchar_t iso_w[MAX_PATH + 2], out_w[MAX_PATH], args[3 * MAX_PATH];
    ULARGE_INTEGER free_bytes;
    DWORD code = 1;
    WPARAM result = 0;
    (void)unused;
    s_last_error[0] = s_current[0] = 0;
    s_completed = s_current_size = 0;
    to_wide(L.iso_a, iso_w, MAX_PATH);
    to_wide(L.out_a, out_w, MAX_PATH);
    swprintf(args, 3 * MAX_PATH, L"-l \"%ls\"", iso_w);
    if (!run_xiso(args, on_list_line, &code) || L.cancel) {
        result = L.cancel ? 2 : 0;
        goto done;
    }
    if (code || L.total_bytes <= 0) {
        if (!s_last_error[0])
            strcpy_s(s_last_error, sizeof s_last_error, "this file is not an Xbox disc image");
        goto done;
    }
    if (GetDiskFreeSpaceExW(L.exe_dir, &free_bytes, NULL, NULL)
        && free_bytes.QuadPart < (ULONGLONG)L.total_bytes + (64u << 20)) {
        snprintf(s_last_error, sizeof s_last_error, "not enough free disk space (%.1f GB needed)",
                 L.total_bytes / 1073741824.0);
        goto done;
    }
    CreateDirectoryW(out_w, NULL);
    /* -s leaves out the disc's $SystemUpdate folder (dashboard updates). */
    swprintf(args, 3 * MAX_PATH, L"-x -s -d \"%ls\" \"%ls\"", out_w, iso_w);
    if (!run_xiso(args, on_extract_line, &code) || L.cancel) {
        result = L.cancel ? 2 : 0;
        goto done;
    }
    result = code == 0;
done:
    PostMessageW(L.hwnd, WM_APP_EXTRACTED, result, 0);
    return 0;
}

static int pick_iso(wchar_t *out)
{
    IFileOpenDialog *dialog = NULL;
    IShellItem *item = NULL;
    PWSTR selected = NULL;
    FILEOPENDIALOGOPTIONS options;
    COMDLG_FILTERSPEC types[] = {{L"Xbox disc image (*.iso, *.xiso)", L"*.iso;*.xiso"}, {L"All files", L"*.*"}};
    HRESULT hr = CoCreateInstance(&CLSID_FileOpenDialog, NULL, CLSCTX_INPROC_SERVER,
                                  &IID_IFileOpenDialog, (void **)&dialog);
    int ok = 0;
    if (SUCCEEDED(hr)) {
        IFileOpenDialog_GetOptions(dialog, &options);
        IFileOpenDialog_SetOptions(dialog, options | FOS_FORCEFILESYSTEM | FOS_FILEMUSTEXIST | FOS_DONTADDTORECENT);
        IFileOpenDialog_SetFileTypes(dialog, 2, types);
        IFileOpenDialog_SetTitle(dialog, L"reSOT - Choose the Xbox ISO of Prince of Persia: The Sands of Time");
        IFileOpenDialog_SetOkButtonLabel(dialog, L"Extract and install");
        hr = IFileOpenDialog_Show(dialog, L.hwnd);
        if (SUCCEEDED(hr)) hr = IFileOpenDialog_GetResult(dialog, &item);
        if (SUCCEEDED(hr)) hr = IShellItem_GetDisplayName(item, SIGDN_FILESYSPATH, &selected);
        if (SUCCEEDED(hr) && wcslen(selected) < MAX_PATH) { wcscpy_s(out, MAX_PATH, selected); ok = 1; }
    }
    if (selected) CoTaskMemFree(selected);
    if (item) IShellItem_Release(item);
    if (dialog) IFileOpenDialog_Release(dialog);
    return ok;
}

static void set_game_dir(const char *dir)
{
    strncpy_s(L.game_dir, sizeof L.game_dir, dir, _TRUNCATE);
    detect_game(L.game_dir, &L.info);
    L.error[0] = 0;
    layout();
}

static void begin_install(void)
{
    wchar_t iso[MAX_PATH], stem[MAX_PATH], out[MAX_PATH], *dot, *name;
    if (L.extracting || !pick_iso(iso)) return;
    /* extract-xiso takes ANSI paths, as does the game: the 8.3 name of an
     * ISO whose path the code page cannot spell. */
    if (!to_ansi(iso, L.iso_a, sizeof L.iso_a)) {
        wchar_t short_path[MAX_PATH];
        if (!GetShortPathNameW(iso, short_path, MAX_PATH) || !to_ansi(short_path, L.iso_a, sizeof L.iso_a)) {
            MessageBoxW(L.hwnd, L"Windows cannot give this file's path in the system code page.\n"
                        L"Move the ISO to a folder with a plain name and try again.", L"reSOT", MB_ICONERROR);
            return;
        }
    }
    name = wcsrchr(iso, L'\\');
    wcscpy_s(stem, MAX_PATH, name ? name + 1 : iso);
    dot = wcsrchr(stem, L'.');
    if (dot && dot != stem) *dot = 0;
    swprintf(out, MAX_PATH, L"%ls\\%ls", L.exe_dir, stem);
    if (!to_ansi(out, L.out_a, sizeof L.out_a)) {
        swprintf(out, MAX_PATH, L"%ls\\Prince of Persia - The Sands of Time", L.exe_dir);
        if (!to_ansi(out, L.out_a, sizeof L.out_a)) {
            MessageBoxW(L.hwnd, L"This program's folder has a path the game cannot open.\n"
                        L"Move reSOT to a folder with a plain name and try again.", L"reSOT", MB_ICONERROR);
            return;
        }
    }
    if (game_files_present(L.out_a)) {
        wchar_t message[MAX_PATH + 200];
        swprintf(message, MAX_PATH + 200, L"%ls already holds extracted game files.\n\n"
                 L"Use them as they are? Choose No to extract the ISO again over them.", out);
        switch (MessageBoxW(L.hwnd, message, L"reSOT", MB_YESNOCANCEL | MB_ICONQUESTION)) {
        case IDYES:
            set_game_dir(L.out_a);
            remember_dir(L.game_dir);
            return;
        case IDCANCEL:
            return;
        }
    }
    wcscpy_s(L.iso_w, MAX_PATH, iso);
    L.status[0] = L.error[0] = 0;
    L.done_bytes = L.total_bytes = 0;
    L.cancel = 0;
    L.extracting = 1;
    layout();
    L.worker = CreateThread(NULL, 0, extract_main, NULL, 0, NULL);
    if (!L.worker) {
        L.extracting = 0;
        layout();
        wcscpy_s(L.error, 400, L"Could not start the extraction.");
    }
}

static void cancel_install(void)
{
    if (!L.extracting) return;
    if (MessageBoxW(L.hwnd, L"Stop extracting? The files written so far stay in the folder.",
                    L"reSOT", MB_YESNO | MB_ICONQUESTION) != IDYES)
        return;
    InterlockedExchange(&L.cancel, 1);
    EnterCriticalSection(&L.lock);
    if (L.child) TerminateProcess(L.child, 1);
    LeaveCriticalSection(&L.lock);
}

static void install_finished(WPARAM result)
{
    wchar_t error[400];
    if (L.worker) { WaitForSingleObject(L.worker, INFINITE); CloseHandle(L.worker); L.worker = NULL; }
    L.extracting = 0;
    if (result == 2) {
        set_game_dir(L.game_dir);
        wcscpy_s(L.error, 400, L"Extraction cancelled.");
        return;
    }
    if (result == 1 && game_files_present(L.out_a)) {
        set_game_dir(L.out_a);
        remember_dir(L.game_dir);
        return;
    }
    to_wide(s_last_error, error, 400);
    set_game_dir(L.game_dir);
    if (result == 1)
        wcscpy_s(L.error, 400, L"The ISO was extracted, but it holds no Prince of Persia game files.");
    else
        swprintf(L.error, 400, L"Extraction failed: %ls", error[0] ? error : L"extract-xiso stopped with an error");
}

/* ── starting a game ───────────────────────────────────────── */

static void start(int kind)
{
    STARTUPINFOW si = {sizeof si};
    PROCESS_INFORMATION pi;
    wchar_t command[MAX_PATH + 4];
    if (kind == L.this_kind) {
        L.result = RESOT_LAUNCH_HERE;
        remember_dir(L.game_dir);
        DestroyWindow(L.hwnd);
        return;
    }
    /* The other target: its executable reads the folder from RESOT_ASSET_DIR
     * and skips this screen. Nothing of this process's runtime is set yet. */
    _putenv_s("RESOT_ASSET_DIR", L.game_dir);
    _putenv_s("RESOT_SKIP_LAUNCHER", "1");
    swprintf(command, MAX_PATH + 4, L"\"%ls\"", L.sibling);
    if (CreateProcessW(L.sibling, command, NULL, NULL, FALSE, 0, NULL, L.exe_dir, &si, &pi)) {
        CloseHandle(pi.hThread);
        CloseHandle(pi.hProcess);
        remember_dir(L.game_dir);
        L.result = RESOT_LAUNCH_HANDED_OFF;
        DestroyWindow(L.hwnd);
        return;
    }
    _putenv_s("RESOT_ASSET_DIR", "");
    _putenv_s("RESOT_SKIP_LAUNCHER", "");
    swprintf(L.error, 400, L"Could not start %ls (error %lu).", kind_exe(kind), GetLastError());
}

static void activate(int id)
{
    if (id < 0 || !L.btn[id].enabled || !L.btn[id].visible) return;
    switch (id) {
    case BTN_DEMO: start(GAME_DEMO); break;
    case BTN_GAME: start(GAME_RETAIL); break;
    case BTN_ISO: begin_install(); break;
    case BTN_GITHUB: ShellExecuteW(L.hwnd, L"open", GITHUB_URL, NULL, NULL, SW_SHOWNORMAL); break;
    case BTN_CLOSE:
        if (L.extracting) { cancel_install(); if (!L.cancel) break; }
        L.result = RESOT_LAUNCH_QUIT;
        DestroyWindow(L.hwnd);
        break;
    case BTN_CANCEL: cancel_install(); break;
    }
}

static int hit(int x, int y)
{
    POINT p = {x, y};
    int i;
    for (i = 0; i < BTN_COUNT; ++i)
        if (L.btn[i].visible && L.btn[i].enabled && PtInRect(&L.btn[i].r, p)) return i;
    return -1;
}

static void move_focus(int step)
{
    static const int order[] = {BTN_DEMO, BTN_GAME, BTN_ISO, BTN_GITHUB};
    int i, at = 0, n = (int)(sizeof order / sizeof order[0]);
    for (i = 0; i < n; ++i) if (order[i] == L.focus) at = i;
    for (i = 1; i <= n; ++i) {
        int next = order[((at + step * i) % n + n) % n];
        if (L.btn[next].enabled && L.btn[next].visible) { L.focus = next; return; }
    }
}

static LRESULT CALLBACK window_proc(HWND hwnd, UINT message, WPARAM wp, LPARAM lp)
{
    switch (message) {
    case WM_NCHITTEST: {
        POINT p = {GET_X_LPARAM(lp), GET_Y_LPARAM(lp)};
        ScreenToClient(hwnd, &p);
        return hit(p.x, p.y) >= 0 ? HTCLIENT : HTCAPTION;
    }
    case WM_SETCURSOR:
        if (LOWORD(lp) == HTCLIENT) { SetCursor(LoadCursor(NULL, IDC_HAND)); return TRUE; }
        break;
    case WM_MOUSEMOVE: {
        int now = hit(GET_X_LPARAM(lp), GET_Y_LPARAM(lp));
        if (!L.tracking) {
            TRACKMOUSEEVENT t = {sizeof t, TME_LEAVE, hwnd, 0};
            TrackMouseEvent(&t);
            L.tracking = 1;
        }
        L.hover = now;
        return 0;
    }
    case WM_MOUSELEAVE:
        L.tracking = 0;
        L.hover = -1;
        return 0;
    case WM_NCMOUSEMOVE:
        L.hover = -1;
        break;
    case WM_LBUTTONDOWN:
        L.pressed = hit(GET_X_LPARAM(lp), GET_Y_LPARAM(lp));
        SetCapture(hwnd);
        return 0;
    case WM_LBUTTONUP: {
        int id = hit(GET_X_LPARAM(lp), GET_Y_LPARAM(lp)), was = L.pressed;
        ReleaseCapture();
        L.pressed = -1;
        if (id >= 0 && id == was) activate(id);
        return 0;
    }
    case WM_KEYDOWN:
        if (wp == VK_ESCAPE) activate(BTN_CLOSE);
        else if (wp == VK_RETURN || wp == VK_SPACE) activate(L.extracting ? BTN_CANCEL : L.focus);
        else if (wp == VK_LEFT || (wp == VK_TAB && GetKeyState(VK_SHIFT) < 0)) move_focus(-1);
        else if (wp == VK_RIGHT || wp == VK_TAB) move_focus(1);
        return 0;
    case WM_TIMER: {
        ULONGLONG now = GetTickCount64();
        float dt = (float)(now - L.last_tick) / 1000.0f;
        L.last_tick = now;
        if (dt > 0.1f) dt = 0.1f;
        L.time += dt;
        step_sand(dt);
        InvalidateRect(hwnd, NULL, FALSE);
        return 0;
    }
    case WM_ERASEBKGND:
        return 1;
    case WM_PAINT: {
        PAINTSTRUCT ps;
        HDC dc = BeginPaint(hwnd, &ps);
        render();
        BitBlt(dc, 0, 0, WIN_W, WIN_H, L.dc, 0, 0, SRCCOPY);
        EndPaint(hwnd, &ps);
        return 0;
    }
    case WM_APP_ASK_ISO:
        begin_install();
        return 0;
    case WM_APP_EXTRACTED:
        install_finished(wp);
        return 0;
    case WM_CLOSE:
        activate(BTN_CLOSE);
        return 0;
    case WM_DESTROY:
        L.running = 0;
        return 0;
    }
    return DefWindowProcW(hwnd, message, wp, lp);
}

/* ── entry ─────────────────────────────────────────────────── */

static int create_window(void)
{
    WNDCLASSEXW wc = {sizeof wc};
    BITMAPINFO bi = {0};
    void *bits = NULL;
    RECT work;
    int x, y, i;
    wc.lpfnWndProc = window_proc;
    wc.hInstance = GetModuleHandleW(NULL);
    wc.hIcon = LoadIconW(wc.hInstance, MAKEINTRESOURCEW(1));
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.lpszClassName = L"reSOTLauncher";
    wc.style = CS_DROPSHADOW;
    RegisterClassExW(&wc);
    SystemParametersInfoW(SPI_GETWORKAREA, 0, &work, 0);
    x = work.left + (work.right - work.left - WIN_W) / 2;
    y = work.top + (work.bottom - work.top - WIN_H) / 2;
    L.hwnd = CreateWindowExW(WS_EX_APPWINDOW, wc.lpszClassName,
                             L"reSOT - Prince of Persia: The Sands of Time",
                             WS_POPUP | WS_SYSMENU | WS_MINIMIZEBOX, x, y, WIN_W, WIN_H,
                             NULL, NULL, wc.hInstance, NULL);
    if (!L.hwnd) return 0;
    bi.bmiHeader.biSize = sizeof bi.bmiHeader;
    bi.bmiHeader.biWidth = WIN_W; bi.bmiHeader.biHeight = -WIN_H;
    bi.bmiHeader.biPlanes = 1; bi.bmiHeader.biBitCount = 32;
    L.dc = CreateCompatibleDC(NULL);
    L.bmp = CreateDIBSection(L.dc, &bi, DIB_RGB_COLORS, &bits, NULL, 0);
    L.bg = (uint32_t *)malloc((size_t)WIN_W * WIN_H * 4);
    if (!L.dc || !L.bmp || !L.bg) return 0;
    SelectObject(L.dc, L.bmp);
    L.px = (uint32_t *)bits;
    L.rng = GetTickCount() | 1;
    build_background();
    for (i = 0; i < N_SAND; ++i) spawn_grain(&L.sand[i], 1);
    load_fonts();
    load_logo();
    L.last_tick = GetTickCount64();
    SetTimer(L.hwnd, 1, 16, NULL);
    return 1;
}

static void destroy_window(void)
{
    if (L.hwnd && IsWindow(L.hwnd)) DestroyWindow(L.hwnd);
    UnregisterClassW(L"reSOTLauncher", GetModuleHandleW(NULL));
    if (L.logo_bmp) DeleteObject(L.logo_bmp);
    if (L.logo_dc) DeleteDC(L.logo_dc);
    if (L.bmp) DeleteObject(L.bmp);
    if (L.dc) DeleteDC(L.dc);
    if (L.f_title) DeleteObject(L.f_title);
    DeleteObject(L.f_button); DeleteObject(L.f_sub); DeleteObject(L.f_text);
    DeleteObject(L.f_small); DeleteObject(L.f_label);
    if (L.font_mem) RemoveFontMemResourceEx(L.font_mem);
    free(L.bg);
    free(L.title_mask);
}

int resot_launcher_run(const char *target_id, char *game_dir, size_t game_dir_size, int flags)
{
    HRESULT com;
    MSG message;
    wchar_t *slash;
    char remembered[MAX_PATH];
    int result;

    memset(&L, 0, sizeof L);
    L.target_id = target_id;
    L.this_kind = strcmp(target_id, "xbox-retail") ? GAME_DEMO : GAME_RETAIL;
    L.flags = flags;
    L.hover = L.pressed = -1;
    L.result = RESOT_LAUNCH_QUIT;
    if (!GetModuleFileNameW(NULL, L.exe_path, MAX_PATH) || !(slash = wcsrchr(L.exe_path, L'\\')))
        return RESOT_LAUNCH_HERE;   /* nothing to show this from: keep the old path */
    wcsncpy_s(L.exe_dir, MAX_PATH, L.exe_path, (size_t)(slash - L.exe_path));
    /* The other target's executable: this one's name with the other ID
     * (sot-xbox-demo.exe <-> sot-xbox-retail.exe, -abi builds alike). */
    {
        wchar_t mine[64], other[64], *at;
        const char *other_id = L.this_kind == GAME_DEMO ? "xbox-retail" : "xbox-demo";
        to_wide(target_id, mine, 64);
        to_wide(other_id, other, 64);
        wcscpy_s(L.sibling, MAX_PATH, L.exe_path);
        at = wcsstr(wcsrchr(L.sibling, L'\\'), mine);
        if (at && wcslen(L.sibling) - wcslen(mine) + wcslen(other) < MAX_PATH) {
            wchar_t tail[MAX_PATH];
            wcscpy_s(tail, MAX_PATH, at + wcslen(mine));
            swprintf(at, MAX_PATH - (at - L.sibling), L"%ls%ls", other, tail);
        } else {
            swprintf(L.sibling, MAX_PATH, L"%ls\\%ls", L.exe_dir, kind_exe(L.this_kind == GAME_DEMO ? GAME_RETAIL : GAME_DEMO));
        }
        L.sibling_exists = GetFileAttributesW(L.sibling) != INVALID_FILE_ATTRIBUTES;
    }

    strncpy_s(L.game_dir, sizeof L.game_dir, game_dir, _TRUNCATE);
    if (!L.game_dir[0]) to_ansi(L.exe_dir, L.game_dir, sizeof L.game_dir);
    if (!game_files_present(L.game_dir) && remembered_dir(remembered, sizeof remembered))
        strncpy_s(L.game_dir, sizeof L.game_dir, remembered, _TRUNCATE);
    if ((flags & RESOT_LAUNCHER_NO_SCREEN) && !(flags & RESOT_LAUNCHER_ASK_ISO)
        && game_files_present(L.game_dir)) {
        strncpy_s(game_dir, game_dir_size, L.game_dir, _TRUNCATE);
        return RESOT_LAUNCH_HERE;
    }

    com = CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
    InitializeCriticalSection(&L.lock);
    if (!create_window()) {
        fprintf(stderr, "[LAUNCHER] window creation failed: %lu\n", GetLastError());
        destroy_window();
        DeleteCriticalSection(&L.lock);
        if (SUCCEEDED(com)) CoUninitialize();
        strncpy_s(game_dir, game_dir_size, L.game_dir, _TRUNCATE);
        return RESOT_LAUNCH_HERE;
    }
    set_game_dir(L.game_dir);
    ShowWindow(L.hwnd, SW_SHOW);
    SetForegroundWindow(L.hwnd);
    if (!L.info.present || (flags & RESOT_LAUNCHER_ASK_ISO))
        PostMessageW(L.hwnd, WM_APP_ASK_ISO, 0, 0);
    L.running = 1;
    while (L.running && GetMessageW(&message, NULL, 0, 0) > 0) {
        TranslateMessage(&message);
        DispatchMessageW(&message);
    }
    if (L.worker) {   /* closed while extracting: the child was terminated */
        WaitForSingleObject(L.worker, INFINITE);
        CloseHandle(L.worker);
    }
    result = L.result;
    if (result == RESOT_LAUNCH_HERE)
        strncpy_s(game_dir, game_dir_size, L.game_dir, _TRUNCATE);
    L.hwnd = NULL;
    destroy_window();
    DeleteCriticalSection(&L.lock);
    if (SUCCEEDED(com)) CoUninitialize();
    fprintf(stderr, "[LAUNCHER] %s, game folder %s\n",
            result == RESOT_LAUNCH_HERE ? "start" : result == RESOT_LAUNCH_HANDED_OFF ? "handed off" : "quit",
            L.game_dir);
    return result;
}
