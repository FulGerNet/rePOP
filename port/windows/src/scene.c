/* Show the name loaded from the user's BF, including WOWs whose source
 * structure is released after being merged into a synthetic SuperWorld. */
#include <windows.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "target.h"

#if !defined(_MSC_VER)
/* Android (port/android) builds this file too, with no structured exception
 * handling: every read below is range-checked first (scene_range), which is
 * the protection there. */
#define __try if (1)
#define __except(filter) else
#endif

extern ptrdiff_t g_xbox_mem_offset;
extern void *xbox_GetMemoryBase(void);
extern int guest_vmem_accessible(uint32_t address, uint32_t bytes);

/* CRT-backed worlds and lookup arrays can live in committed virtual heaps.
 * Keep the same bounds for ordinary RAM and reject uncommitted reservations. */
static int scene_range(uint32_t address, uint32_t bytes)
{
    uint64_t end = (uint64_t)address + bytes;
    if (address < 0x10000u || !bytes || end > UINT32_MAX) return 0;
    return end <= 0x04000000u || guest_vmem_accessible(address, bytes);
}

static SRWLOCK s_scene_lock = SRWLOCK_INIT;
static uint32_t s_scene_world, s_scene_key;
static char s_scene_name[RESOT_JADE_WORLD_NAME_SIZE];

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

static uint32_t resolve_world(uintptr_t base, uint32_t key)
{
    uint32_t index = lookup(base, RESOT_JADE_KEY_INDEX_TABLE, key);
    if (index == UINT32_MAX &&
        ((*(const volatile uint32_t *)(base + RESOT_JADE_DYNAMIC_LOAD) &&
          *(const volatile uint32_t *)(base + RESOT_JADE_LOAD_MODE) == 2) ||
         *(const volatile uint32_t *)(base + RESOT_JADE_COMPILED_BF)))
        index = key;
    return index == UINT32_MAX ? UINT32_MAX :
        lookup(base, RESOT_JADE_LOADED_TABLES +
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
    if (!strncmp(name, "SuperWorld ", 11)) name[0] = '\0';
    return name[0] != '\0';
}

/* Costumes merged with the current primary world: bit n for
 * PrinceCostume(n+1). Guest thread only. */
static unsigned s_scene_costumes;
unsigned resot_scene_costumes(void) { return s_scene_costumes; }
/* A map loaded into the same aggregate (no primary merge): the retail
 * Special Load Map from the menu kept MenuBoot's 01 and 04 beside the
 * level's 02. Its caller forgets them when the map's load is requested. */
void resot_scene_costumes_reset(void) { s_scene_costumes = 0; }

/* Called on the guest thread before a world merge, while the source still
 * owns its BF name. Cache identity includes the aggregate and primary key. */
void resot_scene_loaded(uint32_t destination, uint32_t source, int primary, uint32_t caller)
{
    char name[RESOT_JADE_WORLD_NAME_SIZE] = {0};
    uintptr_t base = (uintptr_t)g_xbox_mem_offset;
    uint32_t key = *(const volatile uint32_t *)(base + RESOT_JADE_PRIMARY_WOW_KEY);
    if (!read_name(base, source, name)) return;
    fprintf(stderr, "[WOW] merge name=%s source=%08X destination=%08X key=%08X primary=%d caller=%08X\n",
            name, source, destination, key, primary, caller);
    /* The primary world merges before its dependencies, PrinceCostume0N
     * among them (MenuBoot: 01 and 04). */
    if (primary)
        s_scene_costumes = 0;
    else if (!strncmp(name, "PrinceCostume", 13) && name[13] >= '0' && name[13] <= '9' &&
             name[14] >= '1' && name[14] <= '9')
        s_scene_costumes |= 1u << ((name[13] - '0') * 10 + name[14] - '0' - 1);
    if (!primary) return;
    AcquireSRWLockExclusive(&s_scene_lock);
    s_scene_world = destination;
    s_scene_key = key;
    memcpy(s_scene_name, name, sizeof(s_scene_name));
    ReleaseSRWLockExclusive(&s_scene_lock);
}

void resot_current_wow(char *out, size_t size)
{
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
            uint32_t key = *(const volatile uint32_t *)(base + RESOT_JADE_PRIMARY_WOW_KEY);
            uint32_t worker = *(const volatile uint32_t *)(base + RESOT_JADE_STREAM_WORKER);
            uint32_t stream_key = UINT32_MAX;
            if (world && !(worker & 3u) &&
                scene_range(worker, RESOT_JADE_STREAM_WOW_KEY + 4u)) {
                /* Streaming keeps the root WOW separately from the initial
                 * _Start_Demo/menu aggregate and its helper dependencies. */
                stream_key = *(const volatile uint32_t *)(base + worker + RESOT_JADE_STREAM_WOW_KEY);
                if (stream_key && stream_key != UINT32_MAX)
                    read_name(base, resolve_world(base, stream_key), name);
            }
            if (!name[0] && !read_name(base, world, name)) {
                name[0] = '\0';
                AcquireSRWLockShared(&s_scene_lock);
                if (world && world == s_scene_world && key == s_scene_key)
                    memcpy(name, s_scene_name, sizeof(name));
                ReleaseSRWLockShared(&s_scene_lock);
            }
            if (*loaded != world ||
                *(const volatile uint32_t *)(base + RESOT_JADE_PRIMARY_WOW_KEY) != key ||
                *(const volatile uint32_t *)(base + RESOT_JADE_STREAM_WORKER) != worker ||
                (stream_key != UINT32_MAX &&
                 *(const volatile uint32_t *)(base + worker + RESOT_JADE_STREAM_WOW_KEY) != stream_key))
                name[0] = '\0';
        }
        __except (EXCEPTION_EXECUTE_HANDLER) {
            name[0] = '\0';
        }
    }
    if (name[0]) result = name;
    length = strlen(result);
    if (length >= size) length = size - 1;
    memcpy(out, result, length);
    out[length] = '\0';
}
