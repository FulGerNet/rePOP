/**
 * PoP SoT xbox-retail - collision, chunk 0
 * Collision (Jade ENGine COLlision)
 * Functions: 14 (0x0003D040 - 0x0003E8D0)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_0003D040
 * Original: 0x0003D040 - 0x0003D078 (56 bytes, 13 insns)
 * Folder: collision (match: xbox-demo 0x000571E0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003D040(void)
{

loc_0003D040: ;
    MEM32(0x451B78) = eax;
    edx = MEM32(eax + 0x18);
    edx = MEM32(edx);
    edx = MEM32(edx + 4);
    edx = MEM32(edx + 0x20);
    MEM32(0x451B88) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(0x451B8C) = eax;
    MEM32(0x451BE0) = ecx;
    ecx = MEM32(ecx + 0xC);
    MEM32(0x451C00) = ecx;
    MEM32(0x451C7C) = 0x645078;
    esp += 4; return; /* ret */

}

/**
 * sub_0003D07A
 * Original: 0x0003D07A - 0x0003D080 (6 bytes, 6 insns)
 * Folder: collision (between: 0x0003D040 and 0x0003D080)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003D07A(void)
{

loc_0003D07A: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0003D080
 * Original: 0x0003D080 - 0x0003D11C (156 bytes, 61 insns)
 * Folder: collision (match: xbox-demo 0x00057220, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003D080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003D080: ;
    edx = MEM32(ebx + 0x110);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x11C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_0003D0CE; /* ja: above (unsigned >) */

loc_0003D096: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D0C7; /* je: equal / zero */

loc_0003D09D: ;
    ecx = eax;
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D0C7; /* je: equal / zero */

loc_0003D0A7: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003D0C7; /* je: equal / zero */

loc_0003D0AE: ;
    esi = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 4);
    edi = MEM32(eax + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D0C7; /* je: equal / zero */

loc_0003D0C0: ;
    ecx = 0x14;
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

loc_0003D0C7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0003D096; /* jbe: below or equal (unsigned <=) */

loc_0003D0CE: ;
    ebp = MEM32(ebx + 0x12C);
    edx = MEM32(ebx + 0x138);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003D118; /* ja: above (unsigned >) */

loc_0003D0E1: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D111; /* je: equal / zero */

loc_0003D0E7: ;
    ecx = eax;
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D111; /* je: equal / zero */

loc_0003D0F1: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003D111; /* je: equal / zero */

loc_0003D0F8: ;
    esi = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 4);
    edi = MEM32(eax + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D111; /* je: equal / zero */

loc_0003D10A: ;
    ecx = 0x14;
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

loc_0003D111: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0003D0E1; /* jbe: below or equal (unsigned <=) */

loc_0003D118: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0003D120
 * Original: 0x0003D120 - 0x0003D24C (300 bytes, 89 insns)
 * Folder: collision (match: xbox-demo 0x000572C0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003D120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0003D120: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003D249; /* ja: above (unsigned >) */

loc_0003D133: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    goto loc_0003D140;

    /* nop */

loc_0003D140: ;
    edx = MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D23D; /* je: equal / zero */

loc_0003D14A: ;
    eax = edx;
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D23D; /* je: equal / zero */

loc_0003D156: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003D23D; /* je: equal / zero */

loc_0003D161: ;
    esi = MEM32(edx + 0x10);
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D23D; /* je: equal / zero */

loc_0003D170: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D23D; /* je: equal / zero */

loc_0003D179: ;
    ecx = MEM32(edx + 0x18);
    eax = MEM32(ecx);
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(edx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x34); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x38); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    ecx = MEM32(eax + 0x18);
    MEM32(esi) = ecx;
    ecx = MEM32(eax + 0x1C);
    MEM32(esi + 4) = ecx;
    ecx = MEM32(eax + 0x20);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(edx + 0x10);
    edx = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x14) = ecx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003D1E9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0003D1DB: ;
    xmm4 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi) = xmm4.f[0]; /* movss */
    goto loc_0003D1F7;

loc_0003D1E9: ;
    xmm4 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 0xC) = xmm4.f[0]; /* movss */

loc_0003D1F7: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003D20C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0003D1FC: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    goto loc_0003D21A;

loc_0003D20C: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */

loc_0003D21A: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003D22F; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_0003D21F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    goto loc_0003D23D;

loc_0003D22F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */

loc_0003D23D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0003D140; /* jbe: below or equal (unsigned <=) */

loc_0003D248: ;
    POP32(esp, esi);

loc_0003D249: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0003D250
 * Original: 0x0003D250 - 0x0003D8B2 (1634 bytes, 452 insns)
 * Folder: collision (between: 0x0003D120 and 0x0003E320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003D250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003D250: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    edx = MEM32(edi + 0x10);
    eax = MEM32(edx + 0x14);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D332; /* je: equal / zero */

loc_0003D26B: ;
    ecx = MEM32(edi + 0x18);
    eax = MEM32(ecx);
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(edi + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x34); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x38); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x1C);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 0x20);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(edi + 0x10);
    esi = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEM32(eax + 0xC) = esi;
    esi = MEM32(ecx + 4);
    MEM32(eax + 0x10) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x14) = ecx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003D2DE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0003D2D0: ;
    xmm4 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(edx) = xmm4.f[0]; /* movss */
    goto loc_0003D2EC;

loc_0003D2DE: ;
    xmm4 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 0xC) = xmm4.f[0]; /* movss */

loc_0003D2EC: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003D301; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0003D2F1: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    goto loc_0003D30F;

loc_0003D301: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */

loc_0003D30F: ;
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003D324; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_0003D314: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    goto loc_0003D332;

loc_0003D324: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */

loc_0003D332: ;
    edx = MEM32(0x451B70);
    ecx = 1;
    MEM32(0x451D50) = edx;
    MEM32(0x451D54) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(eax) (8-bit) */
    MEM32(0x451B60) = 0;
    MEM8(0x7585CC) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0003D8AA; /* je: equal / zero */

loc_0003D365: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003D8AA; /* jne: not equal / not zero */

loc_0003D370: ;
    eax = MEM32(0x44AA20);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(eax + 0x2C);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x7585C8) = ecx;
    PUSH32(esp, 0x0003D38Au); RECOMP_ABI_CALL(0x0002C710u, sub_0002C710); /* call 0x0002C710 */

loc_0003D38A: ;
    SET_LO8(eax, MEM8(edi + 4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003D8AA; /* je: equal / zero */

loc_0003D398: ;
    ecx = MEM32(edi + 0x18);
    ebp = MEM32(ecx);
    esi = MEM32(ebp + 4);
    SET_LO8(eax, MEM8(esi + 4));
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x17) = LO8(eax);
    if (CMP_BE(_fa, _fb)) goto loc_0003D8AA; /* jbe: below or equal (unsigned <=) */

loc_0003D3B1: ;
    ecx = MEM32(esi + 8);
    edx = ZX8(LO8(ebx));
    ecx = MEM32(ecx + edx * 4);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003D3CE; /* je: equal / zero */

loc_0003D3BF: ;
    SET_LO8(edx, LO8(ebx));
    PUSH32(esp, 0x0003D3C6u); RECOMP_ABI_CALL(0x00040730u, sub_00040730); /* call 0x00040730 */

loc_0003D3C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003D3DC; /* jne: not equal / not zero */

loc_0003D3CA: ;
    SET_LO8(eax, MEM8(esp + 0x17));

loc_0003D3CE: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(eax) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003D3B1; /* jb: below (unsigned <) */

loc_0003D3D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0003D3DC: ;
    edx = MEM32(ebp);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D8AA; /* je: equal / zero */

loc_0003D3EA: ;
    eax = MEM32(ebp + 4);
    MEM16(eax + 0x16) = 0;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D408; /* je: equal / zero */

loc_0003D3FA: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D408; /* je: equal / zero */

loc_0003D401: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    goto loc_0003D410;

loc_0003D408: ;
    xmm0 = XMM_SCALAR(MEMF(0x429360)); /* movss */

loc_0003D410: ;
    MEMF(0x451C6C) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003D523; /* je: equal / zero */

loc_0003D421: ;
    edx = MEM32(edi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D42D; /* je: equal / zero */

loc_0003D428: ;
    eax = MEM32(edx + 4);
    goto loc_0003D42F;

loc_0003D42D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003D42F: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_0003D523; /* jns: not sign (positive) */

loc_0003D438: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D441; /* je: equal / zero */

loc_0003D43C: ;
    eax = MEM32(edx + 4);
    goto loc_0003D443;

loc_0003D441: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003D443: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_0003D523; /* jns: not sign (positive) */

loc_0003D44C: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = MEM32(ebp + 4);
    ecx = MEM32(ecx + 0x20);
    edx = MEM32(edx + 4);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(edi + 0xC);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx), 0x400000 (32-bit) */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_0003D4FF; /* je: equal / zero */

loc_0003D4A9: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0003D4FF; /* jbe: below or equal (unsigned <=) */

loc_0003D4BB: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0003D4FF; /* jbe: below or equal (unsigned <=) */

loc_0003D4CD: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0003D4FF; /* jbe: below or equal (unsigned <=) */

loc_0003D4DF: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0003D4FF; /* jbe: below or equal (unsigned <=) */

loc_0003D4F1: ;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 4);
    MEM8(eax + 0x17) = MEM8(eax + 0x17) | 0x80;
    _fa = (uint32_t)(MEM8(eax + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_0003D50B;

loc_0003D4FF: ;
    edx = MEM32(edi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax + 4);
    MEM8(eax + 0x17) = MEM8(eax + 0x17) & 0x7F;
    _fa = (uint32_t)(MEM8(eax + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0003D50B: ;
    ecx = MEM32(edi + 0x14);
    eax = MEM32(ecx + 4);
    MEM32(eax) = MEM32(eax) & 0xFF7FFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(edi + 0x14);
    eax = MEM32(edx + 4);
    MEM32(eax) = MEM32(eax) & 0xFFBFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0003D523: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003D532; /* je: equal / zero */

loc_0003D52B: ;
    edx = edi;
    PUSH32(esp, 0x0003D532u); RECOMP_ABI_CALL(0x00034D30u, sub_00034D30); /* call 0x00034D30 */

loc_0003D532: ;
    eax = MEM32(ebp);
    esi = MEM32(eax);
    eax = MEM32(eax + 4);
    ebx = esi + eax * 4 + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003D57B; /* ja: above (unsigned >) */

loc_0003D542: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003D574; /* je: equal / zero */

loc_0003D54B: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003D574; /* je: equal / zero */

loc_0003D551: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003D563; /* je: equal / zero */

loc_0003D558: ;
    edx = MEM32(ecx + 0x14);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D574; /* je: equal / zero */

loc_0003D563: ;
    eax = edi;
    PUSH32(esp, 0x0003D56Au); RECOMP_ABI_CALL(0x0003D040u, sub_0003D040); /* call 0x0003D040 */

loc_0003D56A: ;
    eax = 0x451B70;
    PUSH32(esp, 0x0003D574u); RECOMP_ABI_CALL(0x00081F60u, sub_00081F60); /* call 0x00081F60 */

loc_0003D574: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0003D542; /* jbe: below or equal (unsigned <=) */

loc_0003D57B: ;
    eax = 0x451B70;
    PUSH32(esp, 0x0003D585u); RECOMP_ABI_CALL(0x00070EF0u, sub_00070EF0); /* call 0x00070EF0 */

loc_0003D585: ;
    SET_LO8(eax, MEM8(0x451D4C));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D8A1; /* je: equal / zero */

loc_0003D594: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0003D6D6; /* jge: greater or equal (signed >=) */

loc_0003D59D: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    MEM32(esp + 0x18) = ecx;
    MEM8(0x7585CC) = LO8(ecx);
    ecx = MEM32(0x451B70);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(0x451D50) = ecx;
    ecx = ZX8(LO8(eax));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x451B60) = edx;
    MEM32(esp + 0x1C) = ecx;
    MEM8(0x451D4C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0003D6B8; /* jle: less or equal (signed <=) */

loc_0003D5DA: ;
    /* nop */

loc_0003D5E0: ;
    esi = MEM32(ebx * 4 + 0x451C84);
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax + 4);
    MEM8(eax + 0x16) = MEM8(eax + 0x16) & 0xFB;
    _fa = (uint32_t)(MEM8(eax + 0x16)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax + 4);
    MEM16(eax + 0x16) = MEM16(eax + 0x16) & 0xFC0F;
    _fa = (uint32_t)(MEM16(eax + 0x16)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D616; /* je: equal / zero */

loc_0003D608: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D616; /* je: equal / zero */

loc_0003D60F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    goto loc_0003D61E;

loc_0003D616: ;
    xmm0 = XMM_SCALAR(MEMF(0x429360)); /* movss */

loc_0003D61E: ;
    MEMF(0x451C6C) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax);
    edi = MEM32(eax);
    edx = MEM32(eax + 4);
    ebp = edi + edx * 4 + -4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003D6AF; /* ja: above (unsigned >) */

loc_0003D63A: ;
    /* nop */

loc_0003D640: ;
    eax = MEM32(edi);
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003D6A4; /* je: equal / zero */

loc_0003D649: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003D6A4; /* je: equal / zero */

loc_0003D64F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003D662; /* je: equal / zero */

loc_0003D657: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D6A4; /* je: equal / zero */

loc_0003D662: ;
    MEM32(0x451B78) = esi;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx + 0x20);
    MEM32(0x451B88) = edx;
    ecx = MEM32(esi + 0xC);
    MEM32(0x451BE0) = eax;
    MEM32(0x451B8C) = ecx;
    edx = MEM32(eax + 0xC);
    eax = 0x451B70;
    MEM32(0x451C00) = edx;
    MEM32(0x451C7C) = 0x645078;
    PUSH32(esp, 0x0003D6A4u); RECOMP_ABI_CALL(0x00081F60u, sub_00081F60); /* call 0x00081F60 */

loc_0003D6A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0003D640; /* jbe: below or equal (unsigned <=) */

loc_0003D6AB: ;
    ecx = MEM32(esp + 0x1C);

loc_0003D6AF: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003D5E0; /* jl: less (signed <) */

loc_0003D6B8: ;
    eax = 0x451B70;
    PUSH32(esp, 0x0003D6C2u); RECOMP_ABI_CALL(0x00070EF0u, sub_00070EF0); /* call 0x00070EF0 */

loc_0003D6C2: ;
    SET_LO8(eax, MEM8(0x451D4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esp + 0x18);
    if (CMP_NE(_fa, _fb)) goto loc_0003D594; /* jne: not equal / not zero */

loc_0003D6D3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */

loc_0003D6D6: ;
    if (CMP_NE(_fa, _fb)) goto loc_0003D8A1; /* jne: not equal / not zero */

loc_0003D6DC: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0003D8A1; /* jbe: below or equal (unsigned <=) */

loc_0003D6E6: ;
    goto loc_0003D6F0;

    /* nop */
    /* nop */

loc_0003D6F0: ;
    ecx = MEM32(edx * 4 + 0x451C84);
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0x20);
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x30); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x34); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x38); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx * 4 + 0x451C84);
    eax = MEM32(eax + 0xC);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    eax = MEM32(edx * 4 + 0x451C84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D87A; /* je: equal / zero */

loc_0003D76C: ;
    ebx = MEM32(eax);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003D87A; /* je: equal / zero */

loc_0003D777: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D87A; /* je: equal / zero */

loc_0003D782: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D87A; /* je: equal / zero */

loc_0003D78B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003D7D3; /* je: equal / zero */

loc_0003D793: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x10000 (32-bit) */
    ecx = MEM32(eax + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_0003D7A6; /* je: equal / zero */

loc_0003D79E: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xA0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003D7A9;

loc_0003D7A6: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003D7A9: ;
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx + 0x30) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx + 0x34) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 0x38) = xmm3.f[0]; /* movss */

loc_0003D7D3: ;
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D87A; /* je: equal / zero */

loc_0003D7E0: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 1), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003D87A; /* je: equal / zero */

loc_0003D7EA: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D87A; /* je: equal / zero */

loc_0003D7F5: ;
    SET_LO8(ebx, MEM8(eax + 0x63));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_0003D87A; /* js: sign (negative) */

loc_0003D7FC: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    eax = MEM32(ecx + 0x18);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    eax = MEM32(ecx + 0x18);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x44); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x48); /* addss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */

loc_0003D87A: ;
    eax = MEM32(edx * 4 + 0x451C84);
    ecx = MEM32(eax + 0x18);
    eax = MEM32(ecx);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D891; /* je: equal / zero */

loc_0003D88D: ;
    MEM8(eax + 0x16) = MEM8(eax + 0x16) | 2;
    _fa = (uint32_t)(MEM8(eax + 0x16)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0003D891: ;
    ecx = ZX8(MEM8(0x451D4C));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003D6F0; /* jl: less (signed <) */

loc_0003D8A1: ;
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, 0x0003D8AAu); RECOMP_ABI_CALL(0x0003D080u, sub_0003D080); /* call 0x0003D080 */

loc_0003D8AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0003D8C0
 * Original: 0x0003D8C0 - 0x0003DF3C (1660 bytes, 466 insns)
 * Folder: collision (between: 0x0003D120 and 0x0003E320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003D8C0(void)
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

loc_0003D8C0: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x54));
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x451B74) = eax;
    MEM32(0x451B70) = edx;
    MEM8(0x451D4C) = LO8(edx);
    MEM32(0x451D50) = edx;
    MEM32(0x451D54) = edx;
    ecx = MEM32(eax + 0x11C);
    PUSH32(esp, ebx);
    MEM32(eax + 0x270) = edx;
    eax = MEM32(eax + 0x110);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(8));
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x24) = eax;
    if (CMP_A(_fa, _fb)) goto loc_0003DF34; /* ja: above (unsigned >) */

loc_0003D90B: ;
    goto loc_0003D913;

loc_0003D90D: ;
    ecx = MEM32(esp + 0x1C);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003D913: ;
    ebp = MEM32(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0003DF1D; /* je: equal / zero */

loc_0003D91D: ;
    eax = ebp;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0003DF1D; /* je: equal / zero */

loc_0003D929: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x40000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x20) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0003DF1D; /* je: equal / zero */

loc_0003D93B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0003DF1D; /* je: equal / zero */

loc_0003D943: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0003DF1D; /* jne: not equal / not zero */

loc_0003D94E: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0003D966; /* je: equal / zero */

loc_0003D954: ;
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx), 0x20000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0003DF1D; /* jne: not equal / not zero */

loc_0003D966: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0003DF1D; /* je: equal / zero */

loc_0003D96E: ;
    eax = MEM32(ebp + 0x18);
    eax = MEM32(eax);
    esi = MEM32(eax + 4);
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(esi + 4));
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esp + 0x17) = LO8(eax);
    if (CMP_BE(_fa, _fb)) goto loc_0003DF1D; /* jbe: below or equal (unsigned <=) */

loc_0003D98B: ;
    edi = MEM32(esi + 8);
    edi = edi;

loc_0003D990: ;
    ecx = ZX8(LO8(ebx));
    edx = MEM32(edi + ecx * 4);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0003D9AA; /* je: equal / zero */

loc_0003D99B: ;
    SET_LO8(edx, LO8(ebx));
    PUSH32(esp, 0x0003D9A2u); RECOMP_ABI_CALL(0x00040730u, sub_00040730); /* call 0x00040730 */

loc_0003D9A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0003D9B5; /* jne: not equal / not zero */

loc_0003D9A6: ;
    SET_LO8(eax, MEM8(esp + 0x17));

loc_0003D9AA: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0003D990; /* jb: below (unsigned <) */

loc_0003D9B0: ;
    goto loc_0003DF1D;

loc_0003D9B5: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_0003D9E9; /* js: sign (negative) */

loc_0003D9BD: ;
    ecx = MEM32(0x44AA20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0003D9E9; /* je: equal / zero */

loc_0003D9C7: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 4) = eax;
    esi = ecx;
    edi = MEM32(esi + 0x2C);
    eax = ebp;
    PUSH32(esp, 0x0003D9DBu); RECOMP_ABI_CALL(0x0002C900u, sub_0002C900); /* call 0x0002C900 */

loc_0003D9DB: ;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0003D9E6u); RECOMP_ABI_CALL(0x0002C710u, sub_0002C710); /* call 0x0002C710 */

loc_0003D9E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003D9E9: ;
    ebx = MEM32(esp + 0x18);
    ecx = MEM32(ebx);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DF1D; /* je: equal / zero */

loc_0003D9FA: ;
    edx = MEM32(ebp + 0x18);
    eax = MEM32(edx);
    ecx = MEM32(eax + 4);
    MEM16(ecx + 0x16) = 0;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0003DA22; /* je: equal / zero */

loc_0003DA14: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DA22; /* je: equal / zero */

loc_0003DA1B: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    goto loc_0003DA2A;

loc_0003DA22: ;
    xmm0 = XMM_SCALAR(MEMF(0x429360)); /* movss */

loc_0003DA2A: ;
    MEMF(0x451C6C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0003DA4D; /* je: equal / zero */

loc_0003DA3C: ;
    edx = MEM32(ebp + 0x14);
    eax = MEM32(edx + 4);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0003DDC2;

loc_0003DA4D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0003DAA4; /* je: equal / zero */

loc_0003DA51: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DA5D; /* je: equal / zero */

loc_0003DA58: ;
    ecx = MEM32(eax + 4);
    goto loc_0003DA5F;

loc_0003DA5D: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003DA5F: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), 0x10000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0003DA72; /* je: equal / zero */

loc_0003DA67: ;
    eax = MEM32(eax + 4);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003DA72: ;
    ecx = MEM32(ebx);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    esi = eax + ecx * 4 + -4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0003DA9C; /* ja: above (unsigned >) */

loc_0003DA81: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0003DA95; /* je: equal / zero */

loc_0003DA8A: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 4), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0003DA95; /* je: equal / zero */

loc_0003DA90: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0003DA3C; /* jne: not equal / not zero */

loc_0003DA95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0003DA81; /* jbe: below or equal (unsigned <=) */

loc_0003DA9C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DDC2; /* je: equal / zero */

loc_0003DAA4: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0003DD52; /* je: equal / zero */

loc_0003DAAE: ;
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DABA; /* je: equal / zero */

loc_0003DAB5: ;
    eax = MEM32(ecx + 4);
    goto loc_0003DABC;

loc_0003DABA: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003DABC: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_0003DD52; /* jns: not sign (positive) */

loc_0003DAC5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DACE; /* je: equal / zero */

loc_0003DAC9: ;
    eax = MEM32(ecx + 4);
    goto loc_0003DAD0;

loc_0003DACE: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003DAD0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    edx = MEM32(ecx + 4);
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = MEM32(ebx + 4);
    ecx = MEM32(ecx + 0x20);
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x38); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ecx = MEM32(edx);
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x34); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x800000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_0003DDC2; /* jne: not equal / not zero */

loc_0003DB43: ;
    fp_push(MEMF(edx + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0003DBAC; /* jbe: below or equal (unsigned <=) */

loc_0003DB54: ;
    fp_push(MEMF(edx + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0003DBAC; /* jbe: below or equal (unsigned <=) */

loc_0003DB65: ;
    fp_push(MEMF(edx + 0x1C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0003DBAC; /* jbe: below or equal (unsigned <=) */

loc_0003DB76: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429428)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0003DBAC; /* jbe: below or equal (unsigned <=) */

loc_0003DB88: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429428)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0003DBAC; /* jbe: below or equal (unsigned <=) */

loc_0003DB9A: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429428)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_0003DBE4; /* ja: above (unsigned >) */

loc_0003DBAC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x400000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0003DDC2; /* je: equal / zero */

loc_0003DBB8: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429428)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0003DDC2; /* jbe: below or equal (unsigned <=) */

loc_0003DBCE: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429428)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0003DDC2; /* jbe: below or equal (unsigned <=) */

loc_0003DBE4: ;
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DC16; /* je: equal / zero */

loc_0003DC11: ;
    eax = MEM32(eax + 4);
    goto loc_0003DC18;

loc_0003DC16: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003DC18: ;
    xmm3 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm3.f[0] = xmm3.f[0] / MEMF(eax + 0x20); /* divss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x64506C); /* mulss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x645070); /* mulss */
    MEMF(eax + 0xC) = xmm4.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x645074); /* mulss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp), 0x4000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0003DCA6; /* je: equal / zero */

loc_0003DC5B: ;
    ecx = ebp;
    PUSH32(esp, 0x0003DC62u); RECOMP_ABI_CALL(0x0001CCE0u, sub_0001CCE0); /* call 0x0001CCE0 */

loc_0003DC62: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x30); /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */

loc_0003DCA6: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0003DF1D; /* je: equal / zero */

loc_0003DCB0: ;
    edx = MEM32(ebp + 0x14);
    ecx = MEM32(edx);
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 1), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0003DF1D; /* je: equal / zero */

loc_0003DCBF: ;
    eax = MEM32(ecx + 0x1C);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 0x40) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    eax = MEM32(ecx + 0x18);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1C)) >> 32) & 1);
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    eax = MEM32(ecx + 0x18);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    goto loc_0003DF1D;

loc_0003DD52: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DDC2; /* je: equal / zero */

loc_0003DD59: ;
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DDC2; /* je: equal / zero */

loc_0003DD60: ;
    eax = MEM32(ebp + 0xC);
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x30)); /* fsub dword ptr [eax + 0x30] */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x34); /* subss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429428)); /* fld float */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0003DDC2; /* jbe: below or equal (unsigned <=) */

loc_0003DD9A: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429428)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0003DDC2; /* jbe: below or equal (unsigned <=) */

loc_0003DDAC: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429428)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_0003DF1D; /* ja: above (unsigned >) */

loc_0003DDC2: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0003DEC5; /* je: equal / zero */

loc_0003DDCC: ;
    edx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DDD8; /* je: equal / zero */

loc_0003DDD3: ;
    eax = MEM32(edx + 4);
    goto loc_0003DDDA;

loc_0003DDD8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003DDDA: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_0003DEC5; /* jns: not sign (positive) */

loc_0003DDE3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DDEC; /* je: equal / zero */

loc_0003DDE7: ;
    eax = MEM32(edx + 4);
    goto loc_0003DDEE;

loc_0003DDEC: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003DDEE: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = MEM32(ebx + 4);
    ecx = MEM32(ecx + 0x20);
    edx = MEM32(edx + 4);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx), 0x400000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_0003DEA1; /* je: equal / zero */

loc_0003DE4B: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0003DEA1; /* jbe: below or equal (unsigned <=) */

loc_0003DE5D: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0003DEA1; /* jbe: below or equal (unsigned <=) */

loc_0003DE6F: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0003DEA1; /* jbe: below or equal (unsigned <=) */

loc_0003DE81: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0003DEA1; /* jbe: below or equal (unsigned <=) */

loc_0003DE93: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 4);
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x17) = MEM8(eax + 0x17) | 0x80;
    _fa = (uint32_t)(MEM8(eax + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_0003DEAD;

loc_0003DEA1: ;
    edx = MEM32(ebp + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax + 4);
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 0x17) = MEM8(eax + 0x17) & 0x7F;
    _fa = (uint32_t)(MEM8(eax + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0003DEAD: ;
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ecx + 4);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & 0xFF7FFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ebp + 0x14);
    eax = MEM32(edx + 4);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & 0xFFBFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0003DEC5: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp), 0x400000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0003DED5; /* je: equal / zero */

loc_0003DECE: ;
    edx = ebp;
    PUSH32(esp, 0x0003DED5u); RECOMP_ABI_CALL(0x00034D30u, sub_00034D30); /* call 0x00034D30 */

loc_0003DED5: ;
    eax = MEM32(ebx);
    esi = MEM32(eax);
    eax = MEM32(eax + 4);
    edi = esi + eax * 4 + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0003DF1D; /* ja: above (unsigned >) */

loc_0003DEE4: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0003DF16; /* je: equal / zero */

loc_0003DEED: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 4), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0003DF16; /* je: equal / zero */

loc_0003DEF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0003DF05; /* je: equal / zero */

loc_0003DEFA: ;
    edx = MEM32(ecx + 0x14);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0003DF16; /* je: equal / zero */

loc_0003DF05: ;
    eax = ebp;
    PUSH32(esp, 0x0003DF0Cu); RECOMP_ABI_CALL(0x0003D040u, sub_0003D040); /* call 0x0003D040 */

loc_0003DF0C: ;
    eax = 0x451B70;
    PUSH32(esp, 0x0003DF16u); RECOMP_ABI_CALL(0x00081F60u, sub_00081F60); /* call 0x00081F60 */

loc_0003DF16: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0003DEE4; /* jbe: below or equal (unsigned <=) */

loc_0003DF1D: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x1C) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0003D90D; /* jbe: below or equal (unsigned <=) */

loc_0003DF34: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x54)) >> 32) & 1);
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0003DDBC
 * Original: 0x0003DDBC - 0x0003DF3C (384 bytes, 117 insns)
 * Folder: collision (between: 0x0003D120 and 0x0003E320)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003DDBC(void)
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

loc_0003DDBC: ;
    if (_flags /* ja: above (unsigned >) */) goto loc_0003DF1D;

loc_0003DDC2: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003DEC5; /* je: equal / zero */

loc_0003DDCC: ;
    edx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DDD8; /* je: equal / zero */

loc_0003DDD3: ;
    eax = MEM32(edx + 4);
    goto loc_0003DDDA;

loc_0003DDD8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003DDDA: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_0003DEC5; /* jns: not sign (positive) */

loc_0003DDE3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DDEC; /* je: equal / zero */

loc_0003DDE7: ;
    eax = MEM32(edx + 4);
    goto loc_0003DDEE;

loc_0003DDEC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003DDEE: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ecx = MEM32(ebx + 4);
    ecx = MEM32(ecx + 0x20);
    edx = MEM32(edx + 4);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx), 0x400000 (32-bit) */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_0003DEA1; /* je: equal / zero */

loc_0003DE4B: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0003DEA1; /* jbe: below or equal (unsigned <=) */

loc_0003DE5D: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0003DEA1; /* jbe: below or equal (unsigned <=) */

loc_0003DE6F: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0003DEA1; /* jbe: below or equal (unsigned <=) */

loc_0003DE81: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0003DEA1; /* jbe: below or equal (unsigned <=) */

loc_0003DE93: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 4);
    MEM8(eax + 0x17) = MEM8(eax + 0x17) | 0x80;
    _fa = (uint32_t)(MEM8(eax + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_0003DEAD;

loc_0003DEA1: ;
    edx = MEM32(ebp + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax + 4);
    MEM8(eax + 0x17) = MEM8(eax + 0x17) & 0x7F;
    _fa = (uint32_t)(MEM8(eax + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_0003DEAD: ;
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ecx + 4);
    MEM32(eax) = MEM32(eax) & 0xFF7FFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ebp + 0x14);
    eax = MEM32(edx + 4);
    MEM32(eax) = MEM32(eax) & 0xFFBFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0003DEC5: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003DED5; /* je: equal / zero */

loc_0003DECE: ;
    edx = ebp;
    PUSH32(esp, 0x0003DED5u); RECOMP_ABI_CALL(0x00034D30u, sub_00034D30); /* call 0x00034D30 */

loc_0003DED5: ;
    eax = MEM32(ebx);
    esi = MEM32(eax);
    eax = MEM32(eax + 4);
    edi = esi + eax * 4 + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003DF1D; /* ja: above (unsigned >) */

loc_0003DEE4: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003DF16; /* je: equal / zero */

loc_0003DEED: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003DF16; /* je: equal / zero */

loc_0003DEF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003DF05; /* je: equal / zero */

loc_0003DEFA: ;
    edx = MEM32(ecx + 0x14);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DF16; /* je: equal / zero */

loc_0003DF05: ;
    eax = ebp;
    PUSH32(esp, 0x0003DF0Cu); RECOMP_ABI_CALL(0x0003D040u, sub_0003D040); /* call 0x0003D040 */

loc_0003DF0C: ;
    eax = 0x451B70;
    PUSH32(esp, 0x0003DF16u); RECOMP_ABI_CALL(0x00081F60u, sub_00081F60); /* call 0x00081F60 */

loc_0003DF16: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0003DEE4; /* jbe: below or equal (unsigned <=) */

loc_0003DF1D: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_0003D90D(); return; } /* jbe: below or equal (unsigned <=) */

loc_0003DF34: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0003DF40
 * Original: 0x0003DF40 - 0x0003E31B (987 bytes, 263 insns)
 * Folder: collision (between: 0x0003D120 and 0x0003E320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003DF40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003DF40: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 0x10C;
    MEM8(0x7585CC) = 0;
    MEM32(0x7585C8) = 0;
    PUSH32(esp, 0x0003DF67u); RECOMP_ABI_CALL(0x0003D120u, sub_0003D120); /* call 0x0003D120 */

loc_0003DF67: ;
    eax = MEM32(0x7584BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DF76; /* je: equal / zero */

loc_0003DF70: ;
    eax = MEM32(ebp + 0x2C);
    PUSH32(esp, eax);
    goto loc_0003DF7A;

loc_0003DF76: ;
    ecx = MEM32(ebp + 0x2C);
    PUSH32(esp, ecx);

loc_0003DF7A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0003DF81u); RECOMP_ABI_CALL(0x0002C710u, sub_0002C710); /* call 0x0002C710 */

loc_0003DF81: ;
    esi = MEM32(0x431048);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ebp;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x431048) = edx;
    PUSH32(esp, 0x0003DFA0u); RECOMP_ABI_CALL(0x0003D8C0u, sub_0003D8C0); /* call 0x0003D8C0 */

loc_0003DFA0: ;
    eax = MEM32(0x451B70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003DFB3; /* je: equal / zero */

loc_0003DFA9: ;
    eax = 0x451B70;
    PUSH32(esp, 0x0003DFB3u); RECOMP_ABI_CALL(0x00070EF0u, sub_00070EF0); /* call 0x00070EF0 */

loc_0003DFB3: ;
    SET_LO8(eax, MEM8(0x451D4C));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E30C; /* je: equal / zero */

loc_0003DFC2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0003E10A; /* jge: greater or equal (signed >=) */

loc_0003DFCB: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM8(0x7585CC) = LO8(ecx);
    ecx = MEM32(0x451B70);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(0x451D50) = ecx;
    ecx = ZX8(LO8(eax));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x451B60) = edx;
    MEM32(0x451D54) = 1;
    MEM32(esp + 0x14) = ecx;
    MEM8(0x451D4C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0003E0EC; /* jle: less or equal (signed <=) */

loc_0003E012: ;
    esi = MEM32(ebx * 4 + 0x451C84);
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax + 4);
    MEM8(eax + 0x16) = MEM8(eax + 0x16) & 0xFB;
    _fa = (uint32_t)(MEM8(eax + 0x16)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax + 4);
    MEM16(eax + 0x16) = MEM16(eax + 0x16) & 0xFC0F;
    _fa = (uint32_t)(MEM16(eax + 0x16)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E048; /* je: equal / zero */

loc_0003E03A: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E048; /* je: equal / zero */

loc_0003E041: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    goto loc_0003E050;

loc_0003E048: ;
    xmm0 = XMM_SCALAR(MEMF(0x429360)); /* movss */

loc_0003E050: ;
    MEMF(0x451C6C) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax);
    edi = MEM32(eax);
    edx = MEM32(eax + 4);
    ebp = edi + edx * 4 + -4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003E0DF; /* ja: above (unsigned >) */

loc_0003E06C: ;
    /* nop */

loc_0003E070: ;
    eax = MEM32(edi);
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E0D4; /* je: equal / zero */

loc_0003E079: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E0D4; /* je: equal / zero */

loc_0003E07F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E092; /* je: equal / zero */

loc_0003E087: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E0D4; /* je: equal / zero */

loc_0003E092: ;
    MEM32(0x451B78) = esi;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx + 0x20);
    MEM32(0x451B88) = edx;
    ecx = MEM32(esi + 0xC);
    MEM32(0x451BE0) = eax;
    MEM32(0x451B8C) = ecx;
    edx = MEM32(eax + 0xC);
    eax = 0x451B70;
    MEM32(0x451C00) = edx;
    MEM32(0x451C7C) = 0x645078;
    PUSH32(esp, 0x0003E0D4u); RECOMP_ABI_CALL(0x00081F60u, sub_00081F60); /* call 0x00081F60 */

loc_0003E0D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0003E070; /* jbe: below or equal (unsigned <=) */

loc_0003E0DB: ;
    ecx = MEM32(esp + 0x14);

loc_0003E0DF: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003E012; /* jl: less (signed <) */

loc_0003E0E8: ;
    ebp = MEM32(esp + 0x1C);

loc_0003E0EC: ;
    eax = 0x451B70;
    PUSH32(esp, 0x0003E0F6u); RECOMP_ABI_CALL(0x00070EF0u, sub_00070EF0); /* call 0x00070EF0 */

loc_0003E0F6: ;
    SET_LO8(eax, MEM8(0x451D4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_0003DFC2; /* jne: not equal / not zero */

loc_0003E107: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */

loc_0003E10A: ;
    if (CMP_NE(_fa, _fb)) goto loc_0003E30C; /* jne: not equal / not zero */

loc_0003E110: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0003E30C; /* jbe: below or equal (unsigned <=) */

loc_0003E11A: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    ebx = 2;

loc_0003E122: ;
    ecx = MEM32(edi * 4 + 0x451C84);
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    ecx = MEM32(ecx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x30); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x34); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */
    esi = MEM32(edi * 4 + 0x451C84);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = 0x40;
    ecx = ebp;
    PUSH32(esp, 0x0003E16Fu); RECOMP_ABI_CALL(0x00071530u, sub_00071530); /* call 0x00071530 */

loc_0003E16F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003E18D; /* jne: not equal / not zero */

loc_0003E176: ;
    PUSH32(esp, esi);
    eax = 0x80;
    ecx = ebp;
    PUSH32(esp, 0x0003E183u); RECOMP_ABI_CALL(0x00071530u, sub_00071530); /* call 0x00071530 */

loc_0003E183: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E18D; /* je: equal / zero */

loc_0003E18A: ;
    xmm0 = xmm3; /* movaps */

loc_0003E18D: ;
    eax = MEM32(esi + 0xC);
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    ecx = MEM32(edi * 4 + 0x451C84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E2E5; /* je: equal / zero */

loc_0003E1CB: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E2E5; /* je: equal / zero */

loc_0003E1D5: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E2E5; /* je: equal / zero */

loc_0003E1E0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E2E5; /* je: equal / zero */

loc_0003E1E9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E22E; /* je: equal / zero */

loc_0003E1F1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x10000 (32-bit) */
    eax = MEM32(ecx + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_0003E203; /* je: equal / zero */

loc_0003E1FC: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003E206;

loc_0003E203: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003E206: ;
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 0x30) = xmm4.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] + MEMF(eax + 0x34); /* addss */
    MEMF(eax + 0x34) = xmm4.f[0]; /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + MEMF(eax + 0x38); /* addss */
    MEMF(eax + 0x38) = xmm4.f[0]; /* movss */

loc_0003E22E: ;
    edx = MEM32(ecx + 0x14);
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E2E5; /* je: equal / zero */

loc_0003E23B: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 1), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E2E5; /* je: equal / zero */

loc_0003E244: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E2E5; /* je: equal / zero */

loc_0003E24F: ;
    SET_LO8(edx, MEM8(eax + 0x63));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_0003E2E5; /* js: sign (negative) */

loc_0003E25A: ;
    xmm4 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 0x40) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    eax = MEM32(ecx + 0x18);
    xmm4 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    eax = MEM32(ecx + 0x18);
    xmm4 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */

loc_0003E2E5: ;
    eax = MEM32(edi * 4 + 0x451C84);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E2FC; /* je: equal / zero */

loc_0003E2F8: ;
    MEM16(eax + 0x16) = MEM16(eax + 0x16) | LO16(ebx);
    _fa = (uint32_t)(MEM16(eax + 0x16)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0003E2FC: ;
    eax = ZX8(MEM8(0x451D4C));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003E122; /* jl: less (signed <) */

loc_0003E30C: ;
    ebx = ebp;
    PUSH32(esp, 0x0003E313u); RECOMP_ABI_CALL(0x0003D080u, sub_0003D080); /* call 0x0003D080 */

loc_0003E313: ;
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
 * sub_0003DFEA
 * Original: 0x0003DFEA - 0x0003E31B (817 bytes, 215 insns)
 * Folder: collision (between: 0x0003D120 and 0x0003E320)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003DFEA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003DFEA: ;
    ecx = ZX8(LO8(eax));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x451B60) = edx;
    MEM32(0x451D54) = 1;
    MEM32(esp + 0x14) = ecx;
    MEM8(0x451D4C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0003E0EC; /* jle: less or equal (signed <=) */

loc_0003E012: ;
    esi = MEM32(ebx * 4 + 0x451C84);
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax + 4);
    MEM8(eax + 0x16) = MEM8(eax + 0x16) & 0xFB;
    _fa = (uint32_t)(MEM8(eax + 0x16)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax + 4);
    MEM16(eax + 0x16) = MEM16(eax + 0x16) & 0xFC0F;
    _fa = (uint32_t)(MEM16(eax + 0x16)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E048; /* je: equal / zero */

loc_0003E03A: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E048; /* je: equal / zero */

loc_0003E041: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    goto loc_0003E050;

loc_0003E048: ;
    xmm0 = XMM_SCALAR(MEMF(0x429360)); /* movss */

loc_0003E050: ;
    MEMF(0x451C6C) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax);
    edi = MEM32(eax);
    edx = MEM32(eax + 4);
    ebp = edi + edx * 4 + -4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003E0DF; /* ja: above (unsigned >) */

loc_0003E06C: ;
    /* nop */

loc_0003E070: ;
    eax = MEM32(edi);
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E0D4; /* je: equal / zero */

loc_0003E079: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E0D4; /* je: equal / zero */

loc_0003E07F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E092; /* je: equal / zero */

loc_0003E087: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E0D4; /* je: equal / zero */

loc_0003E092: ;
    MEM32(0x451B78) = esi;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx + 0x20);
    MEM32(0x451B88) = edx;
    ecx = MEM32(esi + 0xC);
    MEM32(0x451BE0) = eax;
    MEM32(0x451B8C) = ecx;
    edx = MEM32(eax + 0xC);
    eax = 0x451B70;
    MEM32(0x451C00) = edx;
    MEM32(0x451C7C) = 0x645078;
    PUSH32(esp, 0x0003E0D4u); RECOMP_ABI_CALL(0x00081F60u, sub_00081F60); /* call 0x00081F60 */

loc_0003E0D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0003E070; /* jbe: below or equal (unsigned <=) */

loc_0003E0DB: ;
    ecx = MEM32(esp + 0x14);

loc_0003E0DF: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003E012; /* jl: less (signed <) */

loc_0003E0E8: ;
    ebp = MEM32(esp + 0x1C);

loc_0003E0EC: ;
    eax = 0x451B70;
    PUSH32(esp, 0x0003E0F6u); RECOMP_ABI_CALL(0x00070EF0u, sub_00070EF0); /* call 0x00070EF0 */

loc_0003E0F6: ;
    SET_LO8(eax, MEM8(0x451D4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0003DFC2(); return; } /* jne: not equal / not zero */

loc_0003E107: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003E30C; /* jne: not equal / not zero */

loc_0003E110: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0003E30C; /* jbe: below or equal (unsigned <=) */

loc_0003E11A: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    ebx = 2;

loc_0003E122: ;
    ecx = MEM32(edi * 4 + 0x451C84);
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    ecx = MEM32(ecx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x30); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x34); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */
    esi = MEM32(edi * 4 + 0x451C84);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = 0x40;
    ecx = ebp;
    PUSH32(esp, 0x0003E16Fu); RECOMP_ABI_CALL(0x00071530u, sub_00071530); /* call 0x00071530 */

loc_0003E16F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003E18D; /* jne: not equal / not zero */

loc_0003E176: ;
    PUSH32(esp, esi);
    eax = 0x80;
    ecx = ebp;
    PUSH32(esp, 0x0003E183u); RECOMP_ABI_CALL(0x00071530u, sub_00071530); /* call 0x00071530 */

loc_0003E183: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E18D; /* je: equal / zero */

loc_0003E18A: ;
    xmm0 = xmm3; /* movaps */

loc_0003E18D: ;
    eax = MEM32(esi + 0xC);
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    ecx = MEM32(edi * 4 + 0x451C84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E2E5; /* je: equal / zero */

loc_0003E1CB: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E2E5; /* je: equal / zero */

loc_0003E1D5: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E2E5; /* je: equal / zero */

loc_0003E1E0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E2E5; /* je: equal / zero */

loc_0003E1E9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E22E; /* je: equal / zero */

loc_0003E1F1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x10000 (32-bit) */
    eax = MEM32(ecx + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_0003E203; /* je: equal / zero */

loc_0003E1FC: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003E206;

loc_0003E203: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003E206: ;
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 0x30) = xmm4.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] + MEMF(eax + 0x34); /* addss */
    MEMF(eax + 0x34) = xmm4.f[0]; /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + MEMF(eax + 0x38); /* addss */
    MEMF(eax + 0x38) = xmm4.f[0]; /* movss */

loc_0003E22E: ;
    edx = MEM32(ecx + 0x14);
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E2E5; /* je: equal / zero */

loc_0003E23B: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 1), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E2E5; /* je: equal / zero */

loc_0003E244: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E2E5; /* je: equal / zero */

loc_0003E24F: ;
    SET_LO8(edx, MEM8(eax + 0x63));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_0003E2E5; /* js: sign (negative) */

loc_0003E25A: ;
    xmm4 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 0x40) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    eax = MEM32(ecx + 0x18);
    xmm4 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    eax = MEM32(ecx + 0x18);
    xmm4 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */

loc_0003E2E5: ;
    eax = MEM32(edi * 4 + 0x451C84);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E2FC; /* je: equal / zero */

loc_0003E2F8: ;
    MEM16(eax + 0x16) = MEM16(eax + 0x16) | LO16(ebx);
    _fa = (uint32_t)(MEM16(eax + 0x16)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0003E2FC: ;
    eax = ZX8(MEM8(0x451D4C));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003E122; /* jl: less (signed <) */

loc_0003E30C: ;
    ebx = ebp;
    PUSH32(esp, 0x0003E313u); RECOMP_ABI_CALL(0x0003D080u, sub_0003D080); /* call 0x0003D080 */

loc_0003E313: ;
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
 * sub_0003E019
 * Original: 0x0003E019 - 0x0003E31B (770 bytes, 206 insns)
 * Folder: collision (between: 0x0003D120 and 0x0003E320)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E019(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003E019: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax + 4);
    MEM8(eax + 0x16) = MEM8(eax + 0x16) & 0xFB;
    _fa = (uint32_t)(MEM8(eax + 0x16)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax + 4);
    MEM16(eax + 0x16) = MEM16(eax + 0x16) & 0xFC0F;
    _fa = (uint32_t)(MEM16(eax + 0x16)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E048; /* je: equal / zero */

loc_0003E03A: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E048; /* je: equal / zero */

loc_0003E041: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    goto loc_0003E050;

loc_0003E048: ;
    xmm0 = XMM_SCALAR(MEMF(0x429360)); /* movss */

loc_0003E050: ;
    MEMF(0x451C6C) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx);
    eax = MEM32(eax);
    edi = MEM32(eax);
    edx = MEM32(eax + 4);
    ebp = edi + edx * 4 + -4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003E0DF; /* ja: above (unsigned >) */

loc_0003E06C: ;
    /* nop */

loc_0003E070: ;
    eax = MEM32(edi);
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E0D4; /* je: equal / zero */

loc_0003E079: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E0D4; /* je: equal / zero */

loc_0003E07F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E092; /* je: equal / zero */

loc_0003E087: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E0D4; /* je: equal / zero */

loc_0003E092: ;
    MEM32(0x451B78) = esi;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx + 0x20);
    MEM32(0x451B88) = edx;
    ecx = MEM32(esi + 0xC);
    MEM32(0x451BE0) = eax;
    MEM32(0x451B8C) = ecx;
    edx = MEM32(eax + 0xC);
    eax = 0x451B70;
    MEM32(0x451C00) = edx;
    MEM32(0x451C7C) = 0x645078;
    PUSH32(esp, 0x0003E0D4u); RECOMP_ABI_CALL(0x00081F60u, sub_00081F60); /* call 0x00081F60 */

loc_0003E0D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0003E070; /* jbe: below or equal (unsigned <=) */

loc_0003E0DB: ;
    ecx = MEM32(esp + 0x14);

loc_0003E0DF: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0003E012(); return; } /* jl: less (signed <) */

loc_0003E0E8: ;
    ebp = MEM32(esp + 0x1C);
    eax = 0x451B70;
    PUSH32(esp, 0x0003E0F6u); RECOMP_ABI_CALL(0x00070EF0u, sub_00070EF0); /* call 0x00070EF0 */

loc_0003E0F6: ;
    SET_LO8(eax, MEM8(0x451D4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0003DFC2(); return; } /* jne: not equal / not zero */

loc_0003E107: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003E30C; /* jne: not equal / not zero */

loc_0003E110: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0003E30C; /* jbe: below or equal (unsigned <=) */

loc_0003E11A: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    ebx = 2;

loc_0003E122: ;
    ecx = MEM32(edi * 4 + 0x451C84);
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    ecx = MEM32(ecx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x30); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x34); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */
    esi = MEM32(edi * 4 + 0x451C84);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = 0x40;
    ecx = ebp;
    PUSH32(esp, 0x0003E16Fu); RECOMP_ABI_CALL(0x00071530u, sub_00071530); /* call 0x00071530 */

loc_0003E16F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003E18D; /* jne: not equal / not zero */

loc_0003E176: ;
    PUSH32(esp, esi);
    eax = 0x80;
    ecx = ebp;
    PUSH32(esp, 0x0003E183u); RECOMP_ABI_CALL(0x00071530u, sub_00071530); /* call 0x00071530 */

loc_0003E183: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E18D; /* je: equal / zero */

loc_0003E18A: ;
    xmm0 = xmm3; /* movaps */

loc_0003E18D: ;
    eax = MEM32(esi + 0xC);
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    ecx = MEM32(edi * 4 + 0x451C84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E2E5; /* je: equal / zero */

loc_0003E1CB: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E2E5; /* je: equal / zero */

loc_0003E1D5: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E2E5; /* je: equal / zero */

loc_0003E1E0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E2E5; /* je: equal / zero */

loc_0003E1E9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E22E; /* je: equal / zero */

loc_0003E1F1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x10000 (32-bit) */
    eax = MEM32(ecx + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_0003E203; /* je: equal / zero */

loc_0003E1FC: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0003E206;

loc_0003E203: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003E206: ;
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 0x30) = xmm4.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] + MEMF(eax + 0x34); /* addss */
    MEMF(eax + 0x34) = xmm4.f[0]; /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + MEMF(eax + 0x38); /* addss */
    MEMF(eax + 0x38) = xmm4.f[0]; /* movss */

loc_0003E22E: ;
    edx = MEM32(ecx + 0x14);
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E2E5; /* je: equal / zero */

loc_0003E23B: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 1), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E2E5; /* je: equal / zero */

loc_0003E244: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E2E5; /* je: equal / zero */

loc_0003E24F: ;
    SET_LO8(edx, MEM8(eax + 0x63));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_0003E2E5; /* js: sign (negative) */

loc_0003E25A: ;
    xmm4 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 0x40) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    eax = MEM32(ecx + 0x18);
    xmm4 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    eax = MEM32(ecx + 0x18);
    xmm4 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */

loc_0003E2E5: ;
    eax = MEM32(edi * 4 + 0x451C84);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E2FC; /* je: equal / zero */

loc_0003E2F8: ;
    MEM16(eax + 0x16) = MEM16(eax + 0x16) | LO16(ebx);
    _fa = (uint32_t)(MEM16(eax + 0x16)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0003E2FC: ;
    eax = ZX8(MEM8(0x451D4C));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0003E122; /* jl: less (signed <) */

loc_0003E30C: ;
    ebx = ebp;
    PUSH32(esp, 0x0003E313u); RECOMP_ABI_CALL(0x0003D080u, sub_0003D080); /* call 0x0003D080 */

loc_0003E313: ;
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
 * sub_0003E31D
 * Original: 0x0003E31D - 0x0003E320 (3 bytes, 3 insns)
 * Folder: collision (between: 0x0003D120 and 0x0003E320)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E31D(void)
{

loc_0003E31D: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0003E320
 * Original: 0x0003E320 - 0x0003E599 (633 bytes, 172 insns)
 * Folder: collision (match: xbox-demo 0x00058550, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003E320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003E320: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    eax = ZX8(MEM8(ebx + 1));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 0x40));
    ecx = ecx & 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0003E41F; /* je: equal / zero */

loc_0003E344: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0003E592; /* jne: not equal / not zero */

loc_0003E34B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E3D6; /* je: equal / zero */

loc_0003E353: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E3D6; /* jne: not equal / not zero */

loc_0003E358: ;
    ecx = esi;
    eax = esp + 0x28;
    PUSH32(esp, 0x0003E363u); RECOMP_ABI_CALL(0x000E15F0u, sub_000E15F0); /* call 0x000E15F0 */

loc_0003E363: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x0003E36Eu); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_0003E36E: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x30); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 4); /* addss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 8); /* addss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003E3B0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0003E3AD: ;
    xmm0 = xmm1; /* movaps */

loc_0003E3B0: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003E3BE; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0003E3BB: ;
    xmm0 = xmm1; /* movaps */

loc_0003E3BE: ;
    ecx = MEM32(ebx + 4);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    POP32(esp, esi);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebp) = xmm1.f[0]; /* movss */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0003E3D6: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0003E3E1u); RECOMP_ABI_CALL(0x000E0DD0u, sub_000E0DD0); /* call 0x000E0DD0 */

loc_0003E3E1: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 4); /* addss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 8); /* addss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 4);
    eax = MEM32(edx + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0003E41F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(ebx + 4);
    xmm3 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x10); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x14); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E4EF; /* je: equal / zero */

loc_0003E495: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E4EF; /* jne: not equal / not zero */

loc_0003E49A: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    eax = esi;
    PUSH32(esp, 0x0003E4AAu); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_0003E4AA: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x30;
    eax = esi;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0003E4EDu); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_0003E4ED: ;
    goto loc_0003E542;

loc_0003E4EF: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    ecx = esi;
    PUSH32(esp, 0x0003E4FFu); RECOMP_ABI_CALL(0x000E0DD0u, sub_000E0DD0); /* call 0x000E0DD0 */

loc_0003E4FF: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    eax = esp + 0x30;
    ecx = esi;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0003E542u); RECOMP_ABI_CALL(0x000E0DD0u, sub_000E0DD0); /* call 0x000E0DD0 */

loc_0003E542: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(ebp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0003E592: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0003E5A0
 * Original: 0x0003E5A0 - 0x0003E8C6 (806 bytes, 223 insns)
 * Folder: collision (match: xbox-demo 0x000587D0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0003E5A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0003E5A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0003E8BD; /* je: equal / zero */

loc_0003E5B9: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E8BD; /* je: equal / zero */

loc_0003E5C3: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E5D4; /* je: equal / zero */

loc_0003E5CA: ;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    goto loc_0003E5DE;

loc_0003E5D4: ;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = eax;
    ecx = eax;

loc_0003E5DE: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E8BD; /* je: equal / zero */

loc_0003E5E9: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E8BD; /* je: equal / zero */

loc_0003E5F4: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E8BD; /* je: equal / zero */

loc_0003E5FE: ;
    esi = MEM32(eax + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E8BD; /* je: equal / zero */

loc_0003E609: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E8BD; /* je: equal / zero */

loc_0003E613: ;
    ecx = ZX8(MEM8(ebp + 8));
    edx = MEM32(eax + 8);
    SET_LO8(ebx, MEM8(ecx + edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 4) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0003E8BD; /* jae: above or equal (unsigned >=) */

loc_0003E626: ;
    SET_LO8(edx, LO8(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003E62Du); RECOMP_ABI_CALL(0x00040730u, sub_00040730); /* call 0x00040730 */

loc_0003E62D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E8BD; /* je: equal / zero */

loc_0003E635: ;
    ecx = MEM32(esi + 8);
    eax = ZX8(LO8(ebx));
    edi = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E8BD; /* je: equal / zero */

loc_0003E647: ;
    eax = ZX8(MEM8(edi + 1));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0003E791; /* je: equal / zero */

loc_0003E652: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0003E8BD; /* jne: not equal / not zero */

loc_0003E659: ;
    edx = MEM32(edi + 4);
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0003E8BD; /* jnp: not parity */

loc_0003E672: ;
    ecx = MEM32(esp + 0x18);
    esi = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003E67Fu); RECOMP_ABI_CALL(0x00023AC0u, sub_00023AC0); /* call 0x00023AC0 */

loc_0003E67F: ;
    eax = MEM32(esp + 0x14);
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E6FF; /* je: equal / zero */

loc_0003E68C: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E6FF; /* jne: not equal / not zero */

loc_0003E691: ;
    ecx = esi;
    eax = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003E69Cu); RECOMP_ABI_CALL(0x000E15F0u, sub_000E15F0); /* call 0x000E15F0 */

loc_0003E69C: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 4);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003E6ABu); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_0003E6AB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x20); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x24); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x28); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003E6E3; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0003E6E0: ;
    xmm0 = xmm4; /* movaps */

loc_0003E6E3: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003E6F1; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0003E6EE: ;
    xmm0 = xmm4; /* movaps */

loc_0003E6F1: ;
    edx = MEM32(edi + 4);
    xmm4 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    goto loc_0003E73A;

loc_0003E6FF: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(edi + 4);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003E70Eu); RECOMP_ABI_CALL(0x000E0DD0u, sub_000E0DD0); /* call 0x000E0DD0 */

loc_0003E70E: ;
    ecx = MEM32(edi + 4);
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x20); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x24); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x28); /* addss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003E73A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm0 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003E8BD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0003E785: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0003E791: ;
    ebx = MEM32(edi + 4);
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0003E8BD; /* jnp: not parity */

loc_0003E7A6: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0003E8BD; /* jnp: not parity */

loc_0003E7B9: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0003E8BD; /* jnp: not parity */

loc_0003E7CC: ;
    ecx = MEM32(esp + 0x18);
    esi = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003E7D9u); RECOMP_ABI_CALL(0x00023AC0u, sub_00023AC0); /* call 0x00023AC0 */

loc_0003E7D9: ;
    edx = MEM32(esp + 0x14);
    edx = MEM32(edx + 0xC);
    _fa = (uint32_t)(MEM8(edx + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003E82F; /* je: equal / zero */

loc_0003E7E6: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003E82F; /* jne: not equal / not zero */

loc_0003E7EB: ;
    eax = esp + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E7FE; /* je: equal / zero */

loc_0003E7F3: ;
    ecx = 0x14;
    esi = edx;
    edi = eax;
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

loc_0003E7FE: ;
    eax = MEM32(esp + 0x80);
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x80) = eax;
    edx = esp + 0x40;
    eax = esp + 0x90;
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x5C) = esi;
    MEM32(esp + 0x6C) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003E82Du); RECOMP_ABI_CALL(0x000E1240u, sub_000E1240); /* call 0x000E1240 */

loc_0003E82D: ;
    goto loc_0003E83D;

loc_0003E82F: ;
    eax = esp + 0x90;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003E83Bu); RECOMP_ABI_CALL(0x000E1240u, sub_000E1240); /* call 0x000E1240 */

loc_0003E83B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003E83D: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = esp + 0x38;
    eax = esp + 0x94;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003E852u); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_0003E852: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xCC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x30); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x34); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003E8BD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 0xC)) */

loc_0003E888: ;
    xmm3 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003E8BD; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_0003E891: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ebx + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003E8BD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ebx + 0x10)) */

loc_0003E897: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003E8BD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0003E8A1: ;
    _fca = xmm2.f[0]; _fcb = MEMF(ebx + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003E8BD; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(ebx + 0x14)) */

loc_0003E8A7: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003E8BD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0003E8B1: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0003E8BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0003E8D0
 * Original: 0x0003E8D0 - 0x0003EC0F (831 bytes, 233 insns)
 * Folder: collision (match: xbox-demo 0x00058B00, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0003E8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0003E8D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0003EC06; /* je: equal / zero */

loc_0003E8E9: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003EC06; /* je: equal / zero */

loc_0003E8F3: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003E902; /* je: equal / zero */

loc_0003E8FA: ;
    edi = ecx;
    MEM32(esp + 0x18) = eax;
    goto loc_0003E908;

loc_0003E902: ;
    edi = eax;
    MEM32(esp + 0x18) = ecx;

loc_0003E908: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003EC06; /* je: equal / zero */

loc_0003E913: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003EC06; /* je: equal / zero */

loc_0003E91E: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003EC06; /* je: equal / zero */

loc_0003E928: ;
    esi = MEM32(eax + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003EC06; /* je: equal / zero */

loc_0003E933: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003EC06; /* je: equal / zero */

loc_0003E93D: ;
    ecx = ZX8(MEM8(ebp + 8));
    edx = MEM32(eax + 8);
    SET_LO8(ebx, MEM8(ecx + edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 4) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0003EC06; /* jae: above or equal (unsigned >=) */

loc_0003E950: ;
    SET_LO8(edx, LO8(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003E957u); RECOMP_ABI_CALL(0x00040730u, sub_00040730); /* call 0x00040730 */

loc_0003E957: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003EC06; /* je: equal / zero */

loc_0003E95F: ;
    ecx = MEM32(esi + 8);
    eax = ZX8(LO8(ebx));
    ebx = MEM32(ecx + eax * 4);
    SET_LO8(ecx, MEM8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003EC06; /* je: equal / zero */

loc_0003E973: ;
    eax = ZX8(MEM8(ebx + 1));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0003EACA; /* je: equal / zero */

loc_0003E97E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0003EC06; /* jne: not equal / not zero */

loc_0003E985: ;
    edx = MEM32(ebx + 4);
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0003EC06; /* jnp: not parity */

loc_0003E99E: ;
    eax = MEM32(esp + 0x18);
    eax = MEM32(eax + 0xC);
    esi = MEM32(eax + 0x30);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x20) = esi;
    esi = MEM32(edi + 0xC);
    MEM32(esp + 0x24) = eax;
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003EA39; /* je: equal / zero */

loc_0003E9C6: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003EA39; /* jne: not equal / not zero */

loc_0003E9CB: ;
    ecx = esi;
    eax = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003E9D6u); RECOMP_ABI_CALL(0x000E15F0u, sub_000E15F0); /* call 0x000E15F0 */

loc_0003E9D6: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 4);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003E9E5u); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_0003E9E5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x2C); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x30); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x34); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003EA1D; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0003EA1A: ;
    xmm0 = xmm4; /* movaps */

loc_0003EA1D: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003EA2B; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0003EA28: ;
    xmm0 = xmm4; /* movaps */

loc_0003EA2B: ;
    edx = MEM32(ebx + 4);
    xmm4 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    goto loc_0003EA73;

loc_0003EA39: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    eax = edx;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003EA47u); RECOMP_ABI_CALL(0x000E0DD0u, sub_000E0DD0); /* call 0x000E0DD0 */

loc_0003EA47: ;
    ecx = MEM32(ebx + 4);
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x2C); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x30); /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x34); /* addss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003EA73: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm0 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003EC06; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_0003EABE: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0003EACA: ;
    ebx = MEM32(ebx + 4);
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0003EC06; /* jnp: not parity */

loc_0003EADF: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0003EC06; /* jnp: not parity */

loc_0003EAF2: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0003EC06; /* jnp: not parity */

loc_0003EB05: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(edx + 0xC);
    edx = MEM32(eax + 0x30);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(edi + 0xC);
    MEM32(esp + 0x24) = eax;
    _fa = (uint32_t)(MEM8(edx + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003EB78; /* je: equal / zero */

loc_0003EB2D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003EB78; /* jne: not equal / not zero */

loc_0003EB32: ;
    ecx = esp + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003EB47; /* je: equal / zero */

loc_0003EB3A: ;
    ecx = 0x14;
    esi = edx;
    edi = esp + 0x40;
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

loc_0003EB47: ;
    eax = MEM32(esp + 0x80);
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x80) = eax;
    edx = esp + 0x40;
    eax = esp + 0x90;
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x5C) = esi;
    MEM32(esp + 0x6C) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003EB76u); RECOMP_ABI_CALL(0x000E1240u, sub_000E1240); /* call 0x000E1240 */

loc_0003EB76: ;
    goto loc_0003EB86;

loc_0003EB78: ;
    eax = esp + 0x90;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003EB84u); RECOMP_ABI_CALL(0x000E1240u, sub_000E1240); /* call 0x000E1240 */

loc_0003EB84: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0003EB86: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    eax = esp + 0x94;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003EB9Bu); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_0003EB9B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x38); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xCC)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x3C); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x40); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003EC06; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 0xC)) */

loc_0003EBD1: ;
    xmm3 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003EC06; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_0003EBDA: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ebx + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003EC06; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(ebx + 0x10)) */

loc_0003EBE0: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003EC06; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0003EBEA: ;
    _fca = xmm2.f[0]; _fcb = MEMF(ebx + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003EC06; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(ebx + 0x14)) */

loc_0003EBF0: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003EC06; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0003EBFA: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0003EC06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
