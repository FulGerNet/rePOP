/* Exercise the production demo gate with real Windows threads. */
#include <stdio.h>
#include "apu_guest_gate.h"
static HANDLE entered, release_scope, attempted;
static DWORD WINAPI guest_owner(void *unused)
{
    (void)unused;
    apu_guest_scope_enter();
    apu_guest_scope_enter(); /* ISR paths and audio helpers nest scopes. */
    apu_guest_scope_leave();
    SetEvent(entered);
    WaitForSingleObject(release_scope, INFINITE);
    apu_guest_scope_leave();
    return 0;
}
static DWORD WINAPI guest_contender(void *unused)
{
    (void)unused;
    SetEvent(attempted);
    apu_guest_scope_enter();
    SetEvent(entered);
    apu_guest_scope_leave();
    return 0;
}
#define CHECK(x) do { if (!(x)) { fprintf(stderr,"failed line %d\n",__LINE__); return 1; } } while (0)
int main(void)
{
    HANDLE thread;
    entered=CreateEvent(NULL,TRUE,FALSE,NULL);
    release_scope=CreateEvent(NULL,TRUE,FALSE,NULL);
    attempted=CreateEvent(NULL,TRUE,FALSE,NULL);
    CHECK(entered && release_scope && attempted);
    thread=CreateThread(NULL,0,guest_owner,NULL,0,NULL);
    CHECK(thread && WaitForSingleObject(entered,5000)==WAIT_OBJECT_0);
    /* A pending IRQ must defer immediately, even after one nested leave. */
    for(int i=0;i<10000;++i) CHECK(!apu_guest_irq_try_enter());
    SetEvent(release_scope);
    CHECK(WaitForSingleObject(thread,5000)==WAIT_OBJECT_0);
    CloseHandle(thread);
    CHECK(apu_guest_irq_try_enter());
    /* An ISR may enter its own nested DirectSound helper without deadlock. */
    apu_guest_scope_enter();
    apu_guest_scope_leave();
    ResetEvent(entered);
    thread=CreateThread(NULL,0,guest_contender,NULL,0,NULL);
    CHECK(thread && WaitForSingleObject(attempted,5000)==WAIT_OBJECT_0);
    /* A guest scope starting after IRQ reservation cannot enter its body. */
    CHECK(WaitForSingleObject(entered,50)==WAIT_TIMEOUT);
    apu_guest_scope_leave();
    CHECK(WaitForSingleObject(entered,5000)==WAIT_OBJECT_0);
    CHECK(WaitForSingleObject(thread,5000)==WAIT_OBJECT_0);
    CloseHandle(thread); CloseHandle(entered); CloseHandle(release_scope); CloseHandle(attempted);
    puts("PASS: guest-first/IRQ-first exclusion, nested scopes, deferred IRQ");
    return 0;
}
