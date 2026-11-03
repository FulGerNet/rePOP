/* Include the production detector without opening windows or doing network I/O. */
#include "../../port/windows/src/launcher.c"
#define CHECK(x) do { if (!(x)) { fprintf(stderr, "FAIL %d: %s\n", __LINE__, #x); return 1; } } while (0)
int resot_extract_xiso_main(int argc, char **argv) { (void)argc; (void)argv; return 1; }
int main(int argc, char **argv) {
    GameInfo g;
    CHECK(argc == 2 || argc == 4);
    detect_game(argv[1], &g);
    CHECK(g.kind == GAME_RETAIL && !g.exact && g.present && g.note[0]);
    if (argc == 4) {
        detect_game(argv[2], &g);
        CHECK(g.kind == GAME_RETAIL && g.exact && !g.note[0]);
        CHECK(!wcscmp(g.line, L"PAL retail (EU)"));
        detect_game(argv[3], &g);
        CHECK(g.kind == GAME_RETAIL && g.exact && !g.note[0]);
        CHECK(wcsstr(g.line, L"NTSC"));
        memset(L.inst, 0, sizeof L.inst);
        consider(argv[2], 1); consider(argv[3], 0);
        CHECK(!strcmp(L.inst[GAME_RETAIL].dir, argv[2]));
        memset(L.inst, 0, sizeof L.inst);
        consider(argv[3], 0); consider(argv[2], 1);
        CHECK(!strcmp(L.inst[GAME_RETAIL].dir, argv[2]));
        memset(L.inst, 0, sizeof L.inst);
        consider(argv[1], 1); consider(argv[3], 0);
        CHECK(!strcmp(L.inst[GAME_RETAIL].dir, argv[1]));
        memset(L.inst, 0, sizeof L.inst);
        consider(argv[1], 0); consider(argv[3], 0);
        CHECK(!strcmp(L.inst[GAME_RETAIL].dir, argv[3]));
    }
    puts("disc detection tests passed");
    return 0;
}
