/**
 * PoP SoT xbox-retail - xdk/d3d8, chunk 0
 * Direct3D 8 for the NV2A (D3D section)
 * Functions: 250 (0x00369D20 - 0x00373454)
 */

#define RECOMP_GENERATED_CODE
#include "../../recomp_funcs.h"
#include <math.h>

/**
 * sub_00369D20
 * Original: 0x00369D20 - 0x00369D5E (62 bytes, 22 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00369D20: ;
    edx = MEM32(0x37B648);
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax;
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    ecx = MEM32(eax + 0xC);
    ecx = ecx | 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = 1;
    MEM32(eax + 0xC) = ecx;
    SET_LO8(ebx, MEM8(edx + 8));
    POP32(esp, esi);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00369D5B; /* je: equal / zero */

loc_00369D55: ;
    ecx = ecx | 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xC) = ecx;

loc_00369D5B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00369D60
 * Original: 0x00369D60 - 0x00369DE3 (131 bytes, 42 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369D60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00369D60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi + 0x2478);
    edx = esi + 0x1C28;
    esi = MEM32(esi + 0x240C);
    esi = esi + esi * 2;
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0xC0;
    edi = ebp;
    esi = esi + edx + 0x1DC;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_00369DDC; /* je: equal / zero */

loc_00369D9D: ;
    ecx = eax + eax * 2;
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ecx + edx + 0x1DC;
    ecx = 0xC0;
    esi = ebp;
    edi = ebx;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 2 (8-bit) */
    MEM32(edx + 0x7E4) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00369DD1; /* je: equal / zero */

loc_00369DC2: ;
    PUSH32(esp, ebx);
    ecx = edx;
    PUSH32(esp, 0x00369DCAu); RECOMP_ABI_CALL(0x0036E2C0u, sub_0036E2C0); /* call 0x0036E2C0 */

loc_00369DCA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00369DD1: ;
    MEM32(edx + eax * 4 + 0x7DC) = 1;

loc_00369DDC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00369DF0
 * Original: 0x00369DF0 - 0x00369E1A (42 bytes, 13 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369DF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00369DF0: ;
    eax = MEM32(0x37B648);
    ecx = MEM32(eax + 0x240C);
    PUSH32(esp, esi);
    ecx = ecx + ecx * 2;
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx + eax + 0x1E04;
    ecx = 0xC0;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00369E20
 * Original: 0x00369E20 - 0x00369F38 (280 bytes, 83 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00369E20: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(0x37B648);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = ecx + ebx + 0xC60;
    ecx = 0x10;
    esi = edx;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    esi = MEM32(0x37B1A8);
    ecx = MEM32(eax * 4 + 0x379234);
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(0x37B1A8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00369F32; /* jne: not equal / not zero */

loc_00369E64: ;
    fp_push(MEMF(edx + 0x2C)); /* fld float */
    esi = 0x3F800000;
    fp_push(MEMF(edx + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00369EB8; /* jnp: not parity */

loc_00369E78: ;
    fp_push(MEMF(0x429350)); /* fld float */
    fp_push(MEMF(edx + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00369EB8; /* jnp: not parity */

loc_00369E8A: ;
    fp_push(MEMF(edx + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(edx + 0x28)); /* fdiv dword ptr [edx + 0x28] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x2C)); /* fmul dword ptr [edx + 0x2c] */
    fp_top() = RECOMP_FP_PC(MEMF(edx + 0x3C) - fp_top()); /* fsubr dword ptr [edx + 0x3c] */
    MEMF(ebx + 0x93C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x38)); /* fsub dword ptr [edx + 0x38] */
    fp_push(MEMF(edx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x2C)); /* fsub dword ptr [edx + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x2C)); /* fmul dword ptr [edx + 0x2c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x3C)); /* fadd dword ptr [edx + 0x3c] */
    MEMF(ebx + 0x940) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00369EC8;

loc_00369EB8: ;
    MEM32(ebx + 0x93C) = 0;
    MEM32(ebx + 0x940) = esi;

loc_00369EC8: ;
    fp_push(MEMF(0x429344)); /* fld float */
    eax = MEM32(ebx + 8);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebx + 0x940)); /* fdiv dword ptr [ebx + 0x940] */
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 8) = eax;
    ecx = eax;
    MEMF(ebx + 0x944) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x429350)); /* fld float */
    fp_push(MEMF(edx + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00369F26; /* jp: parity */

loc_00369EF7: ;
    fp_push(MEMF(0x429350)); /* fld float */
    fp_push(MEMF(edx + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00369F26; /* jp: parity */

loc_00369F09: ;
    fp_push(MEMF(0x429350)); /* fld float */
    fp_push(MEMF(edx + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00369F26; /* jp: parity */

loc_00369F1B: ;
    _fa = (uint32_t)(MEM32(edx + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x3C), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00369F26; /* jne: not equal / not zero */

loc_00369F20: ;
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 8) = ecx;

loc_00369F26: ;
    PUSH32(esp, 0x00369F2Bu); RECOMP_ABI_CALL(0x0036CD30u, sub_0036CD30); /* call 0x0036CD30 */

loc_00369F2B: ;
    ecx = ebx;
    PUSH32(esp, 0x00369F32u); RECOMP_ABI_CALL(0x0036EF10u, sub_0036EF10); /* call 0x0036EF10 */

loc_00369F32: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00369F40
 * Original: 0x00369F40 - 0x00369F73 (51 bytes, 16 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369F40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00369F40: ;
    eax = MEM32(0x37B648);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xEE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xEE0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;
    eax = MEM32(eax + 0x14);
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00369F80
 * Original: 0x00369F80 - 0x00369FB7 (55 bytes, 17 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00369F80: ;
    PUSH32(esp, edi);
    edi = MEM32(0x37B648);
    eax = MEM32(edi + 0x938);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00369FAE; /* jne: not equal / not zero */

loc_00369F92: ;
    ecx = edi;
    PUSH32(esp, 0x00369F99u); RECOMP_ABI_CALL(0x003713A0u, sub_003713A0); /* call 0x003713A0 */

loc_00369F99: ;
    ecx = 0x928;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x37B648) = 0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00369FAE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 0x938) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00369FC0
 * Original: 0x00369FC0 - 0x00369FC5 (5 bytes, 1 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00369FC0: ;
    g_seh_ebp = ebp; sub_00370450(); return; /* tail jmp 0x00370450 */

}

/**
 * sub_00369FD0
 * Original: 0x00369FD0 - 0x00369FDF (15 bytes, 5 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00369FD0(void)
{

loc_00369FD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00369FDCu); RECOMP_ABI_CALL(0x00370140u, sub_00370140); /* call 0x00370140 */

loc_00369FDC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00369FE0
 * Original: 0x00369FE0 - 0x0036A041 (97 bytes, 32 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00369FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00369FE0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x37B648);
    edx = eax;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = MEM32(ecx + edx * 4 + 0x7D4);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + esi + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0036A021; /* jne: not equal / not zero */

loc_0036A00B: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036A019; /* jne: not equal / not zero */

loc_0036A012: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0036A019u); RECOMP_ABI_CALL(0x00370080u, sub_00370080); /* call 0x00370080 */

loc_0036A019: ;
    eax = 0x88760828u;
    esp += 16; return; /* ret 12 */

loc_0036A021: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A03C; /* je: equal / zero */

loc_0036A032: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 4) = eax;

loc_0036A03C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036A050
 * Original: 0x0036A050 - 0x0036A074 (36 bytes, 10 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036A050: ;
    eax = MEM32(0x37B648);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    MEM32(eax + 0x1DC0) = 0;
    PUSH32(esp, 6);
    _fb = (uint32_t)(0x1DBC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1DBC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x4180B4); PUSH32(esp, 0x0036A073u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A06Du); } /* indirect call */
    }

loc_0036A073: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0036A080
 * Original: 0x0036A080 - 0x0036A0D1 (81 bytes, 28 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036A080: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x37B648);
    if (CMP_EQ(_fa, _fb)) goto loc_0036A095; /* je: equal / zero */

loc_0036A08D: ;
    edx = MEM32(eax + 0x1C00);
    MEM32(ecx) = edx;

loc_0036A095: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A0A5; /* je: equal / zero */

loc_0036A09D: ;
    edx = MEM32(eax + 0x1C04);
    MEM32(ecx) = edx;

loc_0036A0A5: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A0CD; /* je: equal / zero */

loc_0036A0AE: ;
    ecx = MEM32(eax + 0x1C00);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = eax + 0x1B80;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    POP32(esp, esi);

loc_0036A0CD: ;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036A0E0
 * Original: 0x0036A0E0 - 0x0036A122 (66 bytes, 18 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036A0E0: ;
    ecx = MEM32(0x37A580);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x37B648);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0036A0FC; /* je: equal / zero */

loc_0036A0F4: ;
    _fa = (uint32_t)(MEM32(0x37A578)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37A578), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A11E; /* je: equal / zero */

loc_0036A0FC: ;
    eax = MEM32(eax + 0x1C28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xB);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x418224); PUSH32(esp, 0x0036A10Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A108u); } /* indirect call */
    }

loc_0036A10E: ;
    MEM32(0x37A580) = 1;
    MEM32(0x37A578) = esi;

loc_0036A11E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036A130
 * Original: 0x0036A130 - 0x0036A181 (81 bytes, 25 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036A130: ;
    ecx = MEM32(0x37A57C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x37B648);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0036A155; /* je: equal / zero */

loc_0036A144: ;
    edx = MEM32(0x37A574);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A17D; /* je: equal / zero */

loc_0036A155: ;
    edx = MEM32(eax + 0x1C28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xE);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x418224); PUSH32(esp, 0x0036A167u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036A161u); } /* indirect call */
    }

loc_0036A167: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(0x37A57C) = 1;
    MEM32(0x37A574) = eax;

loc_0036A17D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036A190
 * Original: 0x0036A190 - 0x0036A198 (8 bytes, 3 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A190(void)
{

loc_0036A190: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0036A197u); RECOMP_ABI_CALL(0x00370080u, sub_00370080); /* call 0x00370080 */

loc_0036A197: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0036A1A0
 * Original: 0x0036A1A0 - 0x0036A1CC (44 bytes, 10 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0036A1A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0036A1A0: ;
    eax = MEM32(0x37B648);
    fp_push(MEMF(eax + 0xEF8)); /* fld float */
    ecx = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x379170)); /* fsub dword ptr [0x379170] */
    edx = MEM32(esp + 8);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xEFC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x379170)); /* fsub dword ptr [0x379170] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036A1D0
 * Original: 0x0036A1D0 - 0x0036A235 (101 bytes, 35 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036A1D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036A229; /* jne: not equal / not zero */

loc_0036A1DC: ;
    ecx = MEM32(esi + 0xC);
    eax = ZX8(MEM8(esi + 0xD));
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A222; /* je: equal / zero */

loc_0036A1F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036A20A; /* jle: less or equal (signed <=) */

loc_0036A1FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0036A20A; /* jg: greater (signed >) */

loc_0036A1FF: ;
    eax = edx * 4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0036A20A: ;
    eax = ZX8(MEM8(esi + 0xD));
    eax = ZX8(MEM8(eax + 0x3791F0));
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0036A222: ;
    eax = edx + edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0036A229: ;
    eax = ZX8(MEM8(esi + 0x13));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036A240
 * Original: 0x0036A240 - 0x0036A2B9 (121 bytes, 50 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0036A240: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = ZX8(MEM8(esi + 0xD));
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, MEM8(eax + 0x3791F0));
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0x3C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x0036A25Fu); RECOMP_ABI_CALL(0x00371780u, sub_00371780); /* call 0x00371780 */

loc_0036A25F: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0036A29E; /* jne: not equal / not zero */

loc_0036A26C: ;
    ecx = MEM32(esi + 0xC);
    eax = ecx;
    if (0x14) _cf = (int)(((eax) >> ((0x14) - 1)) & 1);
    eax = eax >> 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0036A27D; /* jbe: below or equal (unsigned <=) */

loc_0036A27B: ;
    eax = edx;

loc_0036A27D: ;
    if (0x18) _cf = (int)(((ecx) >> ((0x18) - 1)) & 1);
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0036A289; /* jbe: below or equal (unsigned <=) */

loc_0036A287: ;
    ecx = edx;

loc_0036A289: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0036A29E: ;
    eax = edi;
    if (0xC) _cf = (int)(((eax) >> ((0xC) - 1)) & 1);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (0x18) _cf = (int)(((edi) >> ((0x18) - 1)) & 1);
    edi = edi >> 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    POP32(esp, edi);
    POP32(esp, esi);
    if (6) _cf = (int)(((eax) >> (32 - (6))) & 1);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036A2C0
 * Original: 0x0036A2C0 - 0x0036A381 (193 bytes, 60 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0036A2C0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    ecx = MEM32(esi + 0x1A18);
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0036A2E7; /* jne: not equal / not zero */

loc_0036A2D5: ;
    ecx = MEM32(ecx + 0xC);
    if (0x14) _cf = (int)(((ecx) >> ((0x14) - 1)) & 1);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0036A2ED;

loc_0036A2E7: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0036A2ED: ;
    edi = MEM32(esp + 0xC);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 0x1A18);
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0036A310; /* jne: not equal / not zero */

loc_0036A300: ;
    ecx = ZX8(MEM8(ecx + 0xF));
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0036A319;

loc_0036A310: ;
    if (0xC) _cf = (int)(((eax) >> ((0xC) - 1)) & 1);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0036A319: ;
    MEM32(edi + 4) = eax;
    ecx = MEM32(esi + 0x2448);
    eax = MEM32(esi + 0x244C);
    edx = ecx;
    _cf = 0; /* logical op clears CF */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0036A348; /* je: equal / zero */

loc_0036A32E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1312D00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1312D00 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036A341; /* jne: not equal / not zero */

loc_0036A336: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0036A341; /* jne: not equal / not zero */

loc_0036A33A: ;
    eax = 0x32;
    goto loc_0036A35D;

loc_0036A341: ;
    eax = 0x3C;
    goto loc_0036A35D;

loc_0036A348: ;
    eax = MEM32(esi + 0x1DDC);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x32)) >> 32) & 1);
    eax = eax + 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036A35D: ;
    MEM32(edi + 8) = eax;
    eax = MEM32(esi + 0x1DDC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036A36Cu); RECOMP_ABI_CALL(0x00372075u, sub_00372075); /* call 0x00372075 */

loc_0036A36C: ;
    MEM32(edi + 0xC) = eax;
    ecx = MEM32(esi + 0x1A18);
    edx = ZX8(MEM8(ecx + 0xD));
    MEM32(edi + 0x10) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036A390
 * Original: 0x0036A390 - 0x0036A604 (628 bytes, 188 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036A390: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x37B648);
    if (CMP_NE(_fa, _fb)) goto loc_0036A3B3; /* jne: not equal / not zero */

loc_0036A3A7: ;
    eax = MEM32(edi + 0x1A04);
    MEM32(esp + 0x20) = eax;
    ebp = eax;

loc_0036A3B3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0036A3B9u); RECOMP_ABI_CALL(0x0036BD30u, sub_0036BD30); /* call 0x0036BD30 */

loc_0036A3B9: ;
    eax = MEM32(edi + 0x1A04);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A3DE; /* je: equal / zero */

loc_0036A3C3: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A3CC; /* je: equal / zero */

loc_0036A3CA: ;
    eax = ecx;

loc_0036A3CC: ;
    ecx = MEM32(edi + 0x2C);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edi + 0x1A04);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036A3DEu); RECOMP_ABI_CALL(0x0036BEC0u, sub_0036BEC0); /* call 0x0036BEC0 */

loc_0036A3DE: ;
    eax = MEM32(edi + 0x1A08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(edi + 0x1A04) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0036A409; /* je: equal / zero */

loc_0036A3EE: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A3F7; /* je: equal / zero */

loc_0036A3F5: ;
    eax = ecx;

loc_0036A3F7: ;
    ecx = MEM32(edi + 0x2C);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edi + 0x1A08);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036A409u); RECOMP_ABI_CALL(0x0036BEC0u, sub_0036BEC0); /* call 0x0036BEC0 */

loc_0036A409: ;
    ebx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    MEM32(edi + 0x1A08) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0036A436; /* je: equal / zero */

loc_0036A417: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0036A41Du); RECOMP_ABI_CALL(0x0036BD30u, sub_0036BD30); /* call 0x0036BD30 */

loc_0036A41D: ;
    eax = edi + 0x948;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0036A42Au); RECOMP_ABI_CALL(0x00371930u, sub_00371930); /* call 0x00371930 */

loc_0036A42A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0036A430u); RECOMP_ABI_CALL(0x0036A1D0u, sub_0036A1D0); /* call 0x0036A1D0 */

loc_0036A430: ;
    MEM32(edi + 0x94C) = eax;

loc_0036A436: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036A442; /* jb: below (unsigned <) */

loc_0036A43D: ;
    PUSH32(esp, 0x0036A442u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036A442: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    ecx = MEM32(ebp + 4);
    edx = eax;
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0036A458; /* je: equal / zero */

loc_0036A44F: ;
    eax = MEM32(ebx + 4);
    MEM32(esp + 0x10) = eax;
    goto loc_0036A45C;

loc_0036A458: ;
    MEM32(esp + 0x10) = esi;

loc_0036A45C: ;
    MEM32(esp + 0x14) = 2;
    ebp = 0x40100;
    ebx = 0x40110;
    edi = edi;

loc_0036A470: ;
    eax = MEM32(esp + 0x20);
    MEM32(edx) = ebp;
    MEM32(edx + 4) = esi;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036A4CD; /* jne: not equal / not zero */

loc_0036A47E: ;
    ecx = MEM32(eax + 0xC);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x20);
    ecx = ZX8(MEM8(ecx + 0xD));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A4C8; /* je: equal / zero */

loc_0036A49B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036A4AE; /* jle: less or equal (signed <=) */

loc_0036A4A0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0036A4AE; /* jg: greater (signed >) */

loc_0036A4A5: ;
    ecx = eax * 4;
    goto loc_0036A4D5;

loc_0036A4AE: ;
    ecx = MEM32(esp + 0x20);
    ecx = ZX8(MEM8(ecx + 0xD));
    ecx = ZX8(MEM8(ecx + 0x3791F0));
    ecx = ecx & 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx >> 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0036A4D5;

loc_0036A4C8: ;
    ecx = eax + eax;
    goto loc_0036A4D5;

loc_0036A4CD: ;
    ecx = ZX8(MEM8(eax + 0x13));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0036A4D5: ;
    eax = MEM32(edi + 0x94C);
    MEM32(edx + 8) = 0x4020C;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 0xC) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edx + 0x10) = ebp;
    MEM32(edx + 0x14) = esi;
    MEM32(edx + 0x18) = ebx;
    MEM32(edx + 0x1C) = esi;
    ecx = MEM32(esp + 0x10);
    MEM32(edx + 0x20) = ebp;
    MEM32(edx + 0x24) = esi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 8) = 0x40210;
    MEM32(edx + 0xC) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(edx + 0x10) = ebp;
    MEM32(edx + 0x14) = esi;
    MEM32(edx + 0x18) = ebx;
    MEM32(edx + 0x1C) = esi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ebp;
    MEM32(edx + 4) = esi;
    MEM32(edx + 8) = 0x40214;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ebp;
    MEM32(edx + 0x14) = esi;
    MEM32(edx + 0x18) = ebx;
    MEM32(edx + 0x1C) = esi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_0036A470; /* jne: not equal / not zero */

loc_0036A553: ;
    ecx = edi;
    PUSH32(esp, 0x0036A55Au); RECOMP_ABI_CALL(0x0036D930u, sub_0036D930); /* call 0x0036D930 */

loc_0036A55A: ;
    _fa = (uint32_t)(MEM32(0x37B5EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37B5EC), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A571; /* je: equal / zero */

loc_0036A562: ;
    _fa = (uint32_t)(MEM32(edi + 0x1A08)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1A08), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A571; /* je: equal / zero */

loc_0036A56A: ;
    ecx = 1;
    goto loc_0036A573;

loc_0036A571: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036A573: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = ecx;
    _fa = (uint32_t)(MEM32(0x37B5F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37B5F0), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A593; /* je: equal / zero */

loc_0036A584: ;
    _fa = (uint32_t)(MEM32(edi + 0x1A08)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1A08), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A593; /* je: equal / zero */

loc_0036A58C: ;
    ecx = 1;
    goto loc_0036A595;

loc_0036A593: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036A595: ;
    MEM32(eax + 8) = 0x4032C;
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(edi + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036A5CB; /* je: equal / zero */

loc_0036A5AA: ;
    edx = MEM32(esp + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x1A14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0x1A14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036A5CB; /* jne: not equal / not zero */

loc_0036A5B6: ;
    ecx = ecx & 0xFFFFFEFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + 8) = ecx;
    MEM32(eax) = 0x40130;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036A5CB: ;
    ecx = MEM32(esp + 0x20);
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036A5DCu); RECOMP_ABI_CALL(0x00371810u, sub_00371810); /* call 0x00371810 */

loc_0036A5DC: ;
    edx = 0x379158;
    ecx = edi;
    MEM32(edi + 0x1A0C) = eax;
    PUSH32(esp, 0x0036A5EEu); RECOMP_ABI_CALL(0x0036DA60u, sub_0036DA60); /* call 0x0036DA60 */

loc_0036A5EE: ;
    edx = MEM32(0x37B62C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036A5FAu); RECOMP_ABI_CALL(0x0036D100u, sub_0036D100); /* call 0x0036D100 */

loc_0036A5FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036A610
 * Original: 0x0036A610 - 0x0036A653 (67 bytes, 22 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0036A610: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(0x37B648);
    if (CMP_NE(_fa, _fb)) goto loc_0036A638; /* jne: not equal / not zero */

loc_0036A61F: ;
    eax = 1;
    PUSH32(esp, esi);
    esi = MEM32(ecx + eax * 4 + 0x1A14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036A632u); RECOMP_ABI_CALL(0x0036BD70u, sub_0036BD70); /* call 0x0036BD70 */

loc_0036A632: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0036A638: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = MEM32(ecx + eax * 4 + 0x1A14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036A64Du); RECOMP_ABI_CALL(0x0036BD70u, sub_0036BD70); /* call 0x0036BD70 */

loc_0036A64D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036A660
 * Original: 0x0036A660 - 0x0036A983 (803 bytes, 260 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036A660: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ZX8(MEM8(eax + 0xD));
    SET_LO8(ebx, MEM8(ebp + 0x3791F0));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ebx));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ecx >> 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, 0x0036A689u); RECOMP_ABI_CALL(0x0036A1D0u, sub_0036A1D0); /* call 0x0036A1D0 */

loc_0036A689: ;
    edx = MEM32(esp + 0x54);
    PUSH32(esp, edx);
    esi = eax;
    PUSH32(esp, 0x0036A695u); RECOMP_ABI_CALL(0x0036A1D0u, sub_0036A1D0); /* call 0x0036A1D0 */

loc_0036A695: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    edi = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0036A6AE; /* jne: not equal / not zero */

loc_0036A69C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0036A6A2u); RECOMP_ABI_CALL(0x00371780u, sub_00371780); /* call 0x00371780 */

loc_0036A6A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0036A6B6; /* je: equal / zero */

loc_0036A6AE: ;
    MEM32(esp + 0x14) = 1;

loc_0036A6B6: ;
    ebx = MEM32(0x37B648);
    eax = MEM32(esp + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebp = MEM32(ebx + 0x192C);
    MEM32(esp + 0x28) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0036A6D6; /* jne: not equal / not zero */

loc_0036A6CE: ;
    MEM32(esp + 0x50) = 1;

loc_0036A6D6: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A730; /* je: equal / zero */

loc_0036A6DE: ;
    eax = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036A6E8u); RECOMP_ABI_CALL(0x0036A240u, sub_0036A240); /* call 0x0036A240 */

loc_0036A6E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1FC0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0036A705; /* ja: above (unsigned >) */

loc_0036A6EF: ;
    esi = eax + 0x3F;
    esi = esi & 0xFFFFFFC0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = esi;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x1C) = 1;
    goto loc_0036A717;

loc_0036A705: ;
    edi = 0x1000;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edi;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x1C) = eax;

loc_0036A717: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036A722; /* jne: not equal / not zero */

loc_0036A71B: ;
    eax = 1;
    goto loc_0036A738;

loc_0036A722: ;
    eax = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0x18));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0x18)); }
    MEM32(esp + 0x10) = eax;

loc_0036A730: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036A751; /* jne: not equal / not zero */

loc_0036A734: ;
    eax = MEM32(esp + 0x18);

loc_0036A738: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0036A74C; /* je: equal / zero */

loc_0036A73B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0036A745; /* je: equal / zero */

loc_0036A73E: ;
    ebp = 0xA;
    goto loc_0036A751;

loc_0036A745: ;
    ebp = 4;
    goto loc_0036A751;

loc_0036A74C: ;
    ebp = 1;

loc_0036A751: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036A75D; /* jb: below (unsigned <) */

loc_0036A758: ;
    PUSH32(esp, 0x0036A75Du); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036A75D: ;
    ecx = MEM32(esp + 0x54);
    ecx = MEM32(ecx + 4);
    edx = MEM32(esp + 0x48);
    edx = MEM32(edx + 4);
    MEM32(eax) = 0x86308;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0xC) = 0x86300;
    MEM32(eax + 0x10) = ebp;
    edi = edi | esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x14) = edi;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;

loc_0036A794: ;
    ebx = MEM32(esp + 0x50);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0036A7A2; /* jbe: below or equal (unsigned <=) */

loc_0036A79D: ;
    ebx = 1;

loc_0036A7A2: ;
    edx = MEM32(esp + 0x50);
    eax = MEM32(esp + 0x4C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x50) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0036A7BF; /* je: equal / zero */

loc_0036A7B4: ;
    esi = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x4C) = eax;
    goto loc_0036A83B;

loc_0036A7BF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = esp + 0x34;
    MEM32(esp + 0x18) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0036A837; /* jbe: below or equal (unsigned <=) */

loc_0036A7CB: ;
    ebp = MEM32(esp + 0x48);
    edi = MEM32(ebp + 0x10);
    edx = esp + 0x40;
    esi = ebx;
    goto loc_0036A7E0;

    /* nop */

loc_0036A7E0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(edx + -8) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0036A7FC; /* jne: not equal / not zero */

loc_0036A7EB: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(ebp + 0xF));
    eax = 1;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0036A807;

loc_0036A7FC: ;
    eax = edi;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0036A807: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(edx) = eax;
    MEM32(edx + -12) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0036A826; /* jne: not equal / not zero */

loc_0036A814: ;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0036A82E;

loc_0036A826: ;
    eax = edi;
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0036A82E: ;
    MEM32(edx + -4) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0036A7E0; /* jne: not equal / not zero */

loc_0036A837: ;
    esi = MEM32(esp + 0x18);

loc_0036A83B: ;
    eax = MEM32(esp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A84E; /* je: equal / zero */

loc_0036A843: ;
    ebp = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x58) = eax;
    goto loc_0036A875;

loc_0036A84E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ebp = esp + 0x2C;
    if (CMP_BE(_fa, _fb)) goto loc_0036A875; /* jbe: below or equal (unsigned <=) */

loc_0036A858: ;
    ecx = esi;
    /* nop */

loc_0036A860: ;
    edx = MEM32(ecx);
    MEM32(esp + eax * 8 + 0x2C) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + eax * 8 + 0x30) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036A860; /* jb: below (unsigned <) */

loc_0036A875: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A8A1; /* je: equal / zero */

loc_0036A87D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0036A8A1; /* jbe: below or equal (unsigned <=) */

loc_0036A881: ;
    eax = esi + 8;
    ecx = ebx;

loc_0036A886: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + -8) = edx;
    MEM32(eax + -4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0036A886; /* jne: not equal / not zero */

loc_0036A8A1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ecx = MEM32(0x37B648);
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x24) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0036A939; /* je: equal / zero */

loc_0036A8B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = ebx;
    edi = edi;

loc_0036A8C0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036A8CC; /* jb: below (unsigned <) */

loc_0036A8C7: ;
    PUSH32(esp, 0x0036A8CCu); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036A8CC: ;
    edi = MEM32(esi);
    ebx = MEM32(esi + -4);
    ecx = edi;
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(ebp + 4);
    ebp = MEM32(ebp);
    ebp = ebp & 0xFFFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = MEM32(esi + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = ebp << 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebp;
    ebp = MEM32(esi + 4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = ebp & 0xFFFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0xC4300;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x24);
    edi = edi ^ ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = MEM32(esp + 0x18);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x20) = eax;
    if ((_fa != 0)) goto loc_0036A8C0; /* jne: not equal / not zero */

loc_0036A939: ;
    eax = MEM32(esp + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036A794; /* jne: not equal / not zero */

loc_0036A945: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0036A956; /* je: equal / zero */

loc_0036A954: ;
    eax = ecx;

loc_0036A956: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x44);
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A977; /* je: equal / zero */

loc_0036A96B: ;
    ecx = MEM32(ecx + 0x2C);
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_0036A977: ;
    eax = MEM32(ecx + 0x2C);
    MEM32(edx + 8) = eax;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0036A990
 * Original: 0x0036A990 - 0x0036A9AA (26 bytes, 10 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036A990: ;
    eax = MEM32(0x37B648);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1A04);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036A9A6; /* je: equal / zero */

loc_0036A9A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036A9A6u); RECOMP_ABI_CALL(0x0036BD70u, sub_0036BD70); /* call 0x0036BD70 */

loc_0036A9A6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036A9B0
 * Original: 0x0036A9B0 - 0x0036A9CE (30 bytes, 13 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036A9B0: ;
    eax = MEM32(0x37B648);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1A08);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036A9C4; /* jne: not equal / not zero */

loc_0036A9C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036A9C4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036A9CAu); RECOMP_ABI_CALL(0x0036BD70u, sub_0036BD70); /* call 0x0036BD70 */

loc_0036A9CA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036A9D0
 * Original: 0x0036A9D0 - 0x0036ABF2 (546 bytes, 171 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036A9D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036A9D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    if (CMP_EQ(_fa, _fb)) goto loc_0036ABC3; /* je: equal / zero */

loc_0036A9E7: ;
    eax = MEM32(esi + 0x1A04);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1A14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1A14) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036AA01; /* jne: not equal / not zero */

loc_0036A9F5: ;
    ecx = MEM32(esi + 0x1A18);
    MEM32(esp + 8) = ecx;
    goto loc_0036AA07;

loc_0036AA01: ;
    MEM32(esp + 8) = eax;
    ecx = eax;

loc_0036AA07: ;
    edx = MEM32(ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0xC) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0036AA44; /* jne: not equal / not zero */

loc_0036AA2E: ;
    ecx = MEM32(ecx + 0xC);
    if (0x14) _cf = (int)(((ecx) >> ((0x14) - 1)) & 1);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 1;
    if (LO8(ecx)) _cf = (int)(((edi) >> (32 - (LO8(ecx)))) & 1);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x10);
    goto loc_0036AA4D;

loc_0036AA44: ;
    edi = eax;
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0036AA4D: ;
    ebp = MEM32(ebp + 8);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebp)) >> 32) & 1);
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0036AA75; /* jb: below (unsigned <) */

loc_0036AA56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0036AA6C; /* jne: not equal / not zero */

loc_0036AA5A: ;
    ecx = MEM32(ecx + 0xC);
    if (0x14) _cf = (int)(((ecx) >> ((0x14) - 1)) & 1);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 1;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0036AA75;

loc_0036AA6C: ;
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0036AA75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebp = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0036AA8F; /* jne: not equal / not zero */

loc_0036AA7B: ;
    ecx = MEM32(esp + 0x10);
    ecx = ZX8(MEM8(ecx + 0xF));
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 1;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0036AA9B;

loc_0036AA8F: ;
    edx = eax;
    if (0xC) _cf = (int)(((edx) >> ((0xC) - 1)) & 1);
    edx = edx >> 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0036AA9B: ;
    ecx = MEM32(esp + 0x20);
    ecx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(ecx)) >> 32) & 1);
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0036AAAC; /* jae: above or equal (unsigned >=) */

loc_0036AAA8: ;
    eax = ebx;
    goto loc_0036AACE;

loc_0036AAAC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0036AAC5; /* jne: not equal / not zero */

loc_0036AAB0: ;
    edx = MEM32(esp + 0x10);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx + 0xF));
    eax = 1;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0036AACE;

loc_0036AAC5: ;
    if (0xC) _cf = (int)(((eax) >> ((0xC) - 1)) & 1);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0036AACE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = ebp;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    edi = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0036AAE2; /* jge: greater or equal (signed >=) */

loc_0036AADC: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_0036AAE2: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x95C)); /* fmul dword ptr [esi + 0x95c] */
    ebx = MEM32(esi + 0x954);
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036AAFDu); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036AAFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0036AB24; /* jbe: below or equal (unsigned <=) */

loc_0036AB01: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = ebx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0036AB13; /* jge: greater or equal (signed >=) */

loc_0036AB0D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_0036AB13: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x95C)); /* fdiv dword ptr [esi + 0x95c] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036AB22u); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036AB22: ;
    ebp = eax;

loc_0036AB24: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = edi;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0036AB36; /* jge: greater or equal (signed >=) */

loc_0036AB30: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_0036AB36: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x960)); /* fmul dword ptr [esi + 0x960] */
    ebx = MEM32(esi + 0x958);
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036AB51u); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036AB51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0036AB78; /* jbe: below or equal (unsigned <=) */

loc_0036AB55: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = ebx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0036AB67; /* jge: greater or equal (signed >=) */

loc_0036AB61: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_0036AB67: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x960)); /* fdiv dword ptr [esi + 0x960] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036AB76u); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036AB76: ;
    edi = eax;

loc_0036AB78: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 0xEE0) = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(eax));
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(ecx));
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0xEEC) = edi;
    MEM32(esi + 0xEE4) = ecx;
    MEM32(esi + 0xEE8) = ebp;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0xEF0) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0xEF4) = edx;
    eax = MEM32(0x37B1A8);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(0x37B1A8) = eax;
    POP32(esp, ebx);

loc_0036ABC3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0036ABCEu); RECOMP_ABI_CALL(0x0036B0C0u, sub_0036B0C0); /* call 0x0036B0C0 */

loc_0036ABCE: ;
    PUSH32(esp, 0x0036ABD3u); RECOMP_ABI_CALL(0x0036CD30u, sub_0036CD30); /* call 0x0036CD30 */

loc_0036ABD3: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0036ABDF; /* jb: below (unsigned <) */

loc_0036ABDA: ;
    PUSH32(esp, 0x0036ABDFu); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036ABDF: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x0036ABE8u); RECOMP_ABI_CALL(0x0036D740u, sub_0036D740); /* call 0x0036D740 */

loc_0036ABE8: ;
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036AC00
 * Original: 0x0036AC00 - 0x0036AC24 (36 bytes, 12 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036AC00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x37B648);
    PUSH32(esp, esi);
    esi = ecx + eax * 4 + 0xF88;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036AC1E; /* je: equal / zero */

loc_0036AC18: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036AC1Eu); RECOMP_ABI_CALL(0x0036BD70u, sub_0036BD70); /* call 0x0036BD70 */

loc_0036AC1E: ;
    eax = MEM32(esi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036AC30
 * Original: 0x0036AC30 - 0x0036ADD4 (420 bytes, 124 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AC30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036AC30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x37B648);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(ebp + esi * 4 + 0xF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = ebp;
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0036AC73; /* je: equal / zero */

loc_0036AC53: ;
    ecx = MEM32(ebp + 0x2C);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = ecx;
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0036AC73; /* jne: not equal / not zero */

loc_0036AC6D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036AC73u); RECOMP_ABI_CALL(0x0036BC50u, sub_0036BC50); /* call 0x0036BC50 */

loc_0036AC73: ;
    ebx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + esi * 4 + 0xF88) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0036ACC9; /* jne: not equal / not zero */

loc_0036AC82: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036AC8F; /* jb: below (unsigned <) */

loc_0036AC8A: ;
    PUSH32(esp, 0x0036AC8Fu); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036AC8F: ;
    edx = esi;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x41B0C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x41B0C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    MEM32(eax + 4) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    MEM32(ebp + esi * 4 + 0xC) = 0x80000000u;
    eax = MEM32(0x37B1A8);
    POP32(esp, esi);
    eax = eax | 0x4800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    MEM32(0x37B1A8) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0036ACC9: ;
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx) = MEM32(ebx) + 0x80000;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036ACDC; /* jb: below (unsigned <) */

loc_0036ACD7: ;
    PUSH32(esp, 0x0036ACDCu); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036ACDC: ;
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = esi + 0x206C;
    edi = edi << 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax) = edi;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = eax + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_0036AD4B; /* je: equal / zero */

loc_0036ACFE: ;
    edx = ZX8(MEM8(ebx + 0x13));
    eax = ecx;
    ecx = ecx >> 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ecx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = ecx + 0x41B10;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi) = ebp;
    ebp = MEM32(esp + 0x10);
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x41B1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x41B1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = ecx;
    ecx = MEM32(esp + 0x1C);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0xC) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036AD4B: ;
    ebx = MEM32(ebx + 0xC);
    ecx = MEM32(ebp + esi * 4 + 0xC);
    eax = ebx;
    eax = eax & 0x20F4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036ADC7; /* je: equal / zero */

loc_0036AD5D: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036AD82; /* je: equal / zero */

loc_0036AD62: ;
    ebx = ebx & 0xFF00;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xFFFFDFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2A00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2A00 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036AD82; /* jb: below (unsigned <) */

loc_0036AD75: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3100 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0036AD82; /* ja: above (unsigned >) */

loc_0036AD7D: ;
    eax = eax | 0x40000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036AD82: ;
    MEM32(ebp + esi * 4 + 0xC) = eax;
    ecx = MEM32(0x37B1A8);
    eax = MEM32(esp + 0x14);
    ecx = ecx | 0x4000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x37B1A8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0036ADC7; /* jne: not equal / not zero */

loc_0036ADA0: ;
    eax = MEM32(ebp + esi * 4 + 0x774);
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x41B0C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x41B0C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = esi;
    MEM32(edi + 4) = eax;
    eax = MEM32(0x37B1A8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x37B1A8) = eax;

loc_0036ADC7: ;
    MEM32(ebp) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036ADE0
 * Original: 0x0036ADE0 - 0x0036AE6D (141 bytes, 48 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036ADE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036ADE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(esi + edi * 4 + 0xF98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036AE1F; /* je: equal / zero */

loc_0036ADF8: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi + edi * 4 + 0xF98);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0036AE1F; /* jne: not equal / not zero */

loc_0036AE19: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036AE1Fu); RECOMP_ABI_CALL(0x0036BC50u, sub_0036BC50); /* call 0x0036BC50 */

loc_0036AE1F: ;
    ebx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi + edi * 4 + 0xF98) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0036AE67; /* je: equal / zero */

loc_0036AE2E: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx);
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x80000;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp;
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebx) = ebp;
    ecx = MEM32(esi + 4);
    ebp = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036AE4E; /* jb: below (unsigned <) */

loc_0036AE49: ;
    PUSH32(esp, 0x0036AE4Eu); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036AE4E: ;
    ebx = MEM32(ebx + 4);
    edi = edi << 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x41B20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x41B20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    MEM32(eax + 4) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, ebp);

loc_0036AE67: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036AE70
 * Original: 0x0036AE70 - 0x0036AE9F (47 bytes, 13 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036AE70: ;
    eax = MEM32(0x37B648);
    eax = MEM32(eax + 0x934);
    ecx = MEM32(eax + 0x3240);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x3244)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x3244) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036AE8F; /* je: equal / zero */

loc_0036AE89: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0036AE8F: ;
    eax = MEM32(eax + 0x400700);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0036AEA0
 * Original: 0x0036AEA0 - 0x0036AECB (43 bytes, 14 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036AEA0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036AEB3; /* jb: below (unsigned <) */

loc_0036AEAE: ;
    PUSH32(esp, 0x0036AEB3u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036AEB3: ;
    MEM32(eax) = 0x817C8;
    ecx = 1;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036AED0
 * Original: 0x0036AED0 - 0x0036AF36 (102 bytes, 33 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036AED0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x37B648);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = esi;
    edi = edi >> 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(ebx + edi * 4 + 0x7D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036AF0D; /* jne: not equal / not zero */

loc_0036AEED: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0x0036AEFCu); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_0036AEFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + edi * 4 + 0x7D4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0036AF0D; /* jne: not equal / not zero */

loc_0036AF07: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0036AF0D: ;
    edx = MEM32(ebx + edi * 4 + 0x7D4);
    SET_LO8(ecx, MEM8(ebx + 8));
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    eax = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0036AF30; /* jne: not equal / not zero */

loc_0036AF29: ;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;

loc_0036AF30: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036AF40
 * Original: 0x0036AF40 - 0x0036AF9A (90 bytes, 29 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036AF40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036AF4Bu); RECOMP_ABI_CALL(0x0036AED0u, sub_0036AED0); /* call 0x0036AED0 */

loc_0036AF4B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036AF5A; /* jne: not equal / not zero */

loc_0036AF51: ;
    eax = 0x8007000Eu;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0036AF5A: ;
    PUSH32(esp, edi);
    edi = MEM32(0x37B648);
    ecx = MEM32(edi + 0x2C);
    MEM32(esi) = ecx;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036AF72; /* jb: below (unsigned <) */

loc_0036AF6D: ;
    PUSH32(esp, 0x0036AF72u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036AF72: ;
    MEM32(eax) = 0x817CC;
    esi = esi & 0xEFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = 0;
    esi = esi | 0x1000000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 8) = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036AFA0
 * Original: 0x0036AFA0 - 0x0036AFDC (60 bytes, 17 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036AFA0: ;
    eax = MEM32(0x37B648);
    edx = MEM32(eax + 0x1DE8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    _fa = (uint32_t)(MEM32(eax + 0x1DDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x1DDC), 0x1200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036AFD3; /* je: equal / zero */

loc_0036AFBE: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1DF8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = edx;
    esp += 8; return; /* ret 4 */

loc_0036AFD3: ;
    MEM32(ecx) = 3;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036AFE0
 * Original: 0x0036AFE0 - 0x0036B0B1 (209 bytes, 74 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036AFE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036AFE0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(0x37B648);
    PUSH32(esp, esi);
    MEM32(esp + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0036B072; /* je: equal / zero */

loc_0036AFF7: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036B072; /* je: equal / zero */

loc_0036AFFE: ;
    esi = MEM32(eax + 8);
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x14) = esi;
    esi = MEM32(eax + 0xC);
    MEM32(esp + 0x18) = esi;
    esi = MEM32(eax + 0x10);
    eax = MEM32(eax + 0x14);
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0036B01C; /* js: sign (negative) */

loc_0036B018: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036B01C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    ebp = edi + edi * 2;
    ebx = ebx + ebp * 8 + 0x1AC0;
    ebp = ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(ebp) = edx;
    MEM32(ebp + 4) = ecx;
    PUSH32(esp, eax);
    MEM32(ebp + 8) = ebx;
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    MEM32(ebp + 0xC) = ebx;
    PUSH32(esp, edx);
    MEM32(ebp + 0x10) = esi;
    PUSH32(esp, ebx);
    MEM32(ebp + 0x14) = eax;
    eax = MEM32(esp + 0x2C);
    ecx = ecx & 0xFFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x1C28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0036B068u); RECOMP_ABI_CALL(0x003735B6u, sub_003735B6); /* call 0x003735B6 */

loc_0036B068: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0036B072: ;
    eax = MEM32(esp + 0x28);
    ecx = eax + eax * 2;
    edx = MEM32(ebx + ecx * 8 + 0x1AD4);
    esi = ebx + ecx * 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebx + 0x1C28;
    PUSH32(esp, 0x0036B090u); RECOMP_ABI_CALL(0x003737A4u, sub_003737A4); /* call 0x003737A4 */

loc_0036B090: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1AC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1AC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036B0C0
 * Original: 0x0036B0C0 - 0x0036B3C0 (768 bytes, 210 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B0C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036B0C0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x37B648);
    eax = MEM32(ebp + 0x95C);
    ecx = MEM32(ebp + 0x960);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp);
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 4) (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_0036B0F0; /* jb: below (unsigned <) */

loc_0036B0E9: ;
    PUSH32(esp, 0x0036B0EEu); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036B0EE: ;
    edi = eax;

loc_0036B0F0: ;
    edx = MEM32(esp + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036B1AD; /* jne: not equal / not zero */

loc_0036B0FC: ;
    edx = MEM32(ebp + 0xEE0);
    fp_push((double)SMEM32(ebp + 0xEE0)); /* fild */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036B112; /* jge: greater or equal (signed >=) */

loc_0036B10C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_0036B112: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036B125u); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036B125: ;
    fp_push((double)SMEM32(ebp + 0xEE4)); /* fild */
    esi = eax;
    eax = MEM32(ebp + 0xEE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036B13D; /* jge: greater or equal (signed >=) */

loc_0036B137: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_0036B13D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036B150u); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036B150: ;
    ecx = MEM32(ebp + 0xEE8);
    fp_push((double)SMEM32(ebp + 0xEE8)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0036B16A; /* jge: greater or equal (signed >=) */

loc_0036B164: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_0036B16A: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036B17Du); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036B17D: ;
    edx = MEM32(ebp + 0xEEC);
    fp_push((double)SMEM32(ebp + 0xEEC)); /* fild */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ebx = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0036B195; /* jge: greater or equal (signed >=) */

loc_0036B18F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_0036B195: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036B1A8u); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036B1A8: ;
    goto loc_0036B22F;

loc_0036B1AD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036B285; /* jne: not equal / not zero */

loc_0036B1B6: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036B285; /* jne: not equal / not zero */

loc_0036B1C2: ;
    ebx = MEM32(esp + 0x30);
    fp_push((double)SMEM32(ebx)); /* fild */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036B1DBu); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036B1DB: ;
    fp_push((double)SMEM32(ebx + 4)); /* fild */
    PUSH32(esp, ecx);
    esi = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036B1F3u); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036B1F3: ;
    fp_push((double)SMEM32(ebx + 8)); /* fild */
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036B20Du); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036B20D: ;
    ebx = eax;
    eax = MEM32(esp + 0x30);
    fp_push((double)SMEM32(eax + 0xC)); /* fild */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036B22Bu); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036B22B: ;
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0036B22F: ;
    MEM32(edi) = 0x80200;
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(esp + 0x18);
    MEM32(edi + 4) = ebx;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 8) = eax;
    MEM32(edi + 0xC) = 0x402B4;
    MEM32(edi + 0x10) = 0;
    eax = MEM32(ebp + 0x954);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + 0x14) = 0x402C0;
    MEM32(edi + 0x18) = eax;
    eax = MEM32(ebp + 0x958);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + 0x1C) = 0x402E0;
    MEM32(edi + 0x20) = eax;
    ebx = edi + 0x24;
    goto loc_0036B37E;

loc_0036B285: ;
    ecx = MEM32(ebp + 0x954);
    eax = MEM32(ebp + 0x958);
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi) = 0x80200;
    MEM32(edi + 4) = ecx;
    ecx = MEM32(esp + 0x2C);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(edi + 8) = eax;
    MEM32(edi + 0xC) = 0x402B4;
    MEM32(edi + 0x10) = ecx;
    ebx = edi + 0x14;
    if (CMP_BE(_fa, _fb)) goto loc_0036B382; /* jbe: below or equal (unsigned <=) */

loc_0036B2BC: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x28);
    edx = ebx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = 0x402E0;
    edi = edx + eax + -16;
    MEM32(esp + 0x18) = ecx;

loc_0036B2D5: ;
    fp_push((double)SMEM32(edi + -4)); /* fild */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(edi + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036B2F6u); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036B2F6: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEM32(esp + 0x24) = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036B30Du); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036B30D: ;
    edx = MEM32(esp + 0x20);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esi + -32;
    MEM32(ebx) = ecx;
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 4) = eax;
    fp_push((double)SMEM32(edi)); /* fild */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(edi + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036B33Fu); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036B33F: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEM32(esp + 0x20) = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036B356u); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036B356: ;
    edx = MEM32(esp + 0x1C);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 8) = esi;
    MEM32(ebx + 0xC) = eax;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_0036B2D5; /* jne: not equal / not zero */

loc_0036B37E: ;
    edx = MEM32(esp + 0x28);

loc_0036B382: ;
    esi = MEM32(esp + 0x30);
    ecx = edx;
    edx = MEM32(esp + 0x2C);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp) = ebx;
    edi = ebp + 0x1B80;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    ecx = MEM32(esp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x1C00) = ecx;
    MEM32(ebp + 0x1C04) = edx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036B3C0
 * Original: 0x0036B3C0 - 0x0036B438 (120 bytes, 37 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036B3C0: ;
    edx = MEM32(esp + 0xC);
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036B3E8u); RECOMP_ABI_CALL(0x00371E80u, sub_00371E80); /* call 0x00371E80 */

loc_0036B3E8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x404);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x7FFFFFF);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x41815C); PUSH32(esp, 0x0036B400u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036B3FAu); } /* indirect call */
    }

loc_0036B400: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036B407; /* jne: not equal / not zero */

loc_0036B404: ;
    esp += 16; return; /* ret 12 */

loc_0036B407: ;
    edx = eax + 0x40;
    edx = edx & 0xFFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x81050001u;
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(esp + 8);
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 8) = 0;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036B440
 * Original: 0x0036B440 - 0x0036B56E (302 bytes, 111 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036B440: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(0x37B648);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x418220); PUSH32(esp, 0x0036B450u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036B44Au); } /* indirect call */
    }

loc_0036B450: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036B463; /* je: equal / zero */

loc_0036B454: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x418104); PUSH32(esp, 0x0036B45Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036B455u); } /* indirect call */
    }

loc_0036B45B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(0x41822C); PUSH32(esp, 0x0036B463u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036B45Du); } /* indirect call */
    }

loc_0036B463: ;
    eax = MEM32(ebp + 0x938);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036B477; /* jne: not equal / not zero */

loc_0036B46D: ;
    eax = 0x80004005u;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0036B477: ;
    PUSH32(esp, ebx);
    ebx = ebp + 0x1C28;
    MEM32(esp + 0xC) = ebx;

loc_0036B482: ;
    ecx = ebx;
    PUSH32(esp, 0x0036B489u); RECOMP_ABI_CALL(0x003723C0u, sub_003723C0); /* call 0x003723C0 */

loc_0036B489: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036B482; /* jne: not equal / not zero */

loc_0036B48D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x1A18);
    esi = ZX8(MEM8(edi + 0xD));
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0036B4B6; /* jne: not equal / not zero */

loc_0036B4A4: ;
    ecx = MEM32(edi + 0xC);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0036B4BF;

loc_0036B4B6: ;
    edx = eax;
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0036B4BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036B4D4; /* jne: not equal / not zero */

loc_0036B4C3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edi + 0xF));
    eax = 1;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0036B4DD;

loc_0036B4D4: ;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0036B4DD: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036B4E5u); RECOMP_ABI_CALL(0x0036B3C0u, sub_0036B3C0); /* call 0x0036B3C0 */

loc_0036B4E5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036B4F8; /* jne: not equal / not zero */

loc_0036B4EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0x80004005u;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0036B4F8: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036B505u); RECOMP_ABI_CALL(0x0036A660u, sub_0036A660); /* call 0x0036A660 */

loc_0036B505: ;
    PUSH32(esp, 0x0036B50Au); RECOMP_ABI_CALL(0x00370450u, sub_00370450); /* call 0x00370450 */

loc_0036B50A: ;
    ebx = MEM32(ebx);
    ebp = MEM32(ebp + 0x1C30);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036B514: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036B51Eu); RECOMP_ABI_CALL(0x0036A1D0u, sub_0036A1D0); /* call 0x0036A1D0 */

loc_0036B51E: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036B529u); RECOMP_ABI_CALL(0x003716C0u, sub_003716C0); /* call 0x003716C0 */

loc_0036B529: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x418228); PUSH32(esp, 0x0036B533u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036B52Du); } /* indirect call */
    }

loc_0036B533: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036B514; /* jne: not equal / not zero */

loc_0036B539: ;
    ecx = MEM32(esp + 0x14);
    MEM32(0x37A580) = eax;
    MEM32(0x37A57C) = eax;
    PUSH32(esp, 0x0036B54Cu); RECOMP_ABI_CALL(0x0037340Du, sub_0037340D); /* call 0x0037340D */

loc_0036B54C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x418160); PUSH32(esp, 0x0036B553u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036B54Du); } /* indirect call */
    }

loc_0036B553: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180F8); PUSH32(esp, 0x0036B55Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036B557u); } /* indirect call */
    }

loc_0036B55D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x41822C); PUSH32(esp, 0x0036B564u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036B55Eu); } /* indirect call */
    }

loc_0036B564: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0036B570
 * Original: 0x0036B570 - 0x0036B5B9 (73 bytes, 20 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0036B570: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x379170)); /* fadd dword ptr [0x379170] */
    esi = MEM32(0x37B648);
    ecx = esi;
    MEMF(esi + 0xEF8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x379170)); /* fadd dword ptr [0x379170] */
    MEMF(esi + 0xEFC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036B59Eu); RECOMP_ABI_CALL(0x0036EF10u, sub_0036EF10); /* call 0x0036EF10 */

loc_0036B59E: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036B5AA; /* jb: below (unsigned <) */

loc_0036B5A5: ;
    PUSH32(esp, 0x0036B5AAu); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036B5AA: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x0036B5B3u); RECOMP_ABI_CALL(0x0036D740u, sub_0036D740); /* call 0x0036D740 */

loc_0036B5B3: ;
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036B5C0
 * Original: 0x0036B5C0 - 0x0036B78F (463 bytes, 147 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B5C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036B5C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x37B648);
    edx = eax;
    edx = edx & 0xFF000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x89000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036B5EF; /* jne: not equal / not zero */

loc_0036B5DA: ;
    ecx = MEM32(esp + 8);
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax * 4 + 0x37B3B0);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0036B5EF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x8A000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036B62C; /* jne: not equal / not zero */

loc_0036B5F7: ;
    ecx = eax;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0036B626; /* jae: above or equal (unsigned >=) */

loc_0036B60C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0036B626; /* jae: above or equal (unsigned >=) */

loc_0036B611: ;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax * 4 + 0x37B1B0);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0036B626: ;
    eax = 0x80070057u;
    esp += 4; return; /* ret */

loc_0036B62C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x8B000000u (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0036B69E; /* jne: not equal / not zero */

loc_0036B636: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0036B7E1(); return; } /* jae: above or equal (unsigned >=) */

loc_0036B644: ;
    esi = MEM32(ecx + eax * 4 + 0xF98);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0036B7E1(); return; } /* je: equal / zero */

loc_0036B653: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036B659u); RECOMP_ABI_CALL(0x00371620u, sub_00371620); /* call 0x00371620 */

loc_0036B659: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_0036B7E1(); return; } /* jg: greater (signed >) */

loc_0036B662: ;
    edi = MEM32(esp + 0x10);
    ecx = 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x80);
    PUSH32(esp, esi);
    MEM32(edi) = edx;
    PUSH32(esp, 0x0036B681u); RECOMP_ABI_CALL(0x00371600u, sub_00371600); /* call 0x00371600 */

loc_0036B681: ;
    ecx = MEM32(edi);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036B69E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88000008u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x88000008u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0036B73D; /* ja: above (unsigned >) */

loc_0036B6A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88000005u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x88000005u (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0036B72B; /* jae: above or equal (unsigned >=) */

loc_0036B6B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88000002u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x88000002u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0036B6F7; /* ja: above (unsigned >) */

loc_0036B6B7: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0036B6E6; /* je: equal / zero */

loc_0036B6B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x87000001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x87000001u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036B6DC; /* je: equal / zero */

loc_0036B6C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88000001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x88000001u (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0036B7E1(); return; } /* jne: not equal / not zero */

loc_0036B6CB: ;
    ecx = MEM32(ecx + 0x1A18);
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(edx) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036B6DC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x0036B6E1u); RECOMP_ICALL_SAFE(0x00370010u, _icall_esp); /* manual call 0x00370010 */
    }

loc_0036B6E1: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036B6E6: ;
    eax = MEM32(ecx + 0x1A14);
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036B6F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88000003u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x88000003u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036B71A; /* je: equal / zero */

loc_0036B6FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88000004u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x88000004u (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0036B7E1(); return; } /* jne: not equal / not zero */

loc_0036B709: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx + 0x1A08);
    POP32(esp, edi);
    MEM32(eax) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036B71A: ;
    ecx = MEM32(ecx + 0x1A1C);
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(edx) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036B72B: ;
    eax = MEM32(ecx + eax * 4 + -536866956);
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036B73D: ;
    edx = eax + 0x77FFFFF7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0036B7E1(); return; } /* ja: above (unsigned >) */

loc_0036B74C: ;
    edx = ZX8(MEM8(edx + 0x36B800));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x36B7EC)); return; /* indirect tail jmp */

    edx = MEM32(esp + 0x10);
    eax = eax + eax * 2 + 0x800033D;
    ecx = ecx + eax * 8;
    eax = MEM32(ecx);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ecx + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = eax;
    eax = MEM32(ecx + 0x10);
    MEM32(edx + 0x10) = eax;
    ecx = MEM32(ecx + 0x14);
    POP32(esp, edi);
    MEM32(edx + 0x14) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036B75A
 * Original: 0x0036B75A - 0x0036B78F (53 bytes, 19 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B75A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036B75A: ;
    edx = MEM32(esp + 0x10);
    eax = eax + eax * 2 + 0x800033D;
    ecx = ecx + eax * 8;
    eax = MEM32(ecx);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ecx + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = eax;
    eax = MEM32(ecx + 0x10);
    MEM32(edx + 0x10) = eax;
    ecx = MEM32(ecx + 0x14);
    POP32(esp, edi);
    MEM32(edx + 0x14) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036B78F
 * Original: 0x0036B78F - 0x0036B7B2 (35 bytes, 11 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B78F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036B78F: ;
    eax = MEM32(ecx + 0x240C);
    edi = MEM32(esp + 0x10);
    edx = eax + eax * 2;
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx + ecx + 0x1E04;
    ecx = 0xC0;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036B7B2
 * Original: 0x0036B7B2 - 0x0036B7BF (13 bytes, 7 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B7B2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036B7B2: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036B7BF
 * Original: 0x0036B7BF - 0x0036B7D0 (17 bytes, 7 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B7BF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036B7BF: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx + 0x1A04);
    POP32(esp, edi);
    MEM32(eax) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036B7D0
 * Original: 0x0036B7D0 - 0x0036B7E1 (17 bytes, 7 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B7D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036B7D0: ;
    ecx = MEM32(ecx + 0x1C1C);
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(edx) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036B7E1
 * Original: 0x0036B7E1 - 0x0036B810 (47 bytes, 21 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B7E1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036B7E1: ;
    POP32(esp, edi);
    eax = 0x80070057u;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036B810
 * Original: 0x0036B810 - 0x0036BBAF (927 bytes, 264 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036B810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036B810: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x37B648);
    ebx = MEM32(ebp + 0x1A08);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x1A04);
    eax = ZX8(MEM8(edi + 0xD));
    SET_LO8(ecx, MEM8(eax + 0x3791F0));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x20) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0036B87B; /* je: equal / zero */

loc_0036B842: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036B849u); RECOMP_ABI_CALL(0x00371810u, sub_00371810); /* call 0x00371810 */

loc_0036B849: ;
    ecx = MEM32(ebp + 4);
    esi = eax;
    esi = esi & 0xFFFFFDFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ebp);
    esi = esi | 0x100;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036B86A; /* jb: below (unsigned <) */

loc_0036B865: ;
    PUSH32(esp, 0x0036B86Au); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036B86A: ;
    MEM32(eax) = 0x40208;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036B87B: ;
    edx = MEM32(esp + 0x54);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF0 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036B8E5; /* je: equal / zero */

loc_0036B884: ;
    eax = ZX8(MEM8(edi + 0xD));
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0036B8E5; /* ja: above (unsigned >) */

loc_0036B890: ;
    ecx = ZX8(MEM8(eax + 0x36BBBC));
    { uint32_t _jt = MEM32(ecx * 4 + 0x36BBB0); /* switch: 3 entries, 3 targets */
    if (_jt == 0x0036B89Eu) goto loc_0036B89E;
    if (_jt == 0x0036B8BBu) goto loc_0036B8BB;
    if (_jt == 0x0036B8E5u) goto loc_0036B8E5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0036B89E: ;
    ecx = MEM32(esp + 0x58);
    eax = ecx;
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx;
    eax = eax & 0x1F0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & 0xFC00;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0036B8D6;

loc_0036B8BB: ;
    ecx = MEM32(esp + 0x58);
    eax = ecx;
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx;
    eax = eax & 0x1F0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & 0xF800;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0036B8D6: ;
    ecx = ecx & 0xF8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x58) = eax;

loc_0036B8E5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036B8F6; /* jne: not equal / not zero */

loc_0036B8E9: ;
    edx = edx & 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x54) = edx;
    if ((_fa == 0)) goto loc_0036BBA5; /* je: equal / zero */

loc_0036B8F6: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036B9E3; /* je: equal / zero */

loc_0036B8FF: ;
    edx = ZX8(MEM8(ebx + 0xD));
    _fb = (uint32_t)(0x2A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x2A;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _jt = MEM32(edx * 4 + 0x36BBD8); /* switch: 8 entries, 4 targets */
    if (_jt == 0x0036B90Du) goto loc_0036B90D;
    if (_jt == 0x0036B93Fu) goto loc_0036B93F;
    if (_jt == 0x0036B971u) goto loc_0036B971;
    if (_jt == 0x0036B9A9u) goto loc_0036B9A9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0036B90D: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429508)); /* fmul dword ptr [0x429508] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036B920u); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036B920: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036B92C; /* jle: less or equal (signed <=) */

loc_0036B927: ;
    eax = 0xFFFF;

loc_0036B92C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = ecx;
    goto loc_0036B9E3;

loc_0036B93F: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x418A78)); /* fmul dword ptr [0x418a78] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036B952u); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036B952: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0036B95E; /* jle: less or equal (signed <=) */

loc_0036B959: ;
    eax = 0xFFFFFF;

loc_0036B95E: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x10) = edx;
    goto loc_0036B9E3;

loc_0036B971: ;
    fp_push(MEMF(0x429350)); /* fld float */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0036B9DF; /* jnp: not parity */

loc_0036B984: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x418A70)); /* fmul qword ptr [0x418a70] */
    MEMD(esp + 0x30) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x34);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = eax;
    goto loc_0036B9E3;

loc_0036B9A9: ;
    fp_push(MEMF(0x429350)); /* fld float */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0036B9DF; /* jnp: not parity */

loc_0036B9BC: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x418A68)); /* fmul qword ptr [0x418a68] */
    MEMD(esp + 0x30) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0xF8000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF8000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x10) = eax;
    goto loc_0036B9E3;

loc_0036B9DF: ;
    MEM32(esp + 0x10) = esi;

loc_0036B9E3: ;
    ebx = MEM32(ebp + 0xEE0);
    edi = MEM32(ebp + 0xEE4);
    edx = MEM32(ebp + 0xEE8);
    esi = MEM32(ebp + 0xEEC);
    eax = MEM32(esp + 0x4C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x2C) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0036BA39; /* jne: not equal / not zero */

loc_0036BA17: ;
    ecx = esp + 0x38;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = edi;
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = esi;
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x4C) = 1;
    goto loc_0036BA43;

loc_0036BA39: ;
    ecx = MEM32(esp + 0x50);
    goto loc_0036BA43;

loc_0036BA3F: ;
    edi = MEM32(esp + 0x24);

loc_0036BA43: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_0036BA51; /* jg: greater (signed >) */

loc_0036BA4D: ;
    MEM32(esp + 0x14) = ebx;

loc_0036BA51: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x5C) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_0036BA60; /* jg: greater (signed >) */

loc_0036BA5C: ;
    MEM32(esp + 0x5C) = edi;

loc_0036BA60: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    edi = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0036BA6B; /* jl: less (signed <) */

loc_0036BA69: ;
    edi = edx;

loc_0036BA6B: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0036BA78; /* jl: less (signed <) */

loc_0036BA76: ;
    eax = esi;

loc_0036BA78: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), edi (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0036BB6B; /* jge: greater or equal (signed >=) */

loc_0036BA86: ;
    _fa = (uint32_t)(MEM32(esp + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x5C), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036BB6B; /* jge: greater or equal (signed >=) */

loc_0036BA90: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x95C)); /* fmul dword ptr [ebp + 0x95c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036BAA9u); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036BAA9: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    PUSH32(esp, ecx);
    ebx = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x95C)); /* fmul dword ptr [ebp + 0x95c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036BAC4u); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036BAC4: ;
    fp_push((double)SMEM32(esp + 0x5C)); /* fild */
    PUSH32(esp, ecx);
    esi = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x960)); /* fmul dword ptr [ebp + 0x960] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036BADFu); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036BADF: ;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    PUSH32(esp, ecx);
    MEM32(esp + 0x60) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x960)); /* fmul dword ptr [ebp + 0x960] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036BAFCu); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036BAFC: ;
    ecx = MEM32(ebp + 4);
    edi = eax;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036BB0D; /* jb: below (unsigned <) */

loc_0036BB08: ;
    PUSH32(esp, 0x0036BB0Du); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036BB0D: ;
    edx = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x10);
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x10000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi | ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = MEM32(esp + 0x28);
    MEM32(eax) = 0x81D98;
    MEM32(eax + 4) = esi;
    esi = MEM32(esp + 0x5C);
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x10000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x58);
    edi = edi | esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(esp + 0x2C);
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = 0xC1D8C;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x50);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;

loc_0036BB6B: ;
    eax = MEM32(esp + 0x4C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x4C) = eax;
    if ((_fa != 0)) goto loc_0036BA3F; /* jne: not equal / not zero */

loc_0036BB81: ;
    esi = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036BBA5; /* je: equal / zero */

loc_0036BB89: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036BB96; /* jb: below (unsigned <) */

loc_0036BB91: ;
    PUSH32(esp, 0x0036BB96u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036BB96: ;
    MEM32(eax) = 0x40208;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;

loc_0036BBA5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036BC00
 * Original: 0x0036BC00 - 0x0036BC4B (75 bytes, 31 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036BC00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036BC00: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37A584);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = 0x37A584;
    if (CMP_EQ(_fa, _fb)) goto loc_0036BC46; /* je: equal / zero */

loc_0036BC11: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);

loc_0036BC16: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036BC3D; /* jne: not equal / not zero */

loc_0036BC1B: ;
    eax = MEM32(esi);
    MEM32(edi) = eax;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036BC2E; /* je: equal / zero */

loc_0036BC25: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x0036BC2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036BC2Bu); } /* indirect call */
    }

loc_0036BC2E: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036BC39u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_0036BC39: ;
    esi = MEM32(edi);
    goto loc_0036BC41;

loc_0036BC3D: ;
    edi = esi;
    esi = MEM32(esi);

loc_0036BC41: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036BC16; /* jne: not equal / not zero */

loc_0036BC45: ;
    POP32(esp, ebp);

loc_0036BC46: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036BC50
 * Original: 0x0036BC50 - 0x0036BCE1 (145 bytes, 46 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036BC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036BC50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    esi = eax;
    esi = esi & 0x70000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036BC6C; /* jne: not equal / not zero */

loc_0036BC68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_0036BC72; /* jns: not sign (positive) */

loc_0036BC6C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036BC72u); RECOMP_ABI_CALL(0x00370470u, sub_00370470); /* call 0x00370470 */

loc_0036BC72: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036BC78u); RECOMP_ABI_CALL(0x0036BC00u, sub_0036BC00); /* call 0x0036BC00 */

loc_0036BC78: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036BC95; /* jne: not equal / not zero */

loc_0036BC80: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_0036BCD1; /* jns: not sign (positive) */

loc_0036BC85: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, 0xA1800000u);
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    goto loc_0036BCCC;

loc_0036BC95: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036BCAD; /* jne: not equal / not zero */

loc_0036BC9D: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0036BCD1; /* js: sign (negative) */

loc_0036BCA2: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, ecx);
    goto loc_0036BCCC;

loc_0036BCAD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036BCD1; /* je: equal / zero */

loc_0036BCB5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x60000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036BCD1; /* je: equal / zero */

loc_0036BCBD: ;
    edx = MEM32(edi + 4);
    PUSH32(esp, 0xA1800000u);
    edx = edx | 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);

loc_0036BCCC: ;
    PUSH32(esp, 0x0036BCD1u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_0036BCD1: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036BCDCu); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_0036BCDC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036BCF0
 * Original: 0x0036BCF0 - 0x0036BD25 (53 bytes, 16 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0036BCF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036BCF0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x780000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036BD18; /* jne: not equal / not zero */

loc_0036BCFD: ;
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036BD20; /* jne: not equal / not zero */

loc_0036BD09: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036BD20; /* je: equal / zero */

loc_0036BD10: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x780000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036BD20; /* je: equal / zero */

loc_0036BD18: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_0036BD20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036BD30
 * Original: 0x0036BD30 - 0x0036BD62 (50 bytes, 13 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036BD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036BD30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x780000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036BD59; /* jne: not equal / not zero */

loc_0036BD3E: ;
    ecx = ecx & 0x70000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036BD59; /* jne: not equal / not zero */

loc_0036BD4C: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036BD59; /* je: equal / zero */

loc_0036BD53: ;
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + 0x80000;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036BD59: ;
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + 0x80000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036BD70
 * Original: 0x0036BD70 - 0x0036BDA7 (55 bytes, 20 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036BD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036BD70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036BD97; /* jne: not equal / not zero */

loc_0036BD7E: ;
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036BD97; /* jne: not equal / not zero */

loc_0036BD8A: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036BD97; /* je: equal / zero */

loc_0036BD91: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036BD97u); RECOMP_ABI_CALL(0x0036BD70u, sub_0036BD70); /* call 0x0036BD70 */

loc_0036BD97: ;
    edx = MEM32(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    MEM32(esi) = edx;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036BDB0
 * Original: 0x0036BDB0 - 0x0036BDFE (78 bytes, 28 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036BDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036BDB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = eax;
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036BDF2; /* jne: not equal / not zero */

loc_0036BDC4: ;
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036BDDD; /* jne: not equal / not zero */

loc_0036BDD0: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036BDDD; /* je: equal / zero */

loc_0036BDD7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036BDDDu); RECOMP_ABI_CALL(0x0036BDB0u, sub_0036BDB0); /* call 0x0036BDB0 */

loc_0036BDDD: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x780000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036BDF2; /* jne: not equal / not zero */

loc_0036BDE6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036BDECu); RECOMP_ABI_CALL(0x0036BC50u, sub_0036BC50); /* call 0x0036BC50 */

loc_0036BDEC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0036BDF2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036BE00
 * Original: 0x0036BE00 - 0x0036BE8A (138 bytes, 43 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036BE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0036BE00: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0036BE3A; /* ja: above (unsigned >) */

loc_0036BE12: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0036BE32; /* je: equal / zero */

loc_0036BE14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0036BE2A; /* je: equal / zero */

loc_0036BE18: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10000 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(7)) >> 32) & 1);
    ecx = ecx + 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    esp += 8; return; /* ret 4 */

loc_0036BE2A: ;
    eax = 6;
    esp += 8; return; /* ret 4 */

loc_0036BE32: ;
    eax = 9;
    esp += 8; return; /* ret 4 */

loc_0036BE3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0036BE65; /* je: equal / zero */

loc_0036BE41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0036BE50; /* je: equal / zero */

loc_0036BE48: ;
    eax = 0xA;
    esp += 8; return; /* ret 4 */

loc_0036BE50: ;
    edx = MEM32(ecx + 0xC);
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xF0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_A(_fa, _fb)) ? 1 : 0); /* seta */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_0036BE65: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0036BE74; /* je: equal / zero */

loc_0036BE6C: ;
    eax = 5;
    esp += 8; return; /* ret 4 */

loc_0036BE74: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036BE90
 * Original: 0x0036BE90 - 0x0036BEB8 (40 bytes, 11 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036BE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036BE90: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    edx = edx & 0x70000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036BEB2; /* je: equal / zero */

loc_0036BEAD: ;
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0036BEB2: ;
    MEM32(ecx + 4) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036BEC0
 * Original: 0x0036BEC0 - 0x0036BF22 (98 bytes, 32 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036BEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036BEC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = eax;
    ecx = ecx & 0x780000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036BF17; /* jne: not equal / not zero */

loc_0036BED7: ;
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036BF04; /* jne: not equal / not zero */

loc_0036BEE3: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036BF04; /* je: equal / zero */

loc_0036BEEA: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0036BF04; /* jne: not equal / not zero */

loc_0036BEFE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036BF04u); RECOMP_ABI_CALL(0x0036BC50u, sub_0036BC50); /* call 0x0036BC50 */

loc_0036BF04: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036BF17; /* jne: not equal / not zero */

loc_0036BF0D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036BF13u); RECOMP_ABI_CALL(0x0036BC50u, sub_0036BC50); /* call 0x0036BC50 */

loc_0036BF13: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0036BF17: ;
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFF80000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036BF30
 * Original: 0x0036BF30 - 0x0036C00F (223 bytes, 57 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036BF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036BF30: ;
    eax = MEM32(0x37B648);
    ecx = MEM32(eax + 0x784);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 0x798);
    MEM32(edx + 4) = eax;
    ecx = MEM32(0x37B260);
    MEM32(edx + 8) = ecx;
    ecx = edx + 0x14;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    goto loc_0036BF60;

    /* nop */
    edi = edi;

loc_0036BF60: ;
    esi = MEM32(eax + 0x3792B8);
    esi = MEM32(esi * 4 + 0x37B3B0);
    MEM32(ecx + -4) = esi;
    esi = MEM32(eax + 0x3792C0);
    esi = MEM32(esi * 4 + 0x37B3B0);
    MEM32(ecx) = esi;
    esi = MEM32(eax + 0x3792C8);
    esi = MEM32(esi * 4 + 0x37B3B0);
    MEM32(ecx + 4) = esi;
    esi = MEM32(eax + 0x3792D0);
    esi = MEM32(esi * 4 + 0x37B3B0);
    MEM32(ecx + 8) = esi;
    esi = MEM32(eax + 0x3792D8);
    esi = MEM32(esi * 4 + 0x37B3B0);
    MEM32(ecx + 0xC) = esi;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036BF60; /* jb: below (unsigned <) */

loc_0036BFBC: ;
    ecx = edx + 0x60;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036BFC1: ;
    esi = MEM32(eax + 0x379260);
    esi = MEM32(esi * 4 + 0x37B1B0);
    MEM32(ecx) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x58 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036BFC1; /* jb: below (unsigned <) */

loc_0036BFDB: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C00D; /* je: equal / zero */

loc_0036BFE0: ;
    ecx = edx + 0x8C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036BFF0;

    /* nop */

loc_0036BFF0: ;
    esi = MEM32(eax + 0x37B3B0);
    MEM32(ecx) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036BFF0; /* jb: below (unsigned <) */

loc_0036C005: ;
    eax = MEM32(0x37B5D0);
    MEM32(edx + 0xC) = eax;

loc_0036C00D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036C010
 * Original: 0x0036C010 - 0x0036C12E (286 bytes, 92 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036C010: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x1C34);
    ecx = MEM32(edi + 0x1C28);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x1C2C);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0x1C30);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0x0036C03Bu); RECOMP_ABI_CALL(0x00370450u, sub_00370450); /* call 0x00370450 */

loc_0036C03B: ;
    _fa = (uint32_t)(MEM32(edi + 0x1DDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x1DDC), 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036C049; /* je: equal / zero */

loc_0036C047: ;
    ebx = ebx >> 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0036C049: ;
    edx = MEM32(edi + 0x1A18);
    eax = MEM32(edx + 4);
    MEM32(esp + 0x10) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036C058: ;
    PUSH32(esp, 0x0036C05Du); RECOMP_ABI_CALL(0x0036A050u, sub_0036A050); /* call 0x0036A050 */

loc_0036C05D: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x418228); PUSH32(esp, 0x0036C075u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C06Fu); } /* indirect call */
    }

loc_0036C075: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036C058; /* jne: not equal / not zero */

loc_0036C07B: ;
    _fa = (uint32_t)(MEM32(edi + 0x1DDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x1DDC), 0x1000000 (32-bit) */
    ebx = MEM32(0x418224);
    if (TEST_Z(_fa, _fb)) goto loc_0036C09E; /* je: equal / zero */

loc_0036C08D: ;
    ecx = MEM32(edi + 0x1C28);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xB);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0036C09Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C09Au); } /* indirect call */
    }

loc_0036C09C: ;
    goto loc_0036C0A0;

loc_0036C09E: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036C0A0: ;
    eax = MEM32(edi + 0x1C28);
    edx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    esi = edi + 0x1C28;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0036C0B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C0B5u); } /* indirect call */
    }

loc_0036C0B7: ;
    eax = MEM32(edi + 0x1DE8);
    edx = MEM32(esp + 0x18);
    ecx = eax;
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036C0D1; /* jne: not equal / not zero */

loc_0036C0CA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x1DE8) = eax;

loc_0036C0D1: ;
    ecx = esi;
    MEM32(0x37A580) = ebp;
    MEM32(0x37A57C) = ebp;
    PUSH32(esp, 0x0036C0E4u); RECOMP_ABI_CALL(0x0037340Du, sub_0037340D); /* call 0x0037340D */

loc_0036C0E4: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x418220); PUSH32(esp, 0x0036C0EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C0E4u); } /* indirect call */
    }

loc_0036C0EA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C116; /* je: equal / zero */

loc_0036C0F0: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036C0FBu); RECOMP_ABI_CALL(0x00015100u, sub_00015100); /* call 0x00015100 */

loc_0036C0FB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180F8); PUSH32(esp, 0x0036C104u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C0FEu); } /* indirect call */
    }

loc_0036C104: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036C10Fu); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_0036C10F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x41822C); PUSH32(esp, 0x0036C116u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C110u); } /* indirect call */
    }

loc_0036C116: ;
    edx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 9);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0036C121u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036C11Fu); } /* indirect call */
    }

loc_0036C121: ;
    POP32(esp, esi);
    MEM32(edi + 0x1DE0) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0036C130
 * Original: 0x0036C130 - 0x0036C247 (279 bytes, 75 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C130: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x37B648);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0036C140: ;
    eax = MEM32(esi + 0x3792B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C (32-bit) */
    ecx = MEM32(esi + 0x3792BC);
    if (CMP_GE(_fas, _fbs)) goto loc_0036C15D; /* jge: greater or equal (signed >=) */

loc_0036C151: ;
    edx = MEM32(0x37B648);
    _fa = (uint32_t)(MEM8(edx + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 8), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036C166; /* jne: not equal / not zero */

loc_0036C15D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 4 + 0x37B3B0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax * 4 + 0x37B3B0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C16D; /* je: equal / zero */

loc_0036C166: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036C16Du); RECOMP_ABI_CALL(0x0036CBA0u, sub_0036CBA0); /* call 0x0036CBA0 */

loc_0036C16D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036C140; /* jb: below (unsigned <) */

loc_0036C178: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0036C180: ;
    ecx = MEM32(esi + 0x379260);
    eax = MEM32(esi + 0x379264);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 4 + 0x37B1B0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx * 4 + 0x37B1B0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C19E; /* je: equal / zero */

loc_0036C195: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0036C19Eu); RECOMP_ABI_CALL(0x0036D5E0u, sub_0036D5E0); /* call 0x0036D5E0 */

loc_0036C19E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x58 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036C180; /* jb: below (unsigned <) */

loc_0036C1A6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0036C1ADu); RECOMP_ABI_CALL(0x00375480u, sub_00375480); /* call 0x00375480 */

loc_0036C1AD: ;
    esi = MEM32(0x37B5A8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37B1C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x37B1C0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C1C5; /* je: equal / zero */

loc_0036C1BB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0036C1C5u); RECOMP_ABI_CALL(0x0036D5E0u, sub_0036D5E0); /* call 0x0036D5E0 */

loc_0036C1C5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37B1BC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x37B1BC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C1D7; /* je: equal / zero */

loc_0036C1CD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0036C1D7u); RECOMP_ABI_CALL(0x0036D5E0u, sub_0036D5E0); /* call 0x0036D5E0 */

loc_0036C1D7: ;
    _fa = (uint32_t)(MEM32(0x37B260)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37B260), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C1EB; /* je: equal / zero */

loc_0036C1E0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0036C1EBu); RECOMP_ABI_CALL(0x0036D5E0u, sub_0036D5E0); /* call 0x0036D5E0 */

loc_0036C1EB: ;
    PUSH32(esp, 0x0036C1F0u); RECOMP_ABI_CALL(0x00375090u, sub_00375090); /* call 0x00375090 */

loc_0036C1F0: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x379358);
    PUSH32(esp, 0x0036C1FCu); RECOMP_ABI_CALL(0x0036EEB0u, sub_0036EEB0); /* call 0x0036EEB0 */

loc_0036C1FC: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036C208; /* jb: below (unsigned <) */

loc_0036C203: ;
    PUSH32(esp, 0x0036C208u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036C208: ;
    MEM32(eax) = 0x81E94;
    MEM32(eax + 4) = 6;
    MEM32(eax + 8) = 0;
    MEM32(eax + 0xC) = 0x41EA0;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 0x14) = 0x80394;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x1C) = 0x4B7FFFFF;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036C250
 * Original: 0x0036C250 - 0x0036C3CD (381 bytes, 126 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036C250: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x0036C26Bu); RECOMP_ABI_CALL(0x00375480u, sub_00375480); /* call 0x00375480 */

loc_0036C26B: ;
    ebx = MEM32(esi + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x37B260);
    ebx = ebx & 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C288; /* je: equal / zero */

loc_0036C27E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0036C288u); RECOMP_ABI_CALL(0x0036D5E0u, sub_0036D5E0); /* call 0x0036D5E0 */

loc_0036C288: ;
    edi = ebp + 0x10;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0036C290: ;
    eax = MEM32(esi + 0x3792B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C (32-bit) */
    ecx = MEM32(edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0036C2A9; /* jge: greater or equal (signed >=) */

loc_0036C29D: ;
    edx = MEM32(0x37B648);
    _fa = (uint32_t)(MEM8(edx + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 8), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036C2B9; /* jne: not equal / not zero */

loc_0036C2A9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 4 + 0x37B3B0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax * 4 + 0x37B3B0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C2B9; /* je: equal / zero */

loc_0036C2B2: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036C2B9u); RECOMP_ABI_CALL(0x0036CBA0u, sub_0036CBA0); /* call 0x0036CBA0 */

loc_0036C2B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036C290; /* jb: below (unsigned <) */

loc_0036C2C7: ;
    edi = ebp + 0x60;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0036C2D0: ;
    ecx = MEM32(esi + 0x379260);
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 4 + 0x37B1B0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx * 4 + 0x37B1B0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C2EA; /* je: equal / zero */

loc_0036C2E1: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0036C2EAu); RECOMP_ABI_CALL(0x0036D5E0u, sub_0036D5E0); /* call 0x0036D5E0 */

loc_0036C2EA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x58 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036C2D0; /* jb: below (unsigned <) */

loc_0036C2F5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036C359; /* jne: not equal / not zero */

loc_0036C2F9: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C345; /* je: equal / zero */

loc_0036C2FF: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + 0x8C;

loc_0036C307: ;
    eax = MEM32(ebp);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036C325; /* jne: not equal / not zero */

loc_0036C314: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036C325; /* jne: not equal / not zero */

loc_0036C31B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036C325; /* jb: below (unsigned <) */

loc_0036C320: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 9 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0036C32E; /* jbe: below or equal (unsigned <=) */

loc_0036C325: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036C32Eu); RECOMP_ABI_CALL(0x0036CBA0u, sub_0036CBA0); /* call 0x0036CBA0 */

loc_0036C32E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x39 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036C307; /* jb: below (unsigned <) */

loc_0036C337: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x88);
    PUSH32(esp, 0x0036C345u); RECOMP_ABI_CALL(0x0036CBA0u, sub_0036CBA0); /* call 0x0036CBA0 */

loc_0036C345: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 8);
    eax = esi + 0x10A8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036C357u); RECOMP_ABI_CALL(0x0036EEB0u, sub_0036EEB0); /* call 0x0036EEB0 */

loc_0036C357: ;
    goto loc_0036C35D;

loc_0036C359: ;
    esi = MEM32(esp + 0x14);

loc_0036C35D: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036C369; /* jb: below (unsigned <) */

loc_0036C364: ;
    PUSH32(esp, 0x0036C369u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036C369: ;
    ecx = MEM32(esi + 0x794);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x12 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036C397; /* jne: not equal / not zero */

loc_0036C377: ;
    MEM32(eax) = 0x41E94;
    edx = eax + 8;
    ecx = esi;
    MEM32(eax + 4) = 4;
    PUSH32(esp, 0x0036C38Eu); RECOMP_ABI_CALL(0x0036D740u, sub_0036D740); /* call 0x0036D740 */

loc_0036C38E: ;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0036C397: ;
    MEM32(eax) = 0x81E94;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = 6;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esi + 0x79C);
    MEM32(eax + 0xC) = 0x41EA0;
    MEM32(eax + 0x10) = ecx;
    edx = eax + 0x14;
    ecx = esi;
    PUSH32(esp, 0x0036C3C4u); RECOMP_ABI_CALL(0x0036D740u, sub_0036D740); /* call 0x0036D740 */

loc_0036C3C4: ;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036C3D0
 * Original: 0x0036C3D0 - 0x0036C45A (138 bytes, 45 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C3D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x1A04);
    PUSH32(esp, eax);
    MEM32(edi + 0x1A90) = eax;
    PUSH32(esp, 0x0036C3E7u); RECOMP_ABI_CALL(0x0036BD70u, sub_0036BD70); /* call 0x0036BD70 */

loc_0036C3E7: ;
    eax = MEM32(edi + 0x1A08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x1A94) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0036C3FD; /* je: equal / zero */

loc_0036C3F7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036C3FDu); RECOMP_ABI_CALL(0x0036BD70u, sub_0036BD70); /* call 0x0036BD70 */

loc_0036C3FD: ;
    esi = edi + 0x1A98;
    ebx = 4;
    goto loc_0036C410;

    /* nop */

loc_0036C410: ;
    eax = MEM32(esi + -2832);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0036C422; /* je: equal / zero */

loc_0036C41C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036C422u); RECOMP_ABI_CALL(0x0036BD70u, sub_0036BD70); /* call 0x0036BD70 */

loc_0036C422: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0036C410; /* jne: not equal / not zero */

loc_0036C428: ;
    eax = edi + 0xEE0;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(0x1AA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1AA8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edi + 4) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(edi + 8) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(edi + 0xC) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x14) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036C460
 * Original: 0x0036C460 - 0x0036C4C8 (104 bytes, 37 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C460: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x1A94);
    ecx = MEM32(esi + 0x1A90);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036C477u); RECOMP_ABI_CALL(0x0036A390u, sub_0036A390); /* call 0x0036A390 */

loc_0036C477: ;
    edx = esi + 0x1AA8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036C483u); RECOMP_ABI_CALL(0x0036A9D0u, sub_0036A9D0); /* call 0x0036A9D0 */

loc_0036C483: ;
    eax = MEM32(esi + 0x1A90);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036C48Fu); RECOMP_ABI_CALL(0x0036BDB0u, sub_0036BDB0); /* call 0x0036BDB0 */

loc_0036C48F: ;
    eax = MEM32(esi + 0x1A94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C49F; /* je: equal / zero */

loc_0036C499: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036C49Fu); RECOMP_ABI_CALL(0x0036BDB0u, sub_0036BDB0); /* call 0x0036BDB0 */

loc_0036C49F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1A98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1A98;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036C4A7: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036C4B0u); RECOMP_ABI_CALL(0x0036AC30u, sub_0036AC30); /* call 0x0036AC30 */

loc_0036C4B0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C4BC; /* je: equal / zero */

loc_0036C4B6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036C4BCu); RECOMP_ABI_CALL(0x0036BDB0u, sub_0036BDB0); /* call 0x0036BDB0 */

loc_0036C4BC: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036C4A7; /* jb: below (unsigned <) */

loc_0036C4C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036C4D0
 * Original: 0x0036C4D0 - 0x0036C64B (379 bytes, 117 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C4D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036C4D0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(eax + 0x970);
    ecx = MEM32(eax + 0x96C);
    PUSH32(esp, ebx);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x1A04);
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0036C50A; /* jne: not equal / not zero */

loc_0036C4F8: ;
    ecx = MEM32(edx + 0xC);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0036C512;

loc_0036C50A: ;
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = eax;

loc_0036C512: ;
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036C52A; /* jne: not equal / not zero */

loc_0036C519: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx + 0xF));
    esi = 1;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0036C535;

loc_0036C52A: ;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = eax;

loc_0036C535: ;
    eax = MEM32(0x37B1C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0036C554; /* je: equal / zero */

loc_0036C54F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036C58A; /* jne: not equal / not zero */

loc_0036C554: ;
    fp_push(MEMF(0x4293F8)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0036C56F; /* jp: parity */

loc_0036C567: ;
    MEM32(esp + 0x10) = 0x3F000000;

loc_0036C56F: ;
    fp_push(MEMF(0x4293F8)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0036C58A; /* jp: parity */

loc_0036C582: ;
    MEM32(esp + 0x14) = 0x3F000000;

loc_0036C58A: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x0036C591u); RECOMP_ABI_CALL(0x00375EA0u, sub_00375EA0); /* call 0x00375EA0 */

loc_0036C591: ;
    ebx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 9);
    PUSH32(esp, 0x0036C5A2u); RECOMP_ABI_CALL(0x00375DB0u, sub_00375DB0); /* call 0x00375DB0 */

loc_0036C5A2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0036C5ADu); RECOMP_ABI_CALL(0x00375DB0u, sub_00375DB0); /* call 0x00375DB0 */

loc_0036C5AD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x1C) = edi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0036C5BF; /* jge: greater or equal (signed >=) */

loc_0036C5B9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_0036C5BF: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429448)); /* fmul dword ptr [0x429448] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 9);
    PUSH32(esp, 0x0036C5E1u); RECOMP_ABI_CALL(0x00375DB0u, sub_00375DB0); /* call 0x00375DB0 */

loc_0036C5E1: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429448)); /* fmul dword ptr [0x429448] */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, 0x0036C5F8u); RECOMP_ABI_CALL(0x00375DB0u, sub_00375DB0); /* call 0x00375DB0 */

loc_0036C5F8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0036C60A; /* jge: greater or equal (signed >=) */

loc_0036C604: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_0036C60A: ;
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429448)); /* fmul dword ptr [0x429448] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    PUSH32(esp, 9);
    PUSH32(esp, 0x0036C628u); RECOMP_ABI_CALL(0x00375DB0u, sub_00375DB0); /* call 0x00375DB0 */

loc_0036C628: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429448)); /* fmul dword ptr [0x429448] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0036C63Fu); RECOMP_ABI_CALL(0x00375DB0u, sub_00375DB0); /* call 0x00375DB0 */

loc_0036C63F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00375EE0(); return; /* tail jmp 0x00375EE0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036C650
 * Original: 0x0036C650 - 0x0036C835 (485 bytes, 144 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036C650: ;
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x170;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x178));
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    PUSH32(esp, edi);
    edi = 0x40100;
    if (TEST_Z(_fa, _fb)) goto loc_0036C7A1; /* je: equal / zero */

loc_0036C670: ;
    _fa = (uint32_t)(MEM32(esi + 0x1A10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036C6A9; /* jne: not equal / not zero */

loc_0036C679: ;
    eax = MEM32(esi + 0x1A18);
    ecx = MEM32(esi + 0x1A1C);
    ebx = MEM32(eax + 4);
    edx = MEM32(ecx + 4);
    edi = MEM32(ecx + 8);
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(eax + 8);
    MEM32(ecx + 8) = ebx;
    SET_LO8(ebx, MEM8(esp + 0x180));
    MEM32(eax + 8) = edi;
    MEM32(eax + 4) = edx;
    edi = 0x40100;

loc_0036C6A9: ;
    eax = esi;
    PUSH32(esp, 0x0036C6B0u); RECOMP_ABI_CALL(0x0036C3D0u, sub_0036C3D0); /* call 0x0036C3D0 */

loc_0036C6B0: ;
    eax = MEM32(esi + 0x1A18);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036C6BDu); RECOMP_ABI_CALL(0x0036A390u, sub_0036A390); /* call 0x0036A390 */

loc_0036C6BD: ;
    ecx = MEM32(esi + 0x1A14);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0036C6CAu); RECOMP_ABI_CALL(0x0036AC30u, sub_0036AC30); /* call 0x0036AC30 */

loc_0036C6CA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0036C6D2u); RECOMP_ABI_CALL(0x0036AC30u, sub_0036AC30); /* call 0x0036AC30 */

loc_0036C6D2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0036C6DAu); RECOMP_ABI_CALL(0x0036AC30u, sub_0036AC30); /* call 0x0036AC30 */

loc_0036C6DA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0036C6E2u); RECOMP_ABI_CALL(0x0036AC30u, sub_0036AC30); /* call 0x0036AC30 */

loc_0036C6E2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036C6F5; /* je: equal / zero */

loc_0036C6E7: ;
    edx = esp + 0xC;
    PUSH32(esp, 0x0036C6F0u); RECOMP_ABI_CALL(0x0036BF30u, sub_0036BF30); /* call 0x0036BF30 */

loc_0036C6F0: ;
    PUSH32(esp, 0x0036C6F5u); RECOMP_ABI_CALL(0x0036C130u, sub_0036C130); /* call 0x0036C130 */

loc_0036C6F5: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036C701; /* jb: below (unsigned <) */

loc_0036C6FC: ;
    PUSH32(esp, 0x0036C701u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036C701: ;
    _fa = (uint32_t)(MEM32(esi + 0x1A10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A10), 3 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0036C783; /* jae: above or equal (unsigned >=) */

loc_0036C70A: ;
    _fa = (uint32_t)(MEM32(0x37B5AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37B5AC), 0x80000000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C722; /* je: equal / zero */

loc_0036C716: ;
    MEM32(eax) = 0x40110;
    MEM32(eax + 4) = ebp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036C722: ;
    edx = MEM32(esi + 0x1A18);
    ecx = MEM32(edx + 4);
    edx = MEM32(0x37B5AC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036C73A; /* jne: not equal / not zero */

loc_0036C735: ;
    edx = 1;

loc_0036C73A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036C742; /* je: equal / zero */

loc_0036C73F: ;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036C742: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036C74A; /* je: equal / zero */

loc_0036C747: ;
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036C74A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036C752; /* je: equal / zero */

loc_0036C74F: ;
    ecx = ecx | 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036C752: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_0036C759; /* jns: not sign (positive) */

loc_0036C756: ;
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036C759: ;
    MEM32(eax) = edi;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0x4012C;
    MEM32(eax + 0xC) = ebp;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = ebp;
    MEM32(eax + 0x18) = 0x40130;
    MEM32(eax + 0x1C) = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0036C79F;

loc_0036C783: ;
    MEM32(eax) = 0x4012C;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = ebp;
    MEM32(eax + 0x10) = 0x40130;
    MEM32(eax + 0x14) = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036C79F: ;
    MEM32(esi) = eax;

loc_0036C7A1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036C7B7; /* je: equal / zero */

loc_0036C7A6: ;
    eax = esi;
    PUSH32(esp, 0x0036C7ADu); RECOMP_ABI_CALL(0x0036C4D0u, sub_0036C4D0); /* call 0x0036C4D0 */

loc_0036C7AD: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036C7B7u); RECOMP_ABI_CALL(0x0036C250u, sub_0036C250); /* call 0x0036C250 */

loc_0036C7B7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036C829; /* je: equal / zero */

loc_0036C7BC: ;
    eax = esi;
    PUSH32(esp, 0x0036C7C3u); RECOMP_ABI_CALL(0x0036C460u, sub_0036C460); /* call 0x0036C460 */

loc_0036C7C3: ;
    _fa = (uint32_t)(MEM32(esi + 0x1A10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036C829; /* jne: not equal / not zero */

loc_0036C7CC: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036C7D8; /* jb: below (unsigned <) */

loc_0036C7D3: ;
    PUSH32(esp, 0x0036C7D8u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036C7D8: ;
    MEM32(eax) = 0x40110;
    MEM32(eax + 4) = ebp;
    edx = MEM32(0x37B5AC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    ecx = MEM32(esi + 0x1A18);
    ecx = MEM32(ecx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0036C7F9; /* jne: not equal / not zero */

loc_0036C7F4: ;
    edx = 1;

loc_0036C7F9: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036C801; /* je: equal / zero */

loc_0036C7FE: ;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036C801: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036C809; /* je: equal / zero */

loc_0036C806: ;
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036C809: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036C811; /* je: equal / zero */

loc_0036C80E: ;
    ecx = ecx | 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036C811: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_0036C818; /* jns: not sign (positive) */

loc_0036C815: ;
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036C818: ;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 8) = edi;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;

loc_0036C829: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x170;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036C840
 * Original: 0x0036C840 - 0x0036C944 (260 bytes, 81 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036C840: ;
    PUSH32(esp, ecx);
    edx = MEM32(esi + 0x1A10);
    ecx = MEM32(esi + edx * 4 + 0x1A10);
    eax = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = eax;
    edi = esi + edx * 4 + 0x1A10;

loc_0036C863: ;
    eax = MEM32(edi);
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(ecx + 8) = ebp;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    ecx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0036C863; /* jne: not equal / not zero */

loc_0036C87D: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036C893; /* jb: below (unsigned <) */

loc_0036C88E: ;
    PUSH32(esp, 0x0036C893u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036C893: ;
    edx = MEM32(esi + 0x1A18);
    ecx = MEM32(edx + 4);
    MEM32(eax) = 0x40110;
    MEM32(eax + 4) = ebp;
    edx = MEM32(0x37B5AC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036C8B4; /* jne: not equal / not zero */

loc_0036C8AF: ;
    edx = 1;

loc_0036C8B4: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036C8BC; /* je: equal / zero */

loc_0036C8B9: ;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036C8BC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036C8C4; /* je: equal / zero */

loc_0036C8C1: ;
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036C8C4: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036C8CC; /* je: equal / zero */

loc_0036C8C9: ;
    ecx = ecx | 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036C8CC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_0036C8D3; /* jns: not sign (positive) */

loc_0036C8D0: ;
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036C8D3: ;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0x40100;
    MEM32(eax + 8) = edx;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0x4012C;
    MEM32(eax + 0x14) = ebp;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ebp;
    ecx = MEM32(esi + 0x1A04);
    edx = MEM32(esi + 0x1A14);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C91C; /* je: equal / zero */

loc_0036C907: ;
    _fa = (uint32_t)(MEM32(0x37B5AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37B5AC), 0x80000000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C91C; /* je: equal / zero */

loc_0036C913: ;
    MEM32(esi + 8) = MEM32(esi + 8) | 0x100;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0036C928;

loc_0036C91C: ;
    MEM32(eax) = 0x40130;
    MEM32(eax + 4) = ebp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036C928: ;
    edx = MEM32(esi + 0x1A14);
    ecx = MEM32(edx + 4);
    MEM32(eax) = 0x40210;
    POP32(esp, edi);
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(esi) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036C950
 * Original: 0x0036C950 - 0x0036C990 (64 bytes, 20 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C950: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x1A18);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C962; /* je: equal / zero */

loc_0036C960: ;
    eax = ecx;

loc_0036C962: ;
    ecx = MEM32(edi + 0x2C);
    PUSH32(esp, 0);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0x0036C96Fu); RECOMP_ABI_CALL(0x00370080u, sub_00370080); /* call 0x00370080 */

loc_0036C96F: ;
    edx = MEM32(edi + 0x2478);
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + edx * 4 + 0x1974) = eax;
    eax = MEM32(edi + 0x1DE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C98E; /* je: equal / zero */

loc_0036C989: ;
    PUSH32(esp, 0x0036C98Eu); RECOMP_ABI_CALL(0x0036C010u, sub_0036C010); /* call 0x0036C010 */

loc_0036C98E: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036C990
 * Original: 0x0036C990 - 0x0036CA75 (229 bytes, 71 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036C990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036C990: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi + 0x8D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036C9AB; /* jne: not equal / not zero */

loc_0036C9A1: ;
    eax = MEM32(esi + 0x8D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C9B0; /* je: equal / zero */

loc_0036C9AB: ;
    PUSH32(esp, 0x0036C9B0u); RECOMP_ABI_CALL(0x00375F80u, sub_00375F80); /* call 0x00375F80 */

loc_0036C9B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0036C9BF; /* jne: not equal / not zero */

loc_0036C9BA: ;
    ebx = 5;

loc_0036C9BF: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036CA05; /* je: equal / zero */

loc_0036C9C7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036C9F6; /* je: equal / zero */

loc_0036C9CC: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0036C9D3u); RECOMP_ABI_CALL(0x00370080u, sub_00370080); /* call 0x00370080 */

loc_0036C9D3: ;
    eax = MEM32(esi + 0x2478);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + eax * 4 + 0x1974);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036C9F0; /* je: equal / zero */

loc_0036C9E8: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036C9F0u); RECOMP_ABI_CALL(0x00370140u, sub_00370140); /* call 0x00370140 */

loc_0036C9F0: ;
    MEM32(esi + 0x2478) = MEM32(esi + 0x2478) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x2478)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0036C9F6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0036C9FCu); RECOMP_ABI_CALL(0x0036C650u, sub_0036C650); /* call 0x0036C650 */

loc_0036C9FC: ;
    edi = ebx;
    edi = edi & 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0036CA42; /* je: equal / zero */

loc_0036CA03: ;
    goto loc_0036CA3B;

loc_0036CA05: ;
    edi = ebx;
    edi = edi & 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0036CA42; /* je: equal / zero */

loc_0036CA0C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0036CA13u); RECOMP_ABI_CALL(0x00370080u, sub_00370080); /* call 0x00370080 */

loc_0036CA13: ;
    ecx = MEM32(esi + 0x2478);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + ecx * 4 + 0x1974);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036CA30; /* je: equal / zero */

loc_0036CA28: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036CA30u); RECOMP_ABI_CALL(0x00370140u, sub_00370140); /* call 0x00370140 */

loc_0036CA30: ;
    MEM32(esi + 0x2478) = MEM32(esi + 0x2478) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x2478)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0036CA3Bu); RECOMP_ABI_CALL(0x0036C840u, sub_0036C840); /* call 0x0036C840 */

loc_0036CA3B: ;
    eax = esi;
    PUSH32(esp, 0x0036CA42u); RECOMP_ABI_CALL(0x0036C950u, sub_0036C950); /* call 0x0036C950 */

loc_0036CA42: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0036CA6B; /* je: equal / zero */

loc_0036CA48: ;
    MEM32(0x37B1A8) = MEM32(0x37B1A8) | 0xFF1000;
    _fa = (uint32_t)(MEM32(0x37B1A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x8D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036CA66; /* jne: not equal / not zero */

loc_0036CA5C: ;
    eax = MEM32(esi + 0x8D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036CA6B; /* je: equal / zero */

loc_0036CA66: ;
    PUSH32(esp, 0x0036CA6Bu); RECOMP_ABI_CALL(0x003763B0u, sub_003763B0); /* call 0x003763B0 */

loc_0036CA6B: ;
    eax = MEM32(esi + 0x2478);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036CA80
 * Original: 0x0036CA80 - 0x0036CB37 (183 bytes, 43 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036CA80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036CA80: ;
    _fb = (uint32_t)(0x178) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x178;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x0036CA95u); RECOMP_ABI_CALL(0x0036C3D0u, sub_0036C3D0); /* call 0x0036C3D0 */

loc_0036CA95: ;
    eax = MEM32(esp + 0x184);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036CAA4u); RECOMP_ABI_CALL(0x0036A390u, sub_0036A390); /* call 0x0036A390 */

loc_0036CAA4: ;
    ecx = MEM32(esp + 0x188);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0036CAB3u); RECOMP_ABI_CALL(0x0036AC30u, sub_0036AC30); /* call 0x0036AC30 */

loc_0036CAB3: ;
    edx = esp + 0x10;
    PUSH32(esp, 0x0036CABCu); RECOMP_ABI_CALL(0x0036BF30u, sub_0036BF30); /* call 0x0036BF30 */

loc_0036CABC: ;
    PUSH32(esp, 0x0036CAC1u); RECOMP_ABI_CALL(0x0036C130u, sub_0036C130); /* call 0x0036C130 */

loc_0036CAC1: ;
    edx = MEM32(esi + 0x96C);
    eax = MEM32(esi + 0x970);
    ecx = MEM32(esp + 0x18C);
    edi = MEM32(0x37B1C0);
    MEM32(esp + 0xC) = edx;
    edx = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esi + 0x96C) = ecx;
    MEM32(esi + 0x970) = edx;
    eax = esi;
    MEM32(0x37B1C0) = 5;
    PUSH32(esp, 0x0036CB01u); RECOMP_ABI_CALL(0x0036C4D0u, sub_0036C4D0); /* call 0x0036C4D0 */

loc_0036CB01: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = esp + 0x10;
    MEM32(esi + 0x96C) = eax;
    MEM32(esi + 0x970) = ecx;
    PUSH32(esp, edx);
    MEM32(0x37B1C0) = edi;
    PUSH32(esp, 0x0036CB25u); RECOMP_ABI_CALL(0x0036C250u, sub_0036C250); /* call 0x0036C250 */

loc_0036CB25: ;
    eax = esi;
    PUSH32(esp, 0x0036CB2Cu); RECOMP_ABI_CALL(0x0036C460u, sub_0036C460); /* call 0x0036C460 */

loc_0036CB2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x178) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x178;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036CB40
 * Original: 0x0036CB40 - 0x0036CB62 (34 bytes, 6 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036CB40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036CB40: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x37B648);
    MEM32(ecx + 0x790) = eax;
    MEM32(0x37B1A8) = MEM32(0x37B1A8) | 0x4000;
    _fa = (uint32_t)(MEM32(0x37B1A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x37B5D0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036CB70
 * Original: 0x0036CB70 - 0x0036CB97 (39 bytes, 14 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036CB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036CB70: ;
    eax = MEM32(0x37B650);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37B654)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x37B654) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0036CB8C; /* jae: above or equal (unsigned >=) */

loc_0036CB80: ;
    MEM32(0x37B650) = eax;
    MEM32(eax + -8) = ecx;
    MEM32(eax + -4) = edx;
    esp += 4; return; /* ret */

loc_0036CB8C: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036CB93u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036CB93: ;
    POP32(esp, ecx);
    POP32(esp, edx);
    goto loc_0036CB70;

}

/**
 * sub_0036CBA0
 * Original: 0x0036CBA0 - 0x0036CBFD (93 bytes, 26 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036CBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036CBA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036CBC9; /* jge: greater or equal (signed >=) */

loc_0036CBAA: ;
    ecx = MEM32(esi * 4 + 0x41F200);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = edi;
    PUSH32(esp, 0x0036CBBDu); RECOMP_ABI_CALL(0x0036CB70u, sub_0036CB70); /* call 0x0036CB70 */

loc_0036CBBD: ;
    MEM32(esi * 4 + 0x37B3B0) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0036CBC9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x88 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036CBED; /* jge: greater or equal (signed >=) */

loc_0036CBD1: ;
    eax = MEM32(esi * 4 + 0x41EFE0);
    MEM32(0x37B1A8) = MEM32(0x37B1A8) | eax;
    _fa = (uint32_t)(MEM32(0x37B1A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0xC);
    MEM32(esi * 4 + 0x37B3B0) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0036CBED: ;
    edx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi * 4 + 0x379178); PUSH32(esp, 0x0036CBF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0036CBF2u); } /* indirect call */
    }

loc_0036CBF9: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036CC00
 * Original: 0x0036CC00 - 0x0036CD22 (290 bytes, 72 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0036CC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0036CC00: ;
    eax = MEM32(0x37B648);
    ecx = MEM32(eax + 0xEE0);
    fp_push((double)SMEM32(eax + 0xEE0)); /* fild */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036CC1E; /* jge: greater or equal (signed >=) */

loc_0036CC18: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_0036CC1E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x95C)); /* fmul dword ptr [eax + 0x95c] */
    edx = MEM32(eax + 0xEE4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xEF8)); /* fadd dword ptr [eax + 0xef8] */
    fp_push((double)SMEM32(eax + 0xEE4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0036CC40; /* jge: greater or equal (signed >=) */

loc_0036CC3A: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_0036CC40: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x960)); /* fmul dword ptr [eax + 0x960] */
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(edx), 0 (8-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xEFC)); /* fadd dword ptr [eax + 0xefc] */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0036CC6D; /* jns: not sign (positive) */

loc_0036CC55: ;
    _fa = (uint32_t)(MEM32(0x37B610)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37B610), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036CC6D; /* je: equal / zero */

loc_0036CC5D: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x429354)); /* fsub dword ptr [0x429354] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x429354)); /* fsub dword ptr [0x429354] */

loc_0036CC6D: ;
    edx = MEM32(eax + 0xEE8);
    fp_push((double)SMEM32(eax + 0xEE8)); /* fild */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036CC83; /* jge: greater or equal (signed >=) */

loc_0036CC7D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_0036CC83: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x95C)); /* fmul dword ptr [eax + 0x95c] */
    edx = MEM32(eax + 0xEEC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429354)); /* fmul dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(eax + 0xEEC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0036CCA8; /* jge: greater or equal (signed >=) */

loc_0036CCA2: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_0036CCA8: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x960)); /* fmul dword ptr [eax + 0x960] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4293C4)); /* fmul dword ptr [0x4293c4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xEF4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0xEF0)); /* fsub dword ptr [eax + 0xef0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x948)); /* fmul dword ptr [eax + 0x948] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xEF0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x948)); /* fmul dword ptr [eax + 0x948] */
    eax = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = ecx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    edx = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 4);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEM32(eax + 8) = edx;
    fp_push(MEMF(esp)); /* fld float */
    MEM32(eax + 0xC) = ecx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036CD30
 * Original: 0x0036CD30 - 0x0036CE70 (320 bytes, 84 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0036CD30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0036CD30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x37B648);
    eax = MEM32(edx + 0xEE8);
    fp_push((double)SMEM32(edx + 0xEE8)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0036CD56; /* jge: greater or equal (signed >=) */

loc_0036CD50: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_0036CD56: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x95C)); /* fmul dword ptr [edx + 0x95c] */
    ecx = MEM32(edx + 0xEEC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429354)); /* fmul dword ptr [0x429354] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_push((double)SMEM32(edx + 0xEEC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0036CD7C; /* jge: greater or equal (signed >=) */

loc_0036CD76: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_0036CD7C: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x960)); /* fmul dword ptr [edx + 0x960] */
    eax = MEM32(0x37B5EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4293C4)); /* fmul dword ptr [0x4293c4] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0xEF4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0xEF0)); /* fsub dword ptr [edx + 0xef0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x948)); /* fmul dword ptr [edx + 0x948] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x948)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xEF0)); /* fmul dword ptr [edx + 0xef0] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_0036CE02; /* jne: not equal / not zero */

loc_0036CDC2: ;
    fp_push(MEMF(edx + 0x944)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x948)); /* fmul dword ptr [edx + 0x948] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] * fp_top()); fp_pop(); /* fmulp st(2) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0036CE0C;

loc_0036CE02: ;
    fp_push(MEMF(0x429344)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_0036CE0C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    ecx = 0x10;
    edi = esp + 0x20;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x54) = eax;
    eax = esp + 0x20;
    MEM32(esp + 0x58) = ecx;
    PUSH32(esp, eax);
    ecx = edx + 0xCA0;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x980) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x980;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0036CE61u); RECOMP_ABI_CALL(0x0036F380u, sub_0036F380); /* call 0x0036F380 */

loc_0036CE61: ;
    MEM32(0x37B1A8) = MEM32(0x37B1A8) | 0x200;
    _fa = (uint32_t)(MEM32(0x37B1A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036CE70
 * Original: 0x0036CE70 - 0x0036CEA2 (50 bytes, 15 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036CE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036CE70: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036CE83; /* jb: below (unsigned <) */

loc_0036CE7E: ;
    PUSH32(esp, 0x0036CE83u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036CE83: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x80320;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x37B60C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036CEB0
 * Original: 0x0036CEB0 - 0x0036CEE5 (53 bytes, 15 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036CEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036CEB0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036CEC3; /* jb: below (unsigned <) */

loc_0036CEBE: ;
    PUSH32(esp, 0x0036CEC3u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036CEC3: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x41E6C;
    edx = ecx + -512;
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x37B620) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036CEF0
 * Original: 0x0036CEF0 - 0x0036CF3D (77 bytes, 24 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036CEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036CEF0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_0036CF04; /* jb: below (unsigned <) */

loc_0036CEFF: ;
    PUSH32(esp, 0x0036CF04u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036CF04: ;
    ecx = MEM32(esp + 0xC);
    edx = ZX8(MEM8(esp + 0xE));
    edi = ecx;
    edi = edi & 0xFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ecx;
    edi = edi & 0xFF00FF00u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x402A8;
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, edi);
    MEM32(0x37B5D8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036CF40
 * Original: 0x0036CF40 - 0x0036CFA8 (104 bytes, 31 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036CF40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036CF40: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036CF53; /* jb: below (unsigned <) */

loc_0036CF4E: ;
    PUSH32(esp, 0x0036CF53u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036CF53: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax) = 0x40308;
    if (CMP_NE(_fa, _fb)) goto loc_0036CF73; /* jne: not equal / not zero */

loc_0036CF61: ;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x37B5FC) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0036CF73: ;
    MEM32(eax + 4) = 1;
    PUSH32(esp, edi);
    edi = MEM32(0x37B5F8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(eax + 8) = 0x4039C;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x404;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -4) = edx;
    MEM32(esi) = eax;
    MEM32(0x37B5FC) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036CFB0
 * Original: 0x0036CFB0 - 0x0036CFEA (58 bytes, 16 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036CFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036CFB0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036CFC3; /* jb: below (unsigned <) */

loc_0036CFBE: ;
    PUSH32(esp, 0x0036CFC3u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036CFC3: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x403A0;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = MEM32(0x37B5FC);
    MEM32(0x37B5F8) = ecx;
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0036CF40(); return; /* tail jmp 0x0036CF40 */

}

/**
 * sub_0036CFF0
 * Original: 0x0036CFF0 - 0x0036D029 (57 bytes, 15 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036CFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036CFF0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036D003; /* jb: below (unsigned <) */

loc_0036CFFE: ;
    PUSH32(esp, 0x0036D003u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036D003: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x403A4;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x37B1A8) = MEM32(0x37B1A8) | 0x200;
    _fa = (uint32_t)(MEM32(0x37B1A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x37B5E8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036D030
 * Original: 0x0036D030 - 0x0036D081 (81 bytes, 26 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036D030: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi + 0x784);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036D074; /* jne: not equal / not zero */

loc_0036D041: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036D04D; /* jb: below (unsigned <) */

loc_0036D048: ;
    PUSH32(esp, 0x0036D04Du); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036D04D: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x400A60;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0x10;
    /* nop */

loc_0036D060: ;
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0036D060; /* jne: not equal / not zero */

loc_0036D068: ;
    MEM32(esi) = eax;
    MEM32(0x37B600) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0036D074: ;
    eax = MEM32(esp + 8);
    MEM32(0x37B600) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036D090
 * Original: 0x0036D090 - 0x0036D0F5 (101 bytes, 30 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0036D090: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    MEM32(esp + 0xC) = ebx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x964)); /* fmul dword ptr [esi + 0x964] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429398)); /* fmul dword ptr [0x429398] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036D0C0u); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036D0C0: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1FF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0036D0CF; /* jbe: below or equal (unsigned <=) */

loc_0036D0CA: ;
    edi = 0x1FF;

loc_0036D0CF: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036D0DB; /* jb: below (unsigned <) */

loc_0036D0D6: ;
    PUSH32(esp, 0x0036D0DBu); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036D0DB: ;
    MEM32(eax) = 0x40380;
    MEM32(eax + 4) = edi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    MEM32(0x37B624) = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036D100
 * Original: 0x0036D100 - 0x0036D177 (119 bytes, 38 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036D100: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x37B648);
    eax = MEM32(edi + 0x1A04);
    ecx = ZX8(MEM8(eax + 0xD));
    SET_LO8(edx, MEM8(ecx + 0x3791F0));
    SET_LO8(edx, LO8(edx) & 0x3C);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036D129; /* jne: not equal / not zero */

loc_0036D127: ;
    esi = ebx;

loc_0036D129: ;
    eax = MEM32(edi + 8);
    ecx = eax;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036D16B; /* je: equal / zero */

loc_0036D135: ;
    ecx = MEM32(edi + 4);
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 8) = eax;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036D149; /* jb: below (unsigned <) */

loc_0036D144: ;
    PUSH32(esp, 0x0036D149u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036D149: ;
    MEM32(eax) = 0x40110;
    MEM32(eax + 4) = 0;
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 8) = 0x40100;
    esi = esi | 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xC) = esi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;

loc_0036D16B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x37B62C) = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036D180
 * Original: 0x0036D180 - 0x0036D1F4 (116 bytes, 41 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0036D180: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x10) = edi;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    esi = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0036D1A2; /* jge: greater or equal (signed >=) */

loc_0036D19C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_0036D1A2: ;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4293DC)); /* fmul dword ptr [0x4293dc] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4D);
    PUSH32(esp, 0x0036D1BEu); RECOMP_ABI_CALL(0x0036CBA0u, sub_0036CBA0); /* call 0x0036CBA0 */

loc_0036D1BE: ;
    edx = MEM32(esp + 0x10);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4E);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x0036D1D0u); RECOMP_ABI_CALL(0x0036CBA0u, sub_0036CBA0); /* call 0x0036CBA0 */

loc_0036D1D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4F);
    PUSH32(esp, 0x0036D1D8u); RECOMP_ABI_CALL(0x0036CBA0u, sub_0036CBA0); /* call 0x0036CBA0 */

loc_0036D1D8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x0036D1E0u); RECOMP_ABI_CALL(0x0036CBA0u, sub_0036CBA0); /* call 0x0036CBA0 */

loc_0036D1E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x51);
    PUSH32(esp, 0x0036D1E8u); RECOMP_ABI_CALL(0x0036CBA0u, sub_0036CBA0); /* call 0x0036CBA0 */

loc_0036D1E8: ;
    MEM32(0x37B604) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036D200
 * Original: 0x0036D200 - 0x0036D252 (82 bytes, 24 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036D200: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036D213; /* jb: below (unsigned <) */

loc_0036D20E: ;
    PUSH32(esp, 0x0036D213u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036D213: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036D233; /* jne: not equal / not zero */

loc_0036D21B: ;
    MEM32(eax) = 0x417BC;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x37B608) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0036D233: ;
    MEM32(eax) = 0x817BC;
    MEM32(eax + 4) = 1;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x37B608) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036D260
 * Original: 0x0036D260 - 0x0036D2A4 (68 bytes, 20 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036D260: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036D273; /* jb: below (unsigned <) */

loc_0036D26E: ;
    PUSH32(esp, 0x0036D273u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036D273: ;
    ecx = MEM32(0x37B5E4);
    edx = MEM32(0x37B5E0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_0036D289; /* jne: not equal / not zero */

loc_0036D287: ;
    edx = ecx;

loc_0036D289: ;
    MEM32(eax) = 0x8038C;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x37B5DC) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036D2B0
 * Original: 0x0036D2B0 - 0x0036D301 (81 bytes, 24 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036D2B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    MEM32(0x37B5E0) = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x37B5DC);
    if (CMP_B(_fa, _fb)) goto loc_0036D2D3; /* jb: below (unsigned <) */

loc_0036D2CE: ;
    PUSH32(esp, 0x0036D2D3u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036D2D3: ;
    ecx = MEM32(0x37B5E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = MEM32(0x37B5E0);
    if (CMP_NE(_fa, _fb)) goto loc_0036D2E5; /* jne: not equal / not zero */

loc_0036D2E3: ;
    ecx = edi;

loc_0036D2E5: ;
    MEM32(eax) = 0x8038C;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x37B5DC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036D310
 * Original: 0x0036D310 - 0x0036D390 (128 bytes, 36 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036D310: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_0036D324; /* jb: below (unsigned <) */

loc_0036D31F: ;
    PUSH32(esp, 0x0036D324u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036D324: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0x417C4;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0036D344; /* je: equal / zero */

loc_0036D33A: ;
    MEM32(0x37B1A8) = MEM32(0x37B1A8) | 0x9000;
    _fa = (uint32_t)(MEM32(0x37B1A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036D344: ;
    esi = MEM32(0x37B648);
    edi = MEM32(0x37B5DC);
    MEM32(0x37B5E4) = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036D362; /* jb: below (unsigned <) */

loc_0036D35D: ;
    PUSH32(esp, 0x0036D362u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036D362: ;
    ecx = MEM32(0x37B5E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = MEM32(0x37B5E0);
    if (CMP_NE(_fa, _fb)) goto loc_0036D374; /* jne: not equal / not zero */

loc_0036D372: ;
    ecx = edi;

loc_0036D374: ;
    MEM32(eax) = 0x8038C;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x37B5DC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036D390
 * Original: 0x0036D390 - 0x0036D3D1 (65 bytes, 17 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036D390: ;
    edx = MEM32(0x37B1A8);
    edx = edx | 0x200;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    MEM32(0x37B1A8) = edx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036D3B5; /* jb: below (unsigned <) */

loc_0036D3B0: ;
    PUSH32(esp, 0x0036D3B5u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036D3B5: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x40328;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x37B5D4) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036D3E0
 * Original: 0x0036D3E0 - 0x0036D4E5 (261 bytes, 78 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D3E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036D3E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = edi;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x37B220) = ebx;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_0036D41B; /* jb: below (unsigned <) */

loc_0036D412: ;
    PUSH32(esp, 0x0036D417u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036D417: ;
    edx = MEM32(esp + 0x14);

loc_0036D41B: ;
    ebx = ebx & 0xFFFF0000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 1;
    if ((_fa == 0)) goto loc_0036D477; /* je: equal / zero */

loc_0036D428: ;
    ebp = edi * 4 + 0x41964;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = 0xFF000000u;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x30000 (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_A(_fa, _fb)) goto loc_0036D472; /* ja: above (unsigned >) */

loc_0036D447: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0036D465; /* je: equal / zero */

loc_0036D449: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036D458; /* je: equal / zero */

loc_0036D451: ;
    ebp = 0x2400;
    goto loc_0036D477;

loc_0036D458: ;
    MEM32(esp + 0x14) = ecx;
    ebp = 0x8511;
    edx = ecx;
    goto loc_0036D477;

loc_0036D465: ;
    MEM32(esp + 0x14) = ecx;
    ebp = 0x8512;
    edx = ecx;
    goto loc_0036D477;

loc_0036D472: ;
    ebp = 0x2401;

loc_0036D477: ;
    SET_LO8(ebx, MEM8(esp + 0x18));
    _fb = (uint32_t)(9) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + 9);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(edi + 0x42C8A9) = LO8(ebx);
    ebx = edi + 0xC03C;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0xC) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = MEM32(esi + 0x950);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036D4B5; /* jne: not equal / not zero */

loc_0036D4A7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036D4B5; /* je: equal / zero */

loc_0036D4AB: ;
    MEM32(0x37B1A8) = MEM32(0x37B1A8) | 0x200;
    _fa = (uint32_t)(MEM32(0x37B1A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036D4B5: ;
    ebx = MEM32(esi + 0x950);
    eax = ecx;
    ecx = edi;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    eax = ~eax;
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x950) = eax;
    eax = MEM32(0x37B1A8);
    POP32(esp, esi);
    eax = eax | 0x47F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    MEM32(0x37B1A8) = eax;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036D4F0
 * Original: 0x0036D4F0 - 0x0036D553 (99 bytes, 35 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D4F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036D4F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(0x37B648);
    eax = MEM32(edi + 0x784);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0036D50D; /* jne: not equal / not zero */

loc_0036D50A: ;
    ebx = esi + 1;

loc_0036D50D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    ebp = MEM32(esp + 0x1C);
    if (TEST_Z(_fa, _fb)) goto loc_0036D53C; /* je: equal / zero */

loc_0036D516: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036D522; /* jb: below (unsigned <) */

loc_0036D51D: ;
    PUSH32(esp, 0x0036D522u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036D522: ;
    ecx = MEM32(esp + 0x18);
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx * 4 + 0x41AD0;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ebp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;

loc_0036D53C: ;
    eax = MEM32(esp + 0x18);
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi * 4 + 0x37B1B0) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036D560
 * Original: 0x0036D560 - 0x0036D59D (61 bytes, 19 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036D560: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036D573; /* jb: below (unsigned <) */

loc_0036D56E: ;
    PUSH32(esp, 0x0036D573u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036D573: ;
    ecx = MEM32(esp + 8);
    edx = ecx;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x41B24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x41B24;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + 0x37B224) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036D5A0
 * Original: 0x0036D5A0 - 0x0036D5D9 (57 bytes, 17 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036D5A0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036D5B3; /* jb: below (unsigned <) */

loc_0036D5AE: ;
    PUSH32(esp, 0x0036D5B3u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036D5B3: ;
    ecx = MEM32(esp + 8);
    edx = ecx * 4 + 0x40AE0;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + 0x37B228) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036D5E0
 * Original: 0x0036D5E0 - 0x0036D6CC (236 bytes, 67 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036D5E0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0036D617; /* jge: greater or equal (signed >=) */

loc_0036D5E9: ;
    ecx = MEM32(esp + 4);
    edx = 1;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = MEM32(0x37B1A8);
    if (5) _cf = (int)(((ecx) >> (32 - (5))) & 1);
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x10);
    MEM32(0x37B1A8) = esi;
    MEM32(ecx * 4 + 0x37B1B0) = eax;
    POP32(esp, esi);

loc_0036D614: ;
    esp += 16; return; /* ret 12 */

loc_0036D617: ;
    if (CMP_NE(_fa, _fb)) goto loc_0036D64C; /* jne: not equal / not zero */

loc_0036D619: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(0x37B1A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFBFF1u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x480F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x480F)) >> 32) & 1);
    ecx = ecx + 0x480F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x37B1A8) = edx;
    edx = MEM32(esp + 4);
    if (7) _cf = (int)(((edx) >> (32 - (7))) & 1);
    edx = edx << 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + 0x37B1E0) = eax;
    esp += 16; return; /* ret 12 */

loc_0036D64C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0036D675; /* jge: greater or equal (signed >=) */

loc_0036D651: ;
    ecx = MEM32(eax * 4 + 0x41F0F8);
    _cf = 0; /* logical op clears CF */
    MEM32(0x37B1A8) = MEM32(0x37B1A8) | ecx;
    _fa = (uint32_t)(MEM32(0x37B1A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 4);
    if (5) _cf = (int)(((edx) >> (32 - (5))) & 1);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0xC);
    MEM32(edx * 4 + 0x37B1B0) = eax;
    esp += 16; return; /* ret 12 */

loc_0036D675: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036D68C; /* jne: not equal / not zero */

loc_0036D67A: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036D689u); RECOMP_ABI_CALL(0x0036D3E0u, sub_0036D3E0); /* call 0x0036D3E0 */

loc_0036D689: ;
    esp += 16; return; /* ret 12 */

loc_0036D68C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036D6A3; /* jne: not equal / not zero */

loc_0036D691: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036D6A0u); RECOMP_ABI_CALL(0x0036D560u, sub_0036D560); /* call 0x0036D560 */

loc_0036D6A0: ;
    esp += 16; return; /* ret 12 */

loc_0036D6A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0036D6BA; /* jne: not equal / not zero */

loc_0036D6A8: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036D6B7u); RECOMP_ABI_CALL(0x0036D5A0u, sub_0036D5A0); /* call 0x0036D5A0 */

loc_0036D6B7: ;
    esp += 16; return; /* ret 12 */

loc_0036D6BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0036D614; /* jg: greater (signed >) */

loc_0036D6C3: ;
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; sub_0036D4F0(); return; /* tail jmp 0x0036D4F0 */

}

/**
 * sub_0036D6D0
 * Original: 0x0036D6D0 - 0x0036D73A (106 bytes, 40 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D6D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036D6D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x784);
    eax = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x181B68;
    esi = edx;
    esi = esi << 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + 4;
    _fb = (uint32_t)(0x37B208) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x37B208;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036D6F6: ;
    MEM32(eax) = ecx;
    edi = esi;
    ebp = MEM32(edi);
    ebx = edx;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(edi + 8);
    MEM32(ebx + 8) = ebp;
    ebp = MEM32(edi + 0xC);
    MEM32(ebx + 0xC) = ebp;
    ebp = MEM32(edi + 0x10);
    MEM32(ebx + 0x10) = ebp;
    edi = MEM32(edi + 0x14);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x181BE8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x181BE8 (32-bit) */
    MEM32(ebx + 0x14) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_0036D6F6; /* jbe: below or equal (unsigned <=) */

loc_0036D735: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036D740
 * Original: 0x0036D740 - 0x0036D925 (485 bytes, 115 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0036D740: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x794);
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 0x12 (8-bit) */
    PUSH32(esp, edi);
    edi = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0036D82B; /* je: equal / zero */

loc_0036D759: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036D768u); RECOMP_ABI_CALL(0x0036CC00u, sub_0036CC00); /* call 0x0036CC00 */

loc_0036D768: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036D7B8; /* jne: not equal / not zero */

loc_0036D770: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(edi + 4) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edi + 8) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(edi + 0xC) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(edi + 0x10) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(edi) = 0x100A20;
    MEM32(edi + 0x18) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(edi + 0x14) = 0x100AF0;
    MEM32(edi + 0x1C) = edx;
    MEM32(edi + 0x20) = eax;
    MEM32(edi + 0x24) = ecx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036D7B8: ;
    SET_LO8(ecx, MEM8(esi + 0x1C18));
    eax = 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036D81A; /* jne: not equal / not zero */

loc_0036D7C7: ;
    _fa = (uint32_t)(MEM32(0x37B5EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37B5EC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036D804; /* jne: not equal / not zero */

loc_0036D7CF: ;
    fp_push(MEMF(esi + 0x944)); /* fld float */
    edx = MEM32(esi + 0x948);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x93C)); /* fmul dword ptr [esi + 0x93c] */
    MEM32(esi + 0x1C14) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x948)); /* fmul dword ptr [esi + 0x948] */
    MEMF(esi + 0x1C10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1C14)); /* fld float */
    fp_push(MEMF(esi + 0x1C10)); /* fld float */
    goto loc_0036D910;

loc_0036D804: ;
    eax = MEM32(esi + 0x948);
    MEM32(esi + 0x1C10) = 0;
    MEM32(esi + 0x1C14) = eax;

loc_0036D81A: ;
    fp_push(MEMF(esi + 0x1C14)); /* fld float */
    fp_push(MEMF(esi + 0x1C10)); /* fld float */
    goto loc_0036D910;

loc_0036D82B: ;
    ecx = MEM32(esi + 0xEE0);
    fp_push((double)SMEM32(esi + 0xEE0)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0036D841; /* jge: greater or equal (signed >=) */

loc_0036D83B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_0036D841: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x95C)); /* fmul dword ptr [esi + 0x95c] */
    edx = MEM32(esi + 0xEE4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xEF8)); /* fadd dword ptr [esi + 0xef8] */
    fp_push((double)SMEM32(esi + 0xEE4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0036D863; /* jge: greater or equal (signed >=) */

loc_0036D85D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_0036D863: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x960)); /* fmul dword ptr [esi + 0x960] */
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(ecx), 0 (8-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xEFC)); /* fadd dword ptr [esi + 0xefc] */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0036D890; /* jns: not sign (positive) */

loc_0036D878: ;
    _fa = (uint32_t)(MEM32(0x37B610)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37B610), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036D890; /* je: equal / zero */

loc_0036D880: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x429354)); /* fsub dword ptr [0x429354] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x429354)); /* fsub dword ptr [0x429354] */

loc_0036D890: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(edi) = 0x100A20;
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 0x10) = eax;
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(esi + 0x1C18));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036D904; /* jne: not equal / not zero */

loc_0036D8B1: ;
    _fa = (uint32_t)(MEM32(0x37B5EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37B5EC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036D8E0; /* jne: not equal / not zero */

loc_0036D8BA: ;
    fp_push(MEMF(esi + 0x944)); /* fld float */
    eax = MEM32(esi + 0x948);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x93C)); /* fmul dword ptr [esi + 0x93c] */
    MEM32(esi + 0x1C0C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x948)); /* fmul dword ptr [esi + 0x948] */
    MEMF(esi + 0x1C08) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0036D904;

loc_0036D8E0: ;
    fp_push(MEMF(esi + 0xEF0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x948)); /* fmul dword ptr [esi + 0x948] */
    MEMF(esi + 0x1C08) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xEF4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x948)); /* fmul dword ptr [esi + 0x948] */
    MEMF(esi + 0x1C0C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0036D904: ;
    fp_push(MEMF(esi + 0x1C0C)); /* fld float */
    fp_push(MEMF(esi + 0x1C08)); /* fld float */

loc_0036D910: ;
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi) = 0x80394;
    eax = edi + 0xC;
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036D930
 * Original: 0x0036D930 - 0x0036D989 (89 bytes, 27 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036D930: ;
    eax = MEM32(0x37B630);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = 0x100001;
    if (CMP_EQ(_fa, _fb)) goto loc_0036D944; /* je: equal / zero */

loc_0036D93F: ;
    esi = 0x10100001;

loc_0036D944: ;
    _fa = (uint32_t)(MEM32(0x37B5EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37B5EC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036D953; /* jne: not equal / not zero */

loc_0036D94D: ;
    esi = esi | 0x10000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036D953: ;
    eax = MEM32(ecx + 0x1A08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036D97B; /* je: equal / zero */

loc_0036D95D: ;
    eax = ZX8(MEM8(eax + 0xD));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036D975; /* je: equal / zero */

loc_0036D966: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036D975; /* je: equal / zero */

loc_0036D96B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x31 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036D975; /* je: equal / zero */

loc_0036D970: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036D97B; /* jne: not equal / not zero */

loc_0036D975: ;
    esi = esi | 0x1000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036D97B: ;
    MEM32(edx) = 0x40290;
    MEM32(edx + 4) = esi;
    eax = edx + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036D990
 * Original: 0x0036D990 - 0x0036DA5E (206 bytes, 47 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036D990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036D990: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    edx = MEM32(esi + 0x2428);
    edx = edx & 0xFFFFFFF7u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2428) = edx;
    ecx = MEM32(0x37B644);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0036D9BB; /* je: equal / zero */

loc_0036D9B2: ;
    eax = eax | 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x2428) = eax;

loc_0036D9BB: ;
    edx = MEM32(esi + 0x242C);
    edx = edx & 0xE7EFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x242C) = edx;
    ecx = MEM32(0x37B63C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0036D9E4; /* je: equal / zero */

loc_0036D9D9: ;
    eax = eax | 0x100000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x242C) = eax;

loc_0036D9E4: ;
    eax = MEM32(0x37B640);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036D9F7; /* je: equal / zero */

loc_0036D9ED: ;
    MEM32(esi + 0x242C) = MEM32(esi + 0x242C) | 0x8000000;
    _fa = (uint32_t)(MEM32(esi + 0x242C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036D9F7: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036DA03; /* jb: below (unsigned <) */

loc_0036D9FE: ;
    PUSH32(esp, 0x0036DA03u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036DA03: ;
    MEM32(eax) = 0x40110;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi + 0x2428);
    MEM32(eax + 8) = 0x81D8C;
    MEM32(eax + 0xC) = 0x400094;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = 0x40100;
    edx = 9;
    MEM32(eax + 0x18) = edx;
    ecx = MEM32(esi + 0x242C);
    MEM32(eax + 0x1C) = 0x81D8C;
    MEM32(eax + 0x20) = 0x400B80;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = 0x40100;
    MEM32(eax + 0x2C) = edx;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036DA60
 * Original: 0x0036DA60 - 0x0036DDB5 (853 bytes, 254 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036DA60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036DA60: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0x1A04);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1A14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x1A14) (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0036DBC8; /* jne: not equal / not zero */

loc_0036DA7F: ;
    ecx = MEM32(esi + 0x970);
    eax = MEM32(esi + 0x96C);
    ebp = MEM32(0x37B618);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 0x1A18);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036DAB8; /* jne: not equal / not zero */

loc_0036DAA6: ;
    ecx = MEM32(ecx + 0xC);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0036DABE;

loc_0036DAB8: ;
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0036DABE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0036DAD0; /* jge: greater or equal (signed >=) */

loc_0036DACA: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_0036DAD0: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036DAE3u); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036DAE3: ;
    ecx = MEM32(esi + 0x1A18);
    edi = eax;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036DB02; /* jne: not equal / not zero */

loc_0036DAF2: ;
    ecx = ZX8(MEM8(ecx + 0xF));
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0036DB0B;

loc_0036DB02: ;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0036DB0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0036DB1D; /* jge: greater or equal (signed >=) */

loc_0036DB17: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_0036DB1D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036DB30u); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036DB30: ;
    edx = MEM32(esp + 0x10);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esi + 0x1A14);
    ecx = MEM32(edx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036DB5B; /* jne: not equal / not zero */

loc_0036DB49: ;
    ecx = MEM32(edx + 0xC);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 1;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0036DB64;

loc_0036DB5B: ;
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx;

loc_0036DB64: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036DB88; /* jb: below (unsigned <) */

loc_0036DB68: ;
    edi = MEM32(edx + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036DB81; /* jne: not equal / not zero */

loc_0036DB6F: ;
    ecx = MEM32(edx + 0xC);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0036DB88;

loc_0036DB81: ;
    edi = edi & 0xFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0036DB88: ;
    ecx = MEM32(edx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036DBA0; /* jne: not equal / not zero */

loc_0036DB8F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx + 0xF));
    ebx = 1;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0036DBAC;

loc_0036DBA0: ;
    ecx = ecx >> 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx;

loc_0036DBAC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036DC1E; /* jb: below (unsigned <) */

loc_0036DBB0: ;
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036DC15; /* jne: not equal / not zero */

loc_0036DBB7: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx + 0xF));
    eax = 1;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0036DC1E;

loc_0036DBC8: ;
    eax = MEM32(ebx + 0x10);
    fp_push(MEMF(0x429344)); /* fld float */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebp = MEM32(0x37B61C);
    MEM32(esp + 0x10) = 0x3F800000;
    if (CMP_NE(_fa, _fb)) goto loc_0036DBF5; /* jne: not equal / not zero */

loc_0036DBE3: ;
    ecx = MEM32(ebx + 0xC);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0036DBFE;

loc_0036DBF5: ;
    edx = eax;
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0036DBFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0036DC15; /* jne: not equal / not zero */

loc_0036DC04: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(ebx + 0xF));
    eax = 1;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0036DC1E;

loc_0036DC15: ;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0036DC1E: ;
    ebx = MEM32(esi + 0x1A0C);
    ecx = eax;
    eax = MEM32(esi + 8);
    eax = eax & 0xFFFF7FFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0036DC6F; /* je: equal / zero */

loc_0036DC35: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036DC6F; /* jne: not equal / not zero */

loc_0036DC3A: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = eax | 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429354)); /* fmul dword ptr [0x429354] */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi >> 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0036DC69; /* jne: not equal / not zero */

loc_0036DC58: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429354)); /* fmul dword ptr [0x429354] */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | 0x2000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0036DC6F;

loc_0036DC69: ;
    ebx = ebx | 0x1000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036DC6F: ;
    eax = MEM32(esp + 0x10);
    MEMF(esi + 0x960) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(esi + 0x95C) = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    MEM32(esi + 0x954) = edi;
    MEM32(esi + 0x958) = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0036DCA4; /* jp: parity */

loc_0036DC98: ;
    ecx = MEM32(esp + 0x10);
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x10) = ecx;
    goto loc_0036DCA8;

loc_0036DCA4: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_0036DCA8: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036DCB4; /* jb: below (unsigned <) */

loc_0036DCAF: ;
    PUSH32(esp, 0x0036DCB4u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036DCB4: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(eax) = 0x40208;
    MEM32(eax + 4) = ebx;
    fp_push(MEMF(esi + 0x964)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    ebx = eax + 8;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0036DD50; /* jnp: not parity */

loc_0036DCD3: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    PUSH32(esp, ecx);
    MEM32(esi + 0x964) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036DCF2u); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036DCF2: ;
    eax = MEM32(eax * 4 + 0x379378);
    MEM32(esi + 0x968) = eax;
    ecx = MEM32(0x37B624);
    edi = MEM32(0x37B1A8);
    MEM32(esp + 0x14) = ecx;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    edi = edi | 0x10F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x37B1A8) = edi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429398)); /* fmul dword ptr [0x429398] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036DD38u); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036DD38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1FF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0036DD44; /* jbe: below or equal (unsigned <=) */

loc_0036DD3F: ;
    eax = 0x1FF;

loc_0036DD44: ;
    MEM32(ebx) = 0x40380;
    MEM32(ebx + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036DD50: ;
    eax = MEM32(esi + 8);
    MEM32(esi) = ebx;
    edi = MEM32(0x37B614);
    ecx = MEM32(0x37B628);
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0036DD76; /* jns: not sign (positive) */

loc_0036DD6A: ;
    eax = MEM32(0x37B610);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036DD76; /* je: equal / zero */

loc_0036DD73: ;
    edi = edi | 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036DD76: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 4) (32-bit) */
    eax = ebx;
    if (CMP_B(_fa, _fb)) goto loc_0036DD82; /* jb: below (unsigned <) */

loc_0036DD7D: ;
    PUSH32(esp, 0x0036DD82u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036DD82: ;
    MEM32(eax) = 0x41D7C;
    MEM32(eax + 4) = edi;
    edx = MEM32(esi + 0x794);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    _fa = (uint32_t)(MEM8(edx + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036DDA3; /* je: equal / zero */

loc_0036DD9C: ;
    ecx = esi;
    PUSH32(esp, 0x0036DDA3u); RECOMP_ABI_CALL(0x0036EF10u, sub_0036EF10); /* call 0x0036EF10 */

loc_0036DDA3: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036DDADu); RECOMP_ABI_CALL(0x0036A9D0u, sub_0036A9D0); /* call 0x0036A9D0 */

loc_0036DDAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036DDC0
 * Original: 0x0036DDC0 - 0x0036DE4F (143 bytes, 43 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036DDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036DDC0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036DDD3; /* jb: below (unsigned <) */

loc_0036DDCE: ;
    PUSH32(esp, 0x0036DDD3u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036DDD3: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036DDEC; /* je: equal / zero */

loc_0036DDDB: ;
    ecx = MEM32(esi + 0x1A08);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036DDEC; /* je: equal / zero */

loc_0036DDE5: ;
    ecx = 1;
    goto loc_0036DDEE;

loc_0036DDEC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036DDEE: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(0x37B4F8);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = MEM32(0x37B5EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(0x37B5EC) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0036DE21; /* je: equal / zero */

loc_0036DE1C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036DE4B; /* jne: not equal / not zero */

loc_0036DE21: ;
    PUSH32(esp, 0x0036DE26u); RECOMP_ABI_CALL(0x0036CD30u, sub_0036CD30); /* call 0x0036CD30 */

loc_0036DE26: ;
    ecx = esi;
    PUSH32(esp, 0x0036DE2Du); RECOMP_ABI_CALL(0x0036EF10u, sub_0036EF10); /* call 0x0036EF10 */

loc_0036DE2D: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036DE39; /* jb: below (unsigned <) */

loc_0036DE34: ;
    PUSH32(esp, 0x0036DE39u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036DE39: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x0036DE42u); RECOMP_ABI_CALL(0x0036D930u, sub_0036D930); /* call 0x0036D930 */

loc_0036DE42: ;
    edx = eax;
    PUSH32(esp, 0x0036DE49u); RECOMP_ABI_CALL(0x0036D740u, sub_0036D740); /* call 0x0036D740 */

loc_0036DE49: ;
    MEM32(esi) = eax;

loc_0036DE4B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036DE50
 * Original: 0x0036DE50 - 0x0036DED4 (132 bytes, 38 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036DE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036DE50: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036DE63; /* jb: below (unsigned <) */

loc_0036DE5E: ;
    PUSH32(esp, 0x0036DE63u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036DE63: ;
    edx = MEM32(0x37B638);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036DE74; /* je: equal / zero */

loc_0036DE6F: ;
    ecx = 2;

loc_0036DE74: ;
    edx = MEM32(0x37B634);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036DE97; /* je: equal / zero */

loc_0036DE7E: ;
    edx = MEM32(0x37B5F0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036DE94; /* je: equal / zero */

loc_0036DE88: ;
    _fa = (uint32_t)(MEM32(0x37B5F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37B5F4), 0x1E00 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036DE97; /* jne: not equal / not zero */

loc_0036DE94: ;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036DE97: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax) = 0x41D84;
    MEM32(eax + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0036DEB9; /* je: equal / zero */

loc_0036DEA8: ;
    ecx = MEM32(esi + 0x1A08);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036DEB9; /* je: equal / zero */

loc_0036DEB2: ;
    ecx = 1;
    goto loc_0036DEBB;

loc_0036DEB9: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036DEBB: ;
    MEM32(eax + 8) = 0x4032C;
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x37B5F0) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036DEE0
 * Original: 0x0036DEE0 - 0x0036DF4D (109 bytes, 30 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036DEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036DEE0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036DEF3; /* jb: below (unsigned <) */

loc_0036DEEE: ;
    PUSH32(esp, 0x0036DEF3u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036DEF3: ;
    edx = MEM32(0x37B638);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036DF04; /* je: equal / zero */

loc_0036DEFF: ;
    ecx = 2;

loc_0036DF04: ;
    edx = MEM32(0x37B634);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036DF27; /* je: equal / zero */

loc_0036DF0E: ;
    edx = MEM32(0x37B5F0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036DF24; /* je: equal / zero */

loc_0036DF18: ;
    _fa = (uint32_t)(MEM32(0x37B5F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37B5F4), 0x1E00 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036DF27; /* jne: not equal / not zero */

loc_0036DF24: ;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036DF27: ;
    MEM32(eax) = 0x41D84;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = 0x40370;
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x37B5F4) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036DF50
 * Original: 0x0036DF50 - 0x0036DF7B (43 bytes, 14 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036DF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036DF50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    MEM32(0x37B630) = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036DF6C; /* jb: below (unsigned <) */

loc_0036DF67: ;
    PUSH32(esp, 0x0036DF6Cu); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036DF6C: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x0036DF75u); RECOMP_ABI_CALL(0x0036D930u, sub_0036D930); /* call 0x0036D930 */

loc_0036DF75: ;
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036DF80
 * Original: 0x0036DF80 - 0x0036DFE2 (98 bytes, 28 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036DF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036DF80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    MEM32(0x37B634) = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036DF9C; /* jb: below (unsigned <) */

loc_0036DF97: ;
    PUSH32(esp, 0x0036DF9Cu); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036DF9C: ;
    edx = MEM32(0x37B638);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036DFAD; /* je: equal / zero */

loc_0036DFA8: ;
    ecx = 2;

loc_0036DFAD: ;
    edx = MEM32(0x37B634);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036DFD0; /* je: equal / zero */

loc_0036DFB7: ;
    edx = MEM32(0x37B5F0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036DFCD; /* je: equal / zero */

loc_0036DFC1: ;
    _fa = (uint32_t)(MEM32(0x37B5F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37B5F4), 0x1E00 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036DFD0; /* jne: not equal / not zero */

loc_0036DFCD: ;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036DFD0: ;
    MEM32(eax) = 0x41D84;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036DFF0
 * Original: 0x0036DFF0 - 0x0036E052 (98 bytes, 28 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036DFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036DFF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    MEM32(0x37B638) = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036E00C; /* jb: below (unsigned <) */

loc_0036E007: ;
    PUSH32(esp, 0x0036E00Cu); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036E00C: ;
    edx = MEM32(0x37B638);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E01D; /* je: equal / zero */

loc_0036E018: ;
    ecx = 2;

loc_0036E01D: ;
    edx = MEM32(0x37B634);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E040; /* je: equal / zero */

loc_0036E027: ;
    edx = MEM32(0x37B5F0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E03D; /* je: equal / zero */

loc_0036E031: ;
    _fa = (uint32_t)(MEM32(0x37B5F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37B5F4), 0x1E00 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E040; /* jne: not equal / not zero */

loc_0036E03D: ;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036E040: ;
    MEM32(eax) = 0x41D84;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036E060
 * Original: 0x0036E060 - 0x0036E071 (17 bytes, 4 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E060(void)
{

loc_0036E060: ;
    eax = MEM32(esp + 4);
    MEM32(0x37B63C) = eax;
    PUSH32(esp, 0x0036E06Eu); RECOMP_ABI_CALL(0x0036D990u, sub_0036D990); /* call 0x0036D990 */

loc_0036E06E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036E080
 * Original: 0x0036E080 - 0x0036E091 (17 bytes, 4 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E080(void)
{

loc_0036E080: ;
    eax = MEM32(esp + 4);
    MEM32(0x37B640) = eax;
    PUSH32(esp, 0x0036E08Eu); RECOMP_ABI_CALL(0x0036D990u, sub_0036D990); /* call 0x0036D990 */

loc_0036E08E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036E0A0
 * Original: 0x0036E0A0 - 0x0036E0B1 (17 bytes, 4 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E0A0(void)
{

loc_0036E0A0: ;
    eax = MEM32(esp + 4);
    MEM32(0x37B644) = eax;
    PUSH32(esp, 0x0036E0AEu); RECOMP_ABI_CALL(0x0036D990u, sub_0036D990); /* call 0x0036D990 */

loc_0036E0AE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036E0C0
 * Original: 0x0036E0C0 - 0x0036E0E7 (39 bytes, 9 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036E0C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x37B648);
    MEM32(0x37B618) = eax;
    edx = MEM32(ecx + 0x1A04);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x1A14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x1A14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E0E4; /* jne: not equal / not zero */

loc_0036E0DD: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0036E0E4u); RECOMP_ABI_CALL(0x0036DA60u, sub_0036DA60); /* call 0x0036DA60 */

loc_0036E0E4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036E0F0
 * Original: 0x0036E0F0 - 0x0036E117 (39 bytes, 9 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036E0F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x37B648);
    MEM32(0x37B61C) = eax;
    edx = MEM32(ecx + 0x1A04);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x1A14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x1A14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E114; /* je: equal / zero */

loc_0036E10D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0036E114u); RECOMP_ABI_CALL(0x0036DA60u, sub_0036DA60); /* call 0x0036DA60 */

loc_0036E114: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036E120
 * Original: 0x0036E120 - 0x0036E192 (114 bytes, 37 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036E120: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(0x37B610) = eax;
    PUSH32(esp, 0x0036E138u); RECOMP_ABI_CALL(0x0036EF10u, sub_0036EF10); /* call 0x0036EF10 */

loc_0036E138: ;
    edi = MEM32(0x37B614);
    ecx = MEM32(0x37B628);
    eax = MEM32(esi + 8);
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0036E15C; /* jns: not sign (positive) */

loc_0036E150: ;
    eax = MEM32(0x37B610);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E15C; /* je: equal / zero */

loc_0036E159: ;
    edi = edi | 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036E15C: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036E168; /* jb: below (unsigned <) */

loc_0036E163: ;
    PUSH32(esp, 0x0036E168u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036E168: ;
    MEM32(eax) = 0x41D7C;
    MEM32(eax + 4) = edi;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0036E182; /* jb: below (unsigned <) */

loc_0036E17D: ;
    PUSH32(esp, 0x0036E182u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036E182: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x0036E18Bu); RECOMP_ABI_CALL(0x0036D740u, sub_0036D740); /* call 0x0036D740 */

loc_0036E18B: ;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036E1A0
 * Original: 0x0036E1A0 - 0x0036E1F0 (80 bytes, 27 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036E1A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x37B628);
    MEM32(0x37B614) = eax;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0036E1D1; /* jns: not sign (positive) */

loc_0036E1C5: ;
    eax = MEM32(0x37B610);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E1D1; /* je: equal / zero */

loc_0036E1CE: ;
    edi = edi | 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036E1D1: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036E1DD; /* jb: below (unsigned <) */

loc_0036E1D8: ;
    PUSH32(esp, 0x0036E1DDu); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036E1DD: ;
    MEM32(eax) = 0x41D7C;
    MEM32(eax + 4) = edi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036E1F0
 * Original: 0x0036E1F0 - 0x0036E23E (78 bytes, 26 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036E1F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x37B614);
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = MEM32(0x37B648);
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x37B628) = eax;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0036E21F; /* jns: not sign (positive) */

loc_0036E213: ;
    eax = MEM32(0x37B610);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E21F; /* je: equal / zero */

loc_0036E21C: ;
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036E21F: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036E22B; /* jb: below (unsigned <) */

loc_0036E226: ;
    PUSH32(esp, 0x0036E22Bu); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036E22B: ;
    MEM32(eax) = 0x41D7C;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036E23E
 * Original: 0x0036E23E - 0x0036E2C0 (130 bytes, 47 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0036E23E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036E23E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x1D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1D0), eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(MEM32(ecx + 0x1B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1B8), 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0036E2BB; /* jne: not equal / not zero */

loc_0036E25C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1B4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x1000000 (32-bit) */
    edx = 0xC0000000u;
    eax = 0x80000000u;
    if (TEST_Z(_fa, _fb)) goto loc_0036E291; /* je: equal / zero */

loc_0036E276: ;
    ebx = MEM32(ecx + 8);
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E291; /* je: equal / zero */

loc_0036E27F: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E291; /* je: equal / zero */

loc_0036E285: ;
    ecx = MEM32(ecx + 4);
    eax = MEM32(ebp + 8);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0036E2B3;

loc_0036E291: ;
    ebx = MEM32(ecx + 8);
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E2B0; /* jne: not equal / not zero */

loc_0036E29A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036E2B0; /* je: equal / zero */

loc_0036E2A2: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E2B0; /* je: equal / zero */

loc_0036E2A8: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0036E2B3;

loc_0036E2B0: ;
    eax = MEM32(ebp + 8);

loc_0036E2B3: ;
    POP32(esp, esi);
    MEM32(edi + 0x600800) = eax;
    POP32(esp, ebx);

loc_0036E2BB: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036E2C0
 * Original: 0x0036E2C0 - 0x0036E319 (89 bytes, 23 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036E2C0: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = 0xFFFFFF00u;
    MEM8(ecx + 0x6813C8) = 0;
    eax = edx + 0x100;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0036E2DB: ;
    edx = esi + eax;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 7 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036E2E9; /* jne: not equal / not zero */

loc_0036E2E3: ;
    edx = MEM32(ecx + 0x3240);

loc_0036E2E9: ;
    SET_LO8(edx, MEM8(eax + -256));
    MEM8(ecx + 0x6813C9) = LO8(edx);
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + 0x6813C9) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x100));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx + 0x6813C9) = LO8(edx);
    edx = esi + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036E2DB; /* jb: below (unsigned <) */

loc_0036E315: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036E320
 * Original: 0x0036E320 - 0x0036E459 (313 bytes, 100 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036E320: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + 0x1C;
    MEM32(eax + 4) = 0;
    MEM32(eax + 0x10) = 0;
    edx = edi;
    esi = 0x10;
    /* nop */

loc_0036E340: ;
    MEM32(edx) = 2;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0036E340; /* jne: not equal / not zero */

loc_0036E34C: ;
    ebx = MEM32(esp + 0x14);
    esi = ebx;
    esi = esi & 0xE;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E36D; /* jne: not equal / not zero */

loc_0036E35C: ;
    MEM32(eax + 4) = MEM32(eax + 4) | 2;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = 0x42;
    edx = 0x10;
    goto loc_0036E3A0;

loc_0036E36D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E3A0; /* je: equal / zero */

loc_0036E371: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    MEM32(edi) = 0x32;
    edx = 0xC;
    if (CMP_B(_fa, _fb)) goto loc_0036E3A0; /* jb: below (unsigned <) */

loc_0036E381: ;
    edx = esi + -6;
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x28) = 0xC;
    MEM32(eax + 0x2C) = ecx;
    edx = edx * 4 + 0xC;

loc_0036E3A0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036E3B2; /* je: equal / zero */

loc_0036E3A5: ;
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x3C) = 0x32;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036E3B2: ;
    ecx = 0x40;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036E3D0; /* je: equal / zero */

loc_0036E3BB: ;
    edi = MEM32(eax + 4);
    edi = edi | 0x400;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x48) = edx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 4) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036E3D0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0036E3E9; /* jns: not sign (positive) */

loc_0036E3D4: ;
    esi = MEM32(eax + 4);
    esi = esi | 0x800;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x58) = edx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036E3E9: ;
    esi = ebx;
    esi = esi >> 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_0036E453; /* jbe: below or equal (unsigned <=) */

loc_0036E3FC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = eax + 0xAC;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, ebp);
    /* nop */

loc_0036E410: ;
    ebx = ebx & 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebx * 4 + 0x3796E0);
    ebx = esi;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = ebx;
    ebx = esi;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + -4) = edx;
    ebp = MEM32(eax + 0x10);
    edx = edx + esi * 4;
    esi = MEM32(esp + 0x18);
    ebp = ebp | ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = MEM32(esp + 0x14);
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0x10) = ebp;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = esi;
    if ((_fa != 0)) goto loc_0036E410; /* jne: not equal / not zero */

loc_0036E452: ;
    POP32(esp, ebp);

loc_0036E453: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036E460
 * Original: 0x0036E460 - 0x0036E50E (174 bytes, 58 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036E460: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(0x37B648);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x114;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    ecx = ecx + edx + 0x10A8;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = ecx;
    /* nop */

loc_0036E490: ;
    ecx = MEM32(eax);
    edx = ecx;
    edx = edx >> 0x12;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E4AC; /* jne: not equal / not zero */

loc_0036E49F: ;
    edi = MEM32(eax);
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x37A590) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x37A590;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0036E4F9;

loc_0036E4AC: ;
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = edx * 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xB00 (32-bit) */
    ecx = ebx;
    esi = eax;
    ebp = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0036E4E7; /* jne: not equal / not zero */

loc_0036E4C7: ;
    edi = MEM32(esp + 0x18);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = ebp;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = ecx;
    goto loc_0036E4FD;

loc_0036E4E7: ;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = ebp;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    edi = MEM32(esp + 0x14);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036E4F9: ;
    MEM32(esp + 0x14) = edi;

loc_0036E4FD: ;
    ecx = MEM32(eax + edx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = eax + edx * 4;
    if (CMP_NE(_fa, _fb)) goto loc_0036E490; /* jne: not equal / not zero */

loc_0036E507: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036E510
 * Original: 0x0036E510 - 0x0036E578 (104 bytes, 38 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036E510: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_0036E520: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    ebx = ecx;
    if (CMP_B(_fa, _fb)) goto loc_0036E52C; /* jb: below (unsigned <) */

loc_0036E527: ;
    ebx = 0x20;

loc_0036E52C: ;
    esi = MEM32(esp + 0x18);
    ecx = ebx;
    ecx = ecx << 0x12;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xB00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    edx = ebx * 4;
    ecx = edx;
    ebp = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + 4;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = ebp;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    esi = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = esi;
    eax = eax + edx + 4;
    MEM32(esp + 0x1C) = ecx;
    if ((_fa != 0)) goto loc_0036E520; /* jne: not equal / not zero */

loc_0036E571: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036E580
 * Original: 0x0036E580 - 0x0036E594 (20 bytes, 5 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E580(void)
{

loc_0036E580: ;
    eax = MEM32(0x37B648);
    ecx = MEM32(eax + 0x1928);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036E5A0
 * Original: 0x0036E5A0 - 0x0036E739 (409 bytes, 130 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E5A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036E5A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = ebp;

loc_0036E5B3: ;
    eax = MEM32(ebx);
    ecx = eax;
    ecx = ecx & 0xE0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x60000000 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_A(_fa, _fb)) goto loc_0036E719; /* ja: above (unsigned >) */

loc_0036E5D0: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0036E6D3; /* je: equal / zero */

loc_0036E5D6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E5B3; /* je: equal / zero */

loc_0036E5DA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E6C5; /* je: equal / zero */

loc_0036E5E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036E603; /* je: equal / zero */

loc_0036E5ED: ;
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x8000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036E5FF; /* jne: not equal / not zero */

loc_0036E5FC: ;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0036E5FF: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0036E5B3;

loc_0036E603: ;
    esi = ZX8(MEM8(esp + 0x1A));
    edx = MEM32(esp + 0x10);
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = ebp;
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx + 0x1C) = esi;
    ecx = eax + 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ecx + edi) = 0;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E6A2; /* je: equal / zero */

loc_0036E631: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036E665; /* jb: below (unsigned <) */

loc_0036E636: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0036E665; /* ja: above (unsigned >) */

loc_0036E63B: ;
    edx = esi;
    edx = edx >> 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E64F; /* jne: not equal / not zero */

loc_0036E648: ;
    edx = 4;
    goto loc_0036E659;

loc_0036E64F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x16 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E659; /* jne: not equal / not zero */

loc_0036E654: ;
    edx = 3;

loc_0036E659: ;
    ecx = eax * 8 + -72;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + 0x10) = MEM32(edi + 0x10) | edx;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036E665: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E674; /* jne: not equal / not zero */

loc_0036E66A: ;
    eax = MEM32(edi + 4);
    eax = eax | 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0036E69F;

loc_0036E674: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E683; /* jne: not equal / not zero */

loc_0036E679: ;
    eax = MEM32(edi + 4);
    eax = eax | 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0036E69F;

loc_0036E683: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E692; /* jne: not equal / not zero */

loc_0036E688: ;
    eax = MEM32(edi + 4);
    eax = eax | 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0036E69F;

loc_0036E692: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E6A2; /* jne: not equal / not zero */

loc_0036E697: ;
    eax = MEM32(edi + 4);
    eax = eax | 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036E69F: ;
    MEM32(edi + 4) = eax;

loc_0036E6A2: ;
    edx = esi;
    edx = edx >> 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ZX8(MEM8(edx + 0x379434));
    esi = esi & 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(MEM8(esi + 0x37942C));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0036E5B3;

loc_0036E6C5: ;
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0036E5B3;

loc_0036E6D3: ;
    esi = eax;
    esi = esi & 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = esi;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx + edi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x18) = edx;
    MEM32(ecx + 0x14) = edx;
    edx = eax;
    edx = edx >> 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, LO8(edx) & 0xF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000000 (32-bit) */
    MEM32(ecx + 0x1C) = 2;
    MEM8(ecx + 0x21) = LO8(edx);
    if (TEST_Z(_fa, _fb)) goto loc_0036E710; /* je: equal / zero */

loc_0036E707: ;
    MEM8(esi + edi) = 2;
    goto loc_0036E5B3;

loc_0036E710: ;
    MEM8(esi + edi) = 1;
    goto loc_0036E5B3;

loc_0036E719: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E731; /* jne: not equal / not zero */

loc_0036E721: ;
    eax = eax >> 0x19;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0036E5B3;

loc_0036E731: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036E740
 * Original: 0x0036E740 - 0x0036E837 (247 bytes, 82 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036E740: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    edi = 0xDEADBEEFu;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0036E82E; /* je: equal / zero */

loc_0036E76B: ;
    PUSH32(esp, ebx);
    /* nop */

loc_0036E770: ;
    edx = ecx;
    edx = edx & 0xE0000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E81B; /* jne: not equal / not zero */

loc_0036E784: ;
    edx = ecx;
    edx = edx >> 0x19;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0036E7B3; /* je: equal / zero */

loc_0036E79B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E7AC; /* je: equal / zero */

loc_0036E79F: ;
    MEM32(ebp) = 0x41EA4;
    MEM32(ebp + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036E7AC: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = eax;

loc_0036E7B3: ;
    MEM32(esp + 0x14) = ecx;

loc_0036E7B7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    ebx = edx;
    if (CMP_B(_fa, _fb)) goto loc_0036E7C3; /* jb: below (unsigned <) */

loc_0036E7BE: ;
    ebx = 8;

loc_0036E7C3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E7FC; /* je: equal / zero */

loc_0036E7C7: ;
    eax = ebx;
    eax = eax << 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xB80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    edx = ebx;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebp;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = eax;
    eax = MEM32(esp + 0x20);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    esi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x10);

loc_0036E7FC: ;
    ecx = ebx;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + ebx * 4 + 1;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x10) = edx;
    if ((_fa != 0)) goto loc_0036E7B7; /* jne: not equal / not zero */

loc_0036E817: ;
    edi = MEM32(esp + 0x14);

loc_0036E81B: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0036E770; /* jne: not equal / not zero */

loc_0036E82D: ;
    POP32(esp, ebx);

loc_0036E82E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036E840
 * Original: 0x0036E840 - 0x0036E97E (318 bytes, 113 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036E840: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0036E85C; /* je: equal / zero */

loc_0036E84C: ;
    eax = ZX16(MEM16(ebp));
    ecx = ZX16(MEM16(ebp + 2));
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x18) = ecx;

loc_0036E85C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E872; /* je: equal / zero */

loc_0036E862: ;
    eax = MEM32(esp + 0x18);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + 0x7F;
    edx = edx >> 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax + edx * 4;

loc_0036E872: ;
    ecx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E886; /* je: equal / zero */

loc_0036E87C: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036E883u); RECOMP_ABI_CALL(0x0036E740u, sub_0036E740); /* call 0x0036E740 */

loc_0036E883: ;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0036E886: ;
    ebx = eax + esi;
    PUSH32(esp, 0x24800000);
    eax = ebx + 0x118;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036E89Au); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_0036E89A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E8AC; /* jne: not equal / not zero */

loc_0036E8A0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x8007000Eu;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_0036E8AC: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x46;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0x24);
    MEM32(esi + 4) = ecx;
    MEM32(esi) = 1;
    eax = esi + 0x1C;
    ecx = 0x10;
    /* nop */

loc_0036E8D0: ;
    MEM32(eax) = 2;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0036E8D0; /* jne: not equal / not zero */

loc_0036E8DC: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E8F3; /* je: equal / zero */

loc_0036E8E4: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036E8F3u); RECOMP_ABI_CALL(0x0036E5A0u, sub_0036E5A0); /* call 0x0036E5A0 */

loc_0036E8F3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E946; /* je: equal / zero */

loc_0036E8F9: ;
    edi = MEM32(esi + 4);
    ecx = MEM32(esp + 0x10);
    edi = edi | 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2078) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2078 (32-bit) */
    MEM32(esi + 4) = edi;
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0036E916; /* je: equal / zero */

loc_0036E910: ;
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = eax;

loc_0036E916: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7378) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7378 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036E922; /* jne: not equal / not zero */

loc_0036E91E: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 8;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036E922: ;
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 8) = eax;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    edi = esi + 0x114;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036E93Du); RECOMP_ABI_CALL(0x0036E510u, sub_0036E510); /* call 0x0036E510 */

loc_0036E93D: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(esp + 0x18);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_0036E946: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036E958; /* je: equal / zero */

loc_0036E94A: ;
    ecx = esi + eax * 4 + 0x114;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036E958u); RECOMP_ABI_CALL(0x0036E740u, sub_0036E740); /* call 0x0036E740 */

loc_0036E958: ;
    edx = MEM32(esp + 0x20);
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + eax * 4 + 0x114) = 0;
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(edx) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0036E980
 * Original: 0x0036E980 - 0x0036E994 (20 bytes, 5 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E980(void)
{

loc_0036E980: ;
    eax = MEM32(0x37B648);
    ecx = MEM32(eax + 0x798);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036E9A0
 * Original: 0x0036E9A0 - 0x0036E9FF (95 bytes, 31 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036E9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036E9A0: ;
    PUSH32(esp, ebx);

loc_0036E9A1: ;
    eax = MEM32(0x37B650);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37B654)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x37B654) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0036E9F4; /* jae: above or equal (unsigned >=) */

loc_0036E9B1: ;
    MEM32(0x37B650) = eax;
    MEM32(eax + -28) = 0x41EA4;
    MEM32(eax + -24) = ecx;
    MEM32(eax + -20) = 0x100B80;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + 0x37A590;
    ebx = MEM32(edx);
    MEM32(eax + -16) = ebx;
    MEM32(ecx) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(eax + -12) = ebx;
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(edx + 8);
    MEM32(eax + -8) = ebx;
    MEM32(ecx + 8) = ebx;
    ebx = MEM32(edx + 0xC);
    MEM32(eax + -4) = ebx;
    MEM32(ecx + 0xC) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0036E9F4: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036E9FBu); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036E9FB: ;
    POP32(esp, ecx);
    POP32(esp, edx);
    goto loc_0036E9A1;

}

/**
 * sub_0036EA00
 * Original: 0x0036EA00 - 0x0036EA49 (73 bytes, 23 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036EA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036EA00: ;
    eax = MEM32(0x37B650);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37B654)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x37B654) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0036EA3E; /* jae: above or equal (unsigned >=) */

loc_0036EA10: ;
    MEM32(0x37B650) = eax;
    MEM32(eax + -28) = 0x41EA4;
    MEM32(eax + -24) = ecx;
    MEM32(eax + -20) = 0x100B80;
    ecx = MEM32(edx);
    MEM32(eax + -16) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + -12) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + -8) = ecx;
    ecx = MEM32(edx + 0xC);
    MEM32(eax + -4) = ecx;
    esp += 4; return; /* ret */

loc_0036EA3E: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036EA45u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036EA45: ;
    POP32(esp, ecx);
    POP32(esp, edx);
    goto loc_0036EA00;

}

/**
 * sub_0036EA50
 * Original: 0x0036EA50 - 0x0036EAF2 (162 bytes, 42 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036EA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036EA50: ;
    eax = MEM32(0x37B650);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37B654)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x37B654) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0036EAE4; /* jae: above or equal (unsigned >=) */

loc_0036EA64: ;
    MEM32(0x37B650) = eax;
    mm0 = MMX_MEM(edx); /* movq */
    mm1 = MMX_MEM(edx + 8); /* movq */
    mm2 = MMX_MEM(edx + 0x10); /* movq */
    mm3 = MMX_MEM(edx + 0x18); /* movq */
    mm4 = MMX_MEM(edx + 0x20); /* movq */
    mm5 = MMX_MEM(edx + 0x28); /* movq */
    mm6 = MMX_MEM(edx + 0x30); /* movq */
    mm7 = MMX_MEM(edx + 0x38); /* movq */
    MEM32(eax + -76) = 0x41EA4;
    MEM32(eax + -72) = ecx;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + 0x37A590;
    MEM32(eax + -68) = 0x400B80;
    MMX_STORE(eax + -64, mm0); /* movq */
    MMX_STORE(ecx, mm0); /* movq */
    MMX_STORE(eax + -56, mm1); /* movq */
    MMX_STORE(ecx + 8, mm1); /* movq */
    MMX_STORE(eax + -48, mm2); /* movq */
    MMX_STORE(ecx + 0x10, mm2); /* movq */
    MMX_STORE(eax + -40, mm3); /* movq */
    MMX_STORE(ecx + 0x18, mm3); /* movq */
    MMX_STORE(eax + -32, mm4); /* movq */
    MMX_STORE(ecx + 0x20, mm4); /* movq */
    MMX_STORE(eax + -24, mm5); /* movq */
    MMX_STORE(ecx + 0x28, mm5); /* movq */
    MMX_STORE(eax + -16, mm6); /* movq */
    MMX_STORE(ecx + 0x30, mm6); /* movq */
    MMX_STORE(eax + -8, mm7); /* movq */
    MMX_STORE(ecx + 0x38, mm7); /* movq */
    (void)0; /* emms - empty MMX state */
    esp += 4; return; /* ret */

loc_0036EAE4: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036EAEBu); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036EAEB: ;
    POP32(esp, ecx);
    POP32(esp, edx);
    goto loc_0036EA50;

}

/**
 * sub_0036EB00
 * Original: 0x0036EB00 - 0x0036EBD0 (208 bytes, 63 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036EB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036EB00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x37B650);
    esi = edx;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37B654)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x37B654) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0036EBC0; /* jae: above or equal (unsigned >=) */

loc_0036EB1A: ;
    MEM32(edi) = 0x41EA4;
    MEM32(edi + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0036EB4A; /* jae: above or equal (unsigned >=) */

loc_0036EB2B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    eax = eax << 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0xB80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + -4) = eax;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */

loc_0036EB3D: ;
    MEM32(0x37B650) = edi;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0036EB4A: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    mm0 = MMX_MEM(esi); /* movq */
    mm1 = MMX_MEM(esi + 8); /* movq */
    mm2 = MMX_MEM(esi + 0x10); /* movq */
    mm3 = MMX_MEM(esi + 0x18); /* movq */
    mm4 = MMX_MEM(esi + 0x20); /* movq */
    mm5 = MMX_MEM(esi + 0x28); /* movq */
    mm6 = MMX_MEM(esi + 0x30); /* movq */
    mm7 = MMX_MEM(esi + 0x38); /* movq */
    MEM32(edi) = 0x400B80;
    MMX_STORE(edi + 4, mm0); /* movq */
    MMX_STORE(edi + 0xC, mm1); /* movq */
    MMX_STORE(edi + 0x14, mm2); /* movq */
    MMX_STORE(edi + 0x1C, mm3); /* movq */
    MMX_STORE(edi + 0x24, mm4); /* movq */
    MMX_STORE(edi + 0x2C, mm5); /* movq */
    MMX_STORE(edi + 0x34, mm6); /* movq */
    MMX_STORE(edi + 0x3C, mm7); /* movq */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x44;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0036EB3D; /* je: equal / zero */

loc_0036EB9F: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036EB2B; /* jb: below (unsigned <) */

loc_0036EBA7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x37B654)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x37B654) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036EB4A; /* jb: below (unsigned <) */

loc_0036EBAF: ;
    PUSH32(esp, eax);
    MEM32(0x37B650) = edi;
    PUSH32(esp, 0x0036EBBBu); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036EBBB: ;
    edi = eax;
    POP32(esp, eax);
    goto loc_0036EB4A;

loc_0036EBC0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036EBC7u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036EBC7: ;
    edi = eax;
    POP32(esp, ecx);
    POP32(esp, eax);
    goto loc_0036EB1A;

}

/**
 * sub_0036EBE0
 * Original: 0x0036EBE0 - 0x0036EC11 (49 bytes, 20 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036EBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036EBE0: ;
    eax = ecx;
    _fa = (uint32_t)(MEM8(0x37B658)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x37B658), 0x10 (8-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (TEST_NZ(_fa, _fb)) goto loc_0036EC05; /* jne: not equal / not zero */

loc_0036EBF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x37A590) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x37A590;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    esi = edx;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_0036EC05: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0036EC0Du); RECOMP_ABI_CALL(0x0036EB00u, sub_0036EB00); /* call 0x0036EB00 */

loc_0036EC0D: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036EC20
 * Original: 0x0036EC20 - 0x0036EC4D (45 bytes, 17 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036EC20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036EC20: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x37AB90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x37AB90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036EC50
 * Original: 0x0036EC50 - 0x0036EC87 (55 bytes, 17 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036EC50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036EC50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036EC79; /* je: equal / zero */

loc_0036EC59: ;
    PUSH32(esp, edi);
    ecx = 0x40;
    edi = 0x37DBC4;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    edx = 0x37DBB0;
    edx = edx | 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0036F170(); return; /* tail jmp 0x0036F170 */

loc_0036EC79: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_0036F170(); return; /* tail jmp 0x0036F170 */

}

/**
 * sub_0036EC90
 * Original: 0x0036EC90 - 0x0036ECE4 (84 bytes, 32 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036EC90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036EC90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x37B648);
    SET_LO8(eax, MEM8(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036ECB1; /* jne: not equal / not zero */

loc_0036ECA6: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036ECB1u); RECOMP_ABI_CALL(0x0036E460u, sub_0036E460); /* call 0x0036E460 */

loc_0036ECB1: ;
    esi = MEM32(edi + 0xC);
    ebx = esi + 2;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0036ECBDu); RECOMP_ABI_CALL(0x00370400u, sub_00370400); /* call 0x00370400 */

loc_0036ECBD: ;
    ecx = MEM32(esp + 0x18);
    MEM32(eax) = 0x41E9C;
    MEM32(eax + 4) = ecx;
    ecx = esi;
    esi = edi + 0x114;
    edi = eax + 8;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, edi);
    edx = eax + ebx * 4;
    POP32(esp, esi);
    MEM32(ebp) = edx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036ECF0
 * Original: 0x0036ECF0 - 0x0036ED8C (156 bytes, 44 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036ECF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036ECF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    if (CMP_EQ(_fa, _fb)) goto loc_0036ED64; /* je: equal / zero */

loc_0036ECFF: ;
    ecx = MEM32(esi + 0x794);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edi);
    edi = eax + -1;
    MEM32(esi + 0x794) = edi;
    MEM32(esi + 0x798) = eax;
    MEM32(0x37B1A8) = MEM32(0x37B1A8) | 0x70;
    _fa = (uint32_t)(MEM32(0x37B1A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(edi + 4);
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x13) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x13 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036ED63; /* je: equal / zero */

loc_0036ED29: ;
    MEM32(0x37B1A8) = MEM32(0x37B1A8) | 0x1000;
    _fa = (uint32_t)(MEM32(0x37B1A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036ED3F; /* jb: below (unsigned <) */

loc_0036ED3A: ;
    PUSH32(esp, 0x0036ED3Fu); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036ED3F: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x0036ED48u); RECOMP_ABI_CALL(0x0036D740u, sub_0036D740); /* call 0x0036D740 */

loc_0036ED48: ;
    ecx = MEM32(edi + 4);
    MEM32(eax) = 0x81E94;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = 6;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;

loc_0036ED63: ;
    POP32(esp, edi);

loc_0036ED64: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036ED70; /* jb: below (unsigned <) */

loc_0036ED6B: ;
    PUSH32(esp, 0x0036ED70u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036ED70: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0x41EA0;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(esi + 0x79C) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036ED90
 * Original: 0x0036ED90 - 0x0036EEA8 (280 bytes, 65 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036ED90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036ED90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(0x37B648);
    ecx = MEM32(ebx + 8);
    if (TEST_Z(_fa, _fb)) goto loc_0036EDAA; /* je: equal / zero */

loc_0036EDA2: ;
    ecx = ecx | 0x200;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0036EDB0;

loc_0036EDAA: ;
    ecx = ecx & 0xFFFFFDFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0036EDB0: ;
    eax = eax & 0xFFFFFFEFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 8) = ecx;
    MEM32(ebx + 0x1928) = eax;
    if ((_fa != 0)) goto loc_0036EEA4; /* jne: not equal / not zero */

loc_0036EDC2: ;
    MEM32(0x37B1A8) = MEM32(0x37B1A8) | 0x1600;
    _fa = (uint32_t)(MEM32(0x37B1A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036EDD8; /* jb: below (unsigned <) */

loc_0036EDD3: ;
    PUSH32(esp, 0x0036EDD8u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036EDD8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(eax) = 0x41EA4;
    MEM32(eax + 4) = 0x3C;
    MEM32(eax + 8) = 0x300B80;
    edi = eax + 0xC;
    PUSH32(esp, 0x379440);
    ecx = 0xC;
    esi = 0x379480;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    esi = eax + 0x3C;
    PUSH32(esp, 0x400840);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036EE10u); RECOMP_ABI_CALL(0x0036FBA0u, sub_0036FBA0); /* call 0x0036FBA0 */

loc_0036EE10: ;
    PUSH32(esp, 0x379440);
    PUSH32(esp, 0x400880);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036EE23u); RECOMP_ABI_CALL(0x0036FBA0u, sub_0036FBA0); /* call 0x0036FBA0 */

loc_0036EE23: ;
    PUSH32(esp, 0x379440);
    PUSH32(esp, 0x4008C0);
    ecx = esi + 0x88;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036EE39u); RECOMP_ABI_CALL(0x0036FBA0u, sub_0036FBA0); /* call 0x0036FBA0 */

loc_0036EE39: ;
    PUSH32(esp, 0x379440);
    PUSH32(esp, 0x400900);
    edx = esi + 0xCC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036EE4Fu); RECOMP_ABI_CALL(0x0036FBA0u, sub_0036FBA0); /* call 0x0036FBA0 */

loc_0036EE4F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x110) = 0x1009D0;
    MEM32(esi + 0x114) = eax;
    MEM32(esi + 0x118) = eax;
    MEM32(esi + 0x120) = eax;
    ecx = 0x3F800000;
    MEM32(esi + 0x11C) = ecx;
    MEM32(esi + 0x124) = 0x100A50;
    MEM32(esi + 0x128) = eax;
    MEM32(esi + 0x12C) = eax;
    MEM32(esi + 0x130) = eax;
    MEM32(esi + 0x134) = ecx;
    _fb = (uint32_t)(0x138) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x138;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ebx) = esi;
    POP32(esp, esi);

loc_0036EEA4: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036EEB0
 * Original: 0x0036EEB0 - 0x0036EEE9 (57 bytes, 18 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036EEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036EEB0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036EEC3; /* jb: below (unsigned <) */

loc_0036EEBE: ;
    PUSH32(esp, 0x0036EEC3u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036EEC3: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    MEM32(eax) = 0x41E9C;
    PUSH32(esp, ecx);
    MEM32(eax + 4) = 0;
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036EEE3u); RECOMP_ABI_CALL(0x0036E510u, sub_0036E510); /* call 0x0036E510 */

loc_0036EEE3: ;
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036EEF0
 * Original: 0x0036EEF0 - 0x0036EF0B (27 bytes, 10 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036EEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036EEF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + -1);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    if ((_fa != 0)) goto loc_0036EF08; /* jne: not equal / not zero */

loc_0036EEFD: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036EF08u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_0036EF08: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036EF10
 * Original: 0x0036EF10 - 0x0036EFFF (239 bytes, 70 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036EF10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036EF10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x794);
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036EFFD; /* je: equal / zero */

loc_0036EF23: ;
    eax = MEM32(0x37B524);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0036EF38; /* jne: not equal / not zero */

loc_0036EF31: ;
    ebp = 0x379620;
    goto loc_0036EF4F;

loc_0036EF38: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036EF4A; /* je: equal / zero */

loc_0036EF3E: ;
    edi = 0x2C;
    ebp = 0x379570;
    goto loc_0036EF54;

loc_0036EF4A: ;
    ebp = 0x3794B0;

loc_0036EF4F: ;
    edi = 0x30;

loc_0036EF54: ;
    ecx = edi + 0x1E;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0036EF5Du); RECOMP_ABI_CALL(0x00370400u, sub_00370400); /* call 0x00370400 */

loc_0036EF5D: ;
    MEM32(eax) = 0x41EA4;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = 0x200B80;
    _fa = (uint32_t)(MEM32(0x37B5EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37B5EC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036EF84; /* jne: not equal / not zero */

loc_0036EF76: ;
    fp_push(MEMF(esi + 0x948)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x944)); /* fmul dword ptr [esi + 0x944] */
    goto loc_0036EF8A;

loc_0036EF84: ;
    fp_push(MEMF(0x429344)); /* fld float */

loc_0036EF8A: ;
    edx = MEM32(esi + 0x95C);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(esi + 0x960);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0x948);
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x429350)); /* fld float */
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0036EFC5; /* jns: not sign (positive) */

loc_0036EFB5: ;
    _fa = (uint32_t)(MEM32(0x37B610)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37B610), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036EFC5; /* je: equal / zero */

loc_0036EFBD: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x429354)); /* fld float */

loc_0036EFC5: ;
    fp_push(MEMF(esi + 0xEF8)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEMF(eax + -24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xEFC)); /* fld float */
    MEM32(eax + -16) = ebx;
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEM32(eax + -12) = ebx;
    MEMF(eax + -20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + -8) = 0x41E9C;
    MEM32(eax + -4) = ebx;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0036EFF8u); RECOMP_ABI_CALL(0x0036E510u, sub_0036E510); /* call 0x0036E510 */

loc_0036EFF8: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi) = eax;
    POP32(esp, ebx);

loc_0036EFFD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036F000
 * Original: 0x0036F000 - 0x0036F163 (355 bytes, 116 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036F000: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi + 0x794);
    ecx = MEM32(eax + 4);
    ebp = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0036F046; /* je: equal / zero */

loc_0036F024: ;
    SET_LO8(eax, MEM8(ebx + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    edi = ebx + -1;
    if (TEST_Z(_fa, _fb)) goto loc_0036F052; /* je: equal / zero */

loc_0036F02E: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0036F037u); RECOMP_ABI_CALL(0x0036EC90u, sub_0036EC90); /* call 0x0036EC90 */

loc_0036F037: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0036F03Eu); RECOMP_ABI_CALL(0x0036ECF0u, sub_0036ECF0); /* call 0x0036ECF0 */

loc_0036F03E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0036F046: ;
    PUSH32(esp, ebx);
    edi = 0x37DCC8;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0036F052u); RECOMP_ABI_CALL(0x0036E320u, sub_0036E320); /* call 0x0036E320 */

loc_0036F052: ;
    ecx = MEM32(0x37B1A8);
    ecx = ecx | 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x37B1A8) = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F072; /* je: equal / zero */

loc_0036F066: ;
    eax = ecx;
    eax = eax | 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x37B1A8) = eax;

loc_0036F072: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036F085; /* je: equal / zero */

loc_0036F07B: ;
    MEM32(0x37B1A8) = MEM32(0x37B1A8) | 0x1600;
    _fa = (uint32_t)(MEM32(0x37B1A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0036F085: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x794) = edi;
    MEM32(esi + 0x798) = ebx;
    MEM32(esi + 0x79C) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_0036F0A7; /* jb: below (unsigned <) */

loc_0036F0A2: ;
    PUSH32(esp, 0x0036F0A7u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036F0A7: ;
    edx = MEM32(edi + 4);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036F0BE; /* jne: not equal / not zero */

loc_0036F0B2: ;
    MEM32(eax) = 0x4194C;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036F0BE: ;
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036F0D2; /* jne: not equal / not zero */

loc_0036F0C6: ;
    MEM32(eax) = 0x41950;
    MEM32(eax + 4) = ebp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036F0D2: ;
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036F0E6; /* jne: not equal / not zero */

loc_0036F0DA: ;
    MEM32(eax) = 0x4195C;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036F0E6: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036F0FA; /* jne: not equal / not zero */

loc_0036F0EE: ;
    MEM32(eax) = 0x41960;
    MEM32(eax + 4) = ebp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036F0FA: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036F139; /* je: equal / zero */

loc_0036F102: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x0036F10Bu); RECOMP_ABI_CALL(0x0036D740u, sub_0036D740); /* call 0x0036D740 */

loc_0036F10B: ;
    MEM32(eax) = 0x41EA0;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = 0x81E94;
    MEM32(eax + 0xC) = 6;
    MEM32(eax + 0x10) = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi) = eax;
    PUSH32(esp, 0x0036F131u); RECOMP_ABI_CALL(0x0036EF10u, sub_0036EF10); /* call 0x0036EF10 */

loc_0036F131: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0036F139: ;
    ecx = ecx ^ MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x12 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036F159; /* je: equal / zero */

loc_0036F142: ;
    MEM32(eax) = 0x41E94;
    edx = eax + 8;
    ecx = esi;
    MEM32(eax + 4) = 4;
    PUSH32(esp, 0x0036F159u); RECOMP_ABI_CALL(0x0036D740u, sub_0036D740); /* call 0x0036D740 */

loc_0036F159: ;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036F170
 * Original: 0x0036F170 - 0x0036F31E (430 bytes, 137 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036F170: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(0x37B648);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0036F1EB; /* jne: not equal / not zero */

loc_0036F184: ;
    eax = MEM32(0x37B1A8);
    eax = eax & 0xBFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x37B1A8) = eax;
    eax = MEM32(ebx + 0xB04);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0036F1D8; /* jbe: below or equal (unsigned <=) */

loc_0036F1A2: ;
    esi = ebx + 0xB08;

loc_0036F1A8: ;
    eax = MEM32(esi);
    ecx = MEM32(ebx + 0x2C);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = ecx;
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0036F1CA; /* jne: not equal / not zero */

loc_0036F1C4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036F1CAu); RECOMP_ABI_CALL(0x0036BC50u, sub_0036BC50); /* call 0x0036BC50 */

loc_0036F1CA: ;
    eax = MEM32(ebx + 0xB04);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036F1A8; /* jb: below (unsigned <) */

loc_0036F1D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xB04) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0036F1EB: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x58);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0036F212; /* jbe: below or equal (unsigned <=) */

loc_0036F1F4: ;
    ecx = MEM32(esp + 0x5C);
    edx = ebp;
    /* nop */

loc_0036F200: ;
    eax = MEM32(ecx);
    edi = MEM32(eax);
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x80000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = edi;
    if ((_fa != 0)) goto loc_0036F200; /* jne: not equal / not zero */

loc_0036F212: ;
    eax = MEM32(ebx + 0xB04);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0036F254; /* jbe: below or equal (unsigned <=) */

loc_0036F21E: ;
    esi = ebx + 0xB08;

loc_0036F224: ;
    eax = MEM32(esi);
    edx = MEM32(ebx + 0x2C);
    MEM32(eax + 8) = edx;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0036F246; /* jne: not equal / not zero */

loc_0036F240: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036F246u); RECOMP_ABI_CALL(0x0036BC50u, sub_0036BC50); /* call 0x0036BC50 */

loc_0036F246: ;
    eax = MEM32(ebx + 0xB04);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036F224; /* jb: below (unsigned <) */

loc_0036F254: ;
    eax = MEM32(0x37B1A8);
    ecx = MEM32(esp + 0x54);
    esi = MEM32(esp + 0x5C);
    eax = eax & 0xFFFFFF8Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x40000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x37B1A8) = eax;
    MEM32(ebx + 0xB00) = ecx;
    ecx = ebp + ebp * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebx + 0xB04) = ebp;
    edi = ebx + 0xB08;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    MEM32(esp + 0x58) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0036F2A9; /* jb: below (unsigned <) */

loc_0036F2A0: ;
    PUSH32(esp, 0x0036F2A5u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0036F2A5: ;
    MEM32(esp + 0x58) = eax;

loc_0036F2A9: ;
    ecx = MEM32(esp + 0x54);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x401720;
    edi = eax + 4;
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1B;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0036F2C0;

    /* nop */

loc_0036F2C0: ;
    edx = MEM32(ecx + -8);
    ebp = MEM32(ecx + -4);
    eax = edx + edx * 2;
    edx = MEM32(esp + 0x5C);
    edx = edx + eax * 4;
    eax = MEM32(edx);
    _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(eax + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(edx + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebp;
    edx = MEM32(edx + 4);
    ebp = MEM32(ecx);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + esi * 4 + 0x10) = edx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036F2C0; /* jb: below (unsigned <) */

loc_0036F2F4: ;
    eax = MEM32(esp + 0x58);
    MEM32(eax + 0x44) = 0x401760;
    edi = eax + 0x48;
    POP32(esp, ebp);
    ecx = 0x10;
    esi = esp + 0xC;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, edi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036F320
 * Original: 0x0036F320 - 0x0036F377 (87 bytes, 22 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F320(void)
{

loc_0036F320: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0x10);
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SHUFFLE(xmm2, xmm2, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, XMM_MEM(ecx)); /* mulps */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x10)); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x20)); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    eax = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x30)); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    XMM_STORE_LOW(eax, xmm2); /* movlps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm2, 2); /* shufps */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0036F380
 * Original: 0x0036F380 - 0x0036F47A (250 bytes, 68 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F380(void)
{

loc_0036F380: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    xmm2 = XMM_MEM(eax); /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm2, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, XMM_MEM(ecx)); /* mulps */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0x55); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x10)); /* mulps */
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    xmm0 = XMM_MUL(xmm0, XMM_MEM(ecx + 0x20)); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    xmm1 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0xFF); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x30)); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm0); /* addps */
    xmm3 = XMM_MEM(eax + 0x10); /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm3, 0); /* shufps */
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    xmm3 = XMM_MUL(xmm3, XMM_MEM(ecx)); /* mulps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0x55); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x10)); /* mulps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    xmm0 = XMM_MUL(xmm0, XMM_MEM(ecx + 0x20)); /* mulps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0xFF); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x30)); /* mulps */
    xmm3 = XMM_ADD(xmm3, xmm0); /* addps */
    xmm4 = XMM_MEM(eax + 0x20); /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm4, 0); /* shufps */
    xmm3 = XMM_ADD(xmm3, xmm1); /* addps */
    xmm4 = XMM_MUL(xmm4, XMM_MEM(ecx)); /* mulps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0x55); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x10)); /* mulps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    xmm0 = XMM_MUL(xmm0, XMM_MEM(ecx + 0x20)); /* mulps */
    xmm4 = XMM_ADD(xmm4, xmm1); /* addps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0xFF); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x30)); /* mulps */
    xmm4 = XMM_ADD(xmm4, xmm0); /* addps */
    xmm5 = XMM_MEM(eax + 0x30); /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm5, 0); /* shufps */
    xmm4 = XMM_ADD(xmm4, xmm1); /* addps */
    xmm5 = XMM_MUL(xmm5, XMM_MEM(ecx)); /* mulps */
    xmm1 = XMM_MEM(eax + 0x30); /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0x55); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x10)); /* mulps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0xAA); /* shufps */
    xmm0 = XMM_MUL(xmm0, XMM_MEM(ecx + 0x20)); /* mulps */
    xmm5 = XMM_ADD(xmm5, xmm1); /* addps */
    xmm1 = XMM_MEM(eax + 0x30); /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm1, 0xFF); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(ecx + 0x30)); /* mulps */
    ecx = MEM32(esp + 4);
    xmm5 = XMM_ADD(xmm5, xmm0); /* addps */
    xmm5 = XMM_ADD(xmm5, xmm1); /* addps */
    XMM_STORE(ecx, xmm2); /* movaps */
    XMM_STORE(ecx + 0x10, xmm3); /* movaps */
    XMM_STORE(ecx + 0x20, xmm4); /* movaps */
    XMM_STORE(ecx + 0x30, xmm5); /* movaps */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036F480
 * Original: 0x0036F480 - 0x0036F54E (206 bytes, 60 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0036F480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0036F480: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x429344)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x429344] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0036F4E8; /* jp: parity */

loc_0036F492: ;
    fp_push(MEMF(0x429350)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0036F4AD; /* jp: parity */

loc_0036F4A5: ;
    fp_push(MEMF(0x429350)); /* fld float */
    goto loc_0036F4C0;

loc_0036F4AD: ;
    fp_push(MEMF(0x418A80)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0xC)); /* fdiv dword ptr [esp + 0xc] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036F4C0u); RECOMP_ABI_CALL(0x00371640u, sub_00371640); /* call 0x00371640 */

loc_0036F4C0: ;
    eax = MEM32(esp + 0xC);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ecx = MEM32(esp + 0x10);
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x429344)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) - fp_top()); /* fsubr dword ptr [0x429344] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_0036F4E8: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0036F4F2u); RECOMP_ABI_CALL(0x003716A0u, sub_003716A0); /* call 0x003716A0 */

loc_0036F4F2: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x418A7C)); /* fmul dword ptr [0x418a7c] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036F506u); RECOMP_ABI_CALL(0x00371630u, sub_00371630); /* call 0x00371630 */

loc_0036F506: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    edx = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(MEMF(esp + 8) - fp_top()); /* fsubr dword ptr [esp + 8] */
    fp_push(MEMF(0x429344)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax * 4 + 0x379778)); /* fmul dword ptr [eax*4 + 0x379778] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax * 4 + 0x37977C)); /* fmul dword ptr [eax*4 + 0x37977c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax * 4 + 0x3796F8)); /* fmul dword ptr [eax*4 + 0x3796f8] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax * 4 + 0x3796FC)); /* fmul dword ptr [eax*4 + 0x3796fc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036F550
 * Original: 0x0036F550 - 0x0036F5A9 (89 bytes, 27 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0036F550: ;
    PUSH32(esp, ecx);
    eax = 0xBE800000u;
    _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp) = eax;
    fp_push(MEMF(0x42C8C0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(0x42C8C4)); /* fld float */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); fp_pop(); /* fsubp st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp) = eax;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(MEMF(0x429390) - fp_top()); /* fsubr dword ptr [0x429390] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429354)); /* fmul dword ptr [0x429354] */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036F5B0
 * Original: 0x0036F5B0 - 0x0036F5F2 (66 bytes, 27 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0036F5B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0036F5B0: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(edx + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_push(MEMF(edx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0036F5DBu); RECOMP_ABI_CALL(0x0036F550u, sub_0036F550); /* call 0x0036F550 */

loc_0036F5DB: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036F600
 * Original: 0x0036F600 - 0x0036FB44 (1348 bytes, 416 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0036F600: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x5C);
    edx = MEM32(eax + 0x14);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 4) = edx;
    fp_push(MEMF(esp + 4)); /* fld float */
    edx = MEM32(eax + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEM32(esp + 0x24) = ecx;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    ecx = MEM32(eax + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 0x34);
    MEM32(esp + 0x20) = ecx;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    ecx = MEM32(eax + 0x30);
    MEM32(esp) = edx;
    MEM32(esp + 0x5C) = ecx;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 8);
    fp_push(MEMF(esp + 8)); /* fld float */
    edx = MEM32(eax + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEM32(esp + 0x1C) = ecx;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    ecx = MEM32(eax + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 0x28);
    MEM32(esp + 0x10) = ecx;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    ecx = MEM32(eax + 0x38);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax + 0x1C);
    fp_push(MEMF(esp)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] * fp_top()); fp_pop(); /* fmulp st(2) */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); fp_pop(); /* fsubp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x2C);
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 0x3C);
    MEM32(esp) = edx;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); fp_pop(); /* fsubp st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = MEM32(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    edx = MEM32(eax + 0x10);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esp + 0x30) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    ecx = MEM32(eax + 0x20);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0x30);
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x5C) = edx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    eax = MEM32(eax + 0x34);
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    MEM32(esp) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 6) & 7]; fp_push(_t); } /* fld st(6) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 5) & 7]; fp_push(_t); } /* fld st(5) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x5C)); /* fmul dword ptr [esp + 0x5c] */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] - fp_top()); fp_pop(); /* fsubp st(3) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] - fp_top()); fp_pop(); /* fsubp st(3) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); fp_pop(); /* fsubp st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x5C)); /* fmul dword ptr [esp + 0x5c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x5C)); /* fmul dword ptr [esp + 0x5c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x5C)); /* fmul dword ptr [esp + 0x5c] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x429350)); /* fld float */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0036F96D; /* jp: parity */

loc_0036F962: ;
    eax = 0xFFFFFFFFu;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0036F96D: ;
    eax = MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036FA64; /* je: equal / zero */

loc_0036F979: ;
    ecx = MEM32(esp + 0x5C);
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x5C)); /* fmul dword ptr [esp + 0x5c] */
    PUSH32(esp, ecx);
    MEM32(esp + 0x64) = ecx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036F992u); RECOMP_ABI_CALL(0x0036F550u, sub_0036F550); /* call 0x0036F550 */

loc_0036F992: ;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x60);
    eax = MEM32(esp + 0x30);
    edx = edx & 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x58);
    MEM32(esp + 0x5C) = edx;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x4C)); /* fmul dword ptr [esp + 0x4c] */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x50)); /* fmul dword ptr [esp + 0x50] */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0036FA64: ;
    ecx = MEM32(esp + 0x58);
    eax = MEM32(esp + 0x5C);
    edx = MEM32(esp + 0x1C);
    eax = eax & 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = edx;
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(esp + 0xC);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = edx;
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x34);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x34) = edx;
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(esp + 0x10);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edx;
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x38);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x38) = edx;
    MEM32(ecx + 0x30) = edx;
    edx = MEM32(esp + 0x14);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = edx;
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 4);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 4) = edx;
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(esp + 0x3C);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x3C) = edx;
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(esp + 8);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = edx;
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(esp + 0x40);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x40) = edx;
    MEM32(ecx + 0x34) = edx;
    edx = MEM32(esp);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = edx;
    MEM32(ecx + 0x1C) = edx;
    edx = MEM32(esp + 0x44);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x44) = edx;
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(esp + 0x48);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x48) = edx;
    MEM32(ecx + 0x38) = edx;
    edx = MEM32(esp + 0x4C);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x4C) = edx;
    MEM32(ecx + 0x2C) = edx;
    edx = MEM32(esp + 0x50);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edx;
    MEM32(ecx + 0x3C) = eax;
    MEM32(esp + 0x50) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036F889
 * Original: 0x0036F889 - 0x0036FB44 (699 bytes, 210 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036F889(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0036F889: ;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x5C)); /* fmul dword ptr [esp + 0x5c] */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] - fp_top()); fp_pop(); /* fsubp st(3) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] - fp_top()); fp_pop(); /* fsubp st(3) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); fp_pop(); /* fsubp st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x5C)); /* fmul dword ptr [esp + 0x5c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x5C)); /* fmul dword ptr [esp + 0x5c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x5C)); /* fmul dword ptr [esp + 0x5c] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x429350)); /* fld float */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0036F96D; /* jp: parity */

loc_0036F962: ;
    eax = 0xFFFFFFFFu;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0036F96D: ;
    eax = MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036FA64; /* je: equal / zero */

loc_0036F979: ;
    ecx = MEM32(esp + 0x5C);
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x5C)); /* fmul dword ptr [esp + 0x5c] */
    PUSH32(esp, ecx);
    MEM32(esp + 0x64) = ecx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0036F992u); RECOMP_ABI_CALL(0x0036F550u, sub_0036F550); /* call 0x0036F550 */

loc_0036F992: ;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x60);
    eax = MEM32(esp + 0x30);
    edx = edx & 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x58);
    MEM32(esp + 0x5C) = edx;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x4C)); /* fmul dword ptr [esp + 0x4c] */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x50)); /* fmul dword ptr [esp + 0x50] */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0036FA64: ;
    ecx = MEM32(esp + 0x58);
    eax = MEM32(esp + 0x5C);
    edx = MEM32(esp + 0x1C);
    eax = eax & 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = edx;
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(esp + 0xC);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = edx;
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x34);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x34) = edx;
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(esp + 0x10);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edx;
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x38);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x38) = edx;
    MEM32(ecx + 0x30) = edx;
    edx = MEM32(esp + 0x14);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = edx;
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 4);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 4) = edx;
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(esp + 0x3C);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x3C) = edx;
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(esp + 8);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = edx;
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(esp + 0x40);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x40) = edx;
    MEM32(ecx + 0x34) = edx;
    edx = MEM32(esp);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = edx;
    MEM32(ecx + 0x1C) = edx;
    edx = MEM32(esp + 0x44);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x44) = edx;
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(esp + 0x48);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x48) = edx;
    MEM32(ecx + 0x38) = edx;
    edx = MEM32(esp + 0x4C);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x4C) = edx;
    MEM32(ecx + 0x2C) = edx;
    edx = MEM32(esp + 0x50);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edx;
    MEM32(ecx + 0x3C) = eax;
    MEM32(esp + 0x50) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0036FB50
 * Original: 0x0036FB50 - 0x0036FB63 (19 bytes, 8 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FB50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036FB50: ;
    PUSH32(esp, ecx);
    MEM32(esp) = 0x190;

loc_0036FB58: ;
    eax = MEM32(esp);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp) = eax;
    if ((_fa != 0)) goto loc_0036FB58; /* jne: not equal / not zero */

loc_0036FB61: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036FB70
 * Original: 0x0036FB70 - 0x0036FB9F (47 bytes, 21 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036FB70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = eax;
    if (CMP_A(_fa, _fb)) goto loc_0036FB83; /* ja: above (unsigned >) */

loc_0036FB7E: ;
    esi = MEM32(ecx + 0x44);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036FB83: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0036FB8D; /* ja: above (unsigned >) */

loc_0036FB8A: ;
    _fb = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036FB8D: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0;
    SET_LO8(ecx, ((_fas < 0)) ? 1 : 0); /* sets */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036FBA0
 * Original: 0x0036FBA0 - 0x0036FC10 (112 bytes, 37 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FBA0(void)
{

loc_0036FBA0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x30);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 0x34);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(ecx + 0x38);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x38) = edx;
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x3C) = edx;
    ecx = MEM32(ecx + 0x3C);
    MEM32(eax + 0x40) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036FC10
 * Original: 0x0036FC10 - 0x0036FCB0 (160 bytes, 50 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036FC10: ;
    eax = MEM32(0x37DDE4);
    PUSH32(esp, esi);
    PUSH32(esp, 0xBC800000u);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0036FC23u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_0036FC23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x24) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0036FC31; /* jne: not equal / not zero */

loc_0036FC2A: ;
    eax = 0x8007000Eu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036FC31: ;
    ecx = MEM32(0x37DDE4);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + ecx * 4;
    MEM32(esi + 0x28) = edx;
    MEM32(esi) = eax;
    ecx = MEM32(0x37DDE0);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + ecx * 4 + -516;
    eax = MEM32(esi + 0x30);
    MEM32(esi + 4) = edx;
    MEM32(esi + 0x2C) = 5;
    MEM32(eax) = 3;
    eax = MEM32(0x37DDE4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(0x37DDE0));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(0x37DDE0)); }
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036FC75: ;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036FC75; /* jne: not equal / not zero */

loc_0036FC7C: ;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x64800000);
    edx = eax * 8;
    ecx = eax + -1;
    PUSH32(esp, edx);
    MEM32(esi + 0x38) = ecx;
    PUSH32(esp, 0x0036FC9Bu); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_0036FC9B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x48) = eax;
    POP32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x8007000Eu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0036FCB0
 * Original: 0x0036FCB0 - 0x0036FCD9 (41 bytes, 16 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FCB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036FCB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036FCC5; /* je: equal / zero */

loc_0036FCBA: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0036FCC5u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_0036FCC5: ;
    esi = MEM32(esi + 0x48);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036FCD7; /* je: equal / zero */

loc_0036FCCC: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0036FCD7u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_0036FCD7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036FCE0
 * Original: 0x0036FCE0 - 0x0036FDDE (254 bytes, 106 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FCE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036FCE0: ;
    edx = MEM32(0x37B648);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x2C);
    PUSH32(esp, edi);
    edi = eax;
    eax = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0036FD53; /* ja: above (unsigned >) */

loc_0036FCFD: ;
    ecx = MEM32(esp + 0x14);
    edi = edi >> 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 0x3F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0036FD06: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036FD7C; /* je: equal / zero */

loc_0036FD0B: ;
    ebp = MEM32(edx + edi * 8 + 0x68);
    ebx = MEM32(edx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    eax = edx + edi * 8 + 0x64;
    if (CMP_A(_fa, _fb)) goto loc_0036FD1C; /* ja: above (unsigned >) */

loc_0036FD19: ;
    _fb = (uint32_t)(MEM32(edx + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(edx + 0x44);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036FD1C: ;
    esi = esi >> 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edi + 1;
    esi = esi & 0x3F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036FDD6; /* je: equal / zero */

loc_0036FD2F: ;
    /* nop */

loc_0036FD30: ;
    edi = MEM32(edx + ecx * 8 + 0x68);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0036FD3B; /* ja: above (unsigned >) */

loc_0036FD38: ;
    _fb = (uint32_t)(MEM32(edx + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(edx + 0x44);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036FD3B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036FDD4; /* jb: below (unsigned <) */

loc_0036FD43: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036FD30; /* jne: not equal / not zero */

loc_0036FD4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0036FD53: ;
    ecx = MEM32(edx + 0x34);
    edi = MEM32(edx + 0x48);
    ebp = MEM32(edi + ecx * 8);
    ebx = esi;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0036FD6D; /* jbe: below or equal (unsigned <=) */

loc_0036FD64: ;
    edi = esi;
    edi = edi >> 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 0x3F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0036FD06;

loc_0036FD6D: ;
    ebx = MEM32(edx + 0x38);

loc_0036FD70: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = esi;
    _fb = (uint32_t)(MEM32(edi + ecx * 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - MEM32(edi + ecx * 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0036FD70; /* ja: above (unsigned >) */

loc_0036FD7C: ;
    ebp = MEM32(edx + 0x48);
    esi = MEM32(ebp + ecx * 8 + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    eax = ebp + ecx * 8;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = esi;
    if (CMP_A(_fa, _fb)) goto loc_0036FD9A; /* ja: above (unsigned >) */

loc_0036FD93: ;
    _fb = (uint32_t)(MEM32(edx + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edx + 0x44);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = esi;

loc_0036FD9A: ;
    edi = MEM32(edx + 0x34);
    ebx = MEM32(edx + 0x38);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi & ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036FDD6; /* je: equal / zero */

loc_0036FDAA: ;
    /* nop */

loc_0036FDB0: ;
    esi = MEM32(ebp + ecx * 8 + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0036FDBB; /* ja: above (unsigned >) */

loc_0036FDB8: ;
    _fb = (uint32_t)(MEM32(edx + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edx + 0x44);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036FDBB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036FDD4; /* jb: below (unsigned <) */

loc_0036FDC1: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036FDB0; /* jne: not equal / not zero */

loc_0036FDC8: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0036FDD4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0036FDD6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0036FDE0
 * Original: 0x0036FDE0 - 0x0036FE5A (122 bytes, 50 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0036FDE0: ;
    eax = MEM32(ecx + 0x1C20);
    eax = MEM32(eax + 0x44);
    edx = MEM32(ecx + 0x24);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_0036FE12; /* jb: below (unsigned <) */

loc_0036FDF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x28) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0036FE12; /* jae: above or equal (unsigned >=) */

loc_0036FDFC: ;
    edi = MEM32(ecx);
    esi = MEM32(ecx + 0x40);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(edx));
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(ecx + 0x60) = esi;
    MEM32(ecx + 0x5C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036FE12: ;
    esi = MEM32(ecx + 0x40);
    eax = MEM32(ecx + 0x934);
    eax = MEM32(eax + 0x400B10);
    edx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (5) _cf = (int)(((eax) >> ((5) - 1)) & 1);
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x60);
    edi = esi;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFFC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(ebx));
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ebx);
    if (CMP_B(_fa, _fb)) goto loc_0036FE54; /* jb: below (unsigned <) */

loc_0036FE42: ;
    if (CMP_NE(_fa, _fb)) goto loc_0036FE49; /* jne: not equal / not zero */

loc_0036FE44: ;
    _fa = (uint32_t)(MEM32(ecx + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x5C), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0036FE54; /* ja: above (unsigned >) */

loc_0036FE49: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(edx));
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(ecx + 0x60) = esi;
    MEM32(ecx + 0x5C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0036FE54: ;
    eax = MEM32(ecx + 0x5C);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0036FE60
 * Original: 0x0036FE60 - 0x0036FEDB (123 bytes, 44 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036FE60: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0036FE93; /* je: equal / zero */

loc_0036FE6D: ;
    edx = MEM32(esi + 0x934);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x30);
    goto loc_0036FE80;

    /* nop */

loc_0036FE80: ;
    eax = MEM32(edx + 0x400B10);
    ecx = MEM32(edi);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x7C (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036FE80; /* jne: not equal / not zero */

loc_0036FE92: ;
    POP32(esp, edi);

loc_0036FE93: ;
    edx = MEM32(esi + 0x1C20);
    eax = MEM32(edx + 0x44);
    ecx = MEM32(esi + 0x24);
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036FEAD; /* jb: below (unsigned <) */

loc_0036FEA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x28) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0036FED7; /* jb: below (unsigned <) */

loc_0036FEAD: ;
    eax = MEM32(esi + 0x30);
    eax = MEM32(eax);
    ecx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036FEC2; /* jne: not equal / not zero */

loc_0036FEBC: ;
    eax = MEM32(esi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0036FEC2: ;
    PUSH32(esp, 0x0036FEC7u); RECOMP_ABI_CALL(0x0036FCE0u, sub_0036FCE0); /* call 0x0036FCE0 */

loc_0036FEC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036FED2; /* je: equal / zero */

loc_0036FECB: ;
    eax = MEM32(eax + 4);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0036FED2: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0036FED7: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0036FEE0
 * Original: 0x0036FEE0 - 0x0036FF0D (45 bytes, 9 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036FEE0: ;
    eax = MEM32(0x37B648);
    eax = MEM32(eax + 0x1C28);
    (void)0; /* sfence: cache/ordering hint, nothing to model */
    ecx = MEM32(eax + 0x100410);
    ecx = ecx | 0x10000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x100410) = ecx;

loc_0036FF00: ;
    _fa = (uint32_t)(MEM32(eax + 0x100410)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x100410), 0x10000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036FF00; /* jne: not equal / not zero */

loc_0036FF0C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0036FF10
 * Original: 0x0036FF10 - 0x0036FF2E (30 bytes, 11 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FF10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0036FF10: ;
    eax = MEM32(0x37B648);
    ecx = MEM32(eax + 0x30);
    eax = MEM32(eax + 0x2C);
    ecx = MEM32(ecx);
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 4)));
    eax = eax - MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0036FF30
 * Original: 0x0036FF30 - 0x0036FF4B (27 bytes, 7 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FF30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036FF30: ;
    ecx = MEM32(0x37B648);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0036FF3Du); RECOMP_ABI_CALL(0x00375110u, sub_00375110); /* call 0x00375110 */

loc_0036FF3D: ;
    eax = MEM32(esp + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00370400(); return; /* tail jmp 0x00370400 */

}

/**
 * sub_0036FF50
 * Original: 0x0036FF50 - 0x0036FF5F (15 bytes, 4 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036FF50(void)
{

loc_0036FF50: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x37B648);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00370035
 * Original: 0x00370035 - 0x0037007B (70 bytes, 17 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370035(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370035: ;
    edx = MEM32(eax + 0x100410);
    edx = edx | 0x10000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x100410) = edx;
    goto loc_00370050;

    /* nop */

loc_00370050: ;
    _fa = (uint32_t)(MEM32(eax + 0x100410)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x100410), 0x10000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00370050; /* jne: not equal / not zero */

loc_0037005C: ;
    ecx = MEM32(ecx + 0x1C20);
    esi = esi & 0xFFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x40) = esi;
    goto loc_00370070;

    /* nop */

loc_00370070: ;
    PUSH32(esp, 0x00370075u); RECOMP_ABI_CALL(0x0036AE70u, sub_0036AE70); /* call 0x0036AE70 */

loc_00370075: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00370070; /* jne: not equal / not zero */

loc_00370079: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00370080
 * Original: 0x00370080 - 0x00370138 (184 bytes, 58 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00370080: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_00370094; /* jb: below (unsigned <) */

loc_0037008F: ;
    PUSH32(esp, 0x00370094u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00370094: ;
    edi = MEM32(esi + 0x2C);
    MEM32(eax) = 0x4A310;
    edx = edi;
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax * 8;
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esi + 0x40);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0x41D70;
    MEM32(eax + 0xC) = edi;
    ecx = 0x41D90;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = 0;
    ecx = eax + 0x20;
    MEM32(esi) = ecx;
    ecx = edi;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    MEM32(esi + ecx * 8 + 0x64) = edi;
    MEM32(esi + ecx * 8 + 0x68) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00370115; /* je: equal / zero */

loc_003700F9: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x34);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = MEM32(esi + 0x48);
    MEM32(esi + 0x34) = ecx;
    MEM32(ebp + ecx * 8) = edi;
    ebp = MEM32(esi + 0x48);
    MEM32(ebp + ecx * 8 + 4) = eax;
    POP32(esp, ebp);

loc_00370115: ;
    ecx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    MEM32(esi + 0x3C) = 0;
    MEM32(esi + 0x2C) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00370131; /* jne: not equal / not zero */

loc_0037012A: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x00370131u); RECOMP_ICALL_SAFE(0x0036FF60u, _icall_esp); /* manual call 0x0036FF60 */
    }

loc_00370131: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00370140
 * Original: 0x00370140 - 0x003702A6 (358 bytes, 123 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00370140: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi + 0x30);
    ecx = MEM32(eax);
    eax = MEM32(esi + 0x2C);
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0037027C; /* jae: above or equal (unsigned >=) */

loc_00370164: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037016F; /* jne: not equal / not zero */

loc_00370168: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0037016Fu); RECOMP_ABI_CALL(0x00370080u, sub_00370080); /* call 0x00370080 */

loc_0037016F: ;
    PUSH32(esp, ebp);
    eax = edi;
    PUSH32(esp, 0x00370177u); RECOMP_ABI_CALL(0x0036FCE0u, sub_0036FCE0); /* call 0x0036FCE0 */

loc_00370177: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037027B; /* je: equal / zero */

loc_00370181: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00370189u); RECOMP_ABI_CALL(0x0036FE60u, sub_0036FE60); /* call 0x0036FE60 */

loc_00370189: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00370192; /* ja: above (unsigned >) */

loc_0037018F: ;
    _fb = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00370192: ;
    ecx = MEM32(ebp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0037019C; /* ja: above (unsigned >) */

loc_00370199: ;
    _fb = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0037019C: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    if ((_fas < 0)) goto loc_00370245; /* js: sign (negative) */

loc_003701A9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2400 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00370245; /* jb: below (unsigned <) */

loc_003701B5: ;
    eax = MEM32(esi + 0x19FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003701E4; /* je: equal / zero */

loc_003701BF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(esi + 0x1A00) = edi;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003701C8u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003701C6u); } /* indirect call */
    }

loc_003701C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003701D3u); RECOMP_ABI_CALL(0x0036FE60u, sub_0036FE60); /* call 0x0036FE60 */

loc_003701D3: ;
    PUSH32(esp, eax);
    edx = ebp;
    ecx = esi;
    PUSH32(esp, 0x003701DDu); RECOMP_ABI_CALL(0x0036FB70u, sub_0036FB70); /* call 0x0036FB70 */

loc_003701DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00370245; /* jb: below (unsigned <) */

loc_003701E4: ;
    edi = MEM32(ebp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    MEM32(esi + 0x1DD0) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_003701FE; /* jne: not equal / not zero */

loc_003701F4: ;
    MEM32(edi + 0x10) = 0x40110;
    MEM32(edi + 0x14) = eax;

loc_003701FE: ;
    MEM32(edi + 0x18) = 0x40100;
    MEM32(edi + 0x1C) = 5;
    PUSH32(esp, 0x00370211u); RECOMP_ABI_CALL(0x0036FEE0u, sub_0036FEE0); /* call 0x0036FEE0 */

loc_00370211: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00370219u); RECOMP_ABI_CALL(0x0036FE60u, sub_0036FE60); /* call 0x0036FE60 */

loc_00370219: ;
    PUSH32(esp, eax);
    edx = ebp;
    ecx = esi;
    PUSH32(esp, 0x00370223u); RECOMP_ABI_CALL(0x0036FB70u, sub_0036FB70); /* call 0x0036FB70 */

loc_00370223: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00370281; /* jae: above or equal (unsigned >=) */

loc_0037022A: ;
    eax = 0x40100;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x14) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0x1C) = ecx;
    PUSH32(esp, 0x00370242u); RECOMP_ABI_CALL(0x0036FEE0u, sub_0036FEE0); /* call 0x0036FEE0 */

loc_00370242: ;
    edi = MEM32(ebp);

loc_00370245: ;
    eax = MEM32(esi + 0x19FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370261; /* je: equal / zero */

loc_0037024F: ;
    ebx = ebx | 0x80000000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(esi + 0x1A00) = edi;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0037025Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0037025Cu); } /* indirect call */
    }

loc_0037025E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00370261: ;
    edx = MEM32(esi + 0x30);
    esi = MEM32(esi + 0x2C);
    eax = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00370270;

    /* nop */

loc_00370270: ;
    ecx = MEM32(edx);
    edi = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00370270; /* jb: below (unsigned <) */

loc_0037027A: ;
    POP32(esp, ebx);

loc_0037027B: ;
    POP32(esp, ebp);

loc_0037027C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00370281: ;
    edi = MEM32(0x4180B4);
    _fb = (uint32_t)(0x1DCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1DCC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00370290: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0037029Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370299u); } /* indirect call */
    }

loc_0037029B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00370290; /* jne: not equal / not zero */

loc_0037029F: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00370141
 * Original: 0x00370141 - 0x003702A6 (357 bytes, 122 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370141(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00370141: ;
    esi = MEM32(0x37B648);
    eax = MEM32(esi + 0x30);
    ecx = MEM32(eax);
    eax = MEM32(esi + 0x2C);
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0037027C; /* jae: above or equal (unsigned >=) */

loc_00370164: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037016F; /* jne: not equal / not zero */

loc_00370168: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0037016Fu); RECOMP_ABI_CALL(0x00370080u, sub_00370080); /* call 0x00370080 */

loc_0037016F: ;
    PUSH32(esp, ebp);
    eax = edi;
    PUSH32(esp, 0x00370177u); RECOMP_ABI_CALL(0x0036FCE0u, sub_0036FCE0); /* call 0x0036FCE0 */

loc_00370177: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037027B; /* je: equal / zero */

loc_00370181: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00370189u); RECOMP_ABI_CALL(0x0036FE60u, sub_0036FE60); /* call 0x0036FE60 */

loc_00370189: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00370192; /* ja: above (unsigned >) */

loc_0037018F: ;
    _fb = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00370192: ;
    ecx = MEM32(ebp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0037019C; /* ja: above (unsigned >) */

loc_00370199: ;
    _fb = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0037019C: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    if ((_fas < 0)) goto loc_00370245; /* js: sign (negative) */

loc_003701A9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2400 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00370245; /* jb: below (unsigned <) */

loc_003701B5: ;
    eax = MEM32(esi + 0x19FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003701E4; /* je: equal / zero */

loc_003701BF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(esi + 0x1A00) = edi;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003701C8u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003701C6u); } /* indirect call */
    }

loc_003701C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003701D3u); RECOMP_ABI_CALL(0x0036FE60u, sub_0036FE60); /* call 0x0036FE60 */

loc_003701D3: ;
    PUSH32(esp, eax);
    edx = ebp;
    ecx = esi;
    PUSH32(esp, 0x003701DDu); RECOMP_ABI_CALL(0x0036FB70u, sub_0036FB70); /* call 0x0036FB70 */

loc_003701DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00370245; /* jb: below (unsigned <) */

loc_003701E4: ;
    edi = MEM32(ebp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    MEM32(esi + 0x1DD0) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_003701FE; /* jne: not equal / not zero */

loc_003701F4: ;
    MEM32(edi + 0x10) = 0x40110;
    MEM32(edi + 0x14) = eax;

loc_003701FE: ;
    MEM32(edi + 0x18) = 0x40100;
    MEM32(edi + 0x1C) = 5;
    PUSH32(esp, 0x00370211u); RECOMP_ABI_CALL(0x0036FEE0u, sub_0036FEE0); /* call 0x0036FEE0 */

loc_00370211: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00370219u); RECOMP_ABI_CALL(0x0036FE60u, sub_0036FE60); /* call 0x0036FE60 */

loc_00370219: ;
    PUSH32(esp, eax);
    edx = ebp;
    ecx = esi;
    PUSH32(esp, 0x00370223u); RECOMP_ABI_CALL(0x0036FB70u, sub_0036FB70); /* call 0x0036FB70 */

loc_00370223: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00370281; /* jae: above or equal (unsigned >=) */

loc_0037022A: ;
    eax = 0x40100;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x14) = ecx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0x1C) = ecx;
    PUSH32(esp, 0x00370242u); RECOMP_ABI_CALL(0x0036FEE0u, sub_0036FEE0); /* call 0x0036FEE0 */

loc_00370242: ;
    edi = MEM32(ebp);

loc_00370245: ;
    eax = MEM32(esi + 0x19FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370261; /* je: equal / zero */

loc_0037024F: ;
    ebx = ebx | 0x80000000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(esi + 0x1A00) = edi;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0037025Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0037025Cu); } /* indirect call */
    }

loc_0037025E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00370261: ;
    edx = MEM32(esi + 0x30);
    esi = MEM32(esi + 0x2C);
    eax = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00370270;

    /* nop */

loc_00370270: ;
    ecx = MEM32(edx);
    edi = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00370270; /* jb: below (unsigned <) */

loc_0037027A: ;
    POP32(esp, ebx);

loc_0037027B: ;
    POP32(esp, ebp);

loc_0037027C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00370281: ;
    edi = MEM32(0x4180B4);
    _fb = (uint32_t)(0x1DCC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1DCC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00370290: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0037029Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370299u); } /* indirect call */
    }

loc_0037029B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00370290; /* jne: not equal / not zero */

loc_0037029F: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003702B0
 * Original: 0x003702B0 - 0x003703E7 (311 bytes, 115 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003702B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003702B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 4 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_003702E5; /* je: equal / zero */

loc_003702BF: ;
    eax = MEM32(esi + 0x764);
    edi = MEM32(eax + 4);
    ecx = MEM32(esi);
    edx = MEM32(esi + 0x768);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x768) = edx;
    eax = MEM32(eax + 4);
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_003702E5: ;
    edi = MEM32(esi);
    edx = MEM32(esi + 0x30);
    eax = MEM32(edx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = edi + ebx;
    ecx = esi;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00370304u); RECOMP_ABI_CALL(0x0036FDE0u, sub_0036FDE0); /* call 0x0036FDE0 */

loc_00370304: ;
    ecx = MEM32(esi + 0x28);
    _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x4000;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00370354; /* jb: below (unsigned <) */

loc_00370311: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00370350; /* jbe: below or equal (unsigned <=) */

loc_0037031B: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(esi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x40) = ecx;
    ecx = MEM32(esi + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 0xFFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x44) = edx;
    edx = MEM32(esi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00370341; /* jbe: below or equal (unsigned <=) */

loc_0037033B: ;
    eax = MEM32(esi + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00370341: ;
    edi = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037034B; /* jne: not equal / not zero */

loc_00370348: ;
    eax = edi + 4;

loc_0037034B: ;
    ecx = edi + ebx;
    MEM32(esi) = edi;

loc_00370350: ;
    MEM32(esp + 0x1C) = ecx;

loc_00370354: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003703A4; /* jae: above or equal (unsigned >=) */

loc_00370358: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003703A4; /* ja: above (unsigned >) */

loc_0037035E: ;
    ebx = MEM32(0x37DDE4);
    eax = MEM32(esi + 0x34);
    edx = MEM32(esi + 0x48);
    ebp = MEM32(esi + 0x38);
    ebx = ebx >> 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00370371: ;
    ecx = MEM32(edx + eax * 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(edx + eax * 8 + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00370386; /* jae: above or equal (unsigned >=) */

loc_00370383: ;
    _fb = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00370386: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00370398; /* jbe: below or equal (unsigned <=) */

loc_0037038A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x34) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370398; /* je: equal / zero */

loc_0037038F: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(edx + eax * 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 8), ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00370371; /* ja: above (unsigned >) */

loc_00370398: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003703A4u); RECOMP_ABI_CALL(0x00370140u, sub_00370140); /* call 0x00370140 */

loc_003703A4: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xFFFFFDFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFDFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 8 (8-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_003703D1; /* je: equal / zero */

loc_003703BA: ;
    eax = eax | 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    MEM32(esi + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x003703C9u); RECOMP_ICALL_SAFE(0x0036FF60u, _icall_esp); /* manual call 0x0036FF60 */
    }

loc_003703C9: ;
    eax = MEM32(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_003703D1: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x003703D8u); RECOMP_ABI_CALL(0x00370080u, sub_00370080); /* call 0x00370080 */

loc_003703D8: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x003703DFu); RECOMP_ICALL_SAFE(0x0036FF60u, _icall_esp); /* manual call 0x0036FF60 */
    }

loc_003703DF: ;
    eax = MEM32(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003703F0
 * Original: 0x003703F0 - 0x003703FF (15 bytes, 6 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003703F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003703F0: ;
    eax = MEM32(0x37DDE0);
    PUSH32(esp, eax);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003703FEu); RECOMP_ABI_CALL(0x003702B0u, sub_003702B0); /* call 0x003702B0 */

loc_003703FE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00370400
 * Original: 0x00370400 - 0x00370444 (68 bytes, 24 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370400: ;
    ecx = MEM32(0x37B648);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = eax + esi * 4;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x200;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00370440; /* jb: below (unsigned <) */

loc_0037041D: ;
    eax = MEM32(0x37DDE0);
    edx = eax;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esi * 4 + 0x204;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00370433; /* jbe: below or equal (unsigned <=) */

loc_00370431: ;
    eax = ecx;

loc_00370433: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00370439; /* jbe: below or equal (unsigned <=) */

loc_00370437: ;
    edx = ecx;

loc_00370439: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00370440u); RECOMP_ABI_CALL(0x003702B0u, sub_003702B0); /* call 0x003702B0 */

loc_00370440: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00370450
 * Original: 0x00370450 - 0x00370461 (17 bytes, 6 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370450(void)
{

loc_00370450: ;
    eax = MEM32(0x37B648);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00370460u); RECOMP_ABI_CALL(0x00370140u, sub_00370140); /* call 0x00370140 */

loc_00370460: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00370470
 * Original: 0x00370470 - 0x003704E8 (120 bytes, 43 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370470: ;
    eax = MEM32(0x37B648);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003704E5; /* je: equal / zero */

loc_00370479: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    ecx = ecx & 0x70000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x50000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003704B6; /* jne: not equal / not zero */

loc_0037048E: ;
    esi = MEM32(eax + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003704B6; /* je: equal / zero */

loc_00370495: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037049Bu); RECOMP_ABI_CALL(0x0036BCF0u, sub_0036BCF0); /* call 0x0036BCF0 */

loc_0037049B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003704B4; /* je: equal / zero */

loc_0037049F: ;
    edx = MEM32(0x37B648);
    eax = MEM32(edx + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003704B0u); RECOMP_ABI_CALL(0x00370140u, sub_00370140); /* call 0x00370140 */

loc_003704B0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003704B4: ;
    eax = esi;

loc_003704B6: ;
    esi = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003704BFu); RECOMP_ABI_CALL(0x0036BCF0u, sub_0036BCF0); /* call 0x0036BCF0 */

loc_003704BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003704D8; /* je: equal / zero */

loc_003704C3: ;
    ecx = MEM32(0x37B648);
    edx = MEM32(ecx + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003704D4u); RECOMP_ABI_CALL(0x00370140u, sub_00370140); /* call 0x00370140 */

loc_003704D4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003704D8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003704E4; /* je: equal / zero */

loc_003704DC: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003704E4u); RECOMP_ABI_CALL(0x00370140u, sub_00370140); /* call 0x00370140 */

loc_003704E4: ;
    POP32(esp, esi);

loc_003704E5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003704F0
 * Original: 0x003704F0 - 0x00370526 (54 bytes, 18 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003704F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003704F0: ;
    edx = MEM32(0x37B648);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370523; /* je: equal / zero */

loc_003704FA: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), 0x780000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370517; /* je: equal / zero */

loc_00370509: ;
    eax = MEM32(edx + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00370514u); RECOMP_ABI_CALL(0x00370140u, sub_00370140); /* call 0x00370140 */

loc_00370514: ;
    esp += 8; return; /* ret 4 */

loc_00370517: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370523; /* je: equal / zero */

loc_0037051B: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00370523u); RECOMP_ABI_CALL(0x00370140u, sub_00370140); /* call 0x00370140 */

loc_00370523: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00370530
 * Original: 0x00370530 - 0x00370613 (227 bytes, 53 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370530: ;
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_00370544; /* jb: below (unsigned <) */

loc_0037053F: ;
    PUSH32(esp, 0x00370544u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00370544: ;
    MEM32(eax) = 0xC0180;
    MEM32(eax + 4) = 2;
    ecx = 3;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0x180190;
    MEM32(eax + 0x14) = 4;
    MEM32(eax + 0x18) = 9;
    MEM32(eax + 0x1C) = 0xA;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = 8;
    MEM32(eax + 0x2C) = 0x401A8;
    MEM32(eax + 0x30) = 0xC;
    MEM32(eax + 0x34) = 0x41D6C;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x38) = edi;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi) = eax;
    if (CMP_B(_fa, _fb)) goto loc_003705B0; /* jb: below (unsigned <) */

loc_003705AB: ;
    PUSH32(esp, 0x003705B0u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_003705B0: ;
    MEM32(eax) = 0x409FC;
    ecx = 1;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0x100A50;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x18) = 0x3F800000;
    MEM32(eax + 0x1C) = 0x416BC;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = 0x41E78;
    MEM32(eax + 0x28) = 0x210000;
    MEM32(eax + 0x2C) = 0x41D80;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = 0x41E68;
    MEM32(eax + 0x38) = 0x7F800000;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(esi) = eax;
    PUSH32(esp, 0x00370610u); RECOMP_ABI_CALL(0x0036ED90u, sub_0036ED90); /* call 0x0036ED90 */

loc_00370610: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00370620
 * Original: 0x00370620 - 0x00370728 (264 bytes, 66 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00370620: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00370635; /* jb: below (unsigned <) */

loc_00370630: ;
    PUSH32(esp, 0x00370635u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00370635: ;
    MEM32(eax) = 0x40000;
    MEM32(eax + 4) = 0xD;
    MEM32(eax + 8) = 0x42000;
    MEM32(eax + 0xC) = 0xE;
    MEM32(eax + 0x10) = 0x44000;
    MEM32(eax + 0x14) = 0x10;
    MEM32(eax + 0x18) = 0x46000;
    MEM32(eax + 0x1C) = 0x11;
    MEM32(eax + 0x20) = 0x4A000;
    MEM32(eax + 0x24) = 0x12;
    MEM32(eax + 0x28) = 0x42180;
    MEM32(eax + 0x2C) = 7;
    MEM32(eax + 0x30) = 0x442FC;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 3;
    MEM32(eax + 0xC) = edx;
    ebx = esi + 0x194C;
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = ecx;
    MEM32(ebx + 8) = ecx;
    MEM32(ebx + 0xC) = ecx;
    MEM32(ebx + 0x10) = ecx;
    MEM32(ebx + 0x14) = ecx;
    MEM32(ebx + 0x18) = ecx;
    MEM32(ebx + 0x1C) = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x192C;
    ebp = ecx;
    MEM32(ebp) = ebx;
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + 0xC) = ebx;
    MEM32(ebp + 0x10) = ebx;
    MEM32(ebp + 0x14) = ebx;
    MEM32(ebp + 0x18) = ebx;
    MEM32(ebp + 0x1C) = ebx;
    MEM32(ecx) = ebx;
    MEM32(esi + 0x1930) = edx;
    MEM32(eax + 0x10) = 0x86184;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = 0xB;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x19;
    MEM32(eax) = 0x1C4184;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = 0x11;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00370530(); return; /* tail jmp 0x00370530 */

}

/**
 * sub_00370730
 * Original: 0x00370730 - 0x003707F2 (194 bytes, 73 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370730: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x37B648);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00370740;

    /* nop */

loc_00370740: ;
    PUSH32(esp, 0x379440);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037074Bu); RECOMP_ABI_CALL(0x00369E20u, sub_00369E20); /* call 0x00369E20 */

loc_0037074B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00370740; /* jb: below (unsigned <) */

loc_00370751: ;
    esi = 0x39;
    edi = 0x379818;
    goto loc_00370760;

    /* nop */

loc_00370760: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037077B; /* je: equal / zero */

loc_00370768: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x7E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037077B; /* je: equal / zero */

loc_0037076D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x7F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037077B; /* je: equal / zero */

loc_00370772: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037077Bu); RECOMP_ABI_CALL(0x0036CBA0u, sub_0036CBA0); /* call 0x0036CBA0 */

loc_0037077B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00370760; /* jb: below (unsigned <) */

loc_00370787: ;
    esi = MEM32(ebx + 0x1A20);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8F);
    PUSH32(esp, 0x0037079Fu); RECOMP_ABI_CALL(0x0036CBA0u, sub_0036CBA0); /* call 0x0036CBA0 */

loc_0037079F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003707A1: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003707A3: ;
    edx = ZX8(MEM8(edi + 0x3797F8));
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003707B2u); RECOMP_ABI_CALL(0x0036D5E0u, sub_0036D5E0); /* call 0x0036D5E0 */

loc_003707B2: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003707A3; /* jb: below (unsigned <) */

loc_003707B8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003707C1u); RECOMP_ABI_CALL(0x0036D5E0u, sub_0036D5E0); /* call 0x0036D5E0 */

loc_003707C1: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003707C9u); RECOMP_ABI_CALL(0x0036AC30u, sub_0036AC30); /* call 0x0036AC30 */

loc_003707C9: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003707A1; /* jb: below (unsigned <) */

loc_003707CF: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003707DAu); RECOMP_ABI_CALL(0x0036D5E0u, sub_0036D5E0); /* call 0x0036D5E0 */

loc_003707DA: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003707E5u); RECOMP_ABI_CALL(0x0036D5E0u, sub_0036D5E0); /* call 0x0036D5E0 */

loc_003707E5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003707EEu); RECOMP_ABI_CALL(0x0036B570u, sub_0036B570); /* call 0x0036B570 */

loc_003707EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00370800
 * Original: 0x00370800 - 0x0037092F (303 bytes, 96 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00370800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370800: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x418220); PUSH32(esp, 0x0037080Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00370804u); } /* indirect call */
    }

loc_0037080A: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00370822; /* jne: not equal / not zero */

loc_00370810: ;
    eax = MEM32(esi + 0x1C28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 9);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x418224); PUSH32(esp, 0x00370822u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037081Cu); } /* indirect call */
    }

loc_00370822: ;
    eax = MEM32(esi + 0x1A04);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037084D; /* je: equal / zero */

loc_0037082C: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370835; /* je: equal / zero */

loc_00370833: ;
    eax = ecx;

loc_00370835: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0x1A04);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00370847u); RECOMP_ABI_CALL(0x0036BEC0u, sub_0036BEC0); /* call 0x0036BEC0 */

loc_00370847: ;
    MEM32(esi + 0x1A04) = ebp;

loc_0037084D: ;
    eax = MEM32(esi + 0x1A08);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370878; /* je: equal / zero */

loc_00370857: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370860; /* je: equal / zero */

loc_0037085E: ;
    eax = ecx;

loc_00370860: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0x1A08);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00370872u); RECOMP_ABI_CALL(0x0036BEC0u, sub_0036BEC0); /* call 0x0036BEC0 */

loc_00370872: ;
    MEM32(esi + 0x1A08) = ebp;

loc_00370878: ;
    eax = MEM32(esi + 0x1A10);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003708AD; /* jbe: below or equal (unsigned <=) */

loc_00370885: ;
    PUSH32(esp, edi);
    edi = esi + 0x1A14;
    /* nop */

loc_00370890: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037089E; /* je: equal / zero */

loc_00370896: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037089Cu); RECOMP_ABI_CALL(0x0036BDB0u, sub_0036BDB0); /* call 0x0036BDB0 */

loc_0037089C: ;
    MEM32(edi) = ebp;

loc_0037089E: ;
    eax = MEM32(esi + 0x1A10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00370890; /* jb: below (unsigned <) */

loc_003708AC: ;
    POP32(esp, edi);

loc_003708AD: ;
    eax = MEM32(esi + 0x1A20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003708C4; /* je: equal / zero */

loc_003708B8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003708BEu); RECOMP_ABI_CALL(0x0036BDB0u, sub_0036BDB0); /* call 0x0036BDB0 */

loc_003708BE: ;
    MEM32(esi + 0x1A20) = ebp;

loc_003708C4: ;
    _fa = (uint32_t)(MEM32(esi + 0x1A8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A8C), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003708EB; /* je: equal / zero */

loc_003708CC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0x003708D4u); RECOMP_ABI_CALL(0x0036AFE0u, sub_0036AFE0); /* call 0x0036AFE0 */

loc_003708D4: ;
    eax = MEM32(esi + 0x1A8C);
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003708E5u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003708E5: ;
    MEM32(esi + 0x1A8C) = ebp;

loc_003708EB: ;
    _fa = (uint32_t)(MEM32(esi + 0x1A84)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A84), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370911; /* je: equal / zero */

loc_003708F3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003708FAu); RECOMP_ABI_CALL(0x0036AFE0u, sub_0036AFE0); /* call 0x0036AFE0 */

loc_003708FA: ;
    ecx = MEM32(esi + 0x1A84);
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0037090Bu); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_0037090B: ;
    MEM32(esi + 0x1A84) = ebp;

loc_00370911: ;
    eax = MEM32(esi + 0x1A88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037092C; /* je: equal / zero */

loc_0037091B: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00370926u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_00370926: ;
    MEM32(esi + 0x1A88) = ebp;

loc_0037092C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00370930
 * Original: 0x00370930 - 0x00370EC6 (1430 bytes, 431 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00370930: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x5C);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = ecx;
    MEM32(esp + 0x1C) = edi;
    if (CMP_B(_fa, _fb)) goto loc_00370951; /* jb: below (unsigned <) */

loc_0037094D: ;
    MEM32(esp + 0x1C) = eax;

loc_00370951: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037095Au); RECOMP_ABI_CALL(0x003716C0u, sub_003716C0); /* call 0x003716C0 */

loc_0037095A: ;
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0x00370967u); RECOMP_ABI_CALL(0x003716C0u, sub_003716C0); /* call 0x003716C0 */

loc_00370967: ;
    edx = MEM32(ebp);
    ecx = MEM32(ebp + 0x30);
    MEM32(esp + 0x44) = eax;
    eax = MEM32(ebp + 4);
    MEM32(0x37B5AC) = ecx;
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(ebp + 0x14);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 0x1970) = edx;
    edx = MEM32(esi + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & 0xFFFFBFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x1A10) = eax;
    MEM32(esi + 8) = edx;
    ecx = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x30 (8-bit) */
    MEM32(esp + 0x2C) = eax;
    eax = edx;
    MEM32(esp + 0x24) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_003709BC; /* jne: not equal / not zero */

loc_003709B6: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003709C8; /* jne: not equal / not zero */

loc_003709BC: ;
    eax = eax | 0x4000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x24) = edi;
    MEM32(esi + 8) = eax;

loc_003709C8: ;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003709D4; /* jne: not equal / not zero */

loc_003709CF: ;
    edx = 0x11;

loc_003709D4: ;
    eax = edx;
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edx;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x40) = eax;
    fp_push((double)SMEM32(esp + 0x40)); /* fild */
    MEM32(esi + 0x196C) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_003709F9; /* jge: greater or equal (signed >=) */

loc_003709F3: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_003709F9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esi + 0x96C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x40) = ecx;
    fp_push((double)SMEM32(esp + 0x40)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00370A11; /* jge: greater or equal (signed >=) */

loc_00370A0B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_00370A11: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x10 (8-bit) */
    MEMF(esi + 0x970) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_Z(_fa, _fb)) goto loc_00370A28; /* je: equal / zero */

loc_00370A1C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x21) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x21 (8-bit) */
    ebx = 2;
    if (CMP_NE(_fa, _fb)) goto loc_00370A28; /* jne: not equal / not zero */

loc_00370A26: ;
    ebx = edi;

loc_00370A28: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 1 (8-bit) */
    edi = 2;
    if (TEST_Z(_fa, _fb)) goto loc_00370A39; /* je: equal / zero */

loc_00370A32: ;
    edi = 4;
    goto loc_00370A43;

loc_00370A39: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370A43; /* je: equal / zero */

loc_00370A3E: ;
    edi = 5;

loc_00370A43: ;
    edx = ebp + 0x34;
    MEM32(0x37B618) = ebx;
    MEM32(0x37B5A8) = edi;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370B05; /* je: equal / zero */

loc_00370A5B: ;
    edi = MEM32(esp + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00370AC4; /* jbe: below or equal (unsigned <=) */

loc_00370A63: ;
    eax = esi + 0x1A14;
    MEM32(esp + 0x64) = eax;
    eax = esi + 0x1A24;
    ecx = edx;
    MEM32(esp + 0x28) = edi;
    /* nop */

loc_00370A80: ;
    edx = MEM32(ecx);
    ebx = MEM32(edx);
    edi = eax;
    MEM32(edi) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(edx + 8);
    MEM32(edi + 8) = ebx;
    ebx = MEM32(edx + 0xC);
    MEM32(edi + 0xC) = ebx;
    ebx = MEM32(edx + 0x10);
    MEM32(edi + 0x10) = ebx;
    edx = MEM32(edx + 0x14);
    MEM32(edi + 0x14) = edx;
    edx = MEM32(esp + 0x64);
    MEM32(edx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x64) = edx;
    edx = MEM32(esp + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = edx;
    if ((_fa != 0)) goto loc_00370A80; /* jne: not equal / not zero */

loc_00370AC4: ;
    ebp = MEM32(ebp + 0x40);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370E54; /* je: equal / zero */

loc_00370ACF: ;
    edx = MEM32(ebp);
    eax = esi + 0x1A6C;
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(ebp + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(ebp + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(ebp + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(ebp + 0x10);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(ebp + 0x14);
    MEM32(ecx + 0x14) = edx;
    MEM32(esi + 0x1A20) = eax;
    goto loc_00370E54;

loc_00370B05: ;
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ebp + 0x10);
    edx = edx & 0xF0000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x30000 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00370B4E; /* ja: above (unsigned >) */

loc_00370B1E: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00370B44; /* je: equal / zero */

loc_00370B20: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370B3A; /* je: equal / zero */

loc_00370B28: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00370B5E; /* jne: not equal / not zero */

loc_00370B30: ;
    MEM32(esp + 0x10) = 0x11;
    goto loc_00370B5E;

loc_00370B3A: ;
    MEM32(esp + 0x10) = 0x1C;
    goto loc_00370B5E;

loc_00370B44: ;
    MEM32(esp + 0x10) = 0x1E;
    goto loc_00370B5E;

loc_00370B4E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00370B5E; /* jne: not equal / not zero */

loc_00370B56: ;
    MEM32(esp + 0x10) = 0x12;

loc_00370B5E: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x3C));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x38));
    ebx = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x48) = ecx;
    PUSH32(esp, 0x00370B7Du); RECOMP_ABI_CALL(0x003717D0u, sub_003717D0); /* call 0x003717D0 */

loc_00370B7D: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x44);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00370BA2u); RECOMP_ABI_CALL(0x00371E80u, sub_00371E80); /* call 0x00371E80 */

loc_00370BA2: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x28) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00370BB8; /* je: equal / zero */

loc_00370BAE: ;
    MEM32(esp + 0x10) = 1;
    goto loc_00370BC0;

loc_00370BB8: ;
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x10) = edx;

loc_00370BC0: ;
    ecx = MEM32(esp + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + edi + -1;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x3FFF (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00370BED; /* je: equal / zero */

loc_00370BDD: ;
    /* nop */

loc_00370BE0: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x3FFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00370BE0; /* jne: not equal / not zero */

loc_00370BE9: ;
    MEM32(esp + 0x30) = eax;

loc_00370BED: ;
    PUSH32(esp, 0xBE800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00370BF8u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_00370BF8: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370DBC; /* je: equal / zero */

loc_00370C02: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1A84) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00370C5A; /* jbe: below or equal (unsigned <=) */

loc_00370C10: ;
    edx = esi + 0x1A14;
    MEM32(esp + 0x10) = edx;
    edi = esi + 0x1A24;
    MEM32(esp + 0x2C) = eax;

loc_00370C24: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(eax) = edi;
    PUSH32(esp, 0x00370C3Bu); RECOMP_ABI_CALL(0x00376980u, sub_00376980); /* call 0x00376980 */

loc_00370C3B: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x2C) = eax;
    if ((_fa != 0)) goto loc_00370C24; /* jne: not equal / not zero */

loc_00370C5A: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), 0x780 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370CAC; /* je: equal / zero */

loc_00370C64: ;
    ecx = MEM32(esi + 0x1A84);
    edx = MEM32(esp + 0x30);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(esi + 0x1A14);
    PUSH32(esp, eax);
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x54) = edx;
    PUSH32(esp, 0x00370C9Cu); RECOMP_ABI_CALL(0x0036A1D0u, sub_0036A1D0); /* call 0x0036A1D0 */

loc_00370C9C: ;
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEM32(esp + 0x5C) = eax;
    PUSH32(esp, 0x00370CACu); RECOMP_ABI_CALL(0x0036AFE0u, sub_0036AFE0); /* call 0x0036AFE0 */

loc_00370CAC: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370D4D; /* je: equal / zero */

loc_00370CB8: ;
    ecx = MEM32(esp + 0x34);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00370CE0u); RECOMP_ABI_CALL(0x00371E80u, sub_00371E80); /* call 0x00371E80 */

loc_00370CE0: ;
    ebx = MEM32(esp + 0x1C);
    MEM32(esp + 0x28) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    PUSH32(esp, 0xBE800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00370CF6u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_00370CF6: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370DBC; /* je: equal / zero */

loc_00370D00: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    MEM32(esi + 0x1A88) = edi;
    if (CMP_B(_fa, _fb)) goto loc_00370D4D; /* jb: below (unsigned <) */

loc_00370D0B: ;
    ecx = MEM32(esp + 0x1C);
    ebp = esi + 0x1A18;
    ebx = esi + 0x1A3C;
    MEM32(esp + 0x3C) = ecx;
    /* nop */

loc_00370D20: ;
    MEM32(ebp) = ebx;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00370D34u); RECOMP_ABI_CALL(0x00376980u, sub_00376980); /* call 0x00376980 */

loc_00370D34: ;
    _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x3C) = eax;
    if ((_fa != 0)) goto loc_00370D20; /* jne: not equal / not zero */

loc_00370D49: ;
    ebp = MEM32(esp + 0x64);

loc_00370D4D: ;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370E54; /* je: equal / zero */

loc_00370D58: ;
    ebp = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00370D67u); RECOMP_ABI_CALL(0x003717D0u, sub_003717D0); /* call 0x003717D0 */

loc_00370D67: ;
    ecx = MEM32(esp + 0x40);
    ebx = eax;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00370D8Cu); RECOMP_ABI_CALL(0x00371E80u, sub_00371E80); /* call 0x00371E80 */

loc_00370D8C: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax + ebx + -1;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x3FFF (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00370DAB; /* je: equal / zero */

loc_00370DA1: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x3FFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00370DA1; /* jne: not equal / not zero */

loc_00370DAB: ;
    PUSH32(esp, 0xBE800000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00370DB6u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_00370DB6: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00370DCB; /* jne: not equal / not zero */

loc_00370DBC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x8007000Eu;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00370DCB: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = esi + 0x1A6C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esi + 0x1A8C) = ebx;
    MEM32(esi + 0x1A20) = eax;
    PUSH32(esp, 0x00370DEEu); RECOMP_ABI_CALL(0x00376980u, sub_00376980); /* call 0x00376980 */

loc_00370DEE: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), 0x780 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370E54; /* je: equal / zero */

loc_00370DF8: ;
    ecx = MEM32(esi + 0x1A20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x58) = eax;
    PUSH32(esp, ecx);
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x4C) = 0x80000001u;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x54) = edi;
    PUSH32(esp, 0x00370E2Eu); RECOMP_ABI_CALL(0x0036A1D0u, sub_0036A1D0); /* call 0x0036A1D0 */

loc_00370E2E: ;
    SET_LO8(edx, MEM8(ebp + 0x3791F0));
    SET_LO8(edx, LO8(edx) & 0x3C);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x20 (8-bit) */
    MEM32(esp + 0x54) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00370E48; /* jne: not equal / not zero */

loc_00370E40: ;
    MEM32(esp + 0x48) = 0x84000001u;

loc_00370E48: ;
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00370E54u); RECOMP_ABI_CALL(0x0036AFE0u, sub_0036AFE0); /* call 0x0036AFE0 */

loc_00370E54: ;
    eax = MEM32(esi + 0x1A10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00370E7C; /* jbe: below or equal (unsigned <=) */

loc_00370E60: ;
    ebx = esi + 0x1A14;

loc_00370E66: ;
    ecx = MEM32(ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00370E6Eu); RECOMP_ABI_CALL(0x0036BD70u, sub_0036BD70); /* call 0x0036BD70 */

loc_00370E6E: ;
    eax = MEM32(esi + 0x1A10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00370E66; /* jb: below (unsigned <) */

loc_00370E7C: ;
    eax = MEM32(esi + 0x1A20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00370E8C; /* je: equal / zero */

loc_00370E86: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00370E8Cu); RECOMP_ABI_CALL(0x0036BD70u, sub_0036BD70); /* call 0x0036BD70 */

loc_00370E8C: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00370E98; /* jb: below (unsigned <) */

loc_00370E93: ;
    PUSH32(esp, 0x00370E98u); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_00370E98: ;
    ecx = MEM32(esi + 0x1A10);
    MEM32(eax) = 0xC0120;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 1;
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00370ED0
 * Original: 0x00370ED0 - 0x00371395 (1221 bytes, 361 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00370ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00370ED0: ;
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x164;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0xAC800000u);
    PUSH32(esp, 0x60);
    ebx = ecx;
    PUSH32(esp, 0x00370EE5u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_00370EE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x2488) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00370EFE; /* jne: not equal / not zero */

loc_00370EEF: ;
    eax = 0x8007000Eu;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x164;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00370EFE: ;
    PUSH32(esp, edi);
    edi = eax + 0x20;
    MEM32(ebx + 0x30) = eax;
    eax = edi + 0x20;
    MEM32(ebx + 0x248C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x2490) = edi;
    ecx = 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    PUSH32(esp, 0x00370F24u); RECOMP_ABI_CALL(0x0036FC10u, sub_0036FC10); /* call 0x0036FC10 */

loc_00370F24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0037138A; /* jl: less (signed <) */

loc_00370F2C: ;
    PUSH32(esp, esi);
    MEM32(0x37B1A8) = MEM32(0x37B1A8) | 0xFF7F7F;
    _fa = (uint32_t)(MEM32(0x37B1A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ebx + 0x1C28;
    ecx = esi;
    MEM32(ebx + 0x94C) = 0x40;
    PUSH32(esp, 0x00370F4Eu); RECOMP_ABI_CALL(0x00373454u, sub_00373454); /* call 0x00373454 */

loc_00370F4E: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FFAFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x00370F65u); RECOMP_ABI_CALL(0x00373142u, sub_00373142); /* call 0x00373142 */

loc_00370F65: ;
    edx = esp + 0x80;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FFAFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x00370F7Fu); RECOMP_ABI_CALL(0x00373142u, sub_00373142); /* call 0x00373142 */

loc_00370F7F: ;
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FFAFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00370F99u); RECOMP_ABI_CALL(0x00373142u, sub_00373142); /* call 0x00373142 */

loc_00370F99: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FFAFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 9);
    ecx = esi;
    PUSH32(esp, 0x00370FB0u); RECOMP_ABI_CALL(0x00373142u, sub_00373142); /* call 0x00373142 */

loc_00370FB0: ;
    edx = MEM32(esp + 0x4C);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7FFAFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0xA);
    ecx = esi;
    MEM32(ebx + 0x247C) = edx;
    PUSH32(esp, 0x00370FD1u); RECOMP_ABI_CALL(0x00373142u, sub_00373142); /* call 0x00373142 */

loc_00370FD1: ;
    ecx = MEM32(esp + 0x3C);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FFAFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D);
    MEM32(ebx + 0x2480) = ecx;
    PUSH32(esp, 0xB);
    ecx = esi;
    PUSH32(esp, 0x00370FF2u); RECOMP_ABI_CALL(0x00373142u, sub_00373142); /* call 0x00373142 */

loc_00370FF2: ;
    edx = MEM32(ebx + 0x2490);
    eax = MEM32(esp + 0x1C);
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1F);
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    PUSH32(esp, 2);
    ecx = esi;
    MEM32(ebx + 0x2484) = eax;
    PUSH32(esp, 0x00371018u); RECOMP_ABI_CALL(0x00373142u, sub_00373142); /* call 0x00373142 */

loc_00371018: ;
    ecx = MEM32(ebx + 0x248C);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1F);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x00371031u); RECOMP_ABI_CALL(0x00373142u, sub_00373142); /* call 0x00373142 */

loc_00371031: ;
    edx = esp + 0x90;
    PUSH32(esp, edx);
    PUSH32(esp, 0x10000000);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0xC);
    ecx = esi;
    PUSH32(esp, 0x0037104Eu); RECOMP_ABI_CALL(0x00373142u, sub_00373142); /* call 0x00373142 */

loc_0037104E: ;
    ecx = MEM32(ebx + 0x30);
    eax = esp + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x00371064u); RECOMP_ABI_CALL(0x00373142u, sub_00373142); /* call 0x00373142 */

loc_00371064: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FFAFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x0037107Bu); RECOMP_ABI_CALL(0x00373142u, sub_00373142); /* call 0x00373142 */

loc_0037107B: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x206E);
    ecx = esi;
    PUSH32(esp, 0x00371095u); RECOMP_ABI_CALL(0x00372ECAu, sub_00372ECA); /* call 0x00372ECA */

loc_00371095: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003710A1u); RECOMP_ABI_CALL(0x00372F2Du, sub_00372F2D); /* call 0x00372F2D */

loc_003710A1: ;
    eax = esp + 0x90;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003710B0u); RECOMP_ABI_CALL(0x00372F2Du, sub_00372F2D); /* call 0x00372F2D */

loc_003710B0: ;
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003710BFu); RECOMP_ABI_CALL(0x00372F2Du, sub_00372F2D); /* call 0x00372F2D */

loc_003710BF: ;
    edx = esp + 0x60;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003710CBu); RECOMP_ABI_CALL(0x00372F2Du, sub_00372F2D); /* call 0x00372F2D */

loc_003710CB: ;
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003710DAu); RECOMP_ABI_CALL(0x00372F2Du, sub_00372F2D); /* call 0x00372F2D */

loc_003710DA: ;
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003710E9u); RECOMP_ABI_CALL(0x00372F2Du, sub_00372F2D); /* call 0x00372F2D */

loc_003710E9: ;
    edx = esp + 0x50;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003710F5u); RECOMP_ABI_CALL(0x00372F2Du, sub_00372F2D); /* call 0x00372F2D */

loc_003710F5: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00371101u); RECOMP_ABI_CALL(0x00372F2Du, sub_00372F2D); /* call 0x00372F2D */

loc_00371101: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0037110Du); RECOMP_ABI_CALL(0x00372F2Du, sub_00372F2D); /* call 0x00372F2D */

loc_0037110D: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00371119u); RECOMP_ABI_CALL(0x00372F2Du, sub_00372F2D); /* call 0x00372F2D */

loc_00371119: ;
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00371125u); RECOMP_ABI_CALL(0x00372F2Du, sub_00372F2D); /* call 0x00372F2D */

loc_00371125: ;
    ecx = esp + 0x110;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x97);
    PUSH32(esp, 0xD);
    ecx = esi;
    PUSH32(esp, 0x0037113Bu); RECOMP_ABI_CALL(0x00373211u, sub_00373211); /* call 0x00373211 */

loc_0037113B: ;
    edx = esp + 0xC0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x39);
    PUSH32(esp, 0xE);
    ecx = esi;
    PUSH32(esp, 0x0037114Eu); RECOMP_ABI_CALL(0x00373211u, sub_00373211); /* call 0x00373211 */

loc_0037114E: ;
    eax = esp + 0x160;
    PUSH32(esp, eax);
    PUSH32(esp, 0x9F);
    PUSH32(esp, 0x10);
    ecx = esi;
    PUSH32(esp, 0x00371164u); RECOMP_ABI_CALL(0x00373211u, sub_00373211); /* call 0x00373211 */

loc_00371164: ;
    ecx = esp + 0xE0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x62);
    PUSH32(esp, 0x11);
    ecx = esi;
    PUSH32(esp, 0x00371177u); RECOMP_ABI_CALL(0x00373211u, sub_00373211); /* call 0x00373211 */

loc_00371177: ;
    edx = esp + 0x130;
    PUSH32(esp, edx);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x12);
    ecx = esi;
    PUSH32(esp, 0x0037118Au); RECOMP_ABI_CALL(0x00373211u, sub_00373211); /* call 0x00373211 */

loc_0037118A: ;
    eax = esp + 0xD0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x57);
    PUSH32(esp, 0x13);
    ecx = esi;
    PUSH32(esp, 0x0037119Du); RECOMP_ABI_CALL(0x00373211u, sub_00373211); /* call 0x00373211 */

loc_0037119D: ;
    ecx = esp + 0x150;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x43);
    PUSH32(esp, 0x14);
    ecx = esi;
    PUSH32(esp, 0x003711B0u); RECOMP_ABI_CALL(0x00373211u, sub_00373211); /* call 0x00373211 */

loc_003711B0: ;
    edx = esp + 0x140;
    PUSH32(esp, edx);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x15);
    ecx = esi;
    PUSH32(esp, 0x003711C3u); RECOMP_ABI_CALL(0x00373211u, sub_00373211); /* call 0x00373211 */

loc_003711C3: ;
    eax = esp + 0x120;
    PUSH32(esp, eax);
    PUSH32(esp, 0x72);
    PUSH32(esp, 0x16);
    ecx = esi;
    PUSH32(esp, 0x003711D6u); RECOMP_ABI_CALL(0x00373211u, sub_00373211); /* call 0x00373211 */

loc_003711D6: ;
    ecx = esp + 0x100;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x18);
    ecx = esi;
    PUSH32(esp, 0x003711E9u); RECOMP_ABI_CALL(0x00373211u, sub_00373211); /* call 0x00373211 */

loc_003711E9: ;
    edx = esp + 0xF0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x19);
    ecx = esi;
    PUSH32(esp, 0x003711FCu); RECOMP_ABI_CALL(0x00373211u, sub_00373211); /* call 0x00373211 */

loc_003711FC: ;
    eax = MEM32(esi);
    ecx = MEM32(esp + 0xC);
    MEM32(ebx + 0x934) = eax;
    edx = eax;
    MEM32(ebx + 0x1C20) = ecx;
    MEM32(0x37B19C) = edx;
    eax = MEM32(ebx + 0x24);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x80000000u) = eax;
    RECOMP_UNIMPL("wbinvd", 0x00371224u); /* TODO: wbinvd */
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x0037122Du); RECOMP_ICALL_SAFE(0x0036FF60u, _icall_esp); /* manual call 0x0036FF60 */
    }

loc_0037122D: ;
    ecx = MEM32(ebx + 0x1C20);
    eax = MEM32(ecx + 0x44);
    edx = MEM32(ebx);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFFFFF (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0037125C; /* je: equal / zero */

loc_00371242: ;
    PUSH32(esp, 0x00371247u); RECOMP_ABI_CALL(0x0036FB50u, sub_0036FB50); /* call 0x0036FB50 */

loc_00371247: ;
    eax = MEM32(ebx + 0x1C20);
    eax = MEM32(eax + 0x44);
    ecx = MEM32(ebx);
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00371242; /* jne: not equal / not zero */

loc_0037125C: ;
    MEM32(-2147483648) = 0xDEADBEEFu;
    PUSH32(esp, 0x0037126Bu); RECOMP_ABI_CALL(0x00370620u, sub_00370620); /* call 0x00370620 */

loc_0037126B: ;
    edi = MEM32(esp + 0x174);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0037127Au); RECOMP_ABI_CALL(0x00370930u, sub_00370930); /* call 0x00370930 */

loc_0037127A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00371389; /* jl: less (signed <) */

loc_00371282: ;
    edx = MEM32(ebx + 0x1A18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0037128Eu); RECOMP_ABI_CALL(0x0036A1D0u, sub_0036A1D0); /* call 0x0036A1D0 */

loc_0037128E: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    PUSH32(esp, edx);
    edx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003712ADu); RECOMP_ABI_CALL(0x0037214Du, sub_0037214D); /* call 0x0037214D */

loc_003712AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00371389; /* jl: less (signed <) */

loc_003712B5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x003712BCu); RECOMP_ABI_CALL(0x00370080u, sub_00370080); /* call 0x00370080 */

loc_003712BC: ;
    /* nop */

loc_003712C0: ;
    PUSH32(esp, 0x003712C5u); RECOMP_ABI_CALL(0x0036AE70u, sub_0036AE70); /* call 0x0036AE70 */

loc_003712C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003712C0; /* jne: not equal / not zero */

loc_003712C9: ;
    PUSH32(esp, 4);
    MEM32(ebx + 0x794) = 0x37DCC8;
    PUSH32(esp, 0x003712DAu); RECOMP_ABI_CALL(0x0036F000u, sub_0036F000); /* call 0x0036F000 */

loc_003712DA: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x003712E1u); RECOMP_ABI_CALL(0x0036F000u, sub_0036F000); /* call 0x0036F000 */

loc_003712E1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x46;
    edi = 0x37DBB0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x37DBB4) = 0x10;
    eax = MEM32(ebx + 0x1A20);
    ecx = MEM32(ebx + 0x1A14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0037130Cu); RECOMP_ABI_CALL(0x0036A390u, sub_0036A390); /* call 0x0036A390 */

loc_0037130C: ;
    PUSH32(esp, 0x00371311u); RECOMP_ABI_CALL(0x00370730u, sub_00370730); /* call 0x00370730 */

loc_00371311: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00371325u); RECOMP_ABI_CALL(0x0036B810u, sub_0036B810); /* call 0x0036B810 */

loc_00371325: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371379; /* je: equal / zero */

loc_00371335: ;
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371379; /* je: equal / zero */

loc_0037133C: ;
    edx = ebx + 0x1DE4;
    ecx = ebx + 0x2478;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = edx;
    edx = MEM32(ebx + 0x1A18);
    ecx = ebx + 0x8D4;
    _fb = (uint32_t)(0x8DC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x8DC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x1C) = 0x36B5C0;
    MEM32(eax + 0x20) = 0xABCDEF00u;

loc_00371379: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00371380u); RECOMP_ABI_CALL(0x0036A0E0u, sub_0036A0E0); /* call 0x0036A0E0 */

loc_00371380: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00371387u); RECOMP_ABI_CALL(0x0036A130u, sub_0036A130); /* call 0x0036A130 */

loc_00371387: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00371389: ;
    POP32(esp, esi);

loc_0037138A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x164;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003713A0
 * Original: 0x003713A0 - 0x0037154C (428 bytes, 134 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003713A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003713A0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003713FB; /* je: equal / zero */

loc_003713AA: ;
    PUSH32(esp, 0x003713AFu); RECOMP_ABI_CALL(0x00370450u, sub_00370450); /* call 0x00370450 */

loc_003713AF: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    edx = MEM32(esi + 0x24);
    ecx = esi;
    MEM32(esi) = edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x003713C8u); RECOMP_ICALL_SAFE(0x0036FF60u, _icall_esp); /* manual call 0x0036FF60 */
    }

loc_003713C8: ;
    eax = MEM32(esi + 0x1C20);
    eax = MEM32(eax + 0x44);
    ecx = MEM32(esi + 0x24);
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFFFF (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003713FB; /* je: equal / zero */

loc_003713DE: ;
    edi = edi;

loc_003713E0: ;
    PUSH32(esp, 0x003713E5u); RECOMP_ABI_CALL(0x0036FB50u, sub_0036FB50); /* call 0x0036FB50 */

loc_003713E5: ;
    edx = MEM32(esi + 0x1C20);
    eax = MEM32(edx + 0x44);
    ecx = MEM32(esi + 0x24);
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003713E0; /* jne: not equal / not zero */

loc_003713FB: ;
    ebp = esi + 0x1C28;

loc_00371401: ;
    ecx = ebp;
    PUSH32(esp, 0x00371408u); RECOMP_ABI_CALL(0x003723C0u, sub_003723C0); /* call 0x003723C0 */

loc_00371408: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00371401; /* jne: not equal / not zero */

loc_0037140C: ;
    ecx = esi;
    PUSH32(esp, 0x00371413u); RECOMP_ABI_CALL(0x00370800u, sub_00370800); /* call 0x00370800 */

loc_00371413: ;
    ecx = esi;
    PUSH32(esp, 0x0037141Au); RECOMP_ABI_CALL(0x0036FCB0u, sub_0036FCB0); /* call 0x0036FCB0 */

loc_0037141A: ;
    eax = MEM32(esi + 0x7A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037143E; /* je: equal / zero */

loc_00371424: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0037143E; /* jne: not equal / not zero */

loc_00371438: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037143Eu); RECOMP_ABI_CALL(0x0036BC50u, sub_0036BC50); /* call 0x0036BC50 */

loc_0037143E: ;
    PUSH32(esp, ebx);
    edi = esi + 0xF98;
    ebx = 4;
    /* nop */

loc_00371450: ;
    eax = MEM32(edi + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371471; /* je: equal / zero */

loc_00371457: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00371471; /* jne: not equal / not zero */

loc_0037146B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00371471u); RECOMP_ABI_CALL(0x0036BC50u, sub_0036BC50); /* call 0x0036BC50 */

loc_00371471: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371491; /* je: equal / zero */

loc_00371477: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00371491; /* jne: not equal / not zero */

loc_0037148B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00371491u); RECOMP_ABI_CALL(0x0036BC50u, sub_0036BC50); /* call 0x0036BC50 */

loc_00371491: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00371450; /* jne: not equal / not zero */

loc_00371497: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_003714A0: ;
    eax = MEM32(edi + 0x37DAF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003714C4; /* je: equal / zero */

loc_003714AA: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_003714C4; /* jne: not equal / not zero */

loc_003714BE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003714C4u); RECOMP_ABI_CALL(0x0036BC50u, sub_0036BC50); /* call 0x0036BC50 */

loc_003714C4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003714A0; /* jb: below (unsigned <) */

loc_003714CF: ;
    edi = esi + 0x7D4;
    ebx = 0x40;
    /* nop */

loc_003714E0: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003714F1; /* je: equal / zero */

loc_003714E6: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003714F1u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003714F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003714E0; /* jne: not equal / not zero */

loc_003714F7: ;
    eax = MEM32(esi + 0x2488);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0037150D; /* je: equal / zero */

loc_00371502: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0037150Du); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_0037150D: ;
    esi = MEM32(esi + 0x7A4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371522; /* je: equal / zero */

loc_00371517: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00371522u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_00371522: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037153A; /* je: equal / zero */

loc_00371529: ;
    ecx = ebp;
    MEM32(eax + 0x140) = 0;
    PUSH32(esp, 0x0037153Au); RECOMP_ABI_CALL(0x00373866u, sub_00373866); /* call 0x00373866 */

loc_0037153A: ;
    ecx = 0x30;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x37DAF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00371550
 * Original: 0x00371550 - 0x0037159B (75 bytes, 24 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371550: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_0037157F; /* jne: not equal / not zero */

loc_0037155B: ;
    esi = MEM32(0x37B648);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0037156D; /* jb: below (unsigned <) */

loc_00371568: ;
    PUSH32(esp, 0x0037156Du); RECOMP_ABI_CALL(0x003703F0u, sub_003703F0); /* call 0x003703F0 */

loc_0037156D: ;
    MEM32(eax) = 0x41710;
    MEM32(eax + 4) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;

loc_0037157F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xA0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0xA0 (8-bit) */
    esi = MEM32(esp + 0xC);
    if (TEST_NZ(_fa, _fb)) goto loc_0037158E; /* jne: not equal / not zero */

loc_00371588: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0037158Eu); RECOMP_ABI_CALL(0x003704F0u, sub_003704F0); /* call 0x003704F0 */

loc_0037158E: ;
    eax = MEM32(esi + 4);
    POP32(esp, esi);
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003715A0
 * Original: 0x003715A0 - 0x003715FE (94 bytes, 33 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003715A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003715A0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x003715ADu); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003715AD: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003715B7; /* jne: not equal / not zero */

loc_003715B3: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_003715B7: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi * 4 + 0x3799CC);
    PUSH32(esp, 0xB6800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003715CEu); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003715CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003715E4; /* jne: not equal / not zero */

loc_003715D2: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003715DDu); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003715DD: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_003715E4: ;
    esi = esi << 0x1E;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | 0x1030001;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = esi;
    MEM32(edi + 4) = eax;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00371600
 * Original: 0x00371600 - 0x0037161E (30 bytes, 10 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371600: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(0xA0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 0xA0 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_NZ(_fa, _fb)) goto loc_00371612; /* jne: not equal / not zero */

loc_0037160C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00371612u); RECOMP_ABI_CALL(0x003704F0u, sub_003704F0); /* call 0x003704F0 */

loc_00371612: ;
    eax = MEM32(esi + 4);
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00371620
 * Original: 0x00371620 - 0x0037162C (12 bytes, 4 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371620: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    eax = eax >> 0x1E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00371630
 * Original: 0x00371630 - 0x00371639 (9 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371630(void)
{

loc_00371630: ;
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00371640
 * Original: 0x00371640 - 0x00371692 (82 bytes, 37 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00371640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00371640: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 8)); /* fld float */
    SET_HI8(ecx, 0); /* xor self */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    fp_push(1.44269504088896340736); /* fldl2e */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), 0.0); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* ftst */
    /* wait - FPU sync */
    MEM16(ebp + -8) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 8] */
    /* wait - FPU sync */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), 0.0); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* ftst */
    /* wait - FPU sync */
    MEM16(ebp + -4) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 4] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = exp2(fp_top()) - 1.0; /* f2xm1 */
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    _fa = (uint32_t)(MEM16(ebp + -3)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + -3), 1 (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00371678; /* je: equal / zero */

loc_00371674: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_top() / fp_st1()); fp_pop(); /* fdivrp st(1) */

loc_00371678: ;
    _fa = (uint32_t)(MEM16(ebp + -7)) & 0xFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + -7), 0x40 (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00371682; /* jne: not equal / not zero */

loc_00371680: ;
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */

loc_00371682: ;
    SET_HI8(ecx, HI8(ecx) | HI8(ecx));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00371688; /* je: equal / zero */

loc_00371686: ;
    fp_top() = -fp_top(); /* fchs */

loc_00371688: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_pop(); /* fstp st(0) */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003716A0
 * Original: 0x003716A0 - 0x003716AB (11 bytes, 4 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003716A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003716A0: ;
    fp_push(0.69314718055994530942); /* fldln2 */
    fp_push(MEMF(esp + 4)); /* fld float */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003716B0
 * Original: 0x003716B0 - 0x003716BC (12 bytes, 6 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003716B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003716B0: ;
    PUSH32(esp, ecx);
    MEM32(esp) = ecx;
    ecx = MEM32(esp);
    { uint32_t _bs_v = (uint32_t)(ecx); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsf: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 0; _bs_i < 32; _bs_i++)
          if (_bs_v & (1u << _bs_i)) break;
        eax = (uint32_t)_bs_i;;
      } else { (void)(eax); } }
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003716C0
 * Original: 0x003716C0 - 0x003716E2 (34 bytes, 8 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003716C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003716C0: ;
    eax = MEM32(esp + 4);
    ecx = eax + -2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2B (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_0037171F(); return; } /* ja: above (unsigned >) */

loc_003716CC: ;
    ecx = ZX8(MEM8(ecx + 0x37174C));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x371724)); return; /* indirect tail jmp */

    eax = 0x12;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003716DA
 * Original: 0x003716DA - 0x003716E2 (8 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003716DA(void)
{

loc_003716DA: ;
    eax = 0x12;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003716E2
 * Original: 0x003716E2 - 0x003716EA (8 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003716E2(void)
{

loc_003716E2: ;
    eax = 0x1E;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003716EA
 * Original: 0x003716EA - 0x003716F2 (8 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003716EA(void)
{

loc_003716EA: ;
    eax = 0x11;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003716F2
 * Original: 0x003716F2 - 0x003716FA (8 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003716F2(void)
{

loc_003716F2: ;
    eax = 0x1C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003716FA
 * Original: 0x003716FA - 0x00371702 (8 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003716FA(void)
{

loc_003716FA: ;
    eax = 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00371702
 * Original: 0x00371702 - 0x0037170A (8 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371702(void)
{

loc_00371702: ;
    eax = 0x30;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037170A
 * Original: 0x0037170A - 0x00371712 (8 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037170A(void)
{

loc_0037170A: ;
    eax = 0x2E;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00371712
 * Original: 0x00371712 - 0x0037171A (8 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371712(void)
{

loc_00371712: ;
    eax = 0x31;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037171A
 * Original: 0x0037171A - 0x00371722 (8 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037171A(void)
{

loc_0037171A: ;
    eax = 0x2F;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037171F
 * Original: 0x0037171F - 0x00371722 (3 bytes, 1 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037171F(void)
{

loc_0037171F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00371722
 * Original: 0x00371722 - 0x00371780 (94 bytes, 59 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371722(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371722: ;
    edi = edi;
    RECOMP_UNIMPL("cli", 0x00371724u); /* TODO: cli */
    PUSH32(esp, 0 /* seg:ss */);
    RECOMP_UNIMPL("aaa", 0x00371726u); /* TODO: aaa */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + HI8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:ss */);
    RECOMP_UNIMPL("aaa", 0x0037172Au); /* TODO: aaa */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + HI8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:ss */);
    RECOMP_UNIMPL("aaa", 0x0037172Eu); /* TODO: aaa */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:ss */);
    RECOMP_UNIMPL("aaa", 0x00371732u); /* TODO: aaa */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + HI8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:ss */);
    RECOMP_UNIMPL("aaa", 0x00371736u); /* TODO: aaa */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx) = MEM8(edx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ss - segment register */
    RECOMP_UNIMPL("aaa", 0x0037173Au); /* TODO: aaa */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx) = MEM8(edx) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ss - segment register */
    RECOMP_UNIMPL("aaa", 0x0037173Eu); /* TODO: aaa */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ss - segment register */
    RECOMP_UNIMPL("aaa", 0x00371742u); /* TODO: aaa */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx) = MEM8(edx) + LO8(edx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ss - segment register */
    RECOMP_UNIMPL("aaa", 0x00371746u); /* TODO: aaa */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi) = MEM8(edi) + LO8(ebx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ss - segment register */
    RECOMP_UNIMPL("aaa", 0x0037174Au); /* TODO: aaa */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(9) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 9);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(-871889146) = MEM32(-871889146) | eax;
    _fa = (uint32_t)(MEM32(-871889146)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00371780
 * Original: 0x00371780 - 0x0037179A (26 bytes, 10 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371780: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371795; /* je: equal / zero */

loc_0037178B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00371797; /* jle: less or equal (signed <=) */

loc_00371790: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00371797; /* jg: greater (signed >) */

loc_00371795: ;
    SET_LO8(eax, 1);

loc_00371797: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003717A0
 * Original: 0x003717A0 - 0x003717C3 (35 bytes, 10 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003717A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003717A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003717BB; /* je: equal / zero */

loc_003717A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003717BB; /* je: equal / zero */

loc_003717AE: ;
    eax = ZX8(MEM8(eax + 0x3791F0));
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

loc_003717BB: ;
    eax = 0xF;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003717D0
 * Original: 0x003717D0 - 0x0037180C (60 bytes, 17 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003717D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003717D0: ;
    eax = MEM32(esp + 8);
    eax = ZX8(MEM8(eax + 0x3791F0));
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 4));
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_003717F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 4 + 0x379188)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx * 4 + 0x379188) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00371802; /* jbe: below or equal (unsigned <=) */

loc_003717F9: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1A (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003717F0; /* jb: below (unsigned <) */

loc_003717FF: ;
    esp += 12; return; /* ret 8 */

loc_00371802: ;
    eax = MEM32(ecx * 4 + 0x379188);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00371810
 * Original: 0x00371810 - 0x003718CB (187 bytes, 51 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00371810: ;
    ecx = MEM32(esp + 4);
    edx = ZX8(MEM8(ecx + 0xD));
    eax = ZX8(MEM8(edx + 0x3718F5));
    { uint32_t _jt = MEM32(eax * 4 + 0x3718CC); /* switch: 10 entries, 10 targets */
    if (_jt == 0x00371826u) goto loc_00371826;
    if (_jt == 0x0037184Du) goto loc_0037184D;
    if (_jt == 0x00371879u) goto loc_00371879;
    if (_jt == 0x00371880u) goto loc_00371880;
    if (_jt == 0x00371887u) goto loc_00371887;
    if (_jt == 0x0037188Eu) goto loc_0037188E;
    if (_jt == 0x00371895u) goto loc_00371895;
    if (_jt == 0x0037189Cu) goto loc_0037189C;
    if (_jt == 0x003718A3u) goto loc_003718A3;
    if (_jt == 0x003718AAu) goto loc_003718AA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00371826: ;
    eax = 8;

loc_0037182B: ;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    esi = esi & 0xF00000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | 0x2000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi >> 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    goto loc_00371857;

loc_0037184D: ;
    eax = 8;

loc_00371852: ;
    eax = eax | 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00371857: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003718B7; /* je: equal / zero */

loc_0037185F: ;
    ecx = ZX8(MEM8(ecx + 0xD));
    _fb = (uint32_t)(0xFFFFFFD6u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFD6u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003718B4; /* ja: above (unsigned >) */

loc_0037186B: ;
    ecx = ZX8(MEM8(ecx + 0x37191C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x371914); /* switch: 2 entries, 2 targets */
    if (_jt == 0x003718B1u) goto loc_003718B1;
    if (_jt == 0x003718C5u) goto loc_003718C5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00371879: ;
    eax = 4;
    goto loc_0037182B;

loc_00371880: ;
    eax = 4;
    goto loc_00371852;

loc_00371887: ;
    eax = 3;
    goto loc_0037182B;

loc_0037188E: ;
    eax = 3;
    goto loc_00371852;

loc_00371895: ;
    eax = 1;
    goto loc_0037182B;

loc_0037189C: ;
    eax = 1;
    goto loc_00371852;

loc_003718A3: ;
    eax = 9;
    goto loc_00371852;

loc_003718AA: ;
    eax = 0xA;
    goto loc_00371852;

loc_003718B1: ;
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003718B4: ;
    esp += 12; return; /* ret 8 */

loc_003718B7: ;
    SET_LO8(edx, MEM8(edx + 0x3791F0));
    SET_LO8(edx, LO8(edx) & 0x3C);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x20 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003718B1; /* je: equal / zero */

loc_003718C5: ;
    eax = eax | 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00371930
 * Original: 0x00371930 - 0x0037194F (31 bytes, 7 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00371930: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0xD));
    _fb = (uint32_t)(0x2A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x2A;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x371978)); return; /* indirect tail jmp */

    edx = MEM32(esp + 8);
    MEM32(edx) = 0x477FFF00;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00371942
 * Original: 0x00371942 - 0x0037194F (13 bytes, 3 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371942(void)
{

loc_00371942: ;
    edx = MEM32(esp + 8);
    MEM32(edx) = 0x477FFF00;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037194F
 * Original: 0x0037194F - 0x0037195C (13 bytes, 3 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037194F(void)
{

loc_0037194F: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0x4B7FFFFF;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0037195C
 * Original: 0x0037195C - 0x00371969 (13 bytes, 3 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037195C(void)
{

loc_0037195C: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = 0x43FFF800;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00371969
 * Original: 0x00371969 - 0x00371976 (13 bytes, 3 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371969(void)
{

loc_00371969: ;
    edx = MEM32(esp + 8);
    MEM32(edx) = 0x7149F2CA;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00371976
 * Original: 0x00371976 - 0x003719A0 (42 bytes, 23 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371976(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00371976: ;
    edi = edi;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(MEM32(edi)) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(edi) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x19)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ecx + 0x19) = MEM8(ecx + 0x19) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ecx + 0x19)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("aaa", 0x0037197Eu); /* TODO: aaa */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + 0x19)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx + 0x19) = MEM8(edx + 0x19) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx + 0x19)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("aaa", 0x00371982u); /* TODO: aaa */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + ebx + 0x37)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(ecx + ebx + 0x37) = MEM8(ecx + ebx + 0x37) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ecx + ebx + 0x37)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + 0x19)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi + 0x19) = MEM8(edi + 0x19) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi + 0x19)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("aaa", 0x0037198Au); /* TODO: aaa */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + 0x19)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ecx + 0x19) = MEM8(ecx + 0x19) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ecx + 0x19)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("aaa", 0x0037198Eu); /* TODO: aaa */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + 0x19)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx + 0x19) = MEM8(edx + 0x19) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx + 0x19)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("aaa", 0x00371992u); /* TODO: aaa */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + ebx + 0x37)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(ecx + ebx + 0x37) = MEM8(ecx + ebx + 0x37) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ecx + ebx + 0x37)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + LO8(ecx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003719A0
 * Original: 0x003719A0 - 0x00371AF0 (336 bytes, 126 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003719A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003719A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00371AA9; /* jne: not equal / not zero */

loc_003719B0: ;
    ecx = MEM32(esi + 0xC);
    eax = ecx;
    edx = ecx;
    if (0x1C) _cf = (int)(((ecx) >> ((0x1C) - 1)) & 1);
    ecx = ecx >> 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0x14) _cf = (int)(((eax) >> ((0x14) - 1)) & 1);
    eax = eax >> 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0x18) _cf = (int)(((edx) >> ((0x18) - 1)) & 1);
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edi));
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(edi));
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = ecx;
    ecx = ZX8(MEM8(esi + 0xD));
    ecx = ZX8(MEM8(ecx + 0x3791F0));
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    ebx = 1;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (LO8(ecx)) _cf = (int)(((ebx) >> (32 - (LO8(ecx)))) & 1);
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = ebx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 1;
    if (LO8(ecx)) _cf = (int)(((edi) >> (32 - (LO8(ecx)))) & 1);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x24);
    MEM32(ecx) = edi;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    edi = 1;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (LO8(ecx)) _cf = (int)(((edi) >> (32 - (LO8(ecx)))) & 1);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = edi;
    esi = ZX8(MEM8(esi + 0xD));
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00371A3F; /* je: equal / zero */

loc_00371A35: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00371A41; /* jle: less or equal (signed <=) */

loc_00371A3A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00371A41; /* jg: greater (signed >) */

loc_00371A3F: ;
    SET_LO8(ecx, 1);

loc_00371A41: ;
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00371A50; /* jle: less or equal (signed <=) */

loc_00371A4E: ;
    eax = ebx;

loc_00371A50: ;
    edi = 1;
    ecx = eax;
    if (LO8(ecx)) _cf = (int)(((edi) >> (32 - (LO8(ecx)))) & 1);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00371A5F; /* jle: less or equal (signed <=) */

loc_00371A5D: ;
    edx = ebx;

loc_00371A5F: ;
    eax = 1;
    ecx = edx;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00371A8A; /* je: equal / zero */

loc_00371A6D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00371A80; /* jle: less or equal (signed <=) */

loc_00371A72: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00371A80; /* jg: greater (signed >) */

loc_00371A77: ;
    edx = edi * 4;
    goto loc_00371A8D;

loc_00371A80: ;
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    if (3) _cf = (int)(((edx) >> ((3) - 1)) & 1);
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00371A8D;

loc_00371A8A: ;
    edx = edi + edi;

loc_00371A8D: ;
    ecx = MEM32(esp + 0x28);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x24);
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, ebx);
    MEM32(edx) = eax;
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

loc_00371AA9: ;
    edx = MEM32(esp + 0x10);
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x14);
    edx = eax;
    if (0xC) _cf = (int)(((edx) >> ((0xC) - 1)) & 1);
    edx = edx >> 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(edx) = 1;
    edx = MEM32(esp + 0x1C);
    if (0x18) _cf = (int)(((eax) >> ((0x18) - 1)) & 1);
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (6) _cf = (int)(((eax) >> (32 - (6))) & 1);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx) = eax;
    ecx = MEM32(ecx);
    edx = MEM32(esp + 0x20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00371AF0
 * Original: 0x00371AF0 - 0x00371BA1 (177 bytes, 57 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371AF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = ZX8(MEM8(edi + 0xD));
    PUSH32(esp, edi);
    MEM32(esi) = eax;
    PUSH32(esp, 0x00371B09u); RECOMP_ABI_CALL(0x0036BE00u, sub_0036BE00); /* call 0x0036BE00 */

loc_00371B09: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00371B3D; /* jne: not equal / not zero */

loc_00371B1B: ;
    edx = ZX8(MEM8(edi + 0xD));
    SET_LO8(eax, MEM8(edx + 0x3791F0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00371B32; /* jns: not sign (positive) */

loc_00371B29: ;
    MEM32(esi + 8) = 1;
    goto loc_00371B3D;

loc_00371B32: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00371B3D; /* je: equal / zero */

loc_00371B36: ;
    MEM32(esi + 8) = 2;

loc_00371B3D: ;
    eax = MEM32(0x37B648);
    edx = MEM32(eax + 0x1A14);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx + 4) (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00371B5D; /* jne: not equal / not zero */

loc_00371B52: ;
    eax = MEM32(eax + 0x196C);
    MEM32(esi + 0x10) = eax;
    goto loc_00371B64;

loc_00371B5D: ;
    MEM32(esi + 0x10) = 0x11;

loc_00371B64: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00371B84u); RECOMP_ABI_CALL(0x003719A0u, sub_003719A0); /* call 0x003719A0 */

loc_00371B84: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0xC) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00371BB0
 * Original: 0x00371BB0 - 0x00371DD3 (547 bytes, 194 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00371BB0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    eax = ZX8(MEM8(ebx + 0xD));
    eax = ZX8(MEM8(eax + 0x3791F0));
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx + 0x10);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00371D90; /* jne: not equal / not zero */

loc_00371BE4: ;
    eax = MEM32(ebx + 0xC);
    esi = ZX8(MEM8(ebx + 0xD));
    edx = eax;
    edi = eax;
    if (0x14) _cf = (int)(((edx) >> ((0x14) - 1)) & 1);
    edx = edx >> 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0x18) _cf = (int)(((edi) >> ((0x18) - 1)) & 1);
    edi = edi >> 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (0x1C) _cf = (int)(((eax) >> ((0x1C) - 1)) & 1);
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00371C0F; /* je: equal / zero */

loc_00371C05: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00371C11; /* jle: less or equal (signed <=) */

loc_00371C0A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00371C11; /* jg: greater (signed >) */

loc_00371C0F: ;
    SET_LO8(ecx, 1);

loc_00371C11: ;
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    PUSH32(esp, ebp);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ecx;
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x20) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00371CB5; /* je: equal / zero */

loc_00371C2B: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(ebx + 0xE));
    esi = edx;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x1C) = eax;
    ebp = 0;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00371C9C; /* je: equal / zero */

loc_00371C44: ;
    MEM32(esp + 0x24) = ecx;

loc_00371C48: ;
    ebx = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00371C52; /* jbe: below or equal (unsigned <=) */

loc_00371C50: ;
    ebx = esi;

loc_00371C52: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00371C60; /* jbe: below or equal (unsigned <=) */

loc_00371C5C: ;
    ecx = MEM32(esp + 0x10);

loc_00371C60: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 1;
    if (LO8(ecx)) _cf = (int)(((ebx) >> (32 - (LO8(ecx)))) & 1);
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(esp + 0x18));
    if (3) _cf = (int)(((ebx) >> ((3) - 1)) & 1);
    ebx = ebx >> 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(ebx)) >> 32) & 1);
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00371C78; /* jbe: below or equal (unsigned <=) */

loc_00371C77: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00371C78: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00371C85; /* jbe: below or equal (unsigned <=) */

loc_00371C80: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;

loc_00371C85: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00371C92; /* jbe: below or equal (unsigned <=) */

loc_00371C8D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ecx;

loc_00371C92: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00371C48; /* jne: not equal / not zero */

loc_00371C98: ;
    ebx = MEM32(esp + 0x2C);

loc_00371C9C: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x7F)) >> 32) & 1);
    ebp = ebp + 0x7F;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ebp = ebp & 0xFFFFFF80u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = (uint32_t)((int32_t)ebp * (int32_t)MEM32(esp + 0x30));
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esp + 0x20);
    MEM32(esp + 0x14) = ecx;

loc_00371CB5: ;
    ecx = MEM32(esp + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00371D03; /* je: equal / zero */

loc_00371CBD: ;
    MEM32(esp + 0x2C) = ecx;

loc_00371CC1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = edx;
    if (CMP_A(_fa, _fb)) goto loc_00371CC9; /* ja: above (unsigned >) */

loc_00371CC7: ;
    esi = ebp;

loc_00371CC9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edi;
    if (CMP_A(_fa, _fb)) goto loc_00371CD1; /* ja: above (unsigned >) */

loc_00371CCF: ;
    ecx = ebp;

loc_00371CD1: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 1;
    if (LO8(ecx)) _cf = (int)(((esi) >> (32 - (LO8(ecx)))) & 1);
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x14);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x18));
    if (3) _cf = (int)(((esi) >> ((3) - 1)) & 1);
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x14) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_00371CF3; /* jbe: below or equal (unsigned <=) */

loc_00371CF2: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00371CF3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00371CF8; /* jbe: below or equal (unsigned <=) */

loc_00371CF7: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00371CF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00371CFD; /* jbe: below or equal (unsigned <=) */

loc_00371CFC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00371CFD: ;
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00371CC1; /* jne: not equal / not zero */

loc_00371D03: ;
    ecx = MEM32(ebx + 0xC);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (0x14) _cf = (int)(((eax) >> (32 - (0x14))) & 1);
    eax = eax << 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = eax;
    if (CMP_A(_fa, _fb)) goto loc_00371D23; /* ja: above (unsigned >) */

loc_00371D21: ;
    edx = ebp;

loc_00371D23: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00371D29; /* ja: above (unsigned >) */

loc_00371D27: ;
    edi = ebp;

loc_00371D29: ;
    eax = ZX8(MEM8(ebx + 0xD));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00371D5E; /* je: equal / zero */

loc_00371D33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00371D4B; /* jle: less or equal (signed <=) */

loc_00371D38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00371D4B; /* jg: greater (signed >) */

loc_00371D3D: ;
    eax = 1;
    ecx = edx;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (2) _cf = (int)(((eax) >> (32 - (2))) & 1);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00371D69;

loc_00371D4B: ;
    eax = 1;
    ecx = edx;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x14));
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00371D69;

loc_00371D5E: ;
    eax = 1;
    ecx = edx;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (1) _cf = (int)(((eax) >> (32 - (1))) & 1);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00371D69: ;
    ecx = edi + edx;
    edx = 1;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x40);
    MEM32(ecx) = esi;
    ecx = MEM32(ebx + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x14));
    esi = MEM32(esp + 0x44);
    MEM32(esi) = ecx;
    ecx = MEM32(esp + 0x10);
    if (3) _cf = (int)(((edx) >> ((3) - 1)) & 1);
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00371DB8;

loc_00371D90: ;
    esi = MEM32(ebx + 0xC);
    edi = MEM32(esp + 0x40);
    eax = edx;
    if (0x18) _cf = (int)(((eax) >> ((0x18) - 1)) & 1);
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0xC) _cf = (int)(((edx) >> ((0xC) - 1)) & 1);
    edx = edx >> 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = esi;
    esi = MEM32(ebx + 0x10);
    edi = MEM32(esp + 0x44);
    if (6) _cf = (int)(((eax) >> (32 - (6))) & 1);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    MEM32(edi) = esi;

loc_00371DB8: ;
    esi = MEM32(esp + 0x34);
    MEM32(esi) = ecx;
    ecx = MEM32(esp + 0x38);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x38);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_00371DE0
 * Original: 0x00371DE0 - 0x00371E7B (155 bytes, 57 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00371DE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    if (TEST_NZ(_fa, _fb)) goto loc_00371DF6; /* jne: not equal / not zero */

loc_00371DF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00371DF6u); RECOMP_ABI_CALL(0x00370470u, sub_00370470); /* call 0x00370470 */

loc_00371DF6: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00371E1Fu); RECOMP_ABI_CALL(0x00371BB0u, sub_00371BB0); /* call 0x00371BB0 */

loc_00371E1F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    ecx = MEM32(esp + 0x24);
    if (TEST_Z(_fa, _fb)) goto loc_00371E2E; /* je: equal / zero */

loc_00371E28: ;
    ecx = ecx | 0xF0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00371E2E: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00371E68; /* je: equal / zero */

loc_00371E36: ;
    edx = ZX8(MEM8(esi + 0xD));
    edx = ZX8(MEM8(edx + 0x3791F0));
    esi = MEM32(eax + 4);
    edx = edx & 0x3C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax));
    eax = MEM32(esp + 0x10);
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + edx;
    edx = MEM32(esp + 0x1C);
    POP32(esp, esi);
    MEM32(edx) = eax;
    MEM32(edx + 4) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 28; return; /* ret 24 */

loc_00371E68: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00371E80
 * Original: 0x00371E80 - 0x00372075 (501 bytes, 185 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00371E80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00371E80: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    SET_LO8(eax, MEM8(edi + 0x3791F0));
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(eax));
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = ebx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = ecx;
    MEM32(esp + 0x20) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00371F02; /* jne: not equal / not zero */

loc_00371EA8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00371F02; /* je: equal / zero */

loc_00371EAD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00371EB7; /* jle: less or equal (signed <=) */

loc_00371EB2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00371F02; /* jle: less or equal (signed <=) */

loc_00371EB7: ;
    ebp = MEM32(esp + 0x34);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00371ECE; /* jne: not equal / not zero */

loc_00371EC9: ;
    ebp = 1;

loc_00371ECE: ;
    ecx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(esp + 0x28);
    if (CMP_NE(_fa, _fb)) goto loc_00371EE8; /* jne: not equal / not zero */

loc_00371EDA: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)edx);
    if (3) _cf = (int)(((esi) >> ((3) - 1)) & 1);
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x3F)) >> 32) & 1);
    esi = esi + 0x3F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFFC0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;

loc_00371EE8: ;
    esi = MEM32(esp + 0x40);
    edi = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x1C) = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    MEM32(esp + 0x10) = edx;
    goto loc_00371FE9;

loc_00371F02: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x00371F0Bu); RECOMP_ABI_CALL(0x003716B0u, sub_003716B0); /* call 0x003716B0 */

loc_00371F0B: ;
    ecx = MEM32(esp + 0x2C);
    esi = eax;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x00371F1Au); RECOMP_ABI_CALL(0x003716B0u, sub_003716B0); /* call 0x003716B0 */

loc_00371F1A: ;
    ecx = MEM32(esp + 0x30);
    edx = eax;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x00371F29u); RECOMP_ABI_CALL(0x003716B0u, sub_003716B0); /* call 0x003716B0 */

loc_00371F29: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x1C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00371F42; /* je: equal / zero */

loc_00371F38: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00371F44; /* jle: less or equal (signed <=) */

loc_00371F3D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00371F44; /* jg: greater (signed >) */

loc_00371F42: ;
    SET_LO8(ecx, 1);

loc_00371F44: ;
    ebp = MEM32(esp + 0x34);
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = ecx;
    MEM32(esp + 0x28) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00371F74; /* jne: not equal / not zero */

loc_00371F59: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edx;
    if (CMP_A(_fa, _fb)) goto loc_00371F61; /* ja: above (unsigned >) */

loc_00371F5F: ;
    ecx = eax;

loc_00371F61: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00371F69; /* jbe: below or equal (unsigned <=) */

loc_00371F65: ;
    ecx = esi;
    goto loc_00371F71;

loc_00371F69: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edx;
    if (CMP_A(_fa, _fb)) goto loc_00371F71; /* ja: above (unsigned >) */

loc_00371F6F: ;
    ecx = eax;

loc_00371F71: ;
    ebp = ecx + 1;

loc_00371F74: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00371FC6; /* je: equal / zero */

loc_00371F7A: ;
    MEM32(esp + 0x2C) = ebp;
    goto loc_00371F84;

loc_00371F80: ;
    edi = MEM32(esp + 0x28);

loc_00371F84: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00371F8A; /* jbe: below or equal (unsigned <=) */

loc_00371F88: ;
    edi = esi;

loc_00371F8A: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00371F94; /* jbe: below or equal (unsigned <=) */

loc_00371F92: ;
    ecx = edx;

loc_00371F94: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 1;
    if (LO8(ecx)) _cf = (int)(((edi) >> (32 - (LO8(ecx)))) & 1);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x10);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x20));
    if (3) _cf = (int)(((edi) >> ((3) - 1)) & 1);
    edi = edi >> 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_00371FB6; /* jbe: below or equal (unsigned <=) */

loc_00371FB5: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00371FB6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00371FBB; /* jbe: below or equal (unsigned <=) */

loc_00371FBA: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00371FBB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00371FC0; /* jbe: below or equal (unsigned <=) */

loc_00371FBF: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00371FC0: ;
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00371F80; /* jne: not equal / not zero */

loc_00371FC6: ;
    esi = MEM32(esp + 0x40);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = MEM32(esp + 0x30);
    if (CMP_EQ(_fa, _fb)) goto loc_00371FE5; /* je: equal / zero */

loc_00371FD2: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x7F)) >> 32) & 1);
    ecx = ecx + 0x7F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFF80u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ecx + ecx * 2;
    if (1) _cf = (int)(((edx) >> (32 - (1))) & 1);
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x10) = edx;

loc_00371FE5: ;
    ecx = MEM32(esp + 0x3C);

loc_00371FE9: ;
    edx = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x38);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x18);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = MEM32(esp + 0x44);
    if (8) _cf = (int)(((eax) >> (32 - (8))) & 1);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(2)) >> 32) & 1);
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x48);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(edx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0037205D; /* je: equal / zero */

loc_00372035: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x4C);
    if (6) _cf = (int)(((ecx) >> ((6) - 1)) & 1);
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if (0xC) _cf = (int)(((ecx) >> (32 - (0xC))) & 1);
    ecx = ecx << 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x10);
    if (0xC) _cf = (int)(((ecx) >> (32 - (0xC))) & 1);
    ecx = ecx << 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 44; return; /* ret 40 */

loc_0037205D: ;
    eax = MEM32(esp + 0x4C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = 0;
    eax = MEM32(esp + 4);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 44; return; /* ret 40 */

}

/**
 * sub_00372075
 * Original: 0x00372075 - 0x003720B5 (64 bytes, 19 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372075(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372075: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372086; /* je: equal / zero */

loc_00372083: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_00372086: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372093; /* je: equal / zero */

loc_0037208E: ;
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_003720A5;

loc_00372093: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003720A2; /* je: equal / zero */

loc_0037209B: ;
    eax = eax | 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_003720A5;

loc_003720A2: ;
    eax = eax | 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003720A5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x2000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003720B2; /* je: equal / zero */

loc_003720AD: ;
    eax = eax | 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003720B2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003720B5
 * Original: 0x003720B5 - 0x003720D4 (31 bytes, 10 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003720B5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003720B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x37B198)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x37B198), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003720CE; /* jne: not equal / not zero */

loc_003720BF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x37B198);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x418224); PUSH32(esp, 0x003720CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003720C8u); } /* indirect call */
    }

loc_003720CE: ;
    eax = MEM32(0x37B198);
    esp += 4; return; /* ret */

}

/**
 * sub_003720D4
 * Original: 0x003720D4 - 0x0037214D (121 bytes, 49 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003720D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003720D4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003720DFu); RECOMP_ABI_CALL(0x003720B5u, sub_003720B5); /* call 0x003720B5 */

loc_003720DF: ;
    ecx = eax;
    ebx = 0xFF;
    edi = 0xFF00;
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;
    esi = 0x3799E0;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003720FC: ;
    eax = MEM32(esi);
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00372117; /* je: equal / zero */

loc_00372108: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x8AC (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003720FC; /* jb: below (unsigned <) */

loc_00372117: ;
    eax = 0xB9;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00372142; /* jae: above or equal (unsigned >=) */

loc_00372120: ;
    esi = edx + edx * 2;
    esi = esi * 4 + 0x3799E0;

loc_0037212A: ;
    ecx = MEM32(esi);
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = esi;
    if ((_fa == 0)) goto loc_00372142; /* je: equal / zero */

loc_00372134: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372142; /* je: equal / zero */

loc_0037213A: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0037212A; /* jb: below (unsigned <) */

loc_00372142: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0037214D
 * Original: 0x0037214D - 0x003723B2 (613 bytes, 193 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0037214D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0037214D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372160u); RECOMP_ABI_CALL(0x003716C0u, sub_003716C0); /* call 0x003716C0 */

loc_00372160: ;
    PUSH32(esp, eax);
    MEM32(ebp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372169u); RECOMP_ABI_CALL(0x003717A0u, sub_003717A0); /* call 0x003717A0 */

loc_00372169: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037216Eu); RECOMP_ABI_CALL(0x003720D4u, sub_003720D4); /* call 0x003720D4 */

loc_0037216E: ;
    edi = eax;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372178u); RECOMP_ABI_CALL(0x003720B5u, sub_003720B5); /* call 0x003720B5 */

loc_00372178: ;
    edx = MEM32(ebp + 0x14);
    edi = MEM32(edi);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -12) = eax;
    ebx = 0xFF;
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -12);
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    edi = edi & ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xC00000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -8) = ecx;
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_003721AD; /* jns: not sign (positive) */

loc_003721A7: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFFDFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = ecx;

loc_003721AD: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003721BF; /* jne: not equal / not zero */

loc_003721B3: ;
    ecx = MEM32(ebp + -12);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xE0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -24) = ecx;

loc_003721BF: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x32 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00372265; /* je: equal / zero */

loc_003721C9: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x3C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0037221A; /* jne: not equal / not zero */

loc_003721CF: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0037225E; /* je: equal / zero */

loc_003721D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x800000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0037225E; /* je: equal / zero */

loc_003721DF: ;
    edi = esi + 0x820;
    _cf = 0; /* logical op clears CF */
    MEM32(edi + 4) = MEM32(edi + 4) & 0;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    MEM32(edi) = 0xFE9156;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003721F6u); RECOMP_ABI_CALL(0x0037330Cu, sub_0037330C); /* call 0x0037330C */

loc_003721F6: ;
    _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(edi))) >> 32) & 1);
    eax = eax + MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(edi + 4)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esi + 0x828) = eax;
    MEM32(esi + 0x82C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372212u); RECOMP_ABI_CALL(0x0037333Fu, sub_0037333F); /* call 0x0037333F */

loc_00372212: ;
    edi = MEM32(ebp + -20);

loc_00372215: ;
    eax = 0x800000;

loc_0037221A: ;
    ecx = MEM32(ebp + -4);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003723A1; /* jne: not equal / not zero */

loc_00372228: ;
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebp + 0x20);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = edx;
    edx = MEM32(esi + 0x7E4);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + edx * 4 + 0x7DC) = eax;
    ecx = MEM32(ecx);
    MEM32(esi + 0x1B8) = eax;
    MEM32(esi + 0x1B4) = ecx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00372257: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

loc_0037225E: ;
    eax = 0x400000;
    goto loc_0037221A;

loc_00372265: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00372215; /* je: equal / zero */

loc_0037226A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00372215; /* je: equal / zero */

loc_00372271: ;
    edi = esi + 0x820;
    _cf = 0; /* logical op clears CF */
    MEM32(edi + 4) = MEM32(edi + 4) & 0;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    MEM32(edi) = 0x1312D00;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00372288u); RECOMP_ABI_CALL(0x0037330Cu, sub_0037330C); /* call 0x0037330C */

loc_00372288: ;
    _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(edi))) >> 32) & 1);
    eax = eax + MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(edi + 4)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esi + 0x828) = eax;
    MEM32(esi + 0x82C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003722A4u); RECOMP_ABI_CALL(0x0037333Fu, sub_0037333F); /* call 0x0037333F */

loc_003722A4: ;
    edi = MEM32(ebp + -20);
    eax = 0x400000;
    goto loc_0037221A;

loc_003722B1: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003722CE; /* jne: not equal / not zero */

loc_003722B7: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + -24), ecx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_003722CB; /* jne: not equal / not zero */

loc_003722BF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xE0000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00372398; /* jne: not equal / not zero */

loc_003722CB: ;
    ecx = MEM32(ebp + -4);

loc_003722CE: ;
    edx = ZX16(MEM16(ecx + 4));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0037239B; /* jne: not equal / not zero */

loc_003722DB: ;
    edx = ZX16(MEM16(ecx + 6));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0037239B; /* jne: not equal / not zero */

loc_003722E8: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    if (0x10) _cf = (int)(((ecx) >> ((0x10) - 1)) & 1);
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (4) _cf = (int)(((edx) >> ((4) - 1)) & 1);
    edx = edx >> 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ~ecx;
    edx = ~edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00372398; /* jne: not equal / not zero */

loc_00372303: ;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx);
    edx = MEM32(ebp + 0x14);
    if (0x18) _cf = (int)(((ecx) >> ((0x18) - 1)) & 1);
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (7) _cf = (int)(((edx) >> ((7) - 1)) & 1);
    edx = edx >> 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ~ecx;
    edx = ~edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00372398; /* jne: not equal / not zero */

loc_0037231C: ;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx);
    edx = MEM32(ebp + 0x14);
    if (0x19) _cf = (int)(((ecx) >> ((0x19) - 1)) & 1);
    ecx = ecx >> 0x19;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (8) _cf = (int)(((edx) >> ((8) - 1)) & 1);
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ~ecx;
    edx = ~edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00372398; /* jne: not equal / not zero */

loc_00372335: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), eax (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0037239B; /* je: equal / zero */

loc_0037233C: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0037235A; /* je: equal / zero */

loc_00372342: ;
    _fa = (uint32_t)(MEM8(ebp + -8)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -8), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0037234E; /* je: equal / zero */

loc_00372348: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 2), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0037235A; /* jne: not equal / not zero */

loc_0037234E: ;
    _fa = (uint32_t)(MEM8(ebp + -8)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -8), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0037239B; /* je: equal / zero */

loc_00372354: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 2), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0037239B; /* jne: not equal / not zero */

loc_0037235A: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0037238E; /* je: equal / zero */

loc_00372361: ;
    edi = MEM32(ebp + -12);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0037236A; /* jne: not equal / not zero */

loc_00372368: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037236A: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00372376; /* jne: not equal / not zero */

loc_00372370: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 2), 6 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00372386; /* jne: not equal / not zero */

loc_00372376: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00372386; /* je: equal / zero */

loc_0037237C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x10000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00372386; /* jne: not equal / not zero */

loc_00372384: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00372386: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00372228; /* jne: not equal / not zero */

loc_0037238E: ;
    eax = 0x80004005u;
    goto loc_00372257;

loc_00372398: ;
    ecx = MEM32(ebp + -4);

loc_0037239B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xC)) >> 32) & 1);
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = ecx;

loc_003723A1: ;
    edx = MEM32(ecx);
    MEM32(ebp + 0x10) = edx;
    _cf = 0; /* logical op clears CF */
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003722B1; /* je: equal / zero */

loc_003723B0: ;
    goto loc_0037238E;

}

/**
 * sub_003723C0
 * Original: 0x003723C0 - 0x003723D1 (17 bytes, 5 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003723C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003723C0: ;
    eax = MEM32(ecx + 0x1BC);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 2 + 0x5D;
    eax = MEM32(ecx + eax * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003723E0
 * Original: 0x003723E0 - 0x003723E3 (3 bytes, 2 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003723E0(void)
{

loc_003723E0: ;
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    esp += 4; return; /* ret */

}

/**
 * sub_003723F0
 * Original: 0x003723F0 - 0x00372507 (279 bytes, 73 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003723F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003723F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00372500; /* je: equal / zero */

loc_00372406: ;
    eax = MEM32(edi + 0x140);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372500; /* je: equal / zero */

loc_00372414: ;
    ecx = MEM32(esi + 8);
    ecx = ecx & 0xC0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372438; /* jne: not equal / not zero */

loc_00372425: ;
    _fa = (uint32_t)(MEM32(esi + 0x1B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x1B4), 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372438; /* je: equal / zero */

loc_00372431: ;
    eax = 1;
    goto loc_0037243A;

loc_00372438: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0037243A: ;
    edx = MEM32(esi + 0xA4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003724DE; /* jne: not equal / not zero */

loc_00372448: ;
    _fa = (uint32_t)(MEM32(esi + 0x1B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x1B4), 0x1000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0037245C; /* jne: not equal / not zero */

loc_00372454: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003724DE; /* je: equal / zero */

loc_0037245C: ;
    _fa = (uint32_t)(MEM32(edi + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x100), 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003724DE; /* je: equal / zero */

loc_00372468: ;
    SET_LO16(edx, 0x80C0);
    RECOMP_UNIMPL("in al, dx", 0x0037246Cu); /* TODO: in al, dx */
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ~eax;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40000000 (32-bit) */
    MEM32(esi + 0x1D0) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00372490; /* jne: not equal / not zero */

loc_00372483: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x1D0) = ecx;

loc_00372490: ;
    eax = MEM32(esi + 0x1BC);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax + eax * 2 + 0x5D;
    MEM32(esi + 0xA4) = 1;
    _fa = (uint32_t)(MEM32(esi + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + edx * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003724D1; /* je: equal / zero */

loc_003724AD: ;
    ecx = MEM32(esi + 0x1C0);
    eax = eax + eax * 2;
    edx = MEM32(esi + eax * 4 + 0x178);
    eax = esi + eax * 4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003724D1; /* jne: not equal / not zero */

loc_003724C5: ;
    edx = MEM32(eax + 0x17C);
    MEM32(0x37DDE8) = edx;

loc_003724D1: ;
    eax = MEM32(0x37DDE8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003724DEu); RECOMP_ABI_CALL(0x0036E23Eu, sub_0036E23E); /* call 0x0036E23E */

loc_003724DE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x84;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(edi + 0x140) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x418218); PUSH32(esp, 0x003724F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003724F3u); } /* indirect call */
    }

loc_003724F9: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00372500: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00372510
 * Original: 0x00372510 - 0x003725E2 (210 bytes, 65 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00372510: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1BC);
    ebx = MEM32(esi);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax + eax * 2 + 0x5D;
    edx = MEM32(esi + ecx * 4);
    ecx = esi + ecx * 4;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003725DC; /* je: equal / zero */

loc_00372534: ;
    PUSH32(esp, edi);
    goto loc_00372540;

    /* nop */
    edi = edi;

loc_00372540: ;
    edi = MEM32(esi + 0x1C0);
    edx = eax + eax * 2;
    eax = esi + edx * 4;
    edx = MEM32(eax + 0x178);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003725D5; /* jne: not equal / not zero */

loc_00372556: ;
    MEM32(ecx) = 0;
    eax = MEM32(eax + 0x17C);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(0x37DDE8) = eax;
    PUSH32(esp, 0x0037256Fu); RECOMP_ABI_CALL(0x0036E23Eu, sub_0036E23E); /* call 0x0036E23E */

loc_0037256F: ;
    edi = MEM32(esi + 0x1BC);
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esi + edi * 4 + 0x7DC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + edi * 4 + 0x7DC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003725A2; /* jne: not equal / not zero */

loc_00372582: ;
    eax = edi + edi * 2;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + esi + 0x1DC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00372597u); RECOMP_ABI_CALL(0x0036E2C0u, sub_0036E2C0); /* call 0x0036E2C0 */

loc_00372597: ;
    MEM32(esi + edi * 4 + 0x7DC) = 0;

loc_003725A2: ;
    eax = MEM32(ebx + 0x40071C);
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x40071C) = eax;
    ecx = MEM32(esi + 0x1BC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax + eax * 2 + 0x5D;
    MEM32(esi + 0x1BC) = ecx;
    ecx = esi + edx * 4;
    edx = MEM32(ecx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372540; /* jne: not equal / not zero */

loc_003725D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003725DC: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003725F0
 * Original: 0x003725F0 - 0x003726FA (266 bytes, 79 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003725F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003725F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    PUSH32(esp, 0x00372600u); RECOMP_ABI_CALL(0x003723E0u, sub_003723E0); /* call 0x003723E0 */

loc_00372600: ;
    ecx = MEM32(esi + 0x1D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372614; /* je: equal / zero */

loc_0037260A: ;
    edx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x1D4) = edx;

loc_00372614: ;
    ebx = MEM32(esi + 0x1C0);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1D8) = eax;
    MEM32(esi + 0x1C0) = ebx;
    SET_LO8(ebx, MEM8(edi + 0x6013D4));
    ecx = esi;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00372636u); RECOMP_ABI_CALL(0x00372510u, sub_00372510); /* call 0x00372510 */

loc_00372636: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00372643; /* je: equal / zero */

loc_0037263F: ;
    ebp = ecx;
    goto loc_0037265D;

loc_00372643: ;
    eax = MEM32(esi + 0x1C4);
    _fa = (uint32_t)(MEM32(esi + 0x1C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C0), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0037265D; /* jne: not equal / not zero */

loc_00372651: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1C4) = eax;
    ebp = 2;

loc_0037265D: ;
    _fa = (uint32_t)(MEM32(esi + 0x1B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x1B4), 0x1000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00372699; /* jne: not equal / not zero */

loc_00372669: ;
    SET_LO16(edx, 0x80C0);
    RECOMP_UNIMPL("in al, dx", 0x0037266Du); /* TODO: in al, dx */
    edx = MEM32(esi + 8);
    edx = edx & 0xC0000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ~eax;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40000000 (32-bit) */
    MEM32(esi + 0x1D0) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00372699; /* jne: not equal / not zero */

loc_0037268C: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x1D0) = edx;

loc_00372699: ;
    eax = 0x1000000;
    edi = edi;

loc_003726A0: ;
    MEM32(edi + 0x600100) = ecx;
    _fa = (uint32_t)(MEM32(edi + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x100), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003726A0; /* jne: not equal / not zero */

loc_003726AE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esi + 0x194;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x4180B0); PUSH32(esp, 0x003726BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003726B8u); } /* indirect call */
    }

loc_003726BE: ;
    eax = MEM32(esi + 0x190);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003726EA; /* je: equal / zero */

loc_003726C8: ;
    ecx = MEM32(esi + 0x1C0);
    edx = MEM32(esi + 0x1BC);
    MEM32(esp + 0x10) = ecx;
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = ebp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003726E7u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x003726E5u); } /* indirect call */
    }

loc_003726E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003726EA: ;
    MEM8(edi + 0x6013D4) = LO8(ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00372700
 * Original: 0x00372700 - 0x00372830 (304 bytes, 86 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00372700: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    MEM32(eax + 0x9100) = 1;
    edi = MEM32(esi + 0x840);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00372822; /* je: equal / zero */

loc_0037271F: ;
    ecx = MEM32(esi + edi * 8 + 0x830);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | MEM32(esi + edi * 8 + 0x834);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00372822; /* je: equal / zero */

loc_00372733: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00372740: ;
    edx = edi + 1;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x80000001u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00372750; /* jns: not sign (positive) */

loc_0037274B: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    edx = edx | 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00372750: ;
    MEM32(esi + 0x840) = edx;
    MEM32(esi + edi * 8 + 0x830) = ebx;
    MEM32(esi + edi * 8 + 0x834) = ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x844)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x844) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00372794; /* jne: not equal / not zero */

loc_0037276C: ;
    eax = MEM32(esi + 0x848);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x844) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_003727DE; /* je: equal / zero */

loc_00372780: ;
    ecx = MEM32(esi + 0x84C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esi + 0x848) = ebx;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0037278Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0037278Du); } /* indirect call */
    }

loc_0037278F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003727DE;

loc_00372794: ;
    eax = MEM32(esi + 0x824);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(esi + 0x820);
    if (CMP_A(_fa, _fb)) goto loc_003727A8; /* ja: above (unsigned >) */

loc_003727A4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003727DE; /* jbe: below or equal (unsigned <=) */

loc_003727A8: ;
    edx = MEM32(esi + 0x828);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x82C);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(esi + 0x828) = edx;
    eax = MEM32(esi + 0x828);
    PUSH32(esp, 1);
    edx = ecx;
    PUSH32(esp, edx);
    MEM32(esi + 0x82C) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003727D7u); RECOMP_ABI_CALL(0x0037333Fu, sub_0037333F); /* call 0x0037333F */

loc_003727D7: ;
    ecx = esi;
    PUSH32(esp, 0x003727DEu); RECOMP_ABI_CALL(0x003725F0u, sub_003725F0); /* call 0x003725F0 */

loc_003727DE: ;
    eax = MEM32(esi + 0x840);
    ecx = MEM32(esi + eax * 8 + 0x830);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | MEM32(esi + eax * 8 + 0x834);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0037281B; /* je: equal / zero */

loc_003727F4: ;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x003727FDu); RECOMP_ABI_CALL(0x0037330Cu, sub_0037330C); /* call 0x0037330C */

loc_003727FD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + edi * 8 + 0x834)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + edi * 8 + 0x834) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0037281B; /* jb: below (unsigned <) */

loc_00372806: ;
    if (CMP_A(_fa, _fb)) goto loc_00372811; /* ja: above (unsigned >) */

loc_00372808: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + edi * 8 + 0x830)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + edi * 8 + 0x830) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0037281B; /* jb: below (unsigned <) */

loc_00372811: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00372740; /* jl: less (signed <) */

loc_0037281B: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00372822: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0037282Bu); RECOMP_ABI_CALL(0x00373321u, sub_00373321); /* call 0x00373321 */

loc_0037282B: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00372830
 * Original: 0x00372830 - 0x00372892 (98 bytes, 19 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372830: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(0x37B198);
    eax = MEM32(ecx + -356);
    _fb = (uint32_t)(0xFFFFFE9Cu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFE9Cu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372880; /* je: equal / zero */

loc_0037284A: ;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372876; /* je: equal / zero */

loc_00372855: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372876; /* je: equal / zero */

loc_0037285A: ;
    MEM32(eax + 0x68084C) = 0x800080;
    MEM32(eax + 0x140) = 0;
    PUSH32(esp, 0x00372873u); RECOMP_ABI_CALL(0x00373866u, sub_00373866); /* call 0x00373866 */

loc_00372873: ;
    esp += 8; return; /* ret 4 */

loc_00372876: ;
    MEM32(eax + 0x68084C) = 0;

loc_00372880: ;
    MEM32(eax + 0x140) = 0;
    PUSH32(esp, 0x0037288Fu); RECOMP_ABI_CALL(0x00373866u, sub_00373866); /* call 0x00373866 */

loc_0037288F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003728A0
 * Original: 0x003728A0 - 0x003728E8 (72 bytes, 22 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003728A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003728A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x37A2D8);
    PUSH32(esp, 0x003728ABu); RECOMP_ABI_CALL(0x003769F0u, sub_003769F0); /* call 0x003769F0 */

loc_003728AB: ;
    esi = MEM32(-46137012);
    PUSH32(esp, 0x41F370);
    PUSH32(esp, 0x003728BBu); RECOMP_ABI_CALL(0x003769F0u, sub_003769F0); /* call 0x003769F0 */

loc_003728BB: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x37A290);
    PUSH32(esp, 0x003728E0u); RECOMP_ABI_CALL(0x003769F0u, sub_003769F0); /* call 0x003769F0 */

loc_003728E0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003728F0
 * Original: 0x003728F0 - 0x00372A2B (315 bytes, 94 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003728F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003728F0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    edx = edi;
    eax = edi;
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xD (32-bit) */
    esi = ecx;
    ecx = MEM32(esi);
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_00372AE5(); return; } /* ja: above (unsigned >) */

loc_00372911: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x372B24)); return; /* indirect tail jmp */

    edi = MEM32(esi + 0x1C8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = eax;
    ecx = eax;
    ebp = ebp & 7;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x1C0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x30) = edx;
    if (CMP_G(_fas, _fbs)) goto loc_00372967; /* jg: greater (signed >) */

loc_0037294B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037295A; /* je: equal / zero */

loc_0037294F: ;
    edi = 1;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = edi;

loc_0037295A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00372963; /* jne: not equal / not zero */

loc_00372960: ;
    edi = eax + 1;

loc_00372963: ;
    ebx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00372967: ;
    eax = edi + ebp;
    MEM32(esi + 0x1C4) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x1D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1D4), edx (32-bit) */
    MEM32(esi + 0x1C8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003729A4; /* je: equal / zero */

loc_0037297E: ;
    ecx = esi;
    PUSH32(esp, 0x00372985u); RECOMP_ABI_CALL(0x003723E0u, sub_003723E0); /* call 0x003723E0 */

loc_00372985: ;
    ecx = MEM32(esi + 0x1D4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    _fb = (uint32_t)(MEM32(esi + 0x1D8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x1D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x30) = ecx;
    if ((_fas >= 0)) goto loc_003729A4; /* jns: not sign (positive) */

loc_0037299C: ;
    MEM32(esp + 0x30) = 0;

loc_003729A4: ;
    eax = MEM32(esi + 0x1CC);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax + eax * 2 + 0x5D;
    MEM32(esi + ecx * 4) = 1;
    ecx = MEM32(esp + 0x14);
    edx = eax + eax * 2;
    eax = esi + edx * 4;
    MEM32(eax + 0x178) = edi;
    MEM32(eax + 0x17C) = ecx;
    edx = MEM32(esi + 0x1CC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(esi + 0x1CC) = edx;
    PUSH32(esp, 0x003729E2u); RECOMP_ABI_CALL(0x00372510u, sub_00372510); /* call 0x00372510 */

loc_003729E2: ;
    eax = MEM32(esi + 0x18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372A21; /* je: equal / zero */

loc_003729EC: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi + 0x1CC);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esi + 0x1D4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x24) = edx;
    edx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x2C) = ecx;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00372A1Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00372A1Cu); } /* indirect call */
    }

loc_00372A1E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00372A21: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372918
 * Original: 0x00372918 - 0x00372A2B (275 bytes, 80 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372918(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00372918: ;
    edi = MEM32(esi + 0x1C8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = eax;
    ecx = eax;
    ebp = ebp & 7;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x1C0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x30) = edx;
    if (CMP_G(_fas, _fbs)) goto loc_00372967; /* jg: greater (signed >) */

loc_0037294B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0037295A; /* je: equal / zero */

loc_0037294F: ;
    edi = 1;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = edi;

loc_0037295A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00372963; /* jne: not equal / not zero */

loc_00372960: ;
    edi = eax + 1;

loc_00372963: ;
    ebx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00372967: ;
    eax = edi + ebp;
    MEM32(esi + 0x1C4) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x1D4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1D4), edx (32-bit) */
    MEM32(esi + 0x1C8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003729A4; /* je: equal / zero */

loc_0037297E: ;
    ecx = esi;
    PUSH32(esp, 0x00372985u); RECOMP_ABI_CALL(0x003723E0u, sub_003723E0); /* call 0x003723E0 */

loc_00372985: ;
    ecx = MEM32(esi + 0x1D4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    _fb = (uint32_t)(MEM32(esi + 0x1D8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x1D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x30) = ecx;
    if ((_fas >= 0)) goto loc_003729A4; /* jns: not sign (positive) */

loc_0037299C: ;
    MEM32(esp + 0x30) = 0;

loc_003729A4: ;
    eax = MEM32(esi + 0x1CC);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax + eax * 2 + 0x5D;
    MEM32(esi + ecx * 4) = 1;
    ecx = MEM32(esp + 0x14);
    edx = eax + eax * 2;
    eax = esi + edx * 4;
    MEM32(eax + 0x178) = edi;
    MEM32(eax + 0x17C) = ecx;
    edx = MEM32(esi + 0x1CC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(esi + 0x1CC) = edx;
    PUSH32(esp, 0x003729E2u); RECOMP_ABI_CALL(0x00372510u, sub_00372510); /* call 0x00372510 */

loc_003729E2: ;
    eax = MEM32(esi + 0x18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372A21; /* je: equal / zero */

loc_003729EC: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi + 0x1CC);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esi + 0x1D4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x24) = edx;
    edx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x2C) = ecx;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00372A1Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00372A1Cu); } /* indirect call */
    }

loc_00372A1E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00372A21: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372A23
 * Original: 0x00372A23 - 0x00372A2B (8 bytes, 4 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372A23(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372A23: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372A2B
 * Original: 0x00372A2B - 0x00372A55 (42 bytes, 12 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372A2B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372A2B: ;
    ecx = MEM32(0x37B6A0);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax + eax * 4;
    MEM32(0x37B6A0) = ecx;
    ecx = eax * 4 + 0x37B8B4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00372A48u); RECOMP_ABI_CALL(0x00376A30u, sub_00376A30); /* call 0x00376A30 */

loc_00372A48: ;
    PUSH32(esp, 0x00372A4Du); RECOMP_ABI_CALL(0x0036FEE0u, sub_0036FEE0); /* call 0x0036FEE0 */

loc_00372A4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372A55
 * Original: 0x00372A55 - 0x00372A73 (30 bytes, 9 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372A55(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372A55: ;
    MEM32(0x37B6A0) = MEM32(0x37B6A0) - 1;
    _fa = (uint32_t)(MEM32(0x37B6A0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00372A66u); RECOMP_ABI_CALL(0x00376A30u, sub_00376A30); /* call 0x00376A30 */

loc_00372A66: ;
    PUSH32(esp, 0x00372A6Bu); RECOMP_ABI_CALL(0x0036FEE0u, sub_0036FEE0); /* call 0x0036FEE0 */

loc_00372A6B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372A5B
 * Original: 0x00372A5B - 0x00372A73 (24 bytes, 8 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372A5B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372A5B: ;
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00372A66u); RECOMP_ABI_CALL(0x00376A30u, sub_00376A30); /* call 0x00376A30 */

loc_00372A66: ;
    PUSH32(esp, 0x00372A6Bu); RECOMP_ABI_CALL(0x0036FEE0u, sub_0036FEE0); /* call 0x0036FEE0 */

loc_00372A6B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372A73
 * Original: 0x00372A73 - 0x00372A8C (25 bytes, 9 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372A73(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372A73: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x1A4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1A4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x4180B0); PUSH32(esp, 0x00372A84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00372A7Eu); } /* indirect call */
    }

loc_00372A84: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372A8C
 * Original: 0x00372A8C - 0x00372AA6 (26 bytes, 9 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372A8C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372A8C: ;
    eax = MEM32(ecx + 0x401A88);
    ecx = MEM32(ecx + 0x40186C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00372A9Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00372A99u); } /* indirect call */
    }

loc_00372A9B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372AA6
 * Original: 0x00372AA6 - 0x00372ACE (40 bytes, 8 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372AA6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372AA6: ;
    MEM32(ecx + 0x400750) = 0xE00050;
    MEM32(ecx + 0x400754) = eax;
    POP32(esp, edi);
    MEM32(ecx + 0x400750) = 0xDF0008;
    MEM32(ecx + 0x400754) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372ACE
 * Original: 0x00372ACE - 0x00372AE5 (23 bytes, 7 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372ACE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372ACE: ;
    eax = MEM32(ecx + 0x401A88);
    edx = MEM32(ecx + 0x40186C);
    POP32(esp, edi);
    MEM32(eax + ecx) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372AE5
 * Original: 0x00372AE5 - 0x00372B23 (62 bytes, 19 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372AE5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372AE5: ;
    PUSH32(esp, 0x37A2D8);
    PUSH32(esp, 0x00372AEFu); RECOMP_ABI_CALL(0x003769F0u, sub_003769F0); /* call 0x003769F0 */

loc_00372AEF: ;
    esi = MEM32(-46137012);
    PUSH32(esp, 0x41F370);
    PUSH32(esp, 0x00372AFFu); RECOMP_ABI_CALL(0x003769F0u, sub_003769F0); /* call 0x003769F0 */

loc_00372AFF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x37A290);
    PUSH32(esp, 0x00372B17u); RECOMP_ABI_CALL(0x003769F0u, sub_003769F0); /* call 0x003769F0 */

loc_00372B17: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372B24
 * Original: 0x00372B24 - 0x00372B60 (60 bytes, 28 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372B24(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00372B24: ;
    { uint64_t _t = (uint64_t)(MEM8(ecx)) - (uint64_t)(HI8(ecx)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(ecx) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    RECOMP_UNIMPL("aaa", 0x00372B26u); /* TODO: aaa */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ecx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    SET_HI8(ecx, HI8(ecx) + HI8(eax));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(edi)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(HI8(edx)) < (uint32_t)(MEM8(edi)));
    SET_HI8(edx, HI8(edx) - MEM8(edi));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ecx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    SET_HI8(ecx, HI8(ecx) + HI8(eax));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(edi)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(HI8(edx)) < (uint32_t)(MEM8(edi)));
    SET_HI8(edx, HI8(edx) - MEM8(edi));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ecx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    SET_HI8(ecx, HI8(ecx) + HI8(eax));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(edi)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(HI8(edx)) < (uint32_t)(MEM8(edi)));
    SET_HI8(edx, HI8(edx) - MEM8(edi));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + 0x2A)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(ebx + 0x2A) = MEM8(ebx + 0x2A) + HI8(edx);
    _fa = (uint32_t)(MEM8(ebx + 0x2A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("aaa", 0x00372B36u); /* TODO: aaa */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + ebp + 0x2A8C0037)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx + ebp + 0x2A8C0037) = MEM8(edx + ebp + 0x2A8C0037) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + ebp + 0x2A8C0037)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("aaa", 0x00372B3Eu); /* TODO: aaa */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + -838846678)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(esi + -838846678) = MEM8(esi + -838846678) + HI8(eax);
    _fa = (uint32_t)(MEM8(esi + -838846678)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(edi)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(HI8(edx)) < (uint32_t)(MEM8(edi)));
    SET_HI8(edx, HI8(edx) - MEM8(edi));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ecx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    SET_HI8(ecx, HI8(ecx) + HI8(eax));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(edi)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(HI8(edx)) < (uint32_t)(MEM8(edi)));
    SET_HI8(edx, HI8(edx) - MEM8(edi));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + HI8(eax);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(edi)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(HI8(edx)) < (uint32_t)(MEM8(edi)));
    SET_HI8(edx, HI8(edx) - MEM8(edi));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + 0x2A)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ebp + 0x2A) = MEM8(ebp + 0x2A) + LO8(edx);
    _fa = (uint32_t)(MEM8(ebp + 0x2A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("aaa", 0x00372B52u); /* TODO: aaa */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(edi)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(HI8(edx)) < (uint32_t)(MEM8(edi)));
    SET_HI8(edx, HI8(edx) - MEM8(edi));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + 0x2A)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(ebx + 0x2A) = MEM8(ebx + 0x2A) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ebx + 0x2A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("aaa", 0x00372B5Au); /* TODO: aaa */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + LO8(ecx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00372B60
 * Original: 0x00372B60 - 0x00372C0B (171 bytes, 52 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00372B60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    MEM32(esi + 0x400720) = 0;
    eax = MEM32(esi + 0x400100);
    ebp = MEM32(esi + 0x400704);
    ebx = MEM32(esi + 0x400108);
    ebp = ebp & 0x1FFC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372BBF; /* je: equal / zero */

loc_00372B8F: ;
    eax = ebp;
    eax = eax >> 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x400100) = 0x1000;
    ecx = MEM32(edi);
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00372BA3: ;
    edx = MEM32(ecx + 0x400700);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372BA3; /* jne: not equal / not zero */

loc_00372BAD: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00372BB5u); RECOMP_ABI_CALL(0x0037825Fu, sub_0037825F); /* call 0x0037825F */

loc_00372BB5: ;
    eax = MEM32(esi + 0x400100);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372BF6; /* je: equal / zero */

loc_00372BBF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi + 0x400100) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00372BF6; /* je: equal / zero */

loc_00372BC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100001) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x100001 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372BF6; /* je: equal / zero */

loc_00372BD0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    eax = MEM32(esi + 0x400708);
    if (TEST_NZ(_fa, _fb)) goto loc_00372BF6; /* jne: not equal / not zero */

loc_00372BDB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x100 (32-bit) */
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_00372BED; /* jne: not equal / not zero */

loc_00372BE4: ;
    ecx = edi;
    PUSH32(esp, 0x00372BEBu); RECOMP_ABI_CALL(0x003728F0u, sub_003728F0); /* call 0x003728F0 */

loc_00372BEB: ;
    goto loc_00372BF6;

loc_00372BED: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00372BF6u); RECOMP_ABI_CALL(0x003728A0u, sub_003728A0); /* call 0x003728A0 */

loc_00372BF6: ;
    POP32(esp, edi);
    MEM32(esi + 0x400720) = 1;
    eax = MEM32(esi + 0x400100);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00372C10
 * Original: 0x00372C10 - 0x00372D93 (387 bytes, 97 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00372C10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx);
    eax = MEM32(esi + 0x2100);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x100000 (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00372C2F; /* je: equal / zero */

loc_00372C25: ;
    MEM32(esi + 0x2100) = 0x100000;

loc_00372C2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372C40; /* je: equal / zero */

loc_00372C36: ;
    MEM32(esi + 0x2100) = 0x1000000;

loc_00372C40: ;
    edx = MEM32(esi + 0x2100);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    edi = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00372C90; /* je: equal / zero */

loc_00372C52: ;
    eax = MEM32(esi + 0x3250);
    MEM32(esi + 0x2500) = ebp;
    MEM32(esi + 0x3250) = ebp;
    MEM32(esi + 0x2100) = edi;
    ecx = 0xFFFF;
    /* nop */

loc_00372C70: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372C7E; /* je: equal / zero */

loc_00372C75: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x3250);
    if ((_fa != 0)) goto loc_00372C70; /* jne: not equal / not zero */

loc_00372C7E: ;
    MEM32(esi + 0x3258) = ebp;
    MEM32(esi + 0x3250) = edi;
    MEM32(esi + 0x2500) = edi;

loc_00372C90: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372CFB; /* je: equal / zero */

loc_00372C95: ;
    PUSH32(esp, 0x37A2D8);
    PUSH32(esp, 0x00372C9Fu); RECOMP_ABI_CALL(0x003769F0u, sub_003769F0); /* call 0x003769F0 */

loc_00372C9F: ;
    edi = MEM32(-46137012);
    PUSH32(esp, 0x41F370);
    PUSH32(esp, 0x00372CAFu); RECOMP_ABI_CALL(0x003769F0u, sub_003769F0); /* call 0x003769F0 */

loc_00372CAF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    edi = edi & 0xFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0x37A290);
    PUSH32(esp, 0x00372CC5u); RECOMP_ABI_CALL(0x003769F0u, sub_003769F0); /* call 0x003769F0 */

loc_00372CC5: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    MEM32(esi + 0x2100) = 0x1000;
    MEM32(esi + 0x3228) = ebp;
    eax = MEM32(esi + 0x3240);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x3244)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x3244) (32-bit) */
    edi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00372CFB; /* je: equal / zero */

loc_00372CEC: ;
    eax = MEM32(esi + 0x3244);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x3244) = eax;

loc_00372CFB: ;
    eax = MEM32(esi + 0x3220);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372D6A; /* je: equal / zero */

loc_00372D06: ;
    eax = MEM32(esi + 0x3214);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00372D43; /* jne: not equal / not zero */

loc_00372D10: ;
    _fa = (uint32_t)(MEM32(esi + 0x2100)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2100), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372D43; /* jne: not equal / not zero */

loc_00372D18: ;
    _fa = (uint32_t)(MEM32(esi + 0x400100)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x400100), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00372D27; /* je: equal / zero */

loc_00372D20: ;
    ecx = ebx;
    PUSH32(esp, 0x00372D27u); RECOMP_ABI_CALL(0x00372B60u, sub_00372B60); /* call 0x00372B60 */

loc_00372D27: ;
    _fa = (uint32_t)(MEM32(esi + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x100), 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372D3A; /* je: equal / zero */

loc_00372D33: ;
    ecx = ebx;
    PUSH32(esp, 0x00372D3Au); RECOMP_ABI_CALL(0x003725F0u, sub_003725F0); /* call 0x003725F0 */

loc_00372D3A: ;
    _fa = (uint32_t)(MEM8(esi + 0x3214)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3214), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372D10; /* je: equal / zero */

loc_00372D43: ;
    _fa = (uint32_t)(MEM8(esi + 0x3214)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3214), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372D6A; /* je: equal / zero */

loc_00372D4C: ;
    /* nop */

loc_00372D50: ;
    _fa = (uint32_t)(MEM8(esi + 0x2500)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2500), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00372D50; /* jne: not equal / not zero */

loc_00372D59: ;
    eax = MEM32(esi + 0x3220);
    eax = eax & 0xFFFFEFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x3220) = eax;

loc_00372D6A: ;
    _fa = (uint32_t)(MEM32(esi + 0x2100)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2100), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372D7E; /* jne: not equal / not zero */

loc_00372D72: ;
    MEM32(esi + 0x3250) = edi;
    MEM32(esi + 0x2500) = edi;

loc_00372D7E: ;
    ecx = MEM32(esi + 0x2100);
    eax = MEM32(esi + 0x2080);
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00372DA0
 * Original: 0x00372DA0 - 0x00372E77 (215 bytes, 57 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00372DA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    /* nop */

loc_00372DB0: ;
    esi = MEM32(edi + 0x100);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x1000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372DC9; /* je: equal / zero */

loc_00372DC0: ;
    ecx = ebx;
    PUSH32(esp, 0x00372DC7u); RECOMP_ABI_CALL(0x00372B60u, sub_00372B60); /* call 0x00372B60 */

loc_00372DC7: ;
    ebp = eax;

loc_00372DC9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFEFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xFFFFEFFFu (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372E56; /* je: equal / zero */

loc_00372DD5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x100000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372DE6; /* je: equal / zero */

loc_00372DDD: ;
    ecx = ebx;
    PUSH32(esp, 0x00372DE4u); RECOMP_ABI_CALL(0x00372700u, sub_00372700); /* call 0x00372700 */

loc_00372DE4: ;
    ebp = ebp | eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00372DE6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372E28; /* je: equal / zero */

loc_00372DEE: ;
    eax = MEM32(ebx + 0x820);
    eax = eax | MEM32(ebx + 0x824);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00372E10; /* jne: not equal / not zero */

loc_00372DFC: ;
    ecx = ebx;
    PUSH32(esp, 0x00372E03u); RECOMP_ABI_CALL(0x003725F0u, sub_003725F0); /* call 0x003725F0 */

loc_00372E03: ;
    ebp = ebp | eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00372E28;

    goto loc_00372E10;

    /* nop */

loc_00372E10: ;
    MEM32(edi + 0x600100) = 1;
    esi = MEM32(edi + 0x100);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x1000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00372E10; /* jne: not equal / not zero */

loc_00372E28: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x100 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372E39; /* je: equal / zero */

loc_00372E30: ;
    ecx = ebx;
    PUSH32(esp, 0x00372E37u); RECOMP_ABI_CALL(0x00372C10u, sub_00372C10); /* call 0x00372C10 */

loc_00372E37: ;
    ebp = ebp | eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00372E39: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372E56; /* je: equal / zero */

loc_00372E41: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM8(eax + 0x8100)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x8100), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00372E56; /* je: equal / zero */

loc_00372E4C: ;
    MEM32(eax + 0x8100) = 1;

loc_00372E56: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00372DB0; /* jne: not equal / not zero */

loc_00372E5E: ;
    ecx = MEM32(ebx + 0xB4);
    MEM32(ebx + 0xA4) = ebp;
    MEM32(edi + 0x140) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00372E77
 * Original: 0x00372E77 - 0x00372E8A (19 bytes, 6 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372E77(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372E77: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x160;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372E8A
 * Original: 0x00372E8A - 0x00372ECA (64 bytes, 22 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372E8A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372E8A: ;
    eax = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x1DC;
    PUSH32(esp, esi);
    edx = eax + 0x100;
    esi = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = eax + 0x200;

loc_00372EB1: ;
    eax = edx + ecx;
    MEM8(esi + eax) = LO8(ecx);
    MEM8(eax) = LO8(ecx);
    MEM8(edi + eax) = LO8(ecx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00372EB1; /* jb: below (unsigned <) */

loc_00372EC5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372ECA
 * Original: 0x00372ECA - 0x00372F2D (99 bytes, 31 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372ECA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372ECA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x100) = eax;
    MEM32(esi + 0x104) = eax;
    MEM32(esi + 0x110) = eax;
    MEM32(esi + 0x118) = eax;
    eax = esi + 0x160;
    ecx = MEM32(eax);
    PUSH32(esp, 8);
    edi = 0x80;
    edx = ecx + 0x37F;
    PUSH32(esp, edi);
    MEM32(esi + 0x10C) = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(eax) = edx;
    PUSH32(esp, 0x00372F12u); RECOMP_ABI_CALL(0x00377645u, sub_00377645); /* call 0x00377645 */

loc_00372F12: ;
    eax = MEM32(esi + 0x100);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00372F2D
 * Original: 0x00372F2D - 0x00372F61 (52 bytes, 20 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372F2D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372F2D: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 6));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(eax + 0xC));
    eax = edx;
    PUSH32(esp, MEM32(ecx + 0x100));
    eax = eax >> 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax >> 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00372F5Au); RECOMP_ABI_CALL(0x003777D2u, sub_003777D2); /* call 0x003777D2 */

loc_00372F5A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00372F61
 * Original: 0x00372F61 - 0x00372F8C (43 bytes, 9 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372F61(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372F61: ;
    MEM32(ecx) = 0xFD000000u;
    eax = MEM32(0xFD001804u);
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0xFD001804u) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(-44039872) = 0;
    MEM32(-50294464) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00372F8C
 * Original: 0x00372F8C - 0x00372FCD (65 bytes, 14 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372F8C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372F8C: ;
    edx = MEM32(ecx);
    eax = MEM32(edx + 0x1800);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFFC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0xA8) = eax;
    eax = MEM32(edx + 0x1808);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0xC0) = eax;
    edx = MEM32(edx + 0x10020C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0xAC) = edx;
    MEM32(ecx + 0xBC) = 0xFE502A;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00372FCD
 * Original: 0x00372FCD - 0x00373050 (131 bytes, 30 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00372FCD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00372FCD: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    MEM32(edi + 0x1830) = 0;
    MEM32(edi + 0x180C) = 0xF800;
    PUSH32(esp, 0x00372FECu); RECOMP_ABI_CALL(0x00376FB3u, sub_00376FB3); /* call 0x00376FB3 */

loc_00372FEC: ;
    MEM32(esi + 0xB4) = 1;
    MEM32(edi + 0x9200) = 0xDE86;
    MEM32(edi + 0x9210) = 0x1DCD;
    ecx = esi;
    MEM32(edi + 0x9420) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0037301Bu); RECOMP_ABI_CALL(0x0037711Au, sub_0037711A); /* call 0x0037711A */

loc_0037301B: ;
    ecx = esi;
    PUSH32(esp, 0x00373022u); RECOMP_ABI_CALL(0x00377218u, sub_00377218); /* call 0x00377218 */

loc_00373022: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0037302Bu); RECOMP_ABI_CALL(0x00372E8Au, sub_00372E8A); /* call 0x00372E8A */

loc_0037302B: ;
    ecx = esi;
    PUSH32(esp, 0x00373032u); RECOMP_ABI_CALL(0x003772E7u, sub_003772E7); /* call 0x003772E7 */

loc_00373032: ;
    ecx = esi;
    MEM32(esi + 0x134) = 2;
    PUSH32(esp, 0x00373043u); RECOMP_ABI_CALL(0x0037731Du, sub_0037731D); /* call 0x0037731D */

loc_00373043: ;
    ecx = esi;
    PUSH32(esp, 0x0037304Au); RECOMP_ABI_CALL(0x0037734Du, sub_0037734D); /* call 0x0037734D */

loc_0037304A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00373050
 * Original: 0x00373050 - 0x003730E8 (152 bytes, 42 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00373050: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    eax = esi + 0x184C;
    ecx = MEM32(eax);
    edx = ecx;
    edx = edx & 0xFFFFFCFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = edx;
    MEM32(eax) = ecx;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x200) = ebx;
    eax = MEM32(edi + 0xB4);
    MEM32(esi + 0x140) = eax;
    ecx = edi;
    PUSH32(esp, 0x00373088u); RECOMP_ABI_CALL(0x00377633u, sub_00377633); /* call 0x00377633 */

loc_00373088: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x9400) = ebp;
    MEM32(esi + 0x9410) = ebp;
    MEM32(esi + 0x400720) = ebp;
    ecx = edi;
    PUSH32(esp, 0x003730A3u); RECOMP_ABI_CALL(0x00378403u, sub_00378403); /* call 0x00378403 */

loc_003730A3: ;
    MEM32(esi + 0x400100) = ebx;
    MEM32(esi + 0x400140) = ebx;
    ecx = edi;
    PUSH32(esp, 0x003730B6u); RECOMP_ABI_CALL(0x00378382u, sub_00378382); /* call 0x00378382 */

loc_003730B6: ;
    MEM32(esi + 0x2100) = ebx;
    eax = MEM32(edi + 0x11C);
    MEM32(esi + 0x2140) = eax;
    MEM32(edi + 0x840) = ebx;
    MEM32(edi + 0x844) = ebx;
    MEM32(edi + 0x820) = ebp;
    MEM32(edi + 0x824) = ebp;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003730E8
 * Original: 0x003730E8 - 0x00373142 (90 bytes, 27 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003730E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003730E8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0037310E; /* je: equal / zero */

loc_003730F4: ;
    ecx = MEM32(ebp + 0xC);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x40000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 3;
    goto loc_0037313E;

loc_0037310E: ;
    ecx = eax;
    ecx = ecx & 0xF0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000000u (32-bit) */
    ecx = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0037312E; /* je: equal / zero */

loc_00373121: ;
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 2;
    goto loc_0037313E;

loc_0037312E: ;
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 1;

loc_0037313E: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00373142
 * Original: 0x00373142 - 0x00373211 (207 bytes, 80 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00373142(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373142: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    edx = ecx;
    edi = MEM32(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373167u); RECOMP_ABI_CALL(0x003730E8u, sub_003730E8); /* call 0x003730E8 */

loc_00373167: ;
    ebx = MEM32(ebp + -8);
    ecx = edx + 0x160;
    edx = MEM32(ecx);
    esi = edx + 1;
    MEM32(ecx) = esi;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 2);
    eax = ebx;
    POP32(esp, esi);
    eax = eax | 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00373190; /* je: equal / zero */

loc_00373186: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0037318D; /* je: equal / zero */

loc_00373189: ;
    PUSH32(esp, 0x3D);
    goto loc_0037318F;

loc_0037318D: ;
    PUSH32(esp, 3);

loc_0037318F: ;
    POP32(esp, esi);

loc_00373190: ;
    ebx = ebx << 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | 0x3000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi | ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003731BB; /* je: equal / zero */

loc_003731A1: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003731AF; /* jne: not equal / not zero */

loc_003731A7: ;
    esi = esi | 0x30000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_003731BB;

loc_003731AF: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003731BB; /* jne: not equal / not zero */

loc_003731B5: ;
    esi = esi | 0x20000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003731BB: ;
    ecx = edx;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x700008) = eax;
    MEM32(ecx + 0x70000C) = eax;
    esi = esi | 0x8000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = edx + 0x70000;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + edi) = esi;
    eax = MEM32(ebp + 0x14);
    MEM32(ecx + 0x700004) = eax;
    ecx = MEM32(ebp + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebp + 8);
    MEM16(ecx + 6) = MEM16(ecx + 6) & 0;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 0xC);
    POP32(esp, edi);
    MEM32(ecx + 8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(ecx + 0xC) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00373211
 * Original: 0x00373211 - 0x003732A1 (144 bytes, 59 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00373211(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373211: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x57) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x57 (32-bit) */
    PUSH32(esp, edi);
    ebx = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_0037323B; /* jbe: below or equal (unsigned <=) */

loc_00373221: ;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x62) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x62;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0037323B; /* je: equal / zero */

loc_00373229: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0037323B; /* je: equal / zero */

loc_0037322E: ;
    _fb = (uint32_t)(0x25) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x25;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0037323B; /* jne: not equal / not zero */

loc_00373233: ;
    eax = 0x330;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0037323E;

loc_0037323B: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_0037323E: ;
    ecx = ebx + 0x160;
    esi = MEM32(ecx);
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00373265; /* je: equal / zero */

loc_00373251: ;
    eax = MEM32(ebx + 0x100);
    ecx = ebx;
    MEM32(ebx + eax * 4 + 0x144) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373265u); RECOMP_ABI_CALL(0x00377880u, sub_00377880); /* call 0x00377880 */

loc_00373265: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373270u); RECOMP_ABI_CALL(0x0037780Bu, sub_0037780B); /* call 0x0037780B */

loc_00373270: ;
    ecx = MEM32(ebp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = esi;
    MEM16(ecx + 6) = 1;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00373297u); RECOMP_ABI_CALL(0x00372F2Du, sub_00372F2D); /* call 0x00372F2D */

loc_00373297: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003732A1
 * Original: 0x003732A1 - 0x0037330C (107 bytes, 31 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003732A1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003732A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);

loc_003732A7: ;
    _fa = (uint32_t)(MEM8(esi + 0x3214)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3214), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003732C2; /* je: equal / zero */

loc_003732B0: ;
    _fa = (uint32_t)(MEM8(esi + 0x2400)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2400), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003732C2; /* je: equal / zero */

loc_003732B9: ;
    _fa = (uint32_t)(MEM8(esi + 0x3220)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3220), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003732EE; /* je: equal / zero */

loc_003732C2: ;
    ecx = edi;
    PUSH32(esp, 0x003732C9u); RECOMP_ABI_CALL(0x00372C10u, sub_00372C10); /* call 0x00372C10 */

loc_003732C9: ;
    _fa = (uint32_t)(MEM32(esi + 0x400100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x400100), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003732D9; /* je: equal / zero */

loc_003732D2: ;
    ecx = edi;
    PUSH32(esp, 0x003732D9u); RECOMP_ABI_CALL(0x00372B60u, sub_00372B60); /* call 0x00372B60 */

loc_003732D9: ;
    _fa = (uint32_t)(MEM32(esi + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x100), 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003732A7; /* je: equal / zero */

loc_003732E5: ;
    ecx = edi;
    PUSH32(esp, 0x003732ECu); RECOMP_ABI_CALL(0x003725F0u, sub_003725F0); /* call 0x003725F0 */

loc_003732EC: ;
    goto loc_003732A7;

loc_003732EE: ;
    edx = MEM32(esp + 0xC);
    eax = esi + 0x3220;
    ecx = MEM32(eax);
    POP32(esp, edi);
    MEM32(edx) = ecx;
    MEM32(eax) = 0;
    POP32(esp, esi);

loc_00373304: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00373304; /* jne: not equal / not zero */

loc_00373309: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037330C
 * Original: 0x0037330C - 0x00373321 (21 bytes, 7 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037330C(void)
{

loc_0037330C: ;
    eax = MEM32(ecx);
    ecx = eax + 0x9410;
    edx = MEM32(ecx);
    eax = MEM32(eax + 0x9400);
    ecx = MEM32(ecx);
    edx = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00373321
 * Original: 0x00373321 - 0x0037333F (30 bytes, 10 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00373321(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00373321: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    MEM32(esi + 0x9140) = edx;
    MEM32(ecx + 0x818) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0037333F
 * Original: 0x0037333F - 0x0037340D (206 bytes, 67 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0037333F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0037333F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0037335F; /* je: equal / zero */

loc_0037334E: ;
    _fa = (uint32_t)(MEM32(ecx + 0x844)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x844), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00373357; /* jne: not equal / not zero */

loc_00373356: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00373357: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    goto loc_00373384;

loc_0037335F: ;
    eax = ecx + 0x844;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0037336C; /* je: equal / zero */

loc_00373369: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0037336C: ;
    MEM32(eax) = esi;
    edx = edi + 0x9410;
    eax = MEM32(edx);
    eax = MEM32(edi + 0x9400);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + 8))) >> 32) & 1);
    eax = eax + MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edx);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(ebp + 0xC)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */

loc_00373384: ;
    MEM32(ecx + esi * 8 + 0x830) = eax;
    MEM32(ecx + esi * 8 + 0x834) = edx;
    ebx = MEM32(ecx + 0x834);
    esi = MEM32(ecx + 0x83C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(ecx + 0x830);
    eax = MEM32(ecx + 0x838);
    if (CMP_B(_fa, _fb)) goto loc_003733B8; /* jb: below (unsigned <) */

loc_003733AE: ;
    if (CMP_A(_fa, _fb)) goto loc_003733B4; /* ja: above (unsigned >) */

loc_003733B0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003733B8; /* jb: below (unsigned <) */

loc_003733B4: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_003733C8; /* jne: not equal / not zero */

loc_003733B8: ;
    _cf = 0; /* logical op clears CF */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_003733C8; /* je: equal / zero */

loc_003733BC: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ecx + 0x840) = MEM32(ecx + 0x840) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x840)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003733D1;

loc_003733C8: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x840) = edx;

loc_003733D1: ;
    esi = MEM32(ecx + 0x840);
    eax = MEM32(ecx + esi * 8 + 0x830);
    esi = MEM32(ecx + esi * 8 + 0x834);
    ebx = eax;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00373406; /* je: equal / zero */

loc_003733EB: ;
    MEM32(edi + 0x9420) = eax;
    eax = ecx + 0x818;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00373406; /* jne: not equal / not zero */

loc_003733FC: ;
    ecx = MEM32(ecx);
    MEM32(ecx + 0x9140) = edx;
    MEM32(eax) = edx;

loc_00373406: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0037340D
 * Original: 0x0037340D - 0x00373454 (71 bytes, 24 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0037340D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0037340D: ;
    edx = MEM32(0x418198);
    _fa = (uint32_t)(MEM8(edx + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 1), 2 (8-bit) */
    eax = MEM32(ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_00373453; /* jne: not equal / not zero */

loc_0037341B: ;
    ecx = ZX8(MEM8(ecx + 0xA));
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00373439; /* je: equal / zero */

loc_00373424: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00373432; /* je: equal / zero */

loc_00373427: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00373453; /* jne: not equal / not zero */

loc_0037342B: ;
    ecx = 0x108E48;
    goto loc_0037343E;

loc_00373432: ;
    ecx = 0xE2194;
    goto loc_0037343E;

loc_00373439: ;
    ecx = 0xDAEBC;

loc_0037343E: ;
    MEM32(eax + 0x680680) = ecx;
    ecx = eax + 0x6806A0;
    eax = MEM32(ecx);
    eax = ~eax;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = eax;

loc_00373453: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00373454
 * Original: 0x00373454 - 0x003735B6 (354 bytes, 115 insns)
 * Folder: xdk/d3d8 (section: D3D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00373454(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00373454: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x372DA0);
    eax = esi + 0x84;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x4180C4); PUSH32(esp, 0x00373471u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037346Bu); } /* indirect call */
    }

loc_00373471: ;
    eax = esi + 0x1AC;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x1B0) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x19C;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    MEM8(esi + 0x1A4) = 0;
    MEM8(esi + 0x1A6) = 4;
    MEM32(esi + 0x1A8) = ebx;
    MEM8(esi + 0x194) = 0;
    MEM8(esi + 0x196) = 4;
    MEM32(esi + 0x198) = ebx;
    MEM32(esi + 0x1A0) = eax;
    MEM32(eax) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003734BFu); RECOMP_ABI_CALL(0x00372F61u, sub_00372F61); /* call 0x00372F61 */

loc_003734BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003734CA; /* jne: not equal / not zero */

loc_003734C3: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003735B2;

loc_003734CA: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003734D1u); RECOMP_ABI_CALL(0x00372F8Cu, sub_00372F8C); /* call 0x00372F8C */

loc_003734D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003734C3; /* je: equal / zero */

loc_003734D5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(0x4181E8); PUSH32(esp, 0x003734E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003734DCu); } /* indirect call */
    }

loc_003734E2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -16));
    edi = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3723F0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x4181F4); PUSH32(esp, 0x003734F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003734F3u); } /* indirect call */
    }

loc_003734F9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x4181F0); PUSH32(esp, 0x00373500u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003734FAu); } /* indirect call */
    }

loc_00373500: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0037350B; /* jne: not equal / not zero */

loc_00373504: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003735B1;

loc_0037350B: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x168) = MEM32(esi + 0x168) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x168)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi + 0x164;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(eax) = 0x372830;
    { uint32_t _icall_target = MEM32(0x4181DC); PUSH32(esp, 0x00373526u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00373520u); } /* indirect call */
    }

loc_00373526: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0037352Du); RECOMP_ABI_CALL(0x00372FCDu, sub_00372FCD); /* call 0x00372FCD */

loc_0037352D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00373504; /* je: equal / zero */

loc_00373531: ;
    eax = esi + 0x2DC;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -12) = 2;
    edx = 0x100;

loc_00373546: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00373548: ;
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0xFFFFFF00u;
    MEM8(edi + ecx) = LO8(eax);
    edi = 0x100;
    MEM8(ecx) = LO8(eax);
    MEM8(edi + ecx) = LO8(eax);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00373548; /* jb: below (unsigned <) */

loc_00373564: ;
    _fb = (uint32_t)(0x300) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -4)) + (uint64_t)(0x300)) >> 32) & 1);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x300;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00373546; /* jne: not equal / not zero */

loc_00373570: ;
    edi = MEM32(0x418230);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    SET_LO16(edx, 0x80C0);
    SET_LO8(eax, LO8(ebx));
    PUSH32(esp, 4);
    RECOMP_UNIMPL("out dx, al", 0x00373580u); /* TODO: out dx, al */
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0037358Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037358Au); } /* indirect call */
    }

loc_0037358C: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -5) = MEM8(ebp + -5) | 0x1F;
    _fa = (uint32_t)(MEM8(ebp + -5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0037359Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0037359Cu); } /* indirect call */
    }

loc_0037359E: ;
    ecx = esi;
    MEM32(esi + 0xA0) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003735ABu); RECOMP_ABI_CALL(0x00373050u, sub_00373050); /* call 0x00373050 */

loc_003735AB: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003735B1: ;
    POP32(esp, edi);

loc_003735B2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}
