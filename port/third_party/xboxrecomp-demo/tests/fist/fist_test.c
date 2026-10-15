#include "recomp_types.h"
#include <stdio.h>
#define CHECK(x) do { if(!(x)) { fprintf(stderr,"FAIL line %d\n",__LINE__); return 1; } } while(0)
int main(void) {
    const double input[]={255.5,-255.5,2.5,-2.5,1.5,-1.5,0.5,-0.5};
    const int expected[4][8]={{256,-256,2,-2,2,-2,0,0},{255,-256,2,-3,1,-2,0,-1},{256,-255,3,-2,2,-1,1,0},{255,-255,2,-2,1,-1,0,0}};
    const unsigned widths[]={16,32,64};
    for(unsigned w=0;w<3;++w) for(unsigned rc=0;rc<4;++rc) {
        unsigned bits=widths[w]; uint16_t cw=(uint16_t)(0x37f|(rc<<10));
        for(unsigned i=0;i<8;++i) CHECK(recomp_fist(input[i],cw,bits)==expected[rc][i]);
        double limit=ldexp(1.0,(int)bits-1);
        int64_t indefinite=bits==64?INT64_MIN:-(INT64_C(1)<<(bits-1));
        CHECK(recomp_fist(limit,cw,bits)==indefinite);
        CHECK(recomp_fist(-limit,cw,bits)==indefinite);
        CHECK(recomp_fist(INFINITY,cw,bits)==indefinite);
        CHECK(recomp_fist(NAN,cw,bits)==indefinite);
    }
    /* XML1 adds 0.5 then asks _ftol for truncation for each color channel. */
    uint32_t packed=0;
    for(unsigned c=0;c<4;++c) packed=(packed<<8)|(uint32_t)recomp_fist(255.5,0xf7f,64);
    CHECK(packed==0xffffffff);
    puts("PASS: 16/32/64-bit stores, four guest rounding modes, ties-to-even, invalid boundaries and XML1 white color packing");
    return 0;
}
