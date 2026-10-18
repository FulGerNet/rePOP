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
#endif
static int resot_guest_read_word(ptrdiff_t offset, uint64_t va, uint32_t *value)
{
    if (!value || !va || va > UINT32_MAX-3u) return 0;
#if defined(_WIN32)
    {
        MEMORY_BASIC_INFORMATION info;
        uintptr_t address = (uintptr_t)offset+(uint32_t)va;
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
#else
    (void)offset;
    return 0;
#endif
}
#endif
