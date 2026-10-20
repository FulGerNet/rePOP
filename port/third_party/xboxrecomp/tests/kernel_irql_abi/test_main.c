#include "kernel.h"
#include "xbox_memory_layout.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "resot_runtime.h"

/* RE-SoT: both targets must restore ISR ownership and wait for exclusion. */
extern int xbox_DispatchTryEnter(void);
extern void xbox_DispatchLeave(void);
extern int xbox_IrqlEnterInterrupt(int level);
extern void xbox_IrqlLeaveInterrupt(int saved);
static DWORD WINAPI probe_dispatch(void *unused) {
    (void)unused;
    int owned = xbox_DispatchTryEnter();
    if (owned) xbox_DispatchLeave();
    return owned;
}
static int dispatch_available(void) {
    DWORD available = 0;
    HANDLE thread = CreateThread(NULL,0,probe_dispatch,NULL,0,NULL);
    if (!thread) return 0;
    WaitForSingleObject(thread,INFINITE);
    GetExitCodeThread(thread,&available);
    CloseHandle(thread);
    return available != 0;
}
static HANDLE dispatch_ready;
static DWORD WINAPI hold_dispatch(void *unused) {
    (void)unused;
    if (!xbox_DispatchTryEnter()) return 1;
    SetEvent(dispatch_ready);
    Sleep(200);
    xbox_DispatchLeave();
    return 0;
}
static int dispatch_contention(void) {
    dispatch_ready = CreateEventA(NULL,TRUE,FALSE,NULL);
    HANDLE thread = CreateThread(NULL,0,hold_dispatch,NULL,0,NULL);
    if (!thread || WaitForSingleObject(dispatch_ready,5000) != WAIT_OBJECT_0) return 1;
    DWORD started = GetTickCount();
    xbox_KfRaiseIrql(2);
    DWORD waited = GetTickCount() - started;
    xbox_KfLowerIrql(0);
    WaitForSingleObject(thread,5000);
    CloseHandle(thread);
    CloseHandle(dispatch_ready);
    if (waited < 150) {
        fprintf(stderr,"FAIL dispatch lock bypassed after %lu ms\n",(unsigned long)waited);
        return 1;
    }
    return 0;
}
static int interrupt_ownership(void) {
    int outer = xbox_IrqlEnterInterrupt(2);
    int inner = xbox_IrqlEnterInterrupt(16);
    xbox_KfLowerIrql(0);
    xbox_KfRaiseIrql(2);
    xbox_IrqlLeaveInterrupt(inner);
    int failed = !dispatch_available();
    xbox_IrqlLeaveInterrupt(outer);
    failed |= !dispatch_available();
    xbox_KfRaiseIrql(2);
    outer = xbox_IrqlEnterInterrupt(16);
    xbox_KfLowerIrql(0);
    xbox_IrqlLeaveInterrupt(outer);
    failed |= dispatch_available();
    xbox_KfLowerIrql(0);
    failed |= !dispatch_available();
    if (failed) fputs("FAIL nested interrupt dispatch ownership\n",stderr);
    return failed;
}
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
    failed|=interrupt_ownership();
    failed|=dispatch_contention();
    VirtualFree(memory,0,MEM_RELEASE);
    if(!failed) puts("PASS fastcall IRQL: CL arguments, old levels, nesting and stack canary");
    return failed;
}
