/* RE-WW: show the BF name of WW's main loaded world (F5 / F6). Adapted from
 * reSOT's scene.c; only the world global and name offset established in the
 * WW XBE are used (target.h). SoT's streaming registry is not ported. */
#include <windows.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "target.h"

extern ptrdiff_t g_xbox_mem_offset;
extern void *xbox_GetMemoryBase(void);
extern int guest_vmem_accessible(uint32_t address, uint32_t bytes);

static int scene_range(uint32_t address, uint32_t bytes)
{
    uint64_t end = (uint64_t)address + bytes;
    if (address < 0x10000u || !bytes || end > UINT32_MAX) return 0;
    return end <= 0x04000000u || guest_vmem_accessible(address, bytes);
}

/* The game's accessor searches sorted 8-byte key/value pairs. Keep this
 * read-only: the guest helper also writes its last-search global. */
static uint32_t lookup(uintptr_t base, uint32_t table, uint32_t key)
{
    if (!scene_range(table, 8)) return UINT32_MAX;
    const volatile uint32_t *header = (const volatile uint32_t *)(base + table);
    uint32_t pairs = header[0], count = header[1], low = 0, high = count;
    if ((pairs & 3u) || count > UINT32_MAX / 8u ||
        !scene_range(pairs, count * 8u)) return UINT32_MAX;
    while (low < high) {
        uint32_t mid = low + (high - low) / 2;
        const volatile uint32_t *entry =
            (const volatile uint32_t *)(base + pairs + mid * 8u);
        uint32_t candidate = entry[0];
        if (candidate < key) low = mid + 1;
        else if (candidate > key) high = mid;
        else {
            uint32_t value = entry[1];
            return header[0] == pairs && header[1] == count ? value : UINT32_MAX;
        }
    }
    return UINT32_MAX;
}

/* WW drops SoT's dynamic-load/compiled-BF conditions: the key itself is the
 * fallback index unconditionally (cmovne at 0x00039C2D). */
static uint32_t resolve_world(uintptr_t base, uint32_t key)
{
    uint32_t index;
    if (!key || key == UINT32_MAX) return UINT32_MAX;
    index = lookup(base, RESOT_JADE_KEY_INDEX_TABLE, key);
    if (index == UINT32_MAX) index = key;
    return lookup(base, RESOT_JADE_LOADED_TABLES +
                  (((index >> 8) + index) & 255u) * 16u, index);
}

static int read_name(uintptr_t base, uint32_t world, char *name)
{
    size_t i;
    name[0] = '\0';
    if ((world & 3u) ||
        !scene_range(world, RESOT_JADE_WORLD_NAME + RESOT_JADE_WORLD_NAME_SIZE))
        return 0;
    __try {
        const volatile unsigned char *source =
            (const volatile unsigned char *)(base + world + RESOT_JADE_WORLD_NAME);
        for (i = 0; i < RESOT_JADE_WORLD_NAME_SIZE - 1; ++i) {
            unsigned char c = source[i];
            name[i] = (char)c;
            if (!c) break;
            if (c < 32 || c == 127) {
                name[0] = '\0';
                return 0;
            }
        }
        name[RESOT_JADE_WORLD_NAME_SIZE - 1] = '\0';
    }
    __except (EXCEPTION_EXECUTE_HANDLER) {
        name[0] = '\0';
    }
    /* The aggregate container, not a level: keep looking. */
    if (!strncmp(name, "SuperWorld", 10)) name[0] = '\0';
    return name[0] != '\0';
}

void resot_current_wow(char *out, size_t size)
{
    static char last[RESOT_JADE_WORLD_NAME_SIZE];
    char name[RESOT_JADE_WORLD_NAME_SIZE] = {0};
    const char *result = "None";
    uintptr_t base = (uintptr_t)g_xbox_mem_offset;
    size_t length;
    if (!out || !size) return;
    if (xbox_GetMemoryBase()) {
        __try {
            const volatile uint32_t *loaded =
                (const volatile uint32_t *)(base + RESOT_JADE_WORLD_LOADED);
            uint32_t world = *loaded;
            uint32_t worker = *(const volatile uint32_t *)(base + RESOT_JADE_STREAM_WORKER);
            uint32_t key = *(const volatile uint32_t *)(base + RESOT_JADE_PRIMARY_WOW_KEY);
            /* Streaming root WOW first, then the primary key, then the
             * loaded world itself (often only "SuperWorld"). */
            if (worker && !(worker & 3u) &&
                scene_range(worker, RESOT_JADE_STREAM_WOW_KEY + 4u))
                read_name(base, resolve_world(base,
                    *(const volatile uint32_t *)(base + worker + RESOT_JADE_STREAM_WOW_KEY)), name);
            if (!name[0] && world)
                read_name(base, resolve_world(base, key), name);
            if (!name[0] && world)
                read_name(base, world, name);
            if (*loaded != world)
                name[0] = '\0';
        }
        __except (EXCEPTION_EXECUTE_HANDLER) {
            name[0] = '\0';
        }
    }
    if (name[0]) {
        result = name;
        if (strcmp(last, name)) {
            memcpy(last, name, sizeof last);
            fprintf(stderr, "[WOW] loaded world %s\n", name);
        }
    }
    length = strlen(result);
    if (length >= size) length = size - 1;
    memcpy(out, result, length);
    out[length] = '\0';
}
