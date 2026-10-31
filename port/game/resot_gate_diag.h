/* reSOT: read-only evidence for the missing retail Farah Room main door.
 * Content keys below are from the user's retail BF, not XBE addresses.
 * Kept separate from renderer policy: no visibility flag is forced. */
#ifndef RESOT_GATE_DIAG_H
#define RESOT_GATE_DIAG_H

extern void nv2a_gate_probe_range(uint32_t index, uint32_t data, uint32_t stride);
extern void nv2a_gate_probe_report(void);

static uint32_t resot_gate_word(uint32_t address, uint32_t offset)
{
    uint32_t word = 0;
    if (address)
        resot_guest_read_word(g_xbox_mem_offset, (uint64_t)address + offset, &word);
    return word;
}

static void resot_gate_words(const char *label, uint32_t address, unsigned count)
{
    fprintf(stderr, "[GATE-DATA] %s %08X", label, address);
    for (unsigned i = 0; i < count && i < 16; i++) {
        uint32_t word;
        if (!address || !resot_guest_read_word(g_xbox_mem_offset,
                (uint64_t)address + i*4u, &word)) {
            fprintf(stderr, " unreadable+%02X", i*4u);
            break;
        }
        fprintf(stderr, " %08X", word);
    }
    fprintf(stderr, "\n");
}

/* The first manual runs proved that both door clones exist in the actual
 * world with flag +4=00040000, at the BF's correct translations. Their
 * render->visual differs from the LOA prototype: log both chains before
 * attributing the loss to a visibility flag or a renderer policy. */
static void resot_gate_leaf_data(uint32_t object)
{
    uint32_t matrix = resot_gate_word(object, 0x0C);
    uint32_t render = resot_gate_word(object, 0x14), visual = resot_gate_word(render, 0);
    union { uint32_t u; float f; } m[16];
    for (unsigned i = 0; i < 16; i++) m[i].u = resot_gate_word(matrix, i*4u);
    double det = (double)m[0].f*(m[5].f*m[10].f-m[6].f*m[9].f)
               -(double)m[1].f*(m[4].f*m[10].f-m[6].f*m[8].f)
               +(double)m[2].f*(m[4].f*m[9].f-m[5].f*m[8].f);
    fprintf(stderr, "[GATE-MATRIX] gao=%08X world=%08X basis="
                    "%.6g,%.6g,%.6g;%.6g,%.6g,%.6g;%.6g,%.6g,%.6g"
                    " w=%.6g,%.6g,%.6g,%.6g det=%.9g\n", object, matrix,
            m[0].f,m[1].f,m[2].f,m[4].f,m[5].f,m[6].f,m[8].f,m[9].f,m[10].f,
            m[3].f,m[7].f,m[11].f,m[15].f,det);
    resot_gate_words("leaf-gao", object, 16);
    resot_gate_words("leaf-render", render, 16);
    resot_gate_words("leaf-visual", visual, 16);
    /* Raw child words are deliberately untyped until the title's mesh
     * layout establishes their meaning. The probe rejects scalar/type IDs. */
    for (unsigned i = 0; i < 4; i++) {
        uint32_t child = resot_gate_word(visual, i*4u);
        if (child >= 0x10000u && !(child & 3)) {
            char label[24];
            snprintf(label, sizeof label, "visual-child+%02X", i*4u);
            resot_gate_words(label, child, 16);
        }
    }
}

static void resot_gate_object(const char *kind, uint32_t key, uint32_t object)
{
    uint32_t matrix = resot_gate_word(object, 0x0C), render = resot_gate_word(object, 0x14);
    uint32_t ai = resot_gate_word(object, 0x18), instance = resot_gate_word(ai, 4);
    union { uint32_t u; float f; } xyz[3];
    for (unsigned i = 0; i < 3; i++) xyz[i].u = resot_gate_word(matrix, 0x30 + i*4);
    fprintf(stderr, "[GATE] %s key=%08X gao=%08X flags=%08X/%08X/%08X"
                    " matrix=%08X xyz=%.5f,%.5f,%.5f owner=%08X render=%08X"
                    " visual=%08X/%08X/%08X/%08X ai=%08X vars=%08X\n",
            kind, key, object, resot_gate_word(object, 0), resot_gate_word(object, 4),
            resot_gate_word(object, 0x1C), matrix, xyz[0].f, xyz[1].f, xyz[2].f,
            resot_gate_word(object, 0x24), render, resot_gate_word(render, 0),
            resot_gate_word(render, 4), resot_gate_word(render, 8), resot_gate_word(render, 12),
            instance, resot_gate_word(instance, 0x44));
}

/* 0x00030FB0 merges a source world's GAOs from eight-byte entries at +0x20,
 * with counts +0x18/+0x1C (0x00030FF1..0x00031012); its destination scan
 * uses +0x20 as begin and +0x14 as end (0x00030FB6..0x00030FC7).
 * Scan actual aggregate entries too: the LOA names can be inactive action-kit
 * prototypes while their visible clones have no original BF key.
 * Position window comes from the BF's two collision leaves and kit placement
 * (x658.66/661.35, y208.50, z0.073), with room for the animated door bounds. */
static void resot_gate_watch(void)
{
    static const uint32_t keys[] = {
        0x6600D769u, 0x6600D76Au, /* room collision leaves (no visual in BF) */
        0x3F001EB8u,             /* set_ini_pos_GP91-020_Door */
        0x3F001EF0u, 0x3F001EF1u, 0x3F001EF2u, /* kit master and visual leaves */
        0x66015891u              /* DoorsBroken */
    };
    static unsigned started, phase, last_state;
    static uint32_t leaves[2];
    uint32_t va = resot_cheats_address(), vars, world, begin, end, object, current;
    unsigned candidates = 0, i;
    if (!va) return;
    vars = va - RESOT_CHEATS_VAR_OFFSET;
    current = resot_gate_word(vars, RESOT_UNIV_CURRENT_WORLD);
    if (current != 0x2B0066FBu) { started = phase = 0; leaves[0] = leaves[1] = 0; return; }
    if (resot_gate_word(vars, RESOT_UNIV_CHANGE_MAP)) return;
    if (!started) started = s_cheats_frames ? s_cheats_frames : 1;
    /* After the snapshots: is the door still drawn, and is it still flagged
     * the same, while the user walks up to it? Every 300 polls, bounded lines. */
    if (phase >= 3) {
        if (s_cheats_frames - last_state < 300u) return;
        last_state = s_cheats_frames;
        nv2a_gate_probe_report();
        for (i = 0; i < 2; i++)
            if (leaves[i]) resot_gate_object("state", i, leaves[i]);
        return;
    }
    if (s_cheats_frames - started < (phase == 0 ? 0u : phase == 1 ? 120u : 600u)) return;
    world = resot_gate_word(RESOT_JADE_WORLD_LOADED, 0);
    begin = resot_gate_word(world, 0x20); end = resot_gate_word(world, 0x14);
    fprintf(stderr, "[GATE] Farah Room phase=%u poll=%u world=%08X entries=%08X..%08X"
                    " mesh-left=%08X mesh-right=%08X material=%08X\n", phase++, s_cheats_frames,
            world, begin, end, resot_loa_find(0x3F001EC3u), resot_loa_find(0x3F001EC4u),
            resot_loa_find(0x3F001EE9u));
    /* Retail 0x00310325 passes GEO+0x4C to 0x000D5BF0 as its vertex
     * resource. 0x000D5C10 uses resource+0x0C as stride; XDK 0x003751FB
     * reads resource+4 for NV097 vertex-array offset (header 0x41720).
     * Register the current resources, never fixed allocation addresses. */
    for (i = 0; i < 4; i++) {
        /* Door leaf meshes, then the curtain quads' meshes 6600D738/39 (BF). */
        static const uint32_t meshes[4] = {0x3F001EC3u,0x3F001EC4u,0x6600D738u,0x6600D739u};
        uint32_t mesh = resot_loa_find(meshes[i]);
        uint32_t resource = resot_gate_word(mesh, 0x4C);
        nv2a_gate_probe_range(i, resot_gate_word(resource, 4), resot_gate_word(resource, 0x0C));
    }
    nv2a_gate_probe_report();
    for (i = 0; i < sizeof(keys)/sizeof(keys[0]); i++)
        resot_gate_object("LOA", keys[i], resot_loa_find(keys[i]));
    resot_gate_leaf_data(resot_loa_find(0x3F001EF1u));
    resot_gate_leaf_data(resot_loa_find(0x3F001EF2u));
    resot_gate_words("mesh-left", resot_loa_find(0x3F001EC3u), 16);
    resot_gate_words("mesh-right", resot_loa_find(0x3F001EC4u), 16);
    resot_gate_words("door-material", resot_loa_find(0x3F001EE9u), 16);
    if (!begin || (begin & 3) || end < begin || (end - begin) % 8 ||
            end - begin > 16384u*8u) return;
    for (uint32_t entry = begin; entry < end; entry += 8) {
        uint32_t matrix;
        union { uint32_t u; float f; } xyz[3];
        object = resot_gate_word(entry, 0);
        if (!object || (object & 3)) continue;
        matrix = resot_gate_word(object, 0x0C);
        for (i = 0; i < 3; i++) xyz[i].u = resot_gate_word(matrix, 0x30 + i*4);
        if (!(xyz[0].f >= 654 && xyz[0].f <= 666 && xyz[1].f >= 204 &&
                xyz[1].f <= 214 && xyz[2].f >= -3 && xyz[2].f <= 7)) continue;
        /* BF/runtime identified front leaves only, excluding the 80-plus
         * broken-door parts and side decoration in the same neighborhood. */
        if ((resot_gate_word(object, 0) & 0xFFFFu) == 0x5001u &&
                fabsf(xyz[1].f - 208.50081f) < 0.002f &&
                fabsf(xyz[2].f - 0.072885f) < 0.002f &&
                (fabsf(xyz[0].f - 658.66376f) < 0.002f ||
                 fabsf(xyz[0].f - 661.34753f) < 0.002f)) {
            leaves[xyz[0].f > 660.0f] = object;
            resot_gate_leaf_data(object);
        }
        if (candidates++ < 48) resot_gate_object("world", entry, object);
    }
    fprintf(stderr, "[GATE] world objects near main door=%u (logged at most 48)\n", candidates);
}
#endif
