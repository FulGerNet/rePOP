/* reSOT: bounded reads of optional guest metadata owned by the title thread.
 * This probe rejects unmapped/guarded ranges before a read, so an obsolete
 * host UI handle cannot raise a guest crash diagnostic. It does not replace
 * the synchronization required by concurrent guest allocation/free. */
#ifndef RESOT_GUEST_PROBE_H
#define RESOT_GUEST_PROBE_H
#include <stddef.h>
#include <stdint.h>
#include <string.h>
#if defined(_WIN32)
#include <windows.h>
#elif defined(__ANDROID__)
#include "kernel.h"
#include "xbox_memory_layout.h"
#include "guest_vmem.h"
#endif
static int resot_guest_read_word(ptrdiff_t offset, uint64_t va, uint32_t *value)
{
    if (!value || !va || va > UINT32_MAX-3u) return 0;
#if defined(_WIN32)
    {
        /* reSOT: guest RAM from 0x10000 and the contiguous window are views
         * mapped once for the process lifetime (xbox_MemoryLayoutInit), as on
         * Android below: no system call for them. Asking VirtualQuery for every
         * word of the per-frame menu and cheat checks was 17% of the title
         * thread's samples in a heavy retail scene (RESOT_PROFILE_MS, 2026-11-02). */
        extern size_t g_xbox_total_ram, g_xbox_map_size;
        MEMORY_BASIC_INFORMATION info;
        uintptr_t address = (uintptr_t)offset+(uint32_t)va;
        uint32_t a = (uint32_t)va;
        size_t ram = g_xbox_map_size ? g_xbox_map_size : g_xbox_total_ram;
        if ((a >= 0x10000u && a < ram && 4 <= ram-a) ||
            (a >= 0x80000000u && a-0x80000000u < (64u << 20) && 4 <= (64u << 20)-(a-0x80000000u))) {
            memcpy(value,(const void *)address,sizeof *value);
            return 1;
        }
        /* reSOT: the extended heap (RECOMP_EXT_VMA) has its own page table; its
         * committed pages are host memory committed read-write and never
         * reprotected or released while the process lives (guest_vmem.c).
         * Objects there sent every menu-pointer and label read to VirtualQuery:
         * 28% of the title thread's samples in the retail menu, 9% in a heavy
         * scene (RESOT_PROFILE_MS, Vulkan and D3D12, 2026-11-02). */
        {
            extern int guest_vmem_accessible(uint32_t address, uint32_t bytes);
            if (guest_vmem_accessible(a,4)) {
                memcpy(value,(const void *)address,sizeof *value);
                return 1;
            }
        }
        const DWORD readable = PAGE_READONLY | PAGE_READWRITE | PAGE_WRITECOPY |
                               PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY;
        if (address > UINTPTR_MAX-4 ||
            VirtualQuery((const void *)address,&info,sizeof info) != sizeof info ||
            info.State != MEM_COMMIT || (info.Protect & (PAGE_GUARD | PAGE_NOACCESS)) ||
            !(info.Protect & readable) ||
            address+4 > (uintptr_t)info.BaseAddress+info.RegionSize) return 0;
        memcpy(value,(const void *)address,sizeof *value);
        return 1;
    }
#elif defined(__ANDROID__)
    {
        /* Android owns these RAM mappings for the process lifetime. Extended
         * heap pages require the guest page table: the host reserves 4 GB,
         * so VirtualQuery's mapping registry cannot prove readability. */
        uint32_t info[7], a = (uint32_t)va;
        size_t ram = g_xbox_map_size ? g_xbox_map_size : g_xbox_total_ram;
        int readable = (a >= 0x10000u && a < ram && 4 <= ram-a) ||
            (a >= XBOX_CONTIG_BASE && a-XBOX_CONTIG_BASE < XBOX_CONTIG_SIZE &&
             4 <= XBOX_CONTIG_SIZE-(a-XBOX_CONTIG_BASE));
        if (!readable && guest_vmem_query(a,info))
            readable = info[4] == 0x1000u && (info[5] & (0x02u|0x04u|0x08u|0x20u|0x40u|0x80u)) &&
                !(info[5] & 0x101u) && (uint64_t)a+4 <= (uint64_t)info[0]+info[3];
        if (!readable) return 0;
        memcpy(value,(const void *)((uintptr_t)offset+a),sizeof *value);
        return 1;
    }
#else
    (void)offset;
    return 0;
#endif
}
#endif
