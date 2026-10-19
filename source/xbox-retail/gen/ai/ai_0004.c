/**
 * PoP SoT xbox-retail - ai, chunk 4
 * AI interpreter and the functions it exposes to scripts (Jade AIinterp)
 * Functions: 250 (0x002E2740 - 0x002EBCC0)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_002E2740
 * Original: 0x002E2740 - 0x002E27F9 (185 bytes, 49 insns)
 * Folder: ai (match: xbox-demo 0x0025A890, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E2740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_002E2740: ;
    ecx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    edx = MEM32(0x758D70);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E2780; /* jne: not equal / not zero */

loc_002E2776: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_002E2788;

loc_002E2780: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_002E2788: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002E27AC; /* jne: not equal / not zero */

loc_002E27A2: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_002E27B4;

loc_002E27AC: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_002E27B4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E27F1; /* je: equal / zero */

loc_002E27B8: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002E27F1; /* je: equal / zero */

loc_002E27BD: ;
    edx = MEM32(edx + 0x18);
    ecx = MEM32(edx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E27F1; /* je: equal / zero */

loc_002E27C7: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002E27DA; /* je: equal / zero */

loc_002E27D2: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002E27DA; /* je: equal / zero */

loc_002E27D7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002E27F1; /* jne: not equal / not zero */

loc_002E27DA: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E27E7; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_002E27E2: ;
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */

loc_002E27E7: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E27F1; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_002E27EC: ;
    MEMF(ecx + 0x14) = xmm1.f[0]; /* movss */

loc_002E27F1: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E2800
 * Original: 0x002E2800 - 0x002E288C (140 bytes, 37 insns)
 * Folder: ai (match: xbox-demo 0x0025A950, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E2800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E2800: ;
    eax = MEM32(0x758D70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E284A; /* je: equal / zero */

loc_002E2821: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002E284A; /* je: equal / zero */

loc_002E2826: ;
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E284A; /* je: equal / zero */

loc_002E2830: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002E2843; /* je: equal / zero */

loc_002E283B: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002E2843; /* je: equal / zero */

loc_002E2840: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002E284A; /* jne: not equal / not zero */

loc_002E2843: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    goto loc_002E284D;

loc_002E284A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_002E284D: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E2890
 * Original: 0x002E2890 - 0x002E291C (140 bytes, 37 insns)
 * Folder: ai (match: xbox-demo 0x0025A9E0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E2890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E2890: ;
    eax = MEM32(0x758D70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E28DA; /* je: equal / zero */

loc_002E28B1: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002E28DA; /* je: equal / zero */

loc_002E28B6: ;
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E28DA; /* je: equal / zero */

loc_002E28C0: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002E28D3; /* je: equal / zero */

loc_002E28CB: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002E28D3; /* je: equal / zero */

loc_002E28D0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002E28DA; /* jne: not equal / not zero */

loc_002E28D3: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    goto loc_002E28DD;

loc_002E28DA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_002E28DD: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E2920
 * Original: 0x002E2920 - 0x002E298D (109 bytes, 39 insns)
 * Folder: ai (match: xbox-demo 0x0025AA70, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E2920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E2920: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E2943u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E2943: ;
    edi = eax;
    PUSH32(esp, 0x002E294Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E294A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002E2983; /* je: equal / zero */

loc_002E2950: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002E2983; /* je: equal / zero */

loc_002E2955: ;
    edx = MEM32(esi + 0x18);
    edx = MEM32(edx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E2983; /* je: equal / zero */

loc_002E295F: ;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(edx + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_002E297C; /* je: equal / zero */

loc_002E296D: ;
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(edx + 8) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002E297C: ;
    eax = ~eax;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 8) = ecx;

loc_002E2983: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E2990
 * Original: 0x002E2990 - 0x002E2A1B (139 bytes, 39 insns)
 * Folder: ai (match: xbox-demo 0x0025AAE0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E2990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002E2990: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E29B2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E29B2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E29DB; /* je: equal / zero */

loc_002E29B6: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_002E29DB; /* je: equal / zero */

loc_002E29BB: ;
    edx = MEM32(esi + 0x18);
    esi = MEM32(edx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E29DB; /* je: equal / zero */

loc_002E29C5: ;
    ecx = eax;
    eax = MEM32(esi + 8);
    edx = 1;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    goto loc_002E29DD;

loc_002E29DB: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002E29DD: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x20)) >> 32) & 1);
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E2A20
 * Original: 0x002E2A20 - 0x002E2A97 (119 bytes, 33 insns)
 * Folder: ai (match: xbox-demo 0x0025AB70, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E2A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E2A20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002E2A26u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E2A26: ;
    esi = MEM32(0x758E34);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E2A34; /* jne: not equal / not zero */

loc_002E2A30: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002E2A59;

loc_002E2A34: ;
    ecx = MEM32(esi + 0x68);
    edx = ecx;
    edx = edx >> 0xE;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E2A4C; /* jne: not equal / not zero */

loc_002E2A44: ;
    ecx = ecx | 0x4000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002E2A56;

loc_002E2A4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E2A59; /* jne: not equal / not zero */

loc_002E2A50: ;
    ecx = ecx & 0xFFFFBFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002E2A56: ;
    MEM32(esi + 0x68) = ecx;

loc_002E2A59: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E2AA0
 * Original: 0x002E2AA0 - 0x002E2DCC (812 bytes, 273 insns)
 * Folder: ai (between: 0x002E2A20 and 0x002E2E80)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E2AA0(void)
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

loc_002E2AA0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E2AB5; /* jne: not equal / not zero */

loc_002E2AAF: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002E2AB5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E2DC2; /* je: equal / zero */

loc_002E2AC5: ;
    ecx = MEM32(ecx + 0x18);
    ebp = MEM32(ecx + 0x18);
    edx = MEM32(ebp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002E2AE3; /* jbe: below or equal (unsigned <=) */

loc_002E2AD4: ;
    esi = MEM32(ebp);

loc_002E2AD7: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E2AE3; /* je: equal / zero */

loc_002E2ADB: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E2AD7; /* jb: below (unsigned <) */

loc_002E2AE3: ;
    edx = MEM32(ebp);
    ebx = ecx + ecx * 2;
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebx + edx;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E2B4B; /* je: equal / zero */

loc_002E2AFA: ;
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002E2DC4; /* ja: above (unsigned >) */

loc_002E2B07: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x2E2DCC); /* switch: 7 entries, 5 targets */
    if (_jt == 0x002E2B0Eu) goto loc_002E2B0E;
    if (_jt == 0x002E2B20u) goto loc_002E2B20;
    if (_jt == 0x002E2B44u) goto loc_002E2B44;
    if (_jt == 0x002E2BE7u) goto loc_002E2BE7;
    if (_jt == 0x002E2DA6u) goto loc_002E2DA6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002E2B0E: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E2B4B; /* je: equal / zero */

loc_002E2B15: ;
    eax = MEM32(edx + 8);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002E2B20: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E2B4B; /* je: equal / zero */

loc_002E2B27: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002E2B2Eu); RECOMP_ABI_CALL(0x000EEA00u, sub_000EEA00); /* call 0x000EEA00 */

loc_002E2B2E: ;
    ecx = MEM32(ebp);
    edx = MEM32(ebx + ecx + 4);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(edx + eax + 8);
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002E2B44: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E2B55; /* jne: not equal / not zero */

loc_002E2B4B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002E2B55: ;
    xmm0 = XMM_SCALAR(MEMF(0x429410)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002E2BB8; /* jl: less (signed <) */

loc_002E2B64: ;
    eax = MEM32(esp + 0x14);
    ebx = esi + -3;
    edx = 2;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002E2B73: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax + -16); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E2B80; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + -16)) */

loc_002E2B79: ;
    xmm0 = XMM_SCALAR(MEMF(eax + -16)); /* movss */
    edi = ecx;

loc_002E2B80: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E2B8C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_002E2B85: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    edi = edx + -1;

loc_002E2B8C: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E2B99; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x10)) */

loc_002E2B92: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    edi = edx;

loc_002E2B99: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x20); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E2BA7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x20)) */

loc_002E2B9F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    edi = edx + 1;

loc_002E2BA7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E2B73; /* jb: below (unsigned <) */

loc_002E2BB4: ;
    edx = MEM32(esp + 0x14);

loc_002E2BB8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002E2BD8; /* jae: above or equal (unsigned >=) */

loc_002E2BBC: ;
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + edx + 4;

loc_002E2BC5: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E2BD0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_002E2BCA: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    edi = ecx;

loc_002E2BD0: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E2BC5; /* jb: below (unsigned <) */

loc_002E2BD8: ;
    POP32(esp, esi);
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(edi + edx + 8);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002E2BE7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E2C1E; /* jne: not equal / not zero */

loc_002E2BEC: ;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(ecx + 0xC);
    edx = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;

loc_002E2C0B: ;
    ebp = esp + 0x1C;
    eax = ebp;
    ecx = ebp;
    MEM32(esp + 0x10) = ebp;
    PUSH32(esp, 0x002E2C1Cu); RECOMP_ABI_CALL(0x00030920u, sub_00030920); /* call 0x00030920 */

loc_002E2C1C: ;
    goto loc_002E2C93;

loc_002E2C1E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E2C44; /* jne: not equal / not zero */

loc_002E2C23: ;
    eax = MEM32(esp + 0x18);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 8);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    goto loc_002E2C0B;

loc_002E2C44: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(ecx + 0x14);
    eax = MEM32(edx + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    ecx = esp + 0x1C;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    edx = ecx;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x002E2C8Bu); RECOMP_ABI_CALL(0x0002C2D0u, sub_0002C2D0); /* call 0x0002C2D0 */

loc_002E2C8B: ;
    ebp = esp + 0x1C;
    MEM32(esp + 0x10) = ebp;

loc_002E2C93: ;
    esi = MEM32(esi + 8);
    xmm5 = XMM_SCALAR(MEMF(0x4293C8)); /* movss */
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002E2D8C; /* jbe: below or equal (unsigned <=) */

loc_002E2CAB: ;
    ebx = MEM32(esp + 0x14);
    xmm6 = XMM_ZERO(); /* xorps self = zero */

loc_002E2CB2: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E2D8C; /* je: equal / zero */

loc_002E2CBD: ;
    ecx = MEM32(esp + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E2CD4; /* je: equal / zero */

loc_002E2CC5: ;
    ebp = ZX16(MEM16(ebx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ebp (32-bit) */
    ebp = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_002E2D80; /* je: equal / zero */

loc_002E2CD4: ;
    eax = MEM32(eax + 0xC);
    ecx = MEM32(esp + 0x2C);
    ecx = MEM32(ecx + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x34); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x38); /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(ecx + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm6.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002E2D44; /* jnp: not parity */

loc_002E2D2E: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_002E2D44: ;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E2D80; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm5.f[0]) */

loc_002E2D7B: ;
    xmm5 = xmm0; /* movaps */
    edi = edx;

loc_002E2D80: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E2CB2; /* jb: below (unsigned <) */

loc_002E2D8C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E2DC4; /* je: equal / zero */

loc_002E2D93: ;
    edx = MEM32(esp + 0x14);
    POP32(esp, esi);
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(edi + edx + 8);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002E2DA6: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002E2B4B; /* jae: above or equal (unsigned >=) */

loc_002E2DB3: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + edx + 8);
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002E2DC2: ;
    eax = edx;

loc_002E2DC4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002E2DF0
 * Original: 0x002E2DF0 - 0x002E2E80 (144 bytes, 54 insns)
 * Folder: ai (between: 0x002E2A20 and 0x002E2E80)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E2DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E2DF0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x758D48);
    ecx = MEM32(eax + 0x696508);
    ecx = MEM32(ecx + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x18);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = MEM32(eax + 0x696528);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax + 0x696528;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_002E2E40; /* jbe: below or equal (unsigned <=) */

loc_002E2E2E: ;
    ebx = MEM32(ebx);

loc_002E2E30: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E2E3C; /* je: equal / zero */

loc_002E2E34: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E2E30; /* jb: below (unsigned <) */

loc_002E2E3C: ;
    ebx = MEM32(esp + 0x10);

loc_002E2E40: ;
    esi = MEM32(ebx);
    ecx = ecx + ecx * 2;
    ecx = MEM32(esi + ecx * 4 + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edi * 8 + 0x686428) = 1;
    MEM32(edi * 8 + 0x68642C) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x758D48) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebp);
    MEM32(edx) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E2E2E
 * Original: 0x002E2E2E - 0x002E2E80 (82 bytes, 34 insns)
 * Folder: ai (between: 0x002E2A20 and 0x002E2E80)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E2E2E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E2E2E: ;
    ebx = MEM32(ebx);

loc_002E2E30: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E2E3C; /* je: equal / zero */

loc_002E2E34: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E2E30; /* jb: below (unsigned <) */

loc_002E2E3C: ;
    ebx = MEM32(esp + 0x10);
    esi = MEM32(ebx);
    ecx = ecx + ecx * 2;
    ecx = MEM32(esi + ecx * 4 + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edi * 8 + 0x686428) = 1;
    MEM32(edi * 8 + 0x68642C) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x758D48) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebp);
    MEM32(edx) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E2E80
 * Original: 0x002E2E80 - 0x002E2EF6 (118 bytes, 34 insns)
 * Folder: ai (match: xbox-demo 0x0025AFE0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E2E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E2E80: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E2EA4u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E2EA4: ;
    edi = eax;
    PUSH32(esp, 0x002E2EABu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E2EAB: ;
    edx = MEM32(0x758D48);
    ecx = MEM32(edx + 0x696508);
    ebx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x758D48) = edx;
    edx = MEM32(edx + 0x696528);
    PUSH32(esp, eax);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = edx;
    MEM32(0x758D4C) = ebx;
    PUSH32(esp, 0x002E2EE2u); RECOMP_ABI_CALL(0x002E2AA0u, sub_002E2AA0); /* call 0x002E2AA0 */

loc_002E2EE2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E2EE8u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002E2EE8: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E2F00
 * Original: 0x002E2F00 - 0x002E2F6F (111 bytes, 52 insns)
 * Folder: ai (match: xbox-demo 0x0025B060, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E2F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E2F00: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002E2F5E; /* je: equal / zero */

loc_002E2F0A: ;
    eax = MEM32(ebx + 0x18);
    esi = MEM32(eax + 0x18);
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002E2F2C; /* jbe: below or equal (unsigned <=) */

loc_002E2F19: ;
    edx = MEM32(esi);
    goto loc_002E2F20;

    /* nop */

loc_002E2F20: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E2F2C; /* je: equal / zero */

loc_002E2F24: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E2F20; /* jb: below (unsigned <) */

loc_002E2F2C: ;
    edx = MEM32(esi);
    ecx = eax + eax * 2;
    esi = MEM32(edx + ecx * 4 + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = edx + ecx * 4;
    if (CMP_EQ(_fa, _fb)) goto loc_002E2F5C; /* je: equal / zero */

loc_002E2F3C: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E2F5C; /* je: equal / zero */

loc_002E2F43: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002E2F5C; /* jbe: below or equal (unsigned <=) */

loc_002E2F49: ;
    ecx = esi + 8;
    /* nop */

loc_002E2F50: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E2F61; /* je: equal / zero */

loc_002E2F54: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E2F50; /* jb: below (unsigned <) */

loc_002E2F5C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002E2F5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002E2F61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E2F5C; /* je: equal / zero */

loc_002E2F65: ;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + esi + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E2F70
 * Original: 0x002E2F70 - 0x002E2FD5 (101 bytes, 26 insns)
 * Folder: ai (match: xbox-demo 0x0025B0D0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E2F70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E2F70: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    ecx = MEM32(0x758D6C);
    MEM32(esp) = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x696528);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696528);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D70) = ecx;
    MEM32(0x758D4C) = edx;
    PUSH32(esp, 0x002E2FC2u); RECOMP_ABI_CALL(0x002E2F00u, sub_002E2F00); /* call 0x002E2F00 */

loc_002E2FC2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E2FC8u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002E2FC8: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E2FE0
 * Original: 0x002E2FE0 - 0x002E3013 (51 bytes, 14 insns)
 * Folder: ai (match: xbox-demo 0x0025B140, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E2FE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E2FE0: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696528);
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002E3008u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002E3008: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E3020
 * Original: 0x002E3020 - 0x002E30FC (220 bytes, 91 insns)
 * Folder: ai (match: xbox-demo 0x0025B180, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E3020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E3020: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E3035; /* jne: not equal / not zero */

loc_002E302D: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002E3035: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E3045; /* jne: not equal / not zero */

loc_002E303E: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002E3045: ;
    PUSH32(esp, edi);
    eax = 0x44A528;
    PUSH32(esp, 0x002E3050u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_002E3050: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E30F5; /* jne: not equal / not zero */

loc_002E305C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    esi = 0x44A528;
    PUSH32(esp, 0x002E3069u); RECOMP_ABI_CALL(0x000E0030u, sub_000E0030); /* call 0x000E0030 */

loc_002E3069: ;
    MEM32(ebx) = edi;
    edi = MEM32(edi + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E30F4; /* je: equal / zero */

loc_002E307C: ;
    edx = MEM32(edi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    MEM32(esp + 0x1C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E30F4; /* je: equal / zero */

loc_002E3087: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), ebp (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_BE(_fa, _fb)) goto loc_002E30F4; /* jbe: below or equal (unsigned <=) */

loc_002E3090: ;
    ecx = MEM32(edx);

loc_002E3092: ;
    esi = MEM32(esp + 0x18);
    edi = MEM32(ecx + ebp);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    eax = ecx + ebp;
    if (CMP_NE(_fa, _fb)) goto loc_002E30E1; /* jne: not equal / not zero */

loc_002E30A0: ;
    esi = MEM32(eax + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002E30E1; /* jbe: below or equal (unsigned <=) */

loc_002E30A9: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002E30B0;

    /* nop */

loc_002E30B0: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + esi + 8);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002E30C3u); RECOMP_ABI_CALL(0x002E3020u, sub_002E3020); /* call 0x002E3020 */

loc_002E30C3: ;
    ebx = eax;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(eax);
    edx = MEM32(ecx + ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx + ebp;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E30B0; /* jb: below (unsigned <) */

loc_002E30DD: ;
    edx = MEM32(esp + 0x1C);

loc_002E30E1: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(edx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(_fa, _fb)) goto loc_002E3092; /* jb: below (unsigned <) */

loc_002E30F4: ;
    POP32(esp, esi);

loc_002E30F5: ;
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E3100
 * Original: 0x002E3100 - 0x002E31C8 (200 bytes, 48 insns)
 * Folder: ai (match: xbox-demo 0x0025B260, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E3100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E3100: ;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x68642C);
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E312Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E3127u); } /* indirect call */
    }

loc_002E312E: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(eax + 0x6964E8);
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696528);
    MEM32(0x758D4C) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_002E3162; /* jne: not equal / not zero */

loc_002E3160: ;
    ecx = MEM32(eax);

loc_002E3162: ;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(0x44A52C) = 0;
    PUSH32(esp, 0x002E3174u); RECOMP_ABI_CALL(0x002E3020u, sub_002E3020); /* call 0x002E3020 */

loc_002E3174: ;
    edx = MEM32(0x758D48);
    ecx = MEM32(0x44A52C);
    eax = edx + 0x696528;
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 0x40);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x44A52C) = 0;
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E31D0
 * Original: 0x002E31D0 - 0x002E337E (430 bytes, 153 insns)
 * Folder: ai (match: xbox-demo 0x0025B330, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E31D0(void)
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

loc_002E31D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    eax = 0x44A528;
    PUSH32(esp, 0x002E31E1u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_002E31E1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002E337B; /* jne: not equal / not zero */

loc_002E31ED: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    esi = 0x44A528;
    PUSH32(esp, 0x002E31FAu); RECOMP_ABI_CALL(0x000E0030u, sub_000E0030); /* call 0x000E0030 */

loc_002E31FA: ;
    ecx = MEM32(esp + 0x34);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_002E3215; /* jle: less or equal (signed <=) */

loc_002E3207: ;
    edx = MEM32(esp + 0x28);
    _fa = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002E3215; /* je: equal / zero */

loc_002E3210: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_002E3207; /* jl: less (signed <) */

loc_002E3215: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002E32CE; /* jne: not equal / not zero */

loc_002E321D: ;
    edx = MEM32(esp + 0x24);
    esi = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E322Fu); RECOMP_ABI_CALL(0x00040590u, sub_00040590); /* call 0x00040590 */

loc_002E322F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E32CE; /* je: equal / zero */

loc_002E323A: ;
    eax = MEM32(0x758E14);
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_002E327E; /* jne: not equal / not zero */

loc_002E324A: ;
    fp_push(MEMF(eax + 0x30)); /* fld float */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(0x758E18) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_002E32C8;

loc_002E327E: ;
    fp_push(MEMF(eax + 0x30)); /* fld float */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x758E18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_002E32CE; /* jbe: below or equal (unsigned <=) */

loc_002E32BA: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(0x758E18) = xmm0.f[0]; /* movss */

loc_002E32C8: ;
    MEM32(0x758E14) = edi;

loc_002E32CE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E337A; /* je: equal / zero */

loc_002E32D6: ;
    edi = MEM32(edi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E337A; /* je: equal / zero */

loc_002E32E1: ;
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E3379; /* je: equal / zero */

loc_002E32ED: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_002E3379; /* jle: less or equal (signed <=) */

loc_002E3300: ;
    ecx = MEM32(ebp);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);

loc_002E3306: ;
    edx = MEM32(esi + ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = esi + ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002E3365; /* jne: not equal / not zero */

loc_002E3312: ;
    edx = MEM32(eax + 8);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_002E3365; /* jbe: below or equal (unsigned <=) */

loc_002E331B: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_002E3320: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x30);
    eax = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + edi + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002E3350u); RECOMP_ABI_CALL(0x002E31D0u, sub_002E31D0); /* call 0x002E31D0 */

loc_002E3350: ;
    ecx = MEM32(ebp);
    edx = MEM32(esi + ecx + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + ecx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x10)) >> 32) & 1);
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002E3320; /* jb: below (unsigned <) */

loc_002E3365: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(ebp + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xC)) >> 32) & 1);
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002E3306; /* jl: less (signed <) */

loc_002E3378: ;
    POP32(esp, ebx);

loc_002E3379: ;
    POP32(esp, ebp);

loc_002E337A: ;
    POP32(esp, esi);

loc_002E337B: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002E3380
 * Original: 0x002E3380 - 0x002E3411 (145 bytes, 45 insns)
 * Folder: ai (match: xbox-demo 0x0025B4E0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E3380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E3380: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E33A4u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E33A4: ;
    edi = eax;
    PUSH32(esp, 0x002E33ABu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E33AB: ;
    ebx = eax;
    PUSH32(esp, 0x002E33B2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E33B2: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(0x44A52C) = edx;
    MEM32(0x758E14) = edx;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696528);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002E33F7u); RECOMP_ABI_CALL(0x002E31D0u, sub_002E31D0); /* call 0x002E31D0 */

loc_002E33F7: ;
    ecx = MEM32(0x758E14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002E3403u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002E3403: ;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E3420
 * Original: 0x002E3420 - 0x002E34ED (205 bytes, 61 insns)
 * Folder: ai (match: xbox-demo 0x0025B580, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E3420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E3420: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E3448u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E3448: ;
    ebx = MEM32(0x758D4C);
    edi = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ebx;
    ebx = MEM32(eax + 0x696528);
    MEM32(0x758D48) = eax;
    PUSH32(esp, 0x002E346Fu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E346F: ;
    ebp = eax;
    PUSH32(esp, 0x002E3476u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E3476: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x002E347Fu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E347F: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(0x44A52C) = edx;
    MEM32(0x758E14) = edx;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696528);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = ebx;
    PUSH32(esp, 0x002E34D0u); RECOMP_ABI_CALL(0x002E31D0u, sub_002E31D0); /* call 0x002E31D0 */

loc_002E34D0: ;
    eax = MEM32(0x758E14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E34DBu); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002E34DB: ;
    eax = MEM32(esp + 0x40);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E34F0
 * Original: 0x002E34F0 - 0x002E3506 (22 bytes, 11 insns)
 * Folder: ai (between: 0x002E3420 and 0x002E3510)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002E34F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E34F0: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E3503; /* je: equal / zero */

loc_002E34F7: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E3503; /* je: equal / zero */

loc_002E34FE: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

loc_002E3503: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E3510
 * Original: 0x002E3510 - 0x002E3563 (83 bytes, 26 insns)
 * Folder: ai (match: xbox-demo 0x0025B670, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E3510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E3510: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E3550; /* je: equal / zero */

loc_002E3534: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E3550; /* je: equal / zero */

loc_002E353B: ;
    eax = MEM32(eax);
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E3545u); RECOMP_ABI_CALL(0x002E4020u, sub_002E4020); /* call 0x002E4020 */

loc_002E3545: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002E3550: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E3558u); RECOMP_ABI_CALL(0x002E4020u, sub_002E4020); /* call 0x002E4020 */

loc_002E3558: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E3570
 * Original: 0x002E3570 - 0x002E39F3 (1155 bytes, 361 insns)
 * Folder: ai (between: 0x002E3510 and 0x002E3A00)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E3570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E3570: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x46B1A4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_002E3589; /* jne: not equal / not zero */

loc_002E3584: ;
    PUSH32(esp, 0x002E3589u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_002E3589: ;
    edx = 0xFA0;
    ecx = eax;
    PUSH32(esp, 0x002E3595u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_002E3595: ;
    ebx = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x2C) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_002E35A9; /* jne: not equal / not zero */

loc_002E35A4: ;
    PUSH32(esp, 0x002E35A9u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_002E35A9: ;
    edx = 0xFA0;
    ecx = eax;
    PUSH32(esp, 0x002E35B5u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_002E35B5: ;
    MEM32(esp + 8) = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E35C7; /* jne: not equal / not zero */

loc_002E35C2: ;
    PUSH32(esp, 0x002E35C7u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_002E35C7: ;
    edx = 0xFA0;
    ecx = eax;
    PUSH32(esp, 0x002E35D3u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_002E35D3: ;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E35E5; /* jne: not equal / not zero */

loc_002E35E0: ;
    PUSH32(esp, 0x002E35E5u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_002E35E5: ;
    edx = 0xFA0;
    ecx = eax;
    PUSH32(esp, 0x002E35F1u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_002E35F1: ;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E3603; /* jne: not equal / not zero */

loc_002E35FE: ;
    PUSH32(esp, 0x002E3603u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_002E3603: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0xFA0;
    ecx = eax;
    PUSH32(esp, 0x002E3611u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_002E3611: ;
    edi = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x24) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_002E3625; /* jne: not equal / not zero */

loc_002E3620: ;
    PUSH32(esp, 0x002E3625u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_002E3625: ;
    edx = 0xFA0;
    ecx = eax;
    PUSH32(esp, 0x002E3631u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_002E3631: ;
    ecx = MEM32(esp + 0x68);
    edx = MEM32(esp + 0x10);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x429410)); /* movss */
    MEM32(eax) = ecx;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x14);
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEM32(eax) = 0xFFFFFFFFu;
    eax = 4;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esp + 0x20);
    ecx = edi + -4;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x30) = ebp;
    MEM32(esp + 0x1C) = ebp;
    esi = 1;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x68) = ecx;
    MEM32(esp + 0x44) = eax;
    goto loc_002E3690;

    /* nop */
    edi = edi;

loc_002E3690: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E38D4; /* jne: not equal / not zero */

loc_002E369C: ;
    edi = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    xmm0 = xmm1; /* movaps */
    if (CMP_L(_fas, _fbs)) goto loc_002E36F3; /* jl: less (signed <) */

loc_002E36AA: ;
    edx = esi + -3;
    ecx = edi + 8;

loc_002E36B0: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + -8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E36BD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + -8)) */

loc_002E36B6: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + -8)); /* movss */
    ebp = eax;

loc_002E36BD: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + -4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E36CB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + -4)) */

loc_002E36C3: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + -4)); /* movss */
    ebp = eax + 1;

loc_002E36CB: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E36D7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_002E36D0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    ebp = eax + 2;

loc_002E36D7: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E36E5; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 4)) */

loc_002E36DD: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ebp = eax + 3;

loc_002E36E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E36B0; /* jb: below (unsigned <) */

loc_002E36EF: ;
    MEM32(esp + 0x18) = ebp;

loc_002E36F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002E370D; /* jae: above or equal (unsigned >=) */

loc_002E36F7: ;
    _fca = xmm0.f[0]; _fcb = MEMF(edi + eax * 4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E3704; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + eax * 4)) */

loc_002E36FD: ;
    xmm0 = XMM_SCALAR(MEMF(edi + eax * 4)); /* movss */
    ebp = eax;

loc_002E3704: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E36F7; /* jb: below (unsigned <) */

loc_002E3709: ;
    MEM32(esp + 0x18) = ebp;

loc_002E370D: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(edx + ebp * 4);
    ecx = MEM32(esp + 0x68);
    ebx = MEM32(esp + 0x44);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x14);
    edi = MEM32(eax + ebp * 4);
    eax = MEM32(esp + 0x38);
    MEM32(ebx + eax) = edi;
    ebx = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x38) = eax;
    eax = MEM32(edx + esi * 4);
    MEM32(edx + ebp * 4) = eax;
    eax = MEM32(esp + 0x10);
    edi = MEM32(eax + esi * 4);
    edx = eax + esi * 4;
    MEM32(eax + ebp * 4) = edi;
    eax = MEM32(esp + 0x14);
    edi = MEM32(eax + esi * 4);
    MEM32(eax + ebp * 4) = edi;
    eax = MEM32(ecx);
    MEM32(esp + 0x68) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x6C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x6C) (32-bit) */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_002E3776; /* jne: not equal / not zero */

loc_002E376E: ;
    MEM32(esp + 0x30) = 1;

loc_002E3776: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E38C4; /* je: equal / zero */

loc_002E3781: ;
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E38C4; /* je: equal / zero */

loc_002E378C: ;
    ebx = MEM32(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E38C4; /* je: equal / zero */

loc_002E3796: ;
    edi = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002E38C4; /* jbe: below or equal (unsigned <=) */

loc_002E37A3: ;
    ebp = MEM32(esp + 0x60);
    ecx = ebx;
    /* nop */

loc_002E37B0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E37C1; /* je: equal / zero */

loc_002E37B4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E37B0; /* jb: below (unsigned <) */

loc_002E37BC: ;
    goto loc_002E38C0;

loc_002E37C1: ;
    ecx = eax + eax * 2;
    ebx = ebx + ecx * 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x54) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E38C0; /* je: equal / zero */

loc_002E37D5: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), eax (32-bit) */
    MEM32(esp + 0x40) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_002E38C0; /* jbe: below or equal (unsigned <=) */

loc_002E37E2: ;
    ecx = MEM32(esp + 0x48);
    edi = MEM32(esp + 0x68);
    ebp = MEM32(esp + 0x1C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x50) = ecx;

loc_002E3810: ;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(ebx + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E3835; /* je: equal / zero */

loc_002E3823: ;
    edi = MEM32(esp + 0x5C);
    edi = MEM32(edi + 0x18);
    edi = ZX16(MEM16(edi + 0x28));
    edi = edi & ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E38A1; /* je: equal / zero */

loc_002E3835: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002E384E; /* jbe: below or equal (unsigned <=) */

loc_002E383B: ;
    edi = MEM32(eax + 8);
    edi = edi;

loc_002E3840: ;
    ebx = MEM32(esp + 0x24);
    _fa = (uint32_t)(MEM32(ebx + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + ecx * 4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E389D; /* je: equal / zero */

loc_002E3849: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E3840; /* jb: below (unsigned <) */

loc_002E384E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002E386E; /* jbe: below or equal (unsigned <=) */

loc_002E3854: ;
    edi = MEM32(eax + 8);
    ebx = MEM32(esp + 0x28);
    goto loc_002E3860;

    /* nop */

loc_002E3860: ;
    _fa = (uint32_t)(MEM32(ebx + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + ecx * 4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E3906; /* je: equal / zero */

loc_002E3869: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E3860; /* jb: below (unsigned <) */

loc_002E386E: ;
    ecx = MEM32(eax + 8);
    edi = MEM32(esp + 0x4C);
    MEM32(edi + edx) = ecx;
    ecx = MEM32(esp + 0x3C);
    edi = MEM32(esp + 0x34);
    xmm0 = XMM_SCALAR(MEMF(ecx + edi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    ecx = MEM32(esp + 0x50);
    MEMF(edx) = xmm0.f[0]; /* movss */
    eax = ebp + -1;
    MEM32(ecx + edx) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002E389D: ;
    ebx = MEM32(esp + 0x54);

loc_002E38A1: ;
    eax = MEM32(esp + 0x40);
    edi = MEM32(esp + 0x2C);
    ecx = MEM32(ebx + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x2C) = edi;
    if (CMP_B(_fa, _fb)) goto loc_002E3810; /* jb: below (unsigned <) */

loc_002E38C0: ;
    ebp = MEM32(esp + 0x18);

loc_002E38C4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E3690; /* jne: not equal / not zero */

loc_002E38CC: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E393F; /* je: equal / zero */

loc_002E38D4: ;
    eax = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x24);
    esi = MEM32(esp + 0x20);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002E3902; /* jl: less (signed <) */

loc_002E38E7: ;
    goto loc_002E38F0;

    /* nop */

loc_002E38F0: ;
    edx = MEM32(ebx + eax * 4);
    edi = MEM32(esp + 0x64);
    MEM32(edi + ecx * 4) = edx;
    eax = MEM32(esi + eax * 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002E38F0; /* jge: greater or equal (signed >=) */

loc_002E3902: ;
    ebp = ecx;
    goto loc_002E3949;

loc_002E3906: ;
    edi = MEM32(esp + 0x34);
    ebx = MEM32(esp + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(ebx + edi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    eax = MEM32(esp + 0x10);
    xmm2 = XMM_SCALAR(MEMF(eax + ecx * 4)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E389D; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_002E392B: ;
    edi = MEM32(esp + 0x14);
    MEMF(eax + ecx * 4) = xmm0.f[0]; /* movss */
    eax = ebp + -1;
    MEM32(edi + ecx * 4) = eax;
    goto loc_002E389D;

loc_002E393F: ;
    esi = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x24);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002E3949: ;
    edi = MEM32(esp + 0x34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E3967; /* je: equal / zero */

loc_002E3951: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E395F; /* jne: not equal / not zero */

loc_002E395A: ;
    PUSH32(esp, 0x002E395Fu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_002E395F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002E3967u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E3964u); } /* indirect call */
    }

loc_002E3967: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E3975; /* jne: not equal / not zero */

loc_002E3970: ;
    PUSH32(esp, 0x002E3975u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_002E3975: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002E3981u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E397Eu); } /* indirect call */
    }

loc_002E3981: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E399B; /* je: equal / zero */

loc_002E3985: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E3993; /* jne: not equal / not zero */

loc_002E398E: ;
    PUSH32(esp, 0x002E3993u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_002E3993: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002E399Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E3998u); } /* indirect call */
    }

loc_002E399B: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_002E39AB; /* jne: not equal / not zero */

loc_002E39A6: ;
    PUSH32(esp, 0x002E39ABu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_002E39AB: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002E39B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E39B4u); } /* indirect call */
    }

loc_002E39B7: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E39C5; /* jne: not equal / not zero */

loc_002E39C0: ;
    PUSH32(esp, 0x002E39C5u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_002E39C5: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002E39D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E39CEu); } /* indirect call */
    }

loc_002E39D1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E39EB; /* je: equal / zero */

loc_002E39D5: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E39E3; /* jne: not equal / not zero */

loc_002E39DE: ;
    PUSH32(esp, 0x002E39E3u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_002E39E3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002E39EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E39E8u); } /* indirect call */
    }

loc_002E39EB: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E3A00
 * Original: 0x002E3A00 - 0x002E3ADA (218 bytes, 58 insns)
 * Folder: ai (match: xbox-demo 0x0025BB20, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E3A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E3A00: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    ebx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D4C);
    esi = MEM32(eax * 8 + 0x686414);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D68) = ecx;
    SET_LO16(ecx, MEM16(eax * 8 + 0x686428));
    MEM32(0x758D4C) = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    edx = SX16(LO16(ecx));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x43D06C); PUSH32(esp, 0x002E3A6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E3A64u); } /* indirect call */
    }

loc_002E3A6B: ;
    eax = MEM32(0x758D48);
    edx = MEM32(0x758D4C);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696528);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(0x758D4C) = edx;
    PUSH32(esp, 0x002E3A95u); RECOMP_ABI_CALL(0x002E3570u, sub_002E3570); /* call 0x002E3570 */

loc_002E3A95: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x44);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E3AE0
 * Original: 0x002E3AE0 - 0x002E3B4D (109 bytes, 49 insns)
 * Folder: ai (between: 0x002E3A00 and 0x002E3D50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002E3AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E3AE0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002E3B11; /* je: equal / zero */

loc_002E3AF0: ;
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E3B11; /* je: equal / zero */

loc_002E3AF7: ;
    edi = ebx;
    eax = ebp;
    PUSH32(esp, 0x002E3B00u); RECOMP_ABI_CALL(0x000235E0u, sub_000235E0); /* call 0x000235E0 */

loc_002E3B00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E3B11; /* je: equal / zero */

loc_002E3B04: ;
    edi = esi;
    ecx = eax;
    PUSH32(esp, 0x002E3B0Du); RECOMP_ABI_CALL(0x00023620u, sub_00023620); /* call 0x00023620 */

loc_002E3B0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E3B3E; /* jne: not equal / not zero */

loc_002E3B11: ;
    edi = ebx;
    eax = esi;
    PUSH32(esp, 0x002E3B1Au); RECOMP_ABI_CALL(0x000235E0u, sub_000235E0); /* call 0x000235E0 */

loc_002E3B1A: ;
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002E3B3C; /* jbe: below or equal (unsigned <=) */

loc_002E3B23: ;
    eax = MEM32(eax + 4);
    esi = eax + 8;
    /* nop */

loc_002E3B30: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E3B42; /* je: equal / zero */

loc_002E3B34: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E3B30; /* jb: below (unsigned <) */

loc_002E3B3C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002E3B3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002E3B42: ;
    POP32(esp, edi);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = ecx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002E3B50
 * Original: 0x002E3B50 - 0x002E3BA9 (89 bytes, 43 insns)
 * Folder: ai (between: 0x002E3A00 and 0x002E3D50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E3B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E3B50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    ebx = ecx;
    PUSH32(esp, 0x002E3B61u); RECOMP_ABI_CALL(0x000235E0u, sub_000235E0); /* call 0x000235E0 */

loc_002E3B61: ;
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002E3B7C; /* jbe: below or equal (unsigned <=) */

loc_002E3B6A: ;
    eax = MEM32(eax + 4);
    esi = eax + 8;

loc_002E3B70: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E3B91; /* je: equal / zero */

loc_002E3B74: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E3B70; /* jb: below (unsigned <) */

loc_002E3B7C: ;
    eax = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ~ebx;
    SET_LO16(ebx, LO16(ebx) & MEM16(ecx));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ecx) = LO16(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002E3B91: ;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x18);
    ebx = ~ebx;
    SET_LO16(ebx, LO16(ebx) & MEM16(ecx));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ecx) = LO16(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E3BB0
 * Original: 0x002E3BB0 - 0x002E3C0E (94 bytes, 29 insns)
 * Folder: ai (between: 0x002E3A00 and 0x002E3D50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E3BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E3BB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E3BB8u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E3BB8: ;
    esi = eax;
    PUSH32(esp, 0x002E3BBFu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E3BBF: ;
    edx = MEM32(0x758D48);
    ecx = MEM32(edx + 0x696508);
    ebx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(edx + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    MEM32(0x758D48) = edx;
    edx = MEM32(edx + 0x696528);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    eax = edi;
    MEM32(0x758D4C) = ebx;
    PUSH32(esp, 0x002E3C00u); RECOMP_ABI_CALL(0x002E3B50u, sub_002E3B50); /* call 0x002E3B50 */

loc_002E3C00: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E3C10
 * Original: 0x002E3C10 - 0x002E3C47 (55 bytes, 27 insns)
 * Folder: ai (between: 0x002E3A00 and 0x002E3D50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E3C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E3C10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x002E3C19u); RECOMP_ABI_CALL(0x000235E0u, sub_000235E0); /* call 0x000235E0 */

loc_002E3C19: ;
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002E3C34; /* jbe: below or equal (unsigned <=) */

loc_002E3C22: ;
    eax = MEM32(eax + 4);
    esi = eax + 8;

loc_002E3C28: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E3C3C; /* je: equal / zero */

loc_002E3C2C: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E3C28; /* jb: below (unsigned <) */

loc_002E3C34: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ZX16(MEM16(eax));
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002E3C3C: ;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX16(MEM16(ecx));
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E3C50
 * Original: 0x002E3C50 - 0x002E3CF5 (165 bytes, 52 insns)
 * Folder: ai (between: 0x002E3A00 and 0x002E3D50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E3C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E3C50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x758D4C);
    PUSH32(esp, esi);
    esi = MEM32(0x758D48);
    eax = MEM32(esi + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esi + 0x696528);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x696528);
    ebx = esi + 0x696528;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 3;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x002E3C90u); RECOMP_ABI_CALL(0x000235E0u, sub_000235E0); /* call 0x000235E0 */

loc_002E3C90: ;
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002E3CB3; /* jbe: below or equal (unsigned <=) */

loc_002E3C99: ;
    eax = MEM32(eax + 4);
    MEM32(esp + 0x14) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002E3CA3: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E3CEA; /* je: equal / zero */

loc_002E3CAB: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E3CA3; /* jb: below (unsigned <) */

loc_002E3CB3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002E3CB5: ;
    ecx = ZX16(MEM16(ecx));
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp * 8 + 0x68642C) = ebx;
    POP32(esp, edi);
    MEM16(ebp * 8 + 0x686428) = 1;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = esi;
    POP32(esp, esi);
    MEM32(0x758D4C) = ebp;
    POP32(esp, ebp);
    MEM32(ebx) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002E3CEA: ;
    eax = MEM32(esp + 0x14);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002E3CB5;

}

/**
 * sub_002E3D00
 * Original: 0x002E3D00 - 0x002E3D47 (71 bytes, 37 insns)
 * Folder: ai (between: 0x002E3A00 and 0x002E3D50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E3D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E3D00: ;
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x002E3D08u); RECOMP_ABI_CALL(0x000235E0u, sub_000235E0); /* call 0x000235E0 */

loc_002E3D08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E3D0E; /* jne: not equal / not zero */

loc_002E3D0C: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002E3D0E: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002E3D3A; /* jbe: below or equal (unsigned <=) */

loc_002E3D18: ;
    eax = MEM32(eax + 4);
    edx = eax + 8;
    edi = edi;

loc_002E3D20: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E3D31; /* je: equal / zero */

loc_002E3D24: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E3D20; /* jb: below (unsigned <) */

loc_002E3D2C: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002E3D31: ;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E3D3F; /* jne: not equal / not zero */

loc_002E3D3A: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002E3D3F: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E3D50
 * Original: 0x002E3D50 - 0x002E3DB9 (105 bytes, 29 insns)
 * Folder: ai (match: xbox-demo 0x0025BE80, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E3D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E3D50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x758D48);
    ebx = MEM32(esi + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 0x696528);
    ebp = esi + 0x696528;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x002E3D89u); RECOMP_ABI_CALL(0x002E3D00u, sub_002E3D00); /* call 0x002E3D00 */

loc_002E3D89: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi * 8 + 0x68642C) = ebp;
    MEM16(edi * 8 + 0x686428) = 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = edi;
    POP32(esp, edi);
    MEM32(ebp) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(0x758D48) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E3DC0
 * Original: 0x002E3DC0 - 0x002E3E20 (96 bytes, 45 insns)
 * Folder: ai (between: 0x002E3D50 and 0x002E3F30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E3DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E3DC0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x002E3DD3u); RECOMP_ABI_CALL(0x000235E0u, sub_000235E0); /* call 0x000235E0 */

loc_002E3DD3: ;
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002E3DEE; /* jbe: below or equal (unsigned <=) */

loc_002E3DDC: ;
    eax = MEM32(eax + 4);
    esi = eax + 8;

loc_002E3DE2: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E3E05; /* je: equal / zero */

loc_002E3DE6: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E3DE2; /* jb: below (unsigned <) */

loc_002E3DEE: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ecx + 0xC));
    SET_LO8(ebx, ~LO8(ebx));
    POP32(esp, edi);
    SET_LO8(ebx, LO8(ebx) & LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, esi);
    SET_LO8(ebx, LO8(ebx) | LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, ebp);
    MEM8(ecx + 0xC) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002E3E05: ;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, MEM8(ecx + eax + 0xC));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(esp + 0x18));
    SET_LO8(ebx, ~LO8(ebx));
    POP32(esp, edi);
    SET_LO8(ebx, LO8(ebx) & LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, esi);
    SET_LO8(ebx, LO8(ebx) | LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, ebp);
    MEM8(ecx + 0xC) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E3E20
 * Original: 0x002E3E20 - 0x002E3E7D (93 bytes, 29 insns)
 * Folder: ai (between: 0x002E3D50 and 0x002E3F30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E3E20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E3E20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E3E28u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E3E28: ;
    esi = eax;
    PUSH32(esp, 0x002E3E2Fu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E3E2F: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(ecx + 0x696508);
    ebx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(ecx + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696528);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    eax = edi;
    MEM32(0x758D4C) = ebx;
    PUSH32(esp, 0x002E3E6Fu); RECOMP_ABI_CALL(0x002E3DC0u, sub_002E3DC0); /* call 0x002E3DC0 */

loc_002E3E6F: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E3E80
 * Original: 0x002E3E80 - 0x002E3F26 (166 bytes, 52 insns)
 * Folder: ai (between: 0x002E3D50 and 0x002E3F30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E3E80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E3E80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x758D4C);
    PUSH32(esp, esi);
    esi = MEM32(0x758D48);
    eax = MEM32(esi + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esi + 0x696528);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x696528);
    ebx = esi + 0x696528;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 3;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x002E3EC0u); RECOMP_ABI_CALL(0x000235E0u, sub_000235E0); /* call 0x000235E0 */

loc_002E3EC0: ;
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002E3EE3; /* jbe: below or equal (unsigned <=) */

loc_002E3EC9: ;
    eax = MEM32(eax + 4);
    MEM32(esp + 0x14) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002E3ED3: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E3F1B; /* je: equal / zero */

loc_002E3EDB: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E3ED3; /* jb: below (unsigned <) */

loc_002E3EE3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002E3EE5: ;
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0xC);
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp * 8 + 0x68642C) = ebx;
    POP32(esp, edi);
    MEM16(ebp * 8 + 0x686428) = 1;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = esi;
    POP32(esp, esi);
    MEM32(0x758D4C) = ebp;
    POP32(esp, ebp);
    MEM32(ebx) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002E3F1B: ;
    eax = MEM32(esp + 0x14);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002E3EE5;

}

/**
 * sub_002E3F30
 * Original: 0x002E3F30 - 0x002E3FA1 (113 bytes, 29 insns)
 * Folder: ai (match: xbox-demo 0x0025BFE0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E3F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E3F30: ;
    ecx = MEM32(0x758D48);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(esi * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E3F57; /* jne: not equal / not zero */

loc_002E3F4D: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_002E3F5F;

loc_002E3F57: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_002E3F5F: ;
    eax = MEM32(ecx + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(ecx + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    MEM32(0x758D48) = ecx;
    MEM32(0x758D4C) = esi;
    PUSH32(esp, 0x002E3F8Fu); RECOMP_ABI_CALL(0x002E3AE0u, sub_002E3AE0); /* call 0x002E3AE0 */

loc_002E3F8F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E3FB0
 * Original: 0x002E3FB0 - 0x002E4020 (112 bytes, 32 insns)
 * Folder: ai (match: xbox-demo 0x0025C060, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E3FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E3FB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x758D48);
    eax = MEM32(esi + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(esi + 0x696528);
    ebp = esi + 0x696528;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x002E3FEAu); RECOMP_ABI_CALL(0x002E3AE0u, sub_002E3AE0); /* call 0x002E3AE0 */

loc_002E3FEA: ;
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi * 8 + 0x68642C) = ebp;
    MEM16(edi * 8 + 0x686428) = 2;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = edi;
    POP32(esp, edi);
    MEM32(ebp) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(0x758D48) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E4020
 * Original: 0x002E4020 - 0x002E4076 (86 bytes, 23 insns)
 * Folder: ai (between: 0x002E3FB0 and 0x002E4080)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E4020: ;
    SET_LO16(eax, MEM16(0x673786));
    PUSH32(esp, esi);
    esi = MEM32(0x758D48);
    PUSH32(esp, edi);
    SET_LO16(edi, LO16(eax));
    esi = esi + 0x696528;
    ecx = esp + 0xC;
    eax = SX16(LO16(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E4047u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E4040u); } /* indirect call */
    }

loc_002E4047: ;
    eax = MEM32(0x758D4C);
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = LO16(edi);
    MEM32(eax * 8 + 0x68642C) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E4080
 * Original: 0x002E4080 - 0x002E40EE (110 bytes, 27 insns)
 * Folder: ai (match: xbox-demo 0x0025C130, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E4080: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E40AF; /* je: equal / zero */

loc_002E40A4: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E40AF; /* je: equal / zero */

loc_002E40AB: ;
    edx = MEM32(eax);
    goto loc_002E40B1;

loc_002E40AF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002E40B1: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E40F0
 * Original: 0x002E40F0 - 0x002E41D6 (230 bytes, 61 insns)
 * Folder: ai (match: xbox-demo 0x0025C1A0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E40F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E40F0: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x758D48);
    PUSH32(esp, esi);
    esi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D70) = ecx;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = 1;
    _fa = (uint32_t)(MEM16(esi * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 8 + 0x686428), LO16(ecx) (16-bit) */
    MEM32(0x758D68) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_002E413C; /* jne: not equal / not zero */

loc_002E4132: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + 0x696528); /* cvtsi2ss */
    goto loc_002E4144;

loc_002E413C: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x696528)); /* movss */

loc_002E4144: ;
    eax = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0x696528);
    ebx = ebp + 0x696528;
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ebx + 4);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ebx + 8);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E41A3; /* je: equal / zero */

loc_002E4173: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E41A3; /* je: equal / zero */

loc_002E417A: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    ecx = esp + 0x24;
    edi = esp + 0x14;
    PUSH32(esp, 0x002E4191u); RECOMP_ABI_CALL(0x0008AD90u, sub_0008AD90); /* call 0x0008AD90 */

loc_002E4191: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    MEM16(esi * 8 + 0x686428) = 1;
    POP32(esp, edi);
    goto loc_002E41B1;

loc_002E41A3: ;
    MEM32(ebx) = 0;
    MEM16(esi * 8 + 0x686428) = LO16(ecx);

loc_002E41B1: ;
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 8 + 0x68642C) = ebx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = esi;
    POP32(esp, esi);
    MEM32(0x758D48) = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E41E0
 * Original: 0x002E41E0 - 0x002E422A (74 bytes, 19 insns)
 * Folder: ai (between: 0x002E40F0 and 0x002E4300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E41E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E41E0: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4224; /* je: equal / zero */

loc_002E41E7: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4224; /* je: equal / zero */

loc_002E41EE: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x20); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */

loc_002E4224: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002E4230
 * Original: 0x002E4230 - 0x002E42FA (202 bytes, 49 insns)
 * Folder: ai (between: 0x002E40F0 and 0x002E4300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E4230: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D6C);
    edx = MEM32(0x758D48);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    esi = MEM32(esi + 0x14);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x696528);
    MEM32(0x758D70) = eax;
    eax = edx + 0x696528;
    MEM32(esp + 8) = edi;
    edi = MEM32(eax + 4);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(esp + 0xC) = edi;
    edi = MEM32(eax + 8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_002E42C6; /* je: equal / zero */

loc_002E4286: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E42C6; /* je: equal / zero */

loc_002E428D: ;
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x20); /* divss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0xC); /* mulss */
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x10) = xmm1.f[0]; /* movss */

loc_002E42C6: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = 1;
    eax = MEM32(esp + 0x18);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E4300
 * Original: 0x002E4300 - 0x002E4356 (86 bytes, 24 insns)
 * Folder: ai (match: xbox-demo 0x0025C3B0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E4300: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E433C; /* je: equal / zero */

loc_002E4307: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E433C; /* je: equal / zero */

loc_002E430E: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_002E433C: ;
    edx = MEM32(0x64506C);
    MEM32(ecx) = edx;
    eax = MEM32(0x645070);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x645074);
    MEM32(ecx + 8) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_002E4360
 * Original: 0x002E4360 - 0x002E442A (202 bytes, 49 insns)
 * Folder: ai (match: xbox-demo 0x0025C410, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E4360: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E43D0; /* je: equal / zero */

loc_002E4389: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E43D0; /* je: equal / zero */

loc_002E4390: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    edx = MEM32(esp + 8);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    esi = MEM32(esp + 0xC);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    edi = MEM32(esp + 0x10);
    goto loc_002E43E2;

loc_002E43D0: ;
    edx = MEM32(0x64506C);
    esi = MEM32(0x645070);
    edi = MEM32(0x645074);

loc_002E43E2: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 0x18);
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E4430
 * Original: 0x002E4430 - 0x002E44CA (154 bytes, 39 insns)
 * Folder: ai (match: xbox-demo 0x0025C4E0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E4430: ;
    eax = MEM32(0x758D6C);
    edx = MEM32(0x758D70);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D68) = ecx;
    ecx = esi + 0x696528;
    if (CMP_NE(_fa, _fb)) goto loc_002E4473; /* jne: not equal / not zero */

loc_002E446D: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx); /* cvtsi2ss */
    goto loc_002E4477;

loc_002E4473: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */

loc_002E4477: ;
    edx = MEM32(edx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E449D; /* je: equal / zero */

loc_002E447E: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E449D; /* je: equal / zero */

loc_002E4485: ;
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(edx + 0x20) = xmm1.f[0]; /* movss */
    edx = 1;
    goto loc_002E449F;

loc_002E449D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002E449F: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x758D48) = esi;
    MEM32(ecx) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E44D0
 * Original: 0x002E44D0 - 0x002E453E (110 bytes, 26 insns)
 * Folder: ai (match: xbox-demo 0x0025C580, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E44D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E44D0: ;
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002E451B; /* jne: not equal / not zero */

loc_002E4511: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0x696528); /* cvtsi2ss */
    goto loc_002E4523;

loc_002E451B: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x696528)); /* movss */

loc_002E4523: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4536; /* je: equal / zero */

loc_002E452A: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4536; /* je: equal / zero */

loc_002E4531: ;
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */

loc_002E4536: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E4540
 * Original: 0x002E4540 - 0x002E45BC (124 bytes, 28 insns)
 * Folder: ai (match: xbox-demo 0x0025C5F0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E4540: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E457A; /* je: equal / zero */

loc_002E4564: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E457A; /* je: equal / zero */

loc_002E456B: ;
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x20); /* divss */
    goto loc_002E457D;

loc_002E457A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_002E457D: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E45C0
 * Original: 0x002E45C0 - 0x002E4637 (119 bytes, 28 insns)
 * Folder: ai (match: xbox-demo 0x0025C670, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E45C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E45C0: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E45EB; /* je: equal / zero */

loc_002E45E4: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E45EF; /* jne: not equal / not zero */

loc_002E45EB: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002E45FA;

loc_002E45EF: ;
    MEM32(eax) = MEM32(eax) | 0x80000000u;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 1;

loc_002E45FA: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E4640
 * Original: 0x002E4640 - 0x002E465A (26 bytes, 9 insns)
 * Folder: ai (between: 0x002E45C0 and 0x002E4900)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E4640: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4654; /* je: equal / zero */

loc_002E4647: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4654; /* je: equal / zero */

loc_002E464E: ;
    MEM32(eax) = MEM32(eax) & 0x7FFFFFFF;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002E4654: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002E4660
 * Original: 0x002E4660 - 0x002E46D2 (114 bytes, 25 insns)
 * Folder: ai (between: 0x002E45C0 and 0x002E4900)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E4660: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E4691; /* je: equal / zero */

loc_002E4684: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4691; /* je: equal / zero */

loc_002E468B: ;
    MEM32(eax) = MEM32(eax) & 0x7FFFFFFF;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002E4691: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = 1;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E46E0
 * Original: 0x002E46E0 - 0x002E471F (63 bytes, 32 insns)
 * Folder: ai (between: 0x002E45C0 and 0x002E4900)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E46E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E46E0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_002E471A; /* je: equal / zero */

loc_002E46E5: ;
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E46F3; /* je: equal / zero */

loc_002E46EC: ;
    ebx = MEM32(ecx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E46F7; /* jne: not equal / not zero */

loc_002E46F3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002E46F7: ;
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    eax = ~eax;
    esi = edx;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002E470Bu); RECOMP_ABI_CALL(0x00078E20u, sub_00078E20); /* call 0x00078E20 */

loc_002E470B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi;
    PUSH32(esp, 0x002E4715u); RECOMP_ABI_CALL(0x00079980u, sub_00079980); /* call 0x00079980 */

loc_002E4715: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002E471A: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E4720
 * Original: 0x002E4720 - 0x002E47BF (159 bytes, 49 insns)
 * Folder: ai (between: 0x002E45C0 and 0x002E4900)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E4720: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E4744u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E4744: ;
    esi = eax;
    PUSH32(esp, 0x002E474Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E474B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E477C; /* je: equal / zero */

loc_002E474F: ;
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E475D; /* je: equal / zero */

loc_002E4756: ;
    ebx = MEM32(ecx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E4761; /* jne: not equal / not zero */

loc_002E475D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002E477F;

loc_002E4761: ;
    ecx = MEM32(ebx);
    esi = ~esi;
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002E4770u); RECOMP_ABI_CALL(0x00078E20u, sub_00078E20); /* call 0x00078E20 */

loc_002E4770: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi;
    PUSH32(esp, 0x002E477Au); RECOMP_ABI_CALL(0x00079980u, sub_00079980); /* call 0x00079980 */

loc_002E477A: ;
    goto loc_002E477F;

loc_002E477C: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002E477F: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(eax) = esi;
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E47C0
 * Original: 0x002E47C0 - 0x002E47EB (43 bytes, 18 insns)
 * Folder: ai (between: 0x002E45C0 and 0x002E4900)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E47C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E47C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E47EA; /* je: equal / zero */

loc_002E47C4: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E47EA; /* je: equal / zero */

loc_002E47CB: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E47EA; /* je: equal / zero */

loc_002E47D2: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002E47EA; /* je: equal / zero */

loc_002E47D7: ;
    edx = MEM32(ecx);
    eax = MEM32(eax + 0x24);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;

loc_002E47EA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002E47F0
 * Original: 0x002E47F0 - 0x002E4864 (116 bytes, 33 insns)
 * Folder: ai (between: 0x002E45C0 and 0x002E4900)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E47F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E47F0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D4C);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x69652C);
    MEM32(0x758D4C) = edx;
    edx = MEM32(eax + 0x696528);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    if (CMP_EQ(_fa, _fb)) goto loc_002E485B; /* je: equal / zero */

loc_002E483D: ;
    ecx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E485B; /* je: equal / zero */

loc_002E4844: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E485B; /* je: equal / zero */

loc_002E484B: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002E485B; /* je: equal / zero */

loc_002E4850: ;
    ecx = MEM32(ecx + 0x24);
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;

loc_002E485B: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E4870
 * Original: 0x002E4870 - 0x002E48FA (138 bytes, 40 insns)
 * Folder: ai (between: 0x002E45C0 and 0x002E4900)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E4870: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E48AF; /* je: equal / zero */

loc_002E4896: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E48AF; /* je: equal / zero */

loc_002E489D: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002E48AF; /* je: equal / zero */

loc_002E48A2: ;
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    esi = MEM32(eax + 8);
    goto loc_002E48B5;

loc_002E48AF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002E48B5: ;
    edi = MEM32(0x758D48);
    eax = edi + 0x696528;
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = esi;
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0xC);
    MEM32(0x758D48) = edi;
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E4900
 * Original: 0x002E4900 - 0x002E4970 (112 bytes, 31 insns)
 * Folder: ai (match: xbox-demo 0x0025C990, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E4900: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    ecx = MEM32(ecx + 0x14);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D4C);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x69652C);
    MEM32(0x758D4C) = edx;
    edx = MEM32(eax + 0x696528);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    if (CMP_EQ(_fa, _fb)) goto loc_002E4967; /* je: equal / zero */

loc_002E4950: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4967; /* je: equal / zero */

loc_002E4957: ;
    ecx = MEM32(ecx + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4967; /* je: equal / zero */

loc_002E495E: ;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = esi;
    MEM32(ecx + 0x14) = eax;

loc_002E4967: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E4970
 * Original: 0x002E4970 - 0x002E49F0 (128 bytes, 45 insns)
 * Folder: ai (between: 0x002E4900 and 0x002E4A90)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E4970: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D4C);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x69652C);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x696530);
    MEM32(0x758D4C) = edx;
    edx = MEM32(eax + 0x696528);
    MEM32(0x758D48) = eax;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E49DB; /* je: equal / zero */

loc_002E49C1: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E49DB; /* je: equal / zero */

loc_002E49C8: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002E49DB; /* je: equal / zero */

loc_002E49CD: ;
    eax = MEM32(eax + 0x24);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;

loc_002E49DB: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E49F0
 * Original: 0x002E49F0 - 0x002E4A81 (145 bytes, 37 insns)
 * Folder: ai (between: 0x002E4900 and 0x002E4A90)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E49F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E49F0: ;
    eax = MEM32(0x758D6C);
    edx = MEM32(0x758D48);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D68) = ecx;
    ecx = edx + 0x696528;
    if (CMP_NE(_fa, _fb)) goto loc_002E4A33; /* jne: not equal / not zero */

loc_002E4A2D: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx); /* cvtsi2ss */
    goto loc_002E4A37;

loc_002E4A33: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */

loc_002E4A37: ;
    esi = MEM32(esi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4A52; /* je: equal / zero */

loc_002E4A3E: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4A52; /* je: equal / zero */

loc_002E4A45: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002E4A52; /* je: equal / zero */

loc_002E4A4A: ;
    esi = MEM32(esi + 0x24);
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */

loc_002E4A52: ;
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 8);
    MEM32(ecx) = 1;
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E4A90
 * Original: 0x002E4A90 - 0x002E4B10 (128 bytes, 32 insns)
 * Folder: ai (match: xbox-demo 0x0025CB00, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E4A90: ;
    eax = MEM32(0x758D70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E4ACE; /* je: equal / zero */

loc_002E4AB1: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4ACE; /* je: equal / zero */

loc_002E4AB8: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4ACE; /* je: equal / zero */

loc_002E4ABF: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002E4ACE; /* je: equal / zero */

loc_002E4AC4: ;
    eax = MEM32(eax + 0x24);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    goto loc_002E4AD1;

loc_002E4ACE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_002E4AD1: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E4B10
 * Original: 0x002E4B10 - 0x002E4B42 (50 bytes, 20 insns)
 * Folder: ai (between: 0x002E4A90 and 0x002E4D10)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002E4B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E4B10: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4B3F; /* je: equal / zero */

loc_002E4B17: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4B3F; /* je: equal / zero */

loc_002E4B1E: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002E4B3F; /* je: equal / zero */

loc_002E4B23: ;
    eax = MEM32(eax + 0x24);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

loc_002E4B3F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E4B50
 * Original: 0x002E4B50 - 0x002E4BED (157 bytes, 47 insns)
 * Folder: ai (between: 0x002E4A90 and 0x002E4D10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E4B50: ;
    edx = MEM32(0x758D64);
    ecx = MEM32(0x758D70);
    eax = MEM32(0x758D6C);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x758D48);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(esi + 0x69652C);
    ebp = MEM32(esi + 0x696530);
    MEM32(0x758D70) = eax;
    eax = esi + 0x696528;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_002E4BBC; /* je: equal / zero */

loc_002E4B9B: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4BBC; /* je: equal / zero */

loc_002E4BA2: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002E4BBC; /* je: equal / zero */

loc_002E4BA7: ;
    ecx = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edi;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = ebp;
    ecx = 1;
    goto loc_002E4BBE;

loc_002E4BBC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002E4BBE: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(0x758D48) = esi;
    MEM32(edx * 8 + 0x68642C) = eax;
    POP32(esp, esi);
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0xC);
    MEM16(edx * 8 + 0x686428) = 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(0x758D4C) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E4BF0
 * Original: 0x002E4BF0 - 0x002E4C7E (142 bytes, 41 insns)
 * Folder: ai (between: 0x002E4A90 and 0x002E4D10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E4BF0: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E4C33; /* je: equal / zero */

loc_002E4C16: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4C33; /* je: equal / zero */

loc_002E4C1D: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002E4C33; /* je: equal / zero */

loc_002E4C22: ;
    eax = MEM32(eax + 0x24);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(eax + 0x28);
    esi = MEM32(eax + 0x2C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002E4C39;

loc_002E4C33: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002E4C39: ;
    edi = MEM32(0x758D48);
    eax = edi + 0x696528;
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = esi;
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0xC);
    MEM32(0x758D48) = edi;
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E4C80
 * Original: 0x002E4C80 - 0x002E4D0F (143 bytes, 42 insns)
 * Folder: ai (between: 0x002E4A90 and 0x002E4D10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E4C80: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E4CC4; /* je: equal / zero */

loc_002E4CA6: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4CC4; /* je: equal / zero */

loc_002E4CAD: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002E4CC4; /* je: equal / zero */

loc_002E4CB2: ;
    eax = MEM32(eax + 0x24);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_002E4CC4; /* je: equal / zero */

loc_002E4CBA: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    esi = MEM32(eax + 8);
    goto loc_002E4CCA;

loc_002E4CC4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002E4CCA: ;
    edi = MEM32(0x758D48);
    eax = edi + 0x696528;
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = esi;
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0xC);
    MEM32(0x758D48) = edi;
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E4D10
 * Original: 0x002E4D10 - 0x002E4E01 (241 bytes, 78 insns)
 * Folder: ai (match: xbox-demo 0x0025CD60, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4D10(void)
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

loc_002E4D10: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D48);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 1;
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), LO16(edx) (16-bit) */
    MEM32(0x758D68) = ecx;
    MEM32(0x758D48) = esi;
    MEM32(0x758D4C) = eax;
    ecx = esi + 0x696528;
    if (CMP_NE(_fa, _fb)) goto loc_002E4D64; /* jne: not equal / not zero */

loc_002E4D5E: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx); /* cvtsi2ss */
    goto loc_002E4D68;

loc_002E4D64: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */

loc_002E4D68: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4DD2; /* je: equal / zero */

loc_002E4D72: ;
    edi = MEM32(edi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4DD2; /* je: equal / zero */

loc_002E4D79: ;
    edi = MEM32(edi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4DD2; /* je: equal / zero */

loc_002E4D80: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002E4DC0; /* je: equal / zero */

loc_002E4D85: ;
    eax = MEM32(edi + 0x24);
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 8)); /* fdiv dword ptr [esp + 8] */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x002E4DB5u); RECOMP_ABI_CALL(0x000E6E10u, sub_000E6E10); /* call 0x000E6E10 */

loc_002E4DB5: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002E4DC0: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002E4DC7u); RECOMP_ABI_CALL(0x000E6E10u, sub_000E6E10); /* call 0x000E6E10 */

loc_002E4DC7: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002E4DD2: ;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = LO16(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(0x758D48) = esi;
    MEM32(ecx) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002E4E10
 * Original: 0x002E4E10 - 0x002E4E7C (108 bytes, 31 insns)
 * Folder: ai (match: xbox-demo 0x0025CE60, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4E10(void)
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

loc_002E4E10: ;
    eax = MEM32(eax + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4E72; /* je: equal / zero */

loc_002E4E1A: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4E72; /* je: equal / zero */

loc_002E4E21: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002E4E72: ;
    fp_push(MEMF(0x429350)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002E4E80
 * Original: 0x002E4E80 - 0x002E4EDD (93 bytes, 19 insns)
 * Folder: ai (between: 0x002E4E10 and 0x002E4FF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4E80(void)
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

loc_002E4E80: ;
    edx = MEM32(0x758D64);
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D70) = ecx;
    ecx = edx + 0x696528;
    PUSH32(esp, 0x002E4EAEu); RECOMP_ABI_CALL(0x002E4E10u, sub_002E4E10); /* call 0x002E4E10 */

loc_002E4EAE: ;
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 2;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002E4EE0
 * Original: 0x002E4EE0 - 0x002E4EF6 (22 bytes, 9 insns)
 * Folder: ai (between: 0x002E4E10 and 0x002E4FF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E4EE0: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4EF5; /* je: equal / zero */

loc_002E4EE7: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4EF5; /* je: equal / zero */

loc_002E4EEE: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0008B150(); return; /* tail jmp 0x0008B150 */

loc_002E4EF5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002E4F00
 * Original: 0x002E4F00 - 0x002E4F7E (126 bytes, 33 insns)
 * Folder: ai (between: 0x002E4E10 and 0x002E4FF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E4F00: ;
    PUSH32(esp, ecx);
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002E4F4C; /* jne: not equal / not zero */

loc_002E4F42: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0x696528); /* cvtsi2ss */
    goto loc_002E4F54;

loc_002E4F4C: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x696528)); /* movss */

loc_002E4F54: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4F75; /* je: equal / zero */

loc_002E4F60: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E4F75; /* je: equal / zero */

loc_002E4F67: ;
    ecx = MEM32(esp);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x002E4F72u); RECOMP_ABI_CALL(0x0008B150u, sub_0008B150); /* call 0x0008B150 */

loc_002E4F72: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002E4F75: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E4F80
 * Original: 0x002E4F80 - 0x002E4FEB (107 bytes, 25 insns)
 * Folder: ai (between: 0x002E4E10 and 0x002E4FF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E4F80: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E4FA9; /* je: equal / zero */

loc_002E4FA4: ;
    edx = MEM32(eax + 4);
    goto loc_002E4FAB;

loc_002E4FA9: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002E4FAB: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(edx + 0x28);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E4FF0
 * Original: 0x002E4FF0 - 0x002E505B (107 bytes, 25 insns)
 * Folder: ai (match: xbox-demo 0x0025D110, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E4FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E4FF0: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E5019; /* je: equal / zero */

loc_002E5014: ;
    edx = MEM32(eax + 4);
    goto loc_002E501B;

loc_002E5019: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002E501B: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(edx + 0x34);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E5060
 * Original: 0x002E5060 - 0x002E50D3 (115 bytes, 27 insns)
 * Folder: ai (between: 0x002E4FF0 and 0x002E51C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E5060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E5060: ;
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002E50AB; /* jne: not equal / not zero */

loc_002E50A1: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0x696528); /* cvtsi2ss */
    goto loc_002E50B3;

loc_002E50AB: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x696528)); /* movss */

loc_002E50B3: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E50CB; /* je: equal / zero */

loc_002E50BA: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E50CB; /* je: equal / zero */

loc_002E50C1: ;
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */

loc_002E50CB: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E50E0
 * Original: 0x002E50E0 - 0x002E514E (110 bytes, 26 insns)
 * Folder: ai (between: 0x002E4FF0 and 0x002E51C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E50E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E50E0: ;
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002E512B; /* jne: not equal / not zero */

loc_002E5121: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0x696528); /* cvtsi2ss */
    goto loc_002E5133;

loc_002E512B: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x696528)); /* movss */

loc_002E5133: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5146; /* je: equal / zero */

loc_002E513A: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5146; /* je: equal / zero */

loc_002E5141: ;
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */

loc_002E5146: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E50EB
 * Original: 0x002E50EB - 0x002E514E (99 bytes, 24 insns)
 * Folder: ai (between: 0x002E4FF0 and 0x002E51C0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E50EB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E50EB: ;
    ecx = MEM32(0x758D70);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002E512B; /* jne: not equal / not zero */

loc_002E5121: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0x696528); /* cvtsi2ss */
    goto loc_002E5133;

loc_002E512B: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x696528)); /* movss */

loc_002E5133: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5146; /* je: equal / zero */

loc_002E513A: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5146; /* je: equal / zero */

loc_002E5141: ;
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */

loc_002E5146: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E5150
 * Original: 0x002E5150 - 0x002E51BE (110 bytes, 26 insns)
 * Folder: ai (between: 0x002E4FF0 and 0x002E51C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E5150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E5150: ;
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002E519B; /* jne: not equal / not zero */

loc_002E5191: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0x696528); /* cvtsi2ss */
    goto loc_002E51A3;

loc_002E519B: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x696528)); /* movss */

loc_002E51A3: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E51B6; /* je: equal / zero */

loc_002E51AA: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E51B6; /* je: equal / zero */

loc_002E51B1: ;
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */

loc_002E51B6: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E51C0
 * Original: 0x002E51C0 - 0x002E520D (77 bytes, 25 insns)
 * Folder: ai (match: xbox-demo 0x0025D310, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E51C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E51C0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E51E2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E51E2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5204; /* je: equal / zero */

loc_002E51E6: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5204; /* je: equal / zero */

loc_002E51ED: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5204; /* je: equal / zero */

loc_002E51F4: ;
    edx = MEM32(ecx);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(ecx);
    edx = edx & 0xC00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;

loc_002E5204: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E5210
 * Original: 0x002E5210 - 0x002E52A1 (145 bytes, 34 insns)
 * Folder: ai (match: xbox-demo 0x0025D360, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E5210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E5210: ;
    eax = MEM32(0x758D70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E5260; /* je: equal / zero */

loc_002E5231: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5260; /* je: equal / zero */

loc_002E5238: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5260; /* je: equal / zero */

loc_002E523F: ;
    edx = MEM32(0x758D48);
    ecx = MEM32(ecx);
    eax = edx + 0x696528;
    ecx = ecx & 0xC00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(0x758D48) = edx;
    goto loc_002E527B;

loc_002E5260: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 0;
    MEM32(0x758D48) = ecx;

loc_002E527B: ;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E52B0
 * Original: 0x002E52B0 - 0x002E5377 (199 bytes, 55 insns)
 * Folder: ai (match: xbox-demo 0x0025D400, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E52B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E52B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E52DD; /* je: equal / zero */

loc_002E52D5: ;
    eax = MEM32(eax + 4);
    MEM32(esp) = eax;
    goto loc_002E52E4;

loc_002E52DD: ;
    MEM32(esp) = 0;

loc_002E52E4: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(eax + 0x696508);
    edx = MEM32(eax + 0x69650C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x696510);
    PUSH32(esp, edi);
    edi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(eax + 0x69650C);
    ebp = MEM32(eax + 0x696510);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = edi;
    edi = MEM32(eax + 0x696528);
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 0x38);
    MEM32(eax) = edi;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebp;
    MEM8(eax + 0x34) = 1;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x64506C);
    MEM32(eax + 0x18) = ecx;
    edx = MEM32(0x645070);
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(0x645074);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E5380
 * Original: 0x002E5380 - 0x002E5498 (280 bytes, 72 insns)
 * Folder: ai (match: xbox-demo 0x0025D4D0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E5380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E5380: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E53AF; /* je: equal / zero */

loc_002E53A7: ;
    eax = MEM32(eax + 4);
    MEM32(esp) = eax;
    goto loc_002E53B6;

loc_002E53AF: ;
    MEM32(esp) = 0;

loc_002E53B6: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D4C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002E53E0; /* jne: not equal / not zero */

loc_002E53D6: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002E53E8;

loc_002E53E0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002E53E8: ;
    edx = MEM32(eax + 0x696508);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax + 0x696510);
    ebx = MEM32(eax + 0x696508);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x69650C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x69654C);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x696550);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x696528);
    MEM32(0x758D48) = eax;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 0x69652C);
    eax = MEM32(eax + 0x696530);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + 0x38);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x28);
    MEM8(ecx + 0x34) = 2;
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(esp + 0x30);
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x10) = ebp;
    MEM32(ecx + 0x20) = edi;
    POP32(esp, edi);
    MEM32(ecx + 0x1C) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 0x18) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E54A0
 * Original: 0x002E54A0 - 0x002E58AE (1038 bytes, 257 insns)
 * Folder: ai (between: 0x002E5380 and 0x002E5F50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002E54A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002E54A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xEC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xEC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002E54B9; /* je: equal / zero */

loc_002E54B4: ;
    esi = MEM32(eax + 4);
    goto loc_002E54BB;

loc_002E54B9: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002E54BB: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(0x64506C);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(0x645070);
    xmm0 = XMM_SCALAR(MEMF(0x429410)); /* movss */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(0x645074);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(0x64506C);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(0x645070);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(0x645074);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esi + 0x24);
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002E5562; /* jnp: not parity */

loc_002E554C: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_002E5562: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    fp_push(MEMF(ecx + 4)); /* fld float */
    xmm6 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    fp_push(MEMF(ecx)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    eax = MEM32(esp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 4); /* mulss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(esp + 0x20) = eax;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esi + 4);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm6.f[0] = xmm6.f[0] - MEMF(eax + 8); /* subss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    xmm7 = xmm0; /* movaps */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm6.f[0]; /* movss */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E5625; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_002E5622: ;
    xmm2 = xmm3; /* movaps */

loc_002E5625: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(esp + 0x38); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = MEMF(0x429350); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E5690; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs MEMF(0x429350)) */

loc_002E567A: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(edx + 4); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edx + 8); /* addss */
    xmm2 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm7 = xmm1; /* movaps */
    goto loc_002E56A6;

loc_002E5690: ;
    xmm6 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm0.f[0]; /* addss */
    xmm7.f[0] = xmm7.f[0] + xmm1.f[0]; /* addss */

loc_002E56A6: ;
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x2C); /* addss */
    fp_push(MEMF(edx)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    fp_push(MEMF(edx + 4)); /* fld float */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm7.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x18); /* mulss */
    MEMF(esp + 0x30) = xmm6.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    fp_push(MEMF(edx + 8)); /* fld float */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm7.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    xmm3.f[0] = xmm3.f[0] - MEMF(0x645078); /* subss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    xmm0 = XMM_SCALAR(MEMF(0x429388)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(0x64507C); /* subss */
    xmm5.f[0] = xmm5.f[0] - MEMF(0x645080); /* subss */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = xmm5.f[0]; /* movss */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x4293F8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x10)); /* fdiv dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_G(_fas, _fbs)) goto loc_002E57EB; /* jg: greater (signed >) */

loc_002E57A4: ;
    edx = MEM32(esp + 0x18);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002E57EB; /* jg: greater (signed >) */

loc_002E57B2: ;
    ecx = MEM32(esp + 0x1C);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002E57EB; /* jg: greater (signed >) */

loc_002E57C0: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    goto loc_002E587B;

loc_002E57EB: ;
    edx = esp + 0x38;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = esp + 0x28;
    ecx = esp + 0x58;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002E57FFu); RECOMP_ABI_CALL(0x000E2370u, sub_000E2370); /* call 0x000E2370 */

loc_002E57FF: ;
    edx = ecx;
    eax = esp + 0xA8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002E580Du); RECOMP_ABI_CALL(0x000E1240u, sub_000E1240); /* call 0x000E1240 */

loc_002E580D: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    eax = esp + 0x44;
    ecx = esp + 0xAC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002E5822u); RECOMP_ABI_CALL(0x000E0DD0u, sub_000E0DD0); /* call 0x000E0DD0 */

loc_002E5822: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = esp + 0x48;
    ecx = esp + 0x60;
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002E5866u); RECOMP_ABI_CALL(0x000E0DD0u, sub_000E0DD0); /* call 0x000E0DD0 */

loc_002E5866: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002E587B: ;
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x20); /* divss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esi + 8) = xmm4.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
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
 * sub_002E58B0
 * Original: 0x002E58B0 - 0x002E5948 (152 bytes, 34 insns)
 * Folder: ai (between: 0x002E5380 and 0x002E5F50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E58B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E58B0: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D70);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758D48);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(edx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E58F5; /* jne: not equal / not zero */

loc_002E58EB: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_002E58FD;

loc_002E58F5: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_002E58FD: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = edx;
    edx = MEM32(ecx + 0x696528);
    MEM32(esp + 4) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = edx;
    edx = MEM32(esp);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696530);
    PUSH32(esp, edx);
    edx = esp + 8;
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0x002E593Du); RECOMP_ABI_CALL(0x002E54A0u, sub_002E54A0); /* call 0x002E54A0 */

loc_002E593D: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E5950
 * Original: 0x002E5950 - 0x002E59C0 (112 bytes, 31 insns)
 * Folder: ai (between: 0x002E5380 and 0x002E5F50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E5950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E5950: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    ecx = MEM32(ecx + 0x14);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D4C);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x69652C);
    MEM32(0x758D4C) = edx;
    edx = MEM32(eax + 0x696528);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    if (CMP_EQ(_fa, _fb)) goto loc_002E59B7; /* je: equal / zero */

loc_002E59A0: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E59B7; /* je: equal / zero */

loc_002E59A7: ;
    ecx = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E59B7; /* je: equal / zero */

loc_002E59AE: ;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = esi;
    MEM32(ecx + 0x18) = eax;

loc_002E59B7: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E59C0
 * Original: 0x002E59C0 - 0x002E5A10 (80 bytes, 26 insns)
 * Folder: ai (between: 0x002E5380 and 0x002E5F50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E59C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E59C0: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    ecx = MEM32(ecx + 0x14);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5A07; /* je: equal / zero */

loc_002E59E7: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5A07; /* je: equal / zero */

loc_002E59EE: ;
    ecx = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5A07; /* je: equal / zero */

loc_002E59F5: ;
    edx = MEM32(ecx + 0x10);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x18);
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

loc_002E5A07: ;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_002E5A10
 * Original: 0x002E5A10 - 0x002E5A8E (126 bytes, 28 insns)
 * Folder: ai (between: 0x002E5380 and 0x002E5F50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E5A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E5A10: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(esp) = eax;
    eax = esp + 4;
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002E5A3Cu); RECOMP_ABI_CALL(0x002E59C0u, sub_002E59C0); /* call 0x002E59C0 */

loc_002E5A3C: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(esp + 4);
    eax = ecx + 0x696528;
    MEM32(eax) = edx;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x14);
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E5A90
 * Original: 0x002E5A90 - 0x002E5AFE (110 bytes, 32 insns)
 * Folder: ai (between: 0x002E5380 and 0x002E5F50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E5A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E5A90: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    edx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(0x758D6C);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x69652C);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x758D64);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    MEM32(0x758D68) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_002E5AF4; /* je: equal / zero */

loc_002E5ADD: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5AF4; /* je: equal / zero */

loc_002E5AE4: ;
    ecx = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5AF4; /* je: equal / zero */

loc_002E5AEB: ;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = esi;
    MEM32(ecx + 0xC) = eax;

loc_002E5AF4: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E5B00
 * Original: 0x002E5B00 - 0x002E5B32 (50 bytes, 21 insns)
 * Folder: ai (between: 0x002E5380 and 0x002E5F50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E5B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E5B00: ;
    ecx = MEM32(ecx + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5B29; /* je: equal / zero */

loc_002E5B09: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5B29; /* je: equal / zero */

loc_002E5B10: ;
    ecx = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5B29; /* je: equal / zero */

loc_002E5B17: ;
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

loc_002E5B29: ;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_002E5B40
 * Original: 0x002E5B40 - 0x002E5BCA (138 bytes, 40 insns)
 * Folder: ai (between: 0x002E5380 and 0x002E5F50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E5B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E5B40: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E5B7F; /* je: equal / zero */

loc_002E5B66: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5B7F; /* je: equal / zero */

loc_002E5B6D: ;
    eax = MEM32(eax + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5B7F; /* je: equal / zero */

loc_002E5B74: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + 8);
    esi = MEM32(eax + 0xC);
    goto loc_002E5B85;

loc_002E5B7F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002E5B85: ;
    edi = MEM32(0x758D48);
    eax = edi + 0x696528;
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = esi;
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0xC);
    MEM32(0x758D48) = edi;
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E5BD0
 * Original: 0x002E5BD0 - 0x002E5C44 (116 bytes, 29 insns)
 * Folder: ai (between: 0x002E5380 and 0x002E5F50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E5BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E5BD0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    MEM32(0x758D70) = eax;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x758D68) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E5C02; /* je: equal / zero */

loc_002E5BED: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5C02; /* je: equal / zero */

loc_002E5BF4: ;
    eax = MEM32(eax + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5C02; /* je: equal / zero */

loc_002E5BFB: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    goto loc_002E5C05;

loc_002E5C02: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_002E5C05: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E5C50
 * Original: 0x002E5C50 - 0x002E5CC5 (117 bytes, 29 insns)
 * Folder: ai (between: 0x002E5380 and 0x002E5F50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E5C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E5C50: ;
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002E5C9B; /* jne: not equal / not zero */

loc_002E5C91: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0x696528); /* cvtsi2ss */
    goto loc_002E5CA3;

loc_002E5C9B: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x696528)); /* movss */

loc_002E5CA3: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5CBD; /* je: equal / zero */

loc_002E5CAA: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5CBD; /* je: equal / zero */

loc_002E5CB1: ;
    eax = MEM32(eax + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5CBD; /* je: equal / zero */

loc_002E5CB8: ;
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */

loc_002E5CBD: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E5CD0
 * Original: 0x002E5CD0 - 0x002E5D45 (117 bytes, 29 insns)
 * Folder: ai (between: 0x002E5380 and 0x002E5F50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E5CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E5CD0: ;
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002E5D1B; /* jne: not equal / not zero */

loc_002E5D11: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0x696528); /* cvtsi2ss */
    goto loc_002E5D23;

loc_002E5D1B: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x696528)); /* movss */

loc_002E5D23: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5D3D; /* je: equal / zero */

loc_002E5D2A: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5D3D; /* je: equal / zero */

loc_002E5D31: ;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5D3D; /* je: equal / zero */

loc_002E5D38: ;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */

loc_002E5D3D: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E5D50
 * Original: 0x002E5D50 - 0x002E5DCB (123 bytes, 30 insns)
 * Folder: ai (between: 0x002E5380 and 0x002E5F50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E5D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E5D50: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E5D89; /* je: equal / zero */

loc_002E5D74: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5D89; /* je: equal / zero */

loc_002E5D7B: ;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5D89; /* je: equal / zero */

loc_002E5D82: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    goto loc_002E5D8C;

loc_002E5D89: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_002E5D8C: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E5DD0
 * Original: 0x002E5DD0 - 0x002E5E44 (116 bytes, 29 insns)
 * Folder: ai (between: 0x002E5380 and 0x002E5F50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E5DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E5DD0: ;
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002E5E1B; /* jne: not equal / not zero */

loc_002E5E11: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0x696528); /* cvtsi2ss */
    goto loc_002E5E23;

loc_002E5E1B: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x696528)); /* movss */

loc_002E5E23: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5E3C; /* je: equal / zero */

loc_002E5E2A: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5E3C; /* je: equal / zero */

loc_002E5E31: ;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5E3C; /* je: equal / zero */

loc_002E5E38: ;
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_002E5E3C: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E5E50
 * Original: 0x002E5E50 - 0x002E5EC5 (117 bytes, 29 insns)
 * Folder: ai (between: 0x002E5380 and 0x002E5F50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E5E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E5E50: ;
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002E5E9B; /* jne: not equal / not zero */

loc_002E5E91: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0x696528); /* cvtsi2ss */
    goto loc_002E5EA3;

loc_002E5E9B: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x696528)); /* movss */

loc_002E5EA3: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5EBD; /* je: equal / zero */

loc_002E5EAA: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5EBD; /* je: equal / zero */

loc_002E5EB1: ;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5EBD; /* je: equal / zero */

loc_002E5EB8: ;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */

loc_002E5EBD: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E5ED0
 * Original: 0x002E5ED0 - 0x002E5F4A (122 bytes, 30 insns)
 * Folder: ai (between: 0x002E5380 and 0x002E5F50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E5ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E5ED0: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E5F08; /* je: equal / zero */

loc_002E5EF4: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5F08; /* je: equal / zero */

loc_002E5EFB: ;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5F08; /* je: equal / zero */

loc_002E5F02: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    goto loc_002E5F0B;

loc_002E5F08: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_002E5F0B: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E5F50
 * Original: 0x002E5F50 - 0x002E5FC5 (117 bytes, 29 insns)
 * Folder: ai (match: xbox-demo 0x0025E0F0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E5F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E5F50: ;
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002E5F9B; /* jne: not equal / not zero */

loc_002E5F91: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0x696528); /* cvtsi2ss */
    goto loc_002E5FA3;

loc_002E5F9B: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x696528)); /* movss */

loc_002E5FA3: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5FAF; /* je: equal / zero */

loc_002E5FAA: ;
    eax = MEM32(eax + 4);
    goto loc_002E5FB1;

loc_002E5FAF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002E5FB1: ;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E5FBD; /* je: equal / zero */

loc_002E5FB8: ;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */

loc_002E5FBD: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E5FD0
 * Original: 0x002E5FD0 - 0x002E604B (123 bytes, 30 insns)
 * Folder: ai (match: xbox-demo 0x0025E170, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E5FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E5FD0: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E5FF9; /* je: equal / zero */

loc_002E5FF4: ;
    eax = MEM32(eax + 4);
    goto loc_002E5FFB;

loc_002E5FF9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002E5FFB: ;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E6009; /* je: equal / zero */

loc_002E6002: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    goto loc_002E600C;

loc_002E6009: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_002E600C: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E6050
 * Original: 0x002E6050 - 0x002E60C5 (117 bytes, 29 insns)
 * Folder: ai (between: 0x002E5FD0 and 0x002E6240)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E6050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E6050: ;
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002E609B; /* jne: not equal / not zero */

loc_002E6091: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0x696528); /* cvtsi2ss */
    goto loc_002E60A3;

loc_002E609B: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x696528)); /* movss */

loc_002E60A3: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E60BD; /* je: equal / zero */

loc_002E60AA: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E60BD; /* je: equal / zero */

loc_002E60B1: ;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E60BD; /* je: equal / zero */

loc_002E60B8: ;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */

loc_002E60BD: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E60D0
 * Original: 0x002E60D0 - 0x002E614B (123 bytes, 30 insns)
 * Folder: ai (between: 0x002E5FD0 and 0x002E6240)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E60D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E60D0: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E6109; /* je: equal / zero */

loc_002E60F4: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E6109; /* je: equal / zero */

loc_002E60FB: ;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E6109; /* je: equal / zero */

loc_002E6102: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    goto loc_002E610C;

loc_002E6109: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_002E610C: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E6150
 * Original: 0x002E6150 - 0x002E61C5 (117 bytes, 31 insns)
 * Folder: ai (between: 0x002E5FD0 and 0x002E6240)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E6150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E6150: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D68) = edx;
    MEM32(0x758D4C) = MEM32(0x758D4C) - 1;
    _fa = (uint32_t)(MEM32(0x758D4C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(eax + 0x696528);
    MEM32(0x758D48) = eax;
    MEM32(esp) = edx;
    edx = MEM32(eax + 0x69652C);
    eax = MEM32(eax + 0x696530);
    MEM32(esp + 8) = eax;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E61BA; /* je: equal / zero */

loc_002E61A6: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E61BA; /* je: equal / zero */

loc_002E61AD: ;
    PUSH32(esp, esi);
    ecx = esp + 4;
    esi = eax;
    PUSH32(esp, 0x002E61B9u); RECOMP_ABI_CALL(0x00079080u, sub_00079080); /* call 0x00079080 */

loc_002E61B9: ;
    POP32(esp, esi);

loc_002E61BA: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E61D0
 * Original: 0x002E61D0 - 0x002E6239 (105 bytes, 28 insns)
 * Folder: ai (between: 0x002E5FD0 and 0x002E6240)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E61D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E61D0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    ecx = MEM32(ecx + 0x14);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D4C);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x69652C);
    MEM32(0x758D4C) = edx;
    edx = MEM32(eax + 0x696528);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    if (CMP_EQ(_fa, _fb)) goto loc_002E6230; /* je: equal / zero */

loc_002E6220: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E6230; /* je: equal / zero */

loc_002E6227: ;
    MEM32(ecx + 0x40) = edx;
    MEM32(ecx + 0x44) = esi;
    MEM32(ecx + 0x48) = eax;

loc_002E6230: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E6240
 * Original: 0x002E6240 - 0x002E62BC (124 bytes, 33 insns)
 * Folder: ai (match: xbox-demo 0x0025E3F0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E6240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E6240: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E6269; /* je: equal / zero */

loc_002E6264: ;
    eax = MEM32(eax + 4);
    goto loc_002E626B;

loc_002E6269: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002E626B: ;
    eax = MEM32(eax + 0x38);
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + 0x696528;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(ecx) = esi;
    esi = MEM32(eax + 4);
    MEM32(ecx + 4) = esi;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 3;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E62C0
 * Original: 0x002E62C0 - 0x002E6400 (320 bytes, 79 insns)
 * Folder: ai (between: 0x002E6240 and 0x002E6740)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E62C0(void)
{
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

loc_002E62C0: ;
    eax = MEM32(edx + 0x14);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E63FC; /* je: equal / zero */

loc_002E62CE: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E63FC; /* je: equal / zero */

loc_002E62D9: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    eax = MEM32(edx + 0xC);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = MEM32(eax + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEM32(esp + 0x10) = eax;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(esp + 0xC) = edx;
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002E63AD; /* jnp: not parity */

loc_002E639A: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */

loc_002E63AD: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 0x20); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm3.f[0]; /* movss */

loc_002E63FC: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002E6400
 * Original: 0x002E6400 - 0x002E6430 (48 bytes, 16 insns)
 * Folder: ai (between: 0x002E6240 and 0x002E6740)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E6400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E6400: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    edx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E6421u); RECOMP_ABI_CALL(0x002E62C0u, sub_002E62C0); /* call 0x002E62C0 */

loc_002E6421: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E6430
 * Original: 0x002E6430 - 0x002E649E (110 bytes, 26 insns)
 * Folder: ai (between: 0x002E6240 and 0x002E6740)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E6430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E6430: ;
    edx = MEM32(0x758D64);
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D48);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002E647B; /* jne: not equal / not zero */

loc_002E6471: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0x696528); /* cvtsi2ss */
    goto loc_002E6483;

loc_002E647B: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x696528)); /* movss */

loc_002E6483: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E6496; /* je: equal / zero */

loc_002E648A: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E6496; /* je: equal / zero */

loc_002E6491: ;
    MEMF(eax + 0x4C) = xmm0.f[0]; /* movss */

loc_002E6496: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E64A0
 * Original: 0x002E64A0 - 0x002E64C0 (32 bytes, 13 insns)
 * Folder: ai (between: 0x002E6240 and 0x002E6740)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E64A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E64A0: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E64BF; /* je: equal / zero */

loc_002E64A7: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E64BF; /* je: equal / zero */

loc_002E64AE: ;
    edx = MEM32(ecx);
    MEM32(eax + 0x50) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x54) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x58) = ecx;

loc_002E64BF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002E64C0
 * Original: 0x002E64C0 - 0x002E6530 (112 bytes, 35 insns)
 * Folder: ai (between: 0x002E6240 and 0x002E6740)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E64C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E64C0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    ecx = MEM32(ecx + 0x14);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758D4C);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x69652C);
    MEM32(0x758D4C) = edx;
    edx = MEM32(eax + 0x696528);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    if (CMP_EQ(_fa, _fb)) goto loc_002E6520; /* je: equal / zero */

loc_002E6510: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E6520; /* je: equal / zero */

loc_002E6517: ;
    MEM32(ecx + 0x50) = edx;
    MEM32(ecx + 0x54) = esi;
    MEM32(ecx + 0x58) = eax;

loc_002E6520: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E6530
 * Original: 0x002E6530 - 0x002E65A4 (116 bytes, 27 insns)
 * Folder: ai (between: 0x002E6240 and 0x002E6740)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E6530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E6530: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E6562; /* je: equal / zero */

loc_002E6554: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E6562; /* je: equal / zero */

loc_002E655B: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x4C)); /* movss */
    goto loc_002E6565;

loc_002E6562: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_002E6565: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E65B0
 * Original: 0x002E65B0 - 0x002E6633 (131 bytes, 37 insns)
 * Folder: ai (between: 0x002E6240 and 0x002E6740)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E65B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E65B0: ;
    eax = MEM32(0x758D70);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E65E8; /* je: equal / zero */

loc_002E65D6: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E65E8; /* je: equal / zero */

loc_002E65DD: ;
    ecx = MEM32(eax + 0x50);
    edx = MEM32(eax + 0x54);
    esi = MEM32(eax + 0x58);
    goto loc_002E65EE;

loc_002E65E8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002E65EE: ;
    edi = MEM32(0x758D48);
    eax = edi + 0x696528;
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = esi;
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0xC);
    MEM32(0x758D48) = edi;
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E6640
 * Original: 0x002E6640 - 0x002E6732 (242 bytes, 56 insns)
 * Folder: ai (between: 0x002E6240 and 0x002E6740)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E6640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E6640: ;
    eax = MEM32(edx + 0x14);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E672E; /* je: equal / zero */

loc_002E664E: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E672E; /* je: equal / zero */

loc_002E6659: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E672D; /* je: equal / zero */

loc_002E6665: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xC0); /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xC4); /* subss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xC8); /* subss */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(edx + 0xC);
    ecx = esp + 8;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002E66AEu); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_002E66AE: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 4) = xmm3.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */

loc_002E672D: ;
    POP32(esp, esi);

loc_002E672E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E6740
 * Original: 0x002E6740 - 0x002E67D3 (147 bytes, 34 insns)
 * Folder: ai (match: xbox-demo 0x0025E8D0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E6740(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E6740: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D6C);
    edx = MEM32(0x758D70);
    ecx = MEM32(0x758D64);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D48);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp) = ecx;
    ecx = MEM32(eax + 0x69652C);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(eax + 0x696530);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x696528);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 0x69652C);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    edi = esp + 4;
    ecx = esp + 0x10;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x002E67C7u); RECOMP_ABI_CALL(0x002E6640u, sub_002E6640); /* call 0x002E6640 */

loc_002E67C7: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E67E0
 * Original: 0x002E67E0 - 0x002E6833 (83 bytes, 29 insns)
 * Folder: ai (match: xbox-demo 0x0025E970, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E67E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E67E0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E6803u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E6803: ;
    esi = eax;
    PUSH32(esp, 0x002E680Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E680A: ;
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E6829; /* je: equal / zero */

loc_002E6811: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E6829; /* je: equal / zero */

loc_002E6818: ;
    ecx = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E6829; /* je: equal / zero */

loc_002E681F: ;
    edi = MEM32(ecx);
    esi = ~esi;
    esi = esi & edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = esi;

loc_002E6829: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E6840
 * Original: 0x002E6840 - 0x002E6A17 (471 bytes, 137 insns)
 * Folder: ai (between: 0x002E67E0 and 0x002E6AA0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002E6840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002E6840: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0xC);
    edx = MEM32(eax + 0x30);
    MEM32(ebx) = edx;
    edx = MEM32(eax + 0x34);
    MEM32(ebx + 4) = edx;
    edx = MEM32(eax + 0x38);
    MEM32(ebx + 8) = edx;
    ecx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002E6A11; /* je: equal / zero */

loc_002E686E: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E6A11; /* je: equal / zero */

loc_002E6879: ;
    ecx = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E6A11; /* je: equal / zero */

loc_002E6884: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_002E6949; /* jbe: below or equal (unsigned <=) */

loc_002E689E: ;
    fp_push(MEMF(eax + 0x28)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_002E6901; /* jbe: below or equal (unsigned <=) */

loc_002E68AB: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* comiss */
    PUSH32(esp, 1);
    esi = esp + 0x14;
    edx = 0x645084;
    edi = ecx + 0xC0;
    PUSH32(esp, 0);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E68D3; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x429350)) */

loc_002E68CC: ;
    PUSH32(esp, 0x3FC90FDB);
    goto loc_002E68D8;

loc_002E68D3: ;
    PUSH32(esp, 0xBFC90FDBu);

loc_002E68D8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002E68DDu); RECOMP_ABI_CALL(0x000E1A70u, sub_000E1A70); /* call 0x000E1A70 */

loc_002E68DD: ;
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = esp + 0x44;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002E68F0u); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_002E68F0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002E69EF;

loc_002E6901: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x28); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E6A11; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x28)) */

loc_002E690E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40490FDB);
    edi = ecx + 0xC0;
    edx = 0x645090;
    esi = esp + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002E692Bu); RECOMP_ABI_CALL(0x000E1A70u, sub_000E1A70); /* call 0x000E1A70 */

loc_002E692B: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ecx = esp + 0x50;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002E693Bu); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_002E693B: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx); /* addss */
    goto loc_002E69EC;

loc_002E6949: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(eax + 0x28)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_002E69AD; /* jbe: below or equal (unsigned <=) */

loc_002E695A: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* comiss */
    PUSH32(esp, 1);
    esi = esp + 0x14;
    edx = 0x645090;
    edi = ecx + 0xC0;
    PUSH32(esp, 0);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E6982; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x429350)) */

loc_002E697B: ;
    PUSH32(esp, 0xBFC90FDBu);
    goto loc_002E6987;

loc_002E6982: ;
    PUSH32(esp, 0x3FC90FDB);

loc_002E6987: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002E698Cu); RECOMP_ABI_CALL(0x000E1A70u, sub_000E1A70); /* call 0x000E1A70 */

loc_002E698C: ;
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = esp + 0x44;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002E699Fu); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_002E699F: ;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x30); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002E69EF;

loc_002E69AD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x28); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E6A11; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x28)) */

loc_002E69B6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40490FDB);
    edi = ecx + 0xC0;
    edx = 0x645090;
    esi = esp + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002E69D3u); RECOMP_ABI_CALL(0x000E1A70u, sub_000E1A70); /* call 0x000E1A70 */

loc_002E69D3: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ecx = esp + 0x50;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002E69E3u); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_002E69E3: ;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x30); /* addss */

loc_002E69EC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002E69EF: ;
    MEMF(ebx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 4); /* addss */
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 8); /* addss */
    MEMF(ebx + 8) = xmm0.f[0]; /* movss */

loc_002E6A11: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_002E6A20
 * Original: 0x002E6A20 - 0x002E6A9C (124 bytes, 29 insns)
 * Folder: ai (between: 0x002E67E0 and 0x002E6AA0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E6A20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E6A20: ;
    eax = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    ecx = MEM32(0x758D70);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = esp + 4;
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002E6A49u); RECOMP_ABI_CALL(0x002E6840u, sub_002E6840); /* call 0x002E6840 */

loc_002E6A49: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(esp + 4);
    eax = ecx + 0x696528;
    MEM32(eax) = edx;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x14);
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E6AA0
 * Original: 0x002E6AA0 - 0x002E6B1E (126 bytes, 46 insns)
 * Folder: ai (match: xbox-demo 0x0025E9D0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E6AA0(void)
{
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

loc_002E6AA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x429410)); /* movss */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_002E6B1A; /* jle: less or equal (signed <=) */

loc_002E6ABA: ;
    /* nop */

loc_002E6AC0: ;
    ecx = MEM32(ebx + edx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E6B15; /* je: equal / zero */

loc_002E6AC7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002E6B15; /* je: equal / zero */

loc_002E6ACC: ;
    ecx = MEM32(ecx + 0xC);
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x30)); /* fsub dword ptr [ecx + 0x30] */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_002E6B15; /* jbe: below or equal (unsigned <=) */

loc_002E6B08: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    eax = edx;

loc_002E6B15: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_002E6AC0; /* jl: less (signed <) */

loc_002E6B1A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002E6B20
 * Original: 0x002E6B20 - 0x002E6BCD (173 bytes, 47 insns)
 * Folder: ai (match: xbox-demo 0x0025EA50, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E6B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E6B20: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D48);
    edx = MEM32(0x758D4C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = edx;
    esi = eax + 0x696528;
    PUSH32(esp, 0x002E6B4Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E6B4C: ;
    edi = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    ebx = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E6B78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E6B71u); } /* indirect call */
    }

loc_002E6B78: ;
    ebp = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ebp + 0x696528;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x002E6B93u); RECOMP_ABI_CALL(0x002E6AA0u, sub_002E6AA0); /* call 0x002E6AA0 */

loc_002E6B93: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x48);
    MEM32(0x758D48) = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E6BD0
 * Original: 0x002E6BD0 - 0x002E6D99 (457 bytes, 121 insns)
 * Folder: ai (between: 0x002E6B20 and 0x002E7250)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E6BD0(void)
{
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

loc_002E6BD0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    MEMF(esp + 8) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002E6C2F; /* jnp: not parity */

loc_002E6C19: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */

loc_002E6C2F: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x429554)); /* movss */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    edi = esi;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((_fas < 0)) goto loc_002E6D91; /* js: sign (negative) */

loc_002E6C6C: ;
    ecx = 0x7FFFFFFF;

loc_002E6C71: ;
    eax = MEM32(ebx + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E6D8A; /* je: equal / zero */

loc_002E6C7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E6D8A; /* je: equal / zero */

loc_002E6C85: ;
    eax = MEM32(eax + 0xC);
    xmm4 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(edx); /* subss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(edx + 4); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 8); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x10), ecx (32-bit) */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_002E6CD0; /* jne: not equal / not zero */

loc_002E6CC0: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x14), ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002E6CD0; /* jne: not equal / not zero */

loc_002E6CC6: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x18), ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002E6D8A; /* je: equal / zero */

loc_002E6CD0: ;
    _fca = xmm6.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002E6CFB; /* jnp: not parity */

loc_002E6CD9: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_002E6CFB: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002E6D3D; /* jnp: not parity */

loc_002E6D27: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */

loc_002E6D3D: ;
    _fca = xmm6.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24); /* mulss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    xmm0 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002E6D7B; /* jnp: not parity */

loc_002E6D6D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm6.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_002E6D7B: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E6D8A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(esp + 0xC)) */

loc_002E6D82: ;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edi = esi;

loc_002E6D8A: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_002E6C71; /* jns: not sign (positive) */

loc_002E6D91: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002E6DA0
 * Original: 0x002E6DA0 - 0x002E6EB6 (278 bytes, 69 insns)
 * Folder: ai (between: 0x002E6B20 and 0x002E7250)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E6DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E6DA0: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E6DC7; /* jne: not equal / not zero */

loc_002E6DBD: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002E6DCF;

loc_002E6DC7: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002E6DCF: ;
    edx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x69652C);
    PUSH32(esp, ebx);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0x696530);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x69652C);
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x696528);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x002E6E2Eu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E6E2E: ;
    ebp = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    ebx = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, ebx);
    MEM32(0x758D4C) = eax;
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x43D06C); PUSH32(esp, 0x002E6E5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E6E53u); } /* indirect call */
    }

loc_002E6E5A: ;
    esi = MEM32(0x758D48);
    xmm6 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ecx = esp + 0x20;
    edx = esp + 0x2C;
    edi = esi + 0x696528;
    PUSH32(esp, 0x002E6E7Du); RECOMP_ABI_CALL(0x002E6BD0u, sub_002E6BD0); /* call 0x002E6BD0 */

loc_002E6E7D: ;
    MEM32(edi) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x68642C) = edi;
    MEM16(eax * 8 + 0x686428) = 1;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = esi;
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x60);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E6E69
 * Original: 0x002E6E69 - 0x002E6EB6 (77 bytes, 22 insns)
 * Folder: ai (between: 0x002E6B20 and 0x002E7250)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E6E69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E6E69: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x20;
    edx = esp + 0x2C;
    edi = esi + 0x696528;
    PUSH32(esp, 0x002E6E7Du); RECOMP_ABI_CALL(0x002E6BD0u, sub_002E6BD0); /* call 0x002E6BD0 */

loc_002E6E7D: ;
    MEM32(edi) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x68642C) = edi;
    MEM16(eax * 8 + 0x686428) = 1;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = esi;
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x60);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E6EC0
 * Original: 0x002E6EC0 - 0x002E7126 (614 bytes, 161 insns)
 * Folder: ai (between: 0x002E6B20 and 0x002E7250)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E6EC0(void)
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

loc_002E6EC0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    PUSH32(esp, ebx);
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    ebx = eax;
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    MEMF(esp + 0xC) = xmm5.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002E6F21; /* jnp: not parity */

loc_002E6F0B: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_002E6F21: ;
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x429554)); /* movss */
    eax = ebx;
    MEMF(edi + 8) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x14) = eax;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if ((_fas < 0)) goto loc_002E7120; /* js: sign (negative) */

loc_002E6F64: ;
    xmm6 = XMM_SCALAR(MEMF(0x429354)); /* movss */
    PUSH32(esp, esi);
    /* nop */

loc_002E6F70: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(eax + ebx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E7114; /* je: equal / zero */

loc_002E6F7F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E7114; /* je: equal / zero */

loc_002E6F88: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E6F98; /* je: equal / zero */

loc_002E6F93: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFEu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E6FCD; /* jne: not equal / not zero */

loc_002E6F98: ;
    esi = MEM32(ecx + 0xC);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002E6FA7u); RECOMP_ABI_CALL(0x000E0DD0u, sub_000E0DD0); /* call 0x000E0DD0 */

loc_002E6FA7: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x20); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x28); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002E7018;

loc_002E6FCD: ;
    eax = MEM32(ecx + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 8); /* addss */
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */

loc_002E7018: ;
    _fca = xmm7.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ebp); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 4); /* subss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + 8); /* subss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002E7076; /* jnp: not parity */

loc_002E7054: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_002E7076: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002E70B8; /* jnp: not parity */

loc_002E70A2: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_002E70B8: ;
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002E7103; /* jnp: not parity */

loc_002E70F5: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm7.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_002E7103: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E7114; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_002E710A: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = ebx;

loc_002E7114: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_002E6F70; /* jns: not sign (positive) */

loc_002E711B: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, esi);

loc_002E7120: ;
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
 * sub_002E7130
 * Original: 0x002E7130 - 0x002E724E (286 bytes, 71 insns)
 * Folder: ai (between: 0x002E6B20 and 0x002E7250)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7130(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E7130: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E7157; /* jne: not equal / not zero */

loc_002E714D: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002E715F;

loc_002E7157: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002E715F: ;
    edx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x69652C);
    PUSH32(esp, ebx);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 0x696530);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0x69652C);
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x696528);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x002E71BEu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E71BE: ;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, esi);
    MEM32(0x758D4C) = eax;
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x43D06C); PUSH32(esp, 0x002E71ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E71E5u); } /* indirect call */
    }

loc_002E71EC: ;
    ebx = MEM32(0x758D48);
    xmm7 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    edi = esp + 0x34;
    ebp = ebx + 0x696528;
    PUSH32(esp, 0x002E7214u); RECOMP_ABI_CALL(0x002E6EC0u, sub_002E6EC0); /* call 0x002E6EC0 */

loc_002E7214: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x68642C) = ebp;
    MEM16(eax * 8 + 0x686428) = 1;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x64);
    POP32(esp, ebp);
    MEM32(0x758D48) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E7250
 * Original: 0x002E7250 - 0x002E72E2 (146 bytes, 42 insns)
 * Folder: ai (match: xbox-demo 0x0025F0F0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7250(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E7250: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E725Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E725B: ;
    ebx = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E7287u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E7280u); } /* indirect call */
    }

loc_002E7287: ;
    edi = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edi;
    edi = MEM32(eax * 8 + 0x68642C);
    MEM32(0x758D4C) = eax;
    eax = esp + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = SX16(LO16(ecx));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x43D06C); PUSH32(esp, 0x002E72C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E72B9u); } /* indirect call */
    }

loc_002E72C0: ;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
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
    MEM32(0x758D48) = eax;
    eax = MEM32(esp + 0x7C);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E72F0
 * Original: 0x002E72F0 - 0x002E733D (77 bytes, 36 insns)
 * Folder: ai (match: xbox-demo 0x0025F190, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E72F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E72F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002E7337; /* jle: less or equal (signed <=) */

loc_002E72FD: ;
    PUSH32(esp, edi);
    edi = edi;

loc_002E7300: ;
    eax = MEM32(esp + 0x14);
    edi = MEM32(eax + ebp * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E7332; /* je: equal / zero */

loc_002E730B: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E7319u); RECOMP_ABI_CALL(0x00040590u, sub_00040590); /* call 0x00040590 */

loc_002E7319: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E7331; /* jne: not equal / not zero */

loc_002E7320: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + ebx * 4 + -4);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + ebp * 4) = ecx;
    MEM32(eax + ebx * 4) = edi;
    goto loc_002E7332;

loc_002E7331: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002E7332: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002E7300; /* jl: less (signed <) */

loc_002E7336: ;
    POP32(esp, edi);

loc_002E7337: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E7340
 * Original: 0x002E7340 - 0x002E73EF (175 bytes, 50 insns)
 * Folder: ai (match: xbox-demo 0x0025F1E0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E7340: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E734Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E734C: ;
    ebp = eax;
    PUSH32(esp, 0x002E7353u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7353: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x002E735Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E735C: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002E7365u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7365: ;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E7393u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E738Cu); } /* indirect call */
    }

loc_002E7393: ;
    edx = MEM32(esp + 0x18);
    edi = MEM32(0x758D48);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ebx = edi + 0x696528;
    PUSH32(esp, 0x002E73B6u); RECOMP_ABI_CALL(0x002E72F0u, sub_002E72F0); /* call 0x002E72F0 */

loc_002E73B6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x68642C) = ebx;
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(0x758D48) = edi;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x50);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E73F0
 * Original: 0x002E73F0 - 0x002E74A8 (184 bytes, 52 insns)
 * Folder: ai (match: xbox-demo 0x0025F290, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E73F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E73F0: ;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x696508);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = edi;
    PUSH32(esp, 0x002E741Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E741B: ;
    edi = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E7447u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E7440u); } /* indirect call */
    }

loc_002E7447: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002E746A; /* jle: less or equal (signed <=) */

loc_002E7459: ;
    /* nop */

loc_002E7460: ;
    _fa = (uint32_t)(MEM32(esi + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax * 4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E746D; /* je: equal / zero */

loc_002E7465: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002E7460; /* jl: less (signed <) */

loc_002E746A: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002E746D: ;
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x44);
    POP32(esp, esi);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E7465
 * Original: 0x002E7465 - 0x002E74A8 (67 bytes, 20 insns)
 * Folder: ai (between: 0x002E73F0 and 0x002E74B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7465(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E7465: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_002E7460(); return; } /* jl: less (signed <) */

loc_002E746A: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x44);
    POP32(esp, esi);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E74B0
 * Original: 0x002E74B0 - 0x002E7548 (152 bytes, 46 insns)
 * Folder: ai (match: xbox-demo 0x0025F350, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E74B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E74B0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E74BBu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E74BB: ;
    ebx = eax;
    PUSH32(esp, 0x002E74C2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E74C2: ;
    edi = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E74EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E74E7u); } /* indirect call */
    }

loc_002E74EE: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002E750A; /* jle: less or equal (signed <=) */

loc_002E7500: ;
    _fa = (uint32_t)(MEM32(esi + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax * 4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E750D; /* je: equal / zero */

loc_002E7505: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002E7500; /* jl: less (signed <) */

loc_002E750A: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002E750D: ;
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x44);
    POP32(esp, esi);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E7550
 * Original: 0x002E7550 - 0x002E75F5 (165 bytes, 52 insns)
 * Folder: ai (match: xbox-demo 0x0025F3F0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E7550: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E755Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E755C: ;
    ebx = eax;
    PUSH32(esp, 0x002E7563u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7563: ;
    ebp = eax;
    PUSH32(esp, 0x002E756Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E756A: ;
    edi = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E7596u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E758Fu); } /* indirect call */
    }

loc_002E7596: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002E75B6; /* jle: less or equal (signed <=) */

loc_002E75A8: ;
    ecx = MEM32(esi + eax * 4);
    ecx = ecx & ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E75B9; /* je: equal / zero */

loc_002E75B1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002E75A8; /* jl: less (signed <) */

loc_002E75B6: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002E75B9: ;
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x44);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E7600
 * Original: 0x002E7600 - 0x002E7663 (99 bytes, 31 insns)
 * Folder: ai (match: xbox-demo 0x0025F4A0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E7600: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E7608u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7608: ;
    edi = eax;
    PUSH32(esp, 0x002E760Fu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E760F: ;
    esi = eax;
    PUSH32(esp, 0x002E7616u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7616: ;
    ebx = MEM32(0x758D48);
    ecx = esi + edi;
    edi = eax;
    edi = edi >> LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ebx;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esi;
    edi = edi ^ eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(0x758D4C);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = edi;
    POP32(esp, edi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E7670
 * Original: 0x002E7670 - 0x002E7771 (257 bytes, 74 insns)
 * Folder: ai (match: xbox-demo 0x0025F510, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E7670: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E767Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E767B: ;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x002E7684u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7684: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002E768Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E768D: ;
    edi = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E76B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E76B2u); } /* indirect call */
    }

loc_002E76B9: ;
    edx = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    ebx = 0x20;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    edx = SX16(LO16(ecx));
    ecx = esp + 0x54;
    MEM32(0x758D4C) = eax;
    eax = MEM32(eax * 8 + 0x68642C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x43D06C); PUSH32(esp, 0x002E76F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E76EFu); } /* indirect call */
    }

loc_002E76F6: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x758D48) = MEM32(0x758D48) - ebx;
    _fa = (uint32_t)(MEM32(0x758D48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002E772B; /* jle: less or equal (signed <=) */

loc_002E7707: ;
    PUSH32(esp, ebp);

loc_002E7708: ;
    eax = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E7725; /* je: equal / zero */

loc_002E770F: ;
    ebx = MEM32(eax);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002E7725; /* je: equal / zero */

loc_002E7719: ;
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002E7725; /* jne: not equal / not zero */

loc_002E7721: ;
    MEM32(esi + edx * 4) = eax;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002E7725: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002E7708; /* jl: less (signed <) */

loc_002E772A: ;
    POP32(esp, ebp);

loc_002E772B: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    POP32(esp, edi);
    MEM32(eax) = edx;
    eax = MEM32(esp + 0x84);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E7780
 * Original: 0x002E7780 - 0x002E7891 (273 bytes, 77 insns)
 * Folder: ai (match: xbox-demo 0x0025F620, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E7780: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E778Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E778B: ;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x002E7794u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7794: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002E779Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E779D: ;
    ebx = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E77C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E77C2u); } /* indirect call */
    }

loc_002E77C9: ;
    edx = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    edi = 0x20;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    edx = SX16(LO16(ecx));
    ecx = esp + 0x54;
    MEM32(0x758D4C) = eax;
    eax = MEM32(eax * 8 + 0x68642C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x43D06C); PUSH32(esp, 0x002E7806u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E77FFu); } /* indirect call */
    }

loc_002E7806: ;
    ecx = MEM32(0x758D48);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(0x758D48) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_002E784B; /* jle: less or equal (signed <=) */

loc_002E781F: ;
    PUSH32(esp, ebp);

loc_002E7820: ;
    ecx = MEM32(esi + edx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E7845; /* je: equal / zero */

loc_002E7827: ;
    eax = MEM32(ecx + 4);
    ebp = eax;
    ebp = ebp & MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, 0xFF00 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002E7845; /* je: equal / zero */

loc_002E7838: ;
    eax = eax & MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0xFF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002E7845; /* jne: not equal / not zero */

loc_002E7841: ;
    MEM32(esi + edi * 4) = ecx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002E7845: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002E7820; /* jl: less (signed <) */

loc_002E784A: ;
    POP32(esp, ebp);

loc_002E784B: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 0x88);
    POP32(esp, edi);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E7825
 * Original: 0x002E7825 - 0x002E7891 (108 bytes, 32 insns)
 * Folder: ai (between: 0x002E7780 and 0x002E78A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7825(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E7825: ;
    if (_flags /* je: equal / zero */) goto loc_002E7845;

loc_002E7827: ;
    eax = MEM32(ecx + 4);
    ebp = eax;
    ebp = ebp & MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, 0xFF00 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002E7845; /* je: equal / zero */

loc_002E7838: ;
    eax = eax & MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0xFF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002E7845; /* jne: not equal / not zero */

loc_002E7841: ;
    MEM32(esi + edi * 4) = ecx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002E7845: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_002E7820(); return; } /* jl: less (signed <) */

loc_002E784A: ;
    POP32(esp, ebp);
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 0x88);
    POP32(esp, edi);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E78A0
 * Original: 0x002E78A0 - 0x002E791D (125 bytes, 42 insns)
 * Folder: ai (match: xbox-demo 0x0025F740, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E78A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E78A0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E78AAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E78AA: ;
    esi = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    edi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E78D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E78CFu); } /* indirect call */
    }

loc_002E78D6: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x758D48) = MEM32(0x758D48) - 0x20;
    _fa = (uint32_t)(MEM32(0x758D48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    edx = esi;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edi + edx * 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi + edx * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_002E790E; /* je: equal / zero */

loc_002E78FD: ;
    eax = ~eax;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002E790E: ;
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x3C);
    MEM32(edx) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E7920
 * Original: 0x002E7920 - 0x002E7987 (103 bytes, 33 insns)
 * Folder: ai (match: xbox-demo 0x0025F7C0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E7920: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E792Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E792A: ;
    esi = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    edi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E7956u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E794Fu); } /* indirect call */
    }

loc_002E7956: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x758D48) = MEM32(0x758D48) - 0x20;
    _fa = (uint32_t)(MEM32(0x758D48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edi + edx * 4;
    ecx = esi;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x40);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E798A
 * Original: 0x002E798A - 0x002E7990 (6 bytes, 6 insns)
 * Folder: ai (between: 0x002E7920 and 0x002E7990)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E798A(void)
{

loc_002E798A: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_002E7990
 * Original: 0x002E7990 - 0x002E79F9 (105 bytes, 34 insns)
 * Folder: ai (match: xbox-demo 0x0025F830, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E7990: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E799Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E799A: ;
    esi = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    edi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E79C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E79BFu); } /* indirect call */
    }

loc_002E79C6: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x758D48) = MEM32(0x758D48) - 0x20;
    _fa = (uint32_t)(MEM32(0x758D48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edi + edx * 4;
    ecx = esi;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    edx = ~edx;
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x40);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E7A00
 * Original: 0x002E7A00 - 0x002E7A2D (45 bytes, 15 insns)
 * Folder: ai (match: xbox-demo 0x0025F8A0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E7A00: ;
    PUSH32(esp, 0x002E7A05u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7A05: ;
    edx = MEM32(0x758E1C);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = edx + ecx * 4;
    ecx = eax;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edx);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 4);
    MEM32(edx) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E7A30
 * Original: 0x002E7A30 - 0x002E7A5F (47 bytes, 16 insns)
 * Folder: ai (match: xbox-demo 0x0025F8D0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7A30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E7A30: ;
    PUSH32(esp, 0x002E7A35u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7A35: ;
    edx = MEM32(0x758E1C);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = edx + ecx * 4;
    ecx = eax;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edx);
    eax = ~eax;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esp + 4);
    MEM32(edx) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E7A60
 * Original: 0x002E7A60 - 0x002E7AF6 (150 bytes, 43 insns)
 * Folder: ai (match: xbox-demo 0x0025F900, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7A60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002E7A60: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x38));
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E7A6Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7A6A: ;
    esi = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    edi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E7A96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E7A8Fu); } /* indirect call */
    }

loc_002E7A96: ;
    edx = MEM32(0x758D48);
    ecx = esi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(esi)) >> ((((5) & 31u)) - 1)) & 1);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((5) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edi + esi * 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(0x20));
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x20)) >> 32) & 1);
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x44);
    POP32(esp, edi);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x38)) >> 32) & 1);
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E7B00
 * Original: 0x002E7B00 - 0x002E7B64 (100 bytes, 27 insns)
 * Folder: ai (match: xbox-demo 0x0025F9A0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7B00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002E7B00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002E7B06u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7B06: ;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((5) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = 1;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(0x758E1C);
    esi = MEM32(ecx + eax * 4);
    ecx = MEM32(0x758D48);
    _cf = 0; /* logical op clears CF */
    edx = edx & esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx + 0x696528;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x20)) >> 32) & 1);
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E7B70
 * Original: 0x002E7B70 - 0x002E7C4B (219 bytes, 80 insns)
 * Folder: ai (match: xbox-demo 0x0025FA10, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E7B70: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E7B7Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7B7B: ;
    edi = eax;
    PUSH32(esp, 0x002E7B82u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7B82: ;
    ebx = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E7BAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E7BA7u); } /* indirect call */
    }

loc_002E7BAE: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x758D48) = MEM32(0x758D48) - 0x20;
    _fa = (uint32_t)(MEM32(0x758D48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ebx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = esi + edx * 4;
    edx = esi + ecx * 4;
    ecx = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E7BFC; /* jne: not equal / not zero */

loc_002E7BD1: ;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edi;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 2;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax);
    POP32(esp, edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ~esi;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x44);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002E7BFC: ;
    ebx = MEM32(eax);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edi;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ~esi;
    ebx = ebx & esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 2;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + -4) = ebx;
    edi = MEM32(edx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = ~esi;
    edi = edi & esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(edx) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_002E7C3D; /* je: equal / zero */

loc_002E7C26: ;
    goto loc_002E7C30;

    /* nop */
    /* nop */

loc_002E7C30: ;
    MEM32(eax) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E7C30; /* jne: not equal / not zero */

loc_002E7C3D: ;
    eax = MEM32(esp + 0x48);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E7C50
 * Original: 0x002E7C50 - 0x002E7D1B (203 bytes, 74 insns)
 * Folder: ai (match: xbox-demo 0x0025FAF0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E7C50: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E7C5Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7C5B: ;
    edi = eax;
    PUSH32(esp, 0x002E7C62u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7C62: ;
    ebx = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E7C8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E7C87u); } /* indirect call */
    }

loc_002E7C8E: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x758D48) = MEM32(0x758D48) - 0x20;
    _fa = (uint32_t)(MEM32(0x758D48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ebx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = esi + edx * 4;
    edx = esi + ecx * 4;
    ecx = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E7CDA; /* jne: not equal / not zero */

loc_002E7CB1: ;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edi;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 2;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax);
    POP32(esp, edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x44);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002E7CDA: ;
    ebx = MEM32(eax);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edi;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx | esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 2;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + -4) = ebx;
    edi = MEM32(edx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi | esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(edx) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_002E7D0D; /* je: equal / zero */

loc_002E7D00: ;
    MEM32(eax) = 0xFFFFFFFFu;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E7D00; /* jne: not equal / not zero */

loc_002E7D0D: ;
    eax = MEM32(esp + 0x48);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E7D20
 * Original: 0x002E7D20 - 0x002E7D84 (100 bytes, 48 insns)
 * Folder: ai (match: xbox-demo 0x0025FBC0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E7D20: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002E7D73; /* jle: less or equal (signed <=) */

loc_002E7D30: ;
    ebx = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002E7D34: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E7D63; /* je: equal / zero */

loc_002E7D3C: ;
    ecx = eax;
    edi = 1;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = edi;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x14);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + eax * 4), ebp (32-bit) */
    eax = MEM32(ebx + edx);
    if (TEST_Z(_fa, _fb)) goto loc_002E7D5F; /* je: equal / zero */

loc_002E7D59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E7D73; /* je: equal / zero */

loc_002E7D5D: ;
    goto loc_002E7D63;

loc_002E7D5F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E7D73; /* jne: not equal / not zero */

loc_002E7D63: ;
    eax = MEM32(esp + 0x18);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002E7D34; /* jl: less (signed <) */

loc_002E7D6F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E7D7A; /* jne: not equal / not zero */

loc_002E7D73: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002E7D7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E7D90
 * Original: 0x002E7D90 - 0x002E7EB8 (296 bytes, 76 insns)
 * Folder: ai (match: xbox-demo 0x0025FC30, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E7D90: ;
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E7D9Fu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7D9F: ;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x002E7DA8u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7DA8: ;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E7DD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E7DCFu); } /* indirect call */
    }

loc_002E7DD6: ;
    edi = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    ebx = 0x20;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edi;
    edi = MEM32(eax * 8 + 0x68642C);
    MEM32(0x758D4C) = eax;
    eax = esp + 0x5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = SX16(LO16(ecx));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x43D06C); PUSH32(esp, 0x002E7E13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E7E0Cu); } /* indirect call */
    }

loc_002E7E13: ;
    edx = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    edx = esp + 0x9C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, ebx);
    MEM32(0x758D4C) = eax;
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x43D06C); PUSH32(esp, 0x002E7E4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E7E47u); } /* indirect call */
    }

loc_002E7E4E: ;
    ecx = MEM32(esp + 0x30);
    ebp = MEM32(0x758D48);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + 0x696528;
    PUSH32(esp, ebx);
    ecx = esi;
    edx = edi;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x002E7E75u); RECOMP_ABI_CALL(0x002E7D20u, sub_002E7D20); /* call 0x002E7D20 */

loc_002E7E75: ;
    ecx = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC0);
    MEM32(0x758D48) = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E7EC0
 * Original: 0x002E7EC0 - 0x002E7F12 (82 bytes, 39 insns)
 * Folder: ai (match: xbox-demo 0x0025FD60, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002E7EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E7EC0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002E7F0C; /* jle: less or equal (signed <=) */

loc_002E7EC9: ;
    esi = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_002E7ED0: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E7F04; /* je: equal / zero */

loc_002E7ED8: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = 1;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x10);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + eax * 4), ebp (32-bit) */
    eax = MEM32(esi + edx);
    if (TEST_Z(_fa, _fb)) goto loc_002E7F00; /* je: equal / zero */

loc_002E7EF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E7F04; /* je: equal / zero */

loc_002E7EF7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002E7F00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E7EF7; /* je: equal / zero */

loc_002E7F04: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002E7ED0; /* jl: less (signed <) */

loc_002E7F0C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002E7F20
 * Original: 0x002E7F20 - 0x002E8047 (295 bytes, 75 insns)
 * Folder: ai (match: xbox-demo 0x0025FDC0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E7F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E7F20: ;
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E7F2Fu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7F2F: ;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x002E7F38u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E7F38: ;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E7F66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E7F5Fu); } /* indirect call */
    }

loc_002E7F66: ;
    edi = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    ebx = 0x20;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edi;
    edi = MEM32(eax * 8 + 0x68642C);
    MEM32(0x758D4C) = eax;
    eax = esp + 0x5C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = SX16(LO16(ecx));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x43D06C); PUSH32(esp, 0x002E7FA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E7F9Cu); } /* indirect call */
    }

loc_002E7FA3: ;
    edx = MEM32(0x758D48);
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    edx = esp + 0x9C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, ebx);
    MEM32(0x758D4C) = eax;
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x43D06C); PUSH32(esp, 0x002E7FDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E7FD7u); } /* indirect call */
    }

loc_002E7FDE: ;
    ebp = MEM32(0x758D48);
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + 0x696528;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x34);
    eax = esi;
    edx = edi;
    PUSH32(esp, 0x002E8004u); RECOMP_ABI_CALL(0x002E7EC0u, sub_002E7EC0); /* call 0x002E7EC0 */

loc_002E8004: ;
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC0);
    MEM32(0x758D48) = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8050
 * Original: 0x002E8050 - 0x002E80C7 (119 bytes, 43 insns)
 * Folder: ai (match: xbox-demo 0x0025FEF0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8050: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002E8070;

    /* nop */

loc_002E8070: ;
    edx = MEM32(esp + esi * 4 + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E80B6; /* je: equal / zero */

loc_002E8078: ;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2710) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2710 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002E8086; /* jle: less or equal (signed <=) */

loc_002E8081: ;
    _fb = (uint32_t)(0x2710) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x2710;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002E8086: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 1;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = ebx & MEM32(edi + eax * 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x1C) = ebx;
    if ((_fa == 0)) goto loc_002E80AE; /* je: equal / zero */

loc_002E809E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2710) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2710 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002E80B6; /* jle: less or equal (signed <=) */

loc_002E80A6: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002E80AE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2710) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2710 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002E80A6; /* jl: less (signed <) */

loc_002E80B6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002E8070; /* jl: less (signed <) */

loc_002E80BC: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E80D0
 * Original: 0x002E80D0 - 0x002E817D (173 bytes, 48 insns)
 * Folder: ai (match: xbox-demo 0x0025FF70, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E80D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E80D0: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E80DCu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E80DC: ;
    ebp = eax;
    PUSH32(esp, 0x002E80E3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E80E3: ;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x002E80ECu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E80EC: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x002E80F5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E80F5: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    edi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E8123u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E811Cu); } /* indirect call */
    }

loc_002E8123: ;
    esi = MEM32(0x758D48);
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebx = esi + 0x696528;
    PUSH32(esp, 0x002E8144u); RECOMP_ABI_CALL(0x002E8050u, sub_002E8050); /* call 0x002E8050 */

loc_002E8144: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x68642C) = ebx;
    MEM16(eax * 8 + 0x686428) = 1;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = esi;
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x54);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8180
 * Original: 0x002E8180 - 0x002E81CA (74 bytes, 20 insns)
 * Folder: ai (match: xbox-demo 0x00260020, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8180: ;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x68642C);
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E81AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E81A7u); } /* indirect call */
    }

loc_002E81AE: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x758D48) = MEM32(0x758D48) - 0x20;
    _fa = (uint32_t)(MEM32(0x758D48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758E1C) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E81D0
 * Original: 0x002E81D0 - 0x002E8278 (168 bytes, 39 insns)
 * Folder: ai (match: xbox-demo 0x00260070, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E81D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_002E81D0: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx + 0x14);
    edx = edx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E8234; /* je: equal / zero */

loc_002E81FB: ;
    eax = ecx;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E8222; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_002E821F: ;
    xmm0 = xmm1; /* movaps */

loc_002E8222: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E822A; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_002E8227: ;
    xmm0 = xmm2; /* movaps */

loc_002E822A: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429354); /* mulss */
    goto loc_002E8239;

loc_002E8234: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */

loc_002E8239: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8280
 * Original: 0x002E8280 - 0x002E8328 (168 bytes, 39 insns)
 * Folder: ai (match: xbox-demo 0x00260120, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_002E8280: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx + 0x14);
    edx = edx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E82E4; /* je: equal / zero */

loc_002E82AB: ;
    eax = ecx;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E82D2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_002E82CF: ;
    xmm0 = xmm1; /* movaps */

loc_002E82D2: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002E82DA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_002E82D7: ;
    xmm0 = xmm2; /* movaps */

loc_002E82DA: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429354); /* mulss */
    goto loc_002E82E9;

loc_002E82E4: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */

loc_002E82E9: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8330
 * Original: 0x002E8330 - 0x002E852D (509 bytes, 116 insns)
 * Folder: ai (match: xbox-demo 0x002601D0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E8330: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFEu (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_002E8464; /* je: equal / zero */

loc_002E834A: ;
    ecx = MEM32(ebx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x30); /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x34); /* addss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x38); /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002E83B1u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_002E83B1: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x42943C); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x002E83DEu); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_002E83DE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x42943C); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 4) = xmm2.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_002E8431; /* je: equal / zero */

loc_002E840B: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429354); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002E8431: ;
    PUSH32(esp, 0x002E8436u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_002E8436: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x42943C); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002E8464: ;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0xC);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x002E8474u); RECOMP_ABI_CALL(0x000E0DD0u, sub_000E0DD0); /* call 0x000E0DD0 */

loc_002E8474: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    eax = MEM32(ebx + 0x10);
    xmm2 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x1C); /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x002E84C8u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_002E84C8: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x42943C); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x002E84F5u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_002E84F5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x42943C); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 4) = xmm2.f[0]; /* movss */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_002E8528; /* jne: not equal / not zero */

loc_002E8523: ;
    PUSH32(esp, 0x002E8528u); RECOMP_ABI_CALL(0x00348AF2u, sub_00348AF2); /* call 0x00348AF2 */

loc_002E8528: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8530
 * Original: 0x002E8530 - 0x002E85B9 (137 bytes, 34 insns)
 * Folder: ai (match: xbox-demo 0x002603D0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8530: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002E853Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E853A: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    ebx = MEM32(0x758D70);
    PUSH32(esp, eax);
    esi = esp + 0xC;
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002E8562u); RECOMP_ABI_CALL(0x002E8330u, sub_002E8330); /* call 0x002E8330 */

loc_002E8562: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(esp + 0xC);
    eax = ecx + 0x696528;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x18);
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E85C0
 * Original: 0x002E85C0 - 0x002E85FB (59 bytes, 19 insns)
 * Folder: ai (between: 0x002E8530 and 0x002E86B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E85C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E85C0: ;
    eax = MEM32(eax + 0x10);
    edx = MEM32(eax + 0x14);
    edx = edx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E85E0; /* je: equal / zero */

loc_002E85CE: ;
    edx = MEM32(eax + 0x18);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 0x20);
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

loc_002E85E0: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8600
 * Original: 0x002E8600 - 0x002E86AD (173 bytes, 44 insns)
 * Folder: ai (between: 0x002E8530 and 0x002E86B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8600: ;
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    eax = MEM32(eax + 0x10);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFEu (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E863B; /* je: equal / zero */

loc_002E8630: ;
    esi = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x1C);
    edi = MEM32(eax + 0x20);
    goto loc_002E8665;

loc_002E863B: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 0x10);

loc_002E8665: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(eax) = esi;
    MEM32(eax + 8) = edi;
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0x18);
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E86B0
 * Original: 0x002E86B0 - 0x002E8726 (118 bytes, 35 insns)
 * Folder: ai (match: xbox-demo 0x00260530, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E86B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E86B0: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    edx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x69652C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = eax;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x696530);
    eax = MEM32(0x758D6C);
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D64);
    MEM32(0x758D68) = eax;
    eax = MEM32(ecx + 0x10);
    ebx = MEM32(eax + 0x14);
    ebx = ebx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E871B; /* je: equal / zero */

loc_002E8707: ;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = esi;
    MEM32(eax + 0x20) = edi;
    eax = MEM32(ecx + 0x10);
    MEM32(eax) = edx;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;

loc_002E871B: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E8730
 * Original: 0x002E8730 - 0x002E8764 (52 bytes, 17 insns)
 * Folder: ai (between: 0x002E86B0 and 0x002E8820)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8730: ;
    eax = MEM32(eax + 0x10);
    edx = MEM32(eax + 0x14);
    edx = edx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E8750; /* je: equal / zero */

loc_002E873E: ;
    edx = MEM32(eax + 0x24);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 0x2C);
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

loc_002E8750: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8770
 * Original: 0x002E8770 - 0x002E8816 (166 bytes, 42 insns)
 * Folder: ai (between: 0x002E86B0 and 0x002E8820)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8770: ;
    eax = MEM32(0x758D70);
    ecx = MEM32(0x758D6C);
    eax = MEM32(eax + 0x10);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFEu (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E87AB; /* je: equal / zero */

loc_002E87A0: ;
    esi = MEM32(eax + 0x24);
    edx = MEM32(eax + 0x28);
    edi = MEM32(eax + 0x2C);
    goto loc_002E87CE;

loc_002E87AB: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 0x10);

loc_002E87CE: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(eax) = esi;
    MEM32(eax + 8) = edi;
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0x18);
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8820
 * Original: 0x002E8820 - 0x002E8899 (121 bytes, 36 insns)
 * Folder: ai (match: xbox-demo 0x00260680, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8820: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    edx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x69652C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = eax;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x696530);
    eax = MEM32(0x758D6C);
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D64);
    MEM32(0x758D68) = eax;
    eax = MEM32(ecx + 0x10);
    ebx = MEM32(eax + 0x14);
    ebx = ebx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E888E; /* je: equal / zero */

loc_002E8877: ;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = esi;
    MEM32(eax + 0x2C) = edi;
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;

loc_002E888E: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E88A0
 * Original: 0x002E88A0 - 0x002E893A (154 bytes, 44 insns)
 * Folder: ai (match: xbox-demo 0x00260700, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E88A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E88A0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(0x758D68) = ecx;
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_002E88F2; /* js: sign (negative) */

loc_002E88C4: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x44AA20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E88F1; /* je: equal / zero */

loc_002E88CF: ;
    eax = eax | 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = eax;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x2C);
    eax = esi;
    PUSH32(esp, 0x002E88E2u); RECOMP_ABI_CALL(0x0002C900u, sub_0002C900); /* call 0x0002C900 */

loc_002E88E2: ;
    edx = MEM32(ebx + 0x2C);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002E88EDu); RECOMP_ABI_CALL(0x0002C710u, sub_0002C710); /* call 0x0002C710 */

loc_002E88ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_002E88F1: ;
    POP32(esp, ebx);

loc_002E88F2: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(0x758D48);
    edx = MEM32(edx);
    edx = MEM32(edx);
    edx = MEM32(edx + 4);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E8940
 * Original: 0x002E8940 - 0x002E89BE (126 bytes, 55 insns)
 * Folder: ai (match: xbox-demo 0x002607A0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E8940: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    ebx = eax;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_002E897B; /* js: sign (negative) */

loc_002E8951: ;
    esi = MEM32(0x44AA20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E897B; /* je: equal / zero */

loc_002E895B: ;
    eax = eax | 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 4) = eax;
    edi = MEM32(esi + 0x2C);
    eax = ebx;
    PUSH32(esp, 0x002E896Du); RECOMP_ABI_CALL(0x0002C900u, sub_0002C900); /* call 0x0002C900 */

loc_002E896D: ;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002E8978u); RECOMP_ABI_CALL(0x0002C710u, sub_0002C710); /* call 0x0002C710 */

loc_002E8978: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002E897B: ;
    ecx = MEM32(ebx + 0x18);
    edx = MEM32(ecx);
    eax = MEM32(edx);
    edi = MEM32(eax);
    eax = MEM32(eax + 4);
    ebx = edi + eax * 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002E89B0; /* jae: above or equal (unsigned >=) */

loc_002E898E: ;
    edi = edi;

loc_002E8990: ;
    ecx = MEM32(edi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    edx = ebp;
    PUSH32(esp, 0x002E89A2u); RECOMP_ABI_CALL(0x00040590u, sub_00040590); /* call 0x00040590 */

loc_002E89A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E89B7; /* jne: not equal / not zero */

loc_002E89A9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E8990; /* jb: below (unsigned <) */

loc_002E89B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002E89B7: ;
    eax = MEM32(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E89C0
 * Original: 0x002E89C0 - 0x002E8A10 (80 bytes, 25 insns)
 * Folder: ai (match: xbox-demo 0x00260820, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E89C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E89C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E89C7u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E89C7: ;
    esi = eax;
    PUSH32(esp, 0x002E89CEu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E89CE: ;
    edi = eax;
    PUSH32(esp, 0x002E89D5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E89D5: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    PUSH32(esp, esi);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002E89FDu); RECOMP_ABI_CALL(0x002E8940u, sub_002E8940); /* call 0x002E8940 */

loc_002E89FD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E8A03u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002E8A03: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E8A10
 * Original: 0x002E8A10 - 0x002E8AB3 (163 bytes, 66 insns)
 * Folder: ai (match: xbox-demo 0x00260870, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E8A10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = eax;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_002E8A4A; /* js: sign (negative) */

loc_002E8A20: ;
    ebp = MEM32(0x44AA20);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E8A4A; /* je: equal / zero */

loc_002E8A2A: ;
    eax = eax | 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 4) = eax;
    edi = MEM32(ebp + 0x2C);
    eax = ebx;
    PUSH32(esp, 0x002E8A3Cu); RECOMP_ABI_CALL(0x0002C900u, sub_0002C900); /* call 0x0002C900 */

loc_002E8A3C: ;
    eax = MEM32(ebp + 0x2C);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002E8A47u); RECOMP_ABI_CALL(0x0002C710u, sub_0002C710); /* call 0x0002C710 */

loc_002E8A47: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002E8A4A: ;
    ecx = MEM32(ebx + 0x18);
    edx = MEM32(ecx);
    eax = MEM32(edx);
    edi = MEM32(eax);
    eax = MEM32(eax + 4);
    eax = edi + eax * 4;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_002E8AA0; /* jae: above or equal (unsigned >=) */

loc_002E8A63: ;
    ebx = MEM32(edi);
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002E8A73u); RECOMP_ABI_CALL(0x00040590u, sub_00040590); /* call 0x00040590 */

loc_002E8A73: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E8A82; /* je: equal / zero */

loc_002E8A7A: ;
    ecx = MEM32(esp + 0x18);
    MEM32(ecx + ebp * 4) = ebx;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002E8A82: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002E8A63; /* jb: below (unsigned <) */

loc_002E8A8D: ;
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + ebp * 4) = 0;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002E8AA0: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(eax + ebp * 4) = 0;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E8AC0
 * Original: 0x002E8AC0 - 0x002E8B7E (190 bytes, 53 insns)
 * Folder: ai (match: xbox-demo 0x00260920, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E8AC0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E8ACCu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E8ACC: ;
    edi = eax;
    PUSH32(esp, 0x002E8AD3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E8AD3: ;
    ebx = eax;
    PUSH32(esp, 0x002E8ADAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E8ADA: ;
    ebp = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E8B06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E8AFFu); } /* indirect call */
    }

loc_002E8B06: ;
    eax = MEM32(0x758D48);
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D64);
    PUSH32(esp, edi);
    MEM32(0x758D68) = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = ebx;
    MEM32(0x758D70) = edx;
    PUSH32(esp, 0x002E8B39u); RECOMP_ABI_CALL(0x002E8A10u, sub_002E8A10); /* call 0x002E8A10 */

loc_002E8B39: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x44);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8B80
 * Original: 0x002E8B80 - 0x002E8B9B (27 bytes, 13 insns)
 * Folder: ai (between: 0x002E8AC0 and 0x002E8C30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8B80: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E8B87; /* jne: not equal / not zero */

loc_002E8B85: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002E8B87: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = 1;
    PUSH32(esp, 0x002E8B96u); RECOMP_ABI_CALL(0x0003CB70u, sub_0003CB70); /* call 0x0003CB70 */

loc_002E8B96: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E8BA0
 * Original: 0x002E8BA0 - 0x002E8C2F (143 bytes, 33 insns)
 * Folder: ai (between: 0x002E8AC0 and 0x002E8C30)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8BA0: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    edx = MEM32(0x758D6C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(0x758D70);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696528);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E8BF4; /* je: equal / zero */

loc_002E8BE2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = 1;
    PUSH32(esp, 0x002E8BF1u); RECOMP_ABI_CALL(0x0003CB70u, sub_0003CB70); /* call 0x0003CB70 */

loc_002E8BF1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002E8BF4: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8C30
 * Original: 0x002E8C30 - 0x002E8D12 (226 bytes, 60 insns)
 * Folder: ai (match: xbox-demo 0x00260A90, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8C30: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E8C3Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E8C3B: ;
    esi = eax;
    PUSH32(esp, 0x002E8C42u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E8C42: ;
    edi = eax;
    PUSH32(esp, 0x002E8C49u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E8C49: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(edx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E8C6E; /* jne: not equal / not zero */

loc_002E8C64: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x696528); /* cvtsi2ss */
    goto loc_002E8C76;

loc_002E8C6E: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x696528)); /* movss */

loc_002E8C76: ;
    ebx = MEM32(ecx + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = ebx;
    ebx = MEM32(ecx + 0x69652C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = ebx;
    ebx = MEM32(ecx + 0x696550);
    MEM32(0x758D4C) = edx;
    edx = MEM32(ecx + 0x696528);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ecx + 0x69652C);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(0x758D6C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(0x758D70) = edx;
    edx = esp + 0x1C;
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696530);
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    eax = MEM32(0x44AA20);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(0x758D64);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = ebx;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E8CFBu); RECOMP_ABI_CALL(0x000864C0u, sub_000864C0); /* call 0x000864C0 */

loc_002E8CFB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E8D01u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002E8D01: ;
    eax = MEM32(esp + 0x44);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8D20
 * Original: 0x002E8D20 - 0x002E8DA4 (132 bytes, 42 insns)
 * Folder: ai (match: xbox-demo 0x00260B80, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8D20(void)
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

loc_002E8D20: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(eax + 8)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    fp_push(MEMF(eax + 4)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, 1);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(0x44AA20);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x002E8DA0u); RECOMP_ABI_CALL(0x000864C0u, sub_000864C0); /* call 0x000864C0 */

loc_002E8DA0: ;
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
 * sub_002E8DB0
 * Original: 0x002E8DB0 - 0x002E8E70 (192 bytes, 49 insns)
 * Folder: ai (match: xbox-demo 0x00260C10, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8DB0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E8DBAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E8DBA: ;
    esi = eax;
    PUSH32(esp, 0x002E8DC1u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E8DC1: ;
    edi = eax;
    PUSH32(esp, 0x002E8DC8u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E8DC8: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(ecx + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ecx + 0x696530);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D4C) = edx;
    edx = MEM32(ecx + 0x696528);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696530);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(0x758D70);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(0x758D6C);
    MEM32(esp + 8) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = esp + 0xC;
    MEM32(0x758D68) = edx;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    edx = eax;
    ecx = edi;
    eax = esp + 0x20;
    PUSH32(esp, 0x002E8E5Au); RECOMP_ABI_CALL(0x002E8D20u, sub_002E8D20); /* call 0x002E8D20 */

loc_002E8E5A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E8E60u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002E8E60: ;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8E70
 * Original: 0x002E8E70 - 0x002E8E84 (20 bytes, 6 insns)
 * Folder: ai (between: 0x002E8DB0 and 0x002E9060)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8E70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8E70: ;
    ecx = MEM32(0x44AA20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x002E8E80u); RECOMP_ABI_CALL(0x00071530u, sub_00071530); /* call 0x00071530 */

loc_002E8E80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8E90
 * Original: 0x002E8E90 - 0x002E8EFD (109 bytes, 25 insns)
 * Folder: ai (between: 0x002E8DB0 and 0x002E9060)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8E90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8E90: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E8EB2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E8EB2: ;
    ecx = MEM32(0x44AA20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002E8EBEu); RECOMP_ABI_CALL(0x00071530u, sub_00071530); /* call 0x00071530 */

loc_002E8EBE: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E8F00
 * Original: 0x002E8F00 - 0x002E8FAC (172 bytes, 43 insns)
 * Folder: ai (between: 0x002E8DB0 and 0x002E9060)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8F00: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(eax * 8 + 0x68642C);
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E8F2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E8F27u); } /* indirect call */
    }

loc_002E8F2E: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    edx = MEM32(eax + 0x6964E8);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x69652C);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0x696530);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(0x758D6C);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D70);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x44AA20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E8F97u); RECOMP_ABI_CALL(0x000715C0u, sub_000715C0); /* call 0x000715C0 */

loc_002E8F97: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E8F9Du); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002E8F9D: ;
    eax = MEM32(esp + 0x60);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E8FB0
 * Original: 0x002E8FB0 - 0x002E905C (172 bytes, 43 insns)
 * Folder: ai (between: 0x002E8DB0 and 0x002E9060)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E8FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E8FB0: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(eax * 8 + 0x68642C);
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E8FDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E8FD7u); } /* indirect call */
    }

loc_002E8FDE: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    edx = MEM32(eax + 0x6964E8);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x69652C);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0x696530);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(0x758D6C);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D70);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x44AA20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E9047u); RECOMP_ABI_CALL(0x00071810u, sub_00071810); /* call 0x00071810 */

loc_002E9047: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E904Du); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002E904D: ;
    eax = MEM32(esp + 0x60);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E9060
 * Original: 0x002E9060 - 0x002E912D (205 bytes, 50 insns)
 * Folder: ai (match: xbox-demo 0x00260EA0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9060: ;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(eax * 8 + 0x68642C);
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E908Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9087u); } /* indirect call */
    }

loc_002E908E: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E90B5; /* jne: not equal / not zero */

loc_002E90AB: ;
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002E90BD;

loc_002E90B5: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002E90BD: ;
    edx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x69652C);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x696530);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(0x758D6C);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D70);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x44AA20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E9118u); RECOMP_ABI_CALL(0x000715C0u, sub_000715C0); /* call 0x000715C0 */

loc_002E9118: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E911Eu); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002E911E: ;
    eax = MEM32(esp + 0x58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E9130
 * Original: 0x002E9130 - 0x002E91BD (141 bytes, 34 insns)
 * Folder: ai (match: xbox-demo 0x00260F70, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9130: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E9155u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9155: ;
    edx = MEM32(0x44AA20);
    PUSH32(esp, esi);
    ecx = eax;
    esi = esp + 8;
    PUSH32(esp, 0x002E9167u); RECOMP_ABI_CALL(0x00071AC0u, sub_00071AC0); /* call 0x00071AC0 */

loc_002E9167: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(esp + 8);
    eax = ecx + 0x696528;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x14);
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E91C0
 * Original: 0x002E91C0 - 0x002E91DA (26 bytes, 9 insns)
 * Folder: ai (between: 0x002E9130 and 0x002E91E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E91C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E91C0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x44AA20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0x002E91D6u); RECOMP_ABI_CALL(0x00072A80u, sub_00072A80); /* call 0x00072A80 */

loc_002E91D6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E91E0
 * Original: 0x002E91E0 - 0x002E92F1 (273 bytes, 67 insns)
 * Folder: ai (match: xbox-demo 0x00261000, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E91E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E91E0: ;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x68642C);
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E9210u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9209u); } /* indirect call */
    }

loc_002E9210: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E9237; /* jne: not equal / not zero */

loc_002E922D: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002E923F;

loc_002E9237: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002E923F: ;
    edx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x69652C);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 0x696530);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(0x758D48) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x002E9277u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9277: ;
    ecx = MEM32(0x758D70);
    edx = MEM32(0x758D6C);
    ebx = MEM32(0x758D48);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x44AA20);
    edx = eax;
    edi = ebx + 0x696528;
    PUSH32(esp, 0x002E92B9u); RECOMP_ABI_CALL(0x00072A80u, sub_00072A80); /* call 0x00072A80 */

loc_002E92B9: ;
    MEM32(edi) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x68642C) = edi;
    MEM16(eax * 8 + 0x686428) = 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x54);
    POP32(esp, esi);
    MEM32(0x758D48) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E9300
 * Original: 0x002E9300 - 0x002E9312 (18 bytes, 4 insns)
 * Folder: ai (between: 0x002E91E0 and 0x002E9320)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9300: ;
    eax = MEM32(esp + 4);
    MEM32(0x431048) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E9320
 * Original: 0x002E9320 - 0x002E935D (61 bytes, 20 insns)
 * Folder: ai (match: xbox-demo 0x00261140, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9320: ;
    PUSH32(esp, eax);
    eax = MEM32(0x44AA20);
    PUSH32(esp, 0x002E932Bu); RECOMP_ABI_CALL(0x00071B90u, sub_00071B90); /* call 0x00071B90 */

loc_002E932B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E9343; /* je: equal / zero */

loc_002E9332: ;
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 8) = eax;
    esp += 4; return; /* ret */

loc_002E9343: ;
    ecx = MEM32(0x64506C);
    MEM32(esi) = ecx;
    edx = MEM32(0x645070);
    MEM32(esi + 4) = edx;
    eax = MEM32(0x645074);
    MEM32(esi + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002E9360
 * Original: 0x002E9360 - 0x002E93F8 (152 bytes, 39 insns)
 * Folder: ai (match: xbox-demo 0x00261180, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9360: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E9383u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9383: ;
    ecx = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002E9390u); RECOMP_ABI_CALL(0x00071B90u, sub_00071B90); /* call 0x00071B90 */

loc_002E9390: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E93A1; /* je: equal / zero */

loc_002E9397: ;
    edx = MEM32(eax);
    esi = MEM32(eax + 4);
    edi = MEM32(eax + 8);
    goto loc_002E93B3;

loc_002E93A1: ;
    edx = MEM32(0x64506C);
    esi = MEM32(0x645070);
    edi = MEM32(0x645074);

loc_002E93B3: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 0xC);
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002E9400
 * Original: 0x002E9400 - 0x002E9417 (23 bytes, 9 insns)
 * Folder: ai (between: 0x002E9360 and 0x002E94E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9400: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(0x44AA20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E9413u); RECOMP_ABI_CALL(0x00072D90u, sub_00072D90); /* call 0x00072D90 */

loc_002E9413: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E9420
 * Original: 0x002E9420 - 0x002E94D9 (185 bytes, 51 insns)
 * Folder: ai (between: 0x002E9360 and 0x002E94E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E9420: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E942Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E942C: ;
    ebp = eax;
    PUSH32(esp, 0x002E9433u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9433: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E9461u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E945Au); } /* indirect call */
    }

loc_002E9461: ;
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    edi = MEM32(0x758D48);
    MEM32(0x758D70) = edx;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x44AA20);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ebx = edi + 0x696528;
    PUSH32(esp, 0x002E94A0u); RECOMP_ABI_CALL(0x00072D90u, sub_00072D90); /* call 0x00072D90 */

loc_002E94A0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x68642C) = ebx;
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(0x758D48) = edi;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x48);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E94E0
 * Original: 0x002E94E0 - 0x002E95B2 (210 bytes, 53 insns)
 * Folder: ai (match: xbox-demo 0x00261220, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E94E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E94E0: ;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(eax * 8 + 0x68642C);
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E9510u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9509u); } /* indirect call */
    }

loc_002E9510: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x758D48) = MEM32(0x758D48) - 0x20;
    _fa = (uint32_t)(MEM32(0x758D48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x002E951Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E951C: ;
    ecx = MEM32(0x758D64);
    edx = MEM32(0x758D6C);
    ebx = MEM32(0x758D70);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x44AA20);
    PUSH32(esp, eax);
    MEM32(0x758D70) = edx;
    PUSH32(esp, 0x002E9546u); RECOMP_ABI_CALL(0x00071A60u, sub_00071A60); /* call 0x00071A60 */

loc_002E9546: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002E9557; /* je: equal / zero */

loc_002E954D: ;
    edx = MEM32(eax);
    esi = MEM32(eax + 4);
    edi = MEM32(eax + 8);
    goto loc_002E9569;

loc_002E9557: ;
    edx = MEM32(0x64506C);
    esi = MEM32(0x645070);
    edi = MEM32(0x645074);

loc_002E9569: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = edi;
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(eax + 4) = esi;
    MEM32(ecx * 8 + 0x68642C) = eax;
    POP32(esp, edi);
    MEM32(eax) = edx;
    eax = MEM32(esp + 0x44);
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E95C0
 * Original: 0x002E95C0 - 0x002E9629 (105 bytes, 23 insns)
 * Folder: ai (match: xbox-demo 0x00261300, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E95C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E95C0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E95E2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E95E2: ;
    edx = MEM32(0x44AA20);
    PUSH32(esp, 0x002E95EDu); RECOMP_ABI_CALL(0x00071D90u, sub_00071D90); /* call 0x00071D90 */

loc_002E95ED: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E9630
 * Original: 0x002E9630 - 0x002E969D (109 bytes, 23 insns)
 * Folder: ai (between: 0x002E95C0 and 0x002E97A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9630: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E9652u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9652: ;
    edx = MEM32(0x44AA20);
    PUSH32(esp, 0x002E965Du); RECOMP_ABI_CALL(0x00071E30u, sub_00071E30); /* call 0x00071E30 */

loc_002E965D: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E96A0
 * Original: 0x002E96A0 - 0x002E970D (109 bytes, 23 insns)
 * Folder: ai (between: 0x002E95C0 and 0x002E97A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E96A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E96A0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E96C2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E96C2: ;
    edx = MEM32(0x44AA20);
    PUSH32(esp, 0x002E96CDu); RECOMP_ABI_CALL(0x00071EE0u, sub_00071EE0); /* call 0x00071EE0 */

loc_002E96CD: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E9710
 * Original: 0x002E9710 - 0x002E977E (110 bytes, 24 insns)
 * Folder: ai (between: 0x002E95C0 and 0x002E97A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9710: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E9732u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9732: ;
    edx = MEM32(0x44AA20);
    PUSH32(esp, 0x002E973Du); RECOMP_ABI_CALL(0x00071F90u, sub_00071F90); /* call 0x00071F90 */

loc_002E973D: ;
    edx = MEM32(0x758D48);
    ecx = ZX8(LO8(eax));
    eax = edx + 0x696528;
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E9780
 * Original: 0x002E9780 - 0x002E9799 (25 bytes, 8 insns)
 * Folder: ai (between: 0x002E95C0 and 0x002E97A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9780: ;
    edx = MEM32(0x44AA20);
    PUSH32(esp, 0x002E978Bu); RECOMP_ABI_CALL(0x00072030u, sub_00072030); /* call 0x00072030 */

loc_002E978B: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002E9795; /* jne: not equal / not zero */

loc_002E9791: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002E9795: ;
    eax = ZX16(LO16(eax));
    esp += 4; return; /* ret */

}

/**
 * sub_002E97A0
 * Original: 0x002E97A0 - 0x002E9819 (121 bytes, 28 insns)
 * Folder: ai (match: xbox-demo 0x002614C0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E97A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E97A0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E97C2u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E97C2: ;
    edx = MEM32(0x44AA20);
    PUSH32(esp, 0x002E97CDu); RECOMP_ABI_CALL(0x00072030u, sub_00072030); /* call 0x00072030 */

loc_002E97CD: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_002E97D9; /* jne: not equal / not zero */

loc_002E97D4: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002E97DC;

loc_002E97D9: ;
    edx = ZX16(LO16(eax));

loc_002E97DC: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E9820
 * Original: 0x002E9820 - 0x002E988E (110 bytes, 24 insns)
 * Folder: ai (between: 0x002E97A0 and 0x002E9890)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9820: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002E9842u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9842: ;
    edx = MEM32(0x44AA20);
    PUSH32(esp, 0x002E984Du); RECOMP_ABI_CALL(0x000720E0u, sub_000720E0); /* call 0x000720E0 */

loc_002E984D: ;
    edx = MEM32(0x758D48);
    ecx = ZX8(LO8(eax));
    eax = edx + 0x696528;
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D48) = edx;
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E9890
 * Original: 0x002E9890 - 0x002E98D3 (67 bytes, 17 insns)
 * Folder: ai (match: xbox-demo 0x002615B0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002E9890: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002E9896u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9896: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    ebx = MEM32(0x758D70);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    edx = MEM32(0x44AA20);
    ecx = eax;
    PUSH32(esp, 0x002E98C1u); RECOMP_ABI_CALL(0x00071C30u, sub_00071C30); /* call 0x00071C30 */

loc_002E98C1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002E98C7u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002E98C7: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002E98E0
 * Original: 0x002E98E0 - 0x002E990F (47 bytes, 22 insns)
 * Folder: ai (between: 0x002E9890 and 0x002E9910)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002E98E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002E98E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E990C; /* je: equal / zero */

loc_002E98E4: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E990C; /* je: equal / zero */

loc_002E98EB: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E990C; /* je: equal / zero */

loc_002E98F1: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E990C; /* je: equal / zero */

loc_002E98F8: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E990C; /* je: equal / zero */

loc_002E98FE: ;
    ecx = MEM32(ecx + 8);
    SET_LO8(ecx, MEM8(edx + ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 4) (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

loc_002E990C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E9910
 * Original: 0x002E9910 - 0x002E999E (142 bytes, 40 insns)
 * Folder: ai (match: xbox-demo 0x00261600, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002E9910: ;
    PUSH32(esp, 0x002E9915u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9915: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002E9961; /* je: equal / zero */

loc_002E9937: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E9961; /* je: equal / zero */

loc_002E993E: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E9961; /* je: equal / zero */

loc_002E9944: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E9961; /* je: equal / zero */

loc_002E994B: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002E9961; /* je: equal / zero */

loc_002E9951: ;
    edx = MEM32(edx + 8);
    eax = ZX8(MEM8(eax + edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 4) (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    goto loc_002E9963;

loc_002E9961: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002E9963: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x20)) >> 32) & 1);
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E99A0
 * Original: 0x002E99A0 - 0x002E9A7E (222 bytes, 62 insns)
 * Folder: ai (match: xbox-demo 0x00261690, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E99A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E99A0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E99ACu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E99AC: ;
    edi = eax;
    PUSH32(esp, 0x002E99B3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E99B3: ;
    ebp = eax;
    PUSH32(esp, 0x002E99BAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E99BA: ;
    ebx = eax;
    PUSH32(esp, 0x002E99C1u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E99C1: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x002E99CAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E99CA: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E99F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E99F1u); } /* indirect call */
    }

loc_002E99F8: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    eax = MEM32(0x758D48);
    PUSH32(esp, esi);
    MEM32(0x758D70) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D64);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x30));
    MEM32(0x758D68) = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002E9A39u); RECOMP_ABI_CALL(0x0003FE70u, sub_0003FE70); /* call 0x0003FE70 */

loc_002E9A39: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x4C);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E9A80
 * Original: 0x002E9A80 - 0x002E9B54 (212 bytes, 60 insns)
 * Folder: ai (match: xbox-demo 0x00261770, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E9A80: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E9A8Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9A8C: ;
    edi = eax;
    PUSH32(esp, 0x002E9A93u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9A93: ;
    ebx = eax;
    PUSH32(esp, 0x002E9A9Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9A9A: ;
    ebp = eax;
    PUSH32(esp, 0x002E9AA1u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9AA1: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E9ACFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9AC8u); } /* indirect call */
    }

loc_002E9ACF: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    eax = MEM32(0x758D48);
    PUSH32(esp, esi);
    MEM32(0x758D70) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D64);
    PUSH32(esp, ebx);
    MEM32(0x758D68) = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0x002E9B0Fu); RECOMP_ABI_CALL(0x0003FE70u, sub_0003FE70); /* call 0x0003FE70 */

loc_002E9B0F: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x48);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E9B60
 * Original: 0x002E9B60 - 0x002E9C33 (211 bytes, 60 insns)
 * Folder: ai (match: xbox-demo 0x00261850, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E9B60: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E9B6Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9B6C: ;
    edi = eax;
    PUSH32(esp, 0x002E9B73u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9B73: ;
    ebx = eax;
    PUSH32(esp, 0x002E9B7Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9B7A: ;
    ebp = eax;
    PUSH32(esp, 0x002E9B81u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9B81: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E9BAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9BA8u); } /* indirect call */
    }

loc_002E9BAF: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    eax = MEM32(0x758D48);
    PUSH32(esp, esi);
    MEM32(0x758D70) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D64);
    PUSH32(esp, ebx);
    MEM32(0x758D68) = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 0xFE);
    PUSH32(esp, 0x002E9BEEu); RECOMP_ABI_CALL(0x0003FE70u, sub_0003FE70); /* call 0x0003FE70 */

loc_002E9BEE: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x48);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E9C40
 * Original: 0x002E9C40 - 0x002E9D07 (199 bytes, 57 insns)
 * Folder: ai (match: xbox-demo 0x00261930, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E9C40: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E9C4Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9C4C: ;
    edi = eax;
    PUSH32(esp, 0x002E9C53u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9C53: ;
    ebx = eax;
    PUSH32(esp, 0x002E9C5Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9C5A: ;
    ebp = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E9C86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9C7Fu); } /* indirect call */
    }

loc_002E9C86: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D70);
    edx = MEM32(0x758D6C);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D64);
    PUSH32(esp, ebx);
    MEM32(0x758D68) = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 0xFD);
    MEM32(0x758D70) = edx;
    PUSH32(esp, 0x002E9CC2u); RECOMP_ABI_CALL(0x0003FE70u, sub_0003FE70); /* call 0x0003FE70 */

loc_002E9CC2: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x44);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E9D10
 * Original: 0x002E9D10 - 0x002E9DD7 (199 bytes, 57 insns)
 * Folder: ai (match: xbox-demo 0x00261A00, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E9D10: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E9D1Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9D1C: ;
    edi = eax;
    PUSH32(esp, 0x002E9D23u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9D23: ;
    ebx = eax;
    PUSH32(esp, 0x002E9D2Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9D2A: ;
    ebp = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E9D56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9D4Fu); } /* indirect call */
    }

loc_002E9D56: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D70);
    edx = MEM32(0x758D6C);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D64);
    PUSH32(esp, ebx);
    MEM32(0x758D68) = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 0xFC);
    MEM32(0x758D70) = edx;
    PUSH32(esp, 0x002E9D92u); RECOMP_ABI_CALL(0x0003FE70u, sub_0003FE70); /* call 0x0003FE70 */

loc_002E9D92: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x44);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E9DE0
 * Original: 0x002E9DE0 - 0x002E9EB3 (211 bytes, 60 insns)
 * Folder: ai (match: xbox-demo 0x00261AD0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E9DE0: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E9DECu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9DEC: ;
    edi = eax;
    PUSH32(esp, 0x002E9DF3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9DF3: ;
    ebx = eax;
    PUSH32(esp, 0x002E9DFAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9DFA: ;
    ebp = eax;
    PUSH32(esp, 0x002E9E01u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9E01: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E9E2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9E28u); } /* indirect call */
    }

loc_002E9E2F: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    eax = MEM32(0x758D48);
    PUSH32(esp, esi);
    MEM32(0x758D70) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D64);
    PUSH32(esp, ebx);
    MEM32(0x758D68) = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 0xFB);
    PUSH32(esp, 0x002E9E6Eu); RECOMP_ABI_CALL(0x0003FE70u, sub_0003FE70); /* call 0x0003FE70 */

loc_002E9E6E: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x48);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E9EC0
 * Original: 0x002E9EC0 - 0x002E9F93 (211 bytes, 60 insns)
 * Folder: ai (match: xbox-demo 0x00261BB0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E9EC0: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E9ECCu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9ECC: ;
    edi = eax;
    PUSH32(esp, 0x002E9ED3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9ED3: ;
    ebx = eax;
    PUSH32(esp, 0x002E9EDAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9EDA: ;
    ebp = eax;
    PUSH32(esp, 0x002E9EE1u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9EE1: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E9F0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9F08u); } /* indirect call */
    }

loc_002E9F0F: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    eax = MEM32(0x758D48);
    PUSH32(esp, esi);
    MEM32(0x758D70) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D64);
    PUSH32(esp, ebx);
    MEM32(0x758D68) = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 0xFA);
    PUSH32(esp, 0x002E9F4Eu); RECOMP_ABI_CALL(0x0003FE70u, sub_0003FE70); /* call 0x0003FE70 */

loc_002E9F4E: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x48);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002E9FA0
 * Original: 0x002E9FA0 - 0x002EA073 (211 bytes, 60 insns)
 * Folder: ai (match: xbox-demo 0x00261C90, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002E9FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002E9FA0: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002E9FACu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9FAC: ;
    edi = eax;
    PUSH32(esp, 0x002E9FB3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9FB3: ;
    ebx = eax;
    PUSH32(esp, 0x002E9FBAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9FBA: ;
    ebp = eax;
    PUSH32(esp, 0x002E9FC1u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002E9FC1: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002E9FEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002E9FE8u); } /* indirect call */
    }

loc_002E9FEF: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    eax = MEM32(0x758D48);
    PUSH32(esp, esi);
    MEM32(0x758D70) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D64);
    PUSH32(esp, ebx);
    MEM32(0x758D68) = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 0xEF);
    PUSH32(esp, 0x002EA02Eu); RECOMP_ABI_CALL(0x0003FE70u, sub_0003FE70); /* call 0x0003FE70 */

loc_002EA02E: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x48);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EA080
 * Original: 0x002EA080 - 0x002EA153 (211 bytes, 60 insns)
 * Folder: ai (match: xbox-demo 0x00261D70, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EA080: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EA08Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA08C: ;
    edi = eax;
    PUSH32(esp, 0x002EA093u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA093: ;
    ebx = eax;
    PUSH32(esp, 0x002EA09Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA09A: ;
    ebp = eax;
    PUSH32(esp, 0x002EA0A1u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA0A1: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x758D4C);
    SET_LO16(ecx, MEM16(eax * 8 + 0x686420));
    esi = MEM32(eax * 8 + 0x686424);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x43D06C); PUSH32(esp, 0x002EA0CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EA0C8u); } /* indirect call */
    }

loc_002EA0CF: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    eax = MEM32(0x758D48);
    PUSH32(esp, esi);
    MEM32(0x758D70) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D64);
    PUSH32(esp, ebx);
    MEM32(0x758D68) = eax;
    eax = MEM32(0x44AA20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 0xEE);
    PUSH32(esp, 0x002EA10Eu); RECOMP_ABI_CALL(0x0003FE70u, sub_0003FE70); /* call 0x0003FE70 */

loc_002EA10E: ;
    edx = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0x48);
    POP32(esp, ebp);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EA160
 * Original: 0x002EA160 - 0x002EA1F7 (151 bytes, 38 insns)
 * Folder: ai (match: xbox-demo 0x00261E50, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA160: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EA167u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA167: ;
    esi = eax;
    PUSH32(esp, 0x002EA16Eu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA16E: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(0x758D4C);
    edi = MEM32(0x758D6C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696528);
    PUSH32(esp, ecx);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = edx;
    edx = MEM32(0x758D70);
    PUSH32(esp, esi);
    MEM32(0x758D70) = edi;
    edi = MEM32(0x758D64);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(0x758D68) = edi;
    PUSH32(esp, 0x002EA1B7u); RECOMP_ABI_CALL(0x0003F5F0u, sub_0003F5F0); /* call 0x0003F5F0 */

loc_002EA1B7: ;
    edx = MEM32(0x758D48);
    ecx = edx + 0x696528;
    MEM32(ecx) = eax;
    eax = MEM32(0x758D4C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x686428) = 1;
    MEM32(eax * 8 + 0x68642C) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(0x758D48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EA200
 * Original: 0x002EA200 - 0x002EA280 (128 bytes, 36 insns)
 * Folder: ai (between: 0x002EA160 and 0x002EA520)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EA200: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EA209u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA209: ;
    ebx = MEM32(0x758D48);
    edx = MEM32(0x758D70);
    ebp = MEM32(0x758D6C);
    esi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebx + 0x696528);
    edi = ebx + 0x696528;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM32(0x758D70) = ebp;
    ebp = MEM32(0x758D64);
    PUSH32(esp, eax);
    eax = edx;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D68) = ebp;
    PUSH32(esp, 0x002EA24Eu); RECOMP_ABI_CALL(0x0003F150u, sub_0003F150); /* call 0x0003F150 */

loc_002EA24E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 8 + 0x68642C) = edi;
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x14);
    MEM16(esi * 8 + 0x686428) = 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x758D48) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EA280
 * Original: 0x002EA280 - 0x002EA2FF (127 bytes, 35 insns)
 * Folder: ai (between: 0x002EA160 and 0x002EA520)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EA280: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EA289u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA289: ;
    ebx = MEM32(0x758D48);
    edx = MEM32(0x758D70);
    ebp = MEM32(0x758D6C);
    esi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebx + 0x696528);
    PUSH32(esp, 0);
    edi = ebx + 0x696528;
    MEM32(0x758D70) = ebp;
    ebp = MEM32(0x758D64);
    PUSH32(esp, eax);
    eax = edx;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D68) = ebp;
    PUSH32(esp, 0x002EA2CDu); RECOMP_ABI_CALL(0x0003E8D0u, sub_0003E8D0); /* call 0x0003E8D0 */

loc_002EA2CD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 8 + 0x68642C) = edi;
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x14);
    MEM16(esi * 8 + 0x686428) = 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x758D48) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EA300
 * Original: 0x002EA300 - 0x002EA371 (113 bytes, 30 insns)
 * Folder: ai (between: 0x002EA160 and 0x002EA520)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA300: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D48);
    PUSH32(esp, esi);
    esi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebx + 0x696528);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D64);
    edi = ebx + 0x696528;
    PUSH32(esp, 0);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D68) = eax;
    PUSH32(esp, 0x002EA340u); RECOMP_ABI_CALL(0x0003EC10u, sub_0003EC10); /* call 0x0003EC10 */

loc_002EA340: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 8 + 0x68642C) = edi;
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x10);
    MEM16(esi * 8 + 0x686428) = 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = esi;
    POP32(esp, esi);
    MEM32(0x758D48) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EA380
 * Original: 0x002EA380 - 0x002EA413 (147 bytes, 38 insns)
 * Folder: ai (between: 0x002EA160 and 0x002EA520)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EA380: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D4C);
    PUSH32(esp, ebp);
    ebp = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x69652C);
    edx = MEM32(ebp + 0x696530);
    eax = MEM32(ebp + 0x696528);
    PUSH32(esp, esi);
    esi = ebp + 0x696528;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(0x758D6C);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(0x758D64);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x758D70);
    edi = esp + 0x10;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002EA3E1u); RECOMP_ABI_CALL(0x0003EE80u, sub_0003EE80); /* call 0x0003EE80 */

loc_002EA3E1: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(ebx * 8 + 0x68642C) = esi;
    MEM16(ebx * 8 + 0x686428) = 1;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x758D48) = ebp;
    POP32(esp, ebp);
    MEM32(0x758D4C) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EA420
 * Original: 0x002EA420 - 0x002EA491 (113 bytes, 30 insns)
 * Folder: ai (between: 0x002EA160 and 0x002EA520)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EA420: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    PUSH32(esp, ebx);
    ebx = MEM32(0x758D48);
    PUSH32(esp, esi);
    esi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebx + 0x696528);
    PUSH32(esp, edi);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x758D64);
    edi = ebx + 0x696528;
    PUSH32(esp, 1);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D68) = eax;
    PUSH32(esp, 0x002EA460u); RECOMP_ABI_CALL(0x0003EC10u, sub_0003EC10); /* call 0x0003EC10 */

loc_002EA460: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 8 + 0x68642C) = edi;
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x10);
    MEM16(esi * 8 + 0x686428) = 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = esi;
    POP32(esp, esi);
    MEM32(0x758D48) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EA4A0
 * Original: 0x002EA4A0 - 0x002EA51F (127 bytes, 35 insns)
 * Folder: ai (between: 0x002EA160 and 0x002EA520)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA4A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EA4A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EA4A9u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA4A9: ;
    ebx = MEM32(0x758D48);
    edx = MEM32(0x758D70);
    ebp = MEM32(0x758D6C);
    esi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebx + 0x696528);
    PUSH32(esp, 0);
    edi = ebx + 0x696528;
    MEM32(0x758D70) = ebp;
    ebp = MEM32(0x758D64);
    PUSH32(esp, eax);
    eax = edx;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D68) = ebp;
    PUSH32(esp, 0x002EA4EDu); RECOMP_ABI_CALL(0x0003E5A0u, sub_0003E5A0); /* call 0x0003E5A0 */

loc_002EA4ED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 8 + 0x68642C) = edi;
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x14);
    MEM16(esi * 8 + 0x686428) = 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x758D48) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EA520
 * Original: 0x002EA520 - 0x002EA61F (255 bytes, 131 insns)
 * Folder: ai (match: xbox-demo 0x00262250, library)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EA520: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x44AA20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 5 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_A(_fa, _fb)) goto loc_002EA619; /* ja: above (unsigned >) */

loc_002EA53A: ;
    { uint32_t _jt = MEM32(ebp * 4 + 0x2EA620); /* switch: 6 entries, 6 targets */
    if (_jt == 0x002EA541u) goto loc_002EA541;
    if (_jt == 0x002EA566u) goto loc_002EA566;
    if (_jt == 0x002EA58Bu) goto loc_002EA58B;
    if (_jt == 0x002EA5B0u) goto loc_002EA5B0;
    if (_jt == 0x002EA5D5u) goto loc_002EA5D5;
    if (_jt == 0x002EA5FAu) goto loc_002EA5FA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002EA541: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EA55Fu); RECOMP_ABI_CALL(0x000879E0u, sub_000879E0); /* call 0x000879E0 */

loc_002EA55F: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002EA566: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EA584u); RECOMP_ABI_CALL(0x000879E0u, sub_000879E0); /* call 0x000879E0 */

loc_002EA584: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002EA58B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002EA5A9u); RECOMP_ABI_CALL(0x000879E0u, sub_000879E0); /* call 0x000879E0 */

loc_002EA5A9: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002EA5B0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EA5CEu); RECOMP_ABI_CALL(0x000879E0u, sub_000879E0); /* call 0x000879E0 */

loc_002EA5CE: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002EA5D5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EA5F3u); RECOMP_ABI_CALL(0x000879E0u, sub_000879E0); /* call 0x000879E0 */

loc_002EA5F3: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002EA5FA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002EA612u); RECOMP_ABI_CALL(0x000865E0u, sub_000865E0); /* call 0x000865E0 */

loc_002EA612: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002EA619: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EA640
 * Original: 0x002EA640 - 0x002EA750 (272 bytes, 79 insns)
 * Folder: ai (match: xbox-demo 0x00262370, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EA640: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EA64Bu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA64B: ;
    esi = eax;
    PUSH32(esp, 0x002EA652u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA652: ;
    edi = eax;
    PUSH32(esp, 0x002EA659u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA659: ;
    ebx = eax;
    PUSH32(esp, 0x002EA660u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA660: ;
    ecx = MEM32(0x758D4C);
    edx = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EA686; /* jne: not equal / not zero */

loc_002EA67C: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002EA68E;

loc_002EA686: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002EA68E: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x696528);
    MEM32(esp + 0x20) = ebp;
    ebp = MEM32(eax + 0x69652C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x24) = ebp;
    ebp = MEM32(eax + 0x696550);
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x696528);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 0x69652C);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(0x758D6C);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x758D70);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758D64);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(0x758E24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x28) = ebp;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_002EA717; /* jne: not equal / not zero */

loc_002EA70D: ;
    MEM32(0x758E24) = 1;

loc_002EA717: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = edi;
    ecx = ebx;
    esi = esp + 0x2C;
    PUSH32(esp, 0x002EA730u); RECOMP_ABI_CALL(0x002EA520u, sub_002EA520); /* call 0x002EA520 */

loc_002EA730: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EA736u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002EA736: ;
    eax = MEM32(esp + 0x40);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EA750
 * Original: 0x002EA750 - 0x002EA856 (262 bytes, 129 insns)
 * Folder: ai (between: 0x002EA640 and 0x002EAFB0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EA750: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x44AA20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 5 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_A(_fa, _fb)) goto loc_002EA850; /* ja: above (unsigned >) */

loc_002EA76A: ;
    { uint32_t _jt = MEM32(ebp * 4 + 0x2EA858); /* switch: 6 entries, 6 targets */
    if (_jt == 0x002EA771u) goto loc_002EA771;
    if (_jt == 0x002EA7A0u) goto loc_002EA7A0;
    if (_jt == 0x002EA7A4u) goto loc_002EA7A4;
    if (_jt == 0x002EA7D3u) goto loc_002EA7D3;
    if (_jt == 0x002EA802u) goto loc_002EA802;
    if (_jt == 0x002EA831u) goto loc_002EA831;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002EA771: ;
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EA799u); RECOMP_ABI_CALL(0x00088D80u, sub_00088D80); /* call 0x00088D80 */

loc_002EA799: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002EA7A0: ;
    PUSH32(esp, 0);
    goto loc_002EA804;

loc_002EA7A4: ;
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002EA7CCu); RECOMP_ABI_CALL(0x00088D80u, sub_00088D80); /* call 0x00088D80 */

loc_002EA7CC: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002EA7D3: ;
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EA7FBu); RECOMP_ABI_CALL(0x00088D80u, sub_00088D80); /* call 0x00088D80 */

loc_002EA7FB: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002EA802: ;
    PUSH32(esp, 1);

loc_002EA804: ;
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EA82Au); RECOMP_ABI_CALL(0x00088D80u, sub_00088D80); /* call 0x00088D80 */

loc_002EA82A: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002EA831: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002EA849u); RECOMP_ABI_CALL(0x000865E0u, sub_000865E0); /* call 0x000865E0 */

loc_002EA849: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002EA850: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EA856
 * Original: 0x002EA856 - 0x002EA9AA (340 bytes, 90 insns)
 * Folder: ai (between: 0x002EA640 and 0x002EAFB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA856(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EA856: ;
    edi = edi;
    MEM32(eax + -1485766610) = MEM32(eax + -1485766610) ^ ebp;
    _fa = (uint32_t)(MEM32(eax + -1485766610)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + -1543491929) = MEM8(eax + -1543491929) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + -1543491929)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    ecx = _rc; }
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    ecx = _rc; }
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x2E (8-bit) */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx + 0x48A124EC) = MEM8(ebx + 0x48A124EC) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx + 0x48A124EC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esi = ebp;
    edx = MEM32(0x758D4C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x696528);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = edx;
    PUSH32(esp, 0x002EA89Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA89C: ;
    edi = eax;
    PUSH32(esp, 0x002EA8A3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA8A3: ;
    ebx = eax;
    PUSH32(esp, 0x002EA8AAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA8AA: ;
    ebp = eax;
    PUSH32(esp, 0x002EA8B1u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA8B1: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x002EA8BAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA8BA: ;
    ecx = MEM32(0x758D4C);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EA8E2; /* jne: not equal / not zero */

loc_002EA8D8: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002EA8EA;

loc_002EA8E2: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002EA8EA: ;
    edx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 0x69652C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 0x696550);
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x696528);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(eax + 0x69652C);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(0x758D6C);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x758D70);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758E24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(0x758D64);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(0x758D68) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_002EA971; /* jne: not equal / not zero */

loc_002EA967: ;
    MEM32(0x758E24) = 1;

loc_002EA971: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    eax = ebp;
    esi = esp + 0x40;
    PUSH32(esp, 0x002EA992u); RECOMP_ABI_CALL(0x002EA750u, sub_002EA750); /* call 0x002EA750 */

loc_002EA992: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EA998u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002EA998: ;
    eax = MEM32(esp + 0x54);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EA870
 * Original: 0x002EA870 - 0x002EA9AA (314 bytes, 82 insns)
 * Folder: ai (between: 0x002EA640 and 0x002EAFB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EA870: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D48);
    edx = MEM32(0x758D4C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x696528);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = edx;
    PUSH32(esp, 0x002EA89Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA89C: ;
    edi = eax;
    PUSH32(esp, 0x002EA8A3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA8A3: ;
    ebx = eax;
    PUSH32(esp, 0x002EA8AAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA8AA: ;
    ebp = eax;
    PUSH32(esp, 0x002EA8B1u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA8B1: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x002EA8BAu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EA8BA: ;
    ecx = MEM32(0x758D4C);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x758D48);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EA8E2; /* jne: not equal / not zero */

loc_002EA8D8: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    goto loc_002EA8EA;

loc_002EA8E2: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */

loc_002EA8EA: ;
    edx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 0x69652C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 0x696550);
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x696528);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(eax + 0x69652C);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(0x758D6C);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x758D70);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758E24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(0x758D64);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(0x758D68) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_002EA971; /* jne: not equal / not zero */

loc_002EA967: ;
    MEM32(0x758E24) = 1;

loc_002EA971: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    eax = ebp;
    esi = esp + 0x40;
    PUSH32(esp, 0x002EA992u); RECOMP_ABI_CALL(0x002EA750u, sub_002EA750); /* call 0x002EA750 */

loc_002EA992: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EA998u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002EA998: ;
    eax = MEM32(esp + 0x54);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EA9B0
 * Original: 0x002EA9B0 - 0x002EAB38 (392 bytes, 166 insns)
 * Folder: ai (between: 0x002EA640 and 0x002EAFB0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EA9B0(void)
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

loc_002EA9B0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(eax + 8)); /* fld float */
    PUSH32(esp, ebx);
    fp_push(MEMF(eax + 4)); /* fld float */
    ebx = MEM32(0x44AA20);
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, ebp);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ebp = MEM32(esp + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x429350)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002EAB30; /* jnp: not parity */

loc_002EA9FF: ;
    eax = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 8); /* divss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_A(_fa, _fb)) goto loc_002EAB30; /* ja: above (unsigned >) */

loc_002EAA45: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2EAB38); /* switch: 6 entries, 6 targets */
    if (_jt == 0x002EAA4Cu) goto loc_002EAA4C;
    if (_jt == 0x002EAA73u) goto loc_002EAA73;
    if (_jt == 0x002EAA9Au) goto loc_002EAA9A;
    if (_jt == 0x002EAAC1u) goto loc_002EAAC1;
    if (_jt == 0x002EAAE8u) goto loc_002EAAE8;
    if (_jt == 0x002EAB0Fu) goto loc_002EAB0F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002EAA4C: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002EAA6Au); RECOMP_ABI_CALL(0x000879E0u, sub_000879E0); /* call 0x000879E0 */

loc_002EAA6A: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002EAA73: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002EAA91u); RECOMP_ABI_CALL(0x000879E0u, sub_000879E0); /* call 0x000879E0 */

loc_002EAA91: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002EAA9A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002EAAB8u); RECOMP_ABI_CALL(0x000879E0u, sub_000879E0); /* call 0x000879E0 */

loc_002EAAB8: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002EAAC1: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002EAADFu); RECOMP_ABI_CALL(0x000879E0u, sub_000879E0); /* call 0x000879E0 */

loc_002EAADF: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002EAAE8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002EAB06u); RECOMP_ABI_CALL(0x000879E0u, sub_000879E0); /* call 0x000879E0 */

loc_002EAB06: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002EAB0F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002EAB27u); RECOMP_ABI_CALL(0x000865E0u, sub_000865E0); /* call 0x000865E0 */

loc_002EAB27: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002EAB30: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_002EAB50
 * Original: 0x002EAB50 - 0x002EAC30 (224 bytes, 62 insns)
 * Folder: ai (between: 0x002EA640 and 0x002EAFB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EAB50: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EAB5Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAB5C: ;
    edi = eax;
    PUSH32(esp, 0x002EAB63u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAB63: ;
    ebx = eax;
    PUSH32(esp, 0x002EAB6Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAB6A: ;
    ebp = eax;
    PUSH32(esp, 0x002EAB71u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAB71: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(ecx + 0x696508);
    esi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 0x696530);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ecx + 0x696528);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696530);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(0x758D6C);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758E20);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x758D4C) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_002EAC00; /* jne: not equal / not zero */

loc_002EABF6: ;
    MEM32(0x758E20) = 1;

loc_002EAC00: ;
    PUSH32(esp, edi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = ebx;
    edx = ebp;
    esi = eax;
    edi = esp + 0x28;
    PUSH32(esp, 0x002EAC16u); RECOMP_ABI_CALL(0x002EA9B0u, sub_002EA9B0); /* call 0x002EA9B0 */

loc_002EAC16: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EAC1Cu); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002EAC1C: ;
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EAC30
 * Original: 0x002EAC30 - 0x002EAD26 (246 bytes, 100 insns)
 * Folder: ai (between: 0x002EA640 and 0x002EAFB0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAC30(void)
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

loc_002EAC30: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(eax + 8)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    fp_push(MEMF(eax + 4)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, ebx);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ebx = MEM32(0x44AA20);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, ebp);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    ebp = MEM32(esp + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xC); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_A(_fa, _fb)) goto loc_002EAD1D; /* ja: above (unsigned >) */

loc_002EACA6: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2EAD28); /* switch: 6 entries, 6 targets */
    if (_jt == 0x002EACADu) goto loc_002EACAD;
    if (_jt == 0x002EACB5u) goto loc_002EACB5;
    if (_jt == 0x002EACB9u) goto loc_002EACB9;
    if (_jt == 0x002EACC1u) goto loc_002EACC1;
    if (_jt == 0x002EACC9u) goto loc_002EACC9;
    if (_jt == 0x002EACFBu) goto loc_002EACFB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002EACAD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    goto loc_002EACCF;

loc_002EACB5: ;
    PUSH32(esp, 0);
    goto loc_002EACCB;

loc_002EACB9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    goto loc_002EACCF;

loc_002EACC1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    goto loc_002EACCF;

loc_002EACC9: ;
    PUSH32(esp, 1);

loc_002EACCB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);

loc_002EACCF: ;
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002EACF1u); RECOMP_ABI_CALL(0x00088D80u, sub_00088D80); /* call 0x00088D80 */

loc_002EACF1: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002EACFB: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002EAD13u); RECOMP_ABI_CALL(0x000865E0u, sub_000865E0); /* call 0x000865E0 */

loc_002EAD13: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002EAD1D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_002EAD26
 * Original: 0x002EAD26 - 0x002EAE4B (293 bytes, 80 insns)
 * Folder: ai (between: 0x002EA640 and 0x002EAFB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAD26(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EAD26: ;
    edi = edi;
    RECOMP_UNIMPL("sti", 0x002EAD28u); /* TODO: sti */
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebp + -1258279252) = MEM8(ebp + -1258279252) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebp + -1258279252)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + -1056952660) = MEM8(ecx + -1056952660) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ecx + -1056952660)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx + 0x48A11CEC) = MEM8(ebx + 0x48A11CEC) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx + 0x48A11CEC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esi = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x696528);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = esi;
    PUSH32(esp, 0x002EAD6Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAD6C: ;
    ebx = eax;
    PUSH32(esp, 0x002EAD73u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAD73: ;
    ebp = eax;
    PUSH32(esp, 0x002EAD7Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAD7A: ;
    esi = eax;
    PUSH32(esp, 0x002EAD81u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAD81: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002EAD8Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAD8A: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(ecx + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ecx + 0x696530);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D4C) = edx;
    edx = MEM32(ecx + 0x696528);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696530);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(0x758D6C);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758E20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EAE19; /* jne: not equal / not zero */

loc_002EAE0F: ;
    MEM32(0x758E20) = 1;

loc_002EAE19: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = esi;
    esi = eax;
    eax = esp + 0x34;
    PUSH32(esp, 0x002EAE33u); RECOMP_ABI_CALL(0x002EAC30u, sub_002EAC30); /* call 0x002EAC30 */

loc_002EAE33: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EAE39u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002EAE39: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EAD40
 * Original: 0x002EAD40 - 0x002EAE4B (267 bytes, 71 insns)
 * Folder: ai (between: 0x002EA640 and 0x002EAFB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EAD40: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D48);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x696528);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = esi;
    PUSH32(esp, 0x002EAD6Cu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAD6C: ;
    ebx = eax;
    PUSH32(esp, 0x002EAD73u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAD73: ;
    ebp = eax;
    PUSH32(esp, 0x002EAD7Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAD7A: ;
    esi = eax;
    PUSH32(esp, 0x002EAD81u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAD81: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002EAD8Au); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EAD8A: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(ecx + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ecx + 0x696530);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(0x758D4C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x758D4C) = edx;
    edx = MEM32(ecx + 0x696528);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 0x69652C);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(ecx + 0x696530);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(0x758D6C);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(0x758E20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EAE19; /* jne: not equal / not zero */

loc_002EAE0F: ;
    MEM32(0x758E20) = 1;

loc_002EAE19: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = esi;
    esi = eax;
    eax = esp + 0x34;
    PUSH32(esp, 0x002EAE33u); RECOMP_ABI_CALL(0x002EAC30u, sub_002EAC30); /* call 0x002EAC30 */

loc_002EAE33: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EAE39u); RECOMP_ABI_CALL(0x000E7C10u, sub_000E7C10); /* call 0x000E7C10 */

loc_002EAE39: ;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EAE50
 * Original: 0x002EAE50 - 0x002EAE71 (33 bytes, 8 insns)
 * Folder: ai (between: 0x002EA640 and 0x002EAFB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAE50(void)
{

loc_002EAE50: ;
    ecx = MEM32(0x44AA20);
    edx = MEM32(ecx + 0x2C0);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x2C4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x2C8);
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002EAE80
 * Original: 0x002EAE80 - 0x002EAEF4 (116 bytes, 27 insns)
 * Folder: ai (between: 0x002EA640 and 0x002EAFB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAE80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EAE80: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x44AA20);
    esi = MEM32(eax + 0x2C8);
    edx = MEM32(eax + 0x2C4);
    PUSH32(esp, edi);
    edi = MEM32(0x758D48);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(eax + 0x2C0);
    eax = edi + 0x696528;
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = esi;
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0xC);
    MEM32(0x758D48) = edi;
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EAF00
 * Original: 0x002EAF00 - 0x002EAF21 (33 bytes, 8 insns)
 * Folder: ai (between: 0x002EA640 and 0x002EAFB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAF00(void)
{

loc_002EAF00: ;
    ecx = MEM32(0x44AA20);
    edx = MEM32(ecx + 0x2CC);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x2D0);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x2D4);
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002EAF30
 * Original: 0x002EAF30 - 0x002EAFA4 (116 bytes, 27 insns)
 * Folder: ai (between: 0x002EA640 and 0x002EAFB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAF30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EAF30: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    MEM32(0x758D70) = eax;
    eax = MEM32(0x44AA20);
    esi = MEM32(eax + 0x2D4);
    edx = MEM32(eax + 0x2D0);
    PUSH32(esp, edi);
    edi = MEM32(0x758D48);
    MEM32(0x758D68) = ecx;
    ecx = MEM32(eax + 0x2CC);
    eax = edi + 0x696528;
    MEM32(eax) = ecx;
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = esi;
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0xC);
    MEM32(0x758D48) = edi;
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EAFB0
 * Original: 0x002EAFB0 - 0x002EB021 (113 bytes, 27 insns)
 * Folder: ai (match: xbox-demo 0x00262850, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EAFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EAFB0: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 6 (8-bit) */
    MEM32(0x758D68) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_002EAFE2; /* je: equal / zero */

loc_002EAFD4: ;
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 4);
    edx = ZX16(MEM16(edx + 0x10));
    goto loc_002EAFE4;

loc_002EAFE2: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EAFE4: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EB030
 * Original: 0x002EB030 - 0x002EB081 (81 bytes, 24 insns)
 * Folder: ai (match: xbox-demo 0x002628D0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB030: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002EB036u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB036: ;
    ebx = eax;
    PUSH32(esp, 0x002EB03Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB03D: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB078; /* je: equal / zero */

loc_002EB062: ;
    edx = MEM32(ecx + 0x18);
    edx = MEM32(edx);
    edx = MEM32(edx + 4);
    MEM8(edx + 0x18) = LO8(ebx);
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    MEM8(ecx + 0x19) = LO8(eax);

loc_002EB078: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EB090
 * Original: 0x002EB090 - 0x002EB0D4 (68 bytes, 19 insns)
 * Folder: ai (match: xbox-demo 0x00262930, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB090: ;
    PUSH32(esp, 0x002EB095u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB095: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB0CC; /* je: equal / zero */

loc_002EB0BA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 4);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(eax + 0x1C) = edx;

loc_002EB0CC: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EB0E0
 * Original: 0x002EB0E0 - 0x002EB105 (37 bytes, 16 insns)
 * Folder: ai (match: xbox-demo 0x00262980, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB0E0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB104; /* je: equal / zero */

loc_002EB0E4: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB104; /* je: equal / zero */

loc_002EB0EB: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB104; /* je: equal / zero */

loc_002EB0F1: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB104; /* je: equal / zero */

loc_002EB0F8: ;
    eax = ~eax;
    SET_LO16(eax, LO16(eax) & MEM16(ecx + 0x14));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ecx + 0x14) = LO16(eax);

loc_002EB104: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002EB110
 * Original: 0x002EB110 - 0x002EB168 (88 bytes, 28 insns)
 * Folder: ai (match: xbox-demo 0x002629B0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB110: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EB116u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB116: ;
    esi = eax;
    PUSH32(esp, 0x002EB11Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB11D: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EB15F; /* je: equal / zero */

loc_002EB13F: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB15F; /* je: equal / zero */

loc_002EB146: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB15F; /* je: equal / zero */

loc_002EB14C: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB15F; /* je: equal / zero */

loc_002EB153: ;
    esi = ~esi;
    SET_LO16(esi, LO16(esi) & MEM16(ecx + 0x14));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ecx + 0x14) = LO16(esi);

loc_002EB15F: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EB170
 * Original: 0x002EB170 - 0x002EB1B7 (71 bytes, 21 insns)
 * Folder: ai (match: xbox-demo 0x00262A10, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB170: ;
    PUSH32(esp, 0x002EB175u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB175: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EB1AF; /* je: equal / zero */

loc_002EB197: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB1AF; /* je: equal / zero */

loc_002EB19E: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB1AF; /* je: equal / zero */

loc_002EB1A4: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB1AF; /* je: equal / zero */

loc_002EB1AB: ;
    MEM16(ecx + 0x14) = LO16(eax);

loc_002EB1AF: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EB1C0
 * Original: 0x002EB1C0 - 0x002EB1E0 (32 bytes, 15 insns)
 * Folder: ai (between: 0x002EB170 and 0x002EB260)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002EB1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB1C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB1DD; /* je: equal / zero */

loc_002EB1C4: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB1DD; /* je: equal / zero */

loc_002EB1CB: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB1DD; /* je: equal / zero */

loc_002EB1D1: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB1DD; /* je: equal / zero */

loc_002EB1D8: ;
    eax = ZX16(MEM16(eax + 0x14));
    esp += 4; return; /* ret */

loc_002EB1DD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EB1E0
 * Original: 0x002EB1E0 - 0x002EB260 (128 bytes, 38 insns)
 * Folder: ai (between: 0x002EB170 and 0x002EB260)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB1E0: ;
    eax = MEM32(0x758D70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EB21B; /* je: equal / zero */

loc_002EB201: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB21B; /* je: equal / zero */

loc_002EB208: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB21B; /* je: equal / zero */

loc_002EB20E: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB21B; /* je: equal / zero */

loc_002EB215: ;
    edx = ZX16(MEM16(eax + 0x14));
    goto loc_002EB21D;

loc_002EB21B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EB21D: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EB260
 * Original: 0x002EB260 - 0x002EB285 (37 bytes, 16 insns)
 * Folder: ai (match: xbox-demo 0x00262AE0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB260: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB284; /* je: equal / zero */

loc_002EB264: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB284; /* je: equal / zero */

loc_002EB26B: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB284; /* je: equal / zero */

loc_002EB271: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB284; /* je: equal / zero */

loc_002EB278: ;
    eax = ~eax;
    SET_LO16(eax, LO16(eax) & MEM16(ecx + 0x10));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ecx + 0x10) = LO16(eax);

loc_002EB284: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002EB290
 * Original: 0x002EB290 - 0x002EB2E8 (88 bytes, 28 insns)
 * Folder: ai (match: xbox-demo 0x00262B10, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB290: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EB296u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB296: ;
    esi = eax;
    PUSH32(esp, 0x002EB29Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB29D: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EB2DF; /* je: equal / zero */

loc_002EB2BF: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB2DF; /* je: equal / zero */

loc_002EB2C6: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB2DF; /* je: equal / zero */

loc_002EB2CC: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB2DF; /* je: equal / zero */

loc_002EB2D3: ;
    esi = ~esi;
    SET_LO16(esi, LO16(esi) & MEM16(ecx + 0x10));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ecx + 0x10) = LO16(esi);

loc_002EB2DF: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EB2F0
 * Original: 0x002EB2F0 - 0x002EB329 (57 bytes, 21 insns)
 * Folder: ai (match: xbox-demo 0x00262B70, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB2F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB328; /* je: equal / zero */

loc_002EB2F4: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB328; /* je: equal / zero */

loc_002EB2FB: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB328; /* je: equal / zero */

loc_002EB301: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB328; /* je: equal / zero */

loc_002EB308: ;
    eax = MEM32(eax + 0x20);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    MEM32(0x431048) = 0;

loc_002EB328: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002EB330
 * Original: 0x002EB330 - 0x002EB3B5 (133 bytes, 38 insns)
 * Folder: ai (match: xbox-demo 0x00262BB0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB330: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    edx = MEM32(eax + 0x69650C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x696530);
    PUSH32(esp, edi);
    edi = MEM32(0x758D6C);
    MEM32(0x758D4C) = ecx;
    ecx = MEM32(eax + 0x696528);
    MEM32(0x758D48) = eax;
    eax = MEM32(0x758D70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x758D70) = edi;
    edi = MEM32(0x758D64);
    MEM32(0x758D68) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_002EB3AB; /* je: equal / zero */

loc_002EB37F: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB3AB; /* je: equal / zero */

loc_002EB386: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB3AB; /* je: equal / zero */

loc_002EB38C: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB3AB; /* je: equal / zero */

loc_002EB393: ;
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = esi;
    MEM32(0x431048) = 0;

loc_002EB3AB: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EB3C0
 * Original: 0x002EB3C0 - 0x002EB431 (113 bytes, 27 insns)
 * Folder: ai (match: xbox-demo 0x00262C40, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB3C0: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    MEM32(0x758D68) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_002EB3F2; /* je: equal / zero */

loc_002EB3E4: ;
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 8);
    edx = ZX8(MEM8(edx + 1));
    goto loc_002EB3F4;

loc_002EB3F2: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EB3F4: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EB440
 * Original: 0x002EB440 - 0x002EB473 (51 bytes, 20 insns)
 * Folder: ai (match: xbox-demo 0x00262CC0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB440: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, MEM8(esp + 8));
    if (CMP_EQ(_fa, _fb)) goto loc_002EB472; /* je: equal / zero */

loc_002EB448: ;
    ecx = MEM32(edx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB472; /* je: equal / zero */

loc_002EB44F: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB472; /* je: equal / zero */

loc_002EB455: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB472; /* je: equal / zero */

loc_002EB45C: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx), 0x100 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB472; /* je: equal / zero */

loc_002EB464: ;
    SET_LO8(edx, MEM8(ecx + 1));
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(eax, LO8(eax) & LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 1) = LO8(eax);

loc_002EB472: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002EB480
 * Original: 0x002EB480 - 0x002EB4E0 (96 bytes, 31 insns)
 * Folder: ai (match: xbox-demo 0x00262D00, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB480: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002EB486u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB486: ;
    ebx = eax;
    PUSH32(esp, 0x002EB48Du); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB48D: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D70);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758D64);
    MEM32(0x758D68) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EB4D7; /* je: equal / zero */

loc_002EB4AF: ;
    ecx = MEM32(edx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB4D7; /* je: equal / zero */

loc_002EB4B6: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB4D7; /* je: equal / zero */

loc_002EB4BC: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB4D7; /* je: equal / zero */

loc_002EB4C3: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx), 0x100 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB4D7; /* je: equal / zero */

loc_002EB4CB: ;
    SET_LO8(edx, MEM8(ecx + 1));
    SET_LO8(ebx, ~LO8(ebx));
    SET_LO8(ebx, LO8(ebx) & LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ebx, LO8(ebx) | LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx + 1) = LO8(ebx);

loc_002EB4D7: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EB4E0
 * Original: 0x002EB4E0 - 0x002EB559 (121 bytes, 30 insns)
 * Folder: ai (between: 0x002EB480 and 0x002EB5E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB4E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB4E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D48);
    edx = MEM32(0x758D4C);
    ecx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = edx;
    edx = MEM32(eax + 0x69652C);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    MEM32(esp) = ecx;
    ecx = MEM32(0x758D6C);
    MEM32(esp + 4) = edx;
    edx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(esp + 0xC) = eax;
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002EB53Eu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB53E: ;
    PUSH32(esp, eax);
    edx = esp + 8;
    eax = esi;
    PUSH32(esp, 0x002EB54Au); RECOMP_ABI_CALL(0x000927E0u, sub_000927E0); /* call 0x000927E0 */

loc_002EB54A: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EB560
 * Original: 0x002EB560 - 0x002EB5D9 (121 bytes, 30 insns)
 * Folder: ai (between: 0x002EB480 and 0x002EB5E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB560: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x758D48);
    edx = MEM32(0x758D4C);
    ecx = MEM32(eax + 0x696508);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = edx;
    edx = MEM32(eax + 0x69652C);
    MEM32(0x758D48) = eax;
    eax = MEM32(eax + 0x696530);
    MEM32(esp) = ecx;
    ecx = MEM32(0x758D6C);
    MEM32(esp + 4) = edx;
    edx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(esp + 0xC) = eax;
    MEM32(0x758D70) = ecx;
    MEM32(0x758D68) = edx;
    PUSH32(esp, 0x002EB5BEu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB5BE: ;
    PUSH32(esp, eax);
    edx = esp + 8;
    eax = esi;
    PUSH32(esp, 0x002EB5CAu); RECOMP_ABI_CALL(0x00092A60u, sub_00092A60); /* call 0x00092A60 */

loc_002EB5CA: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EB5E0
 * Original: 0x002EB5E0 - 0x002EB62F (79 bytes, 22 insns)
 * Folder: ai (match: xbox-demo 0x00262E60, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB5E0: ;
    PUSH32(esp, 0x002EB5E5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB5E5: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB627; /* je: equal / zero */

loc_002EB60A: ;
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx);
    edx = MEM32(edx + 8);
    ecx = MEM32(ecx + 8);
    eax = ZX8(LO8(eax));
    eax = ZX8(MEM8(edx + eax));
    eax = MEM32(ecx + eax * 4);
    MEM8(eax) = MEM8(eax) | 0x10;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_002EB627: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EB630
 * Original: 0x002EB630 - 0x002EB658 (40 bytes, 18 insns)
 * Folder: ai (between: 0x002EB5E0 and 0x002EB6F0)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002EB630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB630: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB655; /* je: equal / zero */

loc_002EB637: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB655; /* je: equal / zero */

loc_002EB640: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB655; /* je: equal / zero */

loc_002EB647: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB655; /* je: equal / zero */

loc_002EB64E: ;
    ecx = MEM32(eax);
    eax = ZX8(MEM8(ecx + 1));
    esp += 4; return; /* ret */

loc_002EB655: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EB660
 * Original: 0x002EB660 - 0x002EB6E2 (130 bytes, 35 insns)
 * Folder: ai (between: 0x002EB5E0 and 0x002EB6F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB660: ;
    ecx = MEM32(0x758D6C);
    eax = MEM32(0x758D70);
    edx = MEM32(0x758D64);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    MEM32(0x758D68) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_002EB6A3; /* je: equal / zero */

loc_002EB684: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB6A3; /* je: equal / zero */

loc_002EB68D: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB6A3; /* je: equal / zero */

loc_002EB694: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EB6A3; /* je: equal / zero */

loc_002EB69B: ;
    ecx = MEM32(eax);
    edx = ZX8(MEM8(ecx + 1));
    goto loc_002EB6A5;

loc_002EB6A3: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EB6A5: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EB6F0
 * Original: 0x002EB6F0 - 0x002EB73F (79 bytes, 22 insns)
 * Folder: ai (match: xbox-demo 0x00262EB0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB6F0: ;
    PUSH32(esp, 0x002EB6F5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB6F5: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB737; /* je: equal / zero */

loc_002EB71A: ;
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx);
    edx = MEM32(edx + 8);
    ecx = MEM32(ecx + 8);
    eax = ZX8(LO8(eax));
    eax = ZX8(MEM8(edx + eax));
    eax = MEM32(ecx + eax * 4);
    MEM8(eax) = MEM8(eax) & 0xEF;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_002EB737: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EB740
 * Original: 0x002EB740 - 0x002EB7AD (109 bytes, 25 insns)
 * Folder: ai (between: 0x002EB6F0 and 0x002EB7B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB740(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB740: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002EB762u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB762: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x002EB76Au); RECOMP_ABI_CALL(0x00092900u, sub_00092900); /* call 0x00092900 */

loc_002EB76A: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x686428) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EB7B0
 * Original: 0x002EB7B0 - 0x002EB84E (158 bytes, 39 insns)
 * Folder: ai (match: xbox-demo 0x00263040, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB7B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB7B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002EB7EBu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB7EB: ;
    PUSH32(esp, eax);
    esi = esp + 0xC;
    ecx = edi;
    PUSH32(esp, 0x002EB7F7u); RECOMP_ABI_CALL(0x00092970u, sub_00092970); /* call 0x00092970 */

loc_002EB7F7: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(esp + 0xC);
    eax = ecx + 0x696528;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x18);
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EB850
 * Original: 0x002EB850 - 0x002EB8E4 (148 bytes, 39 insns)
 * Folder: ai (match: xbox-demo 0x002630E0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB850: ;
    PUSH32(esp, 0x002EB855u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB855: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB8A5; /* je: equal / zero */

loc_002EB87A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002EB8A5; /* jg: greater (signed >) */

loc_002EB87F: ;
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx);
    edx = MEM32(edx + 8);
    eax = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(eax + edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xF (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002EB8A5; /* ja: above (unsigned >) */

loc_002EB896: ;
    ecx = MEM32(ecx + 8);
    eax = ZX8(LO8(eax));
    edx = MEM32(ecx + eax * 4);
    edx = ZX8(MEM8(edx + 1));
    goto loc_002EB8A7;

loc_002EB8A5: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EB8A7: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EB8F0
 * Original: 0x002EB8F0 - 0x002EB98C (156 bytes, 48 insns)
 * Folder: ai (match: xbox-demo 0x00263180, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB8F0: ;
    PUSH32(esp, esi);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x600) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x600 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EB8FE; /* je: equal / zero */

loc_002EB8F9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002EB918; /* jle: less or equal (signed <=) */

loc_002EB8FE: ;
    esi = MEM32(0x64506C);
    MEM32(ecx) = esi;
    esi = MEM32(0x645070);
    MEM32(ecx + 4) = esi;
    esi = MEM32(0x645074);
    MEM32(ecx + 8) = esi;

loc_002EB918: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax);
    eax = MEM32(eax + 4);
    esi = MEM32(eax);
    esi = MEM32(esi + 8);
    edx = ZX8(LO8(edx));
    SET_LO8(edx, MEM8(edx + esi));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xF (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EB94A; /* jbe: below or equal (unsigned <=) */

loc_002EB930: ;
    esi = MEM32(0x64506C);
    MEM32(ecx) = esi;
    esi = MEM32(0x645070);
    MEM32(ecx + 4) = esi;
    esi = MEM32(0x645074);
    MEM32(ecx + 8) = esi;

loc_002EB94A: ;
    eax = MEM32(eax + 8);
    edx = ZX8(LO8(edx));
    eax = MEM32(eax + edx * 4);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 1 (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002EB974; /* je: equal / zero */

loc_002EB95A: ;
    edx = MEM32(0x64506C);
    MEM32(ecx) = edx;
    eax = MEM32(0x645070);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x645074);
    MEM32(ecx + 8) = edx;
    esp += 4; return; /* ret */

loc_002EB974: ;
    eax = MEM32(eax + 4);
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002EB990
 * Original: 0x002EB990 - 0x002EBA15 (133 bytes, 32 insns)
 * Folder: ai (match: xbox-demo 0x00263220, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EB990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EB990: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002EB9B5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EB9B5: ;
    edx = eax;
    ecx = esp + 4;
    eax = esi;
    PUSH32(esp, 0x002EB9C2u); RECOMP_ABI_CALL(0x002EB8F0u, sub_002EB8F0); /* call 0x002EB8F0 */

loc_002EB9C2: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(esp + 4);
    eax = ecx + 0x696528;
    MEM32(eax) = edx;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x14);
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EBA20
 * Original: 0x002EBA20 - 0x002EBAB9 (153 bytes, 47 insns)
 * Folder: ai (match: xbox-demo 0x002632B0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EBA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EBA20: ;
    PUSH32(esp, esi);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x600) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), 0x600 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EBA2E; /* je: equal / zero */

loc_002EBA29: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002EBA48; /* jle: less or equal (signed <=) */

loc_002EBA2E: ;
    esi = MEM32(0x64506C);
    MEM32(eax) = esi;
    esi = MEM32(0x645070);
    MEM32(eax + 4) = esi;
    esi = MEM32(0x645074);
    MEM32(eax + 8) = esi;

loc_002EBA48: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    esi = MEM32(ecx);
    esi = MEM32(esi + 8);
    edx = ZX8(LO8(edx));
    SET_LO8(edx, MEM8(edx + esi));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xF (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EBA7A; /* jbe: below or equal (unsigned <=) */

loc_002EBA60: ;
    esi = MEM32(0x64506C);
    MEM32(eax) = esi;
    esi = MEM32(0x645070);
    MEM32(eax + 4) = esi;
    esi = MEM32(0x645074);
    MEM32(eax + 8) = esi;

loc_002EBA7A: ;
    ecx = MEM32(ecx + 8);
    edx = ZX8(LO8(edx));
    ecx = MEM32(ecx + edx * 4);
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 1), 1 (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002EBAA5; /* je: equal / zero */

loc_002EBA8A: ;
    edx = MEM32(0x64506C);
    MEM32(eax) = edx;
    ecx = MEM32(0x645070);
    MEM32(eax + 4) = ecx;
    edx = MEM32(0x645074);
    MEM32(eax + 8) = edx;
    esp += 4; return; /* ret */

loc_002EBAA5: ;
    ecx = MEM32(ecx + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002EBAC0
 * Original: 0x002EBAC0 - 0x002EBB45 (133 bytes, 32 insns)
 * Folder: ai (match: xbox-demo 0x00263350, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EBAC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EBAC0: ;
    eax = MEM32(0x758D6C);
    ecx = MEM32(0x758D64);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x758D70);
    MEM32(0x758D70) = eax;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002EBAE5u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EBAE5: ;
    edx = eax;
    eax = esp + 4;
    ecx = esi;
    PUSH32(esp, 0x002EBAF2u); RECOMP_ABI_CALL(0x002EBA20u, sub_002EBA20); /* call 0x002EBA20 */

loc_002EBAF2: ;
    ecx = MEM32(0x758D48);
    edx = MEM32(esp + 4);
    eax = ecx + 0x696528;
    MEM32(eax) = edx;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x14);
    MEM16(ecx * 8 + 0x686428) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EBB50
 * Original: 0x002EBB50 - 0x002EBBE9 (153 bytes, 41 insns)
 * Folder: ai (match: xbox-demo 0x002633E0, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EBB50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EBB50: ;
    PUSH32(esp, 0x002EBB55u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EBB55: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EBBAA; /* je: equal / zero */

loc_002EBB7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002EBBAA; /* jg: greater (signed >) */

loc_002EBB7F: ;
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx);
    edx = MEM32(edx + 8);
    eax = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(eax + edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EBB9B; /* jne: not equal / not zero */

loc_002EBB96: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002EBBAC;

loc_002EBB9B: ;
    ecx = MEM32(ecx + 8);
    eax = ZX8(LO8(eax));
    edx = MEM32(ecx + eax * 4);
    edx = ZX8(MEM8(edx + 3));
    goto loc_002EBBAC;

loc_002EBBAA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EBBAC: ;
    ecx = MEM32(0x758D48);
    eax = ecx + 0x696528;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x758D48) = ecx;
    ecx = MEM32(0x758D4C);
    MEM32(ecx * 8 + 0x68642C) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x686428) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x758D4C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EBBF0
 * Original: 0x002EBBF0 - 0x002EBC53 (99 bytes, 31 insns)
 * Folder: ai (match: xbox-demo 0x00263480, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EBBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EBBF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002EBBF6u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EBBF6: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x002EBBFDu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EBBFD: ;
    edx = MEM32(0x758D6C);
    ecx = MEM32(0x758D70);
    MEM32(0x758D70) = edx;
    edx = MEM32(0x758D64);
    MEM32(0x758D68) = edx;
    edx = MEM32(ecx);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EBC4A; /* je: equal / zero */

loc_002EBC22: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002EBC4A; /* jg: greater (signed >) */

loc_002EBC27: ;
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx);
    edx = MEM32(edx + 8);
    eax = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(eax + edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EBC4A; /* je: equal / zero */

loc_002EBC3E: ;
    ecx = MEM32(ecx + 8);
    eax = ZX8(LO8(eax));
    edx = MEM32(ecx + eax * 4);
    MEM8(edx + 3) = LO8(ebx);

loc_002EBC4A: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EBC60
 * Original: 0x002EBC60 - 0x002EBCB5 (85 bytes, 18 insns)
 * Folder: ai (between: 0x002EBBF0 and 0x002EBCC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EBC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EBC60: ;
    eax = MEM32(0x758D48);
    ecx = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x686428), 1 (16-bit) */
    MEM32(0x758D48) = eax;
    MEM32(0x758D4C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002EBC9D; /* jne: not equal / not zero */

loc_002EBC85: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x696528); /* cvtsi2ss */
    eax = MEM32(esp + 4);
    MEMF(0x451C68) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002EBC9D: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x696528)); /* movss */
    eax = MEM32(esp + 4);
    MEMF(0x451C68) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EBCC0
 * Original: 0x002EBCC0 - 0x002EBD79 (185 bytes, 51 insns)
 * Folder: ai (match: xbox-demo 0x00263550, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EBCC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EBCC0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EBCCCu); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EBCCC: ;
    ebp = eax;
    PUSH32(esp, 0x002EBCD3u); RECOMP_ABI_CALL(0x000E6D60u, sub_000E6D60); /* call 0x000E6D60 */

loc_002EBCD3: ;
    ebx = MEM32(0x758D48);
    edi = MEM32(0x758D4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(edi * 8 + 0x686428)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi * 8 + 0x686428), 1 (16-bit) */
    esi = ebx + 0x696528;
    if (CMP_NE(_fa, _fb)) goto loc_002EBCFA; /* jne: not equal / not zero */

loc_002EBCF4: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esi); /* cvtsi2ss */
    goto loc_002EBCFE;

loc_002EBCFA: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */

loc_002EBCFE: ;
    ecx = MEM32(0x758D6C);
    edx = MEM32(0x758D70);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(0x758D70) = ecx;
    ecx = MEM32(0x758D64);
    PUSH32(esp, eax);
    eax = esp + 0x20;
    MEM32(0x758D68) = ecx;
    PUSH32(esp, 0x002EBD32u); RECOMP_ABI_CALL(0x00082CF0u, sub_00082CF0); /* call 0x00082CF0 */

loc_002EBD32: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi * 8 + 0x68642C) = esi;
    MEM16(edi * 8 + 0x686428) = 3;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(0x758D4C) = edi;
    POP32(esp, edi);
    MEM32(esi) = ecx;
    MEM32(esi + 4) = edx;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x758D48) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}
