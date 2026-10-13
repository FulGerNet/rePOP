#include "kernel.h"
#include "xbox_memory_layout.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
typedef void (*guest_fn)(void);
extern guest_fn recomp_lookup_kernel(uint32_t);
extern RECOMP_TLS uint32_t g_eax, g_ecx, g_esp;
extern ptrdiff_t g_xbox_mem_offset;
void *recomp_lookup(ULONG address) { (void)address; abort(); }
void *recomp_lookup_manual(ULONG address) { (void)address; abort(); }
static uint8_t *memory;
static int call_irql(unsigned ordinal, uint32_t ecx, unsigned expected_old, unsigned expected_level) {
    uint32_t *stack=(uint32_t *)(memory+0x20000);
    stack[0]=0x12345678; stack[1]=0xA5A5A507;
    g_ecx=ecx; g_esp=0x20000;
    uint32_t token=*(uint32_t *)(memory+0x10000+(ordinal==160?0:4));
    guest_fn fn=recomp_lookup_kernel(token);
    if(!fn) return 1;
    fn();
    /* The host raise returns the prior level; raising to the expected level is a no-op after a correct bridge call. */
    unsigned level=xbox_KfRaiseIrql((KIRQL)expected_level);
    if(g_esp!=0x20004 || stack[1]!=0xA5A5A507 || level!=expected_level ||
       (ordinal==160 && g_eax!=expected_old)) {
        fprintf(stderr,"FAIL ordinal=%u ECX=%08X IRQL=%u expected=%u old=%u expected_old=%u ESP=%08X\n",
                ordinal,ecx,level,expected_level,g_eax,expected_old,g_esp);
        return 1;
    }
    return 0;
}
int main(void) {
    memory=VirtualAlloc(NULL,16*1024*1024,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
    if(!memory) return 10;
    g_xbox_mem_offset=(ptrdiff_t)memory;
    uint32_t *imports=(uint32_t *)(memory+0x10000);
    imports[0]=0x800000A0; imports[1]=0x800000A1;
    xbox_kernel_set_thunk_address(0x10000,2); xbox_kernel_bridge_init();
    int failed=0;
    failed|=call_irql(160,0xBEEF0002,0,2);
    failed|=call_irql(160,0x12340003,2,3);
    failed|=call_irql(161,0xFACE0002,0,2);
    failed|=call_irql(161,0xABCD0000,0,0);
    VirtualFree(memory,0,MEM_RELEASE);
    if(!failed) puts("PASS fastcall IRQL: CL arguments, old levels, nesting and stack canary");
    return failed;
}
