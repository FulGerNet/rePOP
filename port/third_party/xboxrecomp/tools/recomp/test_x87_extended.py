"""RE-WW: binary80 guest loads/stores preserve the double-backed x87 stack."""
from pathlib import Path
import unittest
from .test_io_port import translate, _build_and_run

class X87ExtendedTests(unittest.TestCase):
    def test_production_binary80_and_translated_stack(self):
        header=(Path(__file__).resolve().parents[2]/'templates/runtime/recomp_types.h').read_text()
        helpers='static inline double recomp_load80('+header.split('static inline double recomp_load80(',1)[1].split('/* ================================================================',1)[0]
        body=translate(bytes.fromhex('db2d01010000db3d21010000c3'))
        self.assertIn('recomp_load80',body)
        self.assertIn('recomp_store80',body)
        source=r'''
#include <stdint.h>
#include <string.h>
#include <math.h>
#include <float.h>
static uint8_t memory[512];
#define MEM8(a) memory[(a)]
#define MEM16(a) (*(uint16_t *)(memory+(a)))
static uint32_t esp;
static int g_fp_top;
static double g_fp_stack[8];
''' + helpers + body + r'''
static uint64_t bits(double x) { uint64_t b; memcpy(&b,&x,8); return b; }
int main(void) {
    const double values[]={0.0,-0.0,1.0,-1.0,DBL_MIN,DBL_MAX,
        0x1p-1074,-0x1p-1074,INFINITY,-INFINITY,NAN,-NAN,3.141592653589793};
    for(unsigned i=0;i<sizeof(values)/sizeof(values[0]);++i) {
        memset(memory,0xa5,sizeof memory);
        recomp_store80(0x101,values[i]);
        uint8_t before[10]; memcpy(before,memory+0x101,10);
        g_fp_top=5; g_fp_stack[5]=123.0; esp=1024;
        sub_00010000();
        double actual=recomp_load80(0x121);
        if(isnan(values[i]) ? !isnan(actual) : bits(actual)!=bits(values[i])) return 1;
        if(g_fp_top!=5 || g_fp_stack[5]!=123.0 || esp!=1028) return 2;
        if(memory[0x100]!=0xa5 || memory[0x10b]!=0xa5 ||
           memory[0x120]!=0xa5 || memory[0x12b]!=0xa5) return 3;
        if(memcmp(before,memory+0x101,10)) return 4;
    }
    /* Independent encodings, not just a round trip through the same code. */
    const uint8_t one[]={0,0,0,0,0,0,0,0x80,0xff,0x3f};
    memcpy(memory+1,one,10);
    if(recomp_load80(1)!=1.0) return 5;
    const uint8_t bound[]={0,0,0,0,0,0,0xff,0xff,0x0d,0x40};
    memcpy(memory+1,bound,10);
    if(recomp_load80(1)!=32767.5) return 6;
    memset(memory+1,0,10); memory[1]=1;
    if(recomp_load80(1)!=0.0) return 7;
    memory[9]=1;
    if(!isnan(recomp_load80(1))) return 8;
    return 0;
}
'''
        ran=_build_and_run(source)
        self.assertEqual(ran.returncode,0,ran.stdout+ran.stderr)

if __name__=='__main__': unittest.main()
