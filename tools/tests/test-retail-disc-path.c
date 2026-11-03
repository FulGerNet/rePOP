/* Synthetic disc trees exercise the production path translator. */
#include "kernel.h"
#include "resot_runtime.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

void xbox_log(int level, const char *subsystem, const char *fmt, ...) {
    (void)level; (void)subsystem; (void)fmt;
}
const char *xbox_LookupSymbolicLink(const char *link) { (void)link; return NULL; }
#define CHECK(x) do { if (!(x)) { fprintf(stderr, "FAIL %d: %s\n", __LINE__, #x); exit(1); } } while (0)
static void touch(const char *path) {
    FILE *f = fopen(path, "wb"); CHECK(f); CHECK(fclose(f) == 0);
}
static void expect(const char *guest, const wchar_t *suffix) {
    wchar_t actual[MAX_PATH], wanted[MAX_PATH], cwd[MAX_PATH];
    CHECK(GetCurrentDirectoryW(MAX_PATH, cwd));
    swprintf_s(wanted, MAX_PATH, L"%s\\%s", cwd, suffix);
    CHECK(xbox_translate_path(guest, actual, MAX_PATH));
    if (_wcsicmp(actual, wanted)) { fwprintf(stderr, L"%s != %s\n", actual, wanted); exit(1); }
    CHECK(!_wcsicmp(actual, xbox_LastHostPath()));
}
int main(void) {
    char cwd[MAX_PATH];
    CHECK(GetCurrentDirectoryA(MAX_PATH, cwd));
    CHECK(CreateDirectoryA("video", NULL));
    CHECK(CreateDirectoryA("video/30fps", NULL));
    CHECK(CreateDirectoryA("video/25fps", NULL));
    touch("video/30fps/intro.int"); touch("video/25fps/intro.int");
    touch("video/25fps/only25.int");
    xbox_path_init(cwd, cwd);
#if RESOT_RUNTIME_RETAIL
    expect("D:\\VIDEO\\INTRO.INT", L"video\\30fps\\intro.int");
    expect("\\Device\\CdRom0\\video\\intro.int", L"video\\30fps\\intro.int");
    expect("D:\\video/intro.int", L"video\\30fps\\intro.int");
    expect("D:\\video\\only25.int", L"video\\25fps\\only25.int");
#else
    expect("D:\\video\\intro.int", L"video\\intro.int");
#endif
    touch("video/intro.int");
    expect("D:\\video\\intro.int", L"video\\intro.int");
    expect("D:\\video\\missing.int", L"video\\missing.int");
    expect("D:\\video\\30fps\\missing.int", L"video\\30fps\\missing.int");
    expect("T:\\video\\intro.int", L"TitleData\\video\\intro.int");
    expect("D:\\prince.bf", L"prince.bf");
    puts("disc path tests passed");
    return 0;
}
