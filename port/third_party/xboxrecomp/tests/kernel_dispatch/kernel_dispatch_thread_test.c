/* Synthetic imports: no game executable or assets are required. */
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
static uint32_t other_service;
static DWORD WINAPI lookup_other(LPVOID unused) {
    (void)unused;
    return recomp_lookup_kernel(other_service)?0:1;
}
int main(void) {
    uint8_t *memory=VirtualAlloc(NULL,16*1024*1024,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
    if (!memory) return 10;
    g_xbox_mem_offset=(ptrdiff_t)memory;
    uint32_t *imports=(uint32_t *)(memory+0x10000);
    imports[0]=0x80000000u|103; /* KeGetCurrentIrql: no stack argument. */
    imports[1]=0x80000000u|151; /* KeStallExecutionProcessor: one argument. */
    xbox_kernel_set_thunk_address(0x10000,2);
    xbox_kernel_bridge_init();
    guest_fn selected=recomp_lookup_kernel(imports[0]);
    other_service=imports[1];
    HANDLE thread=CreateThread(NULL,0,lookup_other,NULL,0,NULL);
    if (!selected||!thread) return 11;
    if (WaitForSingleObject(thread,5000)!=WAIT_OBJECT_0) return 12;
    DWORD result=1;
    GetExitCodeThread(thread,&result);
    CloseHandle(thread);
    if (result) return 13;
    g_esp=0x20000;
    *(uint32_t *)(memory+g_esp)=0xBEEF0001;
    *(uint32_t *)(memory+g_esp+4)=0;
    selected();
    if (g_esp!=0x20004||g_eax!=0) {
        fprintf(stderr,"FAIL: interleaved lookup changed service: ESP=%08X EAX=%08X\n",g_esp,g_eax);
        return 1;
    }
    VirtualFree(memory,0,MEM_RELEASE);
    puts("PASS: interleaved kernel lookups preserve per-thread dispatch and stack cleanup");
    return 0;
}
