/* RE-SoT: regression for stale retail menu labels discovered on D3D12.
 * Synthetic memory only; rejected reads must not fault or consume a guard. */
#include "../../../../game/guest_probe.h"
#include <stdio.h>
#define CHECK(x) do { if (!(x)) { fprintf(stderr,"probe check failed at %d: %s\n",__LINE__,#x); return 1; } } while (0)
int main(void)
{
    SYSTEM_INFO system;
    MEMORY_BASIC_INFORMATION info;
    unsigned char *base;
    DWORD old;
    uint32_t value = 0, pattern = 0x12345678u;
    ptrdiff_t offset;
    size_t page;
    GetSystemInfo(&system); page = system.dwPageSize;
    base = VirtualAlloc(NULL,page*4,MEM_RESERVE,PAGE_NOACCESS); CHECK(base);
    CHECK(VirtualAlloc(base,page*3,MEM_COMMIT,PAGE_READWRITE));
    offset = (ptrdiff_t)(uintptr_t)base-0x1000;
    memcpy(base,&pattern,4); memcpy(base+page,&pattern,4);
    CHECK(VirtualProtect(base+page,page,PAGE_READONLY,&old));
    CHECK(VirtualProtect(base+2*page,page,PAGE_READWRITE | PAGE_GUARD,&old));
    CHECK(resot_guest_read_word(offset,0x1000,&value) && value == pattern);
    CHECK(resot_guest_read_word(offset,0x1000+page,&value) && value == pattern);
    CHECK(!resot_guest_read_word(offset,0x1000+2*page,&value));
    CHECK(VirtualQuery(base+2*page,&info,sizeof info) == sizeof info && (info.Protect & PAGE_GUARD));
    CHECK(!resot_guest_read_word(offset,0x1000+3*page,&value));
    CHECK(!resot_guest_read_word(offset,0x1000+page-2,&value));
    CHECK(!resot_guest_read_word(offset,0xFFFFFFFFull,&value));
    CHECK(!resot_guest_read_word(offset,0x100000000ull,&value));
    CHECK(!resot_guest_read_word(offset,0,&value));
    CHECK(!resot_guest_read_word(offset,0x1000,NULL));
    CHECK(value == pattern);
    CHECK(VirtualFree(base,0,MEM_RELEASE));
    puts("guest metadata probe: readable, read-only, guard, unmapped, crossing and overflow cases passed");
    return 0;
}
