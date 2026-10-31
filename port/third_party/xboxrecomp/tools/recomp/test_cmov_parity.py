"""RE-WW: parity conditional moves must use live integer/SSE snapshots."""
import unittest
from .test_io_port import translate, _build_and_run

class CmovParityTests(unittest.TestCase):
    def test_integer_and_sse_parity_execute(self):
        for raw, floating in [('85c00f4af90f4bdac3', False),
                              ('0f2ec10f4af90f4bdac3', True)]:
            with self.subTest(floating=floating):
                body=translate(bytes.fromhex(raw))
                self.assertNotIn('RECOMP_UNIMPL',body)
                prefix=r'''
#include <stdint.h>
#include <math.h>
static uint32_t eax,ebx,ecx,edx,edi,esp,g_ebp,g_seh_ebp;
typedef union { float f[4]; double d[2]; } Xmm;
static Xmm xmm0,xmm1;
static int parity(uint32_t x) { x&=255; x^=x>>4; x^=x>>2; x^=x>>1; return (~x)&1; }
#define RECOMP_PARITY8(x) parity((uint32_t)(x))
'''
                suffix=r'''
int main(void) {
    const uint32_t integer[]={0,1,3,0x100,0xffffffffu};
    for(unsigned i=0;i<5;++i) {
        eax=integer[i]; ebx=0x11111111u; edi=0x22222222u;
        ecx=0x33333333u; edx=0x44444444u; esp=0x1000;
        xmm0.f[0]=i==0 ? NAN : (float)i; xmm1.f[0]=1.0f;
        sub_00010000();
        int pf=FLOATING ? i==0 : parity(integer[i]);
        if(edi!=(pf?ecx:0x22222222u)) return 1;
        if(ebx!=(pf?0x11111111u:edx)) return 2;
        if(esp!=0x1004 || eax!=integer[i]) return 3;
    }
    return 0;
}
'''.replace('FLOATING','1' if floating else '0')
                ran=_build_and_run(prefix+body+suffix)
                self.assertEqual(ran.returncode,0,ran.stdout+ran.stderr)

if __name__=='__main__': unittest.main()
