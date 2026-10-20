/* RE-SoT: a pending idle-voice trap must survive other PIO writes and VP
 * polls until the guest services it. Demo ISR 0x002EE257 and retail ISR
 * 0x003E96EE read FECTL, FEDECMETH and FEDECPARAM in separate accesses. */
#include "apu_state.h"
#include <stdio.h>
#include <stdlib.h>

void *recomp_lookup(unsigned long address) { (void)address; abort(); }
void *recomp_lookup_manual(unsigned long address) { (void)address; abort(); }
extern void mcpx_apu_vp_write(void *, hwaddr, uint64_t, unsigned int);
extern void mcpx_apu_write(void *, hwaddr, uint64_t, unsigned int);

static int check_trap(MCPXAPUState *d, unsigned voice, const char *when)
{
    if ((d->regs[NV_PAPU_FECTL] & NV_PAPU_FECTL_FEMETHMODE) !=
            NV_PAPU_FECTL_FEMETHMODE_TRAPPED ||
        d->regs[NV_PAPU_FEDECMETH] != SE2FE_IDLE_VOICE ||
        d->regs[NV_PAPU_FEDECPARAM] != voice) {
        fprintf(stderr, "FAIL %s: FECTL=%08X method=%08X voice=%u expected=%u\n",
                when, d->regs[NV_PAPU_FECTL], d->regs[NV_PAPU_FEDECMETH],
                d->regs[NV_PAPU_FEDECPARAM], voice);
        return 1;
    }
    return 0;
}

int main(void)
{
    MCPXAPUState *d = calloc(1, sizeof(*d));
    static float mixbins[NUM_MIXBINS][NUM_SAMPLES_PER_FRAME];
    g_apu_ram_ptr = calloc(1, 64 * 1024 * 1024);
    if (!d || !g_apu_ram_ptr) return 2;
    qemu_mutex_init(&d->lock);
    qemu_cond_init(&d->cond);
    d->regs[NV_PAPU_VPVADDR] = 0x10000;
    d->regs[NV_PAPU_TVL2D] = 7;
    d->regs[NV_PAPU_TVL3D] = d->regs[NV_PAPU_TVLMP] = 0xFFFF;
    d->regs[NV_PAPU_FETFORCE1] = NV_PAPU_FETFORCE1_SE2FE_IDLE_VOICE;
    stl_le_phys(NULL, 0x10000 + 7 * NV_PAVS_SIZE + NV_PAVS_VOICE_TAR_PITCH_LINK, 8);
    stl_le_phys(NULL, 0x10000 + 8 * NV_PAVS_SIZE + NV_PAVS_VOICE_TAR_PITCH_LINK, 0xFFFF);
    mcpx_apu_vp_frame(d, mixbins);
    int failed = check_trap(d, 7, "two idle voices");
    /* A concurrent voice-selection command must not turn a pending idle
     * notification into an unrelated handle (zero in the reported crash). */
    mcpx_apu_vp_write(d, NV1BA0_PIO_SET_ANTECEDENT_VOICE, 0, 4);
    failed |= check_trap(d, 7, "PIO while trapped");
    mcpx_apu_vp_frame(d, mixbins);
    failed |= check_trap(d, 7, "VP poll while trapped");
    /* Simulate the guest unlinking voice 7 and releasing the front end. */
    d->regs[NV_PAPU_TVL2D] = 8;
    mcpx_apu_write(d, NV_PAPU_FECTL, 0, 4);
    mcpx_apu_vp_frame(d, mixbins);
    failed |= check_trap(d, 8, "next trap after acknowledgement");
    if (!failed) puts("PASS APU idle trap ordering, PIO isolation and acknowledgement");
    free(g_apu_ram_ptr);
    free(d);
    return failed;
}
