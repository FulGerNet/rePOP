/**
 * PoP SoT xbox-demo - Recompiled code chunk 29
 * Functions: 250 (0x00264F70 - 0x0026C170)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00264F70
 * Original: 0x00264F70 - 0x00264FF3 (131 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00264F70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00264F70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00264F7Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00264F7A: ;
    esi = eax;
    PUSH32(esp, 0x00264F81u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00264F81: ;
    ecx = MEM32(0x34AC38);
    eax = eax + eax * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + ecx + 0x298;
    edi = esp + 8;
    eax = esi;
    PUSH32(esp, 0x00264F9Fu); RECOMP_ABI_CALL(0x000805A0u, sub_000805A0); /* call 0x000805A0 */

loc_00264F9F: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(esp + 8);
    eax = ecx + 0x6270D8;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x18);
    MEM16(ecx * 8 + 0x616FD8) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = ecx;
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
 * sub_00265000
 * Original: 0x00265000 - 0x00265083 (131 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00265000: ;
    edx = MEM32(0x34AC38);
    ecx = ecx + ecx * 2;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + edx + 0x298;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x44) (32-bit) */
    PUSH32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_0026507E; /* jae: above or equal (unsigned >=) */

loc_00265019: ;
    eax = eax + eax * 2;
    esi = ecx + eax * 4;
    ecx = MEM32(esi + 0x50);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00265027u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00265024u); } /* indirect call */
    }

loc_00265027: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026507E; /* jne: not equal / not zero */

loc_0026502C: ;
    eax = MEM32(esi + 0x50);
    esi = MEM32(esi + 0x4C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00265077; /* je: equal / zero */

loc_00265036: ;
    xmm3 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM8(eax + 0x40)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x40), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00265069; /* je: equal / zero */

loc_00265044: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0026505B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00265058: ;
    xmm0 = xmm1; /* movaps */

loc_0026505B: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00265071; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00265060: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00265069: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */

loc_00265071: ;
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00265077: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026507E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00265090
 * Original: 0x00265090 - 0x002650E6 (86 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265090: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00265096u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265096: ;
    esi = eax;
    PUSH32(esp, 0x0026509Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026509D: ;
    ecx = eax;
    eax = esi;
    PUSH32(esp, 0x002650A6u); RECOMP_ABI_CALL(0x00265000u, sub_00265000); /* call 0x00265000 */

loc_002650A6: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002650F0
 * Original: 0x002650F0 - 0x00265113 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002650F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002650F0: ;
    edx = MEM32(0x34AC38);
    eax = eax + eax * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + edx + 0x298;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x44) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00265110; /* jae: above or equal (unsigned >=) */

loc_00265108: ;
    ecx = ecx + ecx * 2;
    eax = MEM32(eax + ecx * 4 + 0x4C);
    esp += 4; return; /* ret */

loc_00265110: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00265120
 * Original: 0x00265120 - 0x00265172 (82 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265120: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00265126u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265126: ;
    esi = eax;
    PUSH32(esp, 0x0026512Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026512D: ;
    ecx = MEM32(0x34AC38);
    eax = eax + eax * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x298;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x44) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0026515E; /* jae: above or equal (unsigned >=) */

loc_00265145: ;
    edx = esi + esi * 2;
    eax = MEM32(eax + edx * 4 + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00265152u); RECOMP_ABI_CALL(0x001080C0u, sub_001080C0); /* call 0x001080C0 */

loc_00265152: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026515E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00265166u); RECOMP_ABI_CALL(0x001080C0u, sub_001080C0); /* call 0x001080C0 */

loc_00265166: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00265180
 * Original: 0x00265180 - 0x002651A7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00265180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00265180: ;
    edx = MEM32(0x34AC38);
    ecx = ecx + ecx * 2;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + edx + 0x298;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x44) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002651A4; /* jae: above or equal (unsigned >=) */

loc_00265198: ;
    eax = eax + eax * 2;
    ecx = MEM32(ecx + eax * 4 + 0x50);
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x20)); return; /* indirect tail jmp */

loc_002651A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002651B0
 * Original: 0x002651B0 - 0x00265221 (113 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002651B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002651B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002651B6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002651B6: ;
    esi = eax;
    PUSH32(esp, 0x002651BDu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002651BD: ;
    ecx = MEM32(0x34AC38);
    eax = eax + eax * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x298;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x44) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002651E3; /* jae: above or equal (unsigned >=) */

loc_002651D5: ;
    edx = esi + esi * 2;
    ecx = MEM32(eax + edx * 4 + 0x50);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002651E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002651DEu); } /* indirect call */
    }

loc_002651E1: ;
    goto loc_002651E5;

loc_002651E3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002651E5: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00265230
 * Original: 0x00265230 - 0x00265250 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265230: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = eax + eax * 2;
    eax = MEM32(0x34AC38);
    PUSH32(esp, ecx);
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx + eax + 0x298;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026524Fu); RECOMP_ABI_CALL(0x00080200u, sub_00080200); /* call 0x00080200 */

loc_0026524F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00265250
 * Original: 0x00265250 - 0x002652FF (175 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265250(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265250: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0026525Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026525A: ;
    esi = eax;
    PUSH32(esp, 0x00265261u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265261: ;
    edx = MEM32(0x64D858);
    edi = eax;
    eax = MEM32(0x64D854);
    ecx = MEM32(eax + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = edx;
    edx = MEM32(eax + 0x6270DC);
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270E0);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002652A0u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002652A0: ;
    PUSH32(esp, esi);
    edx = eax + eax * 2;
    eax = MEM32(0x34AC38);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx + eax + 0x298;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002652BFu); RECOMP_ABI_CALL(0x00080200u, sub_00080200); /* call 0x00080200 */

loc_002652BF: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(0x64D854) = edx;
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
 * sub_00265300
 * Original: 0x00265300 - 0x00265326 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265300: ;
    ecx = MEM32(0x34AC38);
    eax = eax + eax * 2;
    PUSH32(esp, edi);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + ecx + 0x298;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00265324u); RECOMP_ABI_CALL(0x000809A0u, sub_000809A0); /* call 0x000809A0 */

loc_00265324: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00265330
 * Original: 0x00265330 - 0x002653B1 (129 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00265330: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00265339u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265339: ;
    ebx = eax;
    PUSH32(esp, 0x00265340u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265340: ;
    esi = eax;
    PUSH32(esp, 0x00265347u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265347: ;
    ebp = eax;
    PUSH32(esp, 0x0026534Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026534E: ;
    edi = eax;
    PUSH32(esp, 0x00265355u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265355: ;
    ecx = MEM32(0x34AC38);
    eax = eax + eax * 2;
    PUSH32(esp, esi);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebp);
    eax = eax + ecx + 0x298;
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0x00265372u); RECOMP_ABI_CALL(0x000809A0u, sub_000809A0); /* call 0x000809A0 */

loc_00265372: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    POP32(esp, edi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, ebp);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002653C0
 * Original: 0x002653C0 - 0x002653F8 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002653C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002653C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002653C7u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002653C7: ;
    edi = eax;
    PUSH32(esp, 0x002653CEu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002653CE: ;
    esi = eax;
    PUSH32(esp, 0x002653D5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002653D5: ;
    ecx = MEM32(0x34AC38);
    eax = eax + eax * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    eax = eax + ecx + 0x298;
    PUSH32(esp, 0x002653EEu); RECOMP_ABI_CALL(0x00080600u, sub_00080600); /* call 0x00080600 */

loc_002653EE: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00265400
 * Original: 0x00265400 - 0x0026541B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265400: ;
    edx = eax + eax * 2;
    eax = MEM32(0x34AC38);
    PUSH32(esp, ebx);
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    ebx = edx + eax + 0x298;
    PUSH32(esp, 0x00265419u); RECOMP_ABI_CALL(0x000808B0u, sub_000808B0); /* call 0x000808B0 */

loc_00265419: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00265420
 * Original: 0x00265420 - 0x00265492 (114 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265420: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D854);
    ecx = MEM32(eax + 0x6270B8);
    edx = MEM32(eax + 0x6270BC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D858);
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270E0);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = esi;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00265462u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265462: ;
    esi = eax;
    PUSH32(esp, 0x00265469u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265469: ;
    edx = eax + eax * 2;
    eax = MEM32(0x34AC38);
    ecx = esp + 8;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    ebx = edx + eax + 0x298;
    PUSH32(esp, 0x00265485u); RECOMP_ABI_CALL(0x000808B0u, sub_000808B0); /* call 0x000808B0 */

loc_00265485: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, esi);
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
 * sub_002654A0
 * Original: 0x002654A0 - 0x002654C1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002654A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002654A0: ;
    edx = eax + eax * 2;
    eax = MEM32(0x34AC38);
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    ecx = edx + eax + 0x298;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x002654C0u); RECOMP_ABI_CALL(0x00080190u, sub_00080190); /* call 0x00080190 */

loc_002654C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002654D0
 * Original: 0x002654D0 - 0x0026558D (189 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002654D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002654D0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D854);
    ecx = MEM32(eax + 0x6270B8);
    edx = MEM32(eax + 0x6270BC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x64D858);
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270E0);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = esi;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x00265511u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265511: ;
    esi = eax;
    PUSH32(esp, 0x00265518u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265518: ;
    edx = eax + eax * 2;
    eax = MEM32(0x34AC38);
    ecx = esp + 0x10;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    ecx = edx + eax + 0x298;
    edx = esp + 8;
    eax = esi;
    PUSH32(esp, 0x0026553Au); RECOMP_ABI_CALL(0x00080190u, sub_00080190); /* call 0x00080190 */

loc_0026553A: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(esp + 0x10);
    eax = ecx + 0x6270D8;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x20);
    MEM16(ecx * 8 + 0x616FD8) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00265590
 * Original: 0x00265590 - 0x00265700 (368 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00265590: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0026559Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026559F: ;
    ebx = eax;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    esi = MEM32(eax * 8 + 0x616FD4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x002655CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002655C4u); } /* indirect call */
    }

loc_002655CB: ;
    edi = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    ebp = 0x20;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edi;
    edi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = esp + 0x64;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = SX16(LO16(ecx));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x3418EC); PUSH32(esp, 0x00265608u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00265601u); } /* indirect call */
    }

loc_00265608: ;
    edx = MEM32(0x64D854);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = edx;
    PUSH32(esp, 0x0026561Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026561E: ;
    ebp = eax;
    PUSH32(esp, 0x00265625u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265625: ;
    ecx = MEM32(0x64D858);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026564D; /* jne: not equal / not zero */

loc_00265643: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_00265655;

loc_0026564D: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_00265655: ;
    edx = MEM32(eax + 0x6270BC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    ecx = MEM32(eax + 0x6270D8);
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270E0);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x0026568Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026568D: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = eax + eax * 2;
    eax = MEM32(0x34AC38);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx + eax + 0x298;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002656B8u); RECOMP_ABI_CALL(0x00080A20u, sub_00080A20); /* call 0x00080A20 */

loc_002656B8: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x90);
    POP32(esp, ebp);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00265700
 * Original: 0x00265700 - 0x0026586F (367 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00265700: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0026570Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026570F: ;
    ebx = eax;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    esi = MEM32(eax * 8 + 0x616FD4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x0026573Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00265734u); } /* indirect call */
    }

loc_0026573B: ;
    edi = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    ebp = 0x20;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edi;
    edi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = esp + 0x64;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = SX16(LO16(ecx));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x3418EC); PUSH32(esp, 0x00265778u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00265771u); } /* indirect call */
    }

loc_00265778: ;
    edx = MEM32(0x64D854);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = edx;
    PUSH32(esp, 0x0026578Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026578E: ;
    ebp = eax;
    PUSH32(esp, 0x00265795u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265795: ;
    ecx = MEM32(0x64D858);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002657BD; /* jne: not equal / not zero */

loc_002657B3: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_002657C5;

loc_002657BD: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_002657C5: ;
    edx = MEM32(eax + 0x6270BC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    ecx = MEM32(eax + 0x6270D8);
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270E0);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x002657FDu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002657FD: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = eax + eax * 2;
    eax = MEM32(0x34AC38);
    ecx = esp + 0x30;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    edi = edx + eax + 0x298;
    PUSH32(esp, 0x00265827u); RECOMP_ABI_CALL(0x00080C30u, sub_00080C30); /* call 0x00080C30 */

loc_00265827: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x90);
    POP32(esp, ebp);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00265870
 * Original: 0x00265870 - 0x00265932 (194 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00265870: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0026587Cu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026587C: ;
    edi = MEM32(0x64D858);
    esi = eax;
    eax = MEM32(0x64D854);
    ecx = MEM32(eax + 0x6270B8);
    edx = MEM32(eax + 0x6270BC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270E0);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = edi;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x002658BBu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002658BB: ;
    edi = eax;
    PUSH32(esp, 0x002658C2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002658C2: ;
    ebx = eax;
    PUSH32(esp, 0x002658C9u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002658C9: ;
    ebp = eax;
    PUSH32(esp, 0x002658D0u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002658D0: ;
    edx = MEM32(0x34AC38);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax + eax * 2;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    eax = ecx + edx + 0x298;
    PUSH32(esp, ebp);
    edi = esp + 0x20;
    PUSH32(esp, 0x002658F0u); RECOMP_ABI_CALL(0x00080CF0u, sub_00080CF0); /* call 0x00080CF0 */

loc_002658F0: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x18);
    POP32(esp, ebp);
    MEM32(0x64D854) = edx;
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
 * sub_00265940
 * Original: 0x00265940 - 0x00265A82 (322 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00265940: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0026594Cu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026594C: ;
    ebp = eax;
    PUSH32(esp, 0x00265953u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265953: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0026595Cu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026595C: ;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00265965u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265965: ;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0026596Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026596E: ;
    ecx = MEM32(0x64D858);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00265996; /* jne: not equal / not zero */

loc_0026598C: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_0026599E;

loc_00265996: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_0026599E: ;
    edx = MEM32(eax + 0x6270B8);
    esi = MEM32(ecx * 8 + 0x616FCC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0x6270DC);
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270E0);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    SET_LO16(eax, MEM16(ecx * 8 + 0x616FD8));
    edx = esp + 0x30;
    MEM32(0x64D858) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(eax));
    PUSH32(esp, esi);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x002659F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002659EBu); } /* indirect call */
    }

loc_002659F2: ;
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    edi = MEM32(0x64D854);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    MEM32(0x64D87C) = edx;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(0x34AC38);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = edi + 0x6270D8;
    PUSH32(esp, 0x00265A49u); RECOMP_ABI_CALL(0x0007EF50u, sub_0007EF50); /* call 0x0007EF50 */

loc_00265A49: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x616FDC) = ebx;
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(0x64D854) = edi;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x64);
    POP32(esp, ebp);
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
 * sub_00265A90
 * Original: 0x00265A90 - 0x00265AC7 (55 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265A90: ;
    edx = MEM32(0x34AC38);
    ecx = ecx + ecx * 2;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + edx + 0x298;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x44) (32-bit) */
    PUSH32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00265AC3; /* jae: above or equal (unsigned >=) */

loc_00265AA9: ;
    eax = eax + eax * 2;
    esi = ecx + eax * 4 + 0x50;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00265AB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00265AB4u); } /* indirect call */
    }

loc_00265AB7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00265AC3; /* jne: not equal / not zero */

loc_00265ABC: ;
    eax = MEM32(esi);
    eax = MEM32(eax + 0x30);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00265AC3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00265AD0
 * Original: 0x00265AD0 - 0x00265B51 (129 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265AD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00265AD6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265AD6: ;
    esi = eax;
    PUSH32(esp, 0x00265ADDu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265ADD: ;
    ecx = MEM32(0x34AC38);
    eax = eax + eax * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x298;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x44) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00265B11; /* jae: above or equal (unsigned >=) */

loc_00265AF5: ;
    edx = esi + esi * 2;
    ecx = MEM32(eax + edx * 4 + 0x50);
    esi = eax + edx * 4 + 0x50;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00265B05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00265B02u); } /* indirect call */
    }

loc_00265B05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00265B11; /* jne: not equal / not zero */

loc_00265B0A: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x30);
    goto loc_00265B13;

loc_00265B11: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00265B13: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00265B60
 * Original: 0x00265B60 - 0x00265BC1 (97 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265B60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265B60: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D884);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    esi = edi + 0x6270D8;
    PUSH32(esp, 0x00265B90u); RECOMP_ABI_CALL(0x0007BF10u, sub_0007BF10); /* call 0x0007BF10 */

loc_00265B90: ;
    MEM32(esi) = eax;
    eax = MEM32(0x64D858);
    MEM32(eax * 8 + 0x616FDC) = esi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x64D854) = edi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00265BD0
 * Original: 0x00265BD0 - 0x00265CA0 (208 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265BD0: ;
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00265BF7; /* jne: not equal / not zero */

loc_00265BED: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_00265BFF;

loc_00265BF7: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_00265BFF: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00265C28; /* jne: not equal / not zero */

loc_00265C1E: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_00265C30;

loc_00265C28: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_00265C30: ;
    ecx = MEM32(0x64D880);
    eax = MEM32(0x64D884);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(esp);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(0x64D87C) = edx;
    edx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00265C62u); RECOMP_ABI_CALL(0x00064430u, sub_00064430); /* call 0x00064430 */

loc_00265C62: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00265CA0
 * Original: 0x00265CA0 - 0x00265D10 (112 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265CA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265CA0: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D884);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    esi = edi + 0x6270D8;
    PUSH32(esp, 0x00265CD0u); RECOMP_ABI_CALL(0x000648C0u, sub_000648C0); /* call 0x000648C0 */

loc_00265CD0: ;
    MEM32(esi) = eax;
    eax = MEM32(0x64D858);
    MEM32(eax * 8 + 0x616FDC) = esi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x64D854) = edi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00265D10
 * Original: 0x00265D10 - 0x00265D84 (116 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265D10: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00265D32u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265D32: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00265D38u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265D38: ;
    ecx = eax;
    eax = MEM32(0x34AC38);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00265D45u); RECOMP_ABI_CALL(0x00069AC0u, sub_00069AC0); /* call 0x00069AC0 */

loc_00265D45: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00265D90
 * Original: 0x00265D90 - 0x00265E04 (116 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265D90: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00265DB2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265DB2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00265DB8u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265DB8: ;
    ecx = eax;
    eax = MEM32(0x34AC38);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00265DC5u); RECOMP_ABI_CALL(0x00069B40u, sub_00069B40); /* call 0x00069B40 */

loc_00265DC5: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00265E10
 * Original: 0x00265E10 - 0x00265EF1 (225 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00265E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265E10: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00265E19u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265E19: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(ecx + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = MEM32(ecx + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = esi;
    esi = MEM32(ecx + 0x6270DC);
    MEM32(esp + 8) = esi;
    esi = MEM32(ecx + 0x6270E0);
    MEM32(esp + 0xC) = esi;
    esi = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D858) = esi;
    esi = MEM32(ecx + 0x6270D8);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = esi;
    esi = MEM32(ecx + 0x6270DC);
    PUSH32(esp, edx);
    MEM32(0x64D854) = ecx;
    ecx = MEM32(ecx + 0x6270E0);
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(0x64D880);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(0x64D884);
    eax = esp + 0x1C;
    MEM32(0x64D884) = esi;
    esi = MEM32(0x64D878);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(0x64D87C) = esi;
    PUSH32(esp, 0x00265EAFu); RECOMP_ABI_CALL(0x0005A400u, sub_0005A400); /* call 0x0005A400 */

loc_00265EAF: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00265F00
 * Original: 0x00265F00 - 0x0026604E (334 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00265F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00265F00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00265F11u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265F11: ;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00265F18u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265F18: ;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00265F1Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265F1F: ;
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00265F28u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265F28: ;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x64D854);
    ecx = MEM32(eax + 0x6270B8);
    edx = MEM32(eax + 0x6270BC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(eax + 0x6270E0);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 0x6270D8);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D858) = ecx;
    ecx = MEM32(eax + 0x6270DC);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0x6270E0);
    MEM32(0x64D854) = eax;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00265F8Cu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00265F8C: ;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    esi = MEM32(eax * 8 + 0x616FD4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x00265FBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00265FB3u); } /* indirect call */
    }

loc_00265FBA: ;
    ecx = MEM32(0x64D884);
    edx = MEM32(0x64D880);
    eax = MEM32(0x64D854);
    MEM32(0x64D884) = edx;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp + 0x34;
    PUSH32(esp, edx);
    MEM32(0x64D854) = eax;
    eax = MEM32(0x64D878);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    MEM32(0x64D87C) = eax;
    eax = MEM32(0x34AC38);
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0026600Bu); RECOMP_ABI_CALL(0x0005A6D0u, sub_0005A6D0); /* call 0x0005A6D0 */

loc_0026600B: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00266050
 * Original: 0x00266050 - 0x00266092 (66 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266050: ;
    ecx = MEM32(0x64D854);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002660A0
 * Original: 0x002660A0 - 0x00266101 (97 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002660A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002660A0: ;
    PUSH32(esp, 0x002660A5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002660A5: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x002660C0u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002660C0: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = 0xFFFFFFFFu;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00266110
 * Original: 0x00266110 - 0x00266186 (118 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266110: ;
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    PUSH32(esp, 0x0026612Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026612F: ;
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D854);
    MEM32(0x64D884) = eax;
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = 0xFFFFFFFFu;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00266190
 * Original: 0x00266190 - 0x002661BB (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266190: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    PUSH32(esp, 0x002661B3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002661B3: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002661C0
 * Original: 0x002661C0 - 0x002661E7 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002661C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002661C0: ;
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    PUSH32(esp, 0x002661DFu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002661DF: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002661F0
 * Original: 0x002661F0 - 0x00266234 (68 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002661F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002661F0: ;
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ecx + 0x6270D8;
    MEM16(eax * 8 + 0x616FD8) = 2;
    MEM32(eax * 8 + 0x616FDC) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 4);
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEM32(0x64D854) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00266240
 * Original: 0x00266240 - 0x00266263 (35 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266240: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026625Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026625B: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00266270
 * Original: 0x00266270 - 0x002662BC (76 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266270: ;
    PUSH32(esp, 0x00266275u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00266275: ;
    PUSH32(esp, 0x0026627Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026627A: ;
    ecx = MEM32(0x64D854);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002662C0
 * Original: 0x002662C0 - 0x002662CD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002662C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002662C0: ;
    PUSH32(esp, 0x002662C5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002662C5: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002662D0
 * Original: 0x002662D0 - 0x00266317 (71 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002662D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002662D0: ;
    PUSH32(esp, 0x002662D5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002662D5: ;
    ecx = MEM32(0x64D854);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00266320
 * Original: 0x00266320 - 0x00266388 (104 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266320: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    PUSH32(esp, 0x00266347u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00266347: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = 0;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00266390
 * Original: 0x00266390 - 0x002663FD (109 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266390: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    PUSH32(esp, 0x002663B7u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002663B7: ;
    PUSH32(esp, 0x002663BCu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002663BC: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = 0;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00266400
 * Original: 0x00266400 - 0x00266446 (70 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266400: ;
    PUSH32(esp, 0x00266405u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00266405: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = 0xFFFFFFFFu;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00266450
 * Original: 0x00266450 - 0x0026649B (75 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266450: ;
    PUSH32(esp, 0x00266455u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00266455: ;
    PUSH32(esp, 0x0026645Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026645A: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = 0xFFFFFFFFu;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002664A0
 * Original: 0x002664A0 - 0x00266500 (96 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002664A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002664A0: ;
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    PUSH32(esp, 0x002664BFu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002664BF: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = 0xFFFFFFFFu;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00266500
 * Original: 0x00266500 - 0x00266560 (96 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266500: ;
    PUSH32(esp, 0x00266505u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00266505: ;
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D854);
    MEM32(0x64D884) = eax;
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = 0xFFFFFFFFu;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00266560
 * Original: 0x00266560 - 0x00266588 (40 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266560: ;
    PUSH32(esp, 0x00266565u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00266565: ;
    PUSH32(esp, 0x0026656Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026656A: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    MEM32(0x64D884) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x64D87C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00266590
 * Original: 0x00266590 - 0x002665B3 (35 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266590(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266590: ;
    PUSH32(esp, 0x00266595u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00266595: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    MEM32(0x64D884) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x64D87C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002665C0
 * Original: 0x002665C0 - 0x002665D2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002665C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002665C0: ;
    PUSH32(esp, 0x002665C5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002665C5: ;
    PUSH32(esp, 0x002665CAu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002665CA: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002665E0
 * Original: 0x002665E0 - 0x00266611 (49 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002665E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002665E0: ;
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    PUSH32(esp, 0x002665FFu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002665FF: ;
    PUSH32(esp, 0x00266604u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00266604: ;
    PUSH32(esp, 0x00266609u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00266609: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00266620
 * Original: 0x00266620 - 0x00266637 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266620: ;
    PUSH32(esp, 0x00266625u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00266625: ;
    PUSH32(esp, 0x0026662Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026662A: ;
    PUSH32(esp, 0x0026662Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026662F: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00266640
 * Original: 0x00266640 - 0x002666A4 (100 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266640: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00266662u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00266662: ;
    ecx = MEM32(0x34AC38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026667E; /* jne: not equal / not zero */

loc_0026666C: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00266672u); RECOMP_ABI_CALL(0x001080C0u, sub_001080C0); /* call 0x001080C0 */

loc_00266672: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026667E: ;
    ecx = MEM32(ecx + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    eax = eax + ecx + 0xA0;
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    MEM32(eax) = esi;
    PUSH32(esp, 0x00266698u); RECOMP_ABI_CALL(0x001080C0u, sub_001080C0); /* call 0x001080C0 */

loc_00266698: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002666B0
 * Original: 0x002666B0 - 0x00266747 (151 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002666B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002666B0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x002666CCu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002666CC: ;
    PUSH32(esp, 0x002666D1u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002666D1: ;
    PUSH32(esp, 0x002666D6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002666D6: ;
    PUSH32(esp, 0x002666DBu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002666DB: ;
    PUSH32(esp, 0x002666E0u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002666E0: ;
    esi = MEM32(0x34AC38);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026673E; /* je: equal / zero */

loc_002666EA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002666F0u); RECOMP_ABI_CALL(0x00012F50u, sub_00012F50); /* call 0x00012F50 */

loc_002666F0: ;
    ecx = MEM32(esi + 0x30);
    esi = MEM32(ecx + 0xA8);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD0);
    MEM32(edx + ecx + 0xA8) = esi;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = eax;

loc_0026673E: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00266750
 * Original: 0x00266750 - 0x00266799 (73 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266750: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026676Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026676B: ;
    ecx = MEM32(0x34AC38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00266791; /* je: equal / zero */

loc_00266775: ;
    ecx = MEM32(ecx + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 0xA4) = MEM8(eax + 0xA4) & 0xFE;
    _fa = (uint32_t)(MEM8(eax + 0xA4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(eax + 0xC0) = 0;

loc_00266791: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002667A0
 * Original: 0x002667A0 - 0x002667CF (47 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002667A0(void)
{

loc_002667A0: ;
    ecx = MEM32(0x64D880);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x34AC38);
    MEM32(0x64D87C) = edx;
    edx = MEM32(ecx + 0x30);
    eax = MEM32(edx + eax + 0xA0);
    esp += 4; return; /* ret */

}

/**
 * sub_002667D0
 * Original: 0x002667D0 - 0x00266814 (68 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002667D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002667D0: ;
    PUSH32(esp, 0x002667D5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002667D5: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x34AC38);
    MEM32(0x64D87C) = edx;
    edx = MEM32(ecx + 0x30);
    eax = MEM32(edx + eax + 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00266809u); RECOMP_ABI_CALL(0x001080C0u, sub_001080C0); /* call 0x001080C0 */

loc_00266809: ;
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
 * sub_00266820
 * Original: 0x00266820 - 0x002668D1 (177 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00266820: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, edi);
    edi = MEM32(0x34AC38);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002668CF; /* je: equal / zero */

loc_00266845: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    PUSH32(esp, esi);
    esi = edx;
    edx = MEM32(edi + 0x30);
    esi = (uint32_t)((int32_t)esi * (int32_t)0xD0);
    xmm1 = XMM_SCALAR(MEMF(edx + esi + 0xAC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002668CE; /* jnp: not parity */

loc_00266869: ;
    eax = edx;
    MEMF(eax + esi + 0xAC) = xmm0.f[0]; /* movss */
    ecx = MEM32(edi + 0x30);
    eax = ecx + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x00266881u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026687Bu); } /* indirect call */
    }

loc_00266881: ;
    edx = MEM32(edi + 0x30);
    esi = MEM32(edx + esi + 0xA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002668CE; /* je: equal / zero */

loc_00266892: ;
    eax = MEM32(esi + 0xA0);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0xA4);
    PUSH32(esp, eax);
    edx = esi + 0xA8;
    ecx = esi + 0xD0;
    PUSH32(esp, edx);
    MEMF(esi + 0xDC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002668C0u); RECOMP_ABI_CALL(0x0008A820u, sub_0008A820); /* call 0x0008A820 */

loc_002668C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(0x64D29C) = esi;
    { uint32_t _icall_target = MEM32(esi + 0x24); PUSH32(esp, 0x002668CAu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x002668C7u); } /* indirect call */
    }

loc_002668CA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);

loc_002668CE: ;
    POP32(esp, esi);

loc_002668CF: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002668E0
 * Original: 0x002668E0 - 0x00266938 (88 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002668E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002668E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00266910; /* jne: not equal / not zero */

loc_00266906: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_00266918;

loc_00266910: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_00266918: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00266926u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00266926: ;
    edx = eax;
    PUSH32(esp, 0x0026692Du); RECOMP_ABI_CALL(0x00266820u, sub_00266820); /* call 0x00266820 */

loc_0026692D: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00266940
 * Original: 0x00266940 - 0x00266A2F (239 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00266940: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, edi);
    edi = MEM32(0x34AC38);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00266A2C; /* je: equal / zero */

loc_00266966: ;
    eax = MEM32(0x64CFE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_002669A6; /* je: equal / zero */

loc_00266975: ;
    edx = MEM32(0x64D8D0);
    eax = ZX16(MEM16(edx));
    ecx = MEM32(0x64D8CC);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3337A8); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_002669A6: ;
    edx = MEM32(edi + 0x30);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    esi = (uint32_t)((int32_t)esi * (int32_t)0xD0);
    xmm1 = XMM_SCALAR(MEMF(edx + esi + 0xAC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00266A2B; /* jnp: not parity */

loc_002669C6: ;
    eax = edx;
    MEMF(eax + esi + 0xAC) = xmm0.f[0]; /* movss */
    ecx = MEM32(edi + 0x30);
    eax = ecx + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x002669DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002669D8u); } /* indirect call */
    }

loc_002669DE: ;
    edx = MEM32(edi + 0x30);
    esi = MEM32(edx + esi + 0xA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00266A2B; /* je: equal / zero */

loc_002669EF: ;
    eax = MEM32(esi + 0xA0);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0xA4);
    PUSH32(esp, eax);
    edx = esi + 0xA8;
    ecx = esi + 0xD0;
    PUSH32(esp, edx);
    MEMF(esi + 0xDC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00266A1Du); RECOMP_ABI_CALL(0x0008A820u, sub_0008A820); /* call 0x0008A820 */

loc_00266A1D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(0x64D29C) = esi;
    { uint32_t _icall_target = MEM32(esi + 0x24); PUSH32(esp, 0x00266A27u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00266A24u); } /* indirect call */
    }

loc_00266A27: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);

loc_00266A2B: ;
    POP32(esp, esi);

loc_00266A2C: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00266A30
 * Original: 0x00266A30 - 0x00266ABA (138 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266A30: ;
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 1;
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00266A5B; /* jne: not equal / not zero */

loc_00266A51: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_00266A63;

loc_00266A5B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_00266A63: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00266A8B; /* jne: not equal / not zero */

loc_00266A81: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_00266A93;

loc_00266A8B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_00266A93: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00266A9Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00266A9E: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00266AAFu); RECOMP_ABI_CALL(0x00266940u, sub_00266940); /* call 0x00266940 */

loc_00266AAF: ;
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
 * sub_00266AC0
 * Original: 0x00266AC0 - 0x00266AF9 (57 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266AC0: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x34AC38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x64D87C) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00266AE6; /* jne: not equal / not zero */

loc_00266AE2: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esp += 4; return; /* ret */

loc_00266AE6: ;
    ecx = MEM32(ecx + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx + 0xAC)); /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00266B00
 * Original: 0x00266B00 - 0x00266B7D (125 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266B00: ;
    PUSH32(esp, 0x00266B05u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00266B05: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x34AC38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x64D87C) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00266B2C; /* jne: not equal / not zero */

loc_00266B27: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_00266B3E;

loc_00266B2C: ;
    ecx = MEM32(ecx + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx + 0xAC)); /* movss */

loc_00266B3E: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00266B80
 * Original: 0x00266B80 - 0x00266BE5 (101 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266B80: ;
    ecx = MEM32(0x64D880);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x64D878);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x34AC38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00266BE4; /* je: equal / zero */

loc_00266BA2: ;
    ecx = MEM32(ecx + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    xmm2 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    edx = MEM32(edx);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx + 0xB8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + ecx + 0xBC)); /* movss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xB0) = edx;
    MEMF(eax + 0xB4) = xmm2.f[0]; /* movss */
    MEMF(eax + 0xB8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xBC) = xmm1.f[0]; /* movss */

loc_00266BE4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00266BF0
 * Original: 0x00266BF0 - 0x00266C26 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266BF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266BF0: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    esi = eax + 0x6270D8;
    PUSH32(esp, 0x00266C16u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00266C16: ;
    edx = esi;
    PUSH32(esp, 0x00266C1Du); RECOMP_ABI_CALL(0x00266B80u, sub_00266B80); /* call 0x00266B80 */

loc_00266C1D: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00266C30
 * Original: 0x00266C30 - 0x00266CD2 (162 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266C30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00266C38u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00266C38: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x34AC38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x64D87C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00266C81; /* je: equal / zero */

loc_00266C5A: ;
    ecx = MEM32(ecx + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx + 0xB0)); /* movss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xB4)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_00266C81: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(esp);
    eax = ecx + 0x6270D8;
    MEM32(eax) = edx;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x10);
    MEM16(ecx * 8 + 0x616FD8) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00266CE0
 * Original: 0x00266CE0 - 0x00266D45 (101 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266CE0: ;
    ecx = MEM32(0x64D880);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x64D878);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x34AC38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00266D44; /* je: equal / zero */

loc_00266D02: ;
    ecx = MEM32(ecx + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx)); /* movss */
    edx = MEM32(eax + ecx + 0xB0);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx + 0xB4)); /* movss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xB0) = edx;
    MEMF(eax + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xB8) = xmm2.f[0]; /* movss */
    MEMF(eax + 0xBC) = xmm1.f[0]; /* movss */

loc_00266D44: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00266D50
 * Original: 0x00266D50 - 0x00266D86 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266D50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266D50: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    esi = eax + 0x6270D8;
    PUSH32(esp, 0x00266D76u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00266D76: ;
    edx = esi;
    PUSH32(esp, 0x00266D7Du); RECOMP_ABI_CALL(0x00266CE0u, sub_00266CE0); /* call 0x00266CE0 */

loc_00266D7D: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00266D90
 * Original: 0x00266D90 - 0x00266E32 (162 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266D90: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00266D98u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00266D98: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x34AC38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x64D87C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00266DE1; /* je: equal / zero */

loc_00266DBA: ;
    ecx = MEM32(ecx + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx + 0xB8)); /* movss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xBC)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_00266DE1: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(esp);
    eax = ecx + 0x6270D8;
    MEM32(eax) = edx;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x10);
    MEM16(ecx * 8 + 0x616FD8) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00266E40
 * Original: 0x00266E40 - 0x00266EE4 (164 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266E40: ;
    eax = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x34AC38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D87C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00266EE3; /* je: equal / zero */

loc_00266E63: ;
    eax = MEM32(eax + 0x30);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD0);
    eax = MEM32(ecx + eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00266EE3; /* je: equal / zero */

loc_00266E77: ;
    ecx = MEM32(eax + 0x6C);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 8 (8-bit) */
    PUSH32(esp, edi);
    edi = eax + 0x260;
    if (TEST_NZ(_fa, _fb)) goto loc_00266E8C; /* jne: not equal / not zero */

loc_00266E86: ;
    edi = eax + 0xD0;

loc_00266E8C: ;
    edx = MEM32(esp + 8);
    ecx = edi + 0xE0;
    MEM32(edi + 0x180) = ecx;
    PUSH32(esp, edx);
    eax = 1;
    ecx = esi;
    PUSH32(esp, 0x00266EA9u); RECOMP_ABI_CALL(0x000A0C60u, sub_000A0C60); /* call 0x000A0C60 */

loc_00266EA9: ;
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 0x1C); /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(edi + 0x24); /* divss */
    xmm0 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 4); /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(edi + 0x28); /* divss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    POP32(esp, edi);

loc_00266EE3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00266EF0
 * Original: 0x00266EF0 - 0x00266F95 (165 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266EF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266EF0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    edx = MEM32(eax + 0x6270BC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    ecx = MEM32(eax + 0x6270D8);
    MEM32(esp) = ecx;
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270E0);
    ecx = esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00266F34u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00266F34: ;
    esi = esp + 0x14;
    ecx = eax;
    PUSH32(esp, 0x00266F3Fu); RECOMP_ABI_CALL(0x00266E40u, sub_00266E40); /* call 0x00266E40 */

loc_00266F3F: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(esp + 0x14);
    eax = ecx + 0x6270D8;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x20);
    MEM16(ecx * 8 + 0x616FD8) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00266FA0
 * Original: 0x00266FA0 - 0x002670F0 (336 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00266FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00266FA0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x64D880);
    MEM32(0x64D884) = edx;
    edx = MEM32(0x64D878);
    MEM32(0x64D87C) = edx;
    edx = MEM32(eax);
    MEM32(esp) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 8) = eax;
    eax = MEM32(0x34AC38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002670EC; /* je: equal / zero */

loc_00266FDB: ;
    edx = MEM32(eax + 0x30);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xD0);
    eax = MEM32(ecx + edx + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002670EC; /* je: equal / zero */

loc_00266FF3: ;
    ecx = MEM32(eax + 0x6C);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00267002; /* je: equal / zero */

loc_00266FFB: ;
    _fb = (uint32_t)(0x260) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x260;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00267007;

loc_00267002: ;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00267007: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x1C); /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x1C); /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    if (TEST_Z(_fa, _fb)) goto loc_0026707F; /* je: equal / zero */

loc_00267044: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] / MEMF(eax + 0x14); /* divss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x18); /* divss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    goto loc_002670AA;

loc_0026707F: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x14); /* divss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x18); /* divss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_002670AA: ;
    PUSH32(esp, esi);
    esi = eax + 0x90;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    eax = esi;
    PUSH32(esp, 0x002670BDu); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_002670BD: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 4); /* addss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 8); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);

loc_002670EC: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002670F0
 * Original: 0x002670F0 - 0x00267193 (163 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002670F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002670F0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D854);
    ecx = MEM32(eax + 0x6270B8);
    edx = MEM32(eax + 0x6270BC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(0x64D858);
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270E0);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = edi;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x00267131u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00267131: ;
    ecx = eax;
    edi = esp + 0x10;
    eax = esp + 4;
    PUSH32(esp, 0x00267140u); RECOMP_ABI_CALL(0x00266FA0u, sub_00266FA0); /* call 0x00266FA0 */

loc_00267140: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(esp + 0x10);
    eax = ecx + 0x6270D8;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x20);
    MEM16(ecx * 8 + 0x616FD8) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
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
 * sub_002671A0
 * Original: 0x002671A0 - 0x00267222 (130 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002671A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002671A0: ;
    PUSH32(esp, 0x002671A5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002671A5: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x34AC38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x64D87C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002671E3; /* je: equal / zero */

loc_002671C7: ;
    ecx = MEM32(ecx + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD0);
    eax = MEM32(eax + ecx + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002671E3; /* je: equal / zero */

loc_002671DB: ;
    ecx = MEM32(eax + 0xA0);
    goto loc_002671E5;

loc_002671E3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002671E5: ;
    edx = MEM32(0x64D854);
    eax = edx + 0x6270D8;
    MEM32(eax) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00267230
 * Original: 0x00267230 - 0x0026729B (107 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00267230: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(0x34AC38);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00267245; /* jne: not equal / not zero */

loc_0026723E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00267245: ;
    eax = MEM32(ebx + 0x30);
    edi = ecx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0xD0);
    esi = eax + edi;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esi + 0xC0); PUSH32(esp, 0x0026725Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00267254u); } /* indirect call */
    }

loc_0026725A: ;
    esi = MEM32(esi + 0xA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0026723E; /* je: equal / zero */

loc_00267267: ;
    eax = MEM32(ebx + 0x30);
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xD0)) >> 32) & 1);
    esi = esi + 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x90;
    PUSH32(esp, 0x0026727Du); RECOMP_ABI_CALL(0x0008AAC0u, sub_0008AAC0); /* call 0x0008AAC0 */

loc_0026727D: ;
    PUSH32(esp, 0x00267282u); RECOMP_ABI_CALL(0x0008A500u, sub_0008A500); /* call 0x0008A500 */

loc_00267282: ;
    PUSH32(esp, 0x00267287u); RECOMP_ABI_CALL(0x00071AA0u, sub_00071AA0); /* call 0x00071AA0 */

loc_00267287: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x00267290u); RECOMP_ABI_CALL(0x00072FF0u, sub_00072FF0); /* call 0x00072FF0 */

loc_00267290: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, esi);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002672A0
 * Original: 0x002672A0 - 0x00267309 (105 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002672A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002672A0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x002672C2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002672C2: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x002672CAu); RECOMP_ABI_CALL(0x00267230u, sub_00267230); /* call 0x00267230 */

loc_002672CA: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00267310
 * Original: 0x00267310 - 0x00267380 (112 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267310: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00267332u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00267332: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx + eax * 4 + 0x18);
    ecx = MEM32(0x64D854);
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00267380
 * Original: 0x00267380 - 0x002673AB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00267380: ;
    ecx = MEM32(eax + 0x14);
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(edx + eax * 4 + 0x18);
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002673A9; /* jnp: not parity */

loc_0026739F: ;
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002673A9u); RECOMP_ABI_CALL(0x0006D450u, sub_0006D450); /* call 0x0006D450 */

loc_002673A9: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002673B0
 * Original: 0x002673B0 - 0x00267446 (150 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002673B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_002673B0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D854);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    PUSH32(esp, edi);
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002673FE; /* jne: not equal / not zero */

loc_002673F4: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_00267406;

loc_002673FE: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_00267406: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00267411u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00267411: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edi = MEM32(ecx + eax * 4 + 0x18);
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0026743B; /* jnp: not parity */

loc_00267431: ;
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0026743Bu); RECOMP_ABI_CALL(0x0006D450u, sub_0006D450); /* call 0x0006D450 */

loc_0026743B: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00267450
 * Original: 0x00267450 - 0x00267486 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267450: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    eax = MEM32(esp + 8);
    ecx = MEM32(edx + eax * 4 + 0x18);
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    esi = esp + 8;
    ecx = esp + 0x10;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00267472u); RECOMP_ABI_CALL(0x000F9860u, sub_000F9860); /* call 0x000F9860 */

loc_00267472: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337F4); /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00267490
 * Original: 0x00267490 - 0x00267525 (149 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267490: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x002674B5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002674B5: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx + eax * 4 + 0x18);
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    esi = esp + 0xC;
    ecx = esp + 8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002674D1u); RECOMP_ABI_CALL(0x000F9860u, sub_000F9860); /* call 0x000F9860 */

loc_002674D1: ;
    ecx = MEM32(0x64D854);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337F4); /* mulss */
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00267530
 * Original: 0x00267530 - 0x002675DA (170 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267530: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00267555u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00267555: ;
    ecx = MEM32(0x64D854);
    MEM32(esp + 8) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00267588; /* jne: not equal / not zero */

loc_0026757E: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_00267590;

loc_00267588: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_00267590: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337A8); /* mulss */
    PUSH32(esp, ebx);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002675A4u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002675A4: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    ebx = MEM32(ecx + eax * 4 + 0x18);
    xmm5 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002675BBu); RECOMP_ABI_CALL(0x000213B0u, sub_000213B0); /* call 0x000213B0 */

loc_002675BB: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 3 (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_002675CE; /* je: equal / zero */

loc_002675C3: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002675CBu); RECOMP_ABI_CALL(0x0005BC70u, sub_0005BC70); /* call 0x0005BC70 */

loc_002675CB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002675CE: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002675E0
 * Original: 0x002675E0 - 0x0026764D (109 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002675E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002675E0: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    eax = MEM32(edx + 0x18);
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), LO16(edi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0026764B; /* jbe: below or equal (unsigned <=) */

loc_002675F6: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A8)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00267604: ;
    eax = MEM32(eax);
    SET_LO16(eax, MEM16(edx + eax + 0xC));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00267638; /* je: equal / zero */

loc_00267610: ;
    ebx = MEM32(ecx + 4);
    eax = ZX16(LO16(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(ebx + esi + 8) = LO16(eax);
    ebx = MEM32(ecx);
    ebx = MEM32(ebx);
    ebx = MEM32(ebx + edx + 4);
    eax = ZX16(MEM16(ebx + eax * 8));
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ecx + 4);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + eax) = xmm1.f[0]; /* movss */

loc_00267638: ;
    eax = MEM32(ecx);
    ebx = ZX16(MEM16(eax + 4));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00267604; /* jl: less (signed <) */

loc_00267649: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0026764B: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00267650
 * Original: 0x00267650 - 0x0026767A (42 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267650: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D884);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x00267672u); RECOMP_ABI_CALL(0x002675E0u, sub_002675E0); /* call 0x002675E0 */

loc_00267672: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00267680
 * Original: 0x00267680 - 0x0026769D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267680: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    eax = MEM32(esp + 4);
    ecx = MEM32(edx + eax * 4 + 0x18);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00267699u); RECOMP_ABI_CALL(0x000F9810u, sub_000F9810); /* call 0x000F9810 */

loc_00267699: ;
    eax = ZX16(LO16(eax));
    esp += 4; return; /* ret */

}

/**
 * sub_002676A0
 * Original: 0x002676A0 - 0x00267718 (120 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002676A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002676A0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x002676C3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002676C3: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx + eax * 4 + 0x18);
    eax = MEM32(edx + 4);
    edi = MEM32(0x64D854);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = edi + 0x6270D8;
    PUSH32(esp, 0x002676E4u); RECOMP_ABI_CALL(0x000F9810u, sub_000F9810); /* call 0x000F9810 */

loc_002676E4: ;
    eax = ZX16(LO16(eax));
    MEM32(esi) = eax;
    eax = MEM32(0x64D858);
    MEM32(eax * 8 + 0x616FDC) = esi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x64D854) = edi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00267720
 * Original: 0x00267720 - 0x0026777C (92 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267720: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026773Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026773B: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = 0xFFFFFFFFu;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00267780
 * Original: 0x00267780 - 0x002677EC (108 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267780(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267780: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x002677A2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002677A2: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx + eax * 4 + 0x18);
    ecx = ZX16(MEM16(edx));
    edx = MEM32(0x64D854);
    eax = edx + 0x6270D8;
    MEM32(eax) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002677F0
 * Original: 0x002677F0 - 0x00267845 (85 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002677F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002677F0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00267814u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00267814: ;
    esi = eax;
    PUSH32(esp, 0x0026781Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026781B: ;
    ebx = eax;
    PUSH32(esp, 0x00267822u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00267822: ;
    edx = MEM32(edi + 0x14);
    ecx = MEM32(edx);
    eax = MEM32(ecx + eax * 4 + 0x18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax));
    SET_LO16(edx, LO16(edx) | LO16(ebx));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    esi = ~esi;
    POP32(esp, edi);
    edx = edx & esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(eax) = LO16(edx);
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00267850
 * Original: 0x00267850 - 0x002678C5 (117 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267850(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267850: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00267873u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00267873: ;
    edi = eax;
    PUSH32(esp, 0x0026787Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026787A: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx + eax * 4 + 0x18);
    eax = ZX16(MEM16(edx));
    edx = MEM32(0x64D854);
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002678D0
 * Original: 0x002678D0 - 0x00267937 (103 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002678D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002678D0: ;
    ecx = MEM32(0x64D884);
    ecx = MEM32(ecx + 0x14);
    ecx = MEM32(ecx);
    ecx = ZX8(MEM8(ecx + 1));
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D854);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x64D884) = eax;
    eax = edx + 0x6270D8;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00267940
 * Original: 0x00267940 - 0x002679C9 (137 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267940: ;
    eax = MEM32(0x64D884);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    PUSH32(esp, esi);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00267982; /* je: equal / zero */

loc_00267967: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00267982; /* je: equal / zero */

loc_0026796D: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00267982; /* je: equal / zero */

loc_00267974: ;
    SET_LO8(ecx, MEM8(eax + 0x63));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00267982; /* jns: not sign (positive) */

loc_0026797B: ;
    esi = 1;
    goto loc_00267984;

loc_00267982: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00267984: ;
    ecx = MEM32(0x64D854);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = ecx + 0x6270D8;
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = edx;
    eax = MEM32(esp + 8);
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002679D0
 * Original: 0x002679D0 - 0x00267A42 (114 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002679D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002679D0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x002679F2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002679F2: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx + eax * 4 + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx));
    edx = MEM32(0x64D854);
    eax = edx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = edx;
    POP32(esp, esi);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00267A50
 * Original: 0x00267A50 - 0x00267AA0 (80 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267A50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267A50: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00267A73u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00267A73: ;
    edi = eax;
    PUSH32(esp, 0x00267A7Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00267A7A: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    eax = MEM32(ecx + eax * 4 + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax));
    edx = edi + edi;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ecx & 0xFFF0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(eax) = LO16(edx);
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00267AA0
 * Original: 0x00267AA0 - 0x00267AF8 (88 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00267AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267AA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00267ACBu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00267ACB: ;
    MEM8(esp + 8) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00267AD4u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00267AD4: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, 1);
    MEM8(esp + 0x10) = LO8(eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00267AEAu); RECOMP_ABI_CALL(0x0005B530u, sub_0005B530); /* call 0x0005B530 */

loc_00267AEA: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00267B00
 * Original: 0x00267B00 - 0x00267B82 (130 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00267B00: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    SET_LO8(ebx, LO8(eax));
    if (CMP_EQ(_fa, _fb)) goto loc_00267B7D; /* je: equal / zero */

loc_00267B08: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00267B7D; /* je: equal / zero */

loc_00267B0D: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00267B7D; /* je: equal / zero */

loc_00267B14: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00267B7D; /* je: equal / zero */

loc_00267B1A: ;
    ebp = MEM32(eax + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00267B7D; /* je: equal / zero */

loc_00267B21: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x00267B2Eu); RECOMP_ABI_CALL(0x0005B440u, sub_0005B440); /* call 0x0005B440 */

loc_00267B2E: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00267B3D; /* jne: not equal / not zero */

loc_00267B37: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00267B3D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00267B59; /* jne: not equal / not zero */

loc_00267B42: ;
    SET_LO8(ebx, MEM8(esp + 0x10));
    eax = esi;
    PUSH32(esp, 0x00267B4Du); RECOMP_ABI_CALL(0x0005B4C0u, sub_0005B4C0); /* call 0x0005B4C0 */

loc_00267B4D: ;
    ecx = ZX8(LO8(eax));
    SET_LO8(ebx, MEM8(ecx + ebp + 0x44));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xF0 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00267B37; /* ja: above (unsigned >) */

loc_00267B59: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00267B37; /* je: equal / zero */

loc_00267B60: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00267B37; /* je: equal / zero */

loc_00267B67: ;
    eax = MEM32(eax);
    edx = MEM32(eax + 0xC);
    ecx = ZX8(LO8(ebx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00267B37; /* jbe: below or equal (unsigned <=) */

loc_00267B73: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 8);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00267B7D: ;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00267B90
 * Original: 0x00267B90 - 0x00267BDF (79 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267B90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267B90: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00267BB4u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00267BB4: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x00267BBBu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00267BBB: ;
    MEM8(esp + 8) = LO8(eax);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    SET_LO8(eax, LO8(ebx));
    PUSH32(esp, 0x00267BCBu); RECOMP_ABI_CALL(0x00267B00u, sub_00267B00); /* call 0x00267B00 */

loc_00267BCB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00267BD1u); RECOMP_ABI_CALL(0x001080C0u, sub_001080C0); /* call 0x001080C0 */

loc_00267BD1: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00267BE0
 * Original: 0x00267BE0 - 0x00267C77 (151 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267BE0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00267C03u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00267C03: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00267C35; /* je: equal / zero */

loc_00267C07: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00267C35; /* je: equal / zero */

loc_00267C0C: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00267C35; /* je: equal / zero */

loc_00267C13: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00267C35; /* je: equal / zero */

loc_00267C19: ;
    edi = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00267C35; /* je: equal / zero */

loc_00267C20: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(eax));
    eax = esi;
    PUSH32(esp, 0x00267C2Au); RECOMP_ABI_CALL(0x0005B4C0u, sub_0005B4C0); /* call 0x0005B4C0 */

loc_00267C2A: ;
    edx = ZX8(LO8(eax));
    edx = ZX8(MEM8(edx + edi + 0x44));
    POP32(esp, ebx);
    goto loc_00267C38;

loc_00267C35: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00267C38: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 0xC);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00267C80
 * Original: 0x00267C80 - 0x00267CC6 (70 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267C80: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00267CA3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00267CA3: ;
    MEM8(esp + 4) = LO8(eax);
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0x00267CB3u); RECOMP_ABI_CALL(0x0005B440u, sub_0005B440); /* call 0x0005B440 */

loc_00267CB3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00267CB9u); RECOMP_ABI_CALL(0x001080C0u, sub_001080C0); /* call 0x001080C0 */

loc_00267CB9: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00267CD0
 * Original: 0x00267CD0 - 0x00267D1F (79 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267CD0: ;
    eax = MEM32(0x64D880);
    edx = MEM32(0x64D858);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = edx;
    edx = MEM32(eax + 0x6270D8);
    PUSH32(esp, edx);
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D854) = eax;
    PUSH32(esp, 0x00267D13u); RECOMP_ABI_CALL(0x000204B0u, sub_000204B0); /* call 0x000204B0 */

loc_00267D13: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00267D20
 * Original: 0x00267D20 - 0x00267D78 (88 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267D20: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00267D42u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00267D42: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = edx;
    edx = MEM32(ecx + 0x6270D8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(0x64D854) = ecx;
    PUSH32(esp, 0x00267D6Cu); RECOMP_ABI_CALL(0x00020670u, sub_00020670); /* call 0x00020670 */

loc_00267D6C: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00267D80
 * Original: 0x00267D80 - 0x00267DD1 (81 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267D80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267D80: ;
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D858);
    MEM32(0x64D854) = ecx;
    ecx = MEM32(ecx + 0x6270D8);
    PUSH32(esp, ecx);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(0x64D858) = edx;
    PUSH32(esp, 0x00267DC6u); RECOMP_ABI_CALL(0x000205A0u, sub_000205A0); /* call 0x000205A0 */

loc_00267DC6: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00267DE0
 * Original: 0x00267DE0 - 0x00267DFA (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267DE0: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    eax = MEM32(edx + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00267DF2; /* jne: not equal / not zero */

loc_00267DF1: ;
    esp += 4; return; /* ret */

loc_00267DF2: ;
    eax = ZX8(MEM8(eax + 0xC));
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00267E00
 * Original: 0x00267E00 - 0x00267E73 (115 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267E00: ;
    eax = MEM32(0x64D884);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax);
    MEM32(0x64D87C) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00267E36; /* je: equal / zero */

loc_00267E30: ;
    SET_LO8(edx, MEM8(eax + 0xC));
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00267E36: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00267E80
 * Original: 0x00267E80 - 0x00267ECC (76 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00267E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267E80: ;
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax + 4);
    SET_LO8(edx, MEM8(esp + 4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00267EC9; /* je: equal / zero */

loc_00267E96: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0xC));
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 4) = eax;
    SET_LO8(eax, ((_fa == 0)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00267EC9; /* jae: above or equal (unsigned >=) */

loc_00267EAF: ;
    eax = ZX8(LO8(edx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00267EC9; /* je: equal / zero */

loc_00267EBC: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00267EC9; /* je: equal / zero */

loc_00267EC3: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00267EC9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00267ED0
 * Original: 0x00267ED0 - 0x00267F39 (105 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267ED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267ED0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00267EF2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00267EF2: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x00267EFAu); RECOMP_ABI_CALL(0x00267E80u, sub_00267E80); /* call 0x00267E80 */

loc_00267EFA: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00267F40
 * Original: 0x00267F40 - 0x00267F75 (53 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267F40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00267F40: ;
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    eax = MEM32(eax + 0x14);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x00267F6Du); RECOMP_ABI_CALL(0x0006D520u, sub_0006D520); /* call 0x0006D520 */

loc_00267F6D: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00267F80
 * Original: 0x00267F80 - 0x00267FBB (59 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00267F80: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00267F9B; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00267F8E: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00267FA1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00267F9B: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_00267FA1: ;
    eax = MEM32(esp + 8);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    eax = MEM32(eax + 0x18);
    SET_LO8(edx, MEM8(esp + 8));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00267FBAu); RECOMP_ABI_CALL(0x0006D6C0u, sub_0006D6C0); /* call 0x0006D6C0 */

loc_00267FBA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00267FC0
 * Original: 0x00267FC0 - 0x0026806C (172 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00267FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00267FC0: ;
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D854);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0026800F; /* jne: not equal / not zero */

loc_00268005: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_00268017;

loc_0026800F: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_00268017: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00268028u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00268028: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    edx = eax;
    if ((_fca > _fcb)) goto loc_00268045; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00268038: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0026804B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00268045: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_0026804B: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00268060u); RECOMP_ABI_CALL(0x0006D6C0u, sub_0006D6C0); /* call 0x0006D6C0 */

loc_00268060: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00268070
 * Original: 0x00268070 - 0x002680E9 (121 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268070: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00268092u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00268092: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(esi + 0x14);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(eax + 4);
    xmm0 = XMM_SCALAR(MEMF(edx + ecx + 0x14)); /* movss */
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002680F0
 * Original: 0x002680F0 - 0x00268162 (114 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002680F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002680F0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00268114u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00268114: ;
    ebx = eax;
    PUSH32(esp, 0x0026811Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026811B: ;
    edi = eax;
    PUSH32(esp, 0x00268122u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00268122: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx + 0x18);
    esi = MEM32(edx + 4);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026813F; /* je: equal / zero */

loc_00268139: ;
    MEM8(eax + 0xC) = MEM8(eax + 0xC) | 4;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_00268143;

loc_0026813F: ;
    MEM8(eax + 0xC) = MEM8(eax + 0xC) & 0xFB;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00268143: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00268156; /* jne: not equal / not zero */

loc_0026814A: ;
    MEM8(eax + 0xC) = MEM8(eax + 0xC) | 8;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00268156: ;
    MEM8(eax + 0xC) = MEM8(eax + 0xC) & 0xF7;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00268170
 * Original: 0x00268170 - 0x002681E9 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268170: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00268192u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00268192: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(esi + 0x14);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(eax + 4);
    ecx = ZX8(MEM8(edx + ecx + 0xC));
    edx = MEM32(0x64D854);
    eax = edx + 0x6270D8;
    ecx = ecx & 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002681F0
 * Original: 0x002681F0 - 0x0026826E (126 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002681F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002681F0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00268212u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00268212: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(esi + 0x14);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(eax + 4);
    ecx = ZX8(MEM8(edx + ecx + 0xC));
    edx = MEM32(0x64D854);
    ecx = ecx >> 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ~ecx;
    eax = edx + 0x6270D8;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00268270
 * Original: 0x00268270 - 0x0026829B (43 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268270: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00268292u); RECOMP_ABI_CALL(0x0005BA20u, sub_0005BA20); /* call 0x0005BA20 */

loc_00268292: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002682A0
 * Original: 0x002682A0 - 0x002682E6 (70 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002682A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002682A0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x002682C2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002682C2: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 8);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002682DE; /* je: equal / zero */

loc_002682D6: ;
    MEM8(ecx + 0xC) = MEM8(ecx + 0xC) | 2;
    _fa = (uint32_t)(MEM8(ecx + 0xC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002682DE: ;
    MEM8(ecx + 0xC) = MEM8(ecx + 0xC) & 0xFD;
    _fa = (uint32_t)(MEM8(ecx + 0xC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002682AB
 * Original: 0x002682AB - 0x002682E6 (59 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002682AB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002682AB: ;
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x002682C2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002682C2: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 8);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002682DE; /* je: equal / zero */

loc_002682D6: ;
    MEM8(ecx + 0xC) = MEM8(ecx + 0xC) | 2;
    _fa = (uint32_t)(MEM8(ecx + 0xC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002682DE: ;
    MEM8(ecx + 0xC) = MEM8(ecx + 0xC) & 0xFD;
    _fa = (uint32_t)(MEM8(ecx + 0xC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002682F0
 * Original: 0x002682F0 - 0x0026835B (107 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002682F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002682F0: ;
    ecx = MEM32(0x64D884);
    ecx = MEM32(ecx + 0x14);
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 4);
    ecx = ZX8(MEM8(ecx + 0xC));
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D854);
    MEM32(0x64D884) = eax;
    eax = edx + 0x6270D8;
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00268360
 * Original: 0x00268360 - 0x002683D9 (121 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268360: ;
    eax = MEM32(0x64D884);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00268399; /* je: equal / zero */

loc_00268386: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00268399; /* je: equal / zero */

loc_0026838C: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268399; /* je: equal / zero */

loc_00268393: ;
    edx = ZX16(MEM16(ecx + 0x60));
    goto loc_0026839C;

loc_00268399: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0026839C: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002683E0
 * Original: 0x002683E0 - 0x00268401 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002683E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002683E0: ;
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002683FD; /* je: equal / zero */

loc_002683E9: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002683FD; /* je: equal / zero */

loc_002683EF: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002683FD; /* je: equal / zero */

loc_002683F6: ;
    edx = ecx;
    eax = ZX8(MEM8(edx + 0x62));
    esp += 4; return; /* ret */

loc_002683FD: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00268410
 * Original: 0x00268410 - 0x00268489 (121 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268410: ;
    eax = MEM32(0x64D884);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00268449; /* je: equal / zero */

loc_00268436: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00268449; /* je: equal / zero */

loc_0026843C: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268449; /* je: equal / zero */

loc_00268443: ;
    edx = ZX8(MEM8(ecx + 0x62));
    goto loc_0026844C;

loc_00268449: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0026844C: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00268490
 * Original: 0x00268490 - 0x002684A4 (20 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268490(void)
{

loc_00268490: ;
    edx = MEM32(eax + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    esi = MEM32(eax + 0x28);
    PUSH32(esp, 0x002684A2u); RECOMP_ABI_CALL(0x00065D80u, sub_00065D80); /* call 0x00065D80 */

loc_002684A2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002684B0
 * Original: 0x002684B0 - 0x002684EC (60 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002684B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002684B0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x002684D2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002684D2: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x28);
    PUSH32(esp, 0x002684E3u); RECOMP_ABI_CALL(0x00065D80u, sub_00065D80); /* call 0x00065D80 */

loc_002684E3: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002684F0
 * Original: 0x002684F0 - 0x00268521 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002684F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002684F0: ;
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268515; /* je: equal / zero */

loc_002684F9: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00268515; /* je: equal / zero */

loc_002684FF: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268515; /* je: equal / zero */

loc_00268506: ;
    eax = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = edx;
    esp += 4; return; /* ret */

loc_00268515: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00268530
 * Original: 0x00268530 - 0x002685B2 (130 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268530: ;
    eax = MEM32(0x64D884);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    PUSH32(esp, esi);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0026856B; /* je: equal / zero */

loc_00268557: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026856B; /* je: equal / zero */

loc_0026855D: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026856B; /* je: equal / zero */

loc_00268564: ;
    esi = 1;
    goto loc_0026856D;

loc_0026856B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0026856D: ;
    ecx = MEM32(0x64D854);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = ecx + 0x6270D8;
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = edx;
    eax = MEM32(esp + 8);
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002685C0
 * Original: 0x002685C0 - 0x00268608 (72 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002685C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002685C0: ;
    eax = MEM32(edx + 0x14);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268607; /* je: equal / zero */

loc_002685C9: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00268607; /* je: equal / zero */

loc_002685CF: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268607; /* je: equal / zero */

loc_002685D6: ;
    ecx = MEM32(edx + 0x14);
    eax = MEM32(ecx);
    MEM8(eax + 1) = MEM8(eax + 1) & 0xEF;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268607; /* je: equal / zero */

loc_002685E6: ;
    eax = ZX8(MEM8(eax + 0x2E));
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268607; /* je: equal / zero */

loc_002685F2: ;
    ecx = MEM32(0x64D1DC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268607; /* je: equal / zero */

loc_002685FC: ;
    _fa = (uint32_t)(MEM32(ecx + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x3C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00268607; /* jne: not equal / not zero */

loc_00268602: ;
    g_seh_ebp = ebp; sub_00016EF0(); return; /* tail jmp 0x00016EF0 */

loc_00268607: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00268610
 * Original: 0x00268610 - 0x00268683 (115 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268610: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00268632u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00268632: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026867A; /* je: equal / zero */

loc_0026863B: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026867A; /* je: equal / zero */

loc_00268641: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026867A; /* je: equal / zero */

loc_00268648: ;
    eax = edx;
    eax = MEM32(eax);
    MEM8(eax + 1) = MEM8(eax + 1) & 0xEF;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026867A; /* je: equal / zero */

loc_00268657: ;
    eax = ZX8(MEM8(eax + 0x2E));
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026867A; /* je: equal / zero */

loc_00268663: ;
    ecx = MEM32(0x64D1DC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026867A; /* je: equal / zero */

loc_0026866D: ;
    _fa = (uint32_t)(MEM32(ecx + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x3C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026867A; /* jne: not equal / not zero */

loc_00268673: ;
    edx = esi;
    PUSH32(esp, 0x0026867Au); RECOMP_ABI_CALL(0x00016EF0u, sub_00016EF0); /* call 0x00016EF0 */

loc_0026867A: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00268690
 * Original: 0x00268690 - 0x00268721 (145 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268690: ;
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D87C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002686E0; /* je: equal / zero */

loc_002686B8: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002686E0; /* je: equal / zero */

loc_002686BE: ;
    edx = MEM32(eax + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002686E0; /* je: equal / zero */

loc_002686C5: ;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002686DE; /* je: equal / zero */

loc_002686CC: ;
    SET_LO16(ecx, MEM16(edx + 0x60));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002686DE; /* jae: above or equal (unsigned >=) */

loc_002686D5: ;
    ecx = ZX16(LO16(ecx));
    ecx = MEM32(eax + ecx * 4 + 8);
    goto loc_002686E0;

loc_002686DE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002686E0: ;
    ecx = ZX8(MEM8(ecx + 0x33));
    edx = MEM32(0x64D854);
    eax = edx + 0x6270D8;
    MEM32(eax) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00268730
 * Original: 0x00268730 - 0x002687C1 (145 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268730: ;
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D87C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00268780; /* je: equal / zero */

loc_00268758: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00268780; /* je: equal / zero */

loc_0026875E: ;
    edx = MEM32(eax + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268780; /* je: equal / zero */

loc_00268765: ;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026877E; /* je: equal / zero */

loc_0026876C: ;
    SET_LO16(ecx, MEM16(edx + 0x60));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0026877E; /* jae: above or equal (unsigned >=) */

loc_00268775: ;
    ecx = ZX16(LO16(ecx));
    ecx = MEM32(eax + ecx * 4 + 8);
    goto loc_00268780;

loc_0026877E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00268780: ;
    ecx = ZX16(MEM16(ecx + 0x34));
    edx = MEM32(0x64D854);
    eax = edx + 0x6270D8;
    MEM32(eax) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002687D0
 * Original: 0x002687D0 - 0x00268867 (151 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002687D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002687D0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x002687F2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002687F2: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268825; /* je: equal / zero */

loc_002687FD: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 1), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00268825; /* je: equal / zero */

loc_00268803: ;
    esi = MEM32(ecx + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268825; /* je: equal / zero */

loc_0026880A: ;
    ecx = MEM32(ecx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268823; /* je: equal / zero */

loc_00268811: ;
    SET_LO16(edx, MEM16(esi + 0x60));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00268823; /* jae: above or equal (unsigned >=) */

loc_0026881A: ;
    edx = ZX16(LO16(edx));
    edx = MEM32(ecx + edx * 4 + 8);
    goto loc_00268825;

loc_00268823: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00268825: ;
    edx = ZX8(MEM8(edx + 0x33));
    esi = MEM32(0x64D854);
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x64D858);
    ecx = esi + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x64D854) = esi;
    MEM32(ecx) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00268870
 * Original: 0x00268870 - 0x00268907 (151 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268870: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00268892u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00268892: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002688C5; /* je: equal / zero */

loc_0026889D: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 1), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002688C5; /* je: equal / zero */

loc_002688A3: ;
    esi = MEM32(ecx + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002688C5; /* je: equal / zero */

loc_002688AA: ;
    ecx = MEM32(ecx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002688C3; /* je: equal / zero */

loc_002688B1: ;
    SET_LO16(edx, MEM16(esi + 0x60));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002688C3; /* jae: above or equal (unsigned >=) */

loc_002688BA: ;
    edx = ZX16(LO16(edx));
    edx = MEM32(ecx + edx * 4 + 8);
    goto loc_002688C5;

loc_002688C3: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002688C5: ;
    edx = ZX16(MEM16(edx + 0x34));
    esi = MEM32(0x64D854);
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x64D858);
    ecx = esi + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x64D854) = esi;
    MEM32(ecx) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00268910
 * Original: 0x00268910 - 0x00268990 (128 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268910: ;
    eax = MEM32(0x64D884);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00268951; /* je: equal / zero */

loc_00268931: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00268951; /* je: equal / zero */

loc_00268936: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268951; /* je: equal / zero */

loc_0026893D: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268951; /* je: equal / zero */

loc_00268943: ;
    ecx = MEM32(eax + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268951; /* je: equal / zero */

loc_0026894A: ;
    edx = 1;
    goto loc_00268953;

loc_00268951: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00268953: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00268990
 * Original: 0x00268990 - 0x00268A00 (112 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268990: ;
    ecx = MEM32(0x64D884);
    ecx = MEM32(ecx + 0x14);
    ecx = MEM32(ecx);
    edx = MEM32(0x64D878);
    ecx = ZX16(MEM16(ecx + 0x38));
    eax = MEM32(0x64D880);
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D854);
    MEM32(0x64D884) = eax;
    eax = edx + 0x6270D8;
    MEM32(eax) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00268A00
 * Original: 0x00268A00 - 0x00268A62 (98 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268A00: ;
    ecx = MEM32(0x64D884);
    ecx = MEM32(ecx + 0x14);
    ecx = MEM32(ecx);
    edx = MEM32(0x64D878);
    ecx = ZX8(MEM8(ecx + 0x3A));
    eax = MEM32(0x64D880);
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D854);
    MEM32(0x64D884) = eax;
    eax = edx + 0x6270D8;
    MEM32(eax) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00268A70
 * Original: 0x00268A70 - 0x00268A8C (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268A70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268A70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00268A7Cu); RECOMP_ABI_CALL(0x00020DF0u, sub_00020DF0); /* call 0x00020DF0 */

loc_00268A7C: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx + 0x3E) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00268A90
 * Original: 0x00268A90 - 0x00268AD4 (68 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268A90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268A90: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00268AB2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00268AB2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00268ABDu); RECOMP_ABI_CALL(0x00020DF0u, sub_00020DF0); /* call 0x00020DF0 */

loc_00268ABD: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx);
    MEM16(eax + 0x3E) = 0;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00268AE0
 * Original: 0x00268AE0 - 0x00268B1D (61 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268AE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268AE0: ;
    PUSH32(esp, ecx);
    SET_LO16(eax, MEM16(esp + 0xC));
    SET_LO8(ecx, MEM8(esp + 0x10));
    SET_LO8(edx, MEM8(esp + 0x14));
    MEM16(esp + 0xC) = LO16(eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM8(esp + 0x12) = LO8(ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM8(esp + 0x1F) = LO8(edx);
    PUSH32(esp, 0x00268B0Du); RECOMP_ABI_CALL(0x00020DF0u, sub_00020DF0); /* call 0x00020DF0 */

loc_00268B0D: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x3E) = 0;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00268B20
 * Original: 0x00268B20 - 0x00268B9E (126 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00268B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268B20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00268B4Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00268B4D: ;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00268B54u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00268B54: ;
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00268B5Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00268B5D: ;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00268B64u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00268B64: ;
    SET_LO8(edx, MEM8(esp + 0x14));
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM16(esp + 0x20) = LO16(edi);
    MEM8(esp + 0x22) = LO8(edx);
    MEM8(esp + 0x23) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00268B83u); RECOMP_ABI_CALL(0x00020DF0u, sub_00020DF0); /* call 0x00020DF0 */

loc_00268B83: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM16(eax + 0x3E) = 0;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00268BA0
 * Original: 0x00268BA0 - 0x00268C69 (201 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268BA0(void)
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

loc_00268BA0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00268BD0; /* jne: not equal / not zero */

loc_00268BC6: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_00268BD8;

loc_00268BD0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_00268BD8: ;
    PUSH32(esp, esi);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00268BE4u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00268BE4: ;
    esi = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x00268C0Du); RECOMP_ABI_CALL(0x00020DF0u, sub_00020DF0); /* call 0x00020DF0 */

loc_00268C0D: ;
    eax = MEM32(0x64CFE8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00268C34; /* je: equal / zero */

loc_00268C19: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x00268C22u); RECOMP_ABI_CALL(0x0028AF78u, sub_0028AF78); /* call 0x0028AF78 */

loc_00268C22: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    MEM8(edx + 3) = LO8(eax);
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00268C34: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x18);
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00268C5E; /* jnp: not parity */

loc_00268C54: ;
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00268C5Eu); RECOMP_ABI_CALL(0x0006D450u, sub_0006D450); /* call 0x0006D450 */

loc_00268C5E: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
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
 * sub_00268C70
 * Original: 0x00268C70 - 0x00268CCE (94 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00268C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268C70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00268C7Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00268C7D: ;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00268C84u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00268C84: ;
    esi = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    PUSH32(esp, 0);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 1);
    MEM32(0x64D87C) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM16(edx + 0x3E) = LO16(edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00268CB6u); RECOMP_ABI_CALL(0x00020DF0u, sub_00020DF0); /* call 0x00020DF0 */

loc_00268CB6: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 0x3E) = LO16(edi);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00268CD0
 * Original: 0x00268CD0 - 0x00268D3E (110 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268CD0: ;
    eax = MEM32(0x64D884);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax);
    edx = MEM32(0x64D878);
    ecx = MEM32(0x64D880);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(eax + 0x3A));
    eax = MEM32(eax + 0x2C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x34);
    eax = ZX8(MEM8(esi + eax + 0x33));
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D854);
    MEM32(0x64D884) = ecx;
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00268D40
 * Original: 0x00268D40 - 0x00268DAE (110 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268D40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268D40: ;
    eax = MEM32(0x64D884);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax);
    edx = MEM32(0x64D878);
    ecx = MEM32(0x64D880);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(eax + 0x3A));
    eax = MEM32(eax + 0x2C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x34);
    eax = ZX16(MEM16(esi + eax));
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D854);
    MEM32(0x64D884) = ecx;
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00268DB0
 * Original: 0x00268DB0 - 0x00268E25 (117 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268DB0: ;
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    eax = MEM32(eax + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x00268DD8u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00268DD8: ;
    ecx = ZX8(MEM8(esi + 0x3A));
    edx = MEM32(esi + 0x2C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    ecx = ZX8(MEM8(ecx + edx + 0x33));
    edx = MEM32(0x64D854);
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00268E30
 * Original: 0x00268E30 - 0x00268EA5 (117 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268E30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268E30: ;
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    eax = MEM32(eax + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x00268E58u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00268E58: ;
    ecx = ZX8(MEM8(esi + 0x3A));
    edx = MEM32(esi + 0x2C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    ecx = ZX16(MEM16(ecx + edx));
    edx = MEM32(0x64D854);
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00268EB0
 * Original: 0x00268EB0 - 0x00268F1A (106 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268EB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268EB0: ;
    ecx = MEM32(0x64D884);
    ecx = MEM32(ecx + 0x14);
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + 0x18);
    ecx = ZX8(MEM8(ecx));
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D854);
    ecx = ecx >> 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x64D884) = eax;
    eax = edx + 0x6270D8;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00268F20
 * Original: 0x00268F20 - 0x00268F8B (107 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268F20: ;
    ecx = MEM32(0x64D884);
    ecx = MEM32(ecx + 0x14);
    ecx = MEM32(ecx);
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 0x34)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x34), 0xFFFF (16-bit) */
    ecx = MEM32(0x64D858);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D854);
    MEM32(0x64D884) = eax;
    eax = edx + 0x6270D8;
    MEM32(ecx * 8 + 0x616FDC) = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00268F90
 * Original: 0x00268F90 - 0x00268FF2 (98 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00268F90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00268F90: ;
    ecx = MEM32(0x64D884);
    ecx = MEM32(ecx + 0x14);
    ecx = MEM32(ecx);
    edx = MEM32(0x64D878);
    ecx = ZX16(MEM16(ecx + 0x3C));
    eax = MEM32(0x64D880);
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D854);
    MEM32(0x64D884) = eax;
    eax = edx + 0x6270D8;
    MEM32(eax) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00269000
 * Original: 0x00269000 - 0x00269087 (135 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00269000: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x14);
    ebp = MEM32(ecx);
    eax = MEM32(edx + 0x14);
    ecx = MEM32(eax);
    ebx = MEM32(ebp + 0x30);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0x0026901Cu); RECOMP_ABI_CALL(0x0006C370u, sub_0006C370); /* call 0x0006C370 */

loc_0026901C: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00269082; /* jg: greater (signed >) */

loc_00269024: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = eax * 4 + 8;
    ebx = esi;

loc_00269031: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 0x30);
    _fa = (uint32_t)(MEM32(edi + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00269046; /* jne: not equal / not zero */

loc_0026903E: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026907B; /* je: equal / zero */

loc_00269046: ;
    ecx = MEM32(ebp + 0x30);
    eax = MEM32(ecx + edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ecx + edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00269058; /* je: equal / zero */

loc_00269053: ;
    PUSH32(esp, 0x00269058u); RECOMP_ABI_CALL(0x0001FC50u, sub_0001FC50); /* call 0x0001FC50 */

loc_00269058: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 0x30);
    ecx = MEM32(ebp + 0x30);
    edx = MEM32(edi + eax);
    MEM32(edi + ecx) = edx;
    eax = MEM32(ebp + 0x30);
    _fa = (uint32_t)(MEM32(edi + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026907B; /* je: equal / zero */

loc_00269071: ;
    ecx = eax;
    esi = MEM32(ecx + edi);
    PUSH32(esp, 0x0026907Bu); RECOMP_ABI_CALL(0x00064B80u, sub_00064B80); /* call 0x00064B80 */

loc_0026907B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00269031; /* jne: not equal / not zero */

loc_00269081: ;
    POP32(esp, edi);

loc_00269082: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00269090
 * Original: 0x00269090 - 0x00269161 (209 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00269090: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x14);
    eax = MEM32(edx + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    eax = MEM32(ebp + 0x30);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    MEM32(esp + 8) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_0026915D; /* jbe: below or equal (unsigned <=) */

loc_002690B2: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 8;
    /* nop */

loc_002690C0: ;
    _fa = (uint32_t)(MEM32(edi + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00269141; /* je: equal / zero */

loc_002690C6: ;
    ecx = MEM32(ebx + 0x30);
    eax = MEM32(ecx + edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ecx + edi;
    if (CMP_EQ(_fa, _fb)) goto loc_002690D8; /* je: equal / zero */

loc_002690D3: ;
    PUSH32(esp, 0x002690D8u); RECOMP_ABI_CALL(0x0001FC50u, sub_0001FC50); /* call 0x0001FC50 */

loc_002690D8: ;
    edx = MEM32(ebp + 0x30);
    eax = MEM32(ebx + 0x30);
    ecx = MEM32(edi + edx);
    MEM32(edi + eax) = ecx;
    edx = MEM32(ebx + 0x30);
    _fa = (uint32_t)(MEM32(edi + edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002690F7; /* je: equal / zero */

loc_002690ED: ;
    eax = edx;
    esi = MEM32(eax + edi);
    PUSH32(esp, 0x002690F7u); RECOMP_ABI_CALL(0x00064B80u, sub_00064B80); /* call 0x00064B80 */

loc_002690F7: ;
    ecx = MEM32(ebx + 0x30);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00269141; /* je: equal / zero */

loc_00269101: ;
    ecx = MEM32(edi + eax + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = edi + eax + -8;
    if (CMP_EQ(_fa, _fb)) goto loc_00269114; /* je: equal / zero */

loc_0026910D: ;
    esi = eax;
    PUSH32(esp, 0x00269114u); RECOMP_ABI_CALL(0x0001FC50u, sub_0001FC50); /* call 0x0001FC50 */

loc_00269114: ;
    eax = MEM32(ebx + 0x30);
    edx = MEM32(ebp + 0x30);
    ecx = MEM32(eax + 4);
    edx = MEM32(edi + edx);
    MEM32(edi + ecx + -8) = edx;
    eax = MEM32(ebx + 0x30);
    ecx = MEM32(eax + 4);
    eax = MEM32(edi + ecx + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00269141; /* je: equal / zero */

loc_00269132: ;
    edx = MEM32(ebx + 0x30);
    eax = MEM32(edx + 4);
    esi = MEM32(eax + edi + -8);
    PUSH32(esp, 0x00269141u); RECOMP_ABI_CALL(0x00064B80u, sub_00064B80); /* call 0x00064B80 */

loc_00269141: ;
    eax = MEM32(ebp + 0x30);
    ecx = MEM32(esp + 0x10);
    edx = ZX16(MEM16(eax));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_002690C0; /* jl: less (signed <) */

loc_0026915B: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0026915D: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00269170
 * Original: 0x00269170 - 0x002691ED (125 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00269170: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x14);
    eax = MEM32(edx + 0x14);
    eax = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    PUSH32(esp, ebp);
    MEM32(esp + 8) = eax;
    eax = MEM32(eax + 0x30);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebp) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002691E9; /* jbe: below or equal (unsigned <=) */

loc_0026918B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 8;

loc_00269192: ;
    _fa = (uint32_t)(MEM32(edi + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002691D5; /* je: equal / zero */

loc_00269198: ;
    ecx = MEM32(ebx + 0x30);
    eax = MEM32(ecx + edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ecx + edi;
    if (CMP_EQ(_fa, _fb)) goto loc_002691B4; /* je: equal / zero */

loc_002691A5: ;
    PUSH32(esp, 0x002691AAu); RECOMP_ABI_CALL(0x0001FC50u, sub_0001FC50); /* call 0x0001FC50 */

loc_002691AA: ;
    edx = MEM32(ebx + 0x30);
    MEM32(edi + edx) = 0;

loc_002691B4: ;
    eax = MEM32(ebx + 0x30);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002691D5; /* je: equal / zero */

loc_002691BE: ;
    esi = edi + eax + -8;
    PUSH32(esp, 0x002691C7u); RECOMP_ABI_CALL(0x0001FC50u, sub_0001FC50); /* call 0x0001FC50 */

loc_002691C7: ;
    ecx = MEM32(ebx + 0x30);
    edx = MEM32(ecx + 4);
    MEM32(edi + edx + -8) = 0;

loc_002691D5: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 0x30);
    ecx = ZX16(MEM16(eax));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00269192; /* jl: less (signed <) */

loc_002691E7: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002691E9: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002691F0
 * Original: 0x002691F0 - 0x00269255 (101 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002691F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002691F0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00269213u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00269213: ;
    edi = eax;
    PUSH32(esp, 0x0026921Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026921A: ;
    edx = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    MEM32(0x64D854) = edx;
    edx = MEM32(edx + 0x6270D8);
    MEM32(0x64D858) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    eax = esi;
    PUSH32(esp, 0x00269248u); RECOMP_ABI_CALL(0x00269000u, sub_00269000); /* call 0x00269000 */

loc_00269248: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00269260
 * Original: 0x00269260 - 0x002692C5 (101 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269260: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00269283u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00269283: ;
    edi = eax;
    PUSH32(esp, 0x0026928Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026928A: ;
    edx = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 1);
    MEM32(0x64D854) = edx;
    edx = MEM32(edx + 0x6270D8);
    MEM32(0x64D858) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    eax = esi;
    PUSH32(esp, 0x002692B8u); RECOMP_ABI_CALL(0x00269000u, sub_00269000); /* call 0x00269000 */

loc_002692B8: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002692D0
 * Original: 0x002692D0 - 0x0026931C (76 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002692D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002692D0: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D884);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x64D854);
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = edx;
    edx = MEM32(ecx + 0x6270D8);
    MEM32(0x64D854) = ecx;
    PUSH32(esp, 0x00269314u); RECOMP_ABI_CALL(0x00269170u, sub_00269170); /* call 0x00269170 */

loc_00269314: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00269320
 * Original: 0x00269320 - 0x0026936C (76 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269320: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D884);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x64D854);
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = edx;
    edx = MEM32(ecx + 0x6270D8);
    MEM32(0x64D854) = ecx;
    PUSH32(esp, 0x00269364u); RECOMP_ABI_CALL(0x00269090u, sub_00269090); /* call 0x00269090 */

loc_00269364: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00269370
 * Original: 0x00269370 - 0x002693A4 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269370: ;
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    eax = MEM32(eax + 0x14);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x30);
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x0026939Bu); RECOMP_ABI_CALL(0x0006C3E0u, sub_0006C3E0); /* call 0x0006C3E0 */

loc_0026939B: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002693B0
 * Original: 0x002693B0 - 0x00269442 (146 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002693B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002693B0: ;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = MEM32(edx + 0x30);
    eax = MEM32(eax + ecx * 4 + 8);
    ecx = ZX8(MEM8(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00269441; /* jle: less or equal (signed <=) */

loc_002693CA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + 4;
    ebx = ecx;

loc_002693D2: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x20)); /* movss */
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00269418; /* je: equal / zero */

loc_002693E5: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00269418; /* je: equal / zero */

loc_002693EB: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00269418; /* je: equal / zero */

loc_002693F2: ;
    edx = ZX16(MEM16(ecx + 0xC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00269412; /* jle: less or equal (signed <=) */

loc_002693FC: ;
    esi = MEM32(ecx + 4);
    SET_LO16(ecx, MEM16(esp + 0x10));

loc_00269404: ;
    _fb = (uint32_t)(MEM16(esi + eax * 8)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + MEM16(esi + eax * 8));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00269404; /* jl: less (signed <) */

loc_0026940D: ;
    MEM16(esp + 0x10) = LO16(ecx);

loc_00269412: ;
    eax = MEM32(esp + 0x10);
    goto loc_0026941A;

loc_00269418: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0026941A: ;
    edx = ZX8(MEM8(edi + 0x2C));
    eax = ZX16(LO16(eax));
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x34;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    if ((_fa != 0)) goto loc_002693D2; /* jne: not equal / not zero */

loc_0026943E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00269441: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00269450
 * Original: 0x00269450 - 0x002694BD (109 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269450: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00269472u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00269472: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x0026947Au); RECOMP_ABI_CALL(0x002693B0u, sub_002693B0); /* call 0x002693B0 */

loc_0026947A: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002694C0
 * Original: 0x002694C0 - 0x002694EF (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002694C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002694C0: ;
    edx = MEM32(ecx + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    ecx = MEM32(edx);
    edx = MEM32(ecx + 0x30);
    ecx = MEM32(esp + 4);
    edx = MEM32(edx + ecx * 4 + 8);
    PUSH32(esp, esi);
    esi = edx + eax + 4;
    eax = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002694E1u); RECOMP_ABI_CALL(0x000F9810u, sub_000F9810); /* call 0x000F9810 */

loc_002694E1: ;
    eax = ZX16(LO16(eax));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x20); /* divss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002694F0
 * Original: 0x002694F0 - 0x00269583 (147 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002694F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002694F0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00269514u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00269514: ;
    esi = eax;
    PUSH32(esp, 0x0026951Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026951B: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x34);
    edx = MEM32(edi + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx + 0x30);
    eax = MEM32(edx + eax * 4 + 8);
    ebx = MEM32(0x64D854);
    esi = eax + esi + 4;
    eax = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + 0x6270D8;
    PUSH32(esp, 0x00269543u); RECOMP_ABI_CALL(0x000F9810u, sub_000F9810); /* call 0x000F9810 */

loc_00269543: ;
    ecx = ZX16(LO16(eax));
    eax = MEM32(0x64D858);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x20); /* divss */
    MEM32(eax * 8 + 0x616FDC) = edi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 2;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(edi) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(0x64D854) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00269590
 * Original: 0x00269590 - 0x002695FD (109 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269590(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269590: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x002695B2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002695B2: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx + 0x30);
    eax = MEM32(edx + eax * 4 + 8);
    eax = ZX8(MEM8(eax));
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00269600
 * Original: 0x00269600 - 0x0026967B (123 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269600: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00269608u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00269608: ;
    edi = eax;
    PUSH32(esp, 0x0026960Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026960F: ;
    esi = eax;
    PUSH32(esp, 0x00269616u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00269616: ;
    ebx = eax;
    PUSH32(esp, 0x0026961Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026961D: ;
    edx = MEM32(0x64D854);
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 0xFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00269680
 * Original: 0x00269680 - 0x002696C5 (69 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269680: ;
    PUSH32(esp, 0x00269685u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00269685: ;
    edx = MEM32(0x64D854);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002696D0
 * Original: 0x002696D0 - 0x00269715 (69 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002696D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002696D0: ;
    PUSH32(esp, 0x002696D5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002696D5: ;
    edx = MEM32(0x64D854);
    ecx = ZX8(HI8(eax));
    eax = edx + 0x6270D8;
    MEM32(eax) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00269720
 * Original: 0x00269720 - 0x00269768 (72 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269720: ;
    PUSH32(esp, 0x00269725u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00269725: ;
    edx = MEM32(0x64D854);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00269770
 * Original: 0x00269770 - 0x0026983D (205 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00269770: ;
    PUSH32(esp, ecx);
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337B4); /* comiss */
    PUSH32(esp, esi);
    esi = ecx;
    if ((_fca >= _fcb)) goto loc_0026983A; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x3337B4)) */

loc_00269781: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337B0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00269793; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0026978E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00269793: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3337AC); /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = eax;
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_002697AE; /* js: sign (negative) */

loc_002697AC: ;
    ecx = esi;

loc_002697AE: ;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x7F7F7F7F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    edx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_002697BF; /* jne: not equal / not zero */

loc_002697BD: ;
    edx = esi;

loc_002697BF: ;
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x3F3F3F3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    edx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_002697D3; /* jne: not equal / not zero */

loc_002697D1: ;
    edx = esi;

loc_002697D3: ;
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x1F1F1F1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    edx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_002697E7; /* jne: not equal / not zero */

loc_002697E5: ;
    edx = esi;

loc_002697E7: ;
    edx = edx >> 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xF0F0F0F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    edx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_002697FB; /* jne: not equal / not zero */

loc_002697F9: ;
    edx = esi;

loc_002697FB: ;
    edx = edx >> 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x7070707;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    edx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0026980F; /* jne: not equal / not zero */

loc_0026980D: ;
    edx = esi;

loc_0026980F: ;
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x3030303;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0026982D; /* je: equal / zero */

loc_00269820: ;
    eax = eax >> 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x1010101;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026982D: ;
    esi = esi >> 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0x1010101;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026983A: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00269840
 * Original: 0x00269840 - 0x002698F3 (179 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00269840: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00269870; /* jne: not equal / not zero */

loc_00269866: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_00269878;

loc_00269870: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_00269878: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00269886u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00269886: ;
    ebx = eax;
    PUSH32(esp, 0x0026988Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026988D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    ecx = eax;
    if ((_fca > _fcb)) goto loc_002698AA; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0026989D: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002698AD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_002698AA: ;
    xmm0 = xmm1; /* movaps */

loc_002698AD: ;
    edi = MEM32(0x64D854);
    eax = ebx;
    esi = edi + 0x6270D8;
    PUSH32(esp, 0x002698C0u); RECOMP_ABI_CALL(0x00269770u, sub_00269770); /* call 0x00269770 */

loc_002698C0: ;
    MEM32(esi) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x616FDC) = esi;
    MEM16(eax * 8 + 0x616FD8) = 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edi;
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00269900
 * Original: 0x00269900 - 0x00269941 (65 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269900(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269900: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = 0xFF000000u;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00269950
 * Original: 0x00269950 - 0x00269989 (57 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269950: ;
    eax = MEM32(0x64D884);
    eax = MEM32(eax + 0x18);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    edi = 1;
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x0026997Fu); RECOMP_ABI_CALL(0x000F9760u, sub_000F9760); /* call 0x000F9760 */

loc_0026997F: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00269990
 * Original: 0x00269990 - 0x002699C1 (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269990: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002699C0; /* je: equal / zero */

loc_0026999A: ;
    ecx = MEM32(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 4), LO16(eax) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002699C0; /* jbe: below or equal (unsigned <=) */

loc_002699A4: ;
    PUSH32(esp, edi);

loc_002699A5: ;
    edi = MEM32(edx + 4);
    ecx = ZX16(LO16(eax));
    ecx = ecx + ecx * 2;
    MEM8(edi + ecx * 4 + 0xA) = MEM8(edi + ecx * 4 + 0xA) & 0xFE;
    _fa = (uint32_t)(MEM8(edi + ecx * 4 + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = edi + ecx * 4;
    ecx = MEM32(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ecx + 4) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002699A5; /* jb: below (unsigned <) */

loc_002699BF: ;
    POP32(esp, edi);

loc_002699C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002699D0
 * Original: 0x002699D0 - 0x002699FA (42 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002699D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002699D0: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D884);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x002699F2u); RECOMP_ABI_CALL(0x00269990u, sub_00269990); /* call 0x00269990 */

loc_002699F2: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00269A00
 * Original: 0x00269A00 - 0x00269A39 (57 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269A00: ;
    eax = MEM32(0x64D884);
    eax = MEM32(eax + 0x18);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    edi = 1;
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x00269A2Fu); RECOMP_ABI_CALL(0x000F97C0u, sub_000F97C0); /* call 0x000F97C0 */

loc_00269A2F: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00269A40
 * Original: 0x00269A40 - 0x00269A6D (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269A40: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 0x20);
    ecx = MEM32(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 4), LO16(eax) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00269A6C; /* jbe: below or equal (unsigned <=) */

loc_00269A50: ;
    PUSH32(esp, edi);

loc_00269A51: ;
    edi = MEM32(edx + 4);
    ecx = ZX16(LO16(eax));
    ecx = ecx + ecx * 2;
    MEM8(edi + ecx * 4 + 0xA) = MEM8(edi + ecx * 4 + 0xA) & 0xFD;
    _fa = (uint32_t)(MEM8(edi + ecx * 4 + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = edi + ecx * 4;
    ecx = MEM32(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ecx + 4) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00269A51; /* jb: below (unsigned <) */

loc_00269A6B: ;
    POP32(esp, edi);

loc_00269A6C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00269A70
 * Original: 0x00269A70 - 0x00269A9A (42 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269A70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269A70: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D884);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x00269A92u); RECOMP_ABI_CALL(0x00269A40u, sub_00269A40); /* call 0x00269A40 */

loc_00269A92: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00269AA0
 * Original: 0x00269AA0 - 0x00269AD2 (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269AA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269AA0: ;
    eax = MEM32(0x64D884);
    eax = MEM32(eax + 0x18);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x20);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x00269AC9u); RECOMP_ABI_CALL(0x000F96F0u, sub_000F96F0); /* call 0x000F96F0 */

loc_00269AC9: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00269AE0
 * Original: 0x00269AE0 - 0x00269B13 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269AE0: ;
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x20);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 4);
    ecx = eax + edx * 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx + 0xA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00269B12; /* jne: not equal / not zero */

loc_00269AF9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = eax & 0xFFF9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEM16(ecx + 0xA) = LO16(eax);
    MEM16(ecx + 8) = 0;

loc_00269B12: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00269B20
 * Original: 0x00269B20 - 0x00269B7D (93 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269B20: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00269B42u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00269B42: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(edx + 0x20);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 4);
    ecx = eax + edx * 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx + 0xA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_00269B75; /* jne: not equal / not zero */

loc_00269B5C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = eax & 0xFFF9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEM16(ecx + 0xA) = LO16(eax);
    MEM16(ecx + 8) = 0;

loc_00269B75: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00269B80
 * Original: 0x00269B80 - 0x00269BBF (63 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269B80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269B80: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00269BA2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00269BA2: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(edx + 0x20);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 4);
    MEM8(eax + edx * 4 + 0xA) = MEM8(eax + edx * 4 + 0xA) & 0xFE;
    _fa = (uint32_t)(MEM8(eax + edx * 4 + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = eax + edx * 4;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00269BC0
 * Original: 0x00269BC0 - 0x00269C0B (75 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269BC0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00269BE2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00269BE2: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(edx + 0x20);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 4);
    ecx = eax + edx * 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx + 0xA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_00269C03; /* jne: not equal / not zero */

loc_00269BFC: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ecx + 0xA) = LO16(eax);

loc_00269C03: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00269C10
 * Original: 0x00269C10 - 0x00269C4F (63 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269C10: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00269C32u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00269C32: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(edx + 0x20);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 4);
    MEM8(eax + edx * 4 + 0xA) = MEM8(eax + edx * 4 + 0xA) & 0xFD;
    _fa = (uint32_t)(MEM8(eax + edx * 4 + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = eax + edx * 4;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00269C50
 * Original: 0x00269C50 - 0x00269C86 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269C50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269C50: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00269C72u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00269C72: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(edx + 0x20);
    PUSH32(esp, 0x00269C7Du); RECOMP_ABI_CALL(0x000F96A0u, sub_000F96A0); /* call 0x000F96A0 */

loc_00269C7D: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00269C90
 * Original: 0x00269C90 - 0x00269D04 (116 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269C90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269C90: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00269CB2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00269CB2: ;
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + 0x20);
    eax = MEM32(ecx + 4);
    eax = ZX16(MEM16(eax + edx * 4 + 0xA));
    edx = MEM32(0x64D854);
    eax = ~eax;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00269D10
 * Original: 0x00269D10 - 0x00269D57 (71 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00269D10: ;
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x20);
    ecx = MEM32(ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(ecx + 4));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_00269D52; /* jle: less or equal (signed <=) */

loc_00269D2B: ;
    ecx = MEM32(ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00269D32: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00269D40; /* je: equal / zero */

loc_00269D37: ;
    ebp = MEM32(ebx + 4);
    _fa = (uint32_t)(MEM8(esi + ebp + 0xA)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + ebp + 0xA), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00269D50; /* jne: not equal / not zero */

loc_00269D40: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00269D32; /* jl: less (signed <) */

loc_00269D4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00269D50: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00269D52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00269D60
 * Original: 0x00269D60 - 0x00269DC1 (97 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269D60: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D884);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    esi = edi + 0x6270D8;
    PUSH32(esp, 0x00269D90u); RECOMP_ABI_CALL(0x00269D10u, sub_00269D10); /* call 0x00269D10 */

loc_00269D90: ;
    MEM32(esi) = eax;
    eax = MEM32(0x64D858);
    MEM32(eax * 8 + 0x616FDC) = esi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x64D854) = edi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00269DD0
 * Original: 0x00269DD0 - 0x00269E49 (121 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269DD0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00269DF2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00269DF2: ;
    edx = MEM32(esi + 0x18);
    edx = MEM32(edx + 0x20);
    ecx = MEM32(edx);
    ecx = MEM32(ecx);
    esi = eax + eax * 4;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(ecx, MEM16(ecx + esi + 0xC));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00269E40; /* je: equal / zero */

loc_00269E0C: ;
    ecx = ZX16(LO16(ecx));
    PUSH32(esp, edi);
    edi = MEM32(edx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(edi + eax + 8) = LO16(ecx);
    edi = MEM32(edx);
    edi = MEM32(edi);
    esi = MEM32(edi + esi + 4);
    ecx = ZX16(MEM16(esi + ecx * 8));
    edx = MEM32(edx + 4);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337A8); /* mulss */
    MEMF(eax + edx) = xmm0.f[0]; /* movss */
    POP32(esp, edi);

loc_00269E40: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00269E50
 * Original: 0x00269E50 - 0x00269EC7 (119 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269E50: ;
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    edx = MEM32(0x64D884);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D854);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00269EAC; /* jne: not equal / not zero */

loc_00269E91: ;
    edx = MEM32(edx + 0x18);
    xmm4.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    ecx = MEM32(edx + 0x20);
    PUSH32(esp, 0x00269EA4u); RECOMP_ABI_CALL(0x000F9A80u, sub_000F9A80); /* call 0x000F9A80 */

loc_00269EA4: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00269EAC: ;
    edx = MEM32(edx + 0x18);
    xmm4 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */
    ecx = MEM32(edx + 0x20);
    PUSH32(esp, 0x00269EBFu); RECOMP_ABI_CALL(0x000F9A80u, sub_000F9A80); /* call 0x000F9A80 */

loc_00269EBF: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00269ED0
 * Original: 0x00269ED0 - 0x00269EF2 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269ED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269ED0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    esi = esp + 8;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00269EE6u); RECOMP_ABI_CALL(0x000F9860u, sub_000F9860); /* call 0x000F9860 */

loc_00269EE6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00269F00
 * Original: 0x00269F00 - 0x00269F7D (125 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269F00: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    eax = MEM32(eax + 0x18);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    esi = esp + 8;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x00269F33u); RECOMP_ABI_CALL(0x000F9860u, sub_000F9860); /* call 0x000F9860 */

loc_00269F33: ;
    ecx = MEM32(0x64D854);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00269F80
 * Original: 0x00269F80 - 0x00269FFD (125 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00269F80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00269F80: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    eax = MEM32(eax + 0x18);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x00269FB3u); RECOMP_ABI_CALL(0x000F9860u, sub_000F9860); /* call 0x000F9860 */

loc_00269FB3: ;
    ecx = MEM32(0x64D854);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026A000
 * Original: 0x0026A000 - 0x0026A113 (275 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A000: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x34A760);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026A10B; /* je: equal / zero */

loc_0026A013: ;
    PUSH32(esp, esi);
    esi = MEM32(0x64D29C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x36A510);
    MEM32(0x64D29C) = eax;
    { uint32_t _icall_target = MEM32(esi + 0x24); PUSH32(esp, 0x0026A027u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026A024u); } /* indirect call */
    }

loc_0026A027: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x49A920);
    { uint32_t _icall_target = MEM32(esi + 0x20); PUSH32(esp, 0x0026A02Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026A02Cu); } /* indirect call */
    }

loc_0026A02F: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x10;
    edi = edi << 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x17);
    MEM32(0x64D29C) = esi;
    MEM32(esp + 0x24) = edi;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x3C) = edi;
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x54) = edi;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(esi + 0x2C); PUSH32(esp, 0x0026A097u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026A094u); } /* indirect call */
    }

loc_0026A097: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x17);
    MEM32(esp + 0x2C) = edi;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x44) = edi;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x5C) = edi;
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm2.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(esi + 0x2C); PUSH32(esp, 0x0026A0F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026A0F3u); } /* indirect call */
    }

loc_0026A0F6: ;
    eax = MEM32(esi + 0x47C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x47C) = eax;
    POP32(esp, esi);

loc_0026A10B: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026A120
 * Original: 0x0026A120 - 0x0026A176 (86 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A120: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0026A127u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A127: ;
    esi = eax;
    PUSH32(esp, 0x0026A12Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A12E: ;
    MEM8(esp + 7) = LO8(eax);
    eax = esi;
    PUSH32(esp, 0x0026A139u); RECOMP_ABI_CALL(0x0026A000u, sub_0026A000); /* call 0x0026A000 */

loc_0026A139: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026A180
 * Original: 0x0026A180 - 0x0026A200 (128 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A180: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026A1A4u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A1A4: ;
    MEM8(esp + 8) = LO8(eax);
    eax = MEM32(0x34AC38);
    edx = MEM32(esp + 8);
    ebx = eax + 0x424;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0x0026A1BFu); RECOMP_ABI_CALL(0x00089470u, sub_00089470); /* call 0x00089470 */

loc_0026A1BF: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026A200
 * Original: 0x0026A200 - 0x0026A280 (128 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A200: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026A224u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A224: ;
    MEM8(esp + 8) = LO8(eax);
    eax = MEM32(0x34AC38);
    edx = MEM32(esp + 8);
    ebx = eax + 0x42C;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0x0026A23Fu); RECOMP_ABI_CALL(0x000896B0u, sub_000896B0); /* call 0x000896B0 */

loc_0026A23F: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026A280
 * Original: 0x0026A280 - 0x0026A310 (144 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A280: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026A2A4u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A2A4: ;
    edi = eax;
    PUSH32(esp, 0x0026A2ABu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A2AB: ;
    MEM8(esp + 8) = LO8(eax);
    eax = MEM32(0x34AC38);
    edx = MEM32(esp + 8);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x428) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x428;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x0026A2C7u); RECOMP_ABI_CALL(0x000898F0u, sub_000898F0); /* call 0x000898F0 */

loc_0026A2C7: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026A310
 * Original: 0x0026A310 - 0x0026A37C (108 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026A310: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x400 (32-bit) */
    eax = MEM32(0x34AC38);
    if (CMP_GE(_fas, _fbs)) goto loc_0026A325; /* jge: greater or equal (signed >=) */

loc_0026A31D: ;
    edx = eax + 0x428;
    goto loc_0026A339;

loc_0026A325: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x800 (32-bit) */
    edx = eax + 0x424;
    if (CMP_L(_fas, _fbs)) goto loc_0026A339; /* jl: less (signed <) */

loc_0026A333: ;
    edx = eax + 0x42C;

loc_0026A339: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026A34D; /* je: equal / zero */

loc_0026A33F: ;
    /* nop */

loc_0026A340: ;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), LO16(ecx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026A34E; /* je: equal / zero */

loc_0026A346: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026A340; /* jne: not equal / not zero */

loc_0026A34D: ;
    esp += 4; return; /* ret */

loc_0026A34E: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026A36E; /* jne: not equal / not zero */

loc_0026A353: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(ecx + 0x1C)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1C), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026A36E; /* je: equal / zero */

loc_0026A35C: ;
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) | 0x4000000;
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(eax + 8);
    MEM32(edx + 0x38) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_0026A36E: ;
    SET_LO16(ecx, MEM16(eax + 4));
    MEM32(0x64D2A4) = eax;
    g_seh_ebp = ebp; sub_00088E70(); return; /* tail jmp 0x00088E70 */

}

/**
 * sub_0026A380
 * Original: 0x0026A380 - 0x0026A3B6 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A380: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(esp) = eax;
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x0026A3A6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A3A6: ;
    ecx = eax;
    PUSH32(esp, 0x0026A3ADu); RECOMP_ABI_CALL(0x0026A310u, sub_0026A310); /* call 0x0026A310 */

loc_0026A3AD: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026A3C0
 * Original: 0x0026A3C0 - 0x0026A40B (75 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A3C0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x400 (32-bit) */
    eax = MEM32(0x34AC38);
    if (CMP_GE(_fas, _fbs)) goto loc_0026A3D4; /* jge: greater or equal (signed >=) */

loc_0026A3CD: ;
    _fb = (uint32_t)(0x428) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x428;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0026A3E8;

loc_0026A3D4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x800 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026A3E3; /* jge: greater or equal (signed >=) */

loc_0026A3DC: ;
    _fb = (uint32_t)(0x424) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x424;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0026A3E8;

loc_0026A3E3: ;
    _fb = (uint32_t)(0x42C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x42C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026A3E8: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026A3FD; /* je: equal / zero */

loc_0026A3EE: ;
    edi = edi;

loc_0026A3F0: ;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), LO16(ecx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026A3FF; /* je: equal / zero */

loc_0026A3F6: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026A3F0; /* jne: not equal / not zero */

loc_0026A3FD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0026A3FF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0026A410
 * Original: 0x0026A410 - 0x0026A488 (120 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A410: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(esp) = eax;
    eax = MEM32(0x64D854);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D87C) = edx;
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0026A460; /* jne: not equal / not zero */

loc_0026A456: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_0026A468;

loc_0026A460: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_0026A468: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026A476u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A476: ;
    ecx = eax;
    PUSH32(esp, 0x0026A47Du); RECOMP_ABI_CALL(0x0026A3C0u, sub_0026A3C0); /* call 0x0026A3C0 */

loc_0026A47D: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026A490
 * Original: 0x0026A490 - 0x0026A4E5 (85 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A490: ;
    PUSH32(esp, 0x0026A495u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A495: ;
    PUSH32(esp, 0x0026A49Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A49A: ;
    PUSH32(esp, 0x0026A49Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A49F: ;
    PUSH32(esp, 0x0026A4A4u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A4A4: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = 0;
    eax = MEM32(esp + 4);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026A4F0
 * Original: 0x0026A4F0 - 0x0026A587 (151 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A4F0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026A50Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A50E: ;
    esi = eax;
    PUSH32(esp, 0x0026A515u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A515: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x400 (32-bit) */
    eax = MEM32(0x34AC38);
    if (CMP_GE(_fas, _fbs)) goto loc_0026A52C; /* jge: greater or equal (signed >=) */

loc_0026A524: ;
    eax = MEM32(eax + 0x428);
    goto loc_0026A542;

loc_0026A52C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x800 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026A53C; /* jge: greater or equal (signed >=) */

loc_0026A534: ;
    eax = MEM32(eax + 0x424);
    goto loc_0026A542;

loc_0026A53C: ;
    eax = MEM32(eax + 0x42C);

loc_0026A542: ;
    ebx = MEM32(0x64D854);
    edi = ebx + 0x6270D8;
    PUSH32(esp, 0x0026A553u); RECOMP_ABI_CALL(0x0008A220u, sub_0008A220); /* call 0x0008A220 */

loc_0026A553: ;
    eax = MEM32(0x64D858);
    MEM32(eax * 8 + 0x616FDC) = edi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 2;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(edi) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(0x64D854) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026A590
 * Original: 0x0026A590 - 0x0026A5E7 (87 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A590: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x400 (32-bit) */
    eax = MEM32(0x34AC38);
    if (CMP_GE(_fas, _fbs)) goto loc_0026A5B3; /* jge: greater or equal (signed >=) */

loc_0026A59D: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(eax + 0x428);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x0026A5B1u); RECOMP_ABI_CALL(0x0008A2A0u, sub_0008A2A0); /* call 0x0008A2A0 */

loc_0026A5B1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026A5B3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x800 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026A5D1; /* jge: greater or equal (signed >=) */

loc_0026A5BB: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(eax + 0x424);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x0026A5CFu); RECOMP_ABI_CALL(0x0008A2A0u, sub_0008A2A0); /* call 0x0008A2A0 */

loc_0026A5CF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026A5D1: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(eax + 0x42C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x0026A5E5u); RECOMP_ABI_CALL(0x0008A2A0u, sub_0008A2A0); /* call 0x0008A2A0 */

loc_0026A5E5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026A5F0
 * Original: 0x0026A5F0 - 0x0026A66E (126 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A5F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(esp) = eax;
    eax = MEM32(0x64D854);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D87C) = edx;
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0026A640; /* jne: not equal / not zero */

loc_0026A636: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_0026A648;

loc_0026A640: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_0026A648: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0026A652u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A652: ;
    ecx = MEM32(esp);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026A65Cu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A65C: ;
    edx = eax;
    PUSH32(esp, 0x0026A663u); RECOMP_ABI_CALL(0x0026A590u, sub_0026A590); /* call 0x0026A590 */

loc_0026A663: ;
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
 * sub_0026A670
 * Original: 0x0026A670 - 0x0026A704 (148 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A670: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026A68Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A68E: ;
    esi = eax;
    PUSH32(esp, 0x0026A695u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A695: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    ecx = MEM32(0x34AC38);
    if (CMP_GE(_fas, _fbs)) goto loc_0026A6AA; /* jge: greater or equal (signed >=) */

loc_0026A6A2: ;
    ecx = MEM32(ecx + 0x428);
    goto loc_0026A6BF;

loc_0026A6AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x800 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026A6B9; /* jge: greater or equal (signed >=) */

loc_0026A6B1: ;
    ecx = MEM32(ecx + 0x424);
    goto loc_0026A6BF;

loc_0026A6B9: ;
    ecx = MEM32(ecx + 0x42C);

loc_0026A6BF: ;
    ebx = MEM32(0x64D854);
    edx = eax;
    edi = ebx + 0x6270D8;
    PUSH32(esp, 0x0026A6D2u); RECOMP_ABI_CALL(0x00089FF0u, sub_00089FF0); /* call 0x00089FF0 */

loc_0026A6D2: ;
    MEM32(edi) = eax;
    eax = MEM32(0x64D858);
    MEM32(eax * 8 + 0x616FDC) = edi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(0x64D854) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026A710
 * Original: 0x0026A710 - 0x0026A767 (87 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A710: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x400 (32-bit) */
    eax = MEM32(0x34AC38);
    if (CMP_GE(_fas, _fbs)) goto loc_0026A733; /* jge: greater or equal (signed >=) */

loc_0026A71D: ;
    edx = MEM32(eax + 0x428);
    eax = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x0026A731u); RECOMP_ABI_CALL(0x0008A090u, sub_0008A090); /* call 0x0008A090 */

loc_0026A731: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026A733: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x800 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026A751; /* jge: greater or equal (signed >=) */

loc_0026A73B: ;
    edx = MEM32(eax + 0x424);
    eax = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x0026A74Fu); RECOMP_ABI_CALL(0x0008A090u, sub_0008A090); /* call 0x0008A090 */

loc_0026A74F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026A751: ;
    edx = MEM32(eax + 0x42C);
    eax = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x0026A765u); RECOMP_ABI_CALL(0x0008A090u, sub_0008A090); /* call 0x0008A090 */

loc_0026A765: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026A770
 * Original: 0x0026A770 - 0x0026A7BE (78 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A770: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = eax;
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x0026A799u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A799: ;
    esi = eax;
    PUSH32(esp, 0x0026A7A0u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A7A0: ;
    edi = eax;
    PUSH32(esp, 0x0026A7A7u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A7A7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0026A7B0u); RECOMP_ABI_CALL(0x0026A710u, sub_0026A710); /* call 0x0026A710 */

loc_0026A7B0: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026A7C0
 * Original: 0x0026A7C0 - 0x0026A863 (163 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A7C0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026A7DDu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A7DD: ;
    esi = eax;
    PUSH32(esp, 0x0026A7E4u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A7E4: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x400 (32-bit) */
    eax = MEM32(0x34AC38);
    if (CMP_GE(_fas, _fbs)) goto loc_0026A7FB; /* jge: greater or equal (signed >=) */

loc_0026A7F3: ;
    eax = MEM32(eax + 0x428);
    goto loc_0026A811;

loc_0026A7FB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x800 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026A80B; /* jge: greater or equal (signed >=) */

loc_0026A803: ;
    eax = MEM32(eax + 0x424);
    goto loc_0026A811;

loc_0026A80B: ;
    eax = MEM32(eax + 0x42C);

loc_0026A811: ;
    PUSH32(esp, 0x0026A816u); RECOMP_ABI_CALL(0x0008A380u, sub_0008A380); /* call 0x0008A380 */

loc_0026A816: ;
    ecx = MEM32(eax);
    esi = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    edi = MEM32(0x64D854);
    eax = edi + 0x6270D8;
    MEM32(eax) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = esi;
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0xC);
    MEM32(0x64D854) = edi;
    MEM16(ecx * 8 + 0x616FD8) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026A870
 * Original: 0x0026A870 - 0x0026A8C7 (87 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A870: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x400 (32-bit) */
    eax = MEM32(0x34AC38);
    if (CMP_GE(_fas, _fbs)) goto loc_0026A893; /* jge: greater or equal (signed >=) */

loc_0026A87D: ;
    ecx = MEM32(eax + 0x428);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0x0026A891u); RECOMP_ABI_CALL(0x0008A400u, sub_0008A400); /* call 0x0008A400 */

loc_0026A891: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026A893: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x800 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026A8B1; /* jge: greater or equal (signed >=) */

loc_0026A89B: ;
    ecx = MEM32(eax + 0x424);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0x0026A8AFu); RECOMP_ABI_CALL(0x0008A400u, sub_0008A400); /* call 0x0008A400 */

loc_0026A8AF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0026A8B1: ;
    ecx = MEM32(eax + 0x42C);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0x0026A8C5u); RECOMP_ABI_CALL(0x0008A400u, sub_0008A400); /* call 0x0008A400 */

loc_0026A8C5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026A8D0
 * Original: 0x0026A8D0 - 0x0026A933 (99 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A8D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A8D0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D858);
    MEM32(esp + 4) = eax;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = esi;
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    MEM32(0x64D854) = eax;
    esi = eax + 0x6270D8;
    PUSH32(esp, 0x0026A918u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A918: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026A91Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A91F: ;
    edx = eax;
    PUSH32(esp, 0x0026A926u); RECOMP_ABI_CALL(0x0026A870u, sub_0026A870); /* call 0x0026A870 */

loc_0026A926: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026A940
 * Original: 0x0026A940 - 0x0026A976 (54 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026A940: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x400 (32-bit) */
    eax = MEM32(0x34AC38);
    if (CMP_GE(_fas, _fbs)) goto loc_0026A958; /* jge: greater or equal (signed >=) */

loc_0026A94D: ;
    ecx = MEM32(eax + 0x428);
    g_seh_ebp = ebp; sub_00089B80(); return; /* tail jmp 0x00089B80 */

loc_0026A958: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x800 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026A96B; /* jge: greater or equal (signed >=) */

loc_0026A960: ;
    ecx = MEM32(eax + 0x424);
    g_seh_ebp = ebp; sub_00089B80(); return; /* tail jmp 0x00089B80 */

loc_0026A96B: ;
    ecx = MEM32(eax + 0x42C);
    g_seh_ebp = ebp; sub_00089B80(); return; /* tail jmp 0x00089B80 */

}

/**
 * sub_0026A980
 * Original: 0x0026A980 - 0x0026A9EB (107 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A980: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026A99Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A99D: ;
    esi = eax;
    PUSH32(esp, 0x0026A9A4u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A9A4: ;
    edi = eax;
    PUSH32(esp, 0x0026A9ABu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026A9AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    ecx = MEM32(0x34AC38);
    if (CMP_GE(_fas, _fbs)) goto loc_0026A9C0; /* jge: greater or equal (signed >=) */

loc_0026A9B8: ;
    ecx = MEM32(ecx + 0x428);
    goto loc_0026A9D5;

loc_0026A9C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x800 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026A9CF; /* jge: greater or equal (signed >=) */

loc_0026A9C7: ;
    ecx = MEM32(ecx + 0x424);
    goto loc_0026A9D5;

loc_0026A9CF: ;
    ecx = MEM32(ecx + 0x42C);

loc_0026A9D5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = eax;
    PUSH32(esp, 0x0026A9DEu); RECOMP_ABI_CALL(0x00089B80u, sub_00089B80); /* call 0x00089B80 */

loc_0026A9DE: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026A9F0
 * Original: 0x0026A9F0 - 0x0026AA56 (102 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026A9F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026A9F0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026AA55; /* je: equal / zero */

loc_0026A9F4: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026AA55; /* je: equal / zero */

loc_0026A9FB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x400 (32-bit) */
    ecx = MEM32(0x34AC38);
    if (CMP_GE(_fas, _fbs)) goto loc_0026AA11; /* jge: greater or equal (signed >=) */

loc_0026AA09: ;
    ecx = MEM32(ecx + 0x428);
    goto loc_0026AA27;

loc_0026AA11: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x800 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026AA21; /* jge: greater or equal (signed >=) */

loc_0026AA19: ;
    ecx = MEM32(ecx + 0x424);
    goto loc_0026AA27;

loc_0026AA21: ;
    ecx = MEM32(ecx + 0x42C);

loc_0026AA27: ;
    edx = MEM32(edx + 0x14);
    edx = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(edx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026AA49; /* je: equal / zero */

loc_0026AA34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026AA49; /* jl: less (signed <) */

loc_0026AA38: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026AA49; /* jne: not equal / not zero */

loc_0026AA3F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 8))); }
    eax = MEM32(esi + 0xC);
    esi = MEM32(eax + edx * 4);

loc_0026AA49: ;
    PUSH32(esp, esi);
    edx = edi;
    PUSH32(esp, 0x0026AA51u); RECOMP_ABI_CALL(0x00089BE0u, sub_00089BE0); /* call 0x00089BE0 */

loc_0026AA51: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_0026AA55: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0026AA60
 * Original: 0x0026AA60 - 0x0026AAC8 (104 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026AA60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026AA60: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = eax;
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x0026AA8Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026AA8A: ;
    ecx = MEM32(0x64D858);
    esi = eax;
    eax = MEM32(0x64D854);
    ebx = MEM32(eax + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    PUSH32(esp, 0x0026AAB1u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026AAB1: ;
    edi = eax;
    eax = esi;
    edx = ebx;
    PUSH32(esp, 0x0026AABCu); RECOMP_ABI_CALL(0x0026A9F0u, sub_0026A9F0); /* call 0x0026A9F0 */

loc_0026AABC: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026AAD0
 * Original: 0x0026AAD0 - 0x0026AB9E (206 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026AAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026AAD0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D854);
    edx = MEM32(eax + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = eax + 0x6270D8;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026AB29; /* jne: not equal / not zero */

loc_0026AB1F: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_0026AB31;

loc_0026AB29: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_0026AB31: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0026AB5B; /* jne: not equal / not zero */

loc_0026AB51: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_0026AB63;

loc_0026AB5B: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_0026AB63: ;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0026AB91; /* je: equal / zero */

loc_0026AB70: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026AB91; /* je: equal / zero */

loc_0026AB76: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026AB91; /* je: equal / zero */

loc_0026AB7D: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026AB8Eu); RECOMP_ABI_CALL(0x000AA1D0u, sub_000AA1D0); /* call 0x000AA1D0 */

loc_0026AB8E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026AB91: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
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
 * sub_0026ABA0
 * Original: 0x0026ABA0 - 0x0026AC2D (141 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026ABA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026ABA0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026ABBEu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026ABBE: ;
    esi = eax;
    PUSH32(esp, 0x0026ABC5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026ABC5: ;
    ebx = MEM32(0x64D858);
    edi = eax;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ebx;
    ebx = MEM32(eax + 0x6270D8);
    MEM32(0x64D854) = eax;
    PUSH32(esp, 0x0026ABECu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026ABEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    ecx = MEM32(0x34AC38);
    if (CMP_GE(_fas, _fbs)) goto loc_0026AC01; /* jge: greater or equal (signed >=) */

loc_0026ABF9: ;
    ecx = MEM32(ecx + 0x428);
    goto loc_0026AC16;

loc_0026AC01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x800 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026AC10; /* jge: greater or equal (signed >=) */

loc_0026AC08: ;
    ecx = MEM32(ecx + 0x424);
    goto loc_0026AC16;

loc_0026AC10: ;
    ecx = MEM32(ecx + 0x42C);

loc_0026AC16: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = eax;
    PUSH32(esp, 0x0026AC1Fu); RECOMP_ABI_CALL(0x000ABE60u, sub_000ABE60); /* call 0x000ABE60 */

loc_0026AC1F: ;
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
 * sub_0026AC30
 * Original: 0x0026AC30 - 0x0026AD3D (269 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026AC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026AC30: ;
    edx = MEM32(0x34AC38);
    eax = MEM32(edx + 0x428);
    _fb = (uint32_t)(0x428) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x428;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x3FF;
    if (CMP_EQ(_fa, _fb)) goto loc_0026AC5D; /* je: equal / zero */

loc_0026AC4E: ;
    edi = edi;

loc_0026AC50: ;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026AC5F; /* je: equal / zero */

loc_0026AC56: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026AC50; /* jne: not equal / not zero */

loc_0026AC5D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0026AC5F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026AC92; /* je: equal / zero */

loc_0026AC63: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026AC84; /* jne: not equal / not zero */

loc_0026AC68: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(ecx + 0x1C)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x1C), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026AC84; /* je: equal / zero */

loc_0026AC71: ;
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) | 0x4000000;
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(eax + 8);
    MEM32(edx + 0x38) = 0xFFFFFFFFu;
    goto loc_0026AC92;

loc_0026AC84: ;
    SET_LO16(ecx, MEM16(eax + 4));
    MEM32(0x64D2A4) = eax;
    PUSH32(esp, 0x0026AC92u); RECOMP_ABI_CALL(0x00088E70u, sub_00088E70); /* call 0x00088E70 */

loc_0026AC92: ;
    eax = MEM32(0x34AC38);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x428) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x428;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x19);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0026ACA7u); RECOMP_ABI_CALL(0x000898F0u, sub_000898F0); /* call 0x000898F0 */

loc_0026ACA7: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x400 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026ACC2; /* jge: greater or equal (signed >=) */

loc_0026ACB4: ;
    ecx = MEM32(0x34AC38);
    edi = MEM32(ecx + 0x428);
    goto loc_0026ACE3;

loc_0026ACC2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x800 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026ACD8; /* jge: greater or equal (signed >=) */

loc_0026ACCA: ;
    edx = MEM32(0x34AC38);
    edi = MEM32(edx + 0x424);
    goto loc_0026ACE3;

loc_0026ACD8: ;
    eax = MEM32(0x34AC38);
    edi = MEM32(eax + 0x42C);

loc_0026ACE3: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    eax = 0x620C;
    edx = edi;
    PUSH32(esp, 0x0026ACF4u); RECOMP_ABI_CALL(0x0008A090u, sub_0008A090); /* call 0x0008A090 */

loc_0026ACF4: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = 0x61A8;
    edx = esi;
    eax = edi;
    PUSH32(esp, 0x0026AD0Au); RECOMP_ABI_CALL(0x0008A2A0u, sub_0008A2A0); /* call 0x0008A2A0 */

loc_0026AD0A: ;
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = 0x61AA;
    edx = esi;
    eax = edi;
    PUSH32(esp, 0x0026AD20u); RECOMP_ABI_CALL(0x0008A2A0u, sub_0008A2A0); /* call 0x0008A2A0 */

loc_0026AD20: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x61A9;
    edx = esi;
    eax = edi;
    PUSH32(esp, 0x0026AD36u); RECOMP_ABI_CALL(0x0008A2A0u, sub_0008A2A0); /* call 0x0008A2A0 */

loc_0026AD36: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026AD40
 * Original: 0x0026AD40 - 0x0026ADF3 (179 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026AD40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026AD40: ;
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 1;
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026AD6B; /* jne: not equal / not zero */

loc_0026AD61: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026AD73;

loc_0026AD6B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026AD73: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0026AD90; /* jne: not equal / not zero */

loc_0026AD86: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026AD98;

loc_0026AD90: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026AD98: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0026ADC1; /* jne: not equal / not zero */

loc_0026ADB7: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026ADC9;

loc_0026ADC1: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026ADC9: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0026ADD4u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026ADD4: ;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026ADE8u); RECOMP_ABI_CALL(0x0026AC30u, sub_0026AC30); /* call 0x0026AC30 */

loc_0026ADE8: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026AE00
 * Original: 0x0026AE00 - 0x0026AE85 (133 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026AE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026AE00: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(esp) = eax;
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x0026AE26u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026AE26: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026AE2Cu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026AE2C: ;
    edx = eax;
    PUSH32(esp, 0x0026AE33u); RECOMP_ABI_CALL(0x000B0A90u, sub_000B0A90); /* call 0x000B0A90 */

loc_0026AE33: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026AE45; /* je: equal / zero */

loc_0026AE3A: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026AE45; /* je: equal / zero */

loc_0026AE40: ;
    edx = MEM32(eax + 8);
    goto loc_0026AE47;

loc_0026AE45: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0026AE47: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026AE90
 * Original: 0x0026AE90 - 0x0026AEFC (108 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026AE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026AE90: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = eax;
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x0026AEBAu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026AEBA: ;
    esi = eax;
    PUSH32(esp, 0x0026AEC1u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026AEC1: ;
    ebx = eax;
    PUSH32(esp, 0x0026AEC8u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026AEC8: ;
    edi = eax;
    PUSH32(esp, 0x0026AECFu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026AECF: ;
    PUSH32(esp, edi);
    edx = eax;
    PUSH32(esp, 0x0026AED7u); RECOMP_ABI_CALL(0x000B0A90u, sub_000B0A90); /* call 0x000B0A90 */

loc_0026AED7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026AEF0; /* je: equal / zero */

loc_0026AEDE: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026AEF0; /* je: equal / zero */

loc_0026AEE4: ;
    edx = MEM32(eax + 8);
    esi = ~esi;
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 8) = esi;

loc_0026AEF0: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026AF00
 * Original: 0x0026AF00 - 0x0026AF8A (138 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026AF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026AF00: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(esp) = eax;
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x0026AF26u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026AF26: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026AF2Cu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026AF2C: ;
    edx = eax;
    PUSH32(esp, 0x0026AF33u); RECOMP_ABI_CALL(0x000B0A90u, sub_000B0A90); /* call 0x000B0A90 */

loc_0026AF33: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026AF47; /* je: equal / zero */

loc_0026AF3A: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026AF47; /* je: equal / zero */

loc_0026AF40: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    goto loc_0026AF4A;

loc_0026AF47: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0026AF4A: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026AF90
 * Original: 0x0026AF90 - 0x0026B01F (143 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026AF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026AF90: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(esp) = eax;
    eax = MEM32(0x64D854);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D87C) = edx;
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0026AFE0; /* jne: not equal / not zero */

loc_0026AFD6: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_0026AFE8;

loc_0026AFE0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_0026AFE8: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0026AFF2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026AFF2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026AFF8u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026AFF8: ;
    edx = eax;
    PUSH32(esp, 0x0026AFFFu); RECOMP_ABI_CALL(0x000B0A90u, sub_000B0A90); /* call 0x000B0A90 */

loc_0026AFFF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026B016; /* je: equal / zero */

loc_0026B006: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026B016; /* je: equal / zero */

loc_0026B00C: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */

loc_0026B016: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026B020
 * Original: 0x0026B020 - 0x0026B0AA (138 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026B020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026B020: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(esp) = eax;
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x0026B046u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B046: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026B04Cu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B04C: ;
    edx = eax;
    PUSH32(esp, 0x0026B053u); RECOMP_ABI_CALL(0x000B0A90u, sub_000B0A90); /* call 0x000B0A90 */

loc_0026B053: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026B067; /* je: equal / zero */

loc_0026B05A: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026B067; /* je: equal / zero */

loc_0026B060: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    goto loc_0026B06A;

loc_0026B067: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0026B06A: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026B0B0
 * Original: 0x0026B0B0 - 0x0026B13F (143 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026B0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026B0B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(esp) = eax;
    eax = MEM32(0x64D854);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D87C) = edx;
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0026B100; /* jne: not equal / not zero */

loc_0026B0F6: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_0026B108;

loc_0026B100: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_0026B108: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0026B112u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B112: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026B118u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B118: ;
    edx = eax;
    PUSH32(esp, 0x0026B11Fu); RECOMP_ABI_CALL(0x000B0A90u, sub_000B0A90); /* call 0x000B0A90 */

loc_0026B11F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026B136; /* je: equal / zero */

loc_0026B126: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026B136; /* je: equal / zero */

loc_0026B12C: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */

loc_0026B136: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026B140
 * Original: 0x0026B140 - 0x0026B215 (213 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026B140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026B140: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D884);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D854);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 1;
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0026B188; /* jne: not equal / not zero */

loc_0026B17E: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026B190;

loc_0026B188: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026B190: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    edi = (int32_t)xmm0.f[0]; /* cvttss2si */
    if (CMP_NE(_fa, _fb)) goto loc_0026B1AC; /* jne: not equal / not zero */

loc_0026B1A2: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026B1B4;

loc_0026B1AC: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026B1B4: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    esi = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0026B1DB; /* jne: not equal / not zero */

loc_0026B1D1: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026B1E3;

loc_0026B1DB: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026B1E3: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0026B1EEu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B1EE: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esi = (int32_t)MEMF(esp + 0x14); /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026B1FCu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B1FC: ;
    edx = eax;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0x0026B206u); RECOMP_ABI_CALL(0x000B0B00u, sub_000B0B00); /* call 0x000B0B00 */

loc_0026B206: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026B220
 * Original: 0x0026B220 - 0x0026B276 (86 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026B220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026B220: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    PUSH32(esp, esi);
    MEM32(esp + 4) = eax;
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x0026B248u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B248: ;
    esi = eax;
    PUSH32(esp, 0x0026B24Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B24F: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0x0026B257u); RECOMP_ABI_CALL(0x000B0A90u, sub_000B0A90); /* call 0x000B0A90 */

loc_0026B257: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026B26C; /* je: equal / zero */

loc_0026B25E: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026B26C; /* je: equal / zero */

loc_0026B264: ;
    esi = eax + 0x18;
    PUSH32(esp, 0x0026B26Cu); RECOMP_ABI_CALL(0x00060EE0u, sub_00060EE0); /* call 0x00060EE0 */

loc_0026B26C: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026B280
 * Original: 0x0026B280 - 0x0026B314 (148 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026B280(void)
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

loc_0026B280: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(esp) = eax;
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x0026B2A6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B2A6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026B2ACu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B2AC: ;
    edx = eax;
    PUSH32(esp, 0x0026B2B3u); RECOMP_ABI_CALL(0x000B0A90u, sub_000B0A90); /* call 0x000B0A90 */

loc_0026B2B3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026B2D1; /* je: equal / zero */

loc_0026B2BA: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026B2D1; /* je: equal / zero */

loc_0026B2C0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0026B2C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026B2C4u); } /* indirect call */
    }

loc_0026B2C7: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    goto loc_0026B2D4;

loc_0026B2D1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0026B2D4: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0026B320
 * Original: 0x0026B320 - 0x0026B3AE (142 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026B320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026B320: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(esp) = eax;
    eax = MEM32(0x64D854);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D87C) = edx;
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0026B370; /* jne: not equal / not zero */

loc_0026B366: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_0026B378;

loc_0026B370: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_0026B378: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0026B382u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B382: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026B388u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B388: ;
    edx = eax;
    PUSH32(esp, 0x0026B38Fu); RECOMP_ABI_CALL(0x000B0A90u, sub_000B0A90); /* call 0x000B0A90 */

loc_0026B38F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026B3A5; /* je: equal / zero */

loc_0026B396: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026B3A5; /* je: equal / zero */

loc_0026B39C: ;
    edx = MEM32(esp);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0026B3A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0026B3A2u); } /* indirect call */
    }

loc_0026B3A5: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026B3B0
 * Original: 0x0026B3B0 - 0x0026B3F9 (73 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026B3B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026B3B0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026B3D4u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B3D4: ;
    edi = eax;
    PUSH32(esp, 0x0026B3DBu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B3DB: ;
    ebx = eax;
    PUSH32(esp, 0x0026B3E2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B3E2: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0026B3EBu); RECOMP_ABI_CALL(0x000B0B70u, sub_000B0B70); /* call 0x000B0B70 */

loc_0026B3EB: ;
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
 * sub_0026B400
 * Original: 0x0026B400 - 0x0026B449 (73 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026B400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026B400: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026B424u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B424: ;
    edi = eax;
    PUSH32(esp, 0x0026B42Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B42B: ;
    ebx = eax;
    PUSH32(esp, 0x0026B432u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B432: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0026B43Bu); RECOMP_ABI_CALL(0x000B0BE0u, sub_000B0BE0); /* call 0x000B0BE0 */

loc_0026B43B: ;
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
 * sub_0026B450
 * Original: 0x0026B450 - 0x0026B510 (192 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026B450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026B450: ;
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D884);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D854);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 1;
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0026B49A; /* jne: not equal / not zero */

loc_0026B490: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026B4A2;

loc_0026B49A: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026B4A2: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0026B4CB; /* jne: not equal / not zero */

loc_0026B4C1: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026B4D3;

loc_0026B4CB: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026B4D3: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0026B4DEu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B4DE: ;
    esi = eax;
    PUSH32(esp, 0x0026B4E5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B4E5: ;
    edi = eax;
    PUSH32(esp, 0x0026B4ECu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B4EC: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0026B4FFu); RECOMP_ABI_CALL(0x000B0C50u, sub_000B0C50); /* call 0x000B0C50 */

loc_0026B4FF: ;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0026B510
 * Original: 0x0026B510 - 0x0026B63E (302 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026B510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026B510: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D884);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026B538u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B538: ;
    ebp = eax;
    PUSH32(esp, 0x0026B53Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B53F: ;
    ecx = MEM32(0x64D854);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 1;
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026B56B; /* jne: not equal / not zero */

loc_0026B561: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026B573;

loc_0026B56B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026B573: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0026B591; /* jne: not equal / not zero */

loc_0026B587: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026B599;

loc_0026B591: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026B599: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0026B5B7; /* jne: not equal / not zero */

loc_0026B5AD: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026B5BF;

loc_0026B5B7: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026B5BF: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0026B5E8; /* jne: not equal / not zero */

loc_0026B5DE: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026B5F0;

loc_0026B5E8: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026B5F0: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0026B5FBu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B5FB: ;
    esi = eax;
    PUSH32(esp, 0x0026B602u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B602: ;
    edi = eax;
    PUSH32(esp, 0x0026B609u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B609: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0026B62Cu); RECOMP_ABI_CALL(0x000B0CD0u, sub_000B0CD0); /* call 0x000B0CD0 */

loc_0026B62C: ;
    eax = MEM32(esp + 0x50);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026B640
 * Original: 0x0026B640 - 0x0026B76E (302 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026B640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026B640: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D884);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026B668u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B668: ;
    ebp = eax;
    PUSH32(esp, 0x0026B66Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B66F: ;
    ecx = MEM32(0x64D854);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 1;
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026B69B; /* jne: not equal / not zero */

loc_0026B691: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026B6A3;

loc_0026B69B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026B6A3: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0026B6C1; /* jne: not equal / not zero */

loc_0026B6B7: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026B6C9;

loc_0026B6C1: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026B6C9: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0026B6E7; /* jne: not equal / not zero */

loc_0026B6DD: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026B6EF;

loc_0026B6E7: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026B6EF: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0026B718; /* jne: not equal / not zero */

loc_0026B70E: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026B720;

loc_0026B718: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026B720: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0026B72Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B72B: ;
    esi = eax;
    PUSH32(esp, 0x0026B732u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B732: ;
    edi = eax;
    PUSH32(esp, 0x0026B739u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B739: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0026B75Cu); RECOMP_ABI_CALL(0x000B0D60u, sub_000B0D60); /* call 0x000B0D60 */

loc_0026B75C: ;
    eax = MEM32(esp + 0x50);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026B770
 * Original: 0x0026B770 - 0x0026B89E (302 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026B770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026B770: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D884);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026B798u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B798: ;
    ebp = eax;
    PUSH32(esp, 0x0026B79Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B79F: ;
    ecx = MEM32(0x64D854);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 1;
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026B7CB; /* jne: not equal / not zero */

loc_0026B7C1: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026B7D3;

loc_0026B7CB: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026B7D3: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0026B7F1; /* jne: not equal / not zero */

loc_0026B7E7: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026B7F9;

loc_0026B7F1: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026B7F9: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0026B817; /* jne: not equal / not zero */

loc_0026B80D: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026B81F;

loc_0026B817: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026B81F: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0026B848; /* jne: not equal / not zero */

loc_0026B83E: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026B850;

loc_0026B848: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026B850: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0026B85Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B85B: ;
    esi = eax;
    PUSH32(esp, 0x0026B862u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B862: ;
    edi = eax;
    PUSH32(esp, 0x0026B869u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B869: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0026B88Cu); RECOMP_ABI_CALL(0x000B0DF0u, sub_000B0DF0); /* call 0x000B0DF0 */

loc_0026B88C: ;
    eax = MEM32(esp + 0x50);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026B8A0
 * Original: 0x0026B8A0 - 0x0026B9CE (302 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026B8A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026B8A0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D884);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026B8C8u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B8C8: ;
    ebp = eax;
    PUSH32(esp, 0x0026B8CFu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B8CF: ;
    ecx = MEM32(0x64D854);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 1;
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026B8FB; /* jne: not equal / not zero */

loc_0026B8F1: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026B903;

loc_0026B8FB: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026B903: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0026B921; /* jne: not equal / not zero */

loc_0026B917: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026B929;

loc_0026B921: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026B929: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0026B947; /* jne: not equal / not zero */

loc_0026B93D: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026B94F;

loc_0026B947: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026B94F: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0026B978; /* jne: not equal / not zero */

loc_0026B96E: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026B980;

loc_0026B978: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026B980: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0026B98Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B98B: ;
    esi = eax;
    PUSH32(esp, 0x0026B992u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B992: ;
    edi = eax;
    PUSH32(esp, 0x0026B999u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026B999: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0026B9BCu); RECOMP_ABI_CALL(0x000B0E80u, sub_000B0E80); /* call 0x000B0E80 */

loc_0026B9BC: ;
    eax = MEM32(esp + 0x50);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026B9D0
 * Original: 0x0026B9D0 - 0x0026BA42 (114 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026B9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026B9D0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0026BA00; /* jne: not equal / not zero */

loc_0026B9F6: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_0026BA08;

loc_0026BA00: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_0026BA08: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0026BA16u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026BA16: ;
    edi = eax;
    PUSH32(esp, 0x0026BA1Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026BA1D: ;
    ebx = eax;
    PUSH32(esp, 0x0026BA24u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026BA24: ;
    esi = eax;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0x0026BA33u); RECOMP_ABI_CALL(0x000F3150u, sub_000F3150); /* call 0x000F3150 */

loc_0026BA33: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026BA50
 * Original: 0x0026BA50 - 0x0026BAA4 (84 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026BA50(void)
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

loc_0026BA50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0026BA56u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026BA56: ;
    esi = eax;
    PUSH32(esp, 0x0026BA5Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026BA5D: ;
    ecx = eax;
    eax = esi;
    PUSH32(esp, 0x0026BA66u); RECOMP_ABI_CALL(0x000F31C0u, sub_000F31C0); /* call 0x000F31C0 */

loc_0026BA66: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 8);
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0026BAB0
 * Original: 0x0026BAB0 - 0x0026BAF5 (69 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026BAB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026BAB0: ;
    PUSH32(esp, 0x0026BAB5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026BAB5: ;
    PUSH32(esp, 0x0026BABAu); RECOMP_ABI_CALL(0x000F31B0u, sub_000F31B0); /* call 0x000F31B0 */

loc_0026BABA: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026BB00
 * Original: 0x0026BB00 - 0x0026BB6E (110 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026BB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026BB00: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0026BB2C; /* je: equal / zero */

loc_0026BB08: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BB2C; /* je: equal / zero */

loc_0026BB0F: ;
    /* nop */

loc_0026BB10: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026BB25; /* jne: not equal / not zero */

loc_0026BB17: ;
    esi = MEM32(eax + 4);
    esi = esi & 0xFDFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = esi;

loc_0026BB25: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026BB10; /* jne: not equal / not zero */

loc_0026BB2C: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BB6C; /* je: equal / zero */

loc_0026BB33: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BB6C; /* je: equal / zero */

loc_0026BB3A: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BB6C; /* je: equal / zero */

loc_0026BB41: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BB6C; /* je: equal / zero */

loc_0026BB48: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BB6C; /* je: equal / zero */

loc_0026BB4F: ;
    /* nop */

loc_0026BB50: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026BB65; /* jne: not equal / not zero */

loc_0026BB57: ;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFDFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;

loc_0026BB65: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026BB50; /* jne: not equal / not zero */

loc_0026BB6C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026BB70
 * Original: 0x0026BB70 - 0x0026BBB3 (67 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026BB70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026BB70: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0026BB94u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026BB94: ;
    edi = eax;
    PUSH32(esp, 0x0026BB9Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0026BB9B: ;
    edx = edi;
    ecx = esi;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x0026BBA8u); RECOMP_ABI_CALL(0x0026BB00u, sub_0026BB00); /* call 0x0026BB00 */

loc_0026BBA8: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026BBC0
 * Original: 0x0026BBC0 - 0x0026BC14 (84 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026BBC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026BBC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = eax;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BC11; /* je: equal / zero */

loc_0026BBCD: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BC11; /* je: equal / zero */

loc_0026BBD4: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BC11; /* je: equal / zero */

loc_0026BBDB: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BC11; /* je: equal / zero */

loc_0026BBE2: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BC11; /* je: equal / zero */

loc_0026BBE9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = eax;
    /* nop */

loc_0026BBF0: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026BC08; /* jne: not equal / not zero */

loc_0026BBF8: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026BC05u); RECOMP_ABI_CALL(0x0003A9B0u, sub_0003A9B0); /* call 0x0003A9B0 */

loc_0026BC05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026BC08: ;
    ebp = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026BBF0; /* jne: not equal / not zero */

loc_0026BC0F: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0026BC11: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026BC20
 * Original: 0x0026BC20 - 0x0026BCA4 (132 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026BC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026BC20: ;
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026BC47; /* jne: not equal / not zero */

loc_0026BC3D: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0026BC4F;

loc_0026BC47: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0026BC4F: ;
    edx = MEM32(ecx + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = edx;
    edx = MEM32(ecx + 0x6270DC);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = edx;
    edx = MEM32(ecx + 0x6270E0);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(ecx + 0x6270D8);
    PUSH32(esp, eax);
    eax = esp + 8;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x0026BC99u); RECOMP_ABI_CALL(0x0026BBC0u, sub_0026BBC0); /* call 0x0026BBC0 */

loc_0026BC99: ;
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
 * sub_0026BCB0
 * Original: 0x0026BCB0 - 0x0026BCFC (76 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026BCB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026BCB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = eax;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BCF9; /* je: equal / zero */

loc_0026BCBD: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BCF9; /* je: equal / zero */

loc_0026BCC4: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BCF9; /* je: equal / zero */

loc_0026BCCB: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BCF9; /* je: equal / zero */

loc_0026BCD2: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BCF9; /* je: equal / zero */

loc_0026BCD9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = eax;
    /* nop */

loc_0026BCE0: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026BCF0; /* jne: not equal / not zero */

loc_0026BCE8: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0x0026BCF0u); RECOMP_ABI_CALL(0x0003A930u, sub_0003A930); /* call 0x0003A930 */

loc_0026BCF0: ;
    ebp = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026BCE0; /* jne: not equal / not zero */

loc_0026BCF7: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0026BCF9: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026BD00
 * Original: 0x0026BD00 - 0x0026BD58 (88 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026BD00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026BD00: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x64D854);
    eax = MEM32(ecx + 0x6270B8);
    edx = MEM32(ecx + 0x6270BC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp) = eax;
    eax = MEM32(ecx + 0x6270E0);
    MEM32(esp + 8) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(ecx + 0x6270D8);
    MEM32(0x64D858) = eax;
    eax = esp;
    MEM32(esp + 4) = edx;
    PUSH32(esp, 0x0026BD4Du); RECOMP_ABI_CALL(0x0026BCB0u, sub_0026BCB0); /* call 0x0026BCB0 */

loc_0026BD4D: ;
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
 * sub_0026BD60
 * Original: 0x0026BD60 - 0x0026BDAF (79 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026BD60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026BD60: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BDAD; /* je: equal / zero */

loc_0026BD6A: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BDAD; /* je: equal / zero */

loc_0026BD71: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BDAD; /* je: equal / zero */

loc_0026BD78: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BDAD; /* je: equal / zero */

loc_0026BD7F: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BDAD; /* je: equal / zero */

loc_0026BD86: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ebx = eax;
    /* nop */

loc_0026BD90: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026BDA3; /* jne: not equal / not zero */

loc_0026BD97: ;
    esi = MEM32(ebx + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0026BDA0u); RECOMP_ABI_CALL(0x0003A8F0u, sub_0003A8F0); /* call 0x0003A8F0 */

loc_0026BDA0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0026BDA3: ;
    ebx = MEM32(ebx + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026BD90; /* jne: not equal / not zero */

loc_0026BDAA: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0026BDAD: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026BDB0
 * Original: 0x0026BDB0 - 0x0026BE0B (91 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026BDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026BDB0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026BDD5; /* jne: not equal / not zero */

loc_0026BDCB: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_0026BDDD;

loc_0026BDD5: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_0026BDDD: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEM32(0x64D858) = ecx;
    ecx = MEM32(esp);
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270D8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026BE00u); RECOMP_ABI_CALL(0x0026BD60u, sub_0026BD60); /* call 0x0026BD60 */

loc_0026BE00: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026BE10
 * Original: 0x0026BE10 - 0x0026BE4E (62 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026BE10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026BE10: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BE4D; /* je: equal / zero */

loc_0026BE17: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BE4D; /* je: equal / zero */

loc_0026BE1E: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BE4D; /* je: equal / zero */

loc_0026BE25: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BE4D; /* je: equal / zero */

loc_0026BE2C: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BE4D; /* je: equal / zero */

loc_0026BE33: ;
    PUSH32(esp, esi);
    esi = eax;

loc_0026BE36: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026BE45; /* jne: not equal / not zero */

loc_0026BE3D: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, 0x0026BE45u); RECOMP_ABI_CALL(0x0003AA50u, sub_0003AA50); /* call 0x0003AA50 */

loc_0026BE45: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026BE36; /* jne: not equal / not zero */

loc_0026BE4C: ;
    POP32(esp, esi);

loc_0026BE4D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0026BE50
 * Original: 0x0026BE50 - 0x0026BE7D (45 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026BE50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026BE50: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270D8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    PUSH32(esp, 0x0026BE75u); RECOMP_ABI_CALL(0x0026BE10u, sub_0026BE10); /* call 0x0026BE10 */

loc_0026BE75: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026BE80
 * Original: 0x0026BE80 - 0x0026BEF0 (112 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026BE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026BE80: ;
    ecx = MEM32(0x64D880);
    eax = MEM32(0x64D884);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    MEM32(0x64D87C) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0026BEC2; /* je: equal / zero */

loc_0026BEA4: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BEC2; /* je: equal / zero */

loc_0026BEAB: ;
    ecx = MEM32(eax + 0x1C);
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BEC2; /* je: equal / zero */

loc_0026BEB4: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x12 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BED5; /* je: equal / zero */

loc_0026BEBB: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026BEB4; /* jne: not equal / not zero */

loc_0026BEC2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026BECAu); RECOMP_ABI_CALL(0x001080C0u, sub_001080C0); /* call 0x001080C0 */

loc_0026BECA: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0026BED5: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026BEC2; /* je: equal / zero */

loc_0026BEDC: ;
    eax = MEM32(eax + 0x74);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026BEE5u); RECOMP_ABI_CALL(0x001080C0u, sub_001080C0); /* call 0x001080C0 */

loc_0026BEE5: ;
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
 * sub_0026BEF0
 * Original: 0x0026BEF0 - 0x0026BF60 (112 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026BEF0(void)
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

loc_0026BEF0: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D884);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    esi = edi + 0x6270D8;
    PUSH32(esp, 0x0026BF20u); RECOMP_ABI_CALL(0x00045FE0u, sub_00045FE0); /* call 0x00045FE0 */

loc_0026BF20: ;
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x64D858);
    MEM32(eax * 8 + 0x616FDC) = esi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 2;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x64D854) = edi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0026BF60
 * Original: 0x0026BF60 - 0x0026BFD5 (117 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026BF60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026BF60: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x64D878);
    ecx = MEM32(0x64D880);
    eax = MEM32(0x64D884);
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D858);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xFFFFFFC0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFC0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D858) = edx;
    edx = MEM32(ecx + 0x6270D8);
    MEM32(esp) = edx;
    edx = MEM32(ecx + 0x6270DC);
    MEM32(0x64D854) = ecx;
    ecx = MEM32(ecx + 0x6270E0);
    PUSH32(esp, esi);
    MEM32(esp + 8) = edx;
    edx = esp + 0x10;
    esi = esp + 4;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0x0026BFC9u); RECOMP_ABI_CALL(0x000460A0u, sub_000460A0); /* call 0x000460A0 */

loc_0026BFC9: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026BFE0
 * Original: 0x0026BFE0 - 0x0026C05E (126 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026BFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026BFE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C014; /* je: equal / zero */

loc_0026BFE4: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C014; /* je: equal / zero */

loc_0026BFEB: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C014; /* je: equal / zero */

loc_0026BFF2: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C014; /* je: equal / zero */

loc_0026BFF8: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C014; /* je: equal / zero */

loc_0026BFFF: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C014; /* je: equal / zero */

loc_0026C006: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C018; /* je: equal / zero */

loc_0026C00D: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026C006; /* jne: not equal / not zero */

loc_0026C014: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esp += 4; return; /* ret */

loc_0026C018: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C014; /* je: equal / zero */

loc_0026C01F: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    xmm1 = XMM_SCALAR(MEMF(0x49362C)); /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_0026C04A; /* je: equal / zero */

loc_0026C02F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026C04F; /* jne: not equal / not zero */

loc_0026C034: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 0x5C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x60); /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    esp += 4; return; /* ret */

loc_0026C04A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026C034; /* jne: not equal / not zero */

loc_0026C04F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x5C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x60); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    esp += 4; return; /* ret */

}

/**
 * sub_0026C060
 * Original: 0x0026C060 - 0x0026C0B2 (82 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C060(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C060: ;
    edx = MEM32(0x64D858);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x6270D8);
    esi = edi + 0x6270D8;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0026C083u); RECOMP_ABI_CALL(0x0026BFE0u, sub_0026BFE0); /* call 0x0026BFE0 */

loc_0026C083: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx * 8 + 0x616FDC) = esi;
    MEM32(0x64D854) = edi;
    MEM16(edx * 8 + 0x616FD8) = 2;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEM32(0x64D858) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026C0C0
 * Original: 0x0026C0C0 - 0x0026C101 (65 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C0C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026C0C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C0F4; /* je: equal / zero */

loc_0026C0C4: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C0F4; /* je: equal / zero */

loc_0026C0CB: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C0F4; /* je: equal / zero */

loc_0026C0D2: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C0F4; /* je: equal / zero */

loc_0026C0D8: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C0F4; /* je: equal / zero */

loc_0026C0DF: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C0F4; /* je: equal / zero */

loc_0026C0E6: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C0F5; /* je: equal / zero */

loc_0026C0ED: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026C0E6; /* jne: not equal / not zero */

loc_0026C0F4: ;
    esp += 4; return; /* ret */

loc_0026C0F5: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C0F4; /* je: equal / zero */

loc_0026C0FC: ;
    g_seh_ebp = ebp; sub_00049650(); return; /* tail jmp 0x00049650 */

}

/**
 * sub_0026C110
 * Original: 0x0026C110 - 0x0026C16B (91 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C110: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026C135; /* jne: not equal / not zero */

loc_0026C12B: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_0026C13D;

loc_0026C135: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_0026C13D: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEM32(0x64D858) = ecx;
    ecx = MEM32(esp);
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270D8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026C160u); RECOMP_ABI_CALL(0x0026C0C0u, sub_0026C0C0); /* call 0x0026C0C0 */

loc_0026C160: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0026C170
 * Original: 0x0026C170 - 0x0026C1B2 (66 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026C170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026C170: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C1A4; /* je: equal / zero */

loc_0026C174: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C1A4; /* je: equal / zero */

loc_0026C17B: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C1A4; /* je: equal / zero */

loc_0026C182: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C1A4; /* je: equal / zero */

loc_0026C188: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C1A4; /* je: equal / zero */

loc_0026C18F: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C1A4; /* je: equal / zero */

loc_0026C196: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C1A7; /* je: equal / zero */

loc_0026C19D: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026C196; /* jne: not equal / not zero */

loc_0026C1A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0026C1A7: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026C1A4; /* je: equal / zero */

loc_0026C1AE: ;
    eax = MEM32(eax + 0x64);
    esp += 4; return; /* ret */

}
