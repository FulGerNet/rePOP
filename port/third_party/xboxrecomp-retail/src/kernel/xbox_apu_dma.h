/* RE-SoT: host DMA tokens for retail DirectSound buffers in extended guest VA.
 * This is an address translation namespace, not physical console RAM. It does
 * not change allocation/accounting. The 28-bit gap below the existing heap
 * alias is disjoint from 64 MB console RAM and XBOX_APU_HEAP_ALIAS (0xB000000).
 * Callers serialize table access; each token remains stable until unmap. */
#ifndef RE_SOT_XBOX_APU_DMA_H
#define RE_SOT_XBOX_APU_DMA_H
#include <stdint.h>
#include <string.h>
#define XBOX_APU_DMA_BASE 0x04000000u
#define XBOX_APU_DMA_END  0x0B000000u
#define XBOX_APU_DMA_PAGES ((XBOX_APU_DMA_END - XBOX_APU_DMA_BASE) >> 12)
typedef struct xbox_apu_dma_table {
    uint16_t forward[1u << 20]; /* guest VA page -> slot + 1, zero = absent */
    uint32_t reverse[XBOX_APU_DMA_PAGES];
    uint16_t free_slots[XBOX_APU_DMA_PAGES];
    uint32_t used, free_count;
} xbox_apu_dma_table;

static inline uint32_t xbox_apu_dma_map(xbox_apu_dma_table *t, uint32_t va)
{
    uint32_t page = va >> 12, slot;
    if (!page) return 0;
    if (t->forward[page]) slot = t->forward[page] - 1;
    else {
        if (t->free_count) slot = t->free_slots[--t->free_count];
        else if (t->used < XBOX_APU_DMA_PAGES) slot = t->used++;
        else return 0; /* fail explicitly, never truncate to unrelated RAM */
        t->reverse[slot] = va & ~4095u;
        t->forward[page] = (uint16_t)(slot + 1);
    }
    return XBOX_APU_DMA_BASE + (slot << 12) + (va & 4095u);
}

static inline uint32_t xbox_apu_dma_resolve(const xbox_apu_dma_table *t, uint32_t token)
{
    uint32_t page;
    if (token < XBOX_APU_DMA_BASE || token >= XBOX_APU_DMA_END) return 0;
    page = t->reverse[(token - XBOX_APU_DMA_BASE) >> 12];
    return page ? page + (token & 4095u) : 0;
}

static inline void xbox_apu_dma_unmap(xbox_apu_dma_table *t, uint32_t va, uint32_t bytes)
{
    uint64_t page = (uint64_t)(va & ~4095u), end = (uint64_t)va + bytes;
    if (!bytes) return;
    for (; page < end && page < 0x100000000ull; page += 4096) {
        uint32_t index = (uint32_t)(page >> 12), entry = t->forward[index];
        if (entry) {
            uint32_t slot = entry - 1;
            t->forward[index] = 0;
            t->reverse[slot] = 0;
            t->free_slots[t->free_count++] = (uint16_t)slot;
        }
    }
}

uint32_t xbox_ApuDmaMap(uint32_t guest_va);
uint32_t xbox_ApuDmaResolve(uint32_t token);
void xbox_ApuDmaUnmap(uint32_t guest_va, uint32_t bytes);
#endif
