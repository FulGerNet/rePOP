/* Synthetic addresses only; no guest executable or physical backing is needed. */
#include "kernel.h"
#include "xbox_memory_layout.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
typedef void (*guest_fn)(void);
extern guest_fn recomp_lookup_kernel(uint32_t);
extern RECOMP_TLS uint32_t g_eax, g_esp;
extern ptrdiff_t g_xbox_mem_offset;
void *recomp_lookup(ULONG address) { (void)address; abort(); }
void *recomp_lookup_manual(ULONG address) { (void)address; abort(); }
int main(void) {
    const uint32_t cases[][2]={
        {0,0},{0x1000,0x1000},{0x03ffffff,0x03ffffff},
        {0x7fffffff,0x7fffffff},{0x80000000,0},
        {0x80001000,0x1000},{0x83ffffff,0x03ffffff},
        {0x84000000,0x84000000},{0xffffffff,0xffffffff}
    };
    uint8_t *memory=VirtualAlloc(NULL,16*1024*1024,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
    if(!memory) return 10;
    g_xbox_mem_offset=(ptrdiff_t)memory;
    *(uint32_t *)(memory+0x10000)=0x800000AD;
    xbox_kernel_set_thunk_address(0x10000,1); xbox_kernel_bridge_init();
    int failed=0;
    for(unsigned i=0;i<sizeof(cases)/sizeof(cases[0]);++i) {
        uint32_t *stack=(uint32_t *)(memory+0x20000);
        stack[0]=0x12345678; stack[1]=cases[i][0]; stack[2]=0xABCDEF01;
        g_esp=0x20000;
        guest_fn fn=recomp_lookup_kernel(*(uint32_t *)(memory+0x10000));
        if(!fn) return 11;
        fn();
        if(g_eax!=cases[i][1] || g_esp!=0x20008 || stack[2]!=0xABCDEF01) {
            fprintf(stderr,"FAIL input=%08X expected=%08X actual=%08X ESP=%08X\n",
                    cases[i][0],cases[i][1],g_eax,g_esp); failed=1;
        }
    }
    VirtualFree(memory,0,MEM_RELEASE);
    if(!failed) puts("PASS nine physical-address cases and stdcall stack cleanup");
    return failed;
}
