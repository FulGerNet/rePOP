/* reSOT: the title's own built-in cheats switch, changed while it runs.
 *
 * Both Xbox executables keep the switch in a variable of the universe AI
 * (key 0xCC00008E, the BF header's universe key): the demo's OVA 8
 * "mb_CheatsEnabled" and the retail's OVA 22, int 0/1, with neither the
 * Reinit nor the Save flag, so a value written here lasts until the process
 * ends. The compiled AI that implements the cheats reads it every frame
 * (demo 0x001EC749, retail 0x001DC66E and 0x0026F2FE), so a change applies
 * at once, without rebuilding the BF.
 *
 * The universe's variable buffer is found from the key's loaded address in
 * the LOA table the compiled code's resolver searches (bucket table +
 * ((key >> 8) + key) & 0xFF) * 16, {sorted (key, address) pairs, count}).
 * For the universe key that address is the AI instance itself (+0 model,
 * +0x44 pc_VarsBuffer): observed on the demo at the main menu, instance
 * 0x01492080, vars[0x6C] = 1 as that BF's initial value, vars[4] =
 * 0xFFFFFFFF and vars[8] = 0 as OVA 2 and 3. Variable offsets in memory are
 * the serialized ones minus 4. Every read is probed; nothing is written
 * unless the whole chain is readable. The including target defines:
 *   RESOT_CHEATS_LOA_TABLE   bucket table read by the resolver
 *   RESOT_CHEATS_VAR_OFFSET  the variable's offset in pc_VarsBuffer
 * Title thread only (the menu's execute and the per-frame pad poll). */
#ifndef RESOT_CHEATS_H
#define RESOT_CHEATS_H
#include <stdint.h>
#include <stdio.h>
#include "guest_probe.h"

#define RESOT_CHEATS_UNIVERSE_KEY 0xCC00008Eu

static int s_cheats_want = -1;      /* -1: as the BF has it; 0/1: chosen here */
static int s_cheats_seen = -2;      /* last value shown on the label */
static unsigned s_cheats_frames, s_cheats_toggled_at; /* pad polls */
/* On the demo's main page one A press ran the choice's action twice, on
 * consecutive polls (log lines 1966-1971 of a scripted run): a second
 * toggle this soon after the first is the same press. */
#define RESOT_CHEATS_DEBOUNCE 15u

static int resot_cheats_word(uint32_t va, uint32_t *out)
{
    return resot_guest_read_word(g_xbox_mem_offset, va, out);
}

/* The guest address of the switch, or 0 while the universe is not loaded. */
static uint32_t resot_cheats_address(void)
{
    const uint32_t key = RESOT_CHEATS_UNIVERSE_KEY;
    uint32_t bucket = RESOT_CHEATS_LOA_TABLE + (((key >> 8) + key) & 0xFFu) * 16u;
    uint32_t pairs, count, lo, hi, inst = 0, model, vars, value;
    if (!resot_cheats_word(bucket, &pairs) || !resot_cheats_word(bucket + 4, &count) ||
            !pairs || !count || count > 0x100000u)
        return 0;
    for (lo = 0, hi = count; lo < hi;) {         /* the resolver's binary search */
        uint32_t mid = lo + (hi - lo) / 2, k;
        if (!resot_cheats_word(pairs + mid * 8u, &k))
            return 0;
        if (k == key) {
            if (!resot_cheats_word(pairs + mid * 8u + 4, &inst))
                return 0;
            break;
        }
        if (key < k) hi = mid; else lo = mid + 1;
    }
    if (!inst || inst == 0xFFFFFFFFu || !resot_cheats_word(inst, &model) || !model ||
            !resot_cheats_word(inst + 0x44, &vars) || !vars ||
            !resot_cheats_word(vars + RESOT_CHEATS_VAR_OFFSET, &value))
        return 0;
    return vars + RESOT_CHEATS_VAR_OFFSET;
}

/* 0 or 1, or -1 when the switch cannot be read. */
static int resot_cheats_value(void)
{
    uint32_t va = resot_cheats_address(), value;
    if (!va || !resot_cheats_word(va, &value))
        return -1;
    return value != 0;
}

static void resot_cheats_write(uint32_t va, int on)
{
    *(volatile uint32_t *)((uintptr_t)g_xbox_mem_offset + va) = on ? 1u : 0u;
}

/* The menu choice: flip the switch now; remember the choice for when the
 * universe is not readable yet. */
static void resot_cheats_toggle(void)
{
    uint32_t va;
    int now;
    if (s_cheats_toggled_at && s_cheats_frames - s_cheats_toggled_at < RESOT_CHEATS_DEBOUNCE) {
        fprintf(stderr, "[CHEATS] repeated activation of the same press ignored\n");
        return;
    }
    s_cheats_toggled_at = s_cheats_frames ? s_cheats_frames : 1;
    va = resot_cheats_address();
    now = resot_cheats_value();
    s_cheats_want = now >= 0 ? !now : s_cheats_want != 1;
    if (va)
        resot_cheats_write(va, s_cheats_want);
    fprintf(stderr, "[CHEATS] built-in cheats %s (universe var %08X%s) poll %u\n",
            s_cheats_want ? "on" : "off", va, va ? "" : ", applied once the universe is loaded",
            s_cheats_frames);
}

static void resot_map_frame(void);
void resot_scene_costumes_reset(void);    /* port/windows/src/scene.c */

/* Per frame: keep a chosen value, and report whether the label must change. */
static int resot_cheats_frame(void)
{
    int now = resot_cheats_value(), asked = resot_game_cheats_request();
    s_cheats_frames++;
    resot_map_frame();
    if (asked >= 0 && asked != s_cheats_want) {     /* F7 Game behavior */
        s_cheats_want = asked;
        fprintf(stderr, "[CHEATS] built-in cheats %s (F7)\n", asked ? "on" : "off");
    }
    if (s_cheats_want >= 0 && now >= 0 && now != s_cheats_want) {
        resot_cheats_write(resot_cheats_address(), s_cheats_want);
        now = s_cheats_want;
    }
    if (now < 0)
        now = s_cheats_want;
    if (now == s_cheats_seen)
        return 0;
    s_cheats_seen = now;
    resot_game_cheats_report(now);
    fprintf(stderr, "[CHEATS] switch %s (universe var %08X)\n",
            now < 0 ? "not readable yet" : now ? "on" : "off", resot_cheats_address());
    return 1;
}

/* Change map as the title does: the map (world list) key into the universe's
 * mi_CheckPoint_CurMapID and mi_WorldKeyToLoad, then mi_ChangeMapRequest;
 * the universe AI loads, clears the request and stores mi_CurrentWorldKey.
 * Observed: the demo's Start writes +0xA0/+0x88 = 0x0F00532A and request 1,
 * which the universe steps 1 -> 2 -> 3; the retail's Start New Game writes
 * +0x118/+0xF4 = 0x2200B526 and request 3 directly (from the main menu, 1
 * took a longer path that faulted in the loader, 0x003AB1E0). The target
 * defines RESOT_UNIV_CUR_MAP, RESOT_UNIV_WORLD_TO_LOAD, RESOT_UNIV_CHANGE_MAP
 * and RESOT_UNIV_CHANGE_MAP_VALUE. Refused while a request is pending. */
static int resot_change_map(uint32_t key)
{
    uint32_t va = resot_cheats_address(), vars, pending;
    volatile uint32_t *v;
    if (!va || !key)
        return 0;
    vars = va - RESOT_CHEATS_VAR_OFFSET;
    if (!resot_cheats_word(vars + RESOT_UNIV_CHANGE_MAP, &pending) || pending)
        return 0;
    v = (volatile uint32_t *)((uintptr_t)g_xbox_mem_offset + vars);
    v[RESOT_UNIV_CUR_MAP / 4] = key;
    v[RESOT_UNIV_WORLD_TO_LOAD / 4] = key;
    v[RESOT_UNIV_CHANGE_MAP / 4] = RESOT_UNIV_CHANGE_MAP_VALUE;
    fprintf(stderr, "[MAP] change map to %08X requested\n", key);
    return 1;
}

#ifdef RESOT_UNIV_LOAD_MOVIE
/* Retail Special Load Map, as a saved game is loaded: the chosen map with
 * mk_CheckPoint_CurKey (+0) on one of its own checkpoints, and no movie.
 *
 * What the title's Start New Game does (RESOT_UNIV_WATCH, user and scripted
 * runs): the menu's handler (0x00143C9A) closes the menu and sends the Prince
 * message 0xEA; the balcony scene then plays in the menu world for about
 * 1000 polls; only then does the universe get +0x110 = 10, +0 = 0xFFFFFFFF
 * and +0x118 = 0x2200B526, about 120 polls later +0xF4 the same and +0x108
 * 3. +0x110 is not a new-game state but a movie number: at the load
 * 0x001BC41C formats it with "Cine_%03d.int" (0x0041F6DC) and plays it.
 * After the load the universe holds +0 = 0x2200B794, the GAO
 * 0101_Entree_TEC_StartCheckpoint (after MenuBoot's load 0x0F0053D9,
 * Menu3D_TEC_Checkpoint). Following that sequence and replacing the map on
 * the way played the balcony first and left the Prince at a wrong place
 * (user report, bin/logs 23:10: +0 was 0xFFFFFFFF when 1201 loaded).
 *
 * So the caller still sends the title's Start New Game message, which closes
 * the menu (a request written with the menu open left the Prince's
 * [GAO +0x24] on menu3D's freed data), and RESOT_MAP_REQUEST_POLLS later,
 * before the balcony has gone on, the universe is given the chosen map, its
 * checkpoint in +0 (0xFFFFFFFF when none is known) and no movie, with
 * request 3. The rest of the title's new game, should it still write the
 * first map or the movie, is cancelled for RESOT_MAP_FOLLOW_POLLS. */
#define RESOT_MAP_REQUEST_POLLS 45u            /* host values, not XBE constants */
#define RESOT_MAP_FOLLOW_POLLS  20000u
static uint32_t s_map_key, s_map_checkpoint, s_map_seen;   /* seen: +0 while playing */
static unsigned s_map_at, s_map_until, s_map_logged;
static int s_map_state;                 /* 0 idle, 1 waiting, 2 loading, 3 loaded */

static void resot_map_follow(uint32_t key, uint32_t checkpoint)
{
    s_map_key = key;
    s_map_checkpoint = checkpoint ? checkpoint : 0xFFFFFFFFu;
    s_map_at = s_cheats_frames + RESOT_MAP_REQUEST_POLLS;
    s_map_until = s_cheats_frames + RESOT_MAP_FOLLOW_POLLS;
    s_map_state = 1;
    fprintf(stderr, "[MAP] map %08X, checkpoint %08X: requested in %u polls\n", key,
            s_map_checkpoint, RESOT_MAP_REQUEST_POLLS);
}

/* The chosen map in the universe's variables (v: its pc_VarsBuffer). */
static void resot_map_write(volatile uint32_t *v)
{
    v[0] = s_map_checkpoint;                                  /* mk_CheckPoint_CurKey */
    v[RESOT_UNIV_LOAD_MOVIE / 4] = 0xFFFFFFFFu;
    v[RESOT_UNIV_CUR_MAP / 4] = s_map_key;
    v[RESOT_UNIV_WORLD_TO_LOAD / 4] = s_map_key;
}
#endif

/* Per pad poll, after a retail Special Load Map (resot_map_follow). An
 * unreadable universe, as across a load, only skips the poll. */
static void resot_map_frame(void)
{
#ifdef RESOT_UNIV_LOAD_MOVIE
    uint32_t va;
    volatile uint32_t *v;
    if (!s_map_state)
        return;
    if ((int)(s_map_until - s_cheats_frames) < 0) {
        fprintf(stderr, "[MAP] map %08X: stopped watching at poll %u\n", s_map_key,
                s_cheats_frames);
        s_map_state = 0;
        return;
    }
    if (!(va = resot_cheats_address()))
        return;
    v = (volatile uint32_t *)((uintptr_t)g_xbox_mem_offset + va - RESOT_CHEATS_VAR_OFFSET);
    if (s_map_state == 1) {
        if ((int)(s_map_at - s_cheats_frames) > 0)
            return;
        /* The map merges into MenuBoot's aggregate without a primary merge
         * (bin/logs, 1201): only its own costume must count. */
        resot_scene_costumes_reset();
        fprintf(stderr, "[MAP] poll %u: load of %08X at checkpoint %08X (was +0 %08X, movie"
                        " %08X, map %08X)\n", s_cheats_frames, s_map_key, s_map_checkpoint,
                v[0], v[RESOT_UNIV_LOAD_MOVIE / 4], v[RESOT_UNIV_CUR_MAP / 4]);
        resot_map_write(v);
        if (!v[RESOT_UNIV_CHANGE_MAP / 4])          /* else a pending load becomes ours */
            v[RESOT_UNIV_CHANGE_MAP / 4] = RESOT_UNIV_CHANGE_MAP_VALUE;
        s_map_state = 2;
        return;
    }
    if (s_map_state == 2) {
        if (v[RESOT_UNIV_CHANGE_MAP / 4]) {           /* until the universe loads */
            resot_map_write(v);
            return;
        }
        fprintf(stderr, "[MAP] poll %u: %08X loaded (current world %08X, +0 %08X)\n",
                s_cheats_frames, s_map_key, v[RESOT_UNIV_CURRENT_WORLD / 4], v[0]);
        s_map_state = 3;
        s_map_logged = s_cheats_frames;
        s_map_seen = s_map_checkpoint;
        return;
    }
    if (v[0] != 0xFFFFFFFFu)
        s_map_seen = v[0];
    /* Loaded: what the checkpoint became once the level runs (diagnostic). */
    if (s_map_logged && s_cheats_frames - s_map_logged >= 120u) {
        /* The Prince's sector, [GAO +0x24]: left on the menu's freed world it
         * faulted in sub_00030990+0x206 (1401 without a checkpoint). */
        uint32_t gao = 0, sector = 0;
        if (resot_cheats_word(RESOT_MAIN_ACTOR, &gao) && gao)
            resot_cheats_word(gao + 0x24, &sector);
        fprintf(stderr, "[MAP] poll %u: +0 %08X in %08X, Prince %08X sector %08X\n",
                s_cheats_frames, v[0], v[RESOT_UNIV_CURRENT_WORLD / 4], gao, sector);
        s_map_logged = 0;
    }
    /* The title's new game going on: its movie or its first map. */
    if (v[RESOT_UNIV_LOAD_MOVIE / 4] == RESOT_UNIV_NEW_GAME_MOVIE ||
            (s_map_key != RESOT_UNIV_FIRST_MAP &&
             (v[RESOT_UNIV_CUR_MAP / 4] == RESOT_UNIV_FIRST_MAP ||
              v[RESOT_UNIV_WORLD_TO_LOAD / 4] == RESOT_UNIV_FIRST_MAP))) {
        fprintf(stderr, "[MAP] poll %u: the title's new game cancelled (movie %08X, map %08X,"
                        " load %08X, request %u)\n", s_cheats_frames,
                v[RESOT_UNIV_LOAD_MOVIE / 4], v[RESOT_UNIV_CUR_MAP / 4],
                v[RESOT_UNIV_WORLD_TO_LOAD / 4], v[RESOT_UNIV_CHANGE_MAP / 4]);
        v[0] = s_map_seen;
        v[RESOT_UNIV_LOAD_MOVIE / 4] = 0xFFFFFFFFu;
        v[RESOT_UNIV_CHANGE_MAP / 4] = 0;
        v[RESOT_UNIV_CUR_MAP / 4] = s_map_key;
        v[RESOT_UNIV_WORLD_TO_LOAD / 4] = v[RESOT_UNIV_CURRENT_WORLD / 4];
    }
#endif
}

/* Special Load Map. A map is named by its BF entry, "<name>_wol_<bin>.bin",
 * whose key is the binarized one: 0xFF000000 | (key >> 24 & 0xF) << 16 |
 * (key & 0xFFFF) of the key the title asks for (demo: 0x0F005364 is
 * 01_GP01_E3_Long_wol_ff0f5364; retail: Start New Game's 0x2200B526 is
 * 0101_Entree_wol_ff02b526; MenuBoot 0x0B015CEA is ff0b5cea). The loader
 * finds the file from any key with that binarized form (the demo loaded
 * 01_GP01_E3_Long for 0x1F015364), but the level then compares the original
 * key: with 0x0B00399D for 04_GP61_Cour_Interieure the demo faulted at
 * 0x00028FD0 once the level started, with the original 0x1B00399D it did not
 * (both with audio on). So each map carries its original key, taken from the
 * lifted code's immediates or, failing that, the words of the BF's data whose
 * binarized form is the map's, the most frequent one. Retail maps also carry
 * the key of a checkpoint GAO in one of the worlds their list loads (0: none
 * known); the demo's leave it 0. */
typedef struct { const char *name; uint32_t key, checkpoint; } ResotMap;
#define RESOT_MAP_NAME_ONLY 0u              /* listed for the record, not loadable */

/* RESOT_TEST_MAP=<key>,<poll>[,<checkpoint>]: request that map at that pad
 * poll (a check that needs no menu navigation). */
static void resot_test_map(void)
{
    static int done;
    const char *e = getenv("RESOT_TEST_MAP"), *comma;
    if (done || !e || !(comma = strchr(e, ',')))
        return;
    if (s_cheats_frames < (unsigned)strtoul(comma + 1, NULL, 10))
        return;
#ifdef RESOT_UNIV_LOAD_MOVIE
    /* RESOT_TEST_MAP=<key>,<poll>,<checkpoint>: the Special Load Map path
     * (retail; without a checkpoint the Prince's sector stays on the menu's
     * freed world, resot_map_follow). */
    if ((comma = strchr(comma + 1, ',')) != NULL) {
        resot_map_follow((uint32_t)strtoul(e, NULL, 16), (uint32_t)strtoul(comma + 1, NULL, 16));
        done = 1;
        return;
    }
#endif
    done = resot_change_map((uint32_t)strtoul(e, NULL, 16));
}

/* RESOT_UNIV_WATCH=1: log every change of the universe's first 0x50 words
 * (per pad poll). A diagnostic for the variables the title drives, such as
 * the world to load. */
static void resot_universe_watch(void)
{
    static uint32_t prev[0x50];
    static int on = -1, have;
    uint32_t va, w, o, vars;
    if (on < 0) { const char *e = getenv("RESOT_UNIV_WATCH"); on = e && *e && *e != '0'; }
    if (!on || !(va = resot_cheats_address()))
        return;
    vars = va - RESOT_CHEATS_VAR_OFFSET;
    for (o = 0; o < 0x50; o++) {
        if (!resot_cheats_word(vars + o * 4, &w)) break;
        if (have && w != prev[o])
            fprintf(stderr, "[UNIV] poll %u +%03X %08X -> %08X\n", s_cheats_frames, o * 4, prev[o], w);
        prev[o] = w;
    }
    have = 1;
}

/* The Prince's AI variables: compiled AI resolves the special reference 1
 * to the main actor's GAO from RESOT_MAIN_ACTOR (demo 0x001EBF6A reads
 * 0x00614FCC, retail 0x001BD88F 0x0067B6A0), then GAO +0x18 (extended) +4
 * (AI instance) +0x44 (pc_VarsBuffer). 0 when no Prince is loaded. */
static uint32_t resot_prince_vars(void)
{
    uint32_t gao, ext, inst, vars;
    if (!resot_cheats_word(RESOT_MAIN_ACTOR, &gao) || !gao || gao == 0xFFFFFFFFu ||
            !resot_cheats_word(gao + 0x18, &ext) || !ext ||
            !resot_cheats_word(ext + 4, &inst) || !inst ||
            !resot_cheats_word(inst + 0x44, &vars) || !vars)
        return 0;
    return vars;
}

/* Game behavior (F7): keep the Prince's mb_DaggerActive as chosen, and his
 * mi_CostumeID where the target knows it. Demo, names from the Prince AI
 * model's variables (Prince_wow_ff0c0226, file 0xBB000032: mb_DaggerActive
 * +0x8FC, mi_CostumeID +0x5F8, offsets as serialized): in the first E3
 * level 1 and 3. Retail, the same model (424 variables, names stripped):
 * mb_DaggerActive aligned at +0x77C, which was 1 in the main menu and 0 at
 * the start of 0101_Entree, before the Prince has the dagger. */
static void resot_game_behavior_frame(void)
{
    uint32_t vars;
    volatile uint32_t *p;
    int dagger = resot_game_dagger();
#ifdef RESOT_UNIV_TUTORIALS
    {
        /* Tutorials: written when the F7 setting changes and when a map has
         * been loaded, so the title's own option keeps working between. */
        static int applied = -1;
        static uint32_t world;
        uint32_t va = resot_cheats_address(), cur;
        int want = resot_game_tutorials();
        if (va) {
            volatile uint32_t *u = (volatile uint32_t *)((uintptr_t)g_xbox_mem_offset + va
                                                         - RESOT_CHEATS_VAR_OFFSET);
            cur = u[RESOT_UNIV_CURRENT_WORLD / 4];
            if (want != applied || cur != world) {
                u[RESOT_UNIV_TUTORIALS / 4] = want ? 1u : 0u;
                if (want != applied)
                    fprintf(stderr, "[GAME] tutorials %s\n", want ? "on" : "off");
                applied = want;
                world = cur;
            }
        }
    }
#endif
    vars = resot_prince_vars();
    if (!vars)
        return;
    p = (volatile uint32_t *)((uintptr_t)g_xbox_mem_offset + vars);
    if (dagger >= 0 && p[RESOT_PRINCE_DAGGER / 4] != (uint32_t)dagger)
        p[RESOT_PRINCE_DAGGER / 4] = (uint32_t)dagger;
}

/* Prince costume at set-up. His AI's set-up (demo 0x00202F40, retail
 * 0x00270940) copies mi_CostumeID once from variable +0x1C (pc_VarsBuffer
 * +0x44) of a source object it is called with, then picks the costume's
 * models from it (demo 0x002035A7). The source is a reference resolved as
 * at demo 0x002032B5 / retail 0x00270CCA: the running AI instance when it
 * equals RESOT_AI_CURRENT (demo [0x0034AC3C], retail [0x0044AA24]), the
 * main actor for 1, the second for 2, otherwise a GAO, whose instance is
 * [[GAO +0x18] +4]. A costume whose PrinceCostume0N world is not merged
 * shows the Prince as a head without a body: a retail Special Load Map,
 * started as a new game, kept the new game's costume where the level brings
 * another (user report). So when the source's costume is not among those
 * merged with the current world (resot_scene_costumes), the first merged
 * one is written there just before it is read. (An F7 skin choice was
 * removed at the user's request.) */
unsigned resot_scene_costumes(void);

static void resot_game_skin_setup(uint32_t ref)
{
#ifdef RESOT_AI_CURRENT
    unsigned merged = resot_scene_costumes();
    uint32_t cur, gao = ref, ext, inst = 0, vars, now, costume;
    if (!ref || !merged || !resot_cheats_word(RESOT_AI_CURRENT, &cur))
        return;
    if (ref == cur)
        inst = ref;
    else {
        if (ref == 1 || ref == 2)
            if (!resot_cheats_word(RESOT_MAIN_ACTOR + (ref - 1) * 4, &gao))
                return;
        if (!gao || gao == 0xFFFFFFFFu || !resot_cheats_word(gao + 0x18, &ext) || !ext ||
                !resot_cheats_word(ext + 4, &inst))
            return;
    }
    if (!inst || !resot_cheats_word(inst + 0x44, &vars) || !vars ||
            !resot_cheats_word(vars + 0x1C, &now))
        return;
    if (now < 32 && (merged >> now & 1)) {
        fprintf(stderr, "[GAME] Prince set-up: costume %u, loaded mask %X\n", now, merged);
        return;                                   /* the game's costume is loaded */
    }
    for (costume = 0; !(merged >> costume & 1); costume++)
        ;
    *(volatile uint32_t *)((uintptr_t)g_xbox_mem_offset + vars + 0x1C) = costume;
    fprintf(stderr, "[GAME] Prince set-up: costume %u not loaded, PrinceCostume%02u instead"
                    " (source %08X, loaded mask %X)\n", now, costume + 1, ref, merged);
#else
    (void)ref;
#endif
}

static void resot_game_skin_frame(void)
{
}

/* RESOT_PRINCE_DUMP=<poll>: log the Prince's first 0x1400 bytes of
 * variables once, at that pad poll (diagnostic). */
static void resot_prince_dump(void)
{
    static int done;
    const char *e = getenv("RESOT_PRINCE_DUMP");
    uint32_t vars, o, w;
    if (done || !e || s_cheats_frames < (unsigned)strtoul(e, NULL, 10) || !(vars = resot_prince_vars()))
        return;
    done = 1;
    for (o = 0; o < 0x1400; o += 4)
        if (resot_cheats_word(vars + o, &w))
            fprintf(stderr, "[PDUMP] +%04X %08X\n", o, w);
}

/* RESOT_PRINCE_WATCH=<off>[,<off>...]: log those Prince variables when
 * they change (diagnostic). */
static void resot_prince_watch(void)
{
    static uint32_t prev[16], have;
    const char *e = getenv("RESOT_PRINCE_WATCH");
    uint32_t vars, i = 0, w;
    if (!e || !*e || !(vars = resot_prince_vars()))
        return;
    while (*e && i < 16) {
        char *next;
        uint32_t off = (uint32_t)strtoul(e, &next, 16);
        if (next == e) break;
        if (resot_cheats_word(vars + off, &w) && (!(have >> i & 1) || w != prev[i])) {
            fprintf(stderr, "[PRINCE] poll %u vars=%08X +%03X = %08X\n", s_cheats_frames, vars, off, w);
            prev[i] = w;
            have |= 1u << i;
        }
        e = next;
        while (*e == ',') e++;
        i++;
    }
}

/* "<Cheats>: <On|Off>" from the title's own strings when it has them. */
static void resot_cheats_label(const char *name, const char *on, const char *off,
                               char *out, unsigned size)
{
    int now = resot_cheats_value();
    if (now < 0)
        now = s_cheats_want > 0;
    snprintf(out, size, "%s: %s", name && *name ? name : "Cheats",
             now ? (on && *on ? on : "On") : (off && *off ? off : "Off"));
}
#endif
