"""RE-WW: production APU bus resolution must distinguish XBE RAM from DMA."""
from pathlib import Path
import unittest
from .test_io_port import _build_and_run

class ApuPhysicalTests(unittest.TestCase):
    def test_production_resolver_for_both_consumers(self):
        source = (Path(__file__).resolve().parents[2] / 'src/apu/apu_core.c').read_text()
        body = 'uint8_t *mcpx_apu_phys(' + source.split('uint8_t *mcpx_apu_phys(', 1)[1].split('/* The interrupt line', 1)[0]
        for ww in [0, 1]:
            with self.subTest(ww=ww):
                c = r'''
#include <stdint.h>
#define RESOT_RUNTIME_RETAIL 1
#define XBOX_APU_DMA_BASE 0x04000000u
#define XBOX_APU_DMA_END 0x0B000000u
#define XBOX_APU_HEAP_ALIAS 0x0B000000u
static uint8_t *g_apu_ram_ptr = (uint8_t *)(uintptr_t)0x10000u;
static uint32_t g_xbox_image_lo=0x12000u, g_xbox_image_hi=0x97B160u;
static uint32_t xbox_ContiguousAllocatedBytes(void) { return 0x1000000u; }
static uint32_t xbox_ApuDmaResolve(uint32_t a) {
    return a>=0x04000000u && a<0x04001000u ? 0x740CC000u+(a&4095u) : 0;
}
''' + f'\n#define REWW_RUNTIME {ww}\n' + body + r'''
#define VA(p) ((uintptr_t)(p)-(uintptr_t)g_apu_ram_ptr)
int main(void) {
    /* Observed WW SGE: physical 006A9000 + source offset 8A0. */
    if (VA(mcpx_apu_phys(0x006A98A0u)) !=
        (REWW_RUNTIME ? 0x806A98A0u : 0x006A98A0u)) return 1;
    if (VA(mcpx_apu_phys(0x00A0A000u)) != 0x80A0A000u) return 2;
    if (VA(mcpx_apu_phys(0x0B6A98A0u)) != 0x006A98A0u) return 3;
    if (VA(mcpx_apu_phys(0x04000580u)) != 0x740CC580u) return 4;
    if (VA(mcpx_apu_phys(0x0B000000u)) != 0) return 5;
    if (VA(mcpx_apu_phys(0x02000000u)) != 0x02000000u) return 6;
    /* Revoked tokens must not resolve to low image or contiguous RAM. */
    if (VA(mcpx_apu_phys(0x04002000u)) == 0x2000u) return 7;
    return 0;
}
'''
                ran = _build_and_run(c)
                self.assertEqual(ran.returncode, 0, ran.stdout + ran.stderr)

if __name__ == '__main__':
    unittest.main()
