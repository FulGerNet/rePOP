/**
 * PoP SoT xbox-demo - Recompiled code chunk 27
 * Functions: 250 (0x00253070 - 0x0025AF50)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00253070
 * Original: 0x00253070 - 0x002530A2 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00253070: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    ecx = MEM32(eax + 0x6270D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x64D854) = eax;
    eax = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_0025309C; /* jne: not equal / not zero */

loc_00253098: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0025309C: ;
    ecx = MEM32(eax);
    eax = eax + ecx * 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002530B0
 * Original: 0x002530B0 - 0x002530BA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002530B0(void)
{

loc_002530B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    eax = eax + ecx * 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002530C0
 * Original: 0x002530C0 - 0x002531EC (300 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002530C0(void)
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

loc_002530C0: ;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax * 8 + 0x616FD8));
    edx = esp + 0x10;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(edi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x002530EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002530E8u); } /* indirect call */
    }

loc_002530EF: ;
    edx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    SET_LO16(esi, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    edx = esp + 0x50;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(esi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x00253128u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00253121u); } /* indirect call */
    }

loc_00253128: ;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(edi) (16-bit) */
    MEM32(0x64D854) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00253197; /* je: equal / zero */

loc_0025313F: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00253153; /* jne: not equal / not zero */

loc_00253145: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_002531A2;

loc_00253153: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00253197; /* jne: not equal / not zero */

loc_00253159: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    MEM32(esp + 0x10) = eax;

loc_0025316F: ;
    edx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x48);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00253184u); RECOMP_ABI_CALL(0x002558E0u, sub_002558E0); /* call 0x002558E0 */

loc_00253184: ;
    eax = MEM32(esp + 0x88);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00253197: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025316F; /* je: equal / zero */

loc_002531A2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002531D1; /* jnp: not parity */

loc_002531B3: ;
    eax = 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002531BEu); RECOMP_ABI_CALL(0x002558E0u, sub_002558E0); /* call 0x002558E0 */

loc_002531BE: ;
    eax = MEM32(esp + 0x88);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002531D1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002531D9u); RECOMP_ABI_CALL(0x002558E0u, sub_002558E0); /* call 0x002558E0 */

loc_002531D9: ;
    eax = MEM32(esp + 0x88);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002531F0
 * Original: 0x002531F0 - 0x0025331C (300 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002531F0(void)
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

loc_002531F0: ;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax * 8 + 0x616FD8));
    edx = esp + 0x10;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(edi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x0025321Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00253218u); } /* indirect call */
    }

loc_0025321F: ;
    edx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    SET_LO16(esi, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    edx = esp + 0x50;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(esi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x00253258u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00253251u); } /* indirect call */
    }

loc_00253258: ;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(edi) (16-bit) */
    MEM32(0x64D854) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002532C7; /* je: equal / zero */

loc_0025326F: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00253283; /* jne: not equal / not zero */

loc_00253275: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_002532D2;

loc_00253283: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002532C7; /* jne: not equal / not zero */

loc_00253289: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    MEM32(esp + 0x10) = eax;

loc_0025329F: ;
    edx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x48);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002532B4u); RECOMP_ABI_CALL(0x002558E0u, sub_002558E0); /* call 0x002558E0 */

loc_002532B4: ;
    eax = MEM32(esp + 0x88);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002532C7: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025329F; /* je: equal / zero */

loc_002532D2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00253301; /* jp: parity */

loc_002532E3: ;
    eax = 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002532EEu); RECOMP_ABI_CALL(0x002558E0u, sub_002558E0); /* call 0x002558E0 */

loc_002532EE: ;
    eax = MEM32(esp + 0x88);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00253301: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00253309u); RECOMP_ABI_CALL(0x002558E0u, sub_002558E0); /* call 0x002558E0 */

loc_00253309: ;
    eax = MEM32(esp + 0x88);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00253320
 * Original: 0x00253320 - 0x00253448 (296 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253320(void)
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

loc_00253320: ;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax * 8 + 0x616FD8));
    edx = esp + 0x10;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(edi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x0025334Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00253348u); } /* indirect call */
    }

loc_0025334F: ;
    edx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    SET_LO16(esi, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    edx = esp + 0x50;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(esi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x00253388u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00253381u); } /* indirect call */
    }

loc_00253388: ;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(edi) (16-bit) */
    MEM32(0x64D854) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002533F7; /* je: equal / zero */

loc_0025339F: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002533B3; /* jne: not equal / not zero */

loc_002533A5: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_00253402;

loc_002533B3: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002533F7; /* jne: not equal / not zero */

loc_002533B9: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    MEM32(esp + 0x10) = eax;

loc_002533CF: ;
    edx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x48);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002533E4u); RECOMP_ABI_CALL(0x002558E0u, sub_002558E0); /* call 0x002558E0 */

loc_002533E4: ;
    eax = MEM32(esp + 0x88);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002533F7: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002533CF; /* je: equal / zero */

loc_00253402: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0025342D; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_0025340F: ;
    eax = 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025341Au); RECOMP_ABI_CALL(0x002558E0u, sub_002558E0); /* call 0x002558E0 */

loc_0025341A: ;
    eax = MEM32(esp + 0x88);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0025342D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00253435u); RECOMP_ABI_CALL(0x002558E0u, sub_002558E0); /* call 0x002558E0 */

loc_00253435: ;
    eax = MEM32(esp + 0x88);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00253450
 * Original: 0x00253450 - 0x00253578 (296 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253450(void)
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

loc_00253450: ;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax * 8 + 0x616FD8));
    edx = esp + 0x10;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(edi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x0025347Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00253478u); } /* indirect call */
    }

loc_0025347F: ;
    edx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    SET_LO16(esi, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    edx = esp + 0x50;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(esi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x002534B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002534B1u); } /* indirect call */
    }

loc_002534B8: ;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(edi) (16-bit) */
    MEM32(0x64D854) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00253527; /* je: equal / zero */

loc_002534CF: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002534E3; /* jne: not equal / not zero */

loc_002534D5: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_00253532;

loc_002534E3: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00253527; /* jne: not equal / not zero */

loc_002534E9: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    MEM32(esp + 0x10) = eax;

loc_002534FF: ;
    edx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x48);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00253514u); RECOMP_ABI_CALL(0x002558E0u, sub_002558E0); /* call 0x002558E0 */

loc_00253514: ;
    eax = MEM32(esp + 0x88);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00253527: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002534FF; /* je: equal / zero */

loc_00253532: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0025355D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_0025353F: ;
    eax = 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025354Au); RECOMP_ABI_CALL(0x002558E0u, sub_002558E0); /* call 0x002558E0 */

loc_0025354A: ;
    eax = MEM32(esp + 0x88);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0025355D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00253565u); RECOMP_ABI_CALL(0x002558E0u, sub_002558E0); /* call 0x002558E0 */

loc_00253565: ;
    eax = MEM32(esp + 0x88);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00253580
 * Original: 0x00253580 - 0x002536A8 (296 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253580(void)
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

loc_00253580: ;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax * 8 + 0x616FD8));
    edx = esp + 0x10;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(edi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x002535AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002535A8u); } /* indirect call */
    }

loc_002535AF: ;
    edx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    SET_LO16(esi, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    edx = esp + 0x50;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(esi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x002535E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002535E1u); } /* indirect call */
    }

loc_002535E8: ;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(edi) (16-bit) */
    MEM32(0x64D854) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00253657; /* je: equal / zero */

loc_002535FF: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00253613; /* jne: not equal / not zero */

loc_00253605: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_00253662;

loc_00253613: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00253657; /* jne: not equal / not zero */

loc_00253619: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    MEM32(esp + 0x10) = eax;

loc_0025362F: ;
    edx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x48);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00253644u); RECOMP_ABI_CALL(0x002558E0u, sub_002558E0); /* call 0x002558E0 */

loc_00253644: ;
    eax = MEM32(esp + 0x88);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00253657: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025362F; /* je: equal / zero */

loc_00253662: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x48); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0025368D; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esp + 0x48)) */

loc_0025366F: ;
    eax = 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025367Au); RECOMP_ABI_CALL(0x002558E0u, sub_002558E0); /* call 0x002558E0 */

loc_0025367A: ;
    eax = MEM32(esp + 0x88);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0025368D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00253695u); RECOMP_ABI_CALL(0x002558E0u, sub_002558E0); /* call 0x002558E0 */

loc_00253695: ;
    eax = MEM32(esp + 0x88);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002536B0
 * Original: 0x002536B0 - 0x002537D8 (296 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002536B0(void)
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

loc_002536B0: ;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax * 8 + 0x616FD8));
    edx = esp + 0x10;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(edi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x002536DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002536D8u); } /* indirect call */
    }

loc_002536DF: ;
    edx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    SET_LO16(esi, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    edx = esp + 0x50;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(esi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x00253718u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00253711u); } /* indirect call */
    }

loc_00253718: ;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(edi) (16-bit) */
    MEM32(0x64D854) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00253787; /* je: equal / zero */

loc_0025372F: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00253743; /* jne: not equal / not zero */

loc_00253735: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_00253792;

loc_00253743: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00253787; /* jne: not equal / not zero */

loc_00253749: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    MEM32(esp + 0x10) = eax;

loc_0025375F: ;
    edx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x48);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00253774u); RECOMP_ABI_CALL(0x002558E0u, sub_002558E0); /* call 0x002558E0 */

loc_00253774: ;
    eax = MEM32(esp + 0x88);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00253787: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025375F; /* je: equal / zero */

loc_00253792: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x48); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002537BD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x48)) */

loc_0025379F: ;
    eax = 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002537AAu); RECOMP_ABI_CALL(0x002558E0u, sub_002558E0); /* call 0x002558E0 */

loc_002537AA: ;
    eax = MEM32(esp + 0x88);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002537BD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002537C5u); RECOMP_ABI_CALL(0x002558E0u, sub_002558E0); /* call 0x002558E0 */

loc_002537C5: ;
    eax = MEM32(esp + 0x88);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002537E0
 * Original: 0x002537E0 - 0x002538B3 (211 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002537E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_002537E0: ;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax * 8 + 0x616FD0));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    PUSH32(esp, ecx);
    ebx = SX16(LO16(esi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx * 8 + 0x3418EC); PUSH32(esp, 0x00253810u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00253809u); } /* indirect call */
    }

loc_00253810: ;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    MEM32(0x64D854) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0025384A; /* jne: not equal / not zero */

loc_00253828: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00253842; /* jp: parity */

loc_0025383A: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */

loc_00253842: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    goto loc_00253860;

loc_0025384A: ;
    edi = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0xC) = edx;

loc_00253860: ;
    edi = MEM32(0x64D854);
    edi = edi + 0x6270D8;
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx * 8 + 0x3418EC); PUSH32(esp, 0x00253879u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00253872u); } /* indirect call */
    }

loc_00253879: ;
    eax = MEM32(0x64D858);
    edx = MEM32(0x64D854);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = LO16(esi);
    MEM32(eax * 8 + 0x616FDC) = edi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x44);
    POP32(esp, esi);
    MEM32(0x64D854) = edx;
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
 * sub_002538C0
 * Original: 0x002538C0 - 0x00253976 (182 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002538C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002538C0: ;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax * 8 + 0x616FD0));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    PUSH32(esp, ecx);
    ebx = SX16(LO16(esi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx * 8 + 0x3418EC); PUSH32(esp, 0x002538F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002538E9u); } /* indirect call */
    }

loc_002538F0: ;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    MEM32(0x64D854) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00253919; /* jne: not equal / not zero */

loc_00253908: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    goto loc_00253923;

loc_00253919: ;
    edx = MEM32(esp + 0xC);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0xC) = edx;

loc_00253923: ;
    edi = MEM32(0x64D854);
    edi = edi + 0x6270D8;
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx * 8 + 0x3418EC); PUSH32(esp, 0x0025393Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00253935u); } /* indirect call */
    }

loc_0025393C: ;
    eax = MEM32(0x64D858);
    edx = MEM32(0x64D854);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = LO16(esi);
    MEM32(eax * 8 + 0x616FDC) = edi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x44);
    POP32(esp, esi);
    MEM32(0x64D854) = edx;
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
 * sub_00253980
 * Original: 0x00253980 - 0x00253A1B (155 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00253980: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = esp + 8;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x002539AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002539A8u); } /* indirect call */
    }

loc_002539AF: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x80000000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 0x44);
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
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00253A20
 * Original: 0x00253A20 - 0x00253AC7 (167 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00253A20: ;
    edx = MEM32(0x64D854);
    PUSH32(esp, esi);
    esi = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x6270D8)); /* movss */
    PUSH32(esp, edi);
    edi = edx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x6270D8); /* ucomiss */
    ecx = edx + 0x6270D8;
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = esi;
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00253A96; /* jp: parity */

loc_00253A64: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00253A96; /* jp: parity */

loc_00253A73: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00253A96; /* jp: parity */

loc_00253A82: ;
    edx = 1;
    PUSH32(esp, 0x00253A8Cu); RECOMP_ABI_CALL(0x000FE950u, sub_000FE950); /* call 0x000FE950 */

loc_00253A8C: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00253A96: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi * 8 + 0x616FD8) = 1;
    MEM32(esi * 8 + 0x616FDC) = ecx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = esi;
    MEM32(ecx) = 0;
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00253AD0
 * Original: 0x00253AD0 - 0x00253B74 (164 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00253AD0: ;
    edx = MEM32(0x64D854);
    PUSH32(esp, esi);
    esi = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x6270D8)); /* movss */
    PUSH32(esp, edi);
    edi = edx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x6270D8); /* ucomiss */
    ecx = edx + 0x6270D8;
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = esi;
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00253B43; /* jp: parity */

loc_00253B14: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00253B43; /* jp: parity */

loc_00253B23: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00253B43; /* jp: parity */

loc_00253B32: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00253B39u); RECOMP_ABI_CALL(0x000FE950u, sub_000FE950); /* call 0x000FE950 */

loc_00253B39: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00253B43: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi * 8 + 0x616FD8) = 1;
    MEM32(esi * 8 + 0x616FDC) = ecx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = esi;
    MEM32(ecx) = 1;
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00253B80
 * Original: 0x00253B80 - 0x00253C00 (128 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00253B80: ;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax * 8 + 0x616FD0));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ebx = SX16(LO16(esi));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(ebx * 8 + 0x3418EC); PUSH32(esp, 0x00253BB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00253BA9u); } /* indirect call */
    }

loc_00253BB0: ;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    MEM32(0x64D854) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00253BDE; /* jne: not equal / not zero */

loc_00253BC8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3337A0); /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    goto loc_00253BE2;

loc_00253BDE: ;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00253BE2: ;
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ebx * 8 + 0x3418EC); PUSH32(esp, 0x00253BEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00253BE8u); } /* indirect call */
    }

loc_00253BEF: ;
    eax = MEM32(esp + 0x50);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_00253C00
 * Original: 0x00253C00 - 0x00253C80 (128 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00253C00: ;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax * 8 + 0x616FD0));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ebx = SX16(LO16(esi));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(ebx * 8 + 0x3418EC); PUSH32(esp, 0x00253C30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00253C29u); } /* indirect call */
    }

loc_00253C30: ;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    MEM32(0x64D854) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00253C5E; /* jne: not equal / not zero */

loc_00253C48: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3337A0); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    goto loc_00253C62;

loc_00253C5E: ;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00253C62: ;
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ebx * 8 + 0x3418EC); PUSH32(esp, 0x00253C6Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00253C68u); } /* indirect call */
    }

loc_00253C6F: ;
    eax = MEM32(esp + 0x50);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_00253C80
 * Original: 0x00253C80 - 0x00253D48 (200 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253C80: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    ecx = MEM32(eax * 8 + 0x616FD4);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(eax * 8 + 0x616FD4);
    SET_LO16(edx, MEM16(eax * 8 + 0x616FD0));
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    ecx = MEM32(0x64D854);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax * 8 + 0x616FD8));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(edi) (16-bit) */
    MEM32(esp + 0x44) = ebp;
    MEM32(esp + 0xC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00253CE3; /* je: equal / zero */

loc_00253CC5: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00253CD7; /* jne: not equal / not zero */

loc_00253CCB: ;
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    goto loc_00253CEE;

loc_00253CD7: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00253CE3; /* jne: not equal / not zero */

loc_00253CDD: ;
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    goto loc_00253CF4;

loc_00253CE3: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 2 (16-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00253D10; /* je: equal / zero */

loc_00253CEE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_00253CF4: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x44); /* subss */
    edx = ecx + 0x6270D8;
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEM16(eax * 8 + 0x616FD8) = 2;
    goto loc_00253D24;

loc_00253D10: ;
    edx = ecx + 0x6270D8;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx) = esi;
    MEM16(eax * 8 + 0x616FD8) = 1;

loc_00253D24: ;
    MEM32(eax * 8 + 0x616FDC) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x7C);
    POP32(esp, esi);
    MEM32(0x64D854) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00253D50
 * Original: 0x00253D50 - 0x00253E18 (200 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253D50: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    ecx = MEM32(eax * 8 + 0x616FD4);
    PUSH32(esp, ebp);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(edx, MEM16(eax * 8 + 0x616FD0));
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax * 8 + 0x616FD8));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    ecx = MEM32(eax * 8 + 0x616FDC);
    ebp = MEM32(ecx);
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(esi) (16-bit) */
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x44) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00253DB3; /* je: equal / zero */

loc_00253D95: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00253DA1; /* jne: not equal / not zero */

loc_00253D9B: ;
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    goto loc_00253DC4;

loc_00253DA1: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00253DB3; /* jne: not equal / not zero */

loc_00253DA7: ;
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    goto loc_00253DBE;

loc_00253DB3: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 2 (16-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00253DE0; /* je: equal / zero */

loc_00253DBE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_00253DC4: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x44); /* addss */
    edx = ecx + 0x6270D8;
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEM16(eax * 8 + 0x616FD8) = 2;
    goto loc_00253DF4;

loc_00253DE0: ;
    edx = ecx + 0x6270D8;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = edi;
    MEM16(eax * 8 + 0x616FD8) = 1;

loc_00253DF4: ;
    MEM32(eax * 8 + 0x616FDC) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x7C);
    POP32(esp, esi);
    MEM32(0x64D854) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00253E20
 * Original: 0x00253E20 - 0x00253EE9 (201 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253E20: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    ecx = MEM32(eax * 8 + 0x616FD4);
    PUSH32(esp, ebp);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(edx, MEM16(eax * 8 + 0x616FD0));
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    ecx = MEM32(eax * 8 + 0x616FD4);
    ebp = MEM32(ecx);
    ecx = MEM32(0x64D854);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax * 8 + 0x616FD8));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(edi) (16-bit) */
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x44) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00253E83; /* je: equal / zero */

loc_00253E65: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00253E71; /* jne: not equal / not zero */

loc_00253E6B: ;
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    goto loc_00253E94;

loc_00253E71: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00253E83; /* jne: not equal / not zero */

loc_00253E77: ;
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    goto loc_00253E8E;

loc_00253E83: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 2 (16-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00253EB0; /* je: equal / zero */

loc_00253E8E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_00253E94: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x44); /* mulss */
    edx = ecx + 0x6270D8;
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEM16(eax * 8 + 0x616FD8) = 2;
    goto loc_00253EC5;

loc_00253EB0: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)ebp);
    edx = ecx + 0x6270D8;
    MEM32(edx) = esi;
    MEM16(eax * 8 + 0x616FD8) = 1;

loc_00253EC5: ;
    MEM32(eax * 8 + 0x616FDC) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x7C);
    POP32(esp, esi);
    MEM32(0x64D854) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00253EF0
 * Original: 0x00253EF0 - 0x00253FC9 (217 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00253EF0: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x64D858);
    eax = MEM32(ecx * 8 + 0x616FD4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D854);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ecx * 8 + 0x616FD4);
    SET_LO16(edx, MEM16(ecx * 8 + 0x616FD0));
    ebp = MEM32(eax);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(ecx * 8 + 0x616FD8));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(edi) (16-bit) */
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x10) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00253F55; /* je: equal / zero */

loc_00253F37: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00253F49; /* jne: not equal / not zero */

loc_00253F3D: ;
    xmm0.f[0] = (float)(int32_t)ebx; /* cvtsi2ss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    goto loc_00253F60;

loc_00253F49: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00253F55; /* jne: not equal / not zero */

loc_00253F4F: ;
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    goto loc_00253F66;

loc_00253F55: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 2 (16-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00253F89; /* je: equal / zero */

loc_00253F60: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_00253F66: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x48); /* divss */
    eax = esi + 0x6270D8;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM16(ecx * 8 + 0x616FD8) = 2;
    MEM32(ecx * 8 + 0x616FDC) = eax;
    goto loc_00253FA7;

loc_00253F89: ;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    edi = esi + 0x6270D8;
    MEM16(ecx * 8 + 0x616FD8) = 1;
    MEM32(ecx * 8 + 0x616FDC) = edi;
    MEM32(edi) = eax;

loc_00253FA7: ;
    eax = MEM32(esp + 0x84);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(0x64D854) = esi;
    POP32(esp, esi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(0x64D858) = ecx;
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
 * sub_00253FD0
 * Original: 0x00253FD0 - 0x002540C5 (245 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00253FD0(void)
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

loc_00253FD0: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    ecx = MEM32(eax * 8 + 0x616FD4);
    PUSH32(esp, ebp);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(edx, MEM16(eax * 8 + 0x616FD0));
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    ecx = MEM32(eax * 8 + 0x616FD4);
    ebp = MEM32(ecx);
    ecx = MEM32(0x64D854);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax * 8 + 0x616FD8));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(edi) (16-bit) */
    MEM32(esp + 0x54) = esi;
    MEM32(esp + 0x1C) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0025403C; /* je: equal / zero */

loc_00254018: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025402A; /* jne: not equal / not zero */

loc_0025401E: ;
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    goto loc_00254047;

loc_0025402A: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025403C; /* jne: not equal / not zero */

loc_00254030: ;
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_00254047;

loc_0025403C: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 2 (16-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00254087; /* je: equal / zero */

loc_00254047: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    edx = ecx + 0x6270D8;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEM16(eax * 8 + 0x616FD8) = 2;
    MEMD(esp + 0x14) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    edi = MEM32(esp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0xC) = fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esp + 0xC);
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    goto loc_0025409B;

loc_00254087: ;
    edx = ecx + 0x6270D8;
    esi = esi | ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx) = esi;
    MEM16(eax * 8 + 0x616FD8) = 1;

loc_0025409B: ;
    MEM32(eax * 8 + 0x616FDC) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x8C);
    POP32(esp, esi);
    MEM32(0x64D854) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002540D0
 * Original: 0x002540D0 - 0x002541C5 (245 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002540D0(void)
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

loc_002540D0: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    ecx = MEM32(eax * 8 + 0x616FD4);
    PUSH32(esp, ebp);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(edx, MEM16(eax * 8 + 0x616FD0));
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    ecx = MEM32(eax * 8 + 0x616FD4);
    ebp = MEM32(ecx);
    ecx = MEM32(0x64D854);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax * 8 + 0x616FD8));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(edi) (16-bit) */
    MEM32(esp + 0x54) = esi;
    MEM32(esp + 0x1C) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0025413C; /* je: equal / zero */

loc_00254118: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025412A; /* jne: not equal / not zero */

loc_0025411E: ;
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    goto loc_00254147;

loc_0025412A: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025413C; /* jne: not equal / not zero */

loc_00254130: ;
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_00254147;

loc_0025413C: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 2 (16-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00254187; /* je: equal / zero */

loc_00254147: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    edx = ecx + 0x6270D8;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEM16(eax * 8 + 0x616FD8) = 2;
    MEMD(esp + 0x14) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    edi = MEM32(esp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0xC) = fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esp + 0xC);
    esi = esi & edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    goto loc_0025419B;

loc_00254187: ;
    edx = ecx + 0x6270D8;
    esi = esi & ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx) = esi;
    MEM16(eax * 8 + 0x616FD8) = 1;

loc_0025419B: ;
    MEM32(eax * 8 + 0x616FDC) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x8C);
    POP32(esp, esi);
    MEM32(0x64D854) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002541D0
 * Original: 0x002541D0 - 0x002542C5 (245 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002541D0(void)
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

loc_002541D0: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    ecx = MEM32(eax * 8 + 0x616FD4);
    PUSH32(esp, ebp);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(edx, MEM16(eax * 8 + 0x616FD0));
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    ecx = MEM32(eax * 8 + 0x616FD4);
    ebp = MEM32(ecx);
    ecx = MEM32(0x64D854);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax * 8 + 0x616FD8));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(edi) (16-bit) */
    MEM32(esp + 0x54) = esi;
    MEM32(esp + 0x1C) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0025423C; /* je: equal / zero */

loc_00254218: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025422A; /* jne: not equal / not zero */

loc_0025421E: ;
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    goto loc_00254247;

loc_0025422A: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025423C; /* jne: not equal / not zero */

loc_00254230: ;
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_00254247;

loc_0025423C: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 2 (16-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00254287; /* je: equal / zero */

loc_00254247: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    edx = ecx + 0x6270D8;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEM16(eax * 8 + 0x616FD8) = 2;
    MEMD(esp + 0x14) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    edi = MEM32(esp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0xC) = fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esp + 0xC);
    esi = esi ^ edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    goto loc_0025429B;

loc_00254287: ;
    edx = ecx + 0x6270D8;
    esi = esi ^ ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = esi;
    MEM16(eax * 8 + 0x616FD8) = 1;

loc_0025429B: ;
    MEM32(eax * 8 + 0x616FDC) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x8C);
    POP32(esp, esi);
    MEM32(0x64D854) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002542D0
 * Original: 0x002542D0 - 0x002543D0 (256 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002542D0(void)
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

loc_002542D0: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    ecx = MEM32(eax * 8 + 0x616FD4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(eax * 8 + 0x616FD4);
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(eax * 8 + 0x616FD8));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    ebp = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    edx = MEM32(0x64D854);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax * 8 + 0x616FD8));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(ebx) (16-bit) */
    MEM32(esp + 0x58) = ebp;
    MEM32(esp + 0x20) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0025433D; /* je: equal / zero */

loc_00254319: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025432B; /* jne: not equal / not zero */

loc_0025431F: ;
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    goto loc_00254348;

loc_0025432B: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025433D; /* jne: not equal / not zero */

loc_00254331: ;
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    goto loc_00254348;

loc_0025433D: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 2 (16-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025438F; /* je: equal / zero */

loc_00254348: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    esi = edx + 0x6270D8;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEM16(eax * 8 + 0x616FD8) = 2;
    MEM32(eax * 8 + 0x616FDC) = esi;
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    edi = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0x18) = fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    goto loc_002543AC;

loc_0025438F: ;
    ecx = ebp;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx + 0x6270D8;
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = edi;
    MEM32(edi) = esi;

loc_002543AC: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x8C);
    POP32(esp, ebp);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002543D0
 * Original: 0x002543D0 - 0x002544D0 (256 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002543D0(void)
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

loc_002543D0: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    ecx = MEM32(eax * 8 + 0x616FD4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(eax * 8 + 0x616FD4);
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(eax * 8 + 0x616FD8));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    ebp = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    edx = MEM32(0x64D854);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax * 8 + 0x616FD8));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(ebx) (16-bit) */
    MEM32(esp + 0x58) = ebp;
    MEM32(esp + 0x20) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0025443D; /* je: equal / zero */

loc_00254419: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025442B; /* jne: not equal / not zero */

loc_0025441F: ;
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    goto loc_00254448;

loc_0025442B: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025443D; /* jne: not equal / not zero */

loc_00254431: ;
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    goto loc_00254448;

loc_0025443D: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 2 (16-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025448F; /* je: equal / zero */

loc_00254448: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    esi = edx + 0x6270D8;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEM16(eax * 8 + 0x616FD8) = 2;
    MEM32(eax * 8 + 0x616FDC) = esi;
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    edi = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0x18) = fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    goto loc_002544AC;

loc_0025448F: ;
    ecx = ebp;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = edx + 0x6270D8;
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = edi;
    MEM32(edi) = esi;

loc_002544AC: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x8C);
    POP32(esp, ebp);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002544D0
 * Original: 0x002544D0 - 0x00254576 (166 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002544D0(void)
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

loc_002544D0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    ecx = MEM32(eax * 8 + 0x616FD4);
    SET_LO16(edx, MEM16(eax * 8 + 0x616FD0));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edx) (16-bit) */
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    MEM32(esp + 0x10) = esi;
    MEM32(0x64D854) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0025454C; /* je: equal / zero */

loc_00254519: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00254525; /* jne: not equal / not zero */

loc_0025451F: ;
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    goto loc_0025455D;

loc_00254525: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025454C; /* jne: not equal / not zero */

loc_0025452B: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 4) = fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esp + 4);
    MEM32(eax) = esi;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0025454C: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00254567; /* je: equal / zero */

loc_00254557: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_0025455D: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0x10);

loc_00254567: ;
    MEM32(eax) = esi;
    eax = MEM32(esp + 0x4C);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00254580
 * Original: 0x00254580 - 0x00254641 (193 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254580(void)
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

loc_00254580: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    ecx = MEM32(eax * 8 + 0x616FD4);
    SET_LO16(edx, MEM16(eax * 8 + 0x616FD0));
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D854);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD8));
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    esi = MEM32(eax);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edx) (16-bit) */
    MEM32(esp + 0x4C) = edi;
    MEM32(esp + 0x14) = esi;
    MEM32(0x64D854) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00254609; /* je: equal / zero */

loc_002545D0: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002545DC; /* jne: not equal / not zero */

loc_002545D6: ;
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    goto loc_0025461A;

loc_002545DC: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00254609; /* jne: not equal / not zero */

loc_002545E2: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0xC) = fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0xC);

loc_002545F4: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = esi;
    eax = MEM32(esp + 0x88);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00254609: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002545F4; /* je: equal / zero */

loc_00254614: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */

loc_0025461A: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    esi = MEM32(esp + 0x14);
    MEM32(eax) = esi;
    eax = MEM32(esp + 0x88);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00254650
 * Original: 0x00254650 - 0x0025472E (222 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254650(void)
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

loc_00254650: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    ecx = MEM32(eax * 8 + 0x616FD4);
    SET_LO16(edx, MEM16(eax * 8 + 0x616FD0));
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D854);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD8));
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    esi = MEM32(eax);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edx) (16-bit) */
    MEM32(esp + 0x4C) = edi;
    MEM32(esp + 0x14) = esi;
    MEM32(0x64D854) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_002546FA; /* je: equal / zero */

loc_002546A0: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002546CD; /* jne: not equal / not zero */

loc_002546A6: ;
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0x14);
    MEM32(eax) = esi;
    eax = MEM32(esp + 0x88);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002546CD: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002546FA; /* jne: not equal / not zero */

loc_002546D3: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0xC) = fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0xC);

loc_002546E5: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = esi;
    eax = MEM32(esp + 0x88);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002546FA: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002546E5; /* je: equal / zero */

loc_00254705: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0x14);
    MEM32(eax) = esi;
    eax = MEM32(esp + 0x88);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00254730
 * Original: 0x00254730 - 0x0025480F (223 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254730(void)
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

loc_00254730: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    ecx = MEM32(eax * 8 + 0x616FD4);
    SET_LO16(edx, MEM16(eax * 8 + 0x616FD0));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D854);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD8));
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edx) (16-bit) */
    MEM32(esp + 0x4C) = esi;
    MEM32(esp + 0x14) = edi;
    MEM32(0x64D854) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_002547DB; /* je: equal / zero */

loc_00254780: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002547AD; /* jne: not equal / not zero */

loc_00254786: ;
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0x14);
    MEM32(eax) = esi;
    eax = MEM32(esp + 0x88);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002547AD: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002547DB; /* jne: not equal / not zero */

loc_002547B3: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0xC) = fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esp + 0xC);

loc_002547C5: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)edi);
    MEM32(eax) = esi;
    eax = MEM32(esp + 0x88);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002547DB: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002547C5; /* je: equal / zero */

loc_002547E6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0x14);
    MEM32(eax) = esi;
    eax = MEM32(esp + 0x88);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00254810
 * Original: 0x00254810 - 0x002548D2 (194 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254810(void)
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

loc_00254810: ;
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    ecx = MEM32(eax * 8 + 0x616FD4);
    SET_LO16(edx, MEM16(eax * 8 + 0x616FD0));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D854);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD8));
    MEM32(0x64D858) = eax;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edx) (16-bit) */
    MEM32(esp + 0x4C) = edi;
    MEM32(esp + 0x14) = eax;
    MEM32(0x64D854) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0025489A; /* je: equal / zero */

loc_00254860: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025486C; /* jne: not equal / not zero */

loc_00254866: ;
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    goto loc_002548AB;

loc_0025486C: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025489A; /* jne: not equal / not zero */

loc_00254872: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0xC) = fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0xC);

loc_00254884: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    POP32(esp, edi);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x84);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0025489A: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00254884; /* je: equal / zero */

loc_002548A5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */

loc_002548AB: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x88);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002548E0
 * Original: 0x002548E0 - 0x002549CA (234 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002548E0(void)
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

loc_002548E0: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    ecx = MEM32(eax * 8 + 0x616FD4);
    SET_LO16(edx, MEM16(eax * 8 + 0x616FD0));
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D854);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD8));
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    esi = MEM32(eax);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edx) (16-bit) */
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x54) = esi;
    MEM32(0x64D854) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00254975; /* je: equal / zero */

loc_00254933: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00254945; /* jne: not equal / not zero */

loc_00254939: ;
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_00254980;

loc_00254945: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00254975; /* jne: not equal / not zero */

loc_0025494B: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0xC) = fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0xC);

loc_0025495D: ;
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = esi;
    eax = MEM32(esp + 0x90);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00254975: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025495D; /* je: equal / zero */

loc_00254980: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edx = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 8);
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0x50);
    MEM32(eax) = esi;
    eax = MEM32(esp + 0x8C);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002549D0
 * Original: 0x002549D0 - 0x00254ABA (234 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002549D0(void)
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

loc_002549D0: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    ecx = MEM32(eax * 8 + 0x616FD4);
    SET_LO16(edx, MEM16(eax * 8 + 0x616FD0));
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D854);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD8));
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    esi = MEM32(eax);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edx) (16-bit) */
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x54) = esi;
    MEM32(0x64D854) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00254A65; /* je: equal / zero */

loc_00254A23: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00254A35; /* jne: not equal / not zero */

loc_00254A29: ;
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_00254A70;

loc_00254A35: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00254A65; /* jne: not equal / not zero */

loc_00254A3B: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0xC) = fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0xC);

loc_00254A4D: ;
    esi = esi & edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = esi;
    eax = MEM32(esp + 0x90);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00254A65: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00254A4D; /* je: equal / zero */

loc_00254A70: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edx = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 8);
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0x50);
    MEM32(eax) = esi;
    eax = MEM32(esp + 0x8C);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00254AC0
 * Original: 0x00254AC0 - 0x00254BAA (234 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254AC0(void)
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

loc_00254AC0: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    ecx = MEM32(eax * 8 + 0x616FD4);
    SET_LO16(edx, MEM16(eax * 8 + 0x616FD0));
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D854);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD8));
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    esi = MEM32(eax);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edx) (16-bit) */
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x54) = esi;
    MEM32(0x64D854) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00254B55; /* je: equal / zero */

loc_00254B13: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00254B25; /* jne: not equal / not zero */

loc_00254B19: ;
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_00254B60;

loc_00254B25: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00254B55; /* jne: not equal / not zero */

loc_00254B2B: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0xC) = fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0xC);

loc_00254B3D: ;
    esi = esi ^ edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = esi;
    eax = MEM32(esp + 0x90);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00254B55: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 2 (16-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00254B3D; /* je: equal / zero */

loc_00254B60: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edx = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 8);
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0x50);
    MEM32(eax) = esi;
    eax = MEM32(esp + 0x8C);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00254BB0
 * Original: 0x00254BB0 - 0x00254C9A (234 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254BB0(void)
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

loc_00254BB0: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    ecx = MEM32(eax * 8 + 0x616FD4);
    ecx = MEM32(ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D854);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(edx, MEM16(eax * 8 + 0x616FD0));
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax * 8 + 0x616FD8));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(esi) (16-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x54) = edi;
    MEM32(0x64D854) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00254C45; /* je: equal / zero */

loc_00254C03: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00254C15; /* jne: not equal / not zero */

loc_00254C09: ;
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_00254C50;

loc_00254C15: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00254C45; /* jne: not equal / not zero */

loc_00254C1B: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0xC) = fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xC);

loc_00254C2D: ;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax) = edi;
    eax = MEM32(esp + 0x90);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00254C45: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 2 (16-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00254C2D; /* je: equal / zero */

loc_00254C50: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0xC) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    edx = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0x14) = fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 0x54);
    MEM32(eax) = edi;
    eax = MEM32(esp + 0x90);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00254CA0
 * Original: 0x00254CA0 - 0x00254D8A (234 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254CA0(void)
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

loc_00254CA0: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    ecx = MEM32(eax * 8 + 0x616FD4);
    ecx = MEM32(ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D854);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(edx, MEM16(eax * 8 + 0x616FD0));
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax * 8 + 0x616FD8));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(esi) (16-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x54) = edi;
    MEM32(0x64D854) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00254D35; /* je: equal / zero */

loc_00254CF3: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00254D05; /* jne: not equal / not zero */

loc_00254CF9: ;
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_00254D40;

loc_00254D05: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00254D35; /* jne: not equal / not zero */

loc_00254D0B: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0xC) = fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xC);

loc_00254D1D: ;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(eax) = edi;
    eax = MEM32(esp + 0x90);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00254D35: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 2 (16-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00254D1D; /* je: equal / zero */

loc_00254D40: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0xC) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    edx = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0x14) = fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 0x54);
    MEM32(eax) = edi;
    eax = MEM32(esp + 0x90);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00254D90
 * Original: 0x00254D90 - 0x00254E1A (138 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254D90: ;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx); /* subss */
    eax = ecx + 0x6270D8;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 4); /* subss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 8); /* subss */
    edx = MEM32(eax);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, esi);
    esi = MEM32(0x64D858);
    MEM32(eax) = edx;
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(esi * 8 + 0x616FDC) = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi * 8 + 0x616FD8) = 3;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = esi;
    MEM32(0x64D854) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00254E20
 * Original: 0x00254E20 - 0x00254EAA (138 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254E20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254E20: ;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx); /* addss */
    eax = ecx + 0x6270D8;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    edx = MEM32(eax);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, esi);
    esi = MEM32(0x64D858);
    MEM32(eax) = edx;
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(esi * 8 + 0x616FDC) = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi * 8 + 0x616FD8) = 3;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = esi;
    MEM32(0x64D854) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00254EB0
 * Original: 0x00254EB0 - 0x00255012 (354 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00254EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00254EB0: ;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax * 8 + 0x616FD8));
    edx = esp + 0x40;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(edi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x00254EDFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00254ED8u); } /* indirect call */
    }

loc_00254EDF: ;
    edx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    SET_LO16(esi, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    edx = esp + 0x10;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(esi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x00254F18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00254F11u); } /* indirect call */
    }

loc_00254F18: ;
    eax = MEM32(0x64D854);
    edx = 3;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00254F88; /* jne: not equal / not zero */

loc_00254F2D: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 2 (16-bit) */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x40); /* cvtsi2ss */
    if (CMP_NE(_fa, _fb)) goto loc_00254F3F; /* jne: not equal / not zero */

loc_00254F39: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */

loc_00254F3F: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    esi = MEM32(esp + 8);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = eax + 0x6270D8;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(ecx) = esi;
    esi = MEM32(esp + 0xC);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEM32(ecx + 4) = esi;
    esi = MEM32(esp + 0x10);
    goto loc_00254FE0;

loc_00254F88: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 8); /* cvtsi2ss */
    if (CMP_NE(_fa, _fb)) goto loc_00254F9A; /* jne: not equal / not zero */

loc_00254F94: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_00254F9A: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x40); /* mulss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    esi = MEM32(esp + 0x40);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = eax + 0x6270D8;
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEM32(ecx) = esi;
    esi = MEM32(esp + 0x44);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEM32(ecx + 4) = esi;
    esi = MEM32(esp + 0x48);

loc_00254FE0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = eax;
    eax = MEM32(0x64D858);
    MEM32(eax * 8 + 0x616FDC) = ecx;
    MEM16(eax * 8 + 0x616FD8) = LO16(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x7C);
    POP32(esp, edi);
    MEM32(ecx + 8) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00255020
 * Original: 0x00255020 - 0x0025511F (255 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255020: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    edx = esp + 4;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x0025504Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255047u); } /* indirect call */
    }

loc_0025504E: ;
    edx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    SET_LO16(esi, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    edx = esp + 0x44;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(esi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x00255087u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255080u); } /* indirect call */
    }

loc_00255087: ;
    ecx = MEM32(0x64D854);
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x4C); /* cvtsi2ss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_002550A6; /* jne: not equal / not zero */

loc_002550A0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */

loc_002550A6: ;
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    eax = ecx + 0x6270D8;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    edx = MEM32(esp);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(eax) = edx;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x74);
    MEM16(ecx * 8 + 0x616FD8) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00255120
 * Original: 0x00255120 - 0x00255299 (377 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255120: ;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax * 8 + 0x616FD8));
    edx = esp + 0x40;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(edi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x0025514Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255148u); } /* indirect call */
    }

loc_0025514F: ;
    edx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    SET_LO16(esi, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    edx = esp + 0x10;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(esi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x00255188u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255181u); } /* indirect call */
    }

loc_00255188: ;
    eax = MEM32(0x64D854);
    edx = 3;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00255203; /* jne: not equal / not zero */

loc_0025519D: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 2 (16-bit) */
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 0x40); /* cvtsi2ss */
    if (CMP_NE(_fa, _fb)) goto loc_002551AF; /* jne: not equal / not zero */

loc_002551A9: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */

loc_002551AF: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 8); /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    esi = MEM32(esp + 8);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = eax + 0x6270D8;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(ecx) = esi;
    esi = MEM32(esp + 0xC);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEM32(ecx + 4) = esi;
    esi = MEM32(esp + 0x10);
    goto loc_00255267;

loc_00255203: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 8); /* cvtsi2ss */
    if (CMP_NE(_fa, _fb)) goto loc_00255215; /* jne: not equal / not zero */

loc_0025520F: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_00255215: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x40); /* mulss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    esi = MEM32(esp + 0x40);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = eax + 0x6270D8;
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEM32(ecx) = esi;
    esi = MEM32(esp + 0x44);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEM32(ecx + 4) = esi;
    esi = MEM32(esp + 0x48);

loc_00255267: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = eax;
    eax = MEM32(0x64D858);
    MEM32(eax * 8 + 0x616FDC) = ecx;
    MEM16(eax * 8 + 0x616FD8) = LO16(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x7C);
    POP32(esp, edi);
    MEM32(ecx + 8) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002552A0
 * Original: 0x002552A0 - 0x00255311 (113 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002552A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002552A0: ;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D854) = eax;
    edi = eax + 0x6270D8;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FC8));
    esi = MEM32(eax * 8 + 0x616FCC);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x002552E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002552DDu); } /* indirect call */
    }

loc_002552E4: ;
    eax = MEM32(0x64D854);
    edx = MEM32(edi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = eax;
    MEM32(esi) = edx;
    eax = MEM32(edi + 4);
    MEM32(esi + 4) = eax;
    ecx = MEM32(edi + 8);
    eax = MEM32(esp + 0x4C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 8) = ecx;
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
 * sub_00255320
 * Original: 0x00255320 - 0x002553AF (143 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255320: ;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D854) = eax;
    edi = eax + 0x6270D8;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FC8));
    esi = MEM32(eax * 8 + 0x616FCC);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x00255364u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025535Du); } /* indirect call */
    }

loc_00255364: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi); /* subss */
    eax = MEM32(0x64D854);
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 4); /* subss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 8); /* subss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = eax;
    eax = MEM32(esp + 0x44);
    POP32(esp, edi);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
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
 * sub_002553B0
 * Original: 0x002553B0 - 0x0025543F (143 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002553B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002553B0: ;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D854) = eax;
    edi = eax + 0x6270D8;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FC8));
    esi = MEM32(eax * 8 + 0x616FCC);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x002553F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002553EDu); } /* indirect call */
    }

loc_002553F4: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    eax = MEM32(0x64D854);
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEM32(0x64D854) = eax;
    eax = MEM32(esp + 0x44);
    POP32(esp, edi);
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
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
 * sub_00255440
 * Original: 0x00255440 - 0x002554EF (175 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255440: ;
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0025546D; /* jne: not equal / not zero */

loc_00255463: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_00255475;

loc_0025546D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_00255475: ;
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x002554A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025549Au); } /* indirect call */
    }

loc_002554A1: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    eax = MEM32(0x64D854);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEM32(0x64D854) = eax;
    eax = MEM32(esp + 0x4C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002554F0
 * Original: 0x002554F0 - 0x002555A7 (183 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002554F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002554F0: ;
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0025551D; /* jne: not equal / not zero */

loc_00255513: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_00255525;

loc_0025551D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_00255525: ;
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x00255551u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025554Au); } /* indirect call */
    }

loc_00255551: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xC); /* divss */
    eax = MEM32(0x64D854);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEM32(0x64D854) = eax;
    eax = MEM32(esp + 0x4C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002555B0
 * Original: 0x002555B0 - 0x00255655 (165 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002555B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002555B0: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = esp + 0x48;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x002555E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002555DAu); } /* indirect call */
    }

loc_002555E1: ;
    ebx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    esi = 0x20;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = ebx;
    ebx = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ebp = SX16(LO16(ecx));
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(ebp * 8 + 0x3418EC); PUSH32(esp, 0x0025561Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255617u); } /* indirect call */
    }

loc_0025561E: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x64D854) = MEM32(0x64D854) - esi;
    _fa = (uint32_t)(MEM32(0x64D854)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0xD;
    esi = esp + 0x58;
    edi = esp + 0x20;
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
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ebp * 8 + 0x3418EC); PUSH32(esp, 0x00255640u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255639u); } /* indirect call */
    }

loc_00255640: ;
    eax = MEM32(esp + 0x9C);
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
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00255660
 * Original: 0x00255660 - 0x00255705 (165 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255660(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255660: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = esp + 0x40;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x0025568Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255688u); } /* indirect call */
    }

loc_0025568F: ;
    esi = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = esi;
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edi = SX16(LO16(ecx));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edi * 8 + 0x3418EC); PUSH32(esp, 0x002556C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002556C1u); } /* indirect call */
    }

loc_002556C8: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x54);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = eax;
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;
    { uint32_t _icall_target = MEM32(edi * 8 + 0x3418EC); PUSH32(esp, 0x002556F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002556EBu); } /* indirect call */
    }

loc_002556F2: ;
    eax = MEM32(esp + 0x94);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00255710
 * Original: 0x00255710 - 0x002557E1 (209 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255710: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    PUSH32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = esp + 0x44;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x00255740u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255739u); } /* indirect call */
    }

loc_00255740: ;
    edi = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    SET_LO16(esi, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esp + 0x14;
    MEM32(0x64D854) = edi;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edi = SX16(LO16(esi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi * 8 + 0x3418EC); PUSH32(esp, 0x00255779u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255772u); } /* indirect call */
    }

loc_00255779: ;
    ebx = MEM32(esp + 0x20);
    eax = MEM32(0x64D854);
    edx = MEM32(esp + 0x54);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = ebx;
    ebx = eax + 0x6270D8;
    MEM32(0x64D854) = eax;
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi * 8 + 0x3418EC); PUSH32(esp, 0x002557A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002557A0u); } /* indirect call */
    }

loc_002557A7: ;
    eax = MEM32(0x64D858);
    edx = MEM32(0x64D854);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = LO16(esi);
    MEM32(eax * 8 + 0x616FDC) = ebx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x7C);
    POP32(esp, esi);
    MEM32(0x64D854) = edx;
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
 * sub_002557F0
 * Original: 0x002557F0 - 0x0025588D (157 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002557F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002557F0: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = esp + 0x40;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x0025581Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255818u); } /* indirect call */
    }

loc_0025581F: ;
    esi = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = esi;
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edi = SX16(LO16(ecx));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edi * 8 + 0x3418EC); PUSH32(esp, 0x00255858u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255851u); } /* indirect call */
    }

loc_00255858: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(esp + 0x50);
    edx = esp + 0x18;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM32(0x64D854) = eax;
    MEM32(esp + 0x20) = ecx;
    { uint32_t _icall_target = MEM32(edi * 8 + 0x3418EC); PUSH32(esp, 0x0025587Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255873u); } /* indirect call */
    }

loc_0025587A: ;
    eax = MEM32(esp + 0x94);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00255890
 * Original: 0x00255890 - 0x002558D2 (66 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255890: ;
    PUSH32(esp, 0x00255895u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00255895: ;
    edx = MEM32(0x64D854);
    eax = ~eax;
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
 * sub_002558E0
 * Original: 0x002558E0 - 0x00255934 (84 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002558E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002558E0: ;
    eax = MEM32(0x60D170);
    PUSH32(esp, esi);
    esi = MEM32(0x64D854);
    PUSH32(esp, edi);
    edi = eax;
    esi = esi + 0x6270D8;
    ecx = esp + 0xC;
    eax = SX16(LO16(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x00255905u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002558FEu); } /* indirect call */
    }

loc_00255905: ;
    eax = MEM32(0x64D858);
    edx = MEM32(0x64D854);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = LO16(edi);
    MEM32(eax * 8 + 0x616FDC) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00255940
 * Original: 0x00255940 - 0x00255993 (83 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255940: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(0x64D860);
    SET_LO16(edx, MEM16(ecx * 8 + 0x614FD0));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi) = LO16(edx);
    MEM32(0x64D860) = ecx;
    ecx = MEM32(ecx * 8 + 0x614FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = SX16(LO16(edx));
    PUSH32(esp, ecx);
    MEM32(esi + 4) = ecx;
    { uint32_t _icall_target = MEM32(edx * 8 + 0x3418EC); PUSH32(esp, 0x00255978u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255971u); } /* indirect call */
    }

loc_00255978: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    ecx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x3418EA);
    eax = MEM32(0x64D85C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D85C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002559A0
 * Original: 0x002559A0 - 0x002559F1 (81 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002559A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002559A0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(0x64D85C);
    edi = edi + 0x626CD8;
    esi = SX16(LO16(ebx));
    PUSH32(esp, edi);
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x3418EC); PUSH32(esp, 0x002559BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002559B6u); } /* indirect call */
    }

loc_002559BC: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x3418EA);
    eax = MEM32(0x64D860);
    edx = MEM32(0x64D85C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x614FDC) = edi;
    MEM16(eax * 8 + 0x614FD8) = LO16(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D85C) = edx;
    MEM32(0x64D860) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00255A00
 * Original: 0x00255A00 - 0x00255A15 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255A00: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x64D854) = MEM32(0x64D854) - 0x20;
    _fa = (uint32_t)(MEM32(0x64D854)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D858) = MEM32(0x64D858) - 1;
    _fa = (uint32_t)(MEM32(0x64D858)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00255A20
 * Original: 0x00255A20 - 0x00255A2D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255A20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255A20: ;
    PUSH32(esp, 0x00255A25u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00255A25: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00255A30
 * Original: 0x00255A30 - 0x00255A57 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255A30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255A30: ;
    PUSH32(esp, 0x00255A35u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00255A35: ;
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x64D854) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00255A60
 * Original: 0x00255A60 - 0x00255A89 (41 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255A60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255A60: ;
    PUSH32(esp, 0x00255A65u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00255A65: ;
    eax = MEM32(0x64D858);
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00255A90
 * Original: 0x00255A90 - 0x00255A9C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255A90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255A90: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0xE) = MEM8(eax + 0xE) | 2;
    _fa = (uint32_t)(MEM8(eax + 0xE)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00255AA0
 * Original: 0x00255AA0 - 0x00255AD7 (55 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255AA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255AA0: ;
    PUSH32(esp, 0x00255AA5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00255AA5: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D878);
    _fb = (uint32_t)(0xFFFFFFC0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x64D858) = MEM32(0x64D858) - 2;
    _fa = (uint32_t)(MEM32(0x64D858)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    MEM32(0x64D884) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x64D87C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00255AE0
 * Original: 0x00255AE0 - 0x00255AFE (30 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255AE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255AE0: ;
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
 * sub_00255B00
 * Original: 0x00255B00 - 0x00255B43 (67 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255B00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255B00: ;
    PUSH32(esp, 0x00255B05u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00255B05: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0xFFFFFFC0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = eax;
    eax = MEM32(0x64D880);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D884) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x64D858) = ecx;
    ecx = MEM32(0x64D878);
    MEM32(0x64D87C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00255B50
 * Original: 0x00255B50 - 0x00255BBF (111 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255B50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255B50: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    edx = MEM32(0x49A88C);
    PUSH32(esp, esi);
    esi = MEM32(0x49A890);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    MEM32(0x64D884) = eax;
    eax = edi + 0x6270D8;
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x49A888);
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
 * sub_00255BC0
 * Original: 0x00255BC0 - 0x00255BD2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255BC0: ;
    PUSH32(esp, 0x00255BC5u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00255BC5: ;
    PUSH32(esp, 0x00255BCAu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00255BCA: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00255BE0
 * Original: 0x00255BE0 - 0x00255C07 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255BE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255BE0: ;
    PUSH32(esp, 0x00255BE5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00255BE5: ;
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 4);
    MEM32(0x64D854) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00255C10
 * Original: 0x00255C10 - 0x00255C3B (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255C10: ;
    PUSH32(esp, 0x00255C15u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00255C15: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = eax;
    eax = MEM32(esp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00255C40
 * Original: 0x00255C40 - 0x00255C6C (44 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255C40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255C40: ;
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
    PUSH32(esp, 0x00255C5Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00255C5F: ;
    PUSH32(esp, 0x00255C64u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00255C64: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00255C70
 * Original: 0x00255C70 - 0x00255CAE (62 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255C70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255C70: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esp;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x00255C9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255C95u); } /* indirect call */
    }

loc_00255C9C: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x64D854) = MEM32(0x64D854) - 0x20;
    _fa = (uint32_t)(MEM32(0x64D854)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x44);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00255CB0
 * Original: 0x00255CB0 - 0x00255DFA (330 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255CB0: ;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax * 8 + 0x616FD0));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edx = esp + 0x18;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(esi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x00255CE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255CDCu); } /* indirect call */
    }

loc_00255CE3: ;
    edx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    SET_LO16(edi, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    edx = esp + 0x58;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(edi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x00255D1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255D15u); } /* indirect call */
    }

loc_00255D1C: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x64D854) = MEM32(0x64D854) - 0x20;
    _fa = (uint32_t)(MEM32(0x64D854)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    SET_LO16(ebx, MEM16(eax * 8 + 0x616FD0));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esp + 0x98;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(ebx));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x00255D50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255D49u); } /* indirect call */
    }

loc_00255D50: ;
    ecx = MEM32(0x64D854);
    xmm2.f[0] = (float)(int32_t)MEM32(esp + 0x30); /* cvtsi2ss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00255D6E; /* jne: not equal / not zero */

loc_00255D68: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_00255D6E: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 2 (16-bit) */
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 0x50); /* cvtsi2ss */
    if (CMP_NE(_fa, _fb)) goto loc_00255D80; /* jne: not equal / not zero */

loc_00255D7A: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */

loc_00255D80: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x88); /* cvtsi2ss */
    POP32(esp, edi);
    POP32(esp, esi);
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 2 (16-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00255D98; /* jne: not equal / not zero */

loc_00255D92: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */

loc_00255D98: ;
    eax = ecx + 0x6270D8;
    MEMF(esp) = xmm0.f[0]; /* movss */
    edx = MEM32(esp);
    MEM32(eax) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0xB8);
    MEM16(ecx * 8 + 0x616FD8) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00255E00
 * Original: 0x00255E00 - 0x00255EA5 (165 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00255E00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D874);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(0x64D870);
    if (CMP_EQ(_fa, _fb)) goto loc_00255E6C; /* je: equal / zero */

loc_00255E15: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255E6C; /* je: equal / zero */

loc_00255E1A: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00255E3C; /* jne: not equal / not zero */

loc_00255E24: ;
    eax = MEM32(0x3400FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255E3C; /* je: equal / zero */

loc_00255E2D: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255E3C; /* je: equal / zero */

loc_00255E34: ;
    MEM32(esp + 8) = 0xFFFFFFFFu;

loc_00255E3C: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D888);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(0x64D888) = ebx;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esp + 0x14;
    PUSH32(esp, 0x00255E5Au); RECOMP_ABI_CALL(0x000F8670u, sub_000F8670); /* call 0x000F8670 */

loc_00255E5A: ;
    ecx = MEM32(0x64D888);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D888) = ecx;
    POP32(esp, ebx);

loc_00255E6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    MEM32(0x64D870) = esi;
    POP32(esp, esi);
    MEM32(0x64D874) = ebp;
    POP32(esp, ebp);
    if (CMP_AE(_fa, _fb)) goto loc_00255E9E; /* jae: above or equal (unsigned >=) */

loc_00255E7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00255E86; /* jne: not equal / not zero */

loc_00255E84: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00255E86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00255E8D; /* jne: not equal / not zero */

loc_00255E8B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00255E8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00255E94; /* jne: not equal / not zero */

loc_00255E92: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00255E94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    eax = 5;
    if (CMP_EQ(_fa, _fb)) goto loc_00255EA3; /* je: equal / zero */

loc_00255E9E: ;
    eax = 0x3E8;

loc_00255EA3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00255EB0
 * Original: 0x00255EB0 - 0x00255F52 (162 bytes, 49 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255EB0: ;
    eax = MEM32(0x64D8A8);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00255EDA; /* je: equal / zero */

loc_00255EBC: ;
    PUSH32(esp, 0x3327FC);
    PUSH32(esp, 0x33271C);
    PUSH32(esp, 0x52);
    PUSH32(esp, 0x3327BC);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x00255ED7u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_00255ED7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00255EDA: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esp;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x00255F03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255EFCu); } /* indirect call */
    }

loc_00255F03: ;
    edx = MEM32(0x64D854);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = edx;
    PUSH32(esp, 0x00255F1Eu); RECOMP_ABI_CALL(0x00255E00u, sub_00255E00); /* call 0x00255E00 */

loc_00255F1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00255F47; /* jae: above or equal (unsigned >=) */

loc_00255F23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00255F2C; /* jne: not equal / not zero */

loc_00255F28: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00255F2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00255F35; /* jne: not equal / not zero */

loc_00255F31: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00255F35: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00255F3E; /* jne: not equal / not zero */

loc_00255F3A: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00255F3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00255F47; /* jne: not equal / not zero */

loc_00255F43: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00255F47: ;
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00255F60
 * Original: 0x00255F60 - 0x00255F93 (51 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00255F60: ;
    edx = MEM32(0x64D880);
    eax = MEM32(0x64D87C);
    ecx = MEM32(0x64D878);
    MEM32(0x64D884) = edx;
    edx = MEM32(esp + 4);
    eax = MEM32(eax + edx * 4 + 0x18);
    edx = MEM32(esp + 8);
    MEM32(0x64D87C) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00255FA0
 * Original: 0x00255FA0 - 0x002560A0 (256 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00255FA0(void)
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

loc_00255FA0: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = esp + 0x50;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x00255FD1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00255FCAu); } /* indirect call */
    }

loc_00255FD1: ;
    edx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    SET_LO16(esi, MEM16(eax * 8 + 0x616FD0));
    edi = MEM32(esp + 0x58);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    edx = esp + 0x20;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(esi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x0025600Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256007u); } /* indirect call */
    }

loc_0025600E: ;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00256035; /* jne: not equal / not zero */

loc_0025601F: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = ecx;

loc_00256035: ;
    esi = MEM32(0x64D87C);
    edx = MEM32(0x64D878);
    ebx = MEM32(esp + 0x18);
    ebp = MEM32(esi + ebx * 4 + 0x18);
    ecx = MEM32(0x64D880);
    MEM32(0x64D87C) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(0x64D884) = ecx;
    ecx = eax + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x84);
    POP32(esp, ebp);
    MEM32(ecx) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002560A0
 * Original: 0x002560A0 - 0x002560EB (75 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002560A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002560A0: ;
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D87C);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D880);
    MEM32(0x64D884) = ecx;
    _fa = (uint32_t)(MEM32(eax + esi * 4 + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + esi * 4 + 0x18), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002560EA; /* je: equal / zero */

loc_002560C3: ;
    MEM32(eax + esi * 4 + 0x18) = edx;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + esi * 4 + 4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002560EA; /* jne: not equal / not zero */

loc_002560D1: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002560EA; /* je: equal / zero */

loc_002560DB: ;
    ecx = MEM32(edx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002560EA; /* je: equal / zero */

loc_002560E2: ;
    MEM32(eax + esi * 4 + 4) = 0xFFFFFFFFu;

loc_002560EA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002560F0
 * Original: 0x002560F0 - 0x002561A1 (177 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002560F0(void)
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

loc_002560F0: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    edx = esp + 0x44;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x0025611Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256117u); } /* indirect call */
    }

loc_0025611E: ;
    edx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    SET_LO16(esi, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    edx = esp + 0x14;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(esi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x00256157u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256150u); } /* indirect call */
    }

loc_00256157: ;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    MEM32(0x64D854) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00256185; /* jne: not equal / not zero */

loc_0025616F: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 4) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 4);
    MEM32(esp + 0xC) = eax;

loc_00256185: ;
    edx = MEM32(esp + 0x44);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0x00256192u); RECOMP_ABI_CALL(0x002560A0u, sub_002560A0); /* call 0x002560A0 */

loc_00256192: ;
    eax = MEM32(esp + 0x80);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002561B0
 * Original: 0x002561B0 - 0x002561D8 (40 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002561B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002561B0: ;
    eax = MEM32(0x64D87C);
    edx = MEM32(0x64D878);
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D880);
    MEM32(0x64D884) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + ecx * 4 + 0x18) = edx;
    MEM32(eax + ecx * 4 + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_002561E0
 * Original: 0x002561E0 - 0x0025626F (143 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002561E0(void)
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

loc_002561E0: ;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax * 8 + 0x616FD8));
    edx = esp + 0xC;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(esi));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x0025620Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256207u); } /* indirect call */
    }

loc_0025620E: ;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 2 (16-bit) */
    MEM32(0x64D854) = ecx;
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00256239; /* jne: not equal / not zero */

loc_00256227: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp);
    goto loc_0025623D;

loc_00256239: ;
    ecx = MEM32(esp + 8);

loc_0025623D: ;
    eax = MEM32(0x64D87C);
    edx = MEM32(0x64D878);
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D880);
    MEM32(0x64D884) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + ecx * 4 + 0x18) = edx;
    MEM32(eax + ecx * 4 + 4) = edx;
    eax = MEM32(esp + 0x44);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00256270
 * Original: 0x00256270 - 0x002562AF (63 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256270: ;
    eax = MEM32(0x64D878);
    ecx = MEM32(0x64D864);
    PUSH32(esp, esi);
    _fa = (uint32_t)(MEM32(eax + ecx * 4 + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx * 4 + 0x18), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002562AD; /* je: equal / zero */

loc_00256282: ;
    MEM32(eax + ecx * 4 + 0x18) = edx;
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax + ecx * 4 + 4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_002562AD; /* jne: not equal / not zero */

loc_00256290: ;
    edx = MEM32(0x3400FC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002562AD; /* je: equal / zero */

loc_0025629A: ;
    edx = MEM32(eax + ecx * 4 + 0x18);
    esi = MEM32(edx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002562AD; /* je: equal / zero */

loc_002562A5: ;
    MEM32(eax + ecx * 4 + 4) = 0xFFFFFFFFu;

loc_002562AD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002562B0
 * Original: 0x002562B0 - 0x0025633C (140 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002562B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002562B0: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    edx = esp + 4;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x002562DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002562D7u); } /* indirect call */
    }

loc_002562DE: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D864);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = eax;
    eax = MEM32(0x64D878);
    esi = MEM32(eax + ecx * 4 + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00256330; /* je: equal / zero */

loc_00256305: ;
    MEM32(eax + ecx * 4 + 0x18) = edx;
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax + ecx * 4 + 4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00256330; /* jne: not equal / not zero */

loc_00256313: ;
    edx = MEM32(0x3400FC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00256330; /* je: equal / zero */

loc_0025631D: ;
    edx = MEM32(eax + ecx * 4 + 0x18);
    esi = MEM32(edx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00256330; /* je: equal / zero */

loc_00256328: ;
    MEM32(eax + ecx * 4 + 4) = 0xFFFFFFFFu;

loc_00256330: ;
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
 * sub_00256340
 * Original: 0x00256340 - 0x00256360 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256340: ;
    PUSH32(esp, 0x00256345u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00256345: ;
    ecx = MEM32(0x64D878);
    edx = MEM32(ecx + eax * 4 + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00256355u); RECOMP_ABI_CALL(0x00256B20u, sub_00256B20); /* call 0x00256B20 */

loc_00256355: ;
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
 * sub_00256360
 * Original: 0x00256360 - 0x00256380 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256360: ;
    eax = MEM32(0x64D878);
    ecx = MEM32(0x64D864);
    edx = MEM32(eax + ecx * 4 + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00256375u); RECOMP_ABI_CALL(0x00256B20u, sub_00256B20); /* call 0x00256B20 */

loc_00256375: ;
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
 * sub_00256380
 * Original: 0x00256380 - 0x002563D0 (80 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256380: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(0x64D864);
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
 * sub_002563D0
 * Original: 0x002563D0 - 0x00256421 (81 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002563D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002563D0: ;
    _fa = (uint32_t)(MEM32(0x64D870)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D870), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025641B; /* je: equal / zero */

loc_002563D8: ;
    ecx = MEM32(0x64D878);
    edx = MEM32(0x64D864);
    MEM32(ecx + edx * 4 + 0x18) = eax;
    MEM32(0x64D870) = eax;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + edx * 4 + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00256415; /* jne: not equal / not zero */

loc_002563F7: ;
    eax = MEM32(0x3400FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00256415; /* je: equal / zero */

loc_00256400: ;
    eax = MEM32(ecx + edx * 4 + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00256415; /* je: equal / zero */

loc_0025640D: ;
    MEM32(ecx + edx * 4 + 4) = 0xFFFFFFFFu;

loc_00256415: ;
    eax = 5;
    esp += 4; return; /* ret */

loc_0025641B: ;
    eax = 0x3E8;
    esp += 4; return; /* ret */

}

/**
 * sub_00256430
 * Original: 0x00256430 - 0x002564B3 (131 bytes, 33 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256430: ;
    eax = MEM32(0x64D8A8);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025645D; /* je: equal / zero */

loc_0025643C: ;
    PUSH32(esp, 0x332778);
    PUSH32(esp, 0x33271C);
    PUSH32(esp, 0x14D);
    PUSH32(esp, 0x3327BC);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0025645Au); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0025645A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0025645D: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esp;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x00256486u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025647Fu); } /* indirect call */
    }

loc_00256486: ;
    edx = MEM32(0x64D854);
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = edx;
    PUSH32(esp, 0x002564A1u); RECOMP_ABI_CALL(0x002563D0u, sub_002563D0); /* call 0x002563D0 */

loc_002564A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002564AF; /* jne: not equal / not zero */

loc_002564A8: ;
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002564AF: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002564C0
 * Original: 0x002564C0 - 0x002564DD (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002564C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002564C0: ;
    eax = MEM32(0x64D878);
    ecx = MEM32(0x64D864);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + ecx * 4 + 0x18) = edx;
    MEM32(eax + ecx * 4 + 4) = edx;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002564E0
 * Original: 0x002564E0 - 0x00256501 (33 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002564E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002564E0: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002564FE; /* je: equal / zero */

loc_002564E7: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002564FE; /* je: equal / zero */

loc_002564EE: ;
    edx = MEM32(eax);
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

loc_002564FE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00256510
 * Original: 0x00256510 - 0x0025658F (127 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00256510: ;
    edx = MEM32(0x64D878);
    ecx = MEM32(0x64D880);
    eax = MEM32(0x64D884);
    eax = MEM32(eax + 0x18);
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D854);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(0x20));
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0025655B; /* je: equal / zero */

loc_00256545: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0025655B; /* je: equal / zero */

loc_0025654C: ;
    eax = MEM32(eax);
    _fb = (uint32_t)(MEM32(edx + 0x6270D8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(edx + 0x6270D8)));
    eax = eax - MEM32(edx + 0x6270D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0025655D;

loc_0025655B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0025655D: ;
    esi = edx + 0x6270D8;
    MEM32(esi) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x20)) >> 32) & 1);
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x616FDC) = esi;
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00256590
 * Original: 0x00256590 - 0x002565F0 (96 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256590(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256590: ;
    ecx = MEM32(0x64D884);
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(0x64D878);
    ecx = ZX8(MEM8(ecx + 0x2C));
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
 * sub_002565F0
 * Original: 0x002565F0 - 0x00256630 (64 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002565F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002565F0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00256612u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00256612: ;
    edx = MEM32(esi + 0x18);
    eax = ZX8(LO8(eax));
    MEM8(edx + 0x2C) = LO8(eax);
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00256630
 * Original: 0x00256630 - 0x00256662 (50 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256630: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00256652u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00256652: ;
    MEM32(eax * 4 + 0x614FCC) = esi;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00256670
 * Original: 0x00256670 - 0x00256688 (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256670: ;
    PUSH32(esp, 0x00256675u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00256675: ;
    MEM32(eax * 4 + 0x614FCC) = 0;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00256690
 * Original: 0x00256690 - 0x002566AD (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256690(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256690: ;
    PUSH32(esp, 0x00256695u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00256695: ;
    eax = MEM32(eax * 4 + 0x614FCC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002566A2u); RECOMP_ABI_CALL(0x001080C0u, sub_001080C0); /* call 0x001080C0 */

loc_002566A2: ;
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
 * sub_002566B0
 * Original: 0x002566B0 - 0x0025675C (172 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002566B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002566B0: ;
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002566E6; /* jne: not equal / not zero */

loc_002566BE: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002566CC; /* jne: not equal / not zero */

loc_002566C7: ;
    PUSH32(esp, 0x002566CCu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_002566CC: ;
    edx = 0xC;
    ecx = eax;
    PUSH32(esp, 0x002566D8u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_002566D8: ;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x48) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00256734;

loc_002566E6: ;
    edx = MEM32(esi + 0x48);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00256701; /* jle: less or equal (signed <=) */

loc_002566EF: ;
    PUSH32(esp, edi);

loc_002566F0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00256700; /* je: equal / zero */

loc_002566F5: ;
    edi = MEM32(esi + 0x48);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002566F0; /* jl: less (signed <) */

loc_00256700: ;
    POP32(esp, edi);

loc_00256701: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00256734; /* jne: not equal / not zero */

loc_00256705: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00256713; /* jne: not equal / not zero */

loc_0025670E: ;
    PUSH32(esp, 0x00256713u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00256713: ;
    edx = MEM32(esi + 0x48);
    ecx = MEM32(esi + 0x4C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + edx * 2;
    PUSH32(esp, ecx);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    PUSH32(esp, 0x00256728u); RECOMP_ABI_CALL(0x00013820u, sub_00013820); /* call 0x00013820 */

loc_00256728: ;
    MEM32(esi + 0x4C) = eax;
    eax = MEM32(esi + 0x48);
    edx = eax + 1;
    MEM32(esi + 0x48) = edx;

loc_00256734: ;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(esp + 0xC);
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + eax + 4) = edx;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(esp + 0x10);
    MEM32(eax + ecx) = edx;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(esp + 8);
    MEM32(ecx + eax + 8) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00256760
 * Original: 0x00256760 - 0x002567F3 (147 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256760: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D858);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D87C) = ecx;
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD8));
    edx = SX16(LO16(ecx));
    ecx = esp + 4;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x3418EC); PUSH32(esp, 0x002567AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002567A3u); } /* indirect call */
    }

loc_002567AA: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x64D854) = MEM32(0x64D854) - 0x20;
    _fa = (uint32_t)(MEM32(0x64D854)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x002567B6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002567B6: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = edx;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x6270D8);
    PUSH32(esp, esi);
    MEM32(0x64D854) = ecx;
    PUSH32(esp, 0x002567E4u); RECOMP_ABI_CALL(0x002566B0u, sub_002566B0); /* call 0x002566B0 */

loc_002567E4: ;
    eax = MEM32(esp + 0x54);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_00256800
 * Original: 0x00256800 - 0x00256846 (70 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00256800: ;
    ecx = MEM32(eax + 0x18);
    eax = MEM32(ecx + 4);
    edx = MEM32(eax + 0x48);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_00256844; /* jle: less or equal (signed <=) */

loc_00256814: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x4C);
    eax = esi;
    /* nop */

loc_00256820: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025682E; /* jne: not equal / not zero */

loc_00256825: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025682E; /* jne: not equal / not zero */

loc_00256829: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00256839; /* je: equal / zero */

loc_0025682E: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00256820; /* jl: less (signed <) */

loc_00256836: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00256839: ;
    edx = ecx + ecx * 2;
    MEM32(esi + edx * 4) = 0;
    POP32(esp, esi);

loc_00256844: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00256845
 * Original: 0x00256845 - 0x00256846 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256845(void)
{

loc_00256845: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00256850
 * Original: 0x00256850 - 0x002568E7 (151 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256850(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256850: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D858);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D87C) = ecx;
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD8));
    edx = SX16(LO16(ecx));
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    MEM32(0x64D858) = eax;
    eax = MEM32(eax * 8 + 0x616FDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x3418EC); PUSH32(esp, 0x0025689Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256895u); } /* indirect call */
    }

loc_0025689C: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x64D854) = MEM32(0x64D854) - 0x20;
    _fa = (uint32_t)(MEM32(0x64D854)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x002568A8u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002568A8: ;
    ecx = MEM32(0x64D854);
    edi = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = eax;
    eax = MEM32(ecx + 0x6270D8);
    MEM32(0x64D858) = edi;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    MEM32(0x64D854) = ecx;
    PUSH32(esp, 0x002568D6u); RECOMP_ABI_CALL(0x00256800u, sub_00256800); /* call 0x00256800 */

loc_002568D6: ;
    eax = MEM32(esp + 0x54);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_002568F0
 * Original: 0x002568F0 - 0x00256925 (53 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002568F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002568F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x34AC3C);
    PUSH32(esp, 1);
    MEM32(0x64D850) = eax;
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = eax;
    MEM32(0x64D85C) = eax;
    MEM32(0x64D860) = eax;
    PUSH32(esp, 0x00256919u); RECOMP_ABI_CALL(0x000F8F90u, sub_000F8F90); /* call 0x000F8F90 */

loc_00256919: ;
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
 * sub_00256930
 * Original: 0x00256930 - 0x00256967 (55 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256930: ;
    eax = MEM32(0x64D884);
    eax = MEM32(eax + 0x18);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    PUSH32(esp, 0);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x0025695Bu); RECOMP_ABI_CALL(0x000F8F90u, sub_000F8F90); /* call 0x000F8F90 */

loc_0025695B: ;
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
 * sub_00256970
 * Original: 0x00256970 - 0x002569DC (108 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256970: ;
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    MEM32(0x64D87C) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(0x64D8B4));
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = MEM32(0x64D854);
    MEM32(0x64D884) = ecx;
    ecx = esi + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ~eax;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x64D854) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002569E0
 * Original: 0x002569E0 - 0x002569FD (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002569E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002569E0: ;
    ecx = ZX8(MEM8(0x64D8B4));
    if (2) _cf = (int)(((eax) >> ((2) - 1)) & 1);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 5;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = edx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00256A00
 * Original: 0x00256A00 - 0x00256A76 (118 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00256A00: ;
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D884);
    MEM32(0x64D87C) = edx;
    edx = ZX8(MEM8(0x64D8B4));
    if (2) _cf = (int)(((eax) >> ((2) - 1)) & 1);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = 5;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    ecx = MEM32(0x64D880);
    esi = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    MEM32(0x64D884) = ecx;
    ecx = esi + 0x6270D8;
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    POP32(esp, edi);
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x20)) >> 32) & 1);
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x64D854) = esi;
    MEM32(ecx) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00256A80
 * Original: 0x00256A80 - 0x00256A9D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00256A80: ;
    ecx = ZX8(MEM8(0x64D8B4));
    if (2) _cf = (int)(((eax) >> ((2) - 1)) & 1);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xB;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = edx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00256AA0
 * Original: 0x00256AA0 - 0x00256B16 (118 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256AA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00256AA0: ;
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D884);
    MEM32(0x64D87C) = edx;
    edx = ZX8(MEM8(0x64D8B4));
    if (2) _cf = (int)(((eax) >> ((2) - 1)) & 1);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = 0xB;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    ecx = MEM32(0x64D880);
    esi = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    MEM32(0x64D884) = ecx;
    ecx = esi + 0x6270D8;
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    POP32(esp, edi);
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x20)) >> 32) & 1);
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x64D854) = esi;
    MEM32(ecx) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00256B20
 * Original: 0x00256B20 - 0x00256B76 (86 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256B20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256B20: ;
    SET_LO16(eax, MEM16(0x60D17E));
    PUSH32(esp, esi);
    esi = MEM32(0x64D854);
    PUSH32(esp, edi);
    SET_LO16(edi, LO16(eax));
    esi = esi + 0x6270D8;
    ecx = esp + 0xC;
    eax = SX16(LO16(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x00256B47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00256B40u); } /* indirect call */
    }

loc_00256B47: ;
    eax = MEM32(0x64D858);
    edx = MEM32(0x64D854);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = LO16(edi);
    MEM32(eax * 8 + 0x616FDC) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00256B80
 * Original: 0x00256B80 - 0x00256BE1 (97 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256B80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x332880);
    PUSH32(esp, 0x332874);
    MEM32(0x64D92C) = 0;
    PUSH32(esp, 0x00256B9Au); RECOMP_ABI_CALL(0x0028BC0Au, sub_0028BC0A); /* call 0x0028BC0A */

loc_00256B9A: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00256BCF; /* je: equal / zero */

loc_00256BA3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, 0x64D92C);
    PUSH32(esp, 0x00256BB2u); RECOMP_ABI_CALL(0x002944A4u, sub_002944A4); /* call 0x002944A4 */

loc_00256BB2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x208);
    PUSH32(esp, 0x64CA50);
    PUSH32(esp, 0x00256BC4u); RECOMP_ABI_CALL(0x002944A4u, sub_002944A4); /* call 0x002944A4 */

loc_00256BC4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00256BCAu); RECOMP_ABI_CALL(0x0028BCEBu, sub_0028BCEB); /* call 0x0028BCEB */

loc_00256BCA: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00256BCF: ;
    PUSH32(esp, edi);
    ecx = 0x82;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x64CA50;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00256BF0
 * Original: 0x00256BF0 - 0x00256C30 (64 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00256BF0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00256C01; /* ja: above (unsigned >) */

loc_00256BF5: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x256C30); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00256BFCu) goto loc_00256BFC;
    if (_jt == 0x00256C04u) goto loc_00256C04;
    if (_jt == 0x00256C0Au) goto loc_00256C0A;
    if (_jt == 0x00256C14u) goto loc_00256C14;
    if (_jt == 0x00256C1Eu) goto loc_00256C1E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00256BFC: ;
    PUSH32(esp, 0x00256C01u); RECOMP_ABI_CALL(0x00256B80u, sub_00256B80); /* call 0x00256B80 */

loc_00256C01: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00256C04: ;
    eax = MEM32(0x64D92C);
    esp += 4; return; /* ret */

loc_00256C0A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    eax = MEM32(eax + 0x64CA7C);
    esp += 4; return; /* ret */

loc_00256C14: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    eax = MEM32(eax + 0x64CA80);
    esp += 4; return; /* ret */

loc_00256C1E: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    _fb = (uint32_t)(0x64CA58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x64CA58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256C2Cu); RECOMP_ABI_CALL(0x002942D3u, sub_002942D3); /* call 0x002942D3 */

loc_00256C2C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00256C50
 * Original: 0x00256C50 - 0x00256CA0 (80 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256C50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256C50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00256C56u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00256C56: ;
    esi = eax;
    PUSH32(esp, 0x00256C5Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00256C5D: ;
    ecx = esi;
    PUSH32(esp, 0x00256C64u); RECOMP_ABI_CALL(0x00256BF0u, sub_00256BF0); /* call 0x00256BF0 */

loc_00256C64: ;
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
 * sub_00256CA0
 * Original: 0x00256CA0 - 0x00256D06 (102 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00256CA0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    MEM8(0x650B00) = 0;
    if (CMP_A(_fa, _fb)) goto loc_00256CB8; /* ja: above (unsigned >) */

loc_00256CAC: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x256D08); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00256CB3u) goto loc_00256CB3;
    if (_jt == 0x00256CBEu) goto loc_00256CBE;
    if (_jt == 0x00256CC6u) goto loc_00256CC6;
    if (_jt == 0x00256CD2u) goto loc_00256CD2;
    if (_jt == 0x00256CF4u) goto loc_00256CF4;
    if (_jt == 0x00256CFDu) goto loc_00256CFD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00256CB3: ;
    PUSH32(esp, 0x00256CB8u); RECOMP_ABI_CALL(0x00256B80u, sub_00256B80); /* call 0x00256B80 */

loc_00256CB8: ;
    eax = 0x650B00;
    esp += 4; return; /* ret */

loc_00256CBE: ;
    eax = MEM32(0x64D92C);
    PUSH32(esp, eax);
    goto loc_00256CDC;

loc_00256CC6: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    ecx = MEM32(eax + 0x64CA7C);
    PUSH32(esp, ecx);
    goto loc_00256CDC;

loc_00256CD2: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    edx = MEM32(eax + 0x64CA80);
    PUSH32(esp, edx);

loc_00256CDC: ;
    PUSH32(esp, 0x33286C);
    PUSH32(esp, 0x650B00);
    PUSH32(esp, 0x00256CEBu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_00256CEB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x650B00;
    esp += 4; return; /* ret */

loc_00256CF4: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    _fb = (uint32_t)(0x64CA58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x64CA58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00256CFD: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    _fb = (uint32_t)(0x64CA60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x64CA60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00256D06
 * Original: 0x00256D06 - 0x00256D46 (64 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256D06(void)
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

loc_00256D06: ;
    edi = edi;
    SET_LO8(ebx, 0x6C);
    eax = eax & 0x256CBE00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(edx, HI8(edx) + LO8(eax));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("insb byte ptr es:[edi], dx", 0x00256D11u); /* TODO: insb byte ptr es:[edi], dx */
    eax = eax & 0x256CD200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + HI8(edx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("insb byte ptr es:[edi], dx", 0x00256D19u); /* TODO: insb byte ptr es:[edi], dx */
    eax = eax & 0x256CFD00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + -24) = MEM8(esi + -24) + LO8(edx);
    _fa = (uint32_t)(MEM8(esi + -24)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC((double)SMEM32(edx) / fp_top()); /* fidivr dword ptr [edx] */
    RECOMP_UNIMPL("ljmp 0x3ad3:0xe8f08bff", 0x00256D24u); /* TODO: ljmp 0x3ad3:0xe8f08bff */
    RECOMP_UNIMPL("ljmp 0xff6c:0xe8ce8bff", 0x00256D2Bu); /* TODO: ljmp 0xff6c:0xe8ce8bff */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00256D20
 * Original: 0x00256D20 - 0x00256D46 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256D20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00256D26u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00256D26: ;
    esi = eax;
    PUSH32(esp, 0x00256D2Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00256D2D: ;
    ecx = esi;
    PUSH32(esp, 0x00256D34u); RECOMP_ABI_CALL(0x00256CA0u, sub_00256CA0); /* call 0x00256CA0 */

loc_00256D34: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00256D3Au); RECOMP_ABI_CALL(0x001108A0u, sub_001108A0); /* call 0x001108A0 */

loc_00256D3A: ;
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
 * sub_00256D50
 * Original: 0x00256D50 - 0x00256E51 (257 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00256D50: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x34AC3C);
    ecx = MEM32(eax);
    edx = MEM32(0x64D86C);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D868);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    MEM32(ebx + 8) = edx;
    ecx = MEM32(esi + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x1C) = esi;
    ebp = 0xC;
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00256E4A; /* jbe: below or equal (unsigned <=) */

loc_00256D88: ;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, edi);
    /* nop */

loc_00256D90: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esp + 0x10);
    edx = (uint32_t)(int32_t)SMEM16(ecx + eax + 8);
    edi = MEM32(ecx + eax);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(int32_t)SMEM16(edx * 8 + 0x3418EA);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx + 4);
    edx = eax;
    edx = edx >> 0x1E;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(ecx + 0xA)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xA), 0x10 (8-bit) */
    MEM32(esp + 0x18) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00256E2A; /* je: equal / zero */

loc_00256DBF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00256DF9; /* je: equal / zero */

loc_00256DC3: ;
    esi = MEM32(0x34AC3C);
    esi = MEM32(esi + 0x44);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebx + ebp;
    ecx = edx * 4;
    ebx = ecx;
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
    ecx = ebx;
    ebx = MEM32(0x64D868);
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
    edi = MEM32(esp + 0x18);
    ecx = edx * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00256DF9: ;
    esi = MEM32(0x34AC3C);
    esi = MEM32(esi + 0x44);
    eax = eax & 0x3FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x1C));
    esi = esi + edx * 4;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebx + ebp;
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
    esi = MEM32(esp + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00256E2A: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edx;
    if (CMP_B(_fa, _fb)) goto loc_00256D90; /* jb: below (unsigned <) */

loc_00256E49: ;
    POP32(esp, edi);

loc_00256E4A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00256E60
 * Original: 0x00256E60 - 0x00256E6D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256E60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256E60: ;
    PUSH32(esp, 0x00256E65u); RECOMP_ABI_CALL(0x00256D50u, sub_00256D50); /* call 0x00256D50 */

loc_00256E65: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00256E70
 * Original: 0x00256E70 - 0x00256F61 (241 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00256E70: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x34AC3C);
    ecx = MEM32(eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = MEM32(esi + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = esi;
    ebp = 0xC;
    MEM32(esp + 8) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_00256F5B; /* jbe: below or equal (unsigned <=) */

loc_00256E98: ;
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, edi);
    edi = edi;

loc_00256EA0: ;
    edx = MEM32(esi + 8);
    eax = (uint32_t)(int32_t)SMEM16(ecx + edx + 8);
    ebx = MEM32(ecx + edx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(int32_t)SMEM16(eax * 8 + 0x3418EA);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x1C) = edx;
    edx = eax;
    edx = edx >> 0x1E;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(ecx + 0xA)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xA), 0x10 (8-bit) */
    MEM32(esp + 0x18) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_00256F3A; /* je: equal / zero */

loc_00256ECB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00256F04; /* je: equal / zero */

loc_00256ECF: ;
    edi = MEM32(0x34AC3C);
    edi = MEM32(edi + 0x44);
    esi = MEM32(0x64D868);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx * 4;
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
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
    ecx = ebx;
    ebx = MEM32(esp + 0x18);
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
    ecx = edx * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00256F04: ;
    edi = MEM32(0x34AC3C);
    edi = MEM32(edi + 0x44);
    esi = MEM32(0x64D868);
    eax = eax & 0x3FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x1C));
    edi = edi + edx * 4;
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
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
    esi = MEM32(esp + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00256F3A: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_00256EA0; /* jb: below (unsigned <) */

loc_00256F59: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00256F5B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00256F70
 * Original: 0x00256F70 - 0x00256F7D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256F70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00256F70: ;
    PUSH32(esp, 0x00256F75u); RECOMP_ABI_CALL(0x00256E70u, sub_00256E70); /* call 0x00256E70 */

loc_00256F75: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00256F80
 * Original: 0x00256F80 - 0x002571AF (559 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00256F80(void)
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

loc_00256F80: ;
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x64D354)); /* fld float */
    eax = MEM32(0x336F0C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x64D90C)); /* fsub dword ptr [0x64d90c] */
    PUSH32(esp, ebx);
    MEM32(esp + 0x98) = eax;
    PUSH32(esp, ebp);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3338CC)); /* fmul dword ptr [0x3338cc] */
    PUSH32(esp, 0x00256FABu); RECOMP_ABI_CALL(0x0028AF78u, sub_0028AF78); /* call 0x0028AF78 */

loc_00256FAB: ;
    ecx = MEM32(0x64D868);
    ebp = MEM32(esp + 0xA4);
    edx = MEM32(esp + 0xA8);
    PUSH32(esp, ebp);
    MEM32(esp + 0x1C) = eax;
    MEM32(ecx + 4) = eax;
    eax = esp + 0x20;
    PUSH32(esp, 0x332860);
    PUSH32(esp, eax);
    MEM32(ecx) = edx;
    MEM32(esp + 0x14) = 0xC;
    PUSH32(esp, 0x00256FE0u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_00256FE0: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x332870);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00256FEFu); RECOMP_ABI_CALL(0x0028BC0Au, sub_0028BC0A); /* call 0x0028BC0A */

loc_00256FEF: ;
    ebx = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025719A; /* je: equal / zero */

loc_00256FFC: ;
    edx = MEM32(0x64D868);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025700Fu); RECOMP_ABI_CALL(0x00294607u, sub_00294607); /* call 0x00294607 */

loc_0025700F: ;
    eax = MEM32(0x34AC3C);
    ecx = MEM32(eax);
    edi = MEM32(ecx);
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_00257099; /* jbe: below or equal (unsigned <=) */

loc_0025702A: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00257030: ;
    edx = MEM32(edi + 8);
    eax = MEM32(edx + ebp + 4);
    ecx = edx + ebp;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 8);
    edx = (uint32_t)(int32_t)SMEM16(edx * 8 + 0x3418EA);
    esi = eax;
    esi = esi & 0x3FFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    eax = eax >> 0x1E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx + eax * 4;
    _fa = (uint32_t)(MEM8(ecx + 0xA)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xA), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025707F; /* je: equal / zero */

loc_0025705D: ;
    eax = MEM32(0x64D868);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00257072u); RECOMP_ABI_CALL(0x00294607u, sub_00294607); /* call 0x00294607 */

loc_00257072: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;

loc_0025707F: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(edi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00257030; /* jb: below (unsigned <) */

loc_00257092: ;
    ebp = MEM32(esp + 0xAC);

loc_00257099: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0025709Fu); RECOMP_ABI_CALL(0x0028BCEBu, sub_0028BCEB); /* call 0x0028BCEB */

loc_0025709F: ;
    eax = MEM32(0x64D92C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002570CC; /* jbe: below or equal (unsigned <=) */

loc_002570AD: ;
    esi = 0x64CA58;

loc_002570B2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002570B8u); RECOMP_ABI_CALL(0x002942D3u, sub_002942D3); /* call 0x002942D3 */

loc_002570B8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002570CC; /* je: equal / zero */

loc_002570BF: ;
    eax = MEM32(0x64D92C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x34;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002570B2; /* jb: below (unsigned <) */

loc_002570CC: ;
    eax = MEM32(0x64D92C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002570DB; /* jne: not equal / not zero */

loc_002570D5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D92C) = eax;

loc_002570DB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00257198; /* jge: greater or equal (signed >=) */

loc_002570E4: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002570EEu); RECOMP_ABI_CALL(0x0028C2DEu, sub_0028C2DE); /* call 0x0028C2DE */

loc_002570EE: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002570F8u); RECOMP_ABI_CALL(0x00294653u, sub_00294653); /* call 0x00294653 */

loc_002570F8: ;
    edi = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x34);
    PUSH32(esp, ebx);
    ecx = edi + 0x64CA58;
    PUSH32(esp, 0x332858);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x00257111u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_00257111: ;
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x76C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x76C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = edi + 0x64CA60;
    PUSH32(esp, 0x332838);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025713Fu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_0025713F: ;
    eax = MEM32(esp + 0x54);
    ecx = MEM32(esp + 0xE4);
    PUSH32(esp, 0x332870);
    PUSH32(esp, 0x332874);
    MEM32(edi + 0x64CA7C) = eax;
    MEM32(edi + 0x64CA80) = ecx;
    PUSH32(esp, 0x00257165u); RECOMP_ABI_CALL(0x0028BC0Au, sub_0028BC0A); /* call 0x0028BC0A */

loc_00257165: ;
    esi = eax;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257198; /* je: equal / zero */

loc_0025716E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, 0x64D92C);
    PUSH32(esp, 0x0025717Du); RECOMP_ABI_CALL(0x00294607u, sub_00294607); /* call 0x00294607 */

loc_0025717D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x208);
    PUSH32(esp, 0x64CA50);
    PUSH32(esp, 0x0025718Fu); RECOMP_ABI_CALL(0x00294607u, sub_00294607); /* call 0x00294607 */

loc_0025718F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00257195u); RECOMP_ABI_CALL(0x0028BCEBu, sub_0028BCEB); /* call 0x0028BCEB */

loc_00257195: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00257198: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0025719A: ;
    ecx = MEM32(esp + 0x9C);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x002571A8u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_002571A8: ;
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002571B0
 * Original: 0x002571B0 - 0x002571D0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002571B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002571B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002571B6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002571B6: ;
    esi = eax;
    PUSH32(esp, 0x002571BDu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002571BD: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002571C4u); RECOMP_ABI_CALL(0x00256F80u, sub_00256F80); /* call 0x00256F80 */

loc_002571C4: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002571D0
 * Original: 0x002571D0 - 0x002572DF (271 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002571D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002571D0: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebp);
    MEM32(esp + 0x8C) = eax;
    eax = MEM32(esp + 0x94);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x332860);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002571FBu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_002571FB: ;
    edx = esp + 0x1C;
    PUSH32(esp, 0x332880);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025720Au); RECOMP_ABI_CALL(0x0028BC0Au, sub_0028BC0A); /* call 0x0028BC0A */

loc_0025720A: ;
    esi = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(esp + 8) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_002572CA; /* je: equal / zero */

loc_0025721D: ;
    eax = MEM32(0x34AC3C);
    edx = MEM32(0x64D868);
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00257239u); RECOMP_ABI_CALL(0x002944A4u, sub_002944A4); /* call 0x002944A4 */

loc_00257239: ;
    eax = MEM32(0x64D868);
    eax = MEM32(eax + 8);
    ecx = MEM32(0x64D86C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    ebx = 0xC;
    if (CMP_NE(_fa, _fb)) goto loc_002572BF; /* jne: not equal / not zero */

loc_00257253: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), ebp (32-bit) */
    MEM32(esp + 0x14) = ebp;
    if (CMP_BE(_fa, _fb)) goto loc_002572BF; /* jbe: below or equal (unsigned <=) */

loc_0025725C: ;
    /* nop */

loc_00257260: ;
    ecx = MEM32(edi + 8);
    edx = (uint32_t)(int32_t)SMEM16(ecx + ebp + 8);
    eax = MEM32(ecx + ebp + 4);
    edx = (uint32_t)(int32_t)SMEM16(edx * 8 + 0x3418EA);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    esi = esi & 0x3FFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    eax = eax >> 0x1E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx + eax * 4;
    _fa = (uint32_t)(MEM8(ecx + 0xA)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xA), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002572A8; /* je: equal / zero */

loc_0025728D: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x64D868);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002572A3u); RECOMP_ABI_CALL(0x002944A4u, sub_002944A4); /* call 0x002944A4 */

loc_002572A3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002572A8: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(edi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00257260; /* jb: below (unsigned <) */

loc_002572BB: ;
    esi = MEM32(esp + 0x10);

loc_002572BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002572C5u); RECOMP_ABI_CALL(0x0028BCEBu, sub_0028BCEB); /* call 0x0028BCEB */

loc_002572C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);

loc_002572CA: ;
    ecx = MEM32(esp + 0x90);
    POP32(esp, esi);
    POP32(esp, ebp);
    PUSH32(esp, 0x002572D8u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_002572D8: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002572E0
 * Original: 0x002572E0 - 0x002572F6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002572E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002572E0: ;
    PUSH32(esp, 0x002572E5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002572E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002572EBu); RECOMP_ABI_CALL(0x002571D0u, sub_002571D0); /* call 0x002571D0 */

loc_002572EB: ;
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
 * sub_00257300
 * Original: 0x00257300 - 0x00257373 (115 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257300: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    MEM32(esp + 0x80) = eax;
    eax = MEM32(esp + 0x88);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x332860);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00257329u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_00257329: ;
    edx = esp + 0xC;
    PUSH32(esp, 0x332880);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00257338u); RECOMP_ABI_CALL(0x0028BC0Au, sub_0028BC0A); /* call 0x0028BC0A */

loc_00257338: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00257352; /* jne: not equal / not zero */

loc_0025733F: ;
    ecx = MEM32(esp + 0x80);
    PUSH32(esp, 0x0025734Bu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_0025734B: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00257352: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00257358u); RECOMP_ABI_CALL(0x0028BCEBu, sub_0028BCEB); /* call 0x0028BCEB */

loc_00257358: ;
    ecx = MEM32(esp + 0x84);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    PUSH32(esp, 0x0025736Cu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_0025736C: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00257380
 * Original: 0x00257380 - 0x002573C9 (73 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257380: ;
    PUSH32(esp, 0x00257385u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257385: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025738Bu); RECOMP_ABI_CALL(0x00257300u, sub_00257300); /* call 0x00257300 */

loc_0025738B: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_002573D0
 * Original: 0x002573D0 - 0x00257416 (70 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002573D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002573D0: ;
    PUSH32(esp, 0x002573D5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002573D5: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = 1;
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
 * sub_00257420
 * Original: 0x00257420 - 0x0025747A (90 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00257420: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00257426u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257426: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x64D3D8);
    esi = MEM32(0x64D854);
    eax = ZX8(LO8(eax));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(0x64D858);
    ecx = esi + 0x6270D8;
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x20)) >> 32) & 1);
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
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00257480
 * Original: 0x00257480 - 0x002574C6 (70 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257480: ;
    PUSH32(esp, 0x00257485u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257485: ;
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
 * sub_002574D0
 * Original: 0x002574D0 - 0x00257531 (97 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002574D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002574D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002574D8u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002574D8: ;
    edi = eax;
    PUSH32(esp, 0x002574DFu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002574DF: ;
    ebx = MEM32(0x64D854);
    PUSH32(esp, eax);
    ecx = edi;
    esi = ebx + 0x6270D8;
    PUSH32(esp, 0x002574F3u); RECOMP_ABI_CALL(0x000C0C10u, sub_000C0C10); /* call 0x000C0C10 */

loc_002574F3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = eax;
    eax = MEM32(0x64D858);
    MEM32(eax * 8 + 0x616FDC) = esi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x20)) >> 32) & 1);
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
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00257540
 * Original: 0x00257540 - 0x002575E1 (161 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257540: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00257548u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257548: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00257590; /* jne: not equal / not zero */

loc_0025754C: ;
    eax = MEM32(0x33B4C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00257566; /* jne: not equal / not zero */

loc_00257556: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    goto loc_0025758A;

loc_00257566: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xDC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x49A4A4)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x49A4A8)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0025758A: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_00257590: ;
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
 * sub_002575F0
 * Original: 0x002575F0 - 0x00257691 (161 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002575F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002575F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x002575F8u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002575F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00257640; /* jne: not equal / not zero */

loc_002575FC: ;
    eax = MEM32(0x33B4C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00257616; /* jne: not equal / not zero */

loc_00257606: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    goto loc_0025763A;

loc_00257616: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xDC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x49A4AC)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x49A4B0)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0025763A: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_00257640: ;
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
 * sub_002576A0
 * Original: 0x002576A0 - 0x002576E3 (67 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002576A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002576A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002576D7; /* jne: not equal / not zero */

loc_002576A4: ;
    edx = MEM32(0x33B4C8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002576D7; /* je: equal / zero */

loc_002576AF: ;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(edx * 4 + 0x64D384)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx * 4 + 0x64D384), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002576D7; /* je: equal / zero */

loc_002576BF: ;
    _fa = (uint32_t)(MEM32(edx * 4 + 0x64D374)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx * 4 + 0x64D374), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002576D7; /* jne: not equal / not zero */

loc_002576C8: ;
    eax = 1;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

loc_002576D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002576F0
 * Original: 0x002576F0 - 0x00257775 (133 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002576F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002576F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002576F6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002576F6: ;
    esi = eax;
    PUSH32(esp, 0x002576FDu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002576FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025772E; /* jne: not equal / not zero */

loc_00257701: ;
    edx = MEM32(0x33B4C8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025772E; /* je: equal / zero */

loc_0025770C: ;
    ecx = esi;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(edx * 4 + 0x64D384)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx * 4 + 0x64D384), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025772E; /* je: equal / zero */

loc_0025771E: ;
    _fa = (uint32_t)(MEM32(edx * 4 + 0x64D374)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx * 4 + 0x64D374), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025772E; /* jne: not equal / not zero */

loc_00257727: ;
    ecx = 1;
    goto loc_00257730;

loc_0025772E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00257730: ;
    esi = MEM32(0x64D854);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = MEM32(0x64D858);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = esi + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = esi;
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
 * sub_00257780
 * Original: 0x00257780 - 0x002577C3 (67 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257780: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002577B7; /* jne: not equal / not zero */

loc_00257784: ;
    edx = MEM32(0x33B4C8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002577B7; /* je: equal / zero */

loc_0025778F: ;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(edx * 4 + 0x64D384)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx * 4 + 0x64D384), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002577B7; /* jne: not equal / not zero */

loc_0025779F: ;
    _fa = (uint32_t)(MEM32(edx * 4 + 0x64D374)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx * 4 + 0x64D374), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002577B7; /* je: equal / zero */

loc_002577A8: ;
    eax = 1;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

loc_002577B7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002577D0
 * Original: 0x002577D0 - 0x00257855 (133 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002577D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002577D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002577D6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002577D6: ;
    esi = eax;
    PUSH32(esp, 0x002577DDu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002577DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025780E; /* jne: not equal / not zero */

loc_002577E1: ;
    edx = MEM32(0x33B4C8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025780E; /* je: equal / zero */

loc_002577EC: ;
    ecx = esi;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(edx * 4 + 0x64D384)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx * 4 + 0x64D384), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0025780E; /* jne: not equal / not zero */

loc_002577FE: ;
    _fa = (uint32_t)(MEM32(edx * 4 + 0x64D374)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx * 4 + 0x64D374), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025780E; /* je: equal / zero */

loc_00257807: ;
    ecx = 1;
    goto loc_00257810;

loc_0025780E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00257810: ;
    esi = MEM32(0x64D854);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = MEM32(0x64D858);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = esi + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = esi;
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
 * sub_00257860
 * Original: 0x00257860 - 0x002578AB (75 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257860: ;
    PUSH32(esp, 0x00257865u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257865: ;
    PUSH32(esp, 0x0025786Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025786A: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = 1;
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
 * sub_002578B0
 * Original: 0x002578B0 - 0x002578FB (75 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002578B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002578B0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002578B6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002578B6: ;
    edi = eax;
    PUSH32(esp, 0x002578BDu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002578BD: ;
    ecx = MEM32(0x33B4C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002578F2; /* je: equal / zero */

loc_002578C7: ;
    PUSH32(esp, esi);
    esi = MEM32(0x33B4C8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002578E8; /* je: equal / zero */

loc_002578D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002578E8; /* jne: not equal / not zero */

loc_002578D7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi * 4 + 0x49A878) = edi;
    PUSH32(esp, 0x002578E8u); RECOMP_ABI_CALL(0x000C0EA0u, sub_000C0EA0); /* call 0x000C0EA0 */

loc_002578E8: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002578F2: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00257900
 * Original: 0x00257900 - 0x00257946 (70 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257900: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00257907u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257907: ;
    esi = eax;
    PUSH32(esp, 0x0025790Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025790E: ;
    edi = eax;
    PUSH32(esp, 0x00257915u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257915: ;
    ecx = MEM32(0x33B4C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025793C; /* je: equal / zero */

loc_0025791F: ;
    edx = MEM32(0x33B4C8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025793C; /* je: equal / zero */

loc_0025792A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025793C; /* jne: not equal / not zero */

loc_0025792E: ;
    eax = edi;
    MEM32(edx * 4 + 0x49A868) = esi;
    PUSH32(esp, 0x0025793Cu); RECOMP_ABI_CALL(0x000C0EF0u, sub_000C0EF0); /* call 0x000C0EF0 */

loc_0025793C: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00257950
 * Original: 0x00257950 - 0x00257962 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257950: ;
    PUSH32(esp, 0x00257955u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257955: ;
    PUSH32(esp, 0x0025795Au); RECOMP_ABI_CALL(0x000C0B40u, sub_000C0B40); /* call 0x000C0B40 */

loc_0025795A: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00257970
 * Original: 0x00257970 - 0x00257987 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257970: ;
    _fa = (uint32_t)(MEM32(0x33B4C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x33B4C8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257980; /* je: equal / zero */

loc_00257979: ;
    eax = esi;
    PUSH32(esp, 0x00257980u); RECOMP_ABI_CALL(0x000C0B40u, sub_000C0B40); /* call 0x000C0B40 */

loc_00257980: ;
    MEM32(0x33B4C8) = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00257990
 * Original: 0x00257990 - 0x002579B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257990: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00257996u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257996: ;
    esi = eax;
    _fa = (uint32_t)(MEM32(0x33B4C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x33B4C8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002579A8; /* je: equal / zero */

loc_002579A1: ;
    eax = esi;
    PUSH32(esp, 0x002579A8u); RECOMP_ABI_CALL(0x000C0B40u, sub_000C0B40); /* call 0x000C0B40 */

loc_002579A8: ;
    eax = MEM32(esp + 8);
    MEM32(0x33B4C8) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002579C0
 * Original: 0x002579C0 - 0x002579D2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002579C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002579C0: ;
    PUSH32(esp, 0x002579C5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002579C5: ;
    MEM32(0x33B4CC) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002579E0
 * Original: 0x002579E0 - 0x002579F6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002579E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002579E0: ;
    PUSH32(esp, 0x002579E5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002579E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002579EBu); RECOMP_ABI_CALL(0x000C0200u, sub_000C0200); /* call 0x000C0200 */

loc_002579EB: ;
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
 * sub_00257A00
 * Original: 0x00257A00 - 0x00257A43 (67 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257A00: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(0x33B4C0);
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
 * sub_00257A50
 * Original: 0x00257A50 - 0x00257AA3 (83 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257A50: ;
    edx = MEM32(0x64D1D4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edx = MEM32(0x64D370);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
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
 * sub_00257AB0
 * Original: 0x00257AB0 - 0x00257AFA (74 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257AB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257AB0: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x64D930);
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270D8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    MEM32(esi * 4 + 0x64CDE8) = eax;
    PUSH32(esp, 0x00257AE3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257AE3: ;
    MEM32(esi * 4 + 0x64CC58) = eax;
    eax = MEM32(esp + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D930) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00257B00
 * Original: 0x00257B00 - 0x00257B50 (80 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257B00: ;
    PUSH32(esp, esi);
    eax = 0x493610;
    PUSH32(esp, 0x00257B0Bu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00257B0B: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257B21; /* je: equal / zero */

loc_00257B18: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257B2B; /* je: equal / zero */

loc_00257B21: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257B32; /* je: equal / zero */

loc_00257B2B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00257B34; /* je: equal / zero */

loc_00257B32: ;
    ecx = eax;

loc_00257B34: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00257B4Cu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00257B4C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00257B50
 * Original: 0x00257B50 - 0x00257B6F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257B50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257B50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00257B56u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257B56: ;
    esi = eax;
    PUSH32(esp, 0x00257B5Du); RECOMP_ABI_CALL(0x00257B00u, sub_00257B00); /* call 0x00257B00 */

loc_00257B5D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00257B63u); RECOMP_ABI_CALL(0x001080C0u, sub_001080C0); /* call 0x001080C0 */

loc_00257B63: ;
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
 * sub_00257B70
 * Original: 0x00257B70 - 0x00257BDB (107 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257B70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00257B76u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257B76: ;
    esi = eax;
    eax = MEM32(0x34AC38);
    PUSH32(esp, 0x00257B82u); RECOMP_ABI_CALL(0x00065BA0u, sub_00065BA0); /* call 0x00065BA0 */

loc_00257B82: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00257B8Cu); RECOMP_ABI_CALL(0x00029CB0u, sub_00029CB0); /* call 0x00029CB0 */

loc_00257B8C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x64DA54);
    PUSH32(esp, 0x00257B99u); RECOMP_ABI_CALL(0x000EEA80u, sub_000EEA80); /* call 0x000EEA80 */

loc_00257B99: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = 0;
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
 * sub_00257BE0
 * Original: 0x00257BE0 - 0x00257C21 (65 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257BE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257BE0: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = 1;
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
 * sub_00257C30
 * Original: 0x00257C30 - 0x00257CA1 (113 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257C30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00257C36u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257C36: ;
    ecx = eax;
    eax = 1;
    PUSH32(esp, 0x00257C42u); RECOMP_ABI_CALL(0x00019B80u, sub_00019B80); /* call 0x00019B80 */

loc_00257C42: ;
    ecx = MEM32(0x34AC50);
    esi = MEM32(0x34AC44);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00257C60; /* jae: above or equal (unsigned >=) */

loc_00257C54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257C63; /* je: equal / zero */

loc_00257C58: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00257C54; /* jb: below (unsigned <) */

loc_00257C60: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00257C63: ;
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
 * sub_00257CB0
 * Original: 0x00257CB0 - 0x00257CD4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257CB0: ;
    PUSH32(esp, 0x00257CB5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257CB5: ;
    ecx = MEM32(0x34AC50);
    MEM32(ecx + eax * 8 + 4) = MEM32(ecx + eax * 8 + 4) | 1;
    _fa = (uint32_t)(MEM32(ecx + eax * 8 + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = eax;
    PUSH32(esp, 0x00257CC7u); RECOMP_ABI_CALL(0x00019BF0u, sub_00019BF0); /* call 0x00019BF0 */

loc_00257CC7: ;
    MEM32(0x34A75C) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00257CE0
 * Original: 0x00257CE0 - 0x00257CF8 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257CE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257CE0: ;
    PUSH32(esp, 0x00257CE5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257CE5: ;
    ecx = MEM32(0x34AC50);
    MEM32(ecx + eax * 8 + 4) = MEM32(ecx + eax * 8 + 4) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(ecx + eax * 8 + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00257D00
 * Original: 0x00257D00 - 0x00257D58 (88 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257D00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257D00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00257D06u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257D06: ;
    esi = eax;
    PUSH32(esp, 0x00257D0Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257D0D: ;
    ecx = MEM32(0x34AC50);
    eax = MEM32(ecx + eax * 8);
    eax = MEM32(eax + 0x20);
    eax = MEM32(eax + esi * 8);
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
 * sub_00257D60
 * Original: 0x00257D60 - 0x00257D9A (58 bytes, 13 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257D60: ;
    eax = MEM32(0x64D8A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257D8A; /* je: equal / zero */

loc_00257D69: ;
    PUSH32(esp, 0x332910);
    PUSH32(esp, 0x33271C);
    PUSH32(esp, 0x16E);
    PUSH32(esp, 0x3328D0);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x00257D87u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_00257D87: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00257D8A: ;
    MEM32(0x64D008) = 1;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_00257DA0
 * Original: 0x00257DA0 - 0x00257E0F (111 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00257DA0: ;
    eax = MEM32(0x34AC50);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + ecx * 8);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x4C);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x58);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00257E04; /* jae: above or equal (unsigned >=) */

loc_00257DB5: ;
    PUSH32(esp, esi);

loc_00257DB6: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257DFC; /* je: equal / zero */

loc_00257DBC: ;
    edx = esi;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257DFC; /* je: equal / zero */

loc_00257DC6: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00257DFC; /* je: equal / zero */

loc_00257DCE: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00257DFC; /* je: equal / zero */

loc_00257DD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x8000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00257DFC; /* jne: not equal / not zero */

loc_00257DDC: ;
    ecx = eax;
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx | 0x4000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebx;
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0x00257DF0u); RECOMP_ABI_CALL(0x00021650u, sub_00021650); /* call 0x00021650 */

loc_00257DF0: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00257DF9u); RECOMP_ABI_CALL(0x00014F60u, sub_00014F60); /* call 0x00014F60 */

loc_00257DF9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00257DFC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00257DB6; /* jb: below (unsigned <) */

loc_00257E03: ;
    POP32(esp, esi);

loc_00257E04: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(ebx + 0xC) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00257E10
 * Original: 0x00257E10 - 0x00257E31 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257E10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00257E16u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257E16: ;
    esi = eax;
    PUSH32(esp, 0x00257E1Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257E1D: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00257E25u); RECOMP_ABI_CALL(0x00257DA0u, sub_00257DA0); /* call 0x00257DA0 */

loc_00257E25: ;
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
 * sub_00257E40
 * Original: 0x00257E40 - 0x00257E65 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257E40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257E40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00257E46u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257E46: ;
    esi = eax;
    PUSH32(esp, 0x00257E4Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257E4D: ;
    ecx = MEM32(0x34AC50);
    edx = MEM32(ecx + eax * 8);
    eax = MEM32(esp + 8);
    MEM32(edx + 0x17C) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00257E70
 * Original: 0x00257E70 - 0x00257EBF (79 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257E70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257E70: ;
    PUSH32(esp, 0x00257E75u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257E75: ;
    ecx = MEM32(0x34AC50);
    eax = MEM32(ecx + eax * 8);
    eax = MEM32(eax + 0x17C);
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
 * sub_00257EC0
 * Original: 0x00257EC0 - 0x00257F19 (89 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00257EC0: ;
    eax = MEM32(0x34AC50);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + ecx * 8);
    ebx = MEM32(edi + 0x20);
    ebp = MEM32(edi + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00257F0D; /* jae: above or equal (unsigned >=) */

loc_00257ED6: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257F06; /* je: equal / zero */

loc_00257EDC: ;
    edx = esi;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257F06; /* je: equal / zero */

loc_00257EE6: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00257F06; /* je: equal / zero */

loc_00257EEE: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0xFBFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x00257EFAu); RECOMP_ABI_CALL(0x00021810u, sub_00021810); /* call 0x00021810 */

loc_00257EFA: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00257F03u); RECOMP_ABI_CALL(0x00014FF0u, sub_00014FF0); /* call 0x00014FF0 */

loc_00257F03: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00257F06: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00257ED6; /* jb: below (unsigned <) */

loc_00257F0D: ;
    MEM32(edi + 0xC) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00257F20
 * Original: 0x00257F20 - 0x00257F4A (42 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00257F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257F20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00257F2Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257F2D: ;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00257F34u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257F34: ;
    PUSH32(esp, esi);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00257F3Cu); RECOMP_ABI_CALL(0x00257EC0u, sub_00257EC0); /* call 0x00257EC0 */

loc_00257F3C: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
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
 * sub_00257F50
 * Original: 0x00257F50 - 0x00257FB2 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00257F50: ;
    eax = MEM32(0x34AC50);
    edx = MEM32(0x34AC44);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00257F75; /* jae: above or equal (unsigned >=) */

loc_00257F61: ;
    PUSH32(esp, esi);
    esi = MEM32(0x34AC38);

loc_00257F68: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00257F74; /* je: equal / zero */

loc_00257F6C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00257F68; /* jb: below (unsigned <) */

loc_00257F74: ;
    POP32(esp, esi);

loc_00257F75: ;
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
 * sub_00257FC0
 * Original: 0x00257FC0 - 0x00258081 (193 bytes, 56 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00257FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00257FC0: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00257FE8u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00257FE8: ;
    ebx = eax;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    edi = MEM32(eax * 8 + 0x616FD4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = SX16(LO16(ecx));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx * 8 + 0x3418EC); PUSH32(esp, 0x00258014u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0025800Du); } /* indirect call */
    }

loc_00258014: ;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    PUSH32(esp, 0x0025802Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025802B: ;
    ebp = eax;
    PUSH32(esp, 0x00258032u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258032: ;
    ecx = MEM32(esi + 0x10);
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258060; /* je: equal / zero */

loc_0025803F: ;
    PUSH32(esp, 0x3328A4);
    PUSH32(esp, 0x332884);
    PUSH32(esp, 0x24F);
    PUSH32(esp, 0x3328D0);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0025805Du); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0025805D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00258060: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0025806Fu); RECOMP_ABI_CALL(0x00013100u, sub_00013100); /* call 0x00013100 */

loc_0025806F: ;
    eax = MEM32(esp + 0x60);
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
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00258090
 * Original: 0x00258090 - 0x002580D1 (65 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258090: ;
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
 * sub_002580E0
 * Original: 0x002580E0 - 0x00258130 (80 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002580E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002580E0: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0025810F; /* jne: not equal / not zero */

loc_00258105: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_00258117;

loc_0025810F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_00258117: ;
    eax = MEM32(0x64D29C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258128; /* je: equal / zero */

loc_00258120: ;
    MEMF(eax + 0x490) = xmm0.f[0]; /* movss */

loc_00258128: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00258130
 * Original: 0x00258130 - 0x002581CC (156 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258130: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xFF000000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00258198; /* je: equal / zero */

loc_0025813B: ;
    PUSH32(esp, esi);
    eax = 0x493610;
    PUSH32(esp, 0x00258146u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00258146: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025815C; /* je: equal / zero */

loc_00258153: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258166; /* je: equal / zero */

loc_0025815C: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025816D; /* je: equal / zero */

loc_00258166: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0025816F; /* je: equal / zero */

loc_0025816D: ;
    ecx = eax;

loc_0025816F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002581C8; /* je: equal / zero */

loc_00258174: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025818Cu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0025818C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002581CA; /* jne: not equal / not zero */

loc_00258194: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00258198: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002581C8; /* je: equal / zero */

loc_0025819F: ;
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002581C8; /* je: equal / zero */

loc_002581A8: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002581C8; /* je: equal / zero */

loc_002581AF: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002581C4; /* jne: not equal / not zero */

loc_002581B6: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 8))); }
    eax = MEM32(ecx + 0xC);
    POP32(esp, edi);
    eax = MEM32(eax + edx * 4);
    esp += 4; return; /* ret */

loc_002581C4: ;
    eax = ecx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002581C8: ;
    eax = edi;

loc_002581CA: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002581D0
 * Original: 0x002581D0 - 0x0025822B (91 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002581D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002581D0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    edx = MEM32(edi + 0x14);
    MEM32(0x64D884) = eax;
    eax = MEM32(edx);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D87C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00258222; /* je: equal / zero */

loc_002581F9: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00258200u); RECOMP_ABI_CALL(0x00098D70u, sub_00098D70); /* call 0x00098D70 */

loc_00258200: ;
    esi = eax;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x00258208u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00258205u); } /* indirect call */
    }

loc_00258208: ;
    edx = MEM32(edi + 0x14);
    eax = MEM32(edx);
    eax = MEM32(eax + 4);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x00258216u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00258213u); } /* indirect call */
    }

loc_00258216: ;
    edx = MEM32(edi + 0x14);
    eax = MEM32(edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = esi;
    POP32(esp, esi);

loc_00258222: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00258230
 * Original: 0x00258230 - 0x002583DE (430 bytes, 138 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258230(void)
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

loc_00258230: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx;
    edi = ecx;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00258244u); RECOMP_ABI_CALL(0x00258130u, sub_00258130); /* call 0x00258130 */

loc_00258244: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002583DA; /* je: equal / zero */

loc_0025824E: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, 0x0025825Du); RECOMP_ABI_CALL(0x00098D20u, sub_00098D20); /* call 0x00098D20 */

loc_0025825D: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002583DA; /* je: equal / zero */

loc_0025826C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002583DA; /* ja: above (unsigned >) */

loc_00258275: ;
    { uint32_t _jt = MEM32(edi * 4 + 0x2583E0); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0025827Cu) goto loc_0025827C;
    if (_jt == 0x002582A0u) goto loc_002582A0;
    if (_jt == 0x002582C4u) goto loc_002582C4;
    if (_jt == 0x002582F8u) goto loc_002582F8;
    if (_jt == 0x0025832Du) goto loc_0025832D;
    if (_jt == 0x00258362u) goto loc_00258362;
    if (_jt == 0x00258396u) goto loc_00258396;
    if (_jt == 0x002583B9u) goto loc_002583B9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0025827C: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    ecx = MEM32(esi + 8);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x1FFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002582A0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    edx = MEM32(esi + 0xC);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x1FFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0xC) = edx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002582C4: ;
    edx = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    edx = edx & 0xBFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = edx;
    edi = MEM32(esi + 8);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    eax = eax & 0xFFFE;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002582F8: ;
    ecx = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = ecx;
    edi = MEM32(esi + 0xC);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 8);
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi;
    ecx = ecx & 0xFFFE;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0025832D: ;
    ecx = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    ecx = ecx | 0x40000000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = ecx;
    edi = MEM32(esi + 8);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 8);
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx ^ edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi;
    edx = edx & 0xFFFE;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00258362: ;
    edx = MEM32(esi + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    edx = edx | 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = edx;
    edi = MEM32(esi + 0xC);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    eax = eax & 0xFFFE;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0xC) = ecx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00258396: ;
    edi = MEM32(esi + 0x10);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    edi = edi & 0xFFFF7FFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + 0xC;
    edx = esi + 8;
    MEM32(esi + 0x10) = edi;
    PUSH32(esp, 0x002583B2u); RECOMP_ABI_CALL(0x00099CD0u, sub_00099CD0); /* call 0x00099CD0 */

loc_002583B2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002583B9: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, 0x002583C2u); RECOMP_ABI_CALL(0x0028AF78u, sub_0028AF78); /* call 0x0028AF78 */

loc_002583C2: ;
    edx = MEM32(esi + 0x10);
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0xFFFF8000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x10) = eax;

loc_002583DA: ;
    POP32(esp, edi);
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
 * sub_002583DE
 * Original: 0x002583DE - 0x0025848E (176 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002583DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002583DE: ;
    edi = edi;
    if (_flags /* jl: less (signed <) */) { g_seh_ebp = ebp; sub_00258364(); return; }

loc_002583E2: ;
    eax = eax & 0x2582A000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + LO8(eax));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(0x2582F800) = MEM8(0x2582F800) & 0;
    _fa = (uint32_t)(MEM8(0x2582F800)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x62002583) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x62002583;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x25839600) = MEM32(0x25839600) & 0;
    _fa = (uint32_t)(MEM32(0x25839600)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0x51002583;
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
    if (CMP_NE(_fa, _fb)) goto loc_00258430; /* jne: not equal / not zero */

loc_00258426: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_00258438;

loc_00258430: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_00258438: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00258445u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258445: ;
    esi = eax;
    PUSH32(esp, 0x0025844Cu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025844C: ;
    ecx = MEM32(0x64D880);
    edi = MEM32(0x64D884);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x00258475u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258475: ;
    edx = eax;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0x00258480u); RECOMP_ABI_CALL(0x00258230u, sub_00258230); /* call 0x00258230 */

loc_00258480: ;
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
 * sub_00258400
 * Original: 0x00258400 - 0x0025848E (142 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258400: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00258430; /* jne: not equal / not zero */

loc_00258426: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_00258438;

loc_00258430: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_00258438: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00258445u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258445: ;
    esi = eax;
    PUSH32(esp, 0x0025844Cu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025844C: ;
    ecx = MEM32(0x64D880);
    edi = MEM32(0x64D884);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x00258475u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258475: ;
    edx = eax;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0x00258480u); RECOMP_ABI_CALL(0x00258230u, sub_00258230); /* call 0x00258230 */

loc_00258480: ;
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
 * sub_00258490
 * Original: 0x00258490 - 0x00258586 (246 bytes, 70 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258490(void)
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

loc_00258490: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp) = 0;
    PUSH32(esp, 0x0025849Fu); RECOMP_ABI_CALL(0x00258130u, sub_00258130); /* call 0x00258130 */

loc_0025849F: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025857C; /* je: equal / zero */

loc_002584A9: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    eax = esp + 4;
    PUSH32(esp, 0x002584B8u); RECOMP_ABI_CALL(0x00098D20u, sub_00098D20); /* call 0x00098D20 */

loc_002584B8: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025857C; /* je: equal / zero */

loc_002584C7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0025857C; /* ja: above (unsigned >) */

loc_002584D0: ;
    { uint32_t _jt = MEM32(edi * 4 + 0x258588); /* switch: 8 entries, 8 targets */
    if (_jt == 0x002584D7u) goto loc_002584D7;
    if (_jt == 0x002584EBu) goto loc_002584EB;
    if (_jt == 0x002584FFu) goto loc_002584FF;
    if (_jt == 0x00258510u) goto loc_00258510;
    if (_jt == 0x00258521u) goto loc_00258521;
    if (_jt == 0x00258535u) goto loc_00258535;
    if (_jt == 0x00258549u) goto loc_00258549;
    if (_jt == 0x00258560u) goto loc_00258560;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002584D7: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x002584DFu); RECOMP_ABI_CALL(0x00099D80u, sub_00099D80); /* call 0x00099D80 */

loc_002584DF: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002584EB: ;
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0x002584F3u); RECOMP_ABI_CALL(0x00099D80u, sub_00099D80); /* call 0x00099D80 */

loc_002584F3: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002584FF: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00258508u); RECOMP_ABI_CALL(0x00099EF0u, sub_00099EF0); /* call 0x00099EF0 */

loc_00258508: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00258510: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00258519u); RECOMP_ABI_CALL(0x00099EF0u, sub_00099EF0); /* call 0x00099EF0 */

loc_00258519: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00258521: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x00258529u); RECOMP_ABI_CALL(0x00099DB0u, sub_00099DB0); /* call 0x00099DB0 */

loc_00258529: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00258535: ;
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0x0025853Du); RECOMP_ABI_CALL(0x00099DB0u, sub_00099DB0); /* call 0x00099DB0 */

loc_0025853D: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00258549: ;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x00258554u); RECOMP_ABI_CALL(0x00099D30u, sub_00099D30); /* call 0x00099D30 */

loc_00258554: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00258560: ;
    eax = MEM32(eax + 0x10);
    eax = eax & 0x7FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00258582; /* jge: greater or equal (signed >=) */

loc_00258572: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0025857C: ;
    fp_push(MEMF(0x3337C0)); /* fld float */

loc_00258582: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00258586
 * Original: 0x00258586 - 0x0025862F (169 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258586(void)
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

loc_00258586: ;
    edi = edi;
    SET_LO8(eax, MEM8(ebx + LO8(eax))); /* xlatb */
    _fa = (uint32_t)(MEM8(0x2584EB00)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x2584EB00), HI8(eax) (8-bit) */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(ebx, HI8(ebx) + HI8(ebx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(0x25851000)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x25851000), HI8(eax) (8-bit) */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx) = MEM8(ecx) + HI8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(0x25853500)) & 0xFFFFFFFFu; _fb = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x25853500), esp (32-bit) */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + -123) = MEM8(ecx + -123) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx + -123)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = eax & 0x25856000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + LO8(ecx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002585B8u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002585B8: ;
    edi = eax;
    PUSH32(esp, 0x002585BFu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002585BF: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    ebx = MEM32(0x64D884);
    PUSH32(esp, eax);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x002585E3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002585E3: ;
    esi = eax;
    eax = ebx;
    PUSH32(esp, 0x002585ECu); RECOMP_ABI_CALL(0x00258490u, sub_00258490); /* call 0x00258490 */

loc_002585EC: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002585B0
 * Original: 0x002585B0 - 0x0025862F (127 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002585B0(void)
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

loc_002585B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002585B8u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002585B8: ;
    edi = eax;
    PUSH32(esp, 0x002585BFu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002585BF: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    ebx = MEM32(0x64D884);
    PUSH32(esp, eax);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x002585E3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002585E3: ;
    esi = eax;
    eax = ebx;
    PUSH32(esp, 0x002585ECu); RECOMP_ABI_CALL(0x00258490u, sub_00258490); /* call 0x00258490 */

loc_002585EC: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00258630
 * Original: 0x00258630 - 0x002586A4 (116 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258630: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00258653u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258653: ;
    esi = eax;
    eax = edi;
    PUSH32(esp, 0x0025865Cu); RECOMP_ABI_CALL(0x00258130u, sub_00258130); /* call 0x00258130 */

loc_0025865C: ;
    esi = eax;
    PUSH32(esp, 0x00258663u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258663: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025869A; /* je: equal / zero */

loc_00258667: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 4 (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00258685; /* jne: not equal / not zero */

loc_00258670: ;
    ecx = MEM32(esi + 8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 0;
    SET_LO8(edx, ((_fas >= 0)) ? 1 : 0); /* setns */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(esi + 0xC);
    ecx = MEM32(edx + ecx * 4);

loc_00258685: ;
    edx = MEM32(ecx);
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025869A; /* je: equal / zero */

loc_0025868E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025869A; /* jne: not equal / not zero */

loc_00258693: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0025869A; /* je: equal / zero */

loc_00258698: ;
    MEM32(ecx) = eax;

loc_0025869A: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002586B0
 * Original: 0x002586B0 - 0x0025874F (159 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002586B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002586B0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x002586D3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002586D3: ;
    esi = eax;
    eax = edi;
    PUSH32(esp, 0x002586DCu); RECOMP_ABI_CALL(0x00258130u, sub_00258130); /* call 0x00258130 */

loc_002586DC: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258710; /* je: equal / zero */

loc_002586E2: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002586FB; /* jne: not equal / not zero */

loc_002586E9: ;
    ecx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    SET_LO8(edx, ((_fas >= 0)) ? 1 : 0); /* setns */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax + ecx * 4);

loc_002586FB: ;
    ecx = MEM32(eax);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258710; /* je: equal / zero */

loc_00258704: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00258710; /* jne: not equal / not zero */

loc_00258709: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_00258710; /* je: equal / zero */

loc_0025870E: ;
    esi = MEM32(eax);

loc_00258710: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(eax) = esi;
    MEM32(ecx * 8 + 0x616FDC) = eax;
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
 * sub_00258750
 * Original: 0x00258750 - 0x002587C4 (116 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00258750: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00258774u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258774: ;
    esi = eax;
    PUSH32(esp, 0x0025877Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025877B: ;
    ebp = eax;
    eax = edi;
    PUSH32(esp, 0x00258784u); RECOMP_ABI_CALL(0x00258130u, sub_00258130); /* call 0x00258130 */

loc_00258784: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002587B9; /* je: equal / zero */

loc_00258788: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002587A4; /* jne: not equal / not zero */

loc_0025878F: ;
    ecx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 0;
    SET_LO8(edx, ((_fas >= 0)) ? 1 : 0); /* setns */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax + ecx * 4);

loc_002587A4: ;
    ecx = MEM32(eax);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002587B9; /* je: equal / zero */

loc_002587AD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002587B9; /* jne: not equal / not zero */

loc_002587B2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_002587B9; /* je: equal / zero */

loc_002587B7: ;
    MEM32(eax) = ebp;

loc_002587B9: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002587D0
 * Original: 0x002587D0 - 0x0025886F (159 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002587D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002587D0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x002587F3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002587F3: ;
    esi = eax;
    eax = edi;
    PUSH32(esp, 0x002587FCu); RECOMP_ABI_CALL(0x00258130u, sub_00258130); /* call 0x00258130 */

loc_002587FC: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258830; /* je: equal / zero */

loc_00258802: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025881B; /* jne: not equal / not zero */

loc_00258809: ;
    ecx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    SET_LO8(edx, ((_fas >= 0)) ? 1 : 0); /* setns */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax + ecx * 4);

loc_0025881B: ;
    ecx = MEM32(eax);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258830; /* je: equal / zero */

loc_00258824: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00258830; /* jne: not equal / not zero */

loc_00258829: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_00258830; /* je: equal / zero */

loc_0025882E: ;
    esi = MEM32(eax);

loc_00258830: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(eax) = esi;
    MEM32(ecx * 8 + 0x616FDC) = eax;
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
 * sub_00258870
 * Original: 0x00258870 - 0x002588E4 (116 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258870: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00258893u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258893: ;
    esi = eax;
    eax = edi;
    PUSH32(esp, 0x0025889Cu); RECOMP_ABI_CALL(0x00258130u, sub_00258130); /* call 0x00258130 */

loc_0025889C: ;
    esi = eax;
    PUSH32(esp, 0x002588A3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002588A3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002588DA; /* je: equal / zero */

loc_002588A7: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 4 (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_002588C5; /* jne: not equal / not zero */

loc_002588B0: ;
    ecx = MEM32(esi + 8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 0;
    SET_LO8(edx, ((_fas >= 0)) ? 1 : 0); /* setns */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(esi + 0xC);
    ecx = MEM32(edx + ecx * 4);

loc_002588C5: ;
    edx = MEM32(ecx);
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002588DA; /* je: equal / zero */

loc_002588CE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002588DA; /* jne: not equal / not zero */

loc_002588D3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_002588DA; /* je: equal / zero */

loc_002588D8: ;
    MEM32(ecx) = eax;

loc_002588DA: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002588F0
 * Original: 0x002588F0 - 0x0025898F (159 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002588F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002588F0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00258913u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258913: ;
    esi = eax;
    eax = edi;
    PUSH32(esp, 0x0025891Cu); RECOMP_ABI_CALL(0x00258130u, sub_00258130); /* call 0x00258130 */

loc_0025891C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258950; /* je: equal / zero */

loc_00258922: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025893B; /* jne: not equal / not zero */

loc_00258929: ;
    ecx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    SET_LO8(edx, ((_fas >= 0)) ? 1 : 0); /* setns */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax + ecx * 4);

loc_0025893B: ;
    ecx = MEM32(eax);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258950; /* je: equal / zero */

loc_00258944: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00258950; /* jne: not equal / not zero */

loc_00258949: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_00258950; /* je: equal / zero */

loc_0025894E: ;
    esi = MEM32(eax);

loc_00258950: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(eax) = esi;
    MEM32(ecx * 8 + 0x616FDC) = eax;
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
 * sub_00258990
 * Original: 0x00258990 - 0x00258A06 (118 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258990: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x002589B3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002589B3: ;
    esi = eax;
    eax = edi;
    PUSH32(esp, 0x002589BCu); RECOMP_ABI_CALL(0x00258130u, sub_00258130); /* call 0x00258130 */

loc_002589BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002589C7; /* je: equal / zero */

loc_002589C2: ;
    edx = MEM32(eax + 0x1C);
    goto loc_002589C9;

loc_002589C7: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002589C9: ;
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
 * sub_00258A10
 * Original: 0x00258A10 - 0x00258A65 (85 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258A10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00258A18u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258A18: ;
    edi = eax;
    PUSH32(esp, 0x00258A1Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258A1F: ;
    ebx = eax;
    PUSH32(esp, 0x00258A26u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258A26: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    esi = eax;
    eax = MEM32(0x64D884);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x00258A4Au); RECOMP_ABI_CALL(0x00258130u, sub_00258130); /* call 0x00258130 */

loc_00258A4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258A5A; /* je: equal / zero */

loc_00258A4E: ;
    ecx = MEM32(eax + 0x1C);
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ~edi;
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x1C) = ecx;

loc_00258A5A: ;
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
 * sub_00258A70
 * Original: 0x00258A70 - 0x00258ACE (94 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258A70: ;
    PUSH32(esp, ecx);
    MEM32(esp) = 0;
    PUSH32(esp, 0x00258A7Du); RECOMP_ABI_CALL(0x00258130u, sub_00258130); /* call 0x00258130 */

loc_00258A7D: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258ACC; /* je: equal / zero */

loc_00258A83: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, 0);
    eax = esp + 4;
    PUSH32(esp, 0x00258A92u); RECOMP_ABI_CALL(0x00098D20u, sub_00098D20); /* call 0x00098D20 */

loc_00258A92: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258ACC; /* je: equal / zero */

loc_00258A9D: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 0xC);
    eax = eax & 0x1FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00258AB4; /* jne: not equal / not zero */

loc_00258AAD: ;
    eax = eax | 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00258AB9;

loc_00258AB4: ;
    eax = eax & 0xFFFFF7FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00258AB9: ;
    edx = MEM32(ecx + 4);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(ecx + 4);
    edx = edx & 0x1FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;

loc_00258ACC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00258AD0
 * Original: 0x00258AD0 - 0x00258B1A (74 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258AD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258AD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00258AD8u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258AD8: ;
    edi = eax;
    PUSH32(esp, 0x00258ADFu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258ADF: ;
    ebx = eax;
    PUSH32(esp, 0x00258AE6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258AE6: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    esi = eax;
    eax = MEM32(0x64D884);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x00258B0Cu); RECOMP_ABI_CALL(0x00258A70u, sub_00258A70); /* call 0x00258A70 */

loc_00258B0C: ;
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
 * sub_00258B20
 * Original: 0x00258B20 - 0x00258BA1 (129 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00258B20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00258B2Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258B2A: ;
    edi = eax;
    PUSH32(esp, 0x00258B31u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258B31: ;
    ebp = eax;
    PUSH32(esp, 0x00258B38u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258B38: ;
    ebx = eax;
    PUSH32(esp, 0x00258B3Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258B3F: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    esi = eax;
    eax = MEM32(0x64D884);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00258B6Bu); RECOMP_ABI_CALL(0x00258130u, sub_00258130); /* call 0x00258130 */

loc_00258B6B: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258B94; /* je: equal / zero */

loc_00258B71: ;
    PUSH32(esp, esi);
    edx = ebx;
    eax = esp + 0x14;
    PUSH32(esp, 0x00258B7Du); RECOMP_ABI_CALL(0x00098D20u, sub_00098D20); /* call 0x00098D20 */

loc_00258B7D: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258B94; /* je: equal / zero */

loc_00258B88: ;
    edx = MEM32(eax + 4);
    edi = ~edi;
    edi = edi & edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edi;

loc_00258B94: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00258BB0
 * Original: 0x00258BB0 - 0x00258C11 (97 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258BB0: ;
    PUSH32(esp, ecx);
    MEM32(esp) = 0;
    PUSH32(esp, 0x00258BBDu); RECOMP_ABI_CALL(0x00258130u, sub_00258130); /* call 0x00258130 */

loc_00258BBD: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258C0F; /* je: equal / zero */

loc_00258BC3: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, 0x00258BD5u); RECOMP_ABI_CALL(0x00098D20u, sub_00098D20); /* call 0x00098D20 */

loc_00258BD5: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258C0F; /* je: equal / zero */

loc_00258BE0: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 0x10);
    eax = eax & 0x1FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00258BF7; /* jne: not equal / not zero */

loc_00258BF0: ;
    eax = eax | 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00258BFC;

loc_00258BF7: ;
    eax = eax & 0xFFFFF7FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00258BFC: ;
    edx = MEM32(ecx + 4);
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(ecx + 4);
    edx = edx & 0x1FFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;

loc_00258C0F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00258C20
 * Original: 0x00258C20 - 0x00258C75 (85 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00258C20: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00258C45u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258C45: ;
    ebx = eax;
    PUSH32(esp, 0x00258C4Cu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258C4C: ;
    ebp = eax;
    PUSH32(esp, 0x00258C53u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258C53: ;
    esi = eax;
    PUSH32(esp, 0x00258C5Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258C5A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = edi;
    PUSH32(esp, 0x00258C66u); RECOMP_ABI_CALL(0x00258BB0u, sub_00258BB0); /* call 0x00258BB0 */

loc_00258C66: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00258C80
 * Original: 0x00258C80 - 0x00258CE4 (100 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258C80: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00258CA2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258CA2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258CDB; /* je: equal / zero */

loc_00258CA6: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00258CDB; /* je: equal / zero */

loc_00258CAD: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    esi = MEM32(ecx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258CDB; /* je: equal / zero */

loc_00258CB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00258CDB; /* jl: less (signed <) */

loc_00258CBD: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00258CDB; /* jne: not equal / not zero */

loc_00258CC4: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258CDB; /* je: equal / zero */

loc_00258CCA: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00258CDB; /* jne: not equal / not zero */

loc_00258CD1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 8))); }
    eax = MEM32(ecx + 0x24);
    MEM32(eax + 4) = edx;

loc_00258CDB: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00258CF0
 * Original: 0x00258CF0 - 0x00258D9A (170 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258CF0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00258D15u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258D15: ;
    ebx = eax;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00258D24u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258D24: ;
    esi = eax;
    eax = edi;
    PUSH32(esp, 0x00258D2Du); RECOMP_ABI_CALL(0x00258130u, sub_00258130); /* call 0x00258130 */

loc_00258D2D: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258D54; /* je: equal / zero */

loc_00258D33: ;
    PUSH32(esp, 0);
    edx = ebx;
    eax = esp + 0x10;
    PUSH32(esp, 0x00258D40u); RECOMP_ABI_CALL(0x00098D20u, sub_00098D20); /* call 0x00098D20 */

loc_00258D40: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258D54; /* je: equal / zero */

loc_00258D4B: ;
    ecx = ZX16(MEM16(eax + 2));
    ecx = ecx >> 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00258D56;

loc_00258D54: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00258D56: ;
    edx = MEM32(0x64D854);
    eax = edx + 0x6270D8;
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00258DA0
 * Original: 0x00258DA0 - 0x00258DF1 (81 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258DA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00258DB6u); RECOMP_ABI_CALL(0x00258130u, sub_00258130); /* call 0x00258130 */

loc_00258DB6: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258DED; /* je: equal / zero */

loc_00258DBC: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, 0x00258DCBu); RECOMP_ABI_CALL(0x00098D20u, sub_00098D20); /* call 0x00098D20 */

loc_00258DCB: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258DED; /* je: equal / zero */

loc_00258DD6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(eax, LO8(ebx));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, LO8(ebx));
    SET_LO16(eax, LO16(eax) ^ MEM16(esi + 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esi + 2) = LO16(eax);

loc_00258DED: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00258E00
 * Original: 0x00258E00 - 0x00258E4B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258E00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258E00: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00258E24u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258E24: ;
    edi = eax;
    PUSH32(esp, 0x00258E2Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258E2B: ;
    ebx = eax;
    PUSH32(esp, 0x00258E32u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258E32: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0x00258E3Du); RECOMP_ABI_CALL(0x00258DA0u, sub_00258DA0); /* call 0x00258DA0 */

loc_00258E3D: ;
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
 * sub_00258E50
 * Original: 0x00258E50 - 0x00258EF4 (164 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258E50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00258E61u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258E61: ;
    ecx = MEM32(0x64D878);
    ebx = MEM32(0x64D884);
    edi = eax;
    eax = MEM32(0x64D880);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00258E84u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258E84: ;
    esi = eax;
    eax = ebx;
    PUSH32(esp, 0x00258E8Du); RECOMP_ABI_CALL(0x00258130u, sub_00258130); /* call 0x00258130 */

loc_00258E8D: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258EB1; /* je: equal / zero */

loc_00258E93: ;
    PUSH32(esp, 0);
    edx = edi;
    eax = esp + 0x10;
    PUSH32(esp, 0x00258EA0u); RECOMP_ABI_CALL(0x00098D20u, sub_00098D20); /* call 0x00098D20 */

loc_00258EA0: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258EB1; /* je: equal / zero */

loc_00258EAB: ;
    edx = ZX8(MEM8(eax + 0x13));
    goto loc_00258EB3;

loc_00258EB1: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00258EB3: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    POP32(esp, edi);
    MEM32(eax) = edx;
    eax = MEM32(esp + 0x10);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00258F00
 * Original: 0x00258F00 - 0x00258F6F (111 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00258F00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00258F09u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258F09: ;
    ebx = eax;
    PUSH32(esp, 0x00258F10u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258F10: ;
    edi = eax;
    PUSH32(esp, 0x00258F17u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258F17: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    esi = eax;
    eax = MEM32(0x64D884);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00258F43u); RECOMP_ABI_CALL(0x00258130u, sub_00258130); /* call 0x00258130 */

loc_00258F43: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258F63; /* je: equal / zero */

loc_00258F49: ;
    PUSH32(esp, esi);
    edx = edi;
    eax = esp + 0x10;
    PUSH32(esp, 0x00258F55u); RECOMP_ABI_CALL(0x00098D20u, sub_00098D20); /* call 0x00098D20 */

loc_00258F55: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258F63; /* je: equal / zero */

loc_00258F60: ;
    MEM8(eax + 0x13) = LO8(ebx);

loc_00258F63: ;
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
 * sub_00258F70
 * Original: 0x00258F70 - 0x00259011 (161 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00258F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00258F70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00258F7Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258F7A: ;
    ecx = MEM32(0x64D878);
    ebx = MEM32(0x64D884);
    ebp = eax;
    eax = MEM32(0x64D880);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00258F9Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00258F9F: ;
    esi = eax;
    eax = ebx;
    PUSH32(esp, 0x00258FA8u); RECOMP_ABI_CALL(0x00258130u, sub_00258130); /* call 0x00258130 */

loc_00258FA8: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258FCF; /* je: equal / zero */

loc_00258FAE: ;
    PUSH32(esp, edi);
    edx = ebp;
    eax = esp + 0x14;
    PUSH32(esp, 0x00258FBAu); RECOMP_ABI_CALL(0x00098D20u, sub_00098D20); /* call 0x00098D20 */

loc_00258FBA: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00258FCF; /* je: equal / zero */

loc_00258FC5: ;
    SET_LO16(esi, MEM16(eax));
    PUSH32(esp, 0x00258FCDu); RECOMP_ABI_CALL(0x0008B6F0u, sub_0008B6F0); /* call 0x0008B6F0 */

loc_00258FCD: ;
    edi = eax;

loc_00258FCF: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    POP32(esp, edi);
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00259020
 * Original: 0x00259020 - 0x00259097 (119 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259020: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    edx = MEM32(esi + 0x14);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D854);
    PUSH32(esp, edi);
    edi = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = edi;
    edi = MEM32(eax + 0x6270D8);
    eax = MEM32(edx);
    eax = MEM32(eax + 4);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x0025906Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259069u); } /* indirect call */
    }

loc_0025906C: ;
    edx = MEM32(edi + 0x14);
    eax = MEM32(edx);
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    eax = MEM32(eax + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx);
    eax = MEM32(edx + 4);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x0025908Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00259087u); } /* indirect call */
    }

loc_0025908A: ;
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
 * sub_002590A0
 * Original: 0x002590A0 - 0x002590BF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002590A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002590A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002590A6u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_002590A6: ;
    esi = eax;
    PUSH32(esp, 0x002590ADu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002590AD: ;
    edx = eax;
    eax = esi;
    PUSH32(esp, 0x002590B6u); RECOMP_ABI_CALL(0x0008EFA0u, sub_0008EFA0); /* call 0x0008EFA0 */

loc_002590B6: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002590C0
 * Original: 0x002590C0 - 0x002590FF (63 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002590C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002590C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002590C7u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002590C7: ;
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x002590D0u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002590D0: ;
    ebx = eax;
    PUSH32(esp, 0x002590D7u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002590D7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002590F5; /* jae: above or equal (unsigned >=) */

loc_002590DB: ;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x1F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x1F (8-bit) */
    MEM8(eax + 0x37029F) = 0;
    if (CMP_AE(_fa, _fb)) goto loc_002590F5; /* jae: above or equal (unsigned >=) */

loc_002590EA: ;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + ebx + 0x370280) = LO8(ecx);

loc_002590F5: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00259100
 * Original: 0x00259100 - 0x00259160 (96 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259100: ;
    ecx = MEM32(0x64D880);
    eax = MEM32(0x64D884);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    MEM32(0x64D87C) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_00259158; /* je: equal / zero */

loc_00259124: ;
    eax = MEM32(eax + 0x14);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259158; /* je: equal / zero */

loc_0025912F: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259158; /* jne: not equal / not zero */

loc_00259136: ;
    ecx = ZX8(MEM8(edx + 0xC));
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x20);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    MEM8(edx + 0xE) = 0;
    POP32(esp, esi);

loc_00259158: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00259160
 * Original: 0x00259160 - 0x002591B0 (80 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259160: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00259183u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_00259183: ;
    edi = eax;
    PUSH32(esp, 0x0025918Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025918A: ;
    PUSH32(esp, eax);
    ecx = edi;
    eax = esi;
    PUSH32(esp, 0x00259194u); RECOMP_ABI_CALL(0x0008F6A0u, sub_0008F6A0); /* call 0x0008F6A0 */

loc_00259194: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002591B0
 * Original: 0x002591B0 - 0x002591F5 (69 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002591B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002591B0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x002591D3u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_002591D3: ;
    edi = eax;
    PUSH32(esp, 0x002591DAu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002591DA: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002591E1u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002591E1: ;
    ecx = esi;
    PUSH32(esp, 0x002591E8u); RECOMP_ABI_CALL(0x0008F780u, sub_0008F780); /* call 0x0008F780 */

loc_002591E8: ;
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
 * sub_00259200
 * Original: 0x00259200 - 0x00259281 (129 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259200: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00259223u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259223: ;
    edx = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00259254; /* jne: not equal / not zero */

loc_0025924A: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0x6270D8); /* cvtsi2ss */
    goto loc_0025925C;

loc_00259254: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x6270D8)); /* movss */

loc_0025925C: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0025926Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025926D: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00259274u); RECOMP_ABI_CALL(0x0008F8F0u, sub_0008F8F0); /* call 0x0008F8F0 */

loc_00259274: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00259290
 * Original: 0x00259290 - 0x00259319 (137 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259290: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x002592B4u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002592B4: ;
    ecx = MEM32(0x64D854);
    edi = eax;
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
    if (CMP_NE(_fa, _fb)) goto loc_002592E5; /* jne: not equal / not zero */

loc_002592DB: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_002592ED;

loc_002592E5: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_002592ED: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002592F8u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002592F8: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00259304u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259304: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025930Bu); RECOMP_ABI_CALL(0x0008F960u, sub_0008F960); /* call 0x0008F960 */

loc_0025930B: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
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
 * sub_00259320
 * Original: 0x00259320 - 0x002593B0 (144 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259320: ;
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
    PUSH32(esp, edi);
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = edx;
    edi = eax + 0x6270D8;
    PUSH32(esp, 0x00259363u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259363: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002593A6; /* je: equal / zero */

loc_0025936A: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002593A6; /* je: equal / zero */

loc_00259375: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002593A6; /* jne: not equal / not zero */

loc_0025937C: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002593A6; /* je: equal / zero */

loc_00259383: ;
    edx = ZX8(MEM8(ecx + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002593A6; /* jge: greater or equal (signed >=) */

loc_0025938B: ;
    edx = MEM32(ecx + 0x20);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_002593A6; /* je: equal / zero */

loc_00259395: ;
    ecx = MEM32(edi);
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(edi + 4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(edi + 8);
    MEM32(eax + 0x14) = ecx;

loc_002593A6: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002593B0
 * Original: 0x002593B0 - 0x00259413 (99 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002593B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002593B0: ;
    PUSH32(esp, edi);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x4000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002593FD; /* je: equal / zero */

loc_002593B9: ;
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002593FD; /* je: equal / zero */

loc_002593C4: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002593FD; /* jne: not equal / not zero */

loc_002593CB: ;
    edi = MEM32(eax + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002593E4; /* je: equal / zero */

loc_002593D2: ;
    edi = ZX8(MEM8(eax + 0xC));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002593E4; /* jge: greater or equal (signed >=) */

loc_002593DA: ;
    edi = MEM32(eax + 0x20);
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_002593E8; /* jne: not equal / not zero */

loc_002593E4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002593EB;

loc_002593E8: ;
    eax = ecx + 0xC;

loc_002593EB: ;
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002593FD: ;
    MEM32(edx) = 0;
    MEM32(edx + 4) = 0;
    MEM32(edx + 8) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00259420
 * Original: 0x00259420 - 0x002594A5 (133 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259420: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00259445u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259445: ;
    ecx = eax;
    edx = esp + 4;
    eax = esi;
    PUSH32(esp, 0x00259452u); RECOMP_ABI_CALL(0x002593B0u, sub_002593B0); /* call 0x002593B0 */

loc_00259452: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(esp + 4);
    eax = ecx + 0x6270D8;
    MEM32(eax) = edx;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x14);
    MEM16(ecx * 8 + 0x616FD8) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
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
 * sub_002594B0
 * Original: 0x002594B0 - 0x002594EB (59 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002594B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002594B0: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002594EA; /* je: equal / zero */

loc_002594B7: ;
    eax = MEM32(eax + 0x14);
    edx = MEM32(eax);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002594EA; /* je: equal / zero */

loc_002594C2: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002594EA; /* jne: not equal / not zero */

loc_002594C9: ;
    edx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002594EA; /* je: equal / zero */

loc_002594D0: ;
    edx = ZX8(MEM8(eax + 0xC));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002594EA; /* jge: greater or equal (signed >=) */

loc_002594D8: ;
    edx = MEM32(eax + 0x20);
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_002594EA; /* je: equal / zero */

loc_002594E2: ;
    SET_LO16(eax, MEM16(esp + 4));
    MEM16(ecx) = LO16(eax);

loc_002594EA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002594F0
 * Original: 0x002594F0 - 0x00259559 (105 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002594F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002594F0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00259513u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259513: ;
    edi = eax;
    PUSH32(esp, 0x0025951Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025951A: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025954F; /* je: equal / zero */

loc_00259521: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025954F; /* je: equal / zero */

loc_0025952C: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025954F; /* jne: not equal / not zero */

loc_00259533: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025954F; /* je: equal / zero */

loc_0025953A: ;
    edx = ZX8(MEM8(ecx + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025954F; /* jge: greater or equal (signed >=) */

loc_00259542: ;
    edx = MEM32(ecx + 0x20);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0025954F; /* je: equal / zero */

loc_0025954C: ;
    MEM16(eax) = LO16(edi);

loc_0025954F: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00259560
 * Original: 0x00259560 - 0x002595F9 (153 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259560: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00259582u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259582: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002595B4; /* je: equal / zero */

loc_00259589: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002595B4; /* je: equal / zero */

loc_00259594: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002595B4; /* jne: not equal / not zero */

loc_0025959B: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002595B4; /* je: equal / zero */

loc_002595A2: ;
    edx = ZX8(MEM8(ecx + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002595B4; /* jge: greater or equal (signed >=) */

loc_002595AA: ;
    edx = MEM32(ecx + 0x20);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_002595B8; /* jne: not equal / not zero */

loc_002595B4: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002595BB;

loc_002595B8: ;
    edx = ZX16(MEM16(eax));

loc_002595BB: ;
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
 * sub_00259600
 * Original: 0x00259600 - 0x0025966B (107 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259600: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00259625u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259625: ;
    edi = eax;
    PUSH32(esp, 0x0025962Cu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025962C: ;
    ebx = eax;
    PUSH32(esp, 0x00259633u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259633: ;
    ebp = eax;
    PUSH32(esp, 0x0025963Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025963A: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025965F; /* je: equal / zero */

loc_00259641: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025965F; /* je: equal / zero */

loc_0025964C: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025965F; /* jne: not equal / not zero */

loc_00259653: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025965Cu); RECOMP_ABI_CALL(0x0009FC20u, sub_0009FC20); /* call 0x0009FC20 */

loc_0025965C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0025965F: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00259670
 * Original: 0x00259670 - 0x002596DB (107 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259670: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00259695u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259695: ;
    edi = eax;
    PUSH32(esp, 0x0025969Cu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025969C: ;
    ebx = eax;
    PUSH32(esp, 0x002596A3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002596A3: ;
    ebp = eax;
    PUSH32(esp, 0x002596AAu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002596AA: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002596CF; /* je: equal / zero */

loc_002596B1: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002596CF; /* je: equal / zero */

loc_002596BC: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002596CF; /* jne: not equal / not zero */

loc_002596C3: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002596CCu); RECOMP_ABI_CALL(0x0009FC90u, sub_0009FC90); /* call 0x0009FC90 */

loc_002596CC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002596CF: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002596E0
 * Original: 0x002596E0 - 0x0025975B (123 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002596E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002596E0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00259706u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259706: ;
    edi = eax;
    PUSH32(esp, 0x0025970Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025970D: ;
    ebx = eax;
    PUSH32(esp, 0x00259714u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259714: ;
    ebp = eax;
    PUSH32(esp, 0x0025971Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025971B: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00259724u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259724: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025974E; /* je: equal / zero */

loc_0025972B: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025974E; /* je: equal / zero */

loc_00259736: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025974E; /* jne: not equal / not zero */

loc_0025973D: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025974Bu); RECOMP_ABI_CALL(0x0009FD10u, sub_0009FD10); /* call 0x0009FD10 */

loc_0025974B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0025974E: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00259760
 * Original: 0x00259760 - 0x002597BA (90 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259760: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0025977D; /* je: equal / zero */

loc_0025976B: ;
    eax = MEM32(eax + 0x14);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025977D; /* je: equal / zero */

loc_00259776: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025977F; /* je: equal / zero */

loc_0025977D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0025977F: ;
    edi = MEM32(edx + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259798; /* je: equal / zero */

loc_00259786: ;
    ecx = ZX8(MEM8(edx + 0xC));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00259798; /* jge: greater or equal (signed >=) */

loc_0025978E: ;
    eax = MEM32(edx + 0x20);
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_0025979D; /* jne: not equal / not zero */

loc_00259798: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0025979D: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002597A7u); RECOMP_ABI_CALL(0x0009F960u, sub_0009F960); /* call 0x0009F960 */

loc_002597A7: ;
    edx = ZX16(MEM16(esi + 4));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + edi + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002597C0
 * Original: 0x002597C0 - 0x0025983B (123 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002597C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002597C0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x002597E3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002597E3: ;
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x002597ECu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002597EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002597F2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002597F2: ;
    ecx = eax;
    eax = esi;
    PUSH32(esp, 0x002597FBu); RECOMP_ABI_CALL(0x00259760u, sub_00259760); /* call 0x00259760 */

loc_002597FB: ;
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
 * sub_00259840
 * Original: 0x00259840 - 0x002598BB (123 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00259840: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00259866u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259866: ;
    edi = eax;
    PUSH32(esp, 0x0025986Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025986D: ;
    ebx = eax;
    PUSH32(esp, 0x00259874u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259874: ;
    ebp = eax;
    PUSH32(esp, 0x0025987Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025987B: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00259884u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259884: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002598AE; /* je: equal / zero */

loc_0025988B: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002598AE; /* je: equal / zero */

loc_00259896: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002598AE; /* jne: not equal / not zero */

loc_0025989D: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002598ABu); RECOMP_ABI_CALL(0x0009FDA0u, sub_0009FDA0); /* call 0x0009FDA0 */

loc_002598AB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002598AE: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002598C0
 * Original: 0x002598C0 - 0x00259927 (103 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002598C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002598C0: ;
    eax = MEM32(0x64D880);
    edx = MEM32(0x64D858);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
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
    PUSH32(esp, edi);
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = edx;
    edi = eax + 0x6270D8;
    PUSH32(esp, 0x00259904u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259904: ;
    ebx = eax;
    PUSH32(esp, 0x0025990Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025990B: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00259913u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259913: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00259919u); RECOMP_ABI_CALL(0x0009FE80u, sub_0009FE80); /* call 0x0009FE80 */

loc_00259919: ;
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
 * sub_00259930
 * Original: 0x00259930 - 0x0025999A (106 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259930: ;
    eax = MEM32(0x64D880);
    edx = MEM32(0x64D858);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
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
    PUSH32(esp, edi);
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = edx;
    edi = eax + 0x6270D8;
    PUSH32(esp, 0x00259974u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259974: ;
    ebx = eax;
    PUSH32(esp, 0x0025997Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025997B: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00259983u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259983: ;
    ecx = eax;
    eax = esi;
    PUSH32(esp, 0x0025998Cu); RECOMP_ABI_CALL(0x0009FFB0u, sub_0009FFB0); /* call 0x0009FFB0 */

loc_0025998C: ;
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
 * sub_002599A0
 * Original: 0x002599A0 - 0x002599E5 (69 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002599A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002599A0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x002599C3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002599C3: ;
    edi = eax;
    PUSH32(esp, 0x002599CAu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002599CA: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002599D1u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_002599D1: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002599D8u); RECOMP_ABI_CALL(0x0008F9D0u, sub_0008F9D0); /* call 0x0008F9D0 */

loc_002599D8: ;
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
 * sub_002599F0
 * Original: 0x002599F0 - 0x00259A53 (99 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002599F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002599F0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00259A14u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259A14: ;
    edi = eax;
    PUSH32(esp, 0x00259A1Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259A1B: ;
    ebx = eax;
    PUSH32(esp, 0x00259A22u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259A22: ;
    ecx = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259A48; /* je: equal / zero */

loc_00259A2B: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx);
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259A48; /* je: equal / zero */

loc_00259A36: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259A48; /* jne: not equal / not zero */

loc_00259A3D: ;
    PUSH32(esp, ebx);
    eax = edi;
    PUSH32(esp, 0x00259A45u); RECOMP_ABI_CALL(0x0009FB70u, sub_0009FB70); /* call 0x0009FB70 */

loc_00259A45: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00259A48: ;
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
 * sub_00259A60
 * Original: 0x00259A60 - 0x00259AED (141 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259A60: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00259A83u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259A83: ;
    edi = eax;
    PUSH32(esp, 0x00259A8Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259A8A: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259AA3; /* je: equal / zero */

loc_00259A91: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259AA3; /* je: equal / zero */

loc_00259A9C: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259AA7; /* je: equal / zero */

loc_00259AA3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00259AB0;

loc_00259AA7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00259AADu); RECOMP_ABI_CALL(0x0009FBD0u, sub_0009FBD0); /* call 0x0009FBD0 */

loc_00259AAD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00259AB0: ;
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
 * sub_00259AF0
 * Original: 0x00259AF0 - 0x00259B81 (145 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259AF0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00259B12u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259B12: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259B33; /* je: equal / zero */

loc_00259B19: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259B33; /* je: equal / zero */

loc_00259B24: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259B33; /* jne: not equal / not zero */

loc_00259B2B: ;
    edx = ZX8(MEM8(ecx + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00259B38; /* jb: below (unsigned <) */

loc_00259B33: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00259B43;

loc_00259B38: ;
    ecx = MEM32(ecx + 0x20);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ZX16(MEM16(ecx + eax + 6));

loc_00259B43: ;
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
 * sub_00259B90
 * Original: 0x00259B90 - 0x00259C1C (140 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259B90: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00259BB3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259BB3: ;
    edi = eax;
    PUSH32(esp, 0x00259BBAu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259BBA: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259BD3; /* je: equal / zero */

loc_00259BC1: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259BD3; /* je: equal / zero */

loc_00259BCC: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259BD8; /* je: equal / zero */

loc_00259BD3: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00259BDF;

loc_00259BD8: ;
    edx = edi;
    PUSH32(esp, 0x00259BDFu); RECOMP_ABI_CALL(0x0008F2F0u, sub_0008F2F0); /* call 0x0008F2F0 */

loc_00259BDF: ;
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
 * sub_00259C20
 * Original: 0x00259C20 - 0x00259CB7 (151 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259C20: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00259C47u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259C47: ;
    edi = eax;
    PUSH32(esp, 0x00259C4Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259C4E: ;
    ebx = eax;
    PUSH32(esp, 0x00259C55u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259C55: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edi = esp + 0x18;
    eax = esi;
    PUSH32(esp, 0x00259C63u); RECOMP_ABI_CALL(0x000A0680u, sub_000A0680); /* call 0x000A0680 */

loc_00259C63: ;
    ecx = MEM32(eax);
    esi = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    edi = MEM32(0x64D854);
    eax = edi + 0x6270D8;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(eax + 8) = esi;
    MEM32(0x64D854) = edi;
    MEM32(ecx * 8 + 0x616FDC) = eax;
    POP32(esp, edi);
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0x18);
    MEM16(ecx * 8 + 0x616FD8) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = ecx;
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
 * sub_00259CC0
 * Original: 0x00259CC0 - 0x00259D51 (145 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259CC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259CC0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00259CE6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259CE6: ;
    edi = eax;
    PUSH32(esp, 0x00259CEDu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259CED: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00259CF4u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259CF4: ;
    PUSH32(esp, eax);
    edi = esp + 0x14;
    eax = esi;
    PUSH32(esp, 0x00259D00u); RECOMP_ABI_CALL(0x000A0710u, sub_000A0710); /* call 0x000A0710 */

loc_00259D00: ;
    esi = MEM32(eax);
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = esi;
    esi = MEM32(eax + 4);
    MEM32(ecx + 4) = esi;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 3;
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
 * sub_00259D60
 * Original: 0x00259D60 - 0x00259DF7 (151 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259D60: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00259D87u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259D87: ;
    esi = eax;
    PUSH32(esp, 0x00259D8Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259D8E: ;
    ebx = eax;
    PUSH32(esp, 0x00259D95u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259D95: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    esi = esp + 0x18;
    eax = edi;
    PUSH32(esp, 0x00259DA3u); RECOMP_ABI_CALL(0x000A0260u, sub_000A0260); /* call 0x000A0260 */

loc_00259DA3: ;
    ecx = MEM32(eax);
    esi = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    edi = MEM32(0x64D854);
    eax = edi + 0x6270D8;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(eax + 8) = esi;
    MEM32(0x64D854) = edi;
    MEM32(ecx * 8 + 0x616FDC) = eax;
    POP32(esp, edi);
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0x18);
    MEM16(ecx * 8 + 0x616FD8) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = ecx;
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
 * sub_00259E00
 * Original: 0x00259E00 - 0x00259E7C (124 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259E00: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00259E24u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259E24: ;
    ebx = eax;
    PUSH32(esp, 0x00259E2Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259E2B: ;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x00259E34u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259E34: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259E71; /* je: equal / zero */

loc_00259E3B: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259E71; /* je: equal / zero */

loc_00259E46: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259E71; /* jne: not equal / not zero */

loc_00259E4D: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259E71; /* je: equal / zero */

loc_00259E54: ;
    edx = ZX8(MEM8(ecx + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00259E71; /* jge: greater or equal (signed >=) */

loc_00259E5C: ;
    edx = MEM32(ecx + 0x20);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_00259E71; /* je: equal / zero */

loc_00259E66: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esp + 8));
    SET_LO8(ecx, LO8(ebx));
    MEM32(eax + 0x18) = ecx;

loc_00259E71: ;
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
 * sub_00259E80
 * Original: 0x00259E80 - 0x00259F22 (162 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259E80: ;
    eax = MEM32(0x64D880);
    edx = MEM32(0x64D858);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = eax + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = edx;
    ebx = eax + 0x6270D8;
    PUSH32(esp, 0x00259ECFu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259ECF: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259F17; /* je: equal / zero */

loc_00259ED6: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259F17; /* je: equal / zero */

loc_00259EE1: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259F17; /* jne: not equal / not zero */

loc_00259EE8: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259F17; /* je: equal / zero */

loc_00259EEF: ;
    edx = ZX8(MEM8(ecx + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00259F17; /* jge: greater or equal (signed >=) */

loc_00259EF7: ;
    edx = MEM32(ecx + 0x20);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_00259F17; /* je: equal / zero */

loc_00259F01: ;
    ecx = MEM32(ebx);
    MEM32(eax + 0x1C) = ecx;
    edx = MEM32(ebx + 4);
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(edi);
    MEM32(eax + 0x20) = ecx;
    edx = MEM32(edi + 4);
    MEM32(eax + 0x28) = edx;

loc_00259F17: ;
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
 * sub_00259F30
 * Original: 0x00259F30 - 0x00259FD7 (167 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259F30: ;
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
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00259F7D; /* jne: not equal / not zero */

loc_00259F73: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_00259F85;

loc_00259F7D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_00259F85: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00259F90u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00259F90: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00259FCD; /* je: equal / zero */

loc_00259F97: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259FCD; /* je: equal / zero */

loc_00259FA2: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00259FCD; /* jne: not equal / not zero */

loc_00259FA9: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00259FCD; /* je: equal / zero */

loc_00259FB0: ;
    edx = ZX8(MEM8(ecx + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00259FCD; /* jge: greater or equal (signed >=) */

loc_00259FB8: ;
    edx = MEM32(ecx + 0x20);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_00259FCD; /* je: equal / zero */

loc_00259FC2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */

loc_00259FCD: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00259FE0
 * Original: 0x00259FE0 - 0x0025A052 (114 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00259FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00259FE0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0025A003u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A003: ;
    edi = eax;
    PUSH32(esp, 0x0025A00Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A00A: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025A048; /* je: equal / zero */

loc_0025A011: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A048; /* je: equal / zero */

loc_0025A01C: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A048; /* jne: not equal / not zero */

loc_0025A023: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A048; /* je: equal / zero */

loc_0025A02A: ;
    edx = ZX8(MEM8(ecx + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025A048; /* jge: greater or equal (signed >=) */

loc_0025A032: ;
    edx = MEM32(ecx + 0x20);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0025A048; /* je: equal / zero */

loc_0025A03C: ;
    MEM32(eax + 0x30) = edi;
    MEM32(eax + 0x34) = edi;
    MEM32(eax + 0x38) = edi;
    MEM32(eax + 0x3C) = edi;

loc_0025A048: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025A060
 * Original: 0x0025A060 - 0x0025A0F3 (147 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025A060: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0025A086u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A086: ;
    edi = eax;
    PUSH32(esp, 0x0025A08Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A08D: ;
    ebx = eax;
    PUSH32(esp, 0x0025A094u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A094: ;
    ebp = eax;
    PUSH32(esp, 0x0025A09Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A09B: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0025A0A4u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A0A4: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025A0E6; /* je: equal / zero */

loc_0025A0AB: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A0E6; /* je: equal / zero */

loc_0025A0B6: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025A0E6; /* jne: not equal / not zero */

loc_0025A0BD: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A0E6; /* je: equal / zero */

loc_0025A0C4: ;
    edx = ZX8(MEM8(ecx + 0xC));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0025A0E6; /* jge: greater or equal (signed >=) */

loc_0025A0CC: ;
    edx = MEM32(ecx + 0x20);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0025A0E6; /* je: equal / zero */

loc_0025A0D6: ;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ebp;
    MEM32(eax + 0x38) = ebx;
    MEM32(eax + 0x3C) = edi;

loc_0025A0E6: ;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025A100
 * Original: 0x0025A100 - 0x0025A148 (72 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A100: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0025A123u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A123: ;
    edi = eax;
    PUSH32(esp, 0x0025A12Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A12A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025A130u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A130: ;
    ecx = eax;
    edx = edi;
    eax = esi;
    PUSH32(esp, 0x0025A13Bu); RECOMP_ABI_CALL(0x0008EFE0u, sub_0008EFE0); /* call 0x0008EFE0 */

loc_0025A13B: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025A150
 * Original: 0x0025A150 - 0x0025A198 (72 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A150: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0025A173u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A173: ;
    edi = eax;
    PUSH32(esp, 0x0025A17Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A17A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025A180u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A180: ;
    ecx = eax;
    edx = edi;
    eax = esi;
    PUSH32(esp, 0x0025A18Bu); RECOMP_ABI_CALL(0x0008F110u, sub_0008F110); /* call 0x0008F110 */

loc_0025A18B: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025A1A0
 * Original: 0x0025A1A0 - 0x0025A1E7 (71 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A1A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A1A0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0025A1C3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A1C3: ;
    edi = eax;
    PUSH32(esp, 0x0025A1CAu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A1CA: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025A1D1u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A1D1: ;
    ecx = eax;
    eax = esi;
    PUSH32(esp, 0x0025A1DAu); RECOMP_ABI_CALL(0x0008F280u, sub_0008F280); /* call 0x0008F280 */

loc_0025A1DA: ;
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
 * sub_0025A1F0
 * Original: 0x0025A1F0 - 0x0025A269 (121 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A1F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A1F0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0025A213u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A213: ;
    edi = eax;
    PUSH32(esp, 0x0025A21Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A21A: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025A221u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A221: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x0025A229u); RECOMP_ABI_CALL(0x0008F080u, sub_0008F080); /* call 0x0008F080 */

loc_0025A229: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_0025A270
 * Original: 0x0025A270 - 0x0025A2F4 (132 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A270: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0025A294u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A294: ;
    edi = eax;
    PUSH32(esp, 0x0025A29Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A29B: ;
    ebx = eax;
    PUSH32(esp, 0x0025A2A2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A2A2: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025A2AAu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A2AA: ;
    ecx = eax;
    eax = esi;
    PUSH32(esp, 0x0025A2B3u); RECOMP_ABI_CALL(0x0008F1E0u, sub_0008F1E0); /* call 0x0008F1E0 */

loc_0025A2B3: ;
    edx = MEM32(0x64D854);
    ecx = edx + 0x6270D8;
    MEM32(ecx) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_0025A300
 * Original: 0x0025A300 - 0x0025A37F (127 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A300: ;
    PUSH32(esp, esi);
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A37D; /* je: equal / zero */

loc_0025A308: ;
    PUSH32(esp, esi);
    eax = 0x493610;
    PUSH32(esp, 0x0025A313u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0025A313: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A329; /* je: equal / zero */

loc_0025A320: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A333; /* je: equal / zero */

loc_0025A329: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A33A; /* je: equal / zero */

loc_0025A333: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0025A33C; /* je: equal / zero */

loc_0025A33A: ;
    ecx = eax;

loc_0025A33C: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0025A354u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0025A354: ;
    edx = MEM32(eax + 8);
    ecx = MEM32(edi + 4);
    ecx = MEM32(edx + ecx * 4);
    edx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0x0025A37Au); RECOMP_ABI_CALL(0x0008FAE0u, sub_0008FAE0); /* call 0x0008FAE0 */

loc_0025A37A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0025A37D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025A380
 * Original: 0x0025A380 - 0x0025A3E7 (103 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A380: ;
    eax = MEM32(0x64D880);
    edx = MEM32(0x64D858);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
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
    PUSH32(esp, edi);
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = edx;
    edi = eax + 0x6270D8;
    PUSH32(esp, 0x0025A3C4u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A3C4: ;
    ebx = eax;
    PUSH32(esp, 0x0025A3CBu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A3CB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025A3D2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A3D2: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025A3D9u); RECOMP_ABI_CALL(0x0025A300u, sub_0025A300); /* call 0x0025A300 */

loc_0025A3D9: ;
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
 * sub_0025A3F0
 * Original: 0x0025A3F0 - 0x0025A444 (84 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A3F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025A3F0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0025A415u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A415: ;
    edi = eax;
    PUSH32(esp, 0x0025A41Cu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A41C: ;
    ebx = eax;
    PUSH32(esp, 0x0025A423u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A423: ;
    ebp = eax;
    PUSH32(esp, 0x0025A42Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A42A: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x0025A435u); RECOMP_ABI_CALL(0x0009FA70u, sub_0009FA70); /* call 0x0009FA70 */

loc_0025A435: ;
    eax = MEM32(esp + 0x24);
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
    esp += 4; return; /* ret */

}

/**
 * sub_0025A450
 * Original: 0x0025A450 - 0x0025A4C0 (112 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A450: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0025A472u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A472: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025A478u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A478: ;
    ecx = eax;
    eax = esi;
    PUSH32(esp, 0x0025A481u); RECOMP_ABI_CALL(0x0009FB00u, sub_0009FB00); /* call 0x0009FB00 */

loc_0025A481: ;
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
 * sub_0025A4C0
 * Original: 0x0025A4C0 - 0x0025A510 (80 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A4C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A4C0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0025A4E3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A4E3: ;
    edi = eax;
    PUSH32(esp, 0x0025A4EAu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A4EA: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0025A4F1u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A4F1: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x0025A4F9u); RECOMP_ABI_CALL(0x000A0360u, sub_000A0360); /* call 0x000A0360 */

loc_0025A4F9: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025A510
 * Original: 0x0025A510 - 0x0025A54A (58 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A510: ;
    PUSH32(esp, 0x0025A515u); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_0025A515: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(ecx + 0x6270D8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    MEM32(0x64D858) = edx;
    PUSH32(esp, 0x0025A53Fu); RECOMP_ABI_CALL(0x0008FB70u, sub_0008FB70); /* call 0x0008FB70 */

loc_0025A53F: ;
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
 * sub_0025A550
 * Original: 0x0025A550 - 0x0025A592 (66 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A550: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025A556u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A556: ;
    esi = eax;
    PUSH32(esp, 0x0025A55Du); RECOMP_ABI_CALL(0x0010B2D0u, sub_0010B2D0); /* call 0x0010B2D0 */

loc_0025A55D: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(ecx + 0x6270D8);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(0x64D858) = edx;
    PUSH32(esp, 0x0025A586u); RECOMP_ABI_CALL(0x0008FB70u, sub_0008FB70); /* call 0x0008FB70 */

loc_0025A586: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025A5A0
 * Original: 0x0025A5A0 - 0x0025A5F3 (83 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A5A0: ;
    eax = MEM32(0x64D854);
    edx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = edx;
    edx = MEM32(eax + 0x6270D8);
    MEM32(0x64D854) = eax;
    eax = MEM32(0x370380);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A5EB; /* je: equal / zero */

loc_0025A5CA: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025A5DE; /* jle: less or equal (signed <=) */

loc_0025A5D0: ;
    _fa = (uint32_t)(MEM32(ecx * 4 + 0x370388)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx * 4 + 0x370388), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A5EB; /* je: equal / zero */

loc_0025A5D9: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025A5D0; /* jl: less (signed <) */

loc_0025A5DE: ;
    MEM32(eax * 4 + 0x370388) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x370380) = eax;

loc_0025A5EB: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0025A600
 * Original: 0x0025A600 - 0x0025A695 (149 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025A600: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0025A626u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A626: ;
    ebx = eax;
    PUSH32(esp, 0x0025A62Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A62D: ;
    ebp = eax;
    PUSH32(esp, 0x0025A634u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A634: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0025A63Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A63D: ;
    edx = MEM32(esp + 0x10);
    esi = MEM32(0x64D854);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = edi;
    esi = esi + 0x6270D8;
    PUSH32(esp, 0x0025A658u); RECOMP_ABI_CALL(0x000BCD40u, sub_000BCD40); /* call 0x000BCD40 */

loc_0025A658: ;
    edx = MEM32(0x64D854);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = MEM32(0x64D858);
    MEM32(eax * 8 + 0x616FDC) = esi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebp);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0025A6A0
 * Original: 0x0025A6A0 - 0x0025A6D4 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A6A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A6A0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0025A6C2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A6C2: ;
    ecx = eax;
    eax = esi;
    PUSH32(esp, 0x0025A6CBu); RECOMP_ABI_CALL(0x000BCDD0u, sub_000BCDD0); /* call 0x000BCDD0 */

loc_0025A6CB: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025A6E0
 * Original: 0x0025A6E0 - 0x0025A72C (76 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A6E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A6E0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0025A704u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A704: ;
    edi = eax;
    PUSH32(esp, 0x0025A70Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A70B: ;
    ebx = eax;
    PUSH32(esp, 0x0025A712u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A712: ;
    edx = eax;
    PUSH32(esp, edi);
    ecx = ebx;
    eax = esi;
    PUSH32(esp, 0x0025A71Eu); RECOMP_ABI_CALL(0x000BCEC0u, sub_000BCEC0); /* call 0x000BCEC0 */

loc_0025A71E: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
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
 * sub_0025A730
 * Original: 0x0025A730 - 0x0025A7B8 (136 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A730: ;
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
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0025A77F; /* jne: not equal / not zero */

loc_0025A775: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0025A787;

loc_0025A77F: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0025A787: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0025A792u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A792: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    esi = eax;
    PUSH32(esp, 0x0025A79Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A79E: ;
    edi = eax;
    ecx = esi;
    eax = ebx;
    PUSH32(esp, 0x0025A7A9u); RECOMP_ABI_CALL(0x000BD020u, sub_000BD020); /* call 0x000BD020 */

loc_0025A7A9: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
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
 * sub_0025A7C0
 * Original: 0x0025A7C0 - 0x0025A801 (65 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A7C0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0025A7E2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025A7E2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A7F8; /* je: equal / zero */

loc_0025A7E6: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025A7F8; /* je: equal / zero */

loc_0025A7EB: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(edx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A7F8; /* je: equal / zero */

loc_0025A7F5: ;
    MEM32(ecx + 0xC) = eax;

loc_0025A7F8: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025A810
 * Original: 0x0025A810 - 0x0025A884 (116 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A810: ;
    eax = MEM32(0x64D884);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0025A845; /* je: equal / zero */

loc_0025A831: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025A845; /* je: equal / zero */

loc_0025A836: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A845; /* je: equal / zero */

loc_0025A840: ;
    ecx = MEM32(eax + 0xC);
    goto loc_0025A847;

loc_0025A845: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0025A847: ;
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
 * sub_0025A890
 * Original: 0x0025A890 - 0x0025A949 (185 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0025A890: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0025A8D0; /* jne: not equal / not zero */

loc_0025A8C6: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0025A8D8;

loc_0025A8D0: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0025A8D8: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0025A8FC; /* jne: not equal / not zero */

loc_0025A8F2: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_0025A904;

loc_0025A8FC: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_0025A904: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A941; /* je: equal / zero */

loc_0025A908: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025A941; /* je: equal / zero */

loc_0025A90D: ;
    edx = MEM32(edx + 0x18);
    ecx = MEM32(edx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A941; /* je: equal / zero */

loc_0025A917: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0025A92A; /* je: equal / zero */

loc_0025A922: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0025A92A; /* je: equal / zero */

loc_0025A927: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0025A941; /* jne: not equal / not zero */

loc_0025A92A: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0025A937; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0025A932: ;
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */

loc_0025A937: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0025A941; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_0025A93C: ;
    MEMF(ecx + 0x14) = xmm1.f[0]; /* movss */

loc_0025A941: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0025A950
 * Original: 0x0025A950 - 0x0025A9DC (140 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A950: ;
    eax = MEM32(0x64D884);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0025A99A; /* je: equal / zero */

loc_0025A971: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025A99A; /* je: equal / zero */

loc_0025A976: ;
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025A99A; /* je: equal / zero */

loc_0025A980: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0025A993; /* je: equal / zero */

loc_0025A98B: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0025A993; /* je: equal / zero */

loc_0025A990: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0025A99A; /* jne: not equal / not zero */

loc_0025A993: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    goto loc_0025A99D;

loc_0025A99A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0025A99D: ;
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
 * sub_0025A9E0
 * Original: 0x0025A9E0 - 0x0025AA6C (140 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025A9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025A9E0: ;
    eax = MEM32(0x64D884);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0025AA2A; /* je: equal / zero */

loc_0025AA01: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025AA2A; /* je: equal / zero */

loc_0025AA06: ;
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AA2A; /* je: equal / zero */

loc_0025AA10: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0025AA23; /* je: equal / zero */

loc_0025AA1B: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0025AA23; /* je: equal / zero */

loc_0025AA20: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0025AA2A; /* jne: not equal / not zero */

loc_0025AA23: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    goto loc_0025AA2D;

loc_0025AA2A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0025AA2D: ;
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
 * sub_0025AA70
 * Original: 0x0025AA70 - 0x0025AADD (109 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025AA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025AA70: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0025AA93u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025AA93: ;
    edi = eax;
    PUSH32(esp, 0x0025AA9Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025AA9A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0025AAD3; /* je: equal / zero */

loc_0025AAA0: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025AAD3; /* je: equal / zero */

loc_0025AAA5: ;
    edx = MEM32(esi + 0x18);
    edx = MEM32(edx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AAD3; /* je: equal / zero */

loc_0025AAAF: ;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(edx + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0025AACC; /* je: equal / zero */

loc_0025AABD: ;
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

loc_0025AACC: ;
    eax = ~eax;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx + 8) = ecx;

loc_0025AAD3: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025AAE0
 * Original: 0x0025AAE0 - 0x0025AB6B (139 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025AAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0025AAE0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x0025AB02u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025AB02: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AB2B; /* je: equal / zero */

loc_0025AB06: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0025AB2B; /* je: equal / zero */

loc_0025AB0B: ;
    edx = MEM32(esi + 0x18);
    esi = MEM32(edx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AB2B; /* je: equal / zero */

loc_0025AB15: ;
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
    goto loc_0025AB2D;

loc_0025AB2B: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0025AB2D: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x20)) >> 32) & 1);
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
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0025AB70
 * Original: 0x0025AB70 - 0x0025ABE7 (119 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025AB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0025AB70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0025AB76u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0025AB76: ;
    esi = MEM32(0x64D29C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025AB84; /* jne: not equal / not zero */

loc_0025AB80: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0025ABA9;

loc_0025AB84: ;
    ecx = MEM32(esi + 0x68);
    edx = ecx;
    edx = edx >> 0xE;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025AB9C; /* jne: not equal / not zero */

loc_0025AB94: ;
    ecx = ecx | 0x4000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0025ABA6;

loc_0025AB9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025ABA9; /* jne: not equal / not zero */

loc_0025ABA0: ;
    ecx = ecx & 0xFFFFBFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0025ABA6: ;
    MEM32(esi + 0x68) = ecx;

loc_0025ABA9: ;
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
 * sub_0025ABF0
 * Original: 0x0025ABF0 - 0x0025AF2A (826 bytes, 270 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025ABF0(void)
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

loc_0025ABF0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = eax;
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0025AF20; /* je: equal / zero */

loc_0025AC0B: ;
    ecx = MEM32(ecx + 0x18);
    ebp = MEM32(ecx + 0x18);
    edx = MEM32(ebp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0025AC2C; /* jbe: below or equal (unsigned <=) */

loc_0025AC1A: ;
    edi = MEM32(ebp);
    /* nop */

loc_0025AC20: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AC2C; /* je: equal / zero */

loc_0025AC24: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025AC20; /* jb: below (unsigned <) */

loc_0025AC2C: ;
    edx = MEM32(ebp);
    ebx = ecx + ecx * 2;
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ebx + edx;
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0025AC96; /* je: equal / zero */

loc_0025AC43: ;
    ecx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0025AF22; /* ja: above (unsigned >) */

loc_0025AC50: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x25AF2C); /* switch: 7 entries, 5 targets */
    if (_jt == 0x0025AC57u) goto loc_0025AC57;
    if (_jt == 0x0025AC69u) goto loc_0025AC69;
    if (_jt == 0x0025AC8Fu) goto loc_0025AC8F;
    if (_jt == 0x0025AD34u) goto loc_0025AD34;
    if (_jt == 0x0025AF04u) goto loc_0025AF04;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0025AC57: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AC96; /* je: equal / zero */

loc_0025AC5E: ;
    eax = MEM32(edx + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0025AC69: ;
    edi = MEM32(edi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AC96; /* je: equal / zero */

loc_0025AC70: ;
    esi = edi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0025AC79u); RECOMP_ABI_CALL(0x000FE8E0u, sub_000FE8E0); /* call 0x000FE8E0 */

loc_0025AC79: ;
    ecx = MEM32(ebp);
    edx = MEM32(ebx + ecx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(edx + eax + 8);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0025AC8F: ;
    edi = MEM32(edi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025ACA0; /* jne: not equal / not zero */

loc_0025AC96: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0025ACA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x333888)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0025AD05; /* jl: less (signed <) */

loc_0025ACAF: ;
    eax = MEM32(esp + 0x10);
    ebx = edi + -3;
    edx = 2;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi;

loc_0025ACC0: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax + -16); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0025ACCD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + -16)) */

loc_0025ACC6: ;
    xmm0 = XMM_SCALAR(MEMF(eax + -16)); /* movss */
    esi = ecx;

loc_0025ACCD: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0025ACD9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_0025ACD2: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    esi = edx + -1;

loc_0025ACD9: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0025ACE6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x10)) */

loc_0025ACDF: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    esi = edx;

loc_0025ACE6: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x20); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0025ACF4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x20)) */

loc_0025ACEC: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    esi = edx + 1;

loc_0025ACF4: ;
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
    if (CMP_B(_fa, _fb)) goto loc_0025ACC0; /* jb: below (unsigned <) */

loc_0025AD01: ;
    edx = MEM32(esp + 0x10);

loc_0025AD05: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0025AD25; /* jae: above or equal (unsigned >=) */

loc_0025AD09: ;
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + edx + 4;

loc_0025AD12: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0025AD1D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_0025AD17: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    esi = ecx;

loc_0025AD1D: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025AD12; /* jb: below (unsigned <) */

loc_0025AD25: ;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(esi + edx + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0025AD34: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025AD6E; /* jne: not equal / not zero */

loc_0025AD39: ;
    ecx = MEM32(esp + 0x38);
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    goto loc_0025ADE8;

loc_0025AD6E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025ADA1; /* jne: not equal / not zero */

loc_0025AD73: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 8);
    esi = esp + 0x1C;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x24) = eax;
    eax = esi;
    ecx = esi;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x0025AD9Fu); RECOMP_ABI_CALL(0x00028F60u, sub_00028F60); /* call 0x00028F60 */

loc_0025AD9F: ;
    goto loc_0025ADEC;

loc_0025ADA1: ;
    ecx = MEM32(esp + 0x38);
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
    eax = esp + 0x1C;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    ecx = eax;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x0025ADE8u); RECOMP_ABI_CALL(0x000FAF00u, sub_000FAF00); /* call 0x000FAF00 */

loc_0025ADE8: ;
    esi = esp + 0x1C;

loc_0025ADEC: ;
    edi = MEM32(edi + 8);
    xmm5 = XMM_SCALAR(MEMF(0x333818)); /* movss */
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_0025AEEA; /* jbe: below or equal (unsigned <=) */

loc_0025AE08: ;
    ebx = MEM32(esp + 0x10);
    /* nop */

loc_0025AE10: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AEEA; /* je: equal / zero */

loc_0025AE1B: ;
    ecx = MEM32(esp + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AE2E; /* je: equal / zero */

loc_0025AE23: ;
    edi = ZX16(MEM16(ebx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0025AEDA; /* je: equal / zero */

loc_0025AE2E: ;
    ecx = MEM32(esp + 0x38);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0xC);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x38); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x34); /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0025AEDA; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm5.f[0]) */

loc_0025AED5: ;
    xmm5 = xmm0; /* movaps */
    ebp = edx;

loc_0025AEDA: ;
    eax = MEM32(esp + 0x18);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025AE10; /* jb: below (unsigned <) */

loc_0025AEEA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AF22; /* je: equal / zero */

loc_0025AEF1: ;
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    ebp = ebp << 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(edx + ebp + 8);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0025AF04: ;
    eax = MEM32(esp + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0025AC96; /* jae: above or equal (unsigned >=) */

loc_0025AF11: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + edx + 8);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0025AF20: ;
    eax = edx;

loc_0025AF22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_0025AF2A
 * Original: 0x0025AF2A - 0x0025AFD8 (174 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025AF2A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025AF2A: ;
    edi = edi;
    PUSH32(esp, edi);
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */
    eax = eax & 0x25AC6900;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi + 0x340025AC) = MEM8(edi + 0x340025AC) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi + 0x340025AC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = MEM32(esi); esi += RECOMP_DF_STEP(4); /* lodsd */
    eax = eax & 0x25AD3400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebp * 4 + -1358692315) = MEM8(ebp * 4 + -1358692315) + HI8(edx);
    _fa = (uint32_t)(MEM8(ebp * 4 + -1358692315)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = eax & 0xCCCCCC00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, ecx);
    eax = MEM32(0x64D854);
    ecx = MEM32(eax + 0x6270B8);
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
    edi = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = MEM32(eax + 0x6270D8);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax + 0x6270D8;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_0025AFA0; /* jbe: below or equal (unsigned <=) */

loc_0025AF8E: ;
    ebx = MEM32(ebx);

loc_0025AF90: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AF9C; /* je: equal / zero */

loc_0025AF94: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025AF90; /* jb: below (unsigned <) */

loc_0025AF9C: ;
    ebx = MEM32(esp + 0x10);

loc_0025AFA0: ;
    esi = MEM32(ebx);
    ecx = ecx + ecx * 2;
    ecx = MEM32(esi + ecx * 4 + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edi * 8 + 0x616FD8) = 1;
    MEM32(edi * 8 + 0x616FDC) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x64D854) = eax;
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
 * sub_0025AF50
 * Original: 0x0025AF50 - 0x0025AFD8 (136 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0025AF50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0025AF50: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D854);
    ecx = MEM32(eax + 0x6270B8);
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
    edi = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = MEM32(eax + 0x6270D8);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax + 0x6270D8;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_0025AFA0; /* jbe: below or equal (unsigned <=) */

loc_0025AF8E: ;
    ebx = MEM32(ebx);

loc_0025AF90: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025AF9C; /* je: equal / zero */

loc_0025AF94: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0025AF90; /* jb: below (unsigned <) */

loc_0025AF9C: ;
    ebx = MEM32(esp + 0x10);

loc_0025AFA0: ;
    esi = MEM32(ebx);
    ecx = ecx + ecx * 2;
    ecx = MEM32(esi + ecx * 4 + 8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edi * 8 + 0x616FD8) = 1;
    MEM32(edi * 8 + 0x616FDC) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x64D854) = eax;
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
