/**
 * reSOT - title screen and game installer, shown before the game starts.
 *
 * The screen looks for installed games: the game folder this executable was
 * given (beside it, or RESOT_ASSET_DIR), the folders remembered in
 * resot-options.ini ([Launcher] DemoDir / RetailDir) and every folder beside
 * the executable, where ISO installations go. Each folder with game files is
 * identified as the demo or the retail game from default.xbe's SHA-256 (the
 * hashes tools/recomp.ps1 checks) or, without default.xbe, from the files
 * only one of them has. Start Demo and Start Game each use their own folder,
 * in this executable or by handing over to the other target's executable
 * beside it. Without game files the player chooses the game's Xbox ISO,
 * which extract-xiso (port/third_party/extract-xiso, run in a child copy of
 * this executable) extracts into a folder beside the executable.
 *
 * Everything is drawn into one 32-bit back buffer in the style of the reSOT
 * logo: night blue, luminous blue edges, white-blue lettering on a blue glow,
 * and drifting golden sand. The title and buttons use the Atlantis MF face
 * when the build embedded it (port/windows/res/AtlantisMF.ttf), Palatino
 * Linotype otherwise.
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
#define LOGO_Y 30
#define LOGO_SIZE 178
#define TITLE_Y 206
#define TITLE_H 96
#define BTN_W 310
#define BTN_H 64
#define BTN_Y 382
#define N_SAND 240
#define WM_APP_ASK_ISO   (WM_APP + 1)
#define WM_APP_EXTRACTED (WM_APP + 2)

enum { GAME_NONE, GAME_DEMO, GAME_RETAIL, GAME_KINDS };
enum { BTN_DEMO, BTN_GAME, BTN_ISO, BTN_GITHUB, BTN_CLOSE, BTN_CANCEL, BTN_COUNT };

typedef struct {
    int kind;                /* GAME_* */
    int present;             /* prince.bf, video and sound are there */
    int exact;               /* default.xbe is the build reSOT was lifted from */
    wchar_t line[160];       /* what is installed */
    wchar_t note[200];       /* a warning, or empty */
} GameInfo;

typedef struct { GameInfo info; char dir[MAX_PATH]; } Install;
typedef struct { RECT r; int enabled, visible; } Button;
typedef struct { float x, y, vx, vy, size, alpha, phase; int glint; } Grain;
/* Lettering drawn with a glow: its coverage and a blurred copy of it. */
typedef struct { uint8_t *mask; float *glow; int w, h; } GlowText;

static struct {
    HWND hwnd;
    HDC dc;
    HBITMAP bmp;
    uint32_t *px, *bg;
    HDC logo_dc;
    HBITMAP logo_bmp;
    int logo_w, logo_h;
    GlowText title, label_demo, label_game;
    HANDLE font_mem;
    int atlantis;
    HFONT f_sub, f_text, f_small, f_label;
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
    char start_dir[MAX_PATH];         /* the folder this executable was given */
    Install inst[GAME_KINDS];         /* [GAME_DEMO], [GAME_RETAIL] */
    wchar_t note[200];                /* a folder that could not be used */
    char chosen[MAX_PATH];

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

static const wchar_t *kind_exe(int kind)
{
    return kind == GAME_RETAIL ? L"sot-xbox-retail.exe" : L"sot-xbox-demo.exe";
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
    if (!g->present) return;
    snprintf(xbe, sizeof xbe, "%s\\default.xbe", dir);
    if (path_kind(dir, "default.xbe") == 1 && sha256_file(xbe, hex)) {
        uint32_t title_id = 0;
        wchar_t name[41] = {0};
        if (!strcmp(hex, RESOT_DEMO_XBE_SHA256)) {
            g->kind = GAME_DEMO; g->exact = 1;
            wcscpy_s(g->line, 160, L"E3 2003 demo  \x2022  2003-07-18");
            return;
        }
        if (!strcmp(hex, RESOT_RETAIL_XBE_SHA256)) {
            g->kind = GAME_RETAIL; g->exact = 1;
            wcscpy_s(g->line, 160, L"NTSC retail  \x2022  2003-10-20");
            return;
        }
        if (xbe_title(xbe, &title_id, name) && wcsstr(name, L"Prince of Persia")) {
            g->kind = title_id == 0x5553001Du ? GAME_RETAIL : GAME_DEMO;
            swprintf(g->line, 160, L"%ls  \x2022  other revision", g->kind == GAME_RETAIL ? L"Retail" : L"Demo");
            wcscpy_s(g->note, 200, L"A default.xbe here is not the build reSOT supports; the game may not run.");
            return;
        }
        wcscpy_s(g->note, 200, L"A folder holds a default.xbe that is not Prince of Persia: The Sands of Time.");
        return;
    }
    /* No default.xbe (a portable package): what only one of them ships. */
    if (path_kind(dir, "shaders.bin") == 1 || path_kind(dir, "POP1") == 2) {
        g->kind = GAME_RETAIL;
        wcscpy_s(g->line, 160, L"Retail  \x2022  recognised by its files");
    } else if (path_kind(dir, "preview.bik") == 1) {
        g->kind = GAME_DEMO;
        wcscpy_s(g->line, 160, L"Demo  \x2022  recognised by its files");
    } else {
        wcscpy_s(g->note, 200, L"Game files found but not identified: add the disc's default.xbe to that folder.");
    }
}

/* resot-options.ini beside the executable, [Launcher] DemoDir / RetailDir:
 * relative to the executable's folder when inside it, so the folder can move.
 * GameDir is what the first launcher wrote; it is still read. */
static void ini_path(char *out, size_t size)
{
    char dir[MAX_PATH];
    if (!to_ansi(L.exe_dir, dir, sizeof dir)) { out[0] = 0; return; }
    snprintf(out, size, "%s\\resot-options.ini", dir);
}

static int remembered_dir(const char *key, char *out, size_t size)
{
    char ini[MAX_PATH], value[MAX_PATH], dir[MAX_PATH];
    ini_path(ini, sizeof ini);
    if (!ini[0] || !GetPrivateProfileStringA("Launcher", key, "", value, sizeof value, ini))
        return 0;
    if ((value[0] && value[1] == ':') || (value[0] == '\\' && value[1] == '\\')) {
        strncpy_s(out, size, value, _TRUNCATE);
    } else {
        if (!to_ansi(L.exe_dir, dir, sizeof dir)) return 0;
        snprintf(out, size, "%s\\%s", dir, value);
    }
    return 1;
}

static void remember_dir(int kind, const char *game_dir)
{
    char ini[MAX_PATH], dir[MAX_PATH];
    const char *value = game_dir;
    size_t n;
    if (kind != GAME_DEMO && kind != GAME_RETAIL) return;
    ini_path(ini, sizeof ini);
    if (!ini[0]) return;
    if (to_ansi(L.exe_dir, dir, sizeof dir)) {
        n = strlen(dir);
        if (!_strnicmp(game_dir, dir, n) && game_dir[n] == '\\' && game_dir[n + 1])
            value = game_dir + n + 1;
    }
    WritePrivateProfileStringA("Launcher", kind == GAME_DEMO ? "DemoDir" : "RetailDir", value, ini);
}

static void consider(const char *dir)
{
    GameInfo g;
    Install *slot;
    int k;
    if (!game_files_present(dir)) return;
    for (k = GAME_DEMO; k < GAME_KINDS; ++k)
        if (!_stricmp(L.inst[k].dir, dir)) return;
    detect_game(dir, &g);
    if (g.kind == GAME_NONE) {
        if (!L.note[0]) wcscpy_s(L.note, 200, g.note);
        return;
    }
    slot = &L.inst[g.kind];
    if (!slot->dir[0] || (!slot->info.exact && g.exact)) {
        slot->info = g;
        strncpy_s(slot->dir, sizeof slot->dir, dir, _TRUNCATE);
    }
}

/* Every place a game may be: the folder given, beside the executable, the
 * remembered folders, then each folder beside the executable. */
static void scan_installs(void)
{
    char dir[MAX_PATH], path[MAX_PATH];
    WIN32_FIND_DATAA found;
    HANDLE search;
    memset(L.inst, 0, sizeof L.inst);
    L.note[0] = 0;
    consider(L.start_dir);
    if (!to_ansi(L.exe_dir, dir, sizeof dir)) return;
    consider(dir);
    if (remembered_dir("DemoDir", path, sizeof path)) consider(path);
    if (remembered_dir("RetailDir", path, sizeof path)) consider(path);
    if (remembered_dir("GameDir", path, sizeof path)) consider(path);
    snprintf(path, sizeof path, "%s\\*", dir);
    search = FindFirstFileA(path, &found);
    if (search == INVALID_HANDLE_VALUE) return;
    do {
        if (!(found.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) || found.cFileName[0] == '.') continue;
        if (snprintf(path, sizeof path, "%s\\%s", dir, found.cFileName) < (int)sizeof path)
            consider(path);
    } while (FindNextFileA(search, &found));
    FindClose(search);
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

static void add(int x, int y, float r, float g, float b)
{
    uint32_t *p, c;
    if ((unsigned)x >= WIN_W || (unsigned)y >= WIN_H) return;
    p = &L.px[y * WIN_W + x];
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

/* A luminous line: a bright core and a soft halo above and below. */
static void glow_hline(int x, int y, int w, int r, int g, int b, float a)
{
    int i, d;
    for (i = 0; i < w; ++i) {
        float edge = fminf(1.0f, fminf((float)i, (float)(w - 1 - i)) / 24.0f);
        blend(x + i, y, r, g, b, a * edge);
        for (d = 1; d <= 4; ++d) {
            float k = a * edge * 0.22f * (5 - d) / 4.0f;
            add(x + i, y - d, r * k, g * k, b * k);
            add(x + i, y + d, r * k, g * k, b * k);
        }
    }
}

static void glow_vline(int x, int y, int h, int r, int g, int b, float a)
{
    int j, d;
    for (j = 0; j < h; ++j) {
        float edge = fminf(1.0f, fminf((float)j, (float)(h - 1 - j)) / 24.0f);
        blend(x, y + j, r, g, b, a * edge);
        for (d = 1; d <= 4; ++d) {
            float k = a * edge * 0.22f * (5 - d) / 4.0f;
            add(x - d, y + j, r * k, g * k, b * k);
            add(x + d, y + j, r * k, g * k, b * k);
        }
    }
}

static void diamond(int cx, int cy, int s, int r, int g, int b, float a)
{
    int i, j;
    for (j = -s; j <= s; ++j)
        for (i = -s; i <= s; ++i)
            if (abs(i) + abs(j) <= s) blend(cx + i, cy + j, r, g, b, a);
}

/* A soft dot, added (light): sand grains and highlights. */
static void glow(float x, float y, float radius, float r, float g, float b, float a)
{
    int x0 = (int)floorf(x - radius - 1), x1 = (int)ceilf(x + radius + 1);
    int y0 = (int)floorf(y - radius - 1), y1 = (int)ceilf(y + radius + 1), i, j;
    for (j = y0; j <= y1; ++j)
        for (i = x0; i <= x1; ++i) {
            float dx = i + 0.5f - x, dy = j + 0.5f - y;
            float d = sqrtf(dx * dx + dy * dy) / (radius + 0.5f), k;
            if (d >= 1.0f) continue;
            k = (1.0f - d) * (1.0f - d) * a;
            add(i, j, r * k, g * k, b * k);
        }
}

/* A blue jewel: the ornament of the frame and the dividers. */
static void jewel(int cx, int cy, int s)
{
    diamond(cx, cy, s + 2, 4, 10, 24, 1.0f);
    diamond(cx, cy, s, 90, 170, 255, 1.0f);
    diamond(cx, cy, s / 2, 230, 245, 255, 1.0f);
    glow((float)cx, (float)cy, s * 2.6f, 60, 140, 255, 0.55f);
}

/* The static picture: night blue, a blue light behind the logo and the
 * title, faint scan lines, a vignette and the luminous double frame. */
static void build_background(void)
{
    int x, y;
    float cx = WIN_W / 2.0f;
    uint32_t *save = L.px;
    for (y = 0; y < WIN_H; ++y) {
        float t = (float)y / (WIN_H - 1);
        for (x = 0; x < WIN_W; ++x) {
            float r = 3 + 5 * (1 - fabsf(t - 0.45f)), g = 7 + 10 * (1 - fabsf(t - 0.45f)),
                  b = 18 + 22 * (1 - fabsf(t - 0.45f)), dx, dy, d, k, v, n;
            /* blue light behind the logo */
            dx = (x - cx) / 330.0f; dy = (y - 125.0f) / 210.0f;
            d = sqrtf(dx * dx + dy * dy);
            k = d < 1.0f ? (1.0f - d) * (1.0f - d) : 0.0f;
            r += 20 * k; g += 70 * k; b += 150 * k;
            /* a wide band of light behind the title */
            dx = (x - cx) / 520.0f; dy = (y - 255.0f) / 60.0f;
            d = dx * dx + dy * dy;
            k = d < 1.0f ? (1.0f - d) * 0.5f : 0.0f;
            r += 8 * k; g += 30 * k; b += 70 * k;
            /* scan lines, vignette, fine grain */
            if (y % 3 == 0) { r *= 0.9f; g *= 0.9f; b *= 0.9f; }
            dx = (x - cx) / cx; dy = (y - WIN_H / 2.0f) / (WIN_H / 2.0f);
            v = 1.0f - 0.5f * fminf(1.0f, (dx * dx + dy * dy) * 0.6f);
            n = (float)(((x * 73856093u) ^ (y * 19349663u)) % 5u) - 2.0f;
            L.bg[y * WIN_W + x] = 0xFF000000u
                | (uint32_t)clampi((int)(r * v + n * 0.5f)) << 16
                | (uint32_t)clampi((int)(g * v + n * 0.7f)) << 8
                | (uint32_t)clampi((int)(b * v + n));
        }
    }
    L.px = L.bg;
    frame(9, 9, WIN_W - 18, WIN_H - 18, 1, 40, 80, 150, 0.7f);
    glow_hline(16, 16, WIN_W - 32, 80, 160, 255, 0.9f);
    glow_hline(16, WIN_H - 17, WIN_W - 32, 80, 160, 255, 0.9f);
    glow_vline(16, 16, WIN_H - 32, 80, 160, 255, 0.9f);
    glow_vline(WIN_W - 17, 16, WIN_H - 32, 80, 160, 255, 0.9f);
    frame(22, 22, WIN_W - 44, WIN_H - 44, 1, 30, 70, 140, 0.6f);
    jewel(16, 16, 7); jewel(WIN_W - 17, 16, 7);
    jewel(16, WIN_H - 17, 7); jewel(WIN_W - 17, WIN_H - 17, 7);
    jewel(WIN_W / 2, 16, 5); jewel(WIN_W / 2, WIN_H - 17, 5);
    L.px = save;
}

static void spawn_grain(Grain *s, int anywhere)
{
    s->glint = (rnd() % 6) == 0;
    s->x = frand(-40.0f, (float)WIN_W);
    s->y = anywhere ? frand(0.0f, (float)WIN_H) : frand(-30.0f, -2.0f);
    s->vx = frand(6.0f, 22.0f);
    s->vy = s->glint ? frand(-14.0f, -4.0f) : frand(14.0f, 42.0f);
    if (s->glint && !anywhere) s->y = frand((float)WIN_H * 0.5f, (float)WIN_H);
    s->size = s->glint ? frand(1.4f, 2.6f) : frand(0.7f, 1.8f);
    s->alpha = s->glint ? frand(0.6f, 1.0f) : frand(0.45f, 1.0f);
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
        if (s->glint) glow(s->x, s->y, s->size * 2.2f, 255, 214, 130, a * 0.9f);
        else glow(s->x, s->y, s->size, 240, 180, 80, a);
    }
}

/* Coverage of a text drawn in white on black (red channel), and its glow:
 * three box blurs of radius `blur`, close to a Gaussian. */
static GlowText glow_text(HFONT font, const wchar_t *text, int w, int h, int blur)
{
    GlowText t = {0};
    BITMAPINFO bi = {0};
    void *bits = NULL;
    HDC dc = CreateCompatibleDC(NULL);
    HBITMAP bmp;
    RECT r = {0, 0, w, h};
    float *tmp;
    int i, x, y, pass;
    bi.bmiHeader.biSize = sizeof bi.bmiHeader;
    bi.bmiHeader.biWidth = w; bi.bmiHeader.biHeight = -h;
    bi.bmiHeader.biPlanes = 1; bi.bmiHeader.biBitCount = 32;
    bmp = dc ? CreateDIBSection(dc, &bi, DIB_RGB_COLORS, &bits, NULL, 0) : NULL;
    t.mask = (uint8_t *)calloc((size_t)w * h, 1);
    t.glow = (float *)calloc((size_t)w * h, sizeof(float));
    tmp = (float *)calloc((size_t)w * h, sizeof(float));
    if (!bmp || !t.mask || !t.glow || !tmp) {
        if (bmp) DeleteObject(bmp);
        if (dc) DeleteDC(dc);
        free(t.mask); free(t.glow); free(tmp);
        memset(&t, 0, sizeof t);
        return t;
    }
    t.w = w; t.h = h;
    SelectObject(dc, bmp);
    SelectObject(dc, font);
    SetBkMode(dc, TRANSPARENT);
    SetTextColor(dc, RGB(255, 255, 255));
    DrawTextW(dc, text, -1, &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE | DT_NOPREFIX);
    GdiFlush();
    for (i = 0; i < w * h; ++i) {
        t.mask[i] = (uint8_t)((((uint32_t *)bits)[i] >> 16) & 255);
        t.glow[i] = t.mask[i] / 255.0f;
    }
    for (pass = 0; pass < 3; ++pass) {
        for (y = 0; y < h; ++y) {          /* horizontal */
            float sum = 0;
            for (x = -blur; x < w + blur; ++x) {
                if (x + blur < w) sum += t.glow[y * w + x + blur];
                if (x - blur - 1 >= 0) sum -= t.glow[y * w + x - blur - 1];
                if (x >= 0 && x < w) tmp[y * w + x] = sum / (2 * blur + 1);
            }
        }
        for (x = 0; x < w; ++x) {          /* vertical */
            float sum = 0;
            for (y = -blur; y < h + blur; ++y) {
                if (y + blur < h) sum += tmp[(y + blur) * w + x];
                if (y - blur - 1 >= 0) sum -= tmp[(y - blur - 1) * w + x];
                if (y >= 0 && y < h) t.glow[y * w + x] = sum / (2 * blur + 1);
            }
        }
    }
    free(tmp);
    DeleteObject(bmp);
    DeleteDC(dc);
    return t;
}

/* White-blue lettering, top to bottom from `top` to `bottom`, over a blue
 * glow of strength `halo` (0: none). `shine` adds a light passing across. */
static void draw_glow_text(const GlowText *t, int x0, int y0, float halo,
                           const int top[3], const int bottom[3], int shine)
{
    int x, y;
    float sweep = fmodf(L.time * 140.0f, t->w * 2.4f) - t->w * 0.7f;
    if (!t->mask) return;
    if (halo > 0)
        for (y = 0; y < t->h; ++y)
            for (x = 0; x < t->w; ++x) {
                float k = t->glow[y * t->w + x] * halo;
                if (k > 0.004f) add(x0 + x, y0 + y, 40 * k, 120 * k, 255 * k);
            }
    for (y = 0; y < t->h; ++y) {
        float f = (float)y / t->h;
        int r = (int)(top[0] + (bottom[0] - top[0]) * f);
        int g = (int)(top[1] + (bottom[1] - top[1]) * f);
        int b = (int)(top[2] + (bottom[2] - top[2]) * f);
        for (x = 0; x < t->w; ++x) {
            uint8_t m = t->mask[y * t->w + x];
            if (!m) continue;
            if (shine && fabsf(x - sweep - y * 0.6f) < 60.0f)
                blend(x0 + x, y0 + y, 255, 255, 255, m / 255.0f);
            else
                blend(x0 + x, y0 + y, r, g, b, m / 255.0f);
        }
    }
}

static void divider(int cx, int y, int half)
{
    glow_hline(cx - half, y, 2 * half, 90, 170, 255, 0.9f);
    jewel(cx, y, 5);
    jewel(cx - half / 2, y, 3);
    jewel(cx + half / 2, y, 3);
}

static void draw_button(int id)
{
    static const int text_top[3] = {255, 255, 255}, text_bottom[3] = {170, 210, 255};
    static const int off_top[3] = {96, 110, 138}, off_bottom[3] = {70, 82, 108};
    Button *b = &L.btn[id];
    RECT r = b->r;
    int w = r.right - r.left, h = r.bottom - r.top, y;
    int hot = b->enabled && L.hover == id, focus = b->enabled && L.focus == id;
    const GlowText *label = id == BTN_DEMO ? &L.label_demo : &L.label_game;
    if (!b->visible) return;
    for (y = 0; y < h; ++y) {
        float t = (float)y / h;
        if (!b->enabled) fill(r.left, r.top + y, w, 1, 8, 12, 22, 0.8f);
        else if (hot) fill(r.left, r.top + y, w, 1, (int)(20 - 10 * t), (int)(56 - 26 * t), (int)(120 - 50 * t), 0.92f);
        else fill(r.left, r.top + y, w, 1, (int)(10 - 4 * t), (int)(26 - 12 * t), (int)(60 - 26 * t), 0.88f);
    }
    if (b->enabled) {
        int c = hot || focus;
        glow_hline(r.left, r.top, w, c ? 170 : 80, c ? 215 : 160, 255, 1.0f);
        glow_hline(r.left, r.bottom - 1, w, c ? 170 : 80, c ? 215 : 160, 255, 1.0f);
        frame(r.left, r.top, w, h, 1, c ? 150 : 60, c ? 205 : 130, 255, 0.9f);
        frame(r.left + 5, r.top + 5, w - 10, h - 10, 1, 40, 90, 180, 0.7f);
        jewel(r.left, r.top + h / 2, 6);
        jewel(r.right - 1, r.top + h / 2, 6);
        if (hot) glow((float)(r.left + w / 2), (float)(r.top + h / 2), w * 0.5f, 30, 80, 200, 0.35f);
        draw_glow_text(label, r.left, r.top, hot ? 2.2f : 1.3f, text_top, text_bottom, 0);
    } else {
        frame(r.left, r.top, w, h, 1, 50, 64, 92, 0.7f);
        draw_glow_text(label, r.left, r.top, 0.0f, off_top, off_bottom, 0);
    }
}

static void text_at(HFONT font, COLORREF color, const wchar_t *text, int x, int y, int w, int h, UINT format)
{
    RECT r = {x, y, x + w, y + h};
    SelectObject(L.dc, font);
    SetTextColor(L.dc, color);
    DrawTextW(L.dc, text, -1, &r, format | DT_NOPREFIX);
}

/* What one button would start, under it. */
static void install_text(int kind, const RECT *button)
{
    const Install *in = &L.inst[kind];
    wchar_t dir[MAX_PATH];
    int x = button->left - 20, w = button->right - button->left + 40;
    if (!in->dir[0]) {
        text_at(L.f_text, RGB(96, 112, 140), L"Not installed", x, button->bottom + 12, w, 24,
                DT_CENTER | DT_SINGLELINE);
        return;
    }
    text_at(L.f_text, in->info.exact ? RGB(214, 232, 255) : RGB(255, 200, 120), in->info.line,
            x, button->bottom + 12, w, 24, DT_CENTER | DT_SINGLELINE | DT_END_ELLIPSIS);
    to_wide(in->dir, dir, MAX_PATH);
    text_at(L.f_small, RGB(110, 140, 184), dir, x, button->bottom + 38, w, 18,
            DT_CENTER | DT_SINGLELINE | DT_PATH_ELLIPSIS);
}

static void layout(void)
{
    int i, x0 = (WIN_W - 2 * BTN_W - 50) / 2;
    for (i = 0; i < BTN_COUNT; ++i) L.btn[i].visible = !L.extracting;
    SetRect(&L.btn[BTN_DEMO].r, x0, BTN_Y, x0 + BTN_W, BTN_Y + BTN_H);
    SetRect(&L.btn[BTN_GAME].r, x0 + BTN_W + 50, BTN_Y, x0 + 2 * BTN_W + 50, BTN_Y + BTN_H);
    SetRect(&L.btn[BTN_ISO].r, WIN_W - 250, WIN_H - 62, WIN_W - 40, WIN_H - 34);
    SetRect(&L.btn[BTN_GITHUB].r, 40, WIN_H - 62, 330, WIN_H - 34);
    SetRect(&L.btn[BTN_CLOSE].r, WIN_W - 66, 32, WIN_W - 32, 66);
    SetRect(&L.btn[BTN_CANCEL].r, (WIN_W - BTN_W) / 2, 512, (WIN_W + BTN_W) / 2, 512 + BTN_H);
    L.btn[BTN_CANCEL].visible = L.extracting;
    L.btn[BTN_CLOSE].visible = 1;
    /* A button starts its game from its own folder, in this executable or
     * the other target's beside it. */
    L.btn[BTN_DEMO].enabled = L.inst[GAME_DEMO].dir[0]
        && (L.this_kind == GAME_DEMO || L.sibling_exists);
    L.btn[BTN_GAME].enabled = L.inst[GAME_RETAIL].dir[0]
        && (L.this_kind == GAME_RETAIL || L.sibling_exists);
    L.btn[BTN_ISO].enabled = L.btn[BTN_GITHUB].enabled = 1;
    L.btn[BTN_CLOSE].enabled = L.btn[BTN_CANCEL].enabled = 1;
    if (!L.btn[L.focus].enabled || !L.btn[L.focus].visible) {
        int mine = L.this_kind == GAME_DEMO ? BTN_DEMO : BTN_GAME;
        L.focus = L.btn[mine].enabled ? mine : L.btn[BTN_DEMO].enabled ? BTN_DEMO
                : L.btn[BTN_GAME].enabled ? BTN_GAME : BTN_ISO;
    }
}

static void refresh(void)
{
    scan_installs();
    layout();
}

static void render(void)
{
    static const int title_top[3] = {255, 255, 255}, title_bottom[3] = {150, 200, 255};
    wchar_t text[400];
    int i;
    GdiFlush();
    memcpy(L.px, L.bg, (size_t)WIN_W * WIN_H * 4);
    draw_sand();
    draw_glow_text(&L.title, 0, TITLE_Y, 1.9f + 0.25f * sinf(L.time * 1.6f), title_top, title_bottom, 1);
    divider(WIN_W / 2, 344, 240);
    if (L.extracting) {
        LONG64 done = L.done_bytes, total = L.total_bytes;
        float f = total > 0 ? (float)((double)done / (double)total) : 0.0f;
        int bx = 200, by = 432, bw = WIN_W - 400, bh = 18, fillw;
        if (f > 1.0f) f = 1.0f;
        fillw = (int)(bw * f);
        fill(bx, by, bw, bh, 4, 10, 24, 0.9f);
        for (i = 0; i < bh; ++i) {
            float t = (float)i / bh;
            fill(bx, by + i, fillw, 1, (int)(255 - 40 * t), (int)(214 - 80 * t), (int)(130 - 90 * t), 1.0f);
        }
        for (i = 0; fillw > 8 && i < 18; ++i)   /* sand running in the bar */
            glow(bx + fmodf(L.time * 90.0f + i * 53.0f, (float)fillw),
                 by + 4.0f + (i * 7) % (bh - 8), 1.2f, 255, 240, 190, 0.7f);
        glow_hline(bx - 3, by - 3, bw + 6, 80, 160, 255, 1.0f);
        glow_hline(bx - 3, by + bh + 2, bw + 6, 80, 160, 255, 1.0f);
        jewel(bx - 3, by + bh / 2, 5);
        jewel(bx + bw + 2, by + bh / 2, 5);
        draw_button(BTN_CANCEL);
    } else {
        draw_button(BTN_DEMO);
        draw_button(BTN_GAME);
        if (L.hover == BTN_GITHUB || L.focus == BTN_GITHUB)
            glow_hline(L.btn[BTN_GITHUB].r.left + 20, L.btn[BTN_GITHUB].r.bottom - 3, 200, 120, 190, 255, 0.8f);
        if (L.hover == BTN_ISO || L.focus == BTN_ISO)
            glow_hline(L.btn[BTN_ISO].r.left + 60, L.btn[BTN_ISO].r.bottom - 3, 150, 120, 190, 255, 0.8f);
    }

    SetBkMode(L.dc, TRANSPARENT);
    text_at(L.f_sub, RGB(176, 206, 245), L"The Sands of Time  \x2022  Xbox, recompiled for Windows",
            0, 302, WIN_W, 30, DT_CENTER | DT_SINGLELINE);
    if (L.extracting) {
        LONG64 done = L.done_bytes, total = L.total_bytes;
        const wchar_t *name = wcsrchr(L.iso_w, L'\\');
        swprintf(text, 400, L"Installing  \x2022  %ls", name ? name + 1 : L.iso_w);
        text_at(L.f_text, RGB(225, 238, 255), text, 60, 384, WIN_W - 120, 30, DT_CENTER | DT_SINGLELINE | DT_END_ELLIPSIS);
        if (total > 0)
            swprintf(text, 400, L"%.0f%%  \x2022  %.1f of %.1f MB", 100.0 * (double)done / (double)total,
                     done / 1048576.0, total / 1048576.0);
        else
            wcscpy_s(text, 400, L"Reading the disc's file table\x2026");
        text_at(L.f_small, RGB(180, 205, 240), text, 0, 458, WIN_W, 20, DT_CENTER | DT_SINGLELINE);
        EnterCriticalSection(&L.lock);
        text_at(L.f_small, RGB(110, 140, 184), L.status, 120, 478, WIN_W - 240, 18, DT_CENTER | DT_SINGLELINE | DT_PATH_ELLIPSIS);
        LeaveCriticalSection(&L.lock);
        {
            RECT r = L.btn[BTN_CANCEL].r;
            text_at(L.f_text, L.hover == BTN_CANCEL ? RGB(255, 255, 255) : RGB(200, 225, 255), L"Cancel",
                    r.left, r.top, r.right - r.left, r.bottom - r.top, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        }
    } else {
        text_at(L.f_label, RGB(110, 165, 240), L"INSTALLED GAMES", 0, 356, WIN_W, 18, DT_CENTER | DT_SINGLELINE);
        install_text(GAME_DEMO, &L.btn[BTN_DEMO].r);
        install_text(GAME_RETAIL, &L.btn[BTN_GAME].r);
        text[0] = 0;
        if (L.error[0]) wcscpy_s(text, 400, L.error);
        else if (!L.inst[GAME_DEMO].dir[0] && !L.inst[GAME_RETAIL].dir[0])
            wcscpy_s(text, 400, L.note[0] ? L.note : L"No game files found: install from your Xbox disc image (ISO).");
        else {
            int k;
            for (k = GAME_DEMO; k < GAME_KINDS && !text[0]; ++k)
                if (L.inst[k].dir[0] && k != L.this_kind && !L.sibling_exists)
                    swprintf(text, 400, L"%ls is not beside this program: copy it here to start that game.", kind_exe(k));
            for (k = GAME_DEMO; k < GAME_KINDS && !text[0]; ++k)
                if (L.inst[k].info.note[0]) wcscpy_s(text, 400, L.inst[k].info.note);
        }
        if (text[0])
            text_at(L.f_small, L.error[0] ? RGB(255, 130, 110) : RGB(255, 200, 120), text, 60, 528, WIN_W - 120, 20,
                    DT_CENTER | DT_SINGLELINE | DT_END_ELLIPSIS);
        text_at(L.f_small, L.hover == BTN_GITHUB ? RGB(235, 245, 255) : RGB(140, 185, 245), L"\x2605  " GITHUB_TEXT,
                L.btn[BTN_GITHUB].r.left, L.btn[BTN_GITHUB].r.top, 290, 28, DT_LEFT | DT_VCENTER | DT_SINGLELINE);
        text_at(L.f_small, L.hover == BTN_ISO ? RGB(235, 245, 255) : RGB(140, 185, 245), L"Install from ISO\x2026  \x25B8",
                L.btn[BTN_ISO].r.left, L.btn[BTN_ISO].r.top, 210, 28, DT_RIGHT | DT_VCENTER | DT_SINGLELINE);
    }
    text_at(L.f_text, L.hover == BTN_CLOSE ? RGB(235, 245, 255) : RGB(110, 165, 240), L"\x2715",
            L.btn[BTN_CLOSE].r.left, L.btn[BTN_CLOSE].r.top, 34, 34, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    if (L.logo_dc) {
        BLENDFUNCTION bf = {AC_SRC_OVER, 0, 255, AC_SRC_ALPHA};
        AlphaBlend(L.dc, (WIN_W - L.logo_w) / 2, LOGO_Y, L.logo_w, L.logo_h, L.logo_dc, 0, 0, L.logo_w, L.logo_h, bf);
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
    HFONT title, button;
    if (ttf) L.font_mem = AddFontMemResourceEx((void *)ttf, size, NULL, &count);
    L.atlantis = L.font_mem && count;
    display = L.atlantis ? L"Atlantis MF" : serif;
    L.f_sub = make_font(serif, 21, FW_NORMAL, 1, CLEARTYPE_QUALITY);
    L.f_text = make_font(serif, 20, FW_NORMAL, 0, CLEARTYPE_QUALITY);
    L.f_small = make_font(L"Segoe UI", 14, FW_NORMAL, 0, CLEARTYPE_QUALITY);
    L.f_label = make_font(L"Segoe UI", 13, FW_SEMIBOLD, 0, CLEARTYPE_QUALITY);
    title = make_font(display, L.atlantis ? 72 : 60, L.atlantis ? FW_NORMAL : FW_BOLD, 0, ANTIALIASED_QUALITY);
    button = make_font(display, L.atlantis ? 32 : 28, L.atlantis ? FW_NORMAL : FW_SEMIBOLD, 0, ANTIALIASED_QUALITY);
    L.title = glow_text(title, L"Prince of Persia", WIN_W, TITLE_H, 7);
    L.label_demo = glow_text(button, L"Start Demo", BTN_W, BTN_H, 4);
    L.label_game = glow_text(button, L"Start Game", BTN_W, BTN_H, 4);
    DeleteObject(title);
    DeleteObject(button);
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

/* A folder that now holds a game: remembered under its kind, then a rescan. */
static int adopt(const char *dir)
{
    GameInfo g;
    detect_game(dir, &g);
    remember_dir(g.kind, dir);
    L.error[0] = 0;
    refresh();
    return g.kind;
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
            adopt(L.out_a);
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
    if (MessageBoxW(L.hwnd, L"Stop installing? The files written so far stay in the folder.",
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
        refresh();
        wcscpy_s(L.error, 400, L"Installation cancelled.");
        return;
    }
    if (result == 1 && game_files_present(L.out_a)) {
        if (adopt(L.out_a) == GAME_NONE)
            wcscpy_s(L.error, 400, L"The ISO was extracted, but it is not a supported Prince of Persia disc.");
        return;
    }
    to_wide(s_last_error, error, 400);
    refresh();
    if (result == 1)
        wcscpy_s(L.error, 400, L"The ISO was extracted, but it holds no Prince of Persia game files.");
    else
        swprintf(L.error, 400, L"Installation failed: %ls", error[0] ? error : L"extract-xiso stopped with an error");
}

/* ── starting a game ───────────────────────────────────────── */

static void start(int kind)
{
    STARTUPINFOW si = {sizeof si};
    PROCESS_INFORMATION pi;
    wchar_t command[MAX_PATH + 4];
    const char *dir = L.inst[kind].dir;
    if (!dir[0]) return;
    remember_dir(kind, dir);
    if (kind == L.this_kind) {
        strncpy_s(L.chosen, sizeof L.chosen, dir, _TRUNCATE);
        L.result = RESOT_LAUNCH_HERE;
        DestroyWindow(L.hwnd);
        return;
    }
    /* The other target: its executable reads the folder from RESOT_ASSET_DIR
     * and skips this screen. Nothing of this process's runtime is set yet. */
    _putenv_s("RESOT_ASSET_DIR", dir);
    _putenv_s("RESOT_SKIP_LAUNCHER", "1");
    swprintf(command, MAX_PATH + 4, L"\"%ls\"", L.sibling);
    if (CreateProcessW(L.sibling, command, NULL, NULL, FALSE, 0, NULL, L.exe_dir, &si, &pi)) {
        CloseHandle(pi.hThread);
        CloseHandle(pi.hProcess);
        strncpy_s(L.chosen, sizeof L.chosen, dir, _TRUNCATE);
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
    case WM_MOUSEMOVE:
        if (!L.tracking) {
            TRACKMOUSEEVENT t = {sizeof t, TME_LEAVE, hwnd, 0};
            TrackMouseEvent(&t);
            L.tracking = 1;
        }
        L.hover = hit(GET_X_LPARAM(lp), GET_Y_LPARAM(lp));
        return 0;
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

static void free_glow(GlowText *t) { free(t->mask); free(t->glow); memset(t, 0, sizeof *t); }

static void destroy_window(void)
{
    if (L.hwnd && IsWindow(L.hwnd)) DestroyWindow(L.hwnd);
    UnregisterClassW(L"reSOTLauncher", GetModuleHandleW(NULL));
    if (L.logo_bmp) DeleteObject(L.logo_bmp);
    if (L.logo_dc) DeleteDC(L.logo_dc);
    if (L.bmp) DeleteObject(L.bmp);
    if (L.dc) DeleteDC(L.dc);
    if (L.f_sub) DeleteObject(L.f_sub);
    if (L.f_text) DeleteObject(L.f_text);
    if (L.f_small) DeleteObject(L.f_small);
    if (L.f_label) DeleteObject(L.f_label);
    if (L.font_mem) RemoveFontMemResourceEx(L.font_mem);
    free_glow(&L.title); free_glow(&L.label_demo); free_glow(&L.label_game);
    free(L.bg);
}

int resot_launcher_run(const char *target_id, char *game_dir, size_t game_dir_size, int flags)
{
    HRESULT com;
    MSG message;
    wchar_t *slash;
    int result;

    memset(&L, 0, sizeof L);
    L.target_id = target_id;
    L.this_kind = strcmp(target_id, "xbox-retail") ? GAME_DEMO : GAME_RETAIL;
    L.flags = flags;
    L.hover = L.pressed = -1;
    L.focus = L.this_kind == GAME_DEMO ? BTN_DEMO : BTN_GAME;   /* Enter starts this executable's game */
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

    strncpy_s(L.start_dir, sizeof L.start_dir, game_dir, _TRUNCATE);
    if ((flags & RESOT_LAUNCHER_NO_SCREEN) && !(flags & RESOT_LAUNCHER_ASK_ISO)
        && game_files_present(L.start_dir))
        return RESOT_LAUNCH_HERE;

    com = CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
    InitializeCriticalSection(&L.lock);
    if (!create_window()) {
        fprintf(stderr, "[LAUNCHER] window creation failed: %lu\n", GetLastError());
        destroy_window();
        DeleteCriticalSection(&L.lock);
        if (SUCCEEDED(com)) CoUninitialize();
        return RESOT_LAUNCH_HERE;
    }
    refresh();
    ShowWindow(L.hwnd, SW_SHOW);
    SetForegroundWindow(L.hwnd);
    if ((!L.inst[GAME_DEMO].dir[0] && !L.inst[GAME_RETAIL].dir[0]) || (flags & RESOT_LAUNCHER_ASK_ISO))
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
        strncpy_s(game_dir, game_dir_size, L.chosen, _TRUNCATE);
    L.hwnd = NULL;
    destroy_window();
    DeleteCriticalSection(&L.lock);
    if (SUCCEEDED(com)) CoUninitialize();
    fprintf(stderr, "[LAUNCHER] %s, game folder %s\n",
            result == RESOT_LAUNCH_HERE ? "start" : result == RESOT_LAUNCH_HANDED_OFF ? "handed off" : "quit",
            result == RESOT_LAUNCH_QUIT ? "-" : L.chosen);
    return result;
}
