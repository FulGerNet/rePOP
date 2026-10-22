/* RE-SoT: serialize the demo DirectSound scopes (XBE 0x002E9F30 / 0x002E9F52)
 * with its APU ISR (0x002EE410). The console has one CPU; host guest threads
 * can otherwise raise IRQL after the ISR's mask check and edit a voice list
 * concurrently. Keep this gate specific to audio, rather than holding a
 * global kernel lock across arbitrary guest callbacks. The ISR never waits.
 * Recursive acquisition is needed by nested scopes inside the ISR itself.
 * All transitive ISR imports were checked: no guest wait or critical-section
 * acquisition; it may allocate pool memory and queue a deferred callback. */
#ifndef RESOT_APU_GUEST_GATE_H
#define RESOT_APU_GUEST_GATE_H
#include <windows.h>

static INIT_ONCE s_apu_guest_once = INIT_ONCE_STATIC_INIT;
static CRITICAL_SECTION s_apu_guest_gate;
static BOOL CALLBACK apu_guest_gate_init(PINIT_ONCE once, PVOID arg, PVOID *context)
{
    (void)once; (void)arg; (void)context;
    InitializeCriticalSection(&s_apu_guest_gate);
    return TRUE;
}
static void apu_guest_gate_prepare(void)
{
    InitOnceExecuteOnce(&s_apu_guest_once, apu_guest_gate_init, NULL, NULL);
}
static void apu_guest_scope_enter(void)
{
    apu_guest_gate_prepare();
    EnterCriticalSection(&s_apu_guest_gate);
}
static void apu_guest_scope_leave(void)
{
    LeaveCriticalSection(&s_apu_guest_gate);
}
static int apu_guest_irq_try_enter(void)
{
    apu_guest_gate_prepare();
    return TryEnterCriticalSection(&s_apu_guest_gate) != 0;
}
#endif
