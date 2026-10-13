/* Synthetic imports exercise the guest-visible IDE queue without game assets. */
#include "kernel.h"
#include "xbox_memory_layout.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
extern ptrdiff_t g_xbox_mem_offset;
void *recomp_lookup(ULONG address) { (void)address; abort(); }
void *recomp_lookup_manual(ULONG address) { (void)address; abort(); }
int main(void) {
    uint8_t *memory=VirtualAlloc(NULL,16*1024*1024,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
    if(!memory) return 10;
    g_xbox_mem_offset=(ptrdiff_t)memory;
    uint32_t *imports=(uint32_t *)(memory+0x10000);
    imports[0]=0x80000000u|357;
    imports[1]=0x80000000u|325;
    xbox_kernel_set_thunk_address(0x10000,2);
    xbox_kernel_bridge_init();
    uint32_t channel=imports[0],head=channel+0x28;
    uint32_t forward=*(uint32_t *)(memory+head),back=*(uint32_t *)(memory+head+4);
    if(forward!=head || back!=head) {
        fprintf(stderr,"FAIL: IDE queue head=%08X links=%08X/%08X\n",head,forward,back); return 1;
    }
    if(channel<imports[1]+16 && channel+0x200>imports[1]) {
        puts("FAIL: IDE storage overlaps signature key"); return 2;
    }
    VirtualFree(memory,0,MEM_RELEASE);
    puts("PASS: exported IDE channel has an empty circular queue in independent storage");
    return 0;
}
