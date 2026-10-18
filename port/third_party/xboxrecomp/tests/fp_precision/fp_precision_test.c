/* x87 PC=24: results round to a 24-bit significand, exponent range intact. */
#include "recomp_types.h"
#include <float.h>
#include <stdio.h>
#define CHECK(x) do { if(!(x)) { fprintf(stderr,"FAIL line %d\n",__LINE__); return 1; } } while(0)
int main(void) {
    /* The Burnout 3 case: 96 * (float)(1/255) must equal its float-stored copy. */
    double v = 96.0 * (double)(1.0f / 255.0f);
    CHECK(recomp_fp_round24(v) == (double)(float)v);
    CHECK(v != (double)(float)v);           /* ...which double precision is not */
    /* Past float's range the x87 keeps going; a (float) cast would not. */
    CHECK(recomp_fp_round24(1e300) == ldexp((double)(float)frexp(1e300, &(int){0}), 997));
    CHECK(isfinite(recomp_fp_round24(1e300)) && recomp_fp_round24(1e300) * 0.0 == 0.0);
    CHECK(recomp_fp_round24(1e-300) != 0.0);
    CHECK(recomp_fp_round24(-3.0) == -3.0 && recomp_fp_round24(0.0) == 0.0);
    CHECK(isinf(recomp_fp_round24(INFINITY)));
    CHECK(isnan(recomp_fp_round24(NAN)));
    puts("ok");
    return 0;
}
