/**
 * PoP SoT xbox-demo - render, chunk 2
 * Rendering: Jade GraphicDK and its Xbox renderer (JadeGDIInterface, XbTextureMgr)
 * Functions: 161 (0x000B3237 - 0x000F4AA0)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_000B3237
 * Original: 0x000B3237 - 0x000B3380 (329 bytes, 87 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3237(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3237: ;
    edx = MEM32(edx + 8);
    MEM16(edx + 0x16) = LO16(edi);
    edx = MEM32(eax + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 0x18) = LO16(ecx);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    MEM16(edx + 0x1A) = LO16(ebx);
    xmm1.f[0] = xmm1.f[0] + MEMF(esi); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 4); /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    ecx = MEM32(eax + 0xC);
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x4C); /* addss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx + 4) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    MEMF(ecx + 8) = xmm6.f[0]; /* movss */
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x38); /* addss */
    MEMF(ecx) = xmm6.f[0]; /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x3C); /* addss */
    MEMF(ecx + 4) = xmm6.f[0]; /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x40); /* addss */
    MEMF(ecx + 8) = xmm6.f[0]; /* movss */
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm3.f[0]; /* subss */
    MEMF(ecx) = xmm6.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(ecx + 4) = xmm3.f[0]; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    MEMF(ecx + 8) = xmm3.f[0]; /* movss */
    ecx = MEM32(eax + 0xC);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    ecx = MEM32(eax + 0x14);
    esi = MEM32(esi + 0x28);
    MEM32(ecx + 4) = esi;
    edx = MEM32(eax + 0x14);
    MEM32(edx + 8) = esi;
    ecx = MEM32(eax + 0x14);
    MEM32(ecx + 0xC) = esi;
    edx = MEM32(eax + 0x14);
    ecx = MEM32(0x64D29C);
    MEM32(edx + 0x10) = esi;
    esi = MEM32(ecx + 0x74);
    edx = esi;
    edx = edx & 0xFFFFFEDFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x800;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x74) = edx;
    ecx = MEM32(eax + 0x24);
    MEM32(ecx + 4) = ebx;
    edx = MEM32(eax);
    eax = MEM32(0x64D2AC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000B3368u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B3365u); } /* indirect call */
    }

loc_000B3368: ;
    ecx = MEM32(0x64D29C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x74) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B3380
 * Original: 0x000B3380 - 0x000B37B6 (1078 bytes, 262 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3380(void)
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

loc_000B3380: ;
    eax = MEM32(esi + 0x48);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000B3393; /* je: equal / zero */

loc_000B338D: ;
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x48) = eax;

loc_000B3393: ;
    ecx = MEM32(esi + 0x48);
    eax = 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B33A2; /* jle: less or equal (signed <=) */

loc_000B339F: ;
    MEM32(esi + 0x48) = eax;

loc_000B33A2: ;
    eax = MEM32(esi + 0x48);
    xmm0 = XMM_SCALAR(MEMF(0x333898)); /* movss */
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x20) = 0;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_000B37AF; /* jle: less or equal (signed <=) */

loc_000B33D8: ;
    edx = esi + 0x68;
    MEM32(esp + 0x24) = edx;
    eax = esi + 0x64;
    ecx = esi + 0x5C;
    edx = esi + 0x58;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = edx;
    ebp = esi + 0x6C;
    ebx = esi + 0x71;
    edi = esi + 0x70;
    /* nop */

loc_000B3400: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xC); /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000B341Eu); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_000B341E: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337E0); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B3464; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B3456: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x333898); /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_000B3464: ;
    fp_push(MEMF(0x49A980)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333A50); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    SET_LO8(eax, LO8(eax) & 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(eax));
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    edx = SX8(LO8(eax));
    MEM8(edi) = LO8(eax);
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEMD(esp + 0x60) = fp_top(); /* fst */
    eax = MEM32(esp + 0x60);
    SET_LO8(ecx, LO8(ecx) & 7);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM8(ebx) = LO8(ecx);
    MEMF(ebp) = xmm0.f[0]; /* movss */
    if ((_fas >= 0)) goto loc_000B34B8; /* jns: not sign (positive) */

loc_000B34AC: ;
    eax = eax | 0xFFFFFC00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B34C4;

loc_000B34B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B34C4; /* jle: less or equal (signed <=) */

loc_000B34BF: ;
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000B34C4: ;
    eax = MEM32(eax * 4 + 0x49A988);
    MEMD(esp + 0x60) = fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B34E9; /* jge: greater or equal (signed >=) */

loc_000B34DD: ;
    eax = eax | 0xFFFFFC00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B34F5;

loc_000B34E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B34F5; /* jle: less or equal (signed <=) */

loc_000B34F0: ;
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000B34F5: ;
    edx = MEM32(eax * 4 + 0x49A988);
    eax = MEM32(esp + 0x14);
    MEM32(eax) = edx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000B351Du); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_000B351D: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    ecx = MEM32(esp + 0x18);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3337E0); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000B3564u); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_000B3564: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ecx;
    ecx = 0x1C;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x14);
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3337E0); /* mulss */
    eax = MEM32(esp + 0x24);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x20); /* subss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000B35E6u); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_000B35E6: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337E0); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B362C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B361E: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x333898); /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_000B362C: ;
    fp_push(MEMF(0x49A980)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333A50); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    SET_LO8(eax, LO8(eax) & 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(eax));
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEM8(edi) = LO8(eax);
    eax = SX8(LO8(eax));
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMD(esp + 0x60) = fp_top(); /* fst */
    eax = MEM32(esp + 0x60);
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(edx, LO8(edx) & 7);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM8(ebx) = LO8(edx);
    MEMF(ebp) = xmm0.f[0]; /* movss */
    if ((_fas >= 0)) goto loc_000B3680; /* jns: not sign (positive) */

loc_000B3674: ;
    eax = eax | 0xFFFFFC00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B368C;

loc_000B3680: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B368C; /* jle: less or equal (signed <=) */

loc_000B3687: ;
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000B368C: ;
    ecx = MEM32(eax * 4 + 0x49A988);
    MEMD(esp + 0x60) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 0x10);
    MEM32(edx) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_000B36B1; /* jge: greater or equal (signed >=) */

loc_000B36A5: ;
    eax = eax | 0xFFFFFC00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B36BD;

loc_000B36B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B36BD; /* jle: less or equal (signed <=) */

loc_000B36B8: ;
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000B36BD: ;
    eax = MEM32(eax * 4 + 0x49A988);
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x24)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000B36E5u); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_000B36E5: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    edx = MEM32(esp + 0x18);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3337E0); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x2C)); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000B372Cu); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_000B372C: ;
    edx = MEM32(esp + 0x10);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3337E0); /* mulss */
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x5C); /* addss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esi + 0x48);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_000B3400; /* jl: less (signed <) */

loc_000B37AF: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B37C0
 * Original: 0x000B37C0 - 0x000B3AB4 (756 bytes, 182 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B37C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B37C0: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x333B6C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x333ABC)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x333920)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D29C);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edi);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333B68)); /* movss */
    edi = ebx + 0xD0;
    PUSH32(esp, esi);
    eax = 1;
    ecx = esp + 0x28;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0x000B386Bu); RECOMP_ABI_CALL(0x000A0C60u, sub_000A0C60); /* call 0x000A0C60 */

loc_000B386B: ;
    edx = MEM32(esi + 0xE78);
    ecx = MEM32(esp + 0x30);
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0xE78) = edx;
    eax = edx;
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_000B38A4; /* jns: not sign (positive) */

loc_000B3887: ;
    edx = MEM32(esi + 0x50);
    edx = edx | 0x1000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | 0x1FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi + 0x50) = edx;
    MEM32(esi + 0xE78) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B38A4: ;
    edi = MEM32(esi + 0x50);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi & 0xFEFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x50) = edi;
    ecx = MEM32(ebx + 0x10C);
    edx = MEM32(ebx + 0xA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    edi = MEM32(ebx + 0x250);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm4.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (int32_t)MEMF(ebx + 0xF4); /* cvttss2si */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx + 0x110);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) eax = edx; /* cmovg */
    xmm5.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm5.f[0]; /* movss */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm6.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (int32_t)MEMF(ebx + 0xF8); /* cvttss2si */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx + 0xA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) eax = ecx; /* cmovle */
    xmm3.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    eax = edi;
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0x000B3936u); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_000B3936: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    edi = MEM32(ebx + 0x250);
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x3C); /* addss */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    eax = edi;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000B395Bu); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_000B395B: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B39D3; /* ja: above (unsigned >) (xmm4.f[0] vs xmm0.f[0]) */

loc_000B399C: ;
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B39D3; /* ja: above (unsigned >) (xmm0.f[0] vs xmm5.f[0]) */

loc_000B39A1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B39D3; /* ja: above (unsigned >) (xmm6.f[0] vs xmm0.f[0]) */

loc_000B39AC: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B39D3; /* ja: above (unsigned >) (xmm0.f[0] vs xmm3.f[0]) */

loc_000B39B1: ;
    edx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x1B);
    { uint32_t _icall_target = MEM32(ebx + 0x2C); PUSH32(esp, 0x000B39BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B39B8u); } /* indirect call */
    }

loc_000B39BB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    ebx = MEM32(0x64D29C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x47DC00); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B39DD; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x47DC00)) */

loc_000B39D3: ;
    MEM32(esi + 0xE78) = MEM32(esi + 0xE78) | 0x100;
    _fa = (uint32_t)(MEM32(esi + 0xE78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000B39DD: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000B39E0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + edi * 8 + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x38); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + edi * 8 + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x38); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = ebx + 0xD0;
    eax = 1;
    edx = esp + 0x1C;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000B3A27u); RECOMP_ABI_CALL(0x000A07A0u, sub_000A07A0); /* call 0x000A07A0 */

loc_000B3A27: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B3A95; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B3A3B: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    if ((_fca > _fcb)) goto loc_000B3A95; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_000B3A42: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000B3A95; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B3A53: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca > _fcb)) goto loc_000B3A95; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_000B3A5A: ;
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1B);
    { uint32_t _icall_target = MEM32(ebx + 0x2C); PUSH32(esp, 0x000B3A64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B3A61u); } /* indirect call */
    }

loc_000B3A64: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    ebx = MEM32(0x64D29C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x47DC00); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B3AA4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x47DC00)) */

loc_000B3A7C: ;
    eax = MEM32(esi + 0xE78);
    edx = 1;
    ecx = edi;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xE78) = eax;
    goto loc_000B3AA4;

loc_000B3A95: ;
    ecx = edi;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0xE78) = MEM32(esi + 0xE78) | eax;
    _fa = (uint32_t)(MEM32(esi + 0xE78)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000B3AA4: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B39E0; /* jl: less (signed <) */

loc_000B3AAE: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B3AC0
 * Original: 0x000B3AC0 - 0x000B3BEE (302 bytes, 61 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3AC0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64CF80);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000B3AD3; /* jne: not equal / not zero */

loc_000B3ACE: ;
    PUSH32(esp, 0x000B3AD3u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000B3AD3: ;
    edx = 0xE88;
    ecx = eax;
    PUSH32(esp, 0x000B3ADFu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000B3ADF: ;
    xmm1 = XMM_SCALAR(MEMF(0x33383C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3339D4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x3337D4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    esi = eax;
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xE7C) = ebx;
    MEM32(esi + 0xE80) = ebx;
    MEM32(esi + 0xE84) = ebx;
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333884)); /* movss */
    MEMF(esi + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x3337CC)); /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x3337C8)); /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333854)); /* movss */
    MEMF(esi + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x38) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x40) = xmm2.f[0]; /* movss */
    MEM32(esi + 0x48) = 0x20;
    MEM32(esi + 0x50) = 0xC;
    MEM8(esi + 0x54) = LO8(ebx);
    PUSH32(esp, 0x000B3B97u); RECOMP_ABI_CALL(0x000B3380u, sub_000B3380); /* call 0x000B3380 */

loc_000B3B97: ;
    _fa = (uint32_t)(MEM8(esi + 0x50)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x50), 8 (8-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000B3BA8; /* jne: not equal / not zero */

loc_000B3BA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */

loc_000B3BA8: ;
    MEMF(esi + 0xE58) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE5C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE60) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE64) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE68) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE6C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE70) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xE74) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B3BF0
 * Original: 0x000B3BF0 - 0x000B4383 (1939 bytes, 514 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3BF0(void)
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

loc_000B3BF0: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x90);
    SET_LO8(eax, MEM8(esi + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3C1B; /* je: equal / zero */

loc_000B3C05: ;
    eax = MEM32(esi + 0xE78);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0x1FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xE78) = eax;
    goto loc_000B3C26;

loc_000B3C1B: ;
    _fa = (uint32_t)(MEM8(esi + 0x50)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x50), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B3C26; /* je: equal / zero */

loc_000B3C21: ;
    PUSH32(esp, 0x000B3C26u); RECOMP_ABI_CALL(0x000B37C0u, sub_000B37C0); /* call 0x000B37C0 */

loc_000B3C26: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x1000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B437B; /* jne: not equal / not zero */

loc_000B3C34: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B3CFF; /* jne: not equal / not zero */

loc_000B3C3C: ;
    eax = MEM32(0x64D29C);
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x194); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x198); /* subss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 0x190); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esi + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x190)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x194)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x198)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_000B3D13;

loc_000B3CFF: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    eax = MEM32(esi + 8);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;

loc_000B3D13: ;
    eax = MEM32(esi + 0x48);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    eax = eax + eax * 2;
    PUSH32(esp, 0x000B3D26u); RECOMP_ABI_CALL(0x00089C20u, sub_00089C20); /* call 0x00089C20 */

loc_000B3D26: ;
    eax = MEM32(0x64D2B0);
    ecx = MEM32(eax + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm4 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    MEMF(edx + 0xC) = xmm4.f[0]; /* movss */
    ecx = MEM32(eax + 0x1C);
    MEMF(ecx + 0x10) = xmm4.f[0]; /* movss */
    edx = MEM32(eax + 0x1C);
    MEMF(edx + 0x14) = xmm4.f[0]; /* movss */
    ecx = MEM32(eax + 0x24);
    edx = MEM32(eax + 0xC);
    eax = MEM32(eax + 0x14);
    ebx = MEM32(ecx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esi + 0xE78);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    MEM32(esp + 0x1C) = edx;
    xmm5 = xmm1; /* movaps */
    if (TEST_NZ(_fa, _fb)) goto loc_000B3D98; /* jne: not equal / not zero */

loc_000B3D95: ;
    xmm5 = xmm4; /* movaps */

loc_000B3D98: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm6 = XMM_SCALAR(MEMF(0x333884)); /* movss */
    PUSH32(esp, ebp);
    ebp = eax;
    ebp = ebp & 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0 = xmm3; /* movaps */
    if ((_fa != 0)) goto loc_000B3DB1; /* jne: not equal / not zero */

loc_000B3DAE: ;
    xmm0 = xmm6; /* movaps */

loc_000B3DB1: ;
    PUSH32(esp, edi);
    edi = eax;
    edi = edi & 0x80;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm1 = xmm3; /* movaps */
    if ((_fa != 0)) goto loc_000B3DC2; /* jne: not equal / not zero */

loc_000B3DBF: ;
    xmm1 = xmm4; /* movaps */

loc_000B3DC2: ;
    ecx = eax;
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    if ((_fa != 0)) goto loc_000B3DD3; /* jne: not equal / not zero */

loc_000B3DD0: ;
    xmm1 = xmm4; /* movaps */

loc_000B3DD3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm2 = XMM_SCALAR(MEMF(0x33382C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_000B3DF7; /* jne: not equal / not zero */

loc_000B3DF4: ;
    xmm0 = xmm6; /* movaps */

loc_000B3DF7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    xmm1 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_000B3E01; /* jne: not equal / not zero */

loc_000B3DFE: ;
    xmm1 = xmm4; /* movaps */

loc_000B3E01: ;
    edx = eax;
    edx = edx & 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    if ((_fa != 0)) goto loc_000B3E12; /* jne: not equal / not zero */

loc_000B3E0F: ;
    xmm1 = xmm4; /* movaps */

loc_000B3E12: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_000B3E2E; /* jne: not equal / not zero */

loc_000B3E2B: ;
    xmm0 = xmm6; /* movaps */

loc_000B3E2E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm1 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_000B3E38; /* jne: not equal / not zero */

loc_000B3E35: ;
    xmm1 = xmm4; /* movaps */

loc_000B3E38: ;
    ecx = eax;
    ecx = ecx & 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    if ((_fa != 0)) goto loc_000B3E49; /* jne: not equal / not zero */

loc_000B3E46: ;
    xmm1 = xmm4; /* movaps */

loc_000B3E49: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_000B3E65; /* jne: not equal / not zero */

loc_000B3E62: ;
    xmm0 = xmm6; /* movaps */

loc_000B3E65: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm1 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_000B3E6F; /* jne: not equal / not zero */

loc_000B3E6C: ;
    xmm1 = xmm4; /* movaps */

loc_000B3E6F: ;
    edx = eax;
    edx = edx & 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    if ((_fa != 0)) goto loc_000B3E80; /* jne: not equal / not zero */

loc_000B3E7D: ;
    xmm1 = xmm4; /* movaps */

loc_000B3E80: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_000B3E9C; /* jne: not equal / not zero */

loc_000B3E99: ;
    xmm0 = xmm6; /* movaps */

loc_000B3E9C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm1 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_000B3EA6; /* jne: not equal / not zero */

loc_000B3EA3: ;
    xmm1 = xmm4; /* movaps */

loc_000B3EA6: ;
    ecx = eax;
    ecx = ecx & 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    if ((_fa != 0)) goto loc_000B3EB7; /* jne: not equal / not zero */

loc_000B3EB4: ;
    xmm1 = xmm4; /* movaps */

loc_000B3EB7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_000B3ED3; /* jne: not equal / not zero */

loc_000B3ED0: ;
    xmm0 = xmm6; /* movaps */

loc_000B3ED3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm1 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_000B3EDD; /* jne: not equal / not zero */

loc_000B3EDA: ;
    xmm1 = xmm4; /* movaps */

loc_000B3EDD: ;
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    if ((_fa != 0)) goto loc_000B3EEC; /* jne: not equal / not zero */

loc_000B3EE9: ;
    xmm1 = xmm4; /* movaps */

loc_000B3EEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_000B3F08; /* jne: not equal / not zero */

loc_000B3F05: ;
    xmm0 = xmm6; /* movaps */

loc_000B3F08: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm1 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_000B3F12; /* jne: not equal / not zero */

loc_000B3F0F: ;
    xmm1 = xmm4; /* movaps */

loc_000B3F12: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_000B3F20; /* jne: not equal / not zero */

loc_000B3F1D: ;
    xmm1 = xmm4; /* movaps */

loc_000B3F20: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_000B3F3C; /* jne: not equal / not zero */

loc_000B3F39: ;
    xmm0 = xmm6; /* movaps */

loc_000B3F3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm1 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_000B3F46; /* jne: not equal / not zero */

loc_000B3F43: ;
    xmm1 = xmm4; /* movaps */

loc_000B3F46: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    if (CMP_NE(_fa, _fb)) goto loc_000B3F54; /* jne: not equal / not zero */

loc_000B3F51: ;
    xmm1 = xmm4; /* movaps */

loc_000B3F54: ;
    fp_push(MEMF(esi + 0xE7C)); /* fld float */
    eax = MEM32(esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    fp_push(MEMF(esi + 0xE80)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    fp_push(MEMF(esi + 0xE84)); /* fld float */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    MEM32(esi + 0xE7C) = eax;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    ecx = MEM32(esi + 4);
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] * fp_top()); fp_pop(); /* fmulp st(3) */
    MEM32(esi + 0xE80) = ecx;
    edx = MEM32(esi + 8);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esi + 0xE84) = edx;
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3337C0)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B3FEB; /* jnp: not parity */

loc_000B3FCA: ;
    eax = MEM32(esi + 0xE78);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000B3FEB; /* je: equal / zero */

loc_000B3FD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B3FEB; /* je: equal / zero */

loc_000B3FDE: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x10); /* divss */
    goto loc_000B3FF8;

loc_000B3FEB: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x49362C); /* divss */

loc_000B3FF8: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm2 = xmm4; /* movaps */
    MEM32(esp + 0x10) = edi;
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    ebp = esi + 0xE58;
    goto loc_000B4010;

    /* nop */

loc_000B4010: ;
    xmm0 = XMM_SCALAR(MEMF(esp + edi + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp); /* addss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEMF(ebp) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B4035; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_000B402E: ;
    MEMF(ebp) = xmm4.f[0]; /* movss */
    goto loc_000B403F;

loc_000B4035: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B403F; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_000B403A: ;
    MEMF(ebp) = xmm3.f[0]; /* movss */

loc_000B403F: ;
    eax = MEM32(esi + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(ebp)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000B404Eu); RECOMP_ABI_CALL(0x00269770u, sub_00269770); /* call 0x00269770 */

loc_000B404E: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + edi + 0x78) = eax;
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000B4010; /* jl: less (signed <) */

loc_000B4067: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4378; /* je: equal / zero */

loc_000B4071: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(0x64D29C);
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_000B433E; /* jle: less or equal (signed <=) */

loc_000B408A: ;
    ebp = MEM32(esp + 0x24);
    esi = MEM32(esp + 0x9C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x71) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x71;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B40A0;

    /* nop */

loc_000B40A0: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    ecx = (uint32_t)(int32_t)SMEM8(esi + -1);
    eax = MEM32(esp + eax * 4 + 0x78);
    ecx = MEM32(esp + ecx * 4 + 0x78);
    xmm0 = XMM_SCALAR(MEMF(esi + -5)); /* movss */
    PUSH32(esp, 0x000B40B9u); RECOMP_ABI_CALL(0x00269770u, sub_00269770); /* call 0x00269770 */

loc_000B40B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B40CD; /* jne: not equal / not zero */

loc_000B40BD: ;
    edx = MEM32(0x64D2B0);
    eax = MEM32(edx + 0x24);
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_000B4320;

loc_000B40CD: ;
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = eax;
    eax = MEM32(0x64D2B0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x24);
    edx = ecx;
    _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    xmm7 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(ebx + 6) = 0;
    MEM16(ebx + 8) = 1;
    MEM16(ebx + 0xA) = 2;
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ebx) = LO16(eax);
    SET_LO16(edx, MEM16(ebx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ebx + 2) = LO16(eax);
    eax = MEM32(esp + 0x9C);
    _fb = (uint32_t)(2) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edx, LO16(edx) + 2);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(ebx + 4) = LO16(edx);
    xmm0 = XMM_SCALAR(MEMF(esi + -25)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + -21)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x160)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edi + 0x164)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(edi + 0x168)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x174)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x178)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0x170); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + -13)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(edi + 0x164)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(edi + 0x160)); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x168)); /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + -21)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x54) = xmm2.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edi + 0x170)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edi + 0x174)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(edi + 0x178)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + -25); /* subss */
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esi + -9)); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    xmm2 = xmm3; /* movaps */
    xmm3 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x30);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = edx;
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    eax = MEM32(esp + 0x34);
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x38) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    edx = MEM32(esp + 0x38);
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = edx;
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x3C) = xmm5.f[0]; /* movss */
    eax = MEM32(esp + 0x3C);
    MEM32(ebp) = eax;
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x40);
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEM32(ebp + 4) = edx;
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x44);
    MEMF(esp + 0x48) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x48);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;
    MEM32(ebp + 0xC) = edx;
    MEM32(esp + 0x24) = ecx;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x24;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B4320: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x9C);
    edx = MEM32(ecx + 0x48);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000B40A0; /* jl: less (signed <) */

loc_000B433E: ;
    esi = MEM32(edi + 0x74);
    eax = MEM32(0x64D2B0);
    edx = esi;
    edx = edx & 0xFEFFFEDFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x800;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x74) = edx;
    edx = MEM32(0x64D2AC);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(0x3F89F0) = 0x3C09D4;
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x000B436Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B436Au); } /* indirect call */
    }

loc_000B436D: ;
    eax = MEM32(0x64D29C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x74) = esi;

loc_000B4378: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000B437B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B4390
 * Original: 0x000B4390 - 0x000B4439 (169 bytes, 45 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4390: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B439E; /* jne: not equal / not zero */

loc_000B4399: ;
    PUSH32(esp, 0x000B439Eu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000B439E: ;
    PUSH32(esp, edi);
    edx = 0xB0;
    ecx = eax;
    PUSH32(esp, 0x000B43ABu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000B43AB: ;
    xmm0 = XMM_SCALAR(MEMF(0x333854)); /* movss */
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x2C;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    SET_LO8(eax, 8);
    MEM8(edx + 3) = LO8(eax);
    MEM8(edx + 2) = LO8(eax);
    eax = 0xFFFFFFFFu;
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = eax;
    MEM32(edx + 0x10) = eax;
    MEM32(edx + 0x14) = eax;
    MEM32(edx + 0x18) = eax;
    MEM32(edx + 0x1C) = eax;
    MEM32(edx + 0x20) = eax;
    MEMF(edx + 0x30) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x50) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x34) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x54) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x38) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x58) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x40) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x60) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x44) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x64) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x48) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x68) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x6C) = xmm0.f[0]; /* movss */
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B4440
 * Original: 0x000B4440 - 0x000B47EF (943 bytes, 233 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B4440: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 2);
    eax = (uint32_t)(int32_t)SMEM8(ebp + 3);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B47E5; /* je: equal / zero */

loc_000B445B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ecx * 4;
    PUSH32(esp, 1);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x000B4477u); RECOMP_ABI_CALL(0x00089C20u, sub_00089C20); /* call 0x00089C20 */

loc_000B4477: ;
    ebx = MEM32(0x64D2B0);
    edx = MEM32(ebx + 0x1C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 0x1C);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx + 0x1C);
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    edx = MEM32(ebx + 0x1C);
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 0x1C);
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    ecx = MEM32(ebx + 0x1C);
    MEMF(ecx + 0x14) = xmm1.f[0]; /* movss */
    edx = MEM32(ebx + 0x1C);
    MEMF(edx + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 0x1C);
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    eax = MEM32(0x64D29C);
    xmm2.f[0] = (float)(int32_t)MEM32(eax + 0x110); /* cvtsi2ss */
    edx = MEM32(ebx + 0x24);
    xmm0 = XMM_SCALAR(MEMF(eax + 0xF8)); /* movss */
    edi = MEM32(ebx + 0x14);
    esi = MEM32(edx + 8);
    SET_LO8(edx, MEM8(ebp + 2));
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x28)); /* movss */
    xmm6.f[0] = (float)(int32_t)MEM32(eax + 0x10C); /* cvtsi2ss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0xF4)); /* movss */
    ecx = MEM32(ebx + 0xC);
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    xmm7 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_000B46BE; /* jle: less or equal (signed <=) */

loc_000B452D: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 3);
    edx = ebp + 0x70;
    MEM32(esp + 0x18) = edx;
    edx = ebp + 0x30;
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    MEM32(esp + 0x14) = edx;

loc_000B4543: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm3 = xmm1; /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    MEM32(esp + 0x34) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_000B469D; /* jle: less or equal (signed <=) */

loc_000B4576: ;
    eax = ebp + 0x50;
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_000B4580: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(edx); /* mulss */
    edx = MEM32(esp + 0x34);
    eax = (uint32_t)(int32_t)SMEM8(eax + edx);
    ebx = MEM32(ebp + eax * 4 + 4);
    eax = MEM32(0x64D2B0);
    edx = ecx;
    _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(esi + 6) = 0;
    MEM16(esi + 8) = 1;
    MEM16(esi + 0xA) = 2;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi) = LO16(eax);
    edx = eax + 1;
    MEM16(esi + 2) = LO16(edx);
    edx = eax + 2;
    MEM16(esi + 4) = LO16(edx);
    MEM16(esi + 0x10) = LO16(edx);
    MEM16(esi + 0x14) = LO16(eax);
    MEM16(esi + 0x16) = 2;
    MEM16(esi + 0x18) = 3;
    MEM16(esi + 0x1A) = 0;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 3;
    MEM16(esi + 2) = LO16(edx);
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x34);
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm4; /* movaps */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x2C)); /* movss */
    MEMF(ecx + -12) = xmm2.f[0]; /* movss */
    MEMF(ecx + -8) = xmm3.f[0]; /* movss */
    MEMF(ecx + -4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x2C)); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm3.f[0]; /* movss */
    MEMF(ecx + 8) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x2C)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x14) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x2C)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    MEMF(ecx + 8) = xmm4.f[0]; /* movss */
    MEM32(edi) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebx;
    MEM32(esp + 0x10) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 3);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x34) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000B4580; /* jl: less (signed <) */

loc_000B4697: ;
    ebx = MEM32(0x64D2B0);

loc_000B469D: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 4;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 8;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(int32_t)SMEM8(ebp + 2);
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B4543; /* jl: less (signed <) */

loc_000B46B9: ;
    eax = MEM32(0x64D29C);

loc_000B46BE: ;
    edx = MEM32(esp + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(ebx + 0xC);
    if (CMP_LE(_fas, _fbs)) goto loc_000B47AC; /* jle: less or equal (signed <=) */

loc_000B46CD: ;
    esi = ecx + 8;
    MEM32(esp + 0x34) = edx;

loc_000B46D4: ;
    _fa = (uint32_t)(MEM8(eax + 0xD0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xD0), 1 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(esi + -8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xEC); /* subss */
    ebp = esi + -8;
    if (TEST_Z(_fa, _fb)) goto loc_000B4722; /* je: equal / zero */

loc_000B46ED: ;
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0xE4); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0xE8); /* divss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xF0); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    goto loc_000B4745;

loc_000B4722: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0xE4); /* divss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xF0); /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0xE8); /* divss */

loc_000B4745: ;
    edi = eax + 0x160;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    PUSH32(esp, ebp);
    ecx = esp + 0x28;
    eax = edi;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000B4767u); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_000B4767: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp); /* addss */
    eax = MEM32(esp + 0x38);
    MEMF(ebp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + -4); /* addss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x34) = eax;
    eax = MEM32(0x64D29C);
    if ((_fa != 0)) goto loc_000B46D4; /* jne: not equal / not zero */

loc_000B47AC: ;
    esi = MEM32(eax + 0x74);
    ecx = esi;
    ecx = ecx & 0xFFFFFEDFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x74) = ecx;
    edx = MEM32(ebx + 0x24);
    ecx = MEM32(0x64D2AC);
    MEM32(edx + 4) = 0;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000B47D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B47D3u); } /* indirect call */
    }

loc_000B47D6: ;
    edx = MEM32(0x64D29C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(edx + 0x74) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000B47E5: ;
    eax = 1;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B450B
 * Original: 0x000B450B - 0x000B47EF (740 bytes, 181 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B450B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B450B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    xmm7 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm6.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_000B46BE; /* jle: less or equal (signed <=) */

loc_000B452D: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 3);
    edx = ebp + 0x70;
    MEM32(esp + 0x18) = edx;
    edx = ebp + 0x30;
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    MEM32(esp + 0x14) = edx;

loc_000B4543: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm3 = xmm1; /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    MEM32(esp + 0x34) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_000B469D; /* jle: less or equal (signed <=) */

loc_000B4576: ;
    eax = ebp + 0x50;
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_000B4580: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(edx); /* mulss */
    edx = MEM32(esp + 0x34);
    eax = (uint32_t)(int32_t)SMEM8(eax + edx);
    ebx = MEM32(ebp + eax * 4 + 4);
    eax = MEM32(0x64D2B0);
    edx = ecx;
    _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(esi + 6) = 0;
    MEM16(esi + 8) = 1;
    MEM16(esi + 0xA) = 2;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi) = LO16(eax);
    edx = eax + 1;
    MEM16(esi + 2) = LO16(edx);
    edx = eax + 2;
    MEM16(esi + 4) = LO16(edx);
    MEM16(esi + 0x10) = LO16(edx);
    MEM16(esi + 0x14) = LO16(eax);
    MEM16(esi + 0x16) = 2;
    MEM16(esi + 0x18) = 3;
    MEM16(esi + 0x1A) = 0;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 3;
    MEM16(esi + 2) = LO16(edx);
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x34);
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm4; /* movaps */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x2C)); /* movss */
    MEMF(ecx + -12) = xmm2.f[0]; /* movss */
    MEMF(ecx + -8) = xmm3.f[0]; /* movss */
    MEMF(ecx + -4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x2C)); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm3.f[0]; /* movss */
    MEMF(ecx + 8) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x2C)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x14) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x2C)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    MEMF(ecx + 8) = xmm4.f[0]; /* movss */
    MEM32(edi) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebx;
    MEM32(esp + 0x10) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 3);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x34) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000B4580; /* jl: less (signed <) */

loc_000B4697: ;
    ebx = MEM32(0x64D2B0);

loc_000B469D: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 4;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 8;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(int32_t)SMEM8(ebp + 2);
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B4543; /* jl: less (signed <) */

loc_000B46B9: ;
    eax = MEM32(0x64D29C);

loc_000B46BE: ;
    edx = MEM32(esp + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(ebx + 0xC);
    if (CMP_LE(_fas, _fbs)) goto loc_000B47AC; /* jle: less or equal (signed <=) */

loc_000B46CD: ;
    esi = ecx + 8;
    MEM32(esp + 0x34) = edx;

loc_000B46D4: ;
    _fa = (uint32_t)(MEM8(eax + 0xD0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xD0), 1 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(esi + -8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xEC); /* subss */
    ebp = esi + -8;
    if (TEST_Z(_fa, _fb)) goto loc_000B4722; /* je: equal / zero */

loc_000B46ED: ;
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0xE4); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0xE8); /* divss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xF0); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    goto loc_000B4745;

loc_000B4722: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0xE4); /* divss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xF0); /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0xE8); /* divss */

loc_000B4745: ;
    edi = eax + 0x160;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    PUSH32(esp, ebp);
    ecx = esp + 0x28;
    eax = edi;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000B4767u); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_000B4767: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp); /* addss */
    eax = MEM32(esp + 0x38);
    MEMF(ebp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + -4); /* addss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x34) = eax;
    eax = MEM32(0x64D29C);
    if ((_fa != 0)) goto loc_000B46D4; /* jne: not equal / not zero */

loc_000B47AC: ;
    esi = MEM32(eax + 0x74);
    ecx = esi;
    ecx = ecx & 0xFFFFFEDFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x74) = ecx;
    edx = MEM32(ebx + 0x24);
    ecx = MEM32(0x64D2AC);
    MEM32(edx + 4) = 0;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000B47D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B47D3u); } /* indirect call */
    }

loc_000B47D6: ;
    edx = MEM32(0x64D29C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(edx + 0x74) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B47F0
 * Original: 0x000B47F0 - 0x000B48C4 (212 bytes, 69 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B47F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B47F0: ;
    _fb = (uint32_t)(0x1C21) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x1C21;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000B4876; /* je: equal / zero */

loc_000B47F8: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000B4828; /* je: equal / zero */

loc_000B47FB: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B4827; /* jne: not equal / not zero */

loc_000B47FE: ;
    PUSH32(esp, esi);
    esi = (int32_t)MEMF(eax); /* cvttss2si */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0xFFFFFFF8u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B4826; /* jne: not equal / not zero */

loc_000B480B: ;
    edx = (int32_t)MEMF(eax + 4); /* cvttss2si */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFFFFF8u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B4826; /* jne: not equal / not zero */

loc_000B4818: ;
    eax = (int32_t)MEMF(eax + 8); /* cvttss2si */
    SET_LO8(eax, LO8(eax) & 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = edx + esi * 8 + 0x70;
    MEM8(edx + ecx) = LO8(eax);

loc_000B4826: ;
    POP32(esp, esi);

loc_000B4827: ;
    esp += 4; return; /* ret */

loc_000B4828: ;
    edx = (int32_t)MEMF(eax); /* cvttss2si */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4866; /* jne: not equal / not zero */

loc_000B4831: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x50) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x54) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x58) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x5C) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x60) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x64) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x68) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x6C) = edx;
    edx = 8;

loc_000B4866: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFFFFF8u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B4827; /* jne: not equal / not zero */

loc_000B486E: ;
    eax = MEM32(eax + 4);
    MEM32(ecx + edx * 4 + 0x50) = eax;
    esp += 4; return; /* ret */

loc_000B4876: ;
    edx = (int32_t)MEMF(eax); /* cvttss2si */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B48B0; /* jne: not equal / not zero */

loc_000B487F: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x30) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x34) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x38) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x3C) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x40) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x44) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x48) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 0x4C) = eax;
    esp += 4; return; /* ret */

loc_000B48B0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFFFFF8u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B4827; /* jne: not equal / not zero */

loc_000B48BC: ;
    eax = MEM32(eax + 4);
    MEM32(ecx + edx * 4 + 0x30) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000B48D0
 * Original: 0x000B48D0 - 0x000B4924 (84 bytes, 25 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B48D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B48D0: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B48DE; /* jne: not equal / not zero */

loc_000B48D9: ;
    PUSH32(esp, 0x000B48DEu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000B48DE: ;
    edx = 0x24;
    ecx = eax;
    PUSH32(esp, 0x000B48EAu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000B48EA: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 0x1C) = ecx;
    MEM32(edx + 0x20) = ecx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000B4930
 * Original: 0x000B4930 - 0x000B4D46 (1046 bytes, 270 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4930(void)
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

loc_000B4930: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = eax;
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x49362C); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(edi + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B4957; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B4950: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B4957: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edi + 0x18;
    if (CMP_NE(_fa, _fb)) goto loc_000B49B4; /* jne: not equal / not zero */

loc_000B4964: ;
    ebx = MEM32(0x64D29C);
    _fb = (uint32_t)(0x1B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x1B0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    eax = ebx;
    PUSH32(esp, 0x000B497Au); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_000B497A: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 4); /* addss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, edi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B49B4: ;
    _fca = xmm1.f[0]; _fcb = MEMF(edi + 0x20); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B49C3; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(edi + 0x20)) */

loc_000B49BA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B49C3: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D29C);
    eax = esp + 0x1C;
    ebx = ebp + 0x160;
    PUSH32(esp, eax);
    ecx = esi;
    eax = ebx;
    PUSH32(esp, 0x000B49DEu); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_000B49DE: ;
    ecx = MEM32(edi);
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    edx = MEM32(edi + 4);
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x24); /* addss */
    eax = MEM32(edi + 8);
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = ecx;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0x18) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    ebx = ebp + 0x1B0;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    PUSH32(esp, esi);
    ecx = edi;
    eax = ebx;
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000B4A65u); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_000B4A65: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 4); /* addss */
    PUSH32(esp, 1);
    ebp = 2;
    PUSH32(esp, ebp);
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    eax = 4;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000B4AA6u); RECOMP_ABI_CALL(0x00089C20u, sub_00089C20); /* call 0x00089C20 */

loc_000B4AA6: ;
    esi = MEM32(0x64D2B0);
    ecx = MEM32(esi + 0x1C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    ebx = MEM32(0x64D29C);
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    xmm4 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    MEMF(edx + 0x10) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(edx + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 0x198); /* subss */
    xmm4.f[0] = xmm4.f[0] - MEMF(ebx + 0x190); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x194); /* subss */
    xmm5 = xmm1; /* movaps */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    MEMF(esp + 0x40) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    eax = esp + 0x40;
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000B4B7Du); RECOMP_ABI_CALL(0x00028F90u, sub_00028F90); /* call 0x00028F90 */

loc_000B4B7D: ;
    xmm3 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    eax = MEM32(esi + 0xC);
    xmm3.f[0] = xmm3.f[0] * MEMF(0x3337D8); /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x2C); /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x30); /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 4) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm5.f[0]; /* addss */
    MEMF(eax + 8) = xmm7.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 8) = xmm5.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    MEMF(eax + 0x24) = xmm6.f[0]; /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ecx) = LO16(eax);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    ecx = 1;
    MEM16(edx + 2) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 4) = LO16(ebp);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 6) = LO16(eax);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 8) = LO16(ecx);
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 8);
    MEM16(edx + 0xA) = LO16(ebp);
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 8);
    MEM16(edx + 0x10) = LO16(ebp);
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 8);
    ecx = 3;
    MEM16(edx + 0x12) = LO16(ecx);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 0x14) = LO16(eax);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 0x16) = LO16(ebp);
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + 8);
    MEM16(edx + 0x18) = LO16(ecx);
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx + 8);
    MEM16(edx + 0x1A) = LO16(eax);
    edx = MEM32(edi + 0x14);
    ecx = MEM32(esi + 0x14);
    MEM32(ecx + 4) = edx;
    edx = MEM32(edi + 0x14);
    ecx = MEM32(esi + 0x14);
    MEM32(ecx + 8) = edx;
    edx = MEM32(edi + 0x14);
    ecx = MEM32(esi + 0x14);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(edi + 0x14);
    ecx = MEM32(esi + 0x14);
    MEM32(ecx + 0x10) = edx;
    ecx = MEM32(esi + 0x24);
    MEM32(ecx + 4) = eax;
    edi = MEM32(ebx + 0x74);
    ecx = MEM32(0x64D2AC);
    edx = edi;
    edx = edx & 0xFFFFFEDFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x800;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 0x74) = edx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000B4D2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B4D2Au); } /* indirect call */
    }

loc_000B4D2D: ;
    edx = MEM32(0x64D29C);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(edx + 0x74) = edi;
    eax = 1;
    POP32(esp, edi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B4D50
 * Original: 0x000B4D50 - 0x000B4D96 (70 bytes, 21 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4D50: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4D5E; /* jne: not equal / not zero */

loc_000B4D59: ;
    PUSH32(esp, 0x000B4D5Eu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000B4D5E: ;
    edx = 0x24;
    ecx = eax;
    PUSH32(esp, 0x000B4D6Au); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000B4D6A: ;
    xmm0 = XMM_SCALAR(MEMF(0x333E54)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 0x1C) = ecx;
    MEM32(edx + 0x20) = ecx;
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000B4DA0
 * Original: 0x000B4DA0 - 0x000B4E39 (153 bytes, 45 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4DA0(void)
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

loc_000B4DA0: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    ecx = edx + 8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B4DC7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_000B4DAF: ;
    /* nop */

loc_000B4DB0: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B4DCE; /* je: equal / zero */

loc_000B4DBD: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca > _fcb)) goto loc_000B4DB0; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ecx)) */

loc_000B4DC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B4DFB; /* ja: above (unsigned >) */

loc_000B4DC7: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xB4E3C); /* switch: 5 entries, 4 targets */
    if (_jt == 0x000B4DD1u) goto loc_000B4DD1;
    if (_jt == 0x000B4DD8u) goto loc_000B4DD8;
    if (_jt == 0x000B4DE2u) goto loc_000B4DE2;
    if (_jt == 0x000B4DF8u) goto loc_000B4DF8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000B4DCE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000B4DD1: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(edx + 0xC); /* divss */
    goto loc_000B4DFB;

loc_000B4DD8: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    goto loc_000B4DFB;

loc_000B4DE2: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(edx + 0x14); /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */
    goto loc_000B4DFB;

loc_000B4DF8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000B4DFB: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x49362C); /* addss */
    eax = MEM32(edx + 4);
    ecx = MEM32(edx);
    PUSH32(esp, 0);
    MEMF(edx + 0x1C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x000B4E19u); RECOMP_ABI_CALL(0x00269770u, sub_00269770); /* call 0x00269770 */

loc_000B4E19: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x64D29C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000B4E30u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000B4E2Du); } /* indirect call */
    }

loc_000B4E30: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000B4E50
 * Original: 0x000B4E50 - 0x000B4E7C (44 bytes, 16 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4E50: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4E5E; /* jne: not equal / not zero */

loc_000B4E59: ;
    PUSH32(esp, 0x000B4E5Eu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000B4E5E: ;
    PUSH32(esp, edi);
    edx = 0x40;
    ecx = eax;
    PUSH32(esp, 0x000B4E6Bu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000B4E6B: ;
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x10;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B4E80
 * Original: 0x000B4E80 - 0x000B59DC (2908 bytes, 611 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B4E80(void)
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

loc_000B4E80: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x64D29C);
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x10C); /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0x110); /* cvtsi2ss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0xF4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0xF8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    eax = MEM32(esi);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    xmm5 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    MEMF(esp + 4) = xmm5.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_000B4FF7; /* je: equal / zero */

loc_000B4F01: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4F69; /* je: equal / zero */

loc_000B4F05: ;
    xmm4 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x14)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm1.f[0]; /* subss */
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esi + 0x18)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */

loc_000B4F69: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B4FD2; /* je: equal / zero */

loc_000B4F6D: ;
    xmm7 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm4 = xmm6; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] - xmm6.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    xmm6 = xmm4; /* movaps */

loc_000B4FD2: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(esi + 0x14) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esi + 0xC) = xmm5.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm6.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm4.f[0]; /* movss */
    MEM32(esi) = eax;

loc_000B4FF7: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B5265; /* je: equal / zero */

loc_000B5002: ;
    xmm7 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm7.f[0] = xmm7.f[0] + MEMF(0x49362C); /* addss */
    _fca = xmm7.f[0]; _fcb = MEMF(esi + 0x24); /* comiss */
    MEMF(esi + 0x28) = xmm7.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B5021; /* jb: below (unsigned <) (xmm7.f[0] vs MEMF(esi + 0x24)) */

loc_000B501A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B5021: ;
    xmm7.f[0] = xmm7.f[0] / MEMF(esi + 0x24); /* divss */
    xmm4 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm7.f[0]; /* subss */

loc_000B5032: ;
    _fca = xmm4.f[0]; _fcb = MEMF(0x3337A0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B5093; /* jnp: not parity */

loc_000B503F: ;
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 4) = xmm5.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_000B5093: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    eax = 0xC;
    PUSH32(esp, 0x000B50AFu); RECOMP_ABI_CALL(0x00089C20u, sub_00089C20); /* call 0x00089C20 */

loc_000B50AF: ;
    ebp = MEM32(0x64D2B0);
    ecx = MEM32(ebp + 0x1C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + 0x1C);
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    ecx = MEM32(ebp + 0x1C);
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + 0x1C);
    MEMF(edx + 0x10) = xmm1.f[0]; /* movss */
    eax = MEM32(ebp + 0x1C);
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    ecx = MEM32(ebp + 0x1C);
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(0x3442F8)); /* movss */
    MEMF(edx + 0x1C) = xmm1.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(eax + 0xC) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(eax + 0x1C) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(eax + 0x28) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(eax + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    edi = eax + 8;
    MEMF(eax + 0x54) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x58) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x60) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x64) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x6C) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x70) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x78) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x7C) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x84) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x88) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x8C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = 0;
    goto loc_000B5210;

    /* nop */

loc_000B5210: ;
    ebx = MEM32(0x64D29C);
    _fa = (uint32_t)(MEM8(ebx + 0xD0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xD0), 1 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(edi + -8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0xEC); /* subss */
    if (TEST_Z(_fa, _fb)) goto loc_000B52BC; /* je: equal / zero */

loc_000B5230: ;
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ebx + 0xE4); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ebx + 0xE8); /* divss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0xF0); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    goto loc_000B52DF;

loc_000B5265: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B52AF; /* je: equal / zero */

loc_000B526A: ;
    xmm4 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(0x49362C); /* addss */
    xmm7 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    _fca = xmm7.f[0]; _fcb = xmm4.f[0]; /* comiss */
    MEMF(esi + 0x28) = xmm4.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000B59D2; /* ja: above (unsigned >) (xmm7.f[0] vs xmm4.f[0]) */

loc_000B528A: ;
    xmm7 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm7.f[0] = xmm7.f[0] + MEMF(esi + 0x1C); /* addss */
    _fca = xmm7.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B52A8; /* jbe: below or equal (unsigned <=) (xmm7.f[0] vs xmm4.f[0]) */

loc_000B5299: ;
    xmm4.f[0] = xmm4.f[0] - MEMF(esi + 0x1C); /* subss */
    xmm4.f[0] = xmm4.f[0] / MEMF(esi + 0x20); /* divss */
    goto loc_000B5032;

loc_000B52A8: ;
    _fb = (uint32_t)(0xFFFFFF00u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;

loc_000B52AF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    goto loc_000B5093;

loc_000B52BC: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(ebx + 0xE4); /* divss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0xF0); /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebx + 0xE8); /* divss */

loc_000B52DF: ;
    eax = edi + -8;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x160;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    eax = ebx;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000B5304u); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_000B5304: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + -8); /* addss */
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x34);
    MEMF(edi + -8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + -4); /* addss */
    MEMF(edi + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 0x14);
    MEM32(eax + ecx + 4) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000B5210; /* jl: less (signed <) */

loc_000B5354: ;
    eax = MEM32(ebp + 0x24);
    eax = MEM32(eax + 8);
    SET_LO16(ecx, MEM16(0x3442B8));
    MEM16(eax) = LO16(ecx);
    SET_LO16(edx, MEM16(0x3442BC));
    MEM16(eax + 2) = LO16(edx);
    SET_LO16(ecx, MEM16(0x3442C0));
    MEM16(eax + 4) = LO16(ecx);
    MEM16(eax + 8) = 1;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(eax + -10) = LO16(ebx);
    ecx = 2;
    MEM16(eax + -6) = LO16(ecx);
    SET_LO16(edx, MEM16(0x3442C0));
    MEM16(eax) = LO16(edx);
    SET_LO16(edx, MEM16(0x3442C4));
    MEM16(eax + 2) = LO16(edx);
    SET_LO16(edx, MEM16(0x3442B8));
    MEM16(eax + 4) = LO16(edx);
    MEM16(eax + 6) = LO16(ecx);
    MEM16(eax + 0xA) = LO16(ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 3;
    MEM16(eax + -8) = LO16(edx);
    SET_LO16(edi, MEM16(0x3442C8));
    MEM16(eax) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442CC));
    MEM16(eax + 2) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442D0));
    MEM16(eax + 4) = LO16(edi);
    MEM16(eax + 6) = LO16(ebx);
    MEM16(eax + 8) = 1;
    MEM16(eax + 0xA) = LO16(ecx);
    SET_LO16(edi, MEM16(0x3442D0));
    MEM16(eax + 0x10) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442D4));
    MEM16(eax + 0x12) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442C8));
    MEM16(eax + 0x14) = LO16(edi);
    MEM16(eax + 0x16) = LO16(ecx);
    MEM16(eax + 0x18) = LO16(edx);
    MEM16(eax + 0x1A) = LO16(ebx);
    SET_LO16(edi, MEM16(0x3442D8));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x10) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442DC));
    MEM16(eax + 0x12) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442E0));
    MEM16(eax + 0x14) = LO16(edi);
    MEM16(eax + 0x16) = LO16(ebx);
    MEM16(eax + 0x18) = 1;
    MEM16(eax + 0x1A) = LO16(ecx);
    SET_LO16(edi, MEM16(0x3442E0));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x10) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442E4));
    MEM16(eax + 0x12) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442D8));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 4) = LO16(edi);
    MEM16(eax + 6) = LO16(ecx);
    MEM16(eax + 8) = LO16(edx);
    MEM16(eax + 0xA) = LO16(ebx);
    SET_LO16(edi, MEM16(0x3442E8));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442EC));
    MEM16(eax + 2) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442F0));
    MEM16(eax + 4) = LO16(edi);
    MEM16(eax + 6) = LO16(ebx);
    MEM16(eax + 8) = 1;
    MEM16(eax + 0xA) = LO16(ecx);
    SET_LO16(edi, MEM16(0x3442F0));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442F4));
    MEM16(eax + 2) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442E8));
    MEM16(eax + 4) = LO16(edi);
    MEM16(eax + 6) = LO16(ecx);
    MEM16(eax + 8) = LO16(edx);
    MEM16(eax + 0xA) = LO16(ebx);
    eax = MEM32(0x64D29C);
    edi = MEM32(eax + 0x74);
    ecx = edi;
    ecx = ecx & 0xFFFFFEDFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x74) = ecx;
    edx = MEM32(ebp + 0x24);
    ecx = MEM32(0x64D2AC);
    MEM32(edx + 4) = ebx;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000B5512u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B550Fu); } /* indirect call */
    }

loc_000B5512: ;
    edx = MEM32(0x64D29C);
    MEM32(edx + 0x74) = edi;
    SET_LO8(eax, MEM8(esi));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B59CF; /* je: equal / zero */

loc_000B5528: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    eax = 0x18;
    PUSH32(esp, 0x000B553Au); RECOMP_ABI_CALL(0x00089C20u, sub_00089C20); /* call 0x00089C20 */

loc_000B553A: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x28); /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm5.f[0] = xmm5.f[0] - MEMF(esi + 0x2C); /* subss */
    eax = MEM32(0x64D2B0);
    eax = MEM32(eax + 0xC);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x2C); /* addss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x34); /* subss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x38); /* addss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x30); /* subss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x3C); /* subss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x38); /* subss */
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] + MEMF(esi + 0x3C); /* addss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x3C); /* addss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] + MEMF(esi + 0x34); /* addss */
    xmm6 = xmm5; /* movaps */
    xmm6.f[0] = xmm6.f[0] - MEMF(esi + 0x3C); /* subss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3442F8)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    edi = eax + 8;
    MEMF(esp + 0x48) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEMF(eax + 0x34) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(eax + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x58) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(eax + 0x54) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x64) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x60) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x70) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEMF(eax + 0x6C) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x78) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x7C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x84) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x88) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x8C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x90) = xmm5.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(eax + 0x94) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x98) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x9C) = xmm7.f[0]; /* movss */
    MEMF(eax + 0xA0) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xA8) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(eax + 0xAC) = xmm7.f[0]; /* movss */
    MEMF(eax + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xB4) = xmm6.f[0]; /* movss */
    MEMF(eax + 0xB8) = xmm7.f[0]; /* movss */
    MEMF(eax + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC0) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(eax + 0xC4) = xmm6.f[0]; /* movss */
    MEMF(eax + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xCC) = xmm5.f[0]; /* movss */
    MEMF(eax + 0xD0) = xmm6.f[0]; /* movss */
    MEMF(eax + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xD8) = xmm2.f[0]; /* movss */
    MEMF(eax + 0xDC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xE0) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xE4) = xmm4.f[0]; /* movss */
    MEMF(eax + 0xE8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xEC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xF0) = xmm4.f[0]; /* movss */
    MEMF(eax + 0xF4) = xmm7.f[0]; /* movss */
    MEMF(eax + 0xF8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xFC) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x100) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x104) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x108) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x10C) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x110) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x114) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x118) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x11C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = ebx;
    /* nop */

loc_000B57F0: ;
    ebp = MEM32(0x64D29C);
    _fa = (uint32_t)(MEM8(ebp + 0xD0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xD0), 1 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(edi + -8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0xEC); /* subss */
    ebx = edi + -8;
    if (TEST_Z(_fa, _fb)) goto loc_000B5844; /* je: equal / zero */

loc_000B580F: ;
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ebp + 0xE4); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ebp + 0xE8); /* divss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0xF0); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    goto loc_000B5867;

loc_000B5844: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + 0xE4); /* divss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0xF0); /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + 0xE8); /* divss */

loc_000B5867: ;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x160;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = esp + 0x38;
    eax = ebp;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000B5889u); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_000B5889: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx); /* addss */
    ecx = MEM32(0x64D2B0);
    eax = MEM32(esp + 0x24);
    MEMF(ebx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + -4); /* addss */
    MEMF(edi + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0x14);
    ecx = MEM32(esi + 8);
    MEM32(eax + edx + 4) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x60 (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000B57F0; /* jl: less (signed <) */

loc_000B58DC: ;
    edi = MEM32(0x64D2B0);
    edx = MEM32(edi + 0x24);
    eax = MEM32(edx + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 4;
    /* nop */

loc_000B58F0: ;
    esi = MEM32(0x344284);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(esi);
    esi = MEM32(0x344288);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 2) = LO16(esi);
    esi = MEM32(0x34428C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 4) = LO16(esi);
    esi = MEM32(0x344290);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x10) = LO16(esi);
    esi = MEM32(0x344294);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x12) = LO16(esi);
    esi = MEM32(0x344298);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 4) = LO16(esi);
    esi = MEM32(0x34429C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x10) = LO16(esi);
    esi = MEM32(0x3442A0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 2) = LO16(esi);
    esi = MEM32(0x3442A4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 4) = LO16(esi);
    esi = MEM32(0x3442A8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(esi);
    esi = MEM32(0x3442AC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 2) = LO16(esi);
    esi = MEM32(0x3442B0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 4) = LO16(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B58F0; /* jne: not equal / not zero */

loc_000B5994: ;
    eax = MEM32(0x64D29C);
    esi = MEM32(eax + 0x74);
    ecx = esi;
    ecx = ecx & 0xFFFFFEDFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x74) = ecx;
    edx = MEM32(edi + 0x24);
    ecx = MEM32(0x64D2AC);
    MEM32(edx + 4) = 0;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000B59C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B59C0u); } /* indirect call */
    }

loc_000B59C3: ;
    edx = MEM32(0x64D29C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x74) = esi;

loc_000B59CF: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000B59D2: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B539C
 * Original: 0x000B539C - 0x000B59DC (1600 bytes, 327 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B539C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B539C: ;
    SET_LO16(edx, MEM16(0x3442C4));
    MEM16(eax + 2) = LO16(edx);
    SET_LO16(edx, MEM16(0x3442B8));
    MEM16(eax + 4) = LO16(edx);
    MEM16(eax + 6) = LO16(ecx);
    MEM16(eax + 0xA) = LO16(ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 3;
    MEM16(eax + -8) = LO16(edx);
    SET_LO16(edi, MEM16(0x3442C8));
    MEM16(eax) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442CC));
    MEM16(eax + 2) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442D0));
    MEM16(eax + 4) = LO16(edi);
    MEM16(eax + 6) = LO16(ebx);
    MEM16(eax + 8) = 1;
    MEM16(eax + 0xA) = LO16(ecx);
    SET_LO16(edi, MEM16(0x3442D0));
    MEM16(eax + 0x10) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442D4));
    MEM16(eax + 0x12) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442C8));
    MEM16(eax + 0x14) = LO16(edi);
    MEM16(eax + 0x16) = LO16(ecx);
    MEM16(eax + 0x18) = LO16(edx);
    MEM16(eax + 0x1A) = LO16(ebx);
    SET_LO16(edi, MEM16(0x3442D8));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x10) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442DC));
    MEM16(eax + 0x12) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442E0));
    MEM16(eax + 0x14) = LO16(edi);
    MEM16(eax + 0x16) = LO16(ebx);
    MEM16(eax + 0x18) = 1;
    MEM16(eax + 0x1A) = LO16(ecx);
    SET_LO16(edi, MEM16(0x3442E0));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x10) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442E4));
    MEM16(eax + 0x12) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442D8));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 4) = LO16(edi);
    MEM16(eax + 6) = LO16(ecx);
    MEM16(eax + 8) = LO16(edx);
    MEM16(eax + 0xA) = LO16(ebx);
    SET_LO16(edi, MEM16(0x3442E8));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442EC));
    MEM16(eax + 2) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442F0));
    MEM16(eax + 4) = LO16(edi);
    MEM16(eax + 6) = LO16(ebx);
    MEM16(eax + 8) = 1;
    MEM16(eax + 0xA) = LO16(ecx);
    SET_LO16(edi, MEM16(0x3442F0));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442F4));
    MEM16(eax + 2) = LO16(edi);
    SET_LO16(edi, MEM16(0x3442E8));
    MEM16(eax + 4) = LO16(edi);
    MEM16(eax + 6) = LO16(ecx);
    MEM16(eax + 8) = LO16(edx);
    MEM16(eax + 0xA) = LO16(ebx);
    eax = MEM32(0x64D29C);
    edi = MEM32(eax + 0x74);
    ecx = edi;
    ecx = ecx & 0xFFFFFEDFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x74) = ecx;
    edx = MEM32(ebp + 0x24);
    ecx = MEM32(0x64D2AC);
    MEM32(edx + 4) = ebx;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000B5512u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B550Fu); } /* indirect call */
    }

loc_000B5512: ;
    edx = MEM32(0x64D29C);
    MEM32(edx + 0x74) = edi;
    SET_LO8(eax, MEM8(esi));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B59CF; /* je: equal / zero */

loc_000B5528: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    eax = 0x18;
    PUSH32(esp, 0x000B553Au); RECOMP_ABI_CALL(0x00089C20u, sub_00089C20); /* call 0x00089C20 */

loc_000B553A: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x28); /* addss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm5.f[0] = xmm5.f[0] - MEMF(esi + 0x2C); /* subss */
    eax = MEM32(0x64D2B0);
    eax = MEM32(eax + 0xC);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x2C); /* addss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x34); /* subss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x38); /* addss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x30); /* subss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x3C); /* subss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x38); /* subss */
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] + MEMF(esi + 0x3C); /* addss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x3C); /* addss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] + MEMF(esi + 0x34); /* addss */
    xmm6 = xmm5; /* movaps */
    xmm6.f[0] = xmm6.f[0] - MEMF(esi + 0x3C); /* subss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3442F8)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    edi = eax + 8;
    MEMF(esp + 0x48) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEMF(eax + 0x34) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    MEMF(eax + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x58) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(eax + 0x54) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x64) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x60) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x70) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    MEMF(eax + 0x6C) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x78) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x7C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x84) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x88) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x8C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0x90) = xmm5.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(eax + 0x94) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x98) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x9C) = xmm7.f[0]; /* movss */
    MEMF(eax + 0xA0) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xA8) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    MEMF(eax + 0xAC) = xmm7.f[0]; /* movss */
    MEMF(eax + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xB4) = xmm6.f[0]; /* movss */
    MEMF(eax + 0xB8) = xmm7.f[0]; /* movss */
    MEMF(eax + 0xBC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC0) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(eax + 0xC4) = xmm6.f[0]; /* movss */
    MEMF(eax + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xCC) = xmm5.f[0]; /* movss */
    MEMF(eax + 0xD0) = xmm6.f[0]; /* movss */
    MEMF(eax + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xD8) = xmm2.f[0]; /* movss */
    MEMF(eax + 0xDC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xE0) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xE4) = xmm4.f[0]; /* movss */
    MEMF(eax + 0xE8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xEC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xF0) = xmm4.f[0]; /* movss */
    MEMF(eax + 0xF4) = xmm7.f[0]; /* movss */
    MEMF(eax + 0xF8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xFC) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x100) = xmm7.f[0]; /* movss */
    MEMF(eax + 0x104) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x108) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x10C) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x110) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x114) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x118) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x11C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = ebx;
    /* nop */

loc_000B57F0: ;
    ebp = MEM32(0x64D29C);
    _fa = (uint32_t)(MEM8(ebp + 0xD0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xD0), 1 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(edi + -8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0xEC); /* subss */
    ebx = edi + -8;
    if (TEST_Z(_fa, _fb)) goto loc_000B5844; /* je: equal / zero */

loc_000B580F: ;
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ebp + 0xE4); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ebp + 0xE8); /* divss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0xF0); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    goto loc_000B5867;

loc_000B5844: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + 0xE4); /* divss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0xF0); /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + 0xE8); /* divss */

loc_000B5867: ;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x160;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = esp + 0x38;
    eax = ebp;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000B5889u); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_000B5889: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx); /* addss */
    ecx = MEM32(0x64D2B0);
    eax = MEM32(esp + 0x24);
    MEMF(ebx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + -4); /* addss */
    MEMF(edi + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0x14);
    ecx = MEM32(esi + 8);
    MEM32(eax + edx + 4) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x60 (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000B57F0; /* jl: less (signed <) */

loc_000B58DC: ;
    edi = MEM32(0x64D2B0);
    edx = MEM32(edi + 0x24);
    eax = MEM32(edx + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 4;
    /* nop */

loc_000B58F0: ;
    esi = MEM32(0x344284);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(esi);
    esi = MEM32(0x344288);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 2) = LO16(esi);
    esi = MEM32(0x34428C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 4) = LO16(esi);
    esi = MEM32(0x344290);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x10) = LO16(esi);
    esi = MEM32(0x344294);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x12) = LO16(esi);
    esi = MEM32(0x344298);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 4) = LO16(esi);
    esi = MEM32(0x34429C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x10) = LO16(esi);
    esi = MEM32(0x3442A0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 2) = LO16(esi);
    esi = MEM32(0x3442A4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 4) = LO16(esi);
    esi = MEM32(0x3442A8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(esi);
    esi = MEM32(0x3442AC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 2) = LO16(esi);
    esi = MEM32(0x3442B0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 4) = LO16(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B58F0; /* jne: not equal / not zero */

loc_000B5994: ;
    eax = MEM32(0x64D29C);
    esi = MEM32(eax + 0x74);
    ecx = esi;
    ecx = ecx & 0xFFFFFEDFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x74) = ecx;
    edx = MEM32(edi + 0x24);
    ecx = MEM32(0x64D2AC);
    MEM32(edx + 4) = 0;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000B59C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B59C0u); } /* indirect call */
    }

loc_000B59C3: ;
    edx = MEM32(0x64D29C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x74) = esi;

loc_000B59CF: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B59E0
 * Original: 0x000B59E0 - 0x000B5A10 (48 bytes, 16 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B59E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B59E0: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B59EE; /* jne: not equal / not zero */

loc_000B59E9: ;
    PUSH32(esp, 0x000B59EEu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000B59EE: ;
    edx = 0x18;
    ecx = eax;
    PUSH32(esp, 0x000B59FAu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000B59FA: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000B5A10
 * Original: 0x000B5A10 - 0x000B5F71 (1377 bytes, 318 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5A10(void)
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

loc_000B5A10: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x49362C); /* addss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = ecx + 4;
    PUSH32(esp, esi);
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B5A5E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx)) */

loc_000B5A39: ;
    goto loc_000B5A41;

loc_000B5A3B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */

loc_000B5A41: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(edx); /* subss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000B5A65; /* je: equal / zero */

loc_000B5A54: ;
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    if ((_fca > _fcb)) goto loc_000B5A3B; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edx)) */

loc_000B5A59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B5AAE; /* ja: above (unsigned >) */

loc_000B5A5E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xB5F74); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000B5A6Fu) goto loc_000B5A6F;
    if (_jt == 0x000B5A7Au) goto loc_000B5A7A;
    if (_jt == 0x000B5A87u) goto loc_000B5A87;
    if (_jt == 0x000B5A97u) goto loc_000B5A97;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000B5A65: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B5A6F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_000B5AAE;

loc_000B5A7A: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 8); /* divss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_000B5AAE;

loc_000B5A87: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_000B5AAE;

loc_000B5A97: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 0x10); /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */

loc_000B5AAE: ;
    eax = MEM32(0x64D29C);
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0x10C); /* cvtsi2ss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xF4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, 1);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xF8)); /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0x110); /* cvtsi2ss */
    eax = MEM32(ecx);
    PUSH32(esp, 0x10);
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 1);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, 4);
    eax = 0x20;
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000B5B0Bu); RECOMP_ABI_CALL(0x00089C20u, sub_00089C20); /* call 0x00089C20 */

loc_000B5B0B: ;
    edi = MEM32(0x64D2B0);
    ecx = MEM32(edi + 0x1C);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    edx = MEM32(edi + 0x1C);
    MEMF(edx + 4) = xmm1.f[0]; /* movss */
    eax = MEM32(edi + 0x1C);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(edi + 0x1C);
    xmm4 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEMF(ecx + 0xC) = xmm1.f[0]; /* movss */
    edx = MEM32(edi + 0x1C);
    MEMF(edx + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(edi + 0x1C);
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(edi + 0x1C);
    MEMF(ecx + 0x18) = xmm1.f[0]; /* movss */
    edx = MEM32(edi + 0x1C);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(edx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    ebp = MEM32(edi + 0xC);
    xmm3 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm0; /* movaps */
    xmm6 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3339A4); /* mulss */
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0x3C);
    ecx = eax;
    eax = eax & 0x7F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3F800000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xD) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ecx & 0x7FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ecx * 4 + 0x49E988);
    eax = eax & 0x7F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edi + 0x24);
    MEM32(esp + 0x3C) = eax;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm6.f[0] = xmm6.f[0] + xmm5.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x18) = ebx;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    ecx = ebp + 0x14;
    xmm7 = XMM_SCALAR(MEMF(0x344280)); /* movss */
    goto loc_000B5C30;

loc_000B5C21: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    goto loc_000B5C30;

    /* nop */

loc_000B5C30: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_push(MEMF(0x49A980)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333CB0)); /* fmul dword ptr [0x333cb0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0x18) = fp_top(); /* fst */
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x100;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_000B5C66; /* jns: not sign (positive) */

loc_000B5C58: ;
    edx = edx | 0xFFFFFC00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x400;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B5C74;

loc_000B5C66: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3FF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B5C74; /* jle: less or equal (signed <=) */

loc_000B5C6E: ;
    edx = edx & 0x3FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000B5C74: ;
    xmm5 = XMM_SCALAR(MEMF(edx * 4 + 0x49A988)); /* movss */
    MEMD(esp + 0x18) = fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    if (CMP_GE(_fas, _fbs)) goto loc_000B5C9B; /* jge: greater or equal (signed >=) */

loc_000B5C8D: ;
    edx = edx | 0xFFFFFC00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x400;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B5CA9;

loc_000B5C9B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3FF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B5CA9; /* jle: less or equal (signed <=) */

loc_000B5CA3: ;
    edx = edx & 0x3FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000B5CA9: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333CB0)); /* fmul dword ptr [0x333cb0] */
    xmm2 = XMM_SCALAR(MEMF(edx * 4 + 0x49A988)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49A980)); /* fmul dword ptr [0x49a980] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0x18) = fp_top(); /* fst */
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x100;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas >= 0)) goto loc_000B5CF0; /* jns: not sign (positive) */

loc_000B5CE2: ;
    edx = edx | 0xFFFFFC00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x400;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B5CFE;

loc_000B5CF0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3FF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B5CFE; /* jle: less or equal (signed <=) */

loc_000B5CF8: ;
    edx = edx & 0x3FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000B5CFE: ;
    xmm4 = XMM_SCALAR(MEMF(edx * 4 + 0x49A988)); /* movss */
    MEMD(esp + 0x18) = fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    if (CMP_GE(_fas, _fbs)) goto loc_000B5D25; /* jge: greater or equal (signed >=) */

loc_000B5D17: ;
    edx = edx | 0xFFFFFC00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x400;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B5D33;

loc_000B5D25: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3FF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B5D33; /* jle: less or equal (signed <=) */

loc_000B5D2D: ;
    edx = edx & 0x3FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000B5D33: ;
    xmm0 = XMM_SCALAR(MEMF(edx * 4 + 0x49A988)); /* movss */
    MEMF(ecx + -12) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x344280)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(ebp) = xmm1.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    MEMF(ecx + -16) = xmm2.f[0]; /* movss */
    MEMF(ecx) = xmm7.f[0]; /* movss */
    xmm1 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + -8) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x24); /* addss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm4.f[0]; /* addss */
    edx = ebx * 4;
    xmm1.f[0] = xmm1.f[0] + xmm6.f[0]; /* addss */
    MEMF(ecx + -4) = xmm1.f[0]; /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm5.f[0]; /* addss */
    xmm7.f[0] = xmm7.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 4) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(0x344280)); /* movss */
    MEMF(ecx + 0xC) = xmm7.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm7.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    esi = edx + 1;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    MEMF(ecx + 0x14) = xmm2.f[0]; /* movss */
    MEM16(eax + -14) = LO16(esi);
    MEM16(eax + -16) = LO16(edx);
    MEM16(eax + -10) = 0;
    MEM16(eax + -8) = 1;
    MEM16(eax + -6) = 2;
    esi = edx + 2;
    MEM16(eax + -12) = LO16(esi);
    MEM16(eax) = LO16(esi);
    esi = edx + 3;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x30;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 2) = LO16(esi);
    MEM16(eax + 4) = LO16(edx);
    MEM16(eax + 6) = 2;
    MEM16(eax + 8) = 3;
    MEM16(eax + 0xA) = 0;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    MEM32(esp + 0x18) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_000B5C21; /* jl: less (signed <) */

loc_000B5E32: ;
    esi = MEM32(edi + 0xC);
    MEM32(esp + 0x18) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B5E40: ;
    ebp = MEM32(0x64D29C);
    _fa = (uint32_t)(MEM8(ebp + 0xD0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xD0), 1 (8-bit) */
    xmm0 = XMM_SCALAR(MEMF(esi + -8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0xEC); /* subss */
    ebx = esi + -8;
    if (TEST_Z(_fa, _fb)) goto loc_000B5E94; /* je: equal / zero */

loc_000B5E5F: ;
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ebp + 0xE4); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ebp + 0xE8); /* divss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0xF0); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    goto loc_000B5EB7;

loc_000B5E94: ;
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + 0xE4); /* divss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0xF0); /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebp + 0xE8); /* divss */

loc_000B5EB7: ;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x160;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = esp + 0x38;
    eax = ebp;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000B5ED9u); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_000B5ED9: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx); /* addss */
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x34);
    MEMF(ebx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + -4); /* addss */
    MEMF(esi + -4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    ecx = MEM32(edi + 0x14);
    MEM32(ecx + eax + 4) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000B5E40; /* jl: less (signed <) */

loc_000B5F29: ;
    eax = MEM32(0x64D29C);
    esi = MEM32(eax + 0x74);
    ecx = esi;
    ecx = ecx & 0xFFFFFEDFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x74) = ecx;
    edx = MEM32(edi + 0x24);
    ecx = MEM32(0x64D2AC);
    MEM32(edx + 4) = 0;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000B5F58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B5F55u); } /* indirect call */
    }

loc_000B5F58: ;
    edx = MEM32(0x64D29C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(edx + 0x74) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B5F90
 * Original: 0x000B5F90 - 0x000B5FBD (45 bytes, 15 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B5F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5F90: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B5F9E; /* jne: not equal / not zero */

loc_000B5F99: ;
    PUSH32(esp, 0x000B5F9Eu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000B5F9E: ;
    edx = 0x14;
    ecx = eax;
    PUSH32(esp, 0x000B5FAAu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000B5FAA: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000B5FC0
 * Original: 0x000B5FC0 - 0x000B6063 (163 bytes, 47 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000B5FC0(void)
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

loc_000B5FC0: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B5FD3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x10)) */

loc_000B5FCB: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 4)); /* fdiv dword ptr [esi + 4] */
    goto loc_000B600E;

loc_000B5FD3: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 4); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x10); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B5FE7; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x10)) */

loc_000B5FE3: ;
    SET_LO8(eax, LO8(eax) | 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_000B6019;

loc_000B5FE7: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 4); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0xC); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B6060; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 0x10)) */

loc_000B5FFC: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0xC)); /* fdiv dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) - fp_top()); /* fsubr dword ptr [0x3337a0] */

loc_000B600E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3337FC)); /* fmul dword ptr [0x3337fc] */
    PUSH32(esp, 0x000B6019u); RECOMP_ABI_CALL(0x0028AF78u, sub_0028AF78); /* call 0x0028AF78 */

loc_000B6019: ;
    ecx = MEM32(0x64D29C);
    eax = ZX8(LO8(eax));
    MEM8(esi + 3) = 0;
    edx = MEM32(esi);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esi) = edx;
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x000B6045u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B6042u); } /* indirect call */
    }

loc_000B6045: ;
    xmm0 = XMM_SCALAR(MEMF(0x49362C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x10); /* addss */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    eax = 1;
    esp += 4; return; /* ret */

loc_000B6060: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B6070
 * Original: 0x000B6070 - 0x000B6126 (182 bytes, 49 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6070: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B607E; /* jne: not equal / not zero */

loc_000B6079: ;
    PUSH32(esp, 0x000B607Eu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000B607E: ;
    PUSH32(esp, edi);
    edx = 0x50;
    ecx = eax;
    PUSH32(esp, 0x000B608Bu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000B608B: ;
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x14;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x30);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x34);
    MEM32(edx + 4) = ecx;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x3337D0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x33383C)); /* movss */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx + 0x10) = ecx;
    ecx = MEM32(eax + 0x18);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx + 0x14) = ecx;
    ecx = MEM32(eax + 0x20);
    MEM32(edx + 0x18) = ecx;
    ecx = MEM32(eax + 0x24);
    MEM32(edx + 0x1C) = ecx;
    eax = MEM32(eax + 0x28);
    MEM32(edx + 0x20) = eax;
    MEMF(edx + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(edx + 0x28) = xmm0.f[0]; /* movss */
    MEMF(edx + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(edx + 0x30) = xmm0.f[0]; /* movss */
    MEM32(edx + 0x38) = 0xFFFFFFFFu;
    MEM32(edx + 0x3C) = 0;
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B6130
 * Original: 0x000B6130 - 0x000B61AA (122 bytes, 48 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6130: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_G(_fas, _fbs)) goto loc_000B615C; /* jg: greater (signed >) */

loc_000B6135: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B61A8; /* je: equal / zero */

loc_000B613C: ;
    edi = MEM32(esi + 0x48);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x34) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000B61A8; /* je: equal / zero */

loc_000B614A: ;
    PUSH32(esp, 0x000B614Fu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_000B614F: ;
    ecx = MEM32(esi + 0x48);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000B615Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B6157u); } /* indirect call */
    }

loc_000B615A: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000B615C: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B61A8; /* je: equal / zero */

loc_000B6163: ;
    edi = ebx + ebx * 4;
    edi = edi << 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(0x64CF80);
    if (CMP_EQ(_fa, _fb)) goto loc_000B6190; /* je: equal / zero */

loc_000B6172: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B617B; /* jne: not equal / not zero */

loc_000B6176: ;
    PUSH32(esp, 0x000B617Bu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000B617B: ;
    edx = MEM32(esi + 0x48);
    PUSH32(esp, edx);
    edx = edi;
    ecx = eax;
    PUSH32(esp, 0x000B6188u); RECOMP_ABI_CALL(0x00013820u, sub_00013820); /* call 0x00013820 */

loc_000B6188: ;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x34) = ebx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000B6190: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6199; /* jne: not equal / not zero */

loc_000B6194: ;
    PUSH32(esp, 0x000B6199u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000B6199: ;
    edx = edi;
    ecx = eax;
    PUSH32(esp, 0x000B61A2u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000B61A2: ;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x34) = ebx;

loc_000B61A8: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B617F
 * Original: 0x000B617F - 0x000B61AA (43 bytes, 17 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B617F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B617F: ;
    edx = edi;
    ecx = eax;
    PUSH32(esp, 0x000B6188u); RECOMP_ABI_CALL(0x00013820u, sub_00013820); /* call 0x00013820 */

loc_000B6188: ;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x34) = ebx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

    PUSH32(esp, 0x000B6199u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000B6199: ;
    edx = edi;
    ecx = eax;
    PUSH32(esp, 0x000B61A2u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000B61A2: ;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x34) = ebx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B61B0
 * Original: 0x000B61B0 - 0x000B61D5 (37 bytes, 18 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B61B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B61B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B61D2; /* je: equal / zero */

loc_000B61BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4E84) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4E84 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B61D2; /* jne: not equal / not zero */

loc_000B61C1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B61CD; /* jne: not equal / not zero */

loc_000B61C6: ;
    MEM32(esi + 0x44) = MEM32(esi + 0x44) | 1;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000B61CD: ;
    PUSH32(esp, 0x000B61D2u); RECOMP_ABI_CALL(0x000B6130u, sub_000B6130); /* call 0x000B6130 */

loc_000B61D2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B61E0
 * Original: 0x000B61E0 - 0x000B62C2 (226 bytes, 64 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B61E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B61E0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = MEMF(edx + 0x2C); /* comiss */
    if ((_fca > _fcb)) goto loc_000B62C1; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(edx + 0x2C)) */

loc_000B61ED: ;
    _fa = (uint32_t)(MEM8(edx + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x44), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B62C1; /* jne: not equal / not zero */

loc_000B61F7: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x2C); /* comiss */
    eax = MEM32(esp + 8);
    MEMF(edx + 0x4C) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0xC);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B62C1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edx + 0x2C)) */

loc_000B6218: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_000B6220: ;
    esi = MEM32(edx + 0x40);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + 0x34) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B62BF; /* je: equal / zero */

loc_000B622C: ;
    edi = MEM32(edx + 0x48);
    eax = esi + esi * 4;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x40) = esi;
    esi = MEM32(edx + 0x24);
    MEM32(edi + eax * 8 + 0x24) = esi;
    esi = MEM32(ecx + 0x30);
    MEM32(edi + eax * 8) = esi;
    esi = MEM32(ecx + 0x34);
    eax = edi + eax * 8;
    MEM32(eax + 4) = esi;
    esi = MEM32(ecx + 0x38);
    MEM32(eax + 8) = esi;
    esi = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0xC) = esi;
    esi = MEM32(ecx + 0x14);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0x10) = esi;
    esi = MEM32(ecx + 0x18);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0x14) = esi;
    esi = MEM32(ecx + 0x20);
    MEM32(eax + 0x18) = esi;
    esi = MEM32(ecx + 0x24);
    MEM32(eax + 0x1C) = esi;
    esi = MEM32(ecx + 0x28);
    MEM32(eax + 0x20) = esi;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x2C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B62B2; /* jnp: not parity */

loc_000B6296: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x4C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0x2C); /* subss */
    MEMF(edx + 0x4C) = xmm0.f[0]; /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 0x2C); /* comiss */
    if ((_fca > _fcb)) goto loc_000B6220; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(edx + 0x2C)) */

loc_000B62AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000B62B2: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    MEMF(edx + 0x2C) = xmm0.f[0]; /* movss */

loc_000B62BF: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000B62C1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B62D0
 * Original: 0x000B62D0 - 0x000B637A (170 bytes, 51 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B62D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B62D0: ;
    ecx = MEM32(edx + 0x40);
    eax = MEM32(edx + 0x48);
    ecx = ecx + ecx * 4;
    PUSH32(esp, ebx);
    ebx = eax + ecx * 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B6378; /* jae: above or equal (unsigned >=) */

loc_000B62E5: ;
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_000B62F0: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B6323; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_000B6303: ;
    esi = MEM32(edx + 0x40);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(edx + 0x40) = esi;
    esi = MEM32(edx + 0x48);
    ecx = ecx + ecx * 4;
    esi = esi + ecx * 8;
    ecx = 0xA;
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
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x28;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_000B636E;

loc_000B6323: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax) = xmm5.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B636E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B62F0; /* jb: below (unsigned <) */

loc_000B6376: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000B6378: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B6380
 * Original: 0x000B6380 - 0x000B6744 (964 bytes, 252 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6380(void)
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

loc_000B6380: ;
    ecx = MEM32(0x49362C);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = ebp;
    PUSH32(esp, 0x000B6397u); RECOMP_ABI_CALL(0x000B61E0u, sub_000B61E0); /* call 0x000B61E0 */

loc_000B6397: ;
    xmm3 = XMM_SCALAR(MEMF(0x49362C)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000B63A7u); RECOMP_ABI_CALL(0x000B62D0u, sub_000B62D0); /* call 0x000B62D0 */

loc_000B63A7: ;
    eax = MEM32(ebp + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B63BB; /* jne: not equal / not zero */

loc_000B63AE: ;
    eax = MEM32(ebp + 0x44);
    eax = ~eax;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B63BB: ;
    edx = MEM32(0x64D2A4);
    eax = MEM32(edx + 0x10);
    SET_LO8(ecx, MEM8(eax + 0x1C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B673A; /* je: equal / zero */

loc_000B63CF: ;
    eax = MEM32(ebp + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = eax + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x000B63E7u); RECOMP_ABI_CALL(0x00089C20u, sub_00089C20); /* call 0x00089C20 */

loc_000B63E7: ;
    esi = MEM32(0x64D2B0);
    edx = MEM32(esi + 0x1C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    ecx = MEM32(esi + 0x1C);
    MEMF(ecx + 0x14) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0x1C);
    MEMF(edx + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x1C);
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0x24);
    eax = MEM32(ebp + 0x40);
    edi = MEM32(edx + 8);
    edx = MEM32(ebp + 0x48);
    ebx = MEM32(esi + 0x14);
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x24)); /* movss */
    ecx = MEM32(esi + 0xC);
    eax = eax + eax * 4;
    eax = edx + eax * 8;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    MEM32(esp + 0x18) = eax;
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEM32(esp + 0x10) = edx;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B649D; /* jnp: not parity */

loc_000B646B: ;
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    ebp = eax;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((0xD) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp = ebp & 0x3FF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = MEM32(ebp * 4 + 0x49D988);
    eax = eax & 0xFF800000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x7E800000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x7E800000;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ebp;
    goto loc_000B64A3;

loc_000B649D: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_000B64A3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x18) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B66FD; /* jae: above or equal (unsigned >=) */

loc_000B64AD: ;
    esi = ecx + 0x14;
    ebp = edx + 0x14;
    goto loc_000B64BD;

loc_000B64B5: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x1C);

loc_000B64BD: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 0xC)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebp)); /* movss */
    eax = MEM32(esp + 0x48);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0x10); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm5 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(ebp + -8); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm6.f[0]; /* subss */
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm7.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(ebp + -8); /* mulss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * MEMF(ebp + -4); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm6.f[0]; /* subss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm7.f[0]; /* movss */
    xmm7 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] - xmm6.f[0]; /* subss */
    MEMF(ecx) = xmm7.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebp + -16)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x24); /* subss */
    MEMF(esi + -16) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebp + -12)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x28); /* subss */
    MEMF(esi + -12) = xmm6.f[0]; /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esi + -16); /* addss */
    MEMF(esi + -16) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esi + -12)); /* movss */
    xmm7 = xmm4; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm5.f[0]; /* mulss */
    xmm5 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x2C); /* addss */
    MEMF(ecx) = xmm5.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] + xmm7.f[0]; /* addss */
    MEMF(esi + -12) = xmm6.f[0]; /* movss */
    MEMF(esi + -8) = xmm5.f[0]; /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] + MEMF(esi + -16); /* addss */
    MEMF(esi + -4) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + -12)); /* movss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(esi) = xmm5.f[0]; /* movss */
    xmm5 = XMM_SCALAR(MEMF(esi + -8)); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    MEMF(esi + 4) = xmm5.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x3C); /* subss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x34) = xmm7.f[0]; /* movss */
    eax = MEM32(0x64D2B0);
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    edx = ecx;
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ecx;
    MEM16(edi) = LO16(eax);
    MEM16(edi + 8) = 1;
    MEM16(edi + 0xA) = 2;
    ecx = eax + 1;
    MEM16(edi + 2) = LO16(ecx);
    ecx = eax + 2;
    MEM16(edi + 4) = LO16(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edi + -10) = LO16(edx);
    MEM16(edi) = LO16(ecx);
    ecx = eax + 3;
    MEM16(edi + 2) = LO16(ecx);
    ecx = MEM32(esp + 0x48);
    MEM16(edi + 4) = LO16(eax);
    MEM16(edi + 0xA) = LO16(edx);
    MEM16(edi + 6) = 2;
    MEM16(edi + 8) = 3;
    eax = MEM32(ecx + 0x38);
    ecx = MEM32(ecx + 0x3C);
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x10); /* mulss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000B66C9u); RECOMP_ABI_CALL(0x00269770u, sub_00269770); /* call 0x00269770 */

loc_000B66C9: ;
    ecx = MEM32(esp + 0x18);
    MEM32(ebx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x28;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(_fa, _fb)) goto loc_000B64B5; /* jb: below (unsigned <) */

loc_000B66F7: ;
    esi = MEM32(0x64D2B0);

loc_000B66FD: ;
    edx = MEM32(esi + 0x24);
    eax = MEM32(0x64D29C);
    MEM32(edx + 4) = 0;
    edi = MEM32(eax + 0x74);
    ecx = edi;
    ecx = ecx & 0xFFFFFEDFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x74) = ecx;
    eax = MEM32(0x64D2AC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000B672Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B6728u); } /* indirect call */
    }

loc_000B672B: ;
    ecx = MEM32(0x64D29C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x74) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000B673A: ;
    eax = 1;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B6750
 * Original: 0x000B6750 - 0x000B6A20 (720 bytes, 131 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6750: ;
    eax = MEM32(0x64D29C);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333850); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xF4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x333968); /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0xF8); /* mulss */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0xD0));
    SET_LO8(edx, 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B67E5; /* je: equal / zero */

loc_000B6790: ;
    xmm3.f[0] = (float)(int32_t)MEM32(eax + 0x10C); /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 0xEC); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0xE4); /* divss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0x110); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0xF0)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0xE8); /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm2.f[0]; /* movss */
    goto loc_000B6812;

loc_000B67E5: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0xEC); /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0xE4); /* divss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xF0)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0xE8); /* divss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */

loc_000B6812: ;
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(eax + 0xD0)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xD0), LO8(edx) (8-bit) */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0xF4); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0xF8); /* mulss */
    if (TEST_Z(_fa, _fb)) goto loc_000B688F; /* je: equal / zero */

loc_000B6839: ;
    xmm3.f[0] = (float)(int32_t)MEM32(eax + 0x10C); /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 0xEC); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0xE4); /* divss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0xC) = xmm3.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0x110); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0xF0)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0xE8); /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x10) = xmm2.f[0]; /* movss */
    goto loc_000B68BD;

loc_000B688F: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0xEC); /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0xE4); /* divss */
    MEMF(ecx + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xF0)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0xE8); /* divss */
    MEMF(ecx + 0x10) = xmm1.f[0]; /* movss */

loc_000B68BD: ;
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(eax + 0xD0)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xD0), LO8(edx) (8-bit) */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x18)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0xF4); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0xF8); /* mulss */
    if (TEST_Z(_fa, _fb)) goto loc_000B693A; /* je: equal / zero */

loc_000B68E4: ;
    xmm3.f[0] = (float)(int32_t)MEM32(eax + 0x10C); /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 0xEC); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0xE4); /* divss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x18) = xmm3.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0x110); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0xF0)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0xE8); /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x1C) = xmm2.f[0]; /* movss */
    goto loc_000B6968;

loc_000B693A: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0xEC); /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0xE4); /* divss */
    MEMF(ecx + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xF0)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0xE8); /* divss */
    MEMF(ecx + 0x1C) = xmm1.f[0]; /* movss */

loc_000B6968: ;
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    SET_LO8(ebx, MEM8(eax + 0xD0));
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 0xF4); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 0xF8); /* mulss */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(ebx) (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_000B69EC; /* je: equal / zero */

loc_000B6992: ;
    xmm3.f[0] = (float)(int32_t)MEM32(eax + 0x10C); /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 0xEC); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0xE4); /* divss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x24) = xmm3.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0x110); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0xF0)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0xE8); /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ecx + 0x28) = xmm2.f[0]; /* movss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000B69EC: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0xEC); /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0xE4); /* divss */
    MEMF(ecx + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xF0)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0xE8); /* divss */
    MEMF(ecx + 0x28) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000B6A20
 * Original: 0x000B6A20 - 0x000B6CCD (685 bytes, 130 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6A20: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333850); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x333968); /* addss */
    ecx = MEM32(0x64D29C);
    PUSH32(esp, ebx);
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    SET_LO8(ebx, MEM8(ecx + 0xD0));
    SET_LO8(edx, 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(ebx) (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_000B6AA6; /* je: equal / zero */

loc_000B6A4E: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x10C); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax); /* addss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0xEC); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] / MEMF(ecx + 0xE4); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x110); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0xF0)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ecx + 0xE8); /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    goto loc_000B6AD8;

loc_000B6AA6: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0xEC); /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ecx + 0xE4); /* divss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xF0)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ecx + 0xE8); /* divss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */

loc_000B6AD8: ;
    esi = MEM32(eax + 8);
    MEM32(eax + 8) = esi;
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(ecx + 0xD0)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xD0), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B6B45; /* je: equal / zero */

loc_000B6AEB: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x10C); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0xC); /* addss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0xEC); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] / MEMF(ecx + 0xE4); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x110); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x10); /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0xF0)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ecx + 0xE8); /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + 0x10) = xmm2.f[0]; /* movss */
    goto loc_000B6B79;

loc_000B6B45: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0xEC); /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ecx + 0xE4); /* divss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xF0)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x10); /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ecx + 0xE8); /* divss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */

loc_000B6B79: ;
    esi = MEM32(eax + 0x14);
    MEM32(eax + 0x14) = esi;
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(ecx + 0xD0)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xD0), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B6BE6; /* je: equal / zero */

loc_000B6B8C: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x10C); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x18); /* addss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0xEC); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] / MEMF(ecx + 0xE4); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x110); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x1C); /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0xF0)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ecx + 0xE8); /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + 0x1C) = xmm2.f[0]; /* movss */
    goto loc_000B6C1A;

loc_000B6BE6: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0xEC); /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ecx + 0xE4); /* divss */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xF0)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x1C); /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ecx + 0xE8); /* divss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */

loc_000B6C1A: ;
    esi = MEM32(eax + 0x20);
    MEM32(eax + 0x20) = esi;
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    SET_LO8(ebx, MEM8(ecx + 0xD0));
    POP32(esp, esi);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(ebx) (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_000B6C92; /* je: equal / zero */

loc_000B6C31: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x10C); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x24); /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0xEC); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ecx + 0xE4); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x110); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 0x28); /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0xF0)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 0xE8); /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x28) = xmm1.f[0]; /* movss */
    ecx = MEM32(eax + 0x2C);
    MEM32(eax + 0x2C) = ecx;
    esp += 4; return; /* ret */

loc_000B6C92: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0xEC); /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 0xE4); /* divss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xF0)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x28); /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + 0xE8); /* divss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    edx = MEM32(eax + 0x2C);
    MEM32(eax + 0x2C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_000B6CD0
 * Original: 0x000B6CD0 - 0x000B6D15 (69 bytes, 16 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6CD0: ;
    eax = MEM32(0x64D29C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x49A920);
    MEM32(eax + 0x250) = 0x49A920;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000B6CE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B6CE4u); } /* indirect call */
    }

loc_000B6CE7: ;
    edx = MEM32(0x64D29C);
    eax = MEM32(edx + 0x74);
    ecx = MEM32(edx + 0x6C);
    MEM32(0x47DC18) = eax;
    eax = eax & 0xFEFEBEDFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x47DC14) = ecx;
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax | 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x6C) = ecx;
    MEM32(edx + 0x74) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000B6D20
 * Original: 0x000B6D20 - 0x000B6ECB (427 bytes, 115 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B6D20: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(esi));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    MEM32(esp + 8) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_000B6DB3; /* je: equal / zero */

loc_000B6D39: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    eax = edi;
    PUSH32(esp, 0x000B6D4Fu); RECOMP_ABI_CALL(0x000A0430u, sub_000A0430); /* call 0x000A0430 */

loc_000B6D4F: ;
    edx = ZX16(MEM16(edi + 0x18));
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */
    eax = ZX16(MEM16(edi + 0x1A));
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(esi + 0x24) = xmm1.f[0]; /* movss */
    ecx = ZX16(MEM16(edi + 0x18));
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esi + 0x20) = xmm1.f[0]; /* movss */
    edx = ZX16(MEM16(edi + 0x1A));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esi + 0x28) = xmm2.f[0]; /* movss */
    goto loc_000B6DB9;

loc_000B6DB3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_000B6DB9: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B6E5C; /* je: equal / zero */

loc_000B6DC2: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    eax = ebx;
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6DE5; /* jne: not equal / not zero */

loc_000B6DD5: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x1C); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    goto loc_000B6DF5;

loc_000B6DE5: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6E09; /* jne: not equal / not zero */

loc_000B6DEB: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x1C); /* subss */

loc_000B6DF5: ;
    xmm3 = XMM_SCALAR(MEMF(0x3708AC)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(0x3708AC) = xmm3.f[0]; /* movss */

loc_000B6E09: ;
    eax = ebx;
    eax = eax & 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 4 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6E38; /* jne: not equal / not zero */

loc_000B6E14: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x24); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x3708A8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(0x3708A8) = xmm1.f[0]; /* movss */
    goto loc_000B6E5C;

loc_000B6E38: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(8) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 8 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6E5C; /* jne: not equal / not zero */

loc_000B6E3E: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x3708A8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x24); /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(0x3708A8) = xmm2.f[0]; /* movss */

loc_000B6E5C: ;
    ebx = ebx & 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000B6EC5; /* je: equal / zero */

loc_000B6E61: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6E87; /* jne: not equal / not zero */

loc_000B6E68: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    eax = edi;
    PUSH32(esp, 0x000B6E7Eu); RECOMP_ABI_CALL(0x000A0430u, sub_000A0430); /* call 0x000A0430 */

loc_000B6E7E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B6E87: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 4 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6EAE; /* jne: not equal / not zero */

loc_000B6E8D: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    edx = (int32_t)xmm0.f[0]; /* cvttss2si */
    eax = SX16(LO16(edx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x370898) = MEM16(0x370898) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x370898)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B6EAE: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(8) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 8 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6EC5; /* jne: not equal / not zero */

loc_000B6EB4: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(0x370898) = MEM16(0x370898) - LO16(eax);
    _fa = (uint32_t)(MEM16(0x370898)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */

loc_000B6EC5: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B6DBC
 * Original: 0x000B6DBC - 0x000B6ECB (271 bytes, 73 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6DBC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B6DBC: ;
    if (_flags /* je: equal / zero */) goto loc_000B6E5C;

loc_000B6DC2: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    eax = ebx;
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6DE5; /* jne: not equal / not zero */

loc_000B6DD5: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x1C); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    goto loc_000B6DF5;

loc_000B6DE5: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6E09; /* jne: not equal / not zero */

loc_000B6DEB: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x20)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 0x1C); /* subss */

loc_000B6DF5: ;
    xmm3 = XMM_SCALAR(MEMF(0x3708AC)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(0x3708AC) = xmm3.f[0]; /* movss */

loc_000B6E09: ;
    eax = ebx;
    eax = eax & 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 4 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6E38; /* jne: not equal / not zero */

loc_000B6E14: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0x24); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x3708A8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(0x3708A8) = xmm1.f[0]; /* movss */
    goto loc_000B6E5C;

loc_000B6E38: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(8) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 8 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6E5C; /* jne: not equal / not zero */

loc_000B6E3E: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x3708A8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x24); /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(0x3708A8) = xmm2.f[0]; /* movss */

loc_000B6E5C: ;
    ebx = ebx & 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000B6EC5; /* je: equal / zero */

loc_000B6E61: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6E87; /* jne: not equal / not zero */

loc_000B6E68: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    eax = edi;
    PUSH32(esp, 0x000B6E7Eu); RECOMP_ABI_CALL(0x000A0430u, sub_000A0430); /* call 0x000A0430 */

loc_000B6E7E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B6E87: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 4 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6EAE; /* jne: not equal / not zero */

loc_000B6E8D: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    edx = (int32_t)xmm0.f[0]; /* cvttss2si */
    eax = SX16(LO16(edx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x370898) = MEM16(0x370898) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x370898)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B6EAE: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(8) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 8 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6EC5; /* jne: not equal / not zero */

loc_000B6EB4: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(0x370898) = MEM16(0x370898) - LO16(eax);
    _fa = (uint32_t)(MEM16(0x370898)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */

loc_000B6EC5: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B6ED0
 * Original: 0x000B6ED0 - 0x000B6F3F (111 bytes, 38 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B6ED0: ;
    SET_LO8(eax, MEM8(esi));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B6F3B; /* je: equal / zero */

loc_000B6ED9: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 0x000B6EFAu); RECOMP_ABI_CALL(0x000A0590u, sub_000A0590); /* call 0x000A0590 */

loc_000B6EFA: ;
    SET_LO16(eax, MEM16(esi));
    SET_LO16(eax, LO16(eax) & 3);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6F27; /* jne: not equal / not zero */

loc_000B6F0A: ;
    eax = (uint32_t)(int32_t)SMEM16(esp);
    ecx = (uint32_t)(int32_t)SMEM16(esp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x37089C) = MEM16(0x37089C) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x37089C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B6F27: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B6F3B; /* jne: not equal / not zero */

loc_000B6F2D: ;
    edx = MEM32(esp);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x37089C) = MEM16(0x37089C) + LO16(edx);
    _fa = (uint32_t)(MEM16(0x37089C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */

loc_000B6F3B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000B6F40
 * Original: 0x000B6F40 - 0x000B707C (316 bytes, 83 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B6F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B6F40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D2B0);
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    esi = eax;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = esi + esi * 2;
    ecx = ecx + eax * 4;
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x34);
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000B6FB8u); RECOMP_ABI_CALL(0x000B6750u, sub_000B6750); /* call 0x000B6750 */

loc_000B6FB8: ;
    edx = MEM32(ebx + 0x14);
    ecx = MEM32(esp + 0x24);
    MEM32(edx + esi * 4 + 4) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(edx + esi * 4 + 0xC) = ecx;
    eax = edx + esi * 4 + 4;
    edx = MEM32(esp + 0x28);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(ebx + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    MEMF(eax + esi * 8 + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + esi * 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    MEMF(eax + esi * 8 + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + esi * 8 + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    MEMF(eax + esi * 8 + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + esi * 8 + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    eax = eax + esi * 8;
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 0x24);
    ecx = ebp + ebp * 4;
    edi = MEM32(edx + ecx * 4 + 8);
    ecx = edx + ecx * 4;
    edx = MEM32(ecx);
    eax = edx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = esi + 1;
    ecx = esi + 2;
    POP32(esp, edi);
    MEM16(eax + 2) = LO16(edx);
    MEM16(eax + 8) = LO16(edx);
    edx = esi + 3;
    MEM16(eax) = LO16(esi);
    MEM16(eax + 6) = LO16(esi);
    MEM16(eax + 0x10) = LO16(esi);
    MEM16(eax + 0x16) = LO16(esi);
    POP32(esp, esi);
    MEM16(eax + 4) = LO16(ecx);
    MEM16(eax + 0xA) = LO16(ecx);
    MEM16(eax + 0x12) = LO16(ecx);
    MEM16(eax + 0x14) = LO16(edx);
    MEM16(eax + 0x18) = LO16(ecx);
    MEM16(eax + 0x1A) = LO16(edx);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7080
 * Original: 0x000B7080 - 0x000B71CC (332 bytes, 88 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7080: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = MEM32(esp + 0x38);
    edi = MEM32(esp + 0x34);
    ebx = MEM32(0x64D2B0);
    ecx = MEM32(ebx + 0xC);
    esi = eax;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = SX16(LO16(edx));
    eax = esi + esi * 2;
    eax = ecx + eax * 4;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x1C);
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000B7108u); RECOMP_ABI_CALL(0x000B6A20u, sub_000B6A20); /* call 0x000B6A20 */

loc_000B7108: ;
    edx = MEM32(ebx + 0x14);
    ecx = MEM32(esp + 0x24);
    MEM32(edx + esi * 4 + 4) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(edx + esi * 4 + 0xC) = ecx;
    eax = edx + esi * 4 + 4;
    edx = MEM32(esp + 0x28);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(ebx + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    MEMF(eax + esi * 8 + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + esi * 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    MEMF(eax + esi * 8 + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + esi * 8 + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    MEMF(eax + esi * 8 + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + esi * 8 + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0xC)); /* movss */
    eax = eax + esi * 8;
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 0x24);
    ecx = ebp + ebp * 4;
    edi = MEM32(edx + ecx * 4 + 8);
    ecx = edx + ecx * 4;
    edx = MEM32(ecx);
    eax = edx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = esi + 1;
    ecx = esi + 2;
    MEM16(eax + 2) = LO16(edx);
    MEM16(eax + 8) = LO16(edx);
    edx = esi + 3;
    MEM16(eax) = LO16(esi);
    MEM16(eax + 4) = LO16(ecx);
    MEM16(eax + 6) = LO16(esi);
    MEM16(eax + 0xA) = LO16(ecx);
    MEM16(eax + 0x10) = LO16(esi);
    MEM16(eax + 0x12) = LO16(ecx);
    MEM16(eax + 0x14) = LO16(edx);
    MEM16(eax + 0x16) = LO16(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(eax + 0x18) = LO16(ecx);
    MEM16(eax + 0x1A) = LO16(edx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B716E
 * Original: 0x000B716E - 0x000B71CC (94 bytes, 31 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B716E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B716E: ;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 0x24);
    ecx = ebp + ebp * 4;
    edi = MEM32(edx + ecx * 4 + 8);
    ecx = edx + ecx * 4;
    edx = MEM32(ecx);
    eax = edx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = esi + 1;
    ecx = esi + 2;
    MEM16(eax + 2) = LO16(edx);
    MEM16(eax + 8) = LO16(edx);
    edx = esi + 3;
    MEM16(eax) = LO16(esi);
    MEM16(eax + 4) = LO16(ecx);
    MEM16(eax + 6) = LO16(esi);
    MEM16(eax + 0xA) = LO16(ecx);
    MEM16(eax + 0x10) = LO16(esi);
    MEM16(eax + 0x12) = LO16(ecx);
    MEM16(eax + 0x14) = LO16(edx);
    MEM16(eax + 0x16) = LO16(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(eax + 0x18) = LO16(ecx);
    MEM16(eax + 0x1A) = LO16(edx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B71D0
 * Original: 0x000B71D0 - 0x000B7B1E (2382 bytes, 652 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B71D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000B71D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x2444;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B71E0u); RECOMP_ABI_CALL(0x0028A870u, sub_0028A870); /* call 0x0028A870 */

loc_000B71E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(0x64D29C);
    eax = MEM32(edi + 0x4A8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x1C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000B7B17; /* je: equal / zero */

loc_000B7208: ;
    MEM32(esi + 0x14) = eax;
    fp_push(MEMF(edi + 0xF4)); /* fld float */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7216u); RECOMP_ABI_CALL(0x0028AF78u, sub_0028AF78); /* call 0x0028AF78 */

loc_000B7216: ;
    MEM16(esi + 0x18) = LO16(eax);
    fp_push(MEMF(edi + 0xF8)); /* fld float */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7225u); RECOMP_ABI_CALL(0x0028AF78u, sub_0028AF78); /* call 0x0028AF78 */

loc_000B7225: ;
    MEM16(esi + 0x1A) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B722Eu); RECOMP_ABI_CALL(0x000B6CD0u, sub_000B6CD0); /* call 0x000B6CD0 */

loc_000B722E: ;
    edx = MEM32(ebx + 0x14);
    eax = MEM32(edx);
    ecx = MEM32(0x3708B8);
    edx = MEM32(ecx + 0x14);
    ecx = MEM32(edx);
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x64D29C);
    MEM16(esi + 0x10) = 0xFFFF;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x524) = edi;
    SET_LO16(eax, MEM16(edx + 0x42A));
    ecx = MEM32(edx + 0x418);
    MEM16(edx + 0x42C) = LO16(eax);
    MEM16(edx + 0x42A) = LO16(edi);
    MEM32(edx + 0x41C) = ecx;
    eax = MEM32(edx + 0x6C);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000B7289; /* jne: not equal / not zero */

loc_000B7281: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 0x6C) = eax;

loc_000B7289: ;
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000B7B17; /* je: equal / zero */

loc_000B7299: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000B743C; /* jne: not equal / not zero */

loc_000B72A4: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x28) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_000B72B9; /* jle: less or equal (signed <=) */

loc_000B72B0: ;
    ecx = 0x40;

loc_000B72B5: ;
    MEM32(esp + 0x28) = ecx;

loc_000B72B9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000B72C7; /* jle: less or equal (signed <=) */

loc_000B72BD: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esp + 0x50;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B72C7: ;
    eax = MEM32(edx + 0x430);
    ebx = MEM32(esi + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x528) = eax;
    eax = ZX8(MEM8(esi + 0xC));
    if (6) _cf = (int)(((eax) >> (32 - (6))) & 1);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x24) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_000B73A3; /* jae: above or equal (unsigned >=) */

loc_000B72F2: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(esi, MEM16(ebx));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x400 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000B7398; /* jne: not equal / not zero */

loc_000B7303: ;
    edi = ZX16(MEM16(ebx + 4));
    ecx = ZX16(MEM16(ebx + 8));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esp + 0x1C);
    if (4) _cf = (int)(((ecx) >> (32 - (4))) & 1);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(edi + 0x1C))) >> 32) & 1);
    ecx = ecx + MEM32(edi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX16(MEM16(ebx + 0xA));
    if (4) _cf = (int)(((edi) >> (32 - (4))) & 1);
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_000B7398; /* jbe: below or equal (unsigned <=) */

loc_000B7324: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x100 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000B734F; /* je: equal / zero */

loc_000B732C: ;
    eax = ZX8(MEM8(ebx + 0x19));
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0x28));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0x28)); }
    eax = esp + edx * 4 + 0x50;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x10);
    edx = MEM32(0x64D29C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x24);

loc_000B734F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000B7398; /* jae: above or equal (unsigned >=) */

loc_000B7353: ;
    eax = MEM32(esp + 0x10);
    edx = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if (4) _cf = (int)(((edx) >> ((4) - 1)) & 1);
    edx = edx >> 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + edx + 1;
    MEM32(esp + 0x10) = edx;
    goto loc_000B7370;

    /* nop */

loc_000B7370: ;
    eax = ZX8(MEM8(ecx + 1));
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0x28));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0x28)); }
    esi = MEM32(esp + edx * 4 + 0x50);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x10)) >> 32) & 1);
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + edx * 4 + 0x50) = esi;
    eax = esp + edx * 4 + 0x50;
    if (CMP_B(_fa, _fb)) goto loc_000B7370; /* jb: below (unsigned <) */

loc_000B738E: ;
    edx = MEM32(0x64D29C);
    eax = MEM32(esp + 0x24);

loc_000B7398: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x40)) >> 32) & 1);
    ebx = ebx + 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000B72F2; /* jb: below (unsigned <) */

loc_000B73A3: ;
    eax = MEM32(esp + 0x28);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x14) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_000B7480; /* jle: less or equal (signed <=) */

loc_000B73B7: ;
    esi = MEM32(esp + 0x1C);
    goto loc_000B73C0;

    /* nop */

loc_000B73C0: ;
    eax = MEM32(edi * 4 + 0x344300);
    if (2) _cf = (int)(((eax) >> (32 - (2))) & 1);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + eax + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7468; /* je: equal / zero */

loc_000B73D6: ;
    SET_LO16(eax, MEM16(edi * 4 + 0x344300));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x10)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(esi + 0x10) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000B740F; /* je: equal / zero */

loc_000B73E4: ;
    ecx = MEM32(0x3708B8);
    MEM16(esi + 0x10) = LO16(eax);
    edx = MEM32(ecx + 0x14);
    eax = SX16(LO16(eax));
    PUSH32(esp, eax);
    eax = MEM32(edx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7400u); RECOMP_ABI_CALL(0x000A2420u, sub_000A2420); /* call 0x000A2420 */

loc_000B7400: ;
    edx = MEM32(0x64D29C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x524) = eax;

loc_000B740F: ;
    ecx = MEM32(esi + 0x524);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(edi * 4 + 0x344300);
    if (CMP_EQ(_fa, _fb)) goto loc_000B7446; /* je: equal / zero */

loc_000B7420: ;
    MEM32(esp + eax * 4 + 0x250) = ebx;
    MEM32(esp + ebx * 4 + 0x350) = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + eax * 4 + 0x150) = ecx;
    goto loc_000B7473;

loc_000B743C: ;
    ecx = 1;
    goto loc_000B72B5;

loc_000B7446: ;
    eax = MEM32(esp + eax * 4 + 0x50);
    ebx = MEM32(esp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi * 4 + 0x344300);
    MEM32(esp + 0x10) = ebx;
    ebx = MEM32(esp + 0x14);
    MEM32(esp + eax * 4 + 0x150) = ecx;
    goto loc_000B7473;

loc_000B7468: ;
    MEM32(esp + eax + 0x150) = 0;

loc_000B7473: ;
    eax = MEM32(esp + 0x28);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000B73C0; /* jl: less (signed <) */

loc_000B7480: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7AE1; /* je: equal / zero */

loc_000B748C: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    if (2) _cf = (int)(((eax) >> (32 - (2))) & 1);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B749Eu); RECOMP_ABI_CALL(0x00089C20u, sub_00089C20); /* call 0x00089C20 */

loc_000B749E: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x2C) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_000B75BA; /* jle: less or equal (signed <=) */

loc_000B74AF: ;
    eax = MEM32(0x64D2B0);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x24) = ecx;
    /* nop */

loc_000B74C0: ;
    edx = MEM32(esp + esi * 4 + 0x350);
    ebx = MEM32(esp + edx * 4 + 0x50);
    edx = MEM32(eax + 0x20);
    if (1) _cf = (int)(((ebx) >> (32 - (1))) & 1);
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000B758E; /* jae: above or equal (unsigned >=) */

loc_000B74D8: ;
    ecx = MEM32(esp + 0x24);
    edi = MEM32(eax + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi * 4 + 0x36A400);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_000B7584; /* jbe: below or equal (unsigned <=) */

loc_000B74F0: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000B752B; /* je: equal / zero */

loc_000B74F6: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000B7504; /* jne: not equal / not zero */

loc_000B74FF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7504u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000B7504: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(eax);
    esi = ebx;
    if (4) _cf = (int)(((esi) >> (32 - (4))) & 1);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B7515u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B7512u); } /* indirect call */
    }

loc_000B7515: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000B76EE; /* je: equal / zero */

loc_000B751D: ;
    esi = MEM32(esp + 0x2C);
    MEM32(edi + 8) = eax;
    eax = MEM32(0x64D2B0);
    goto loc_000B757D;

loc_000B752B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(edi) = ebx;
    MEM32(edi + 0xC) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B7577; /* je: equal / zero */

loc_000B7534: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000B7542; /* jne: not equal / not zero */

loc_000B753D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7542u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000B7542: ;
    edx = MEM32(edi);
    ecx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = ecx;
    if (4) _cf = (int)(((edx) >> (32 - (4))) & 1);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    eax = MEM32(esp + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000B7558u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B7555u); } /* indirect call */
    }

loc_000B7558: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7727; /* je: equal / zero */

loc_000B7560: ;
    ecx = MEM32(edi);
    if (4) _cf = (int)(((ecx) >> (32 - (4))) & 1);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + 8) = eax;
    MEM32(ecx + eax + 0xC) = 0xFFFFFFFFu;
    eax = MEM32(0x64D2B0);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B7577: ;
    MEM32(edi + 0xC) = edx;
    MEM32(edi + 0x10) = edx;

loc_000B757D: ;
    MEM32(esi * 4 + 0x36A400) = ebx;

loc_000B7584: ;
    ecx = MEM32(esp + 0x24);
    MEM32(edi) = ebx;
    edi = MEM32(esp + 0x14);

loc_000B758E: ;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + edx) = 0;
    edx = MEM32(esp + esi * 4 + 0x350);
    ebx = MEM32(eax + 0x24);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + ecx + 4) = edx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x14)) >> 32) & 1);
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x24) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000B74C0; /* jl: less (signed <) */

loc_000B75BA: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(eax + 0x20);
    eax = ZX8(MEM8(eax + 0xC));
    if (6) _cf = (int)(((eax) >> (32 - (6))) & 1);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x14) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_000B7AA6; /* jae: above or equal (unsigned >=) */

loc_000B75E4: ;
    xmm4 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    ecx = edx + 0x38;
    MEM32(esp + 0x18) = ecx;

loc_000B75F3: ;
    _fa = (uint32_t)(MEM8(edx + 1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 1), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000B7A7F; /* jne: not equal / not zero */

loc_000B75FD: ;
    eax = MEM32(esp + 0x18);
    xmm0 = XMM_SCALAR(MEMF(eax + -44)); /* movss */
    ecx = MEM32(esp + 0x1C);
    esi = ZX16(MEM16(ecx + 0x18));
    ebx = ZX16(MEM16(eax + -52));
    MEMF(0x3708AC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + -40)); /* movss */
    MEMF(0x3708A8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + -36)); /* movss */
    MEMF(0x3708A4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + -44); /* mulss */
    esi = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM16(0x37089C) = LO16(esi);
    esi = ZX16(MEM16(ecx + 0x1A));
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + -40); /* mulss */
    esi = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM16(0x370898) = LO16(esi);
    esi = ZX16(MEM16(eax + -48));
    eax = ZX16(MEM16(eax + -46));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(esi)) >> 32) & 1);
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ecx + 0x1C);
    if (4) _cf = (int)(((ebx) >> (32 - (4))) & 1);
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(esi)) >> 32) & 1);
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x30) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_000B7A7F; /* jbe: below or equal (unsigned <=) */

loc_000B7683: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7693u); RECOMP_ABI_CALL(0x000B6D20u, sub_000B6D20); /* call 0x000B6D20 */

loc_000B7693: ;
    eax = esi;
    SET_LO16(ecx, MEM16(eax));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 3 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000B7775; /* je: equal / zero */

loc_000B76A4: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B76BFu); RECOMP_ABI_CALL(0x000A0590u, sub_000A0590); /* call 0x000A0590 */

loc_000B76BF: ;
    ecx = esi;
    ecx = ZX16(MEM16(ecx));
    eax = ecx;
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000B7760; /* jne: not equal / not zero */

loc_000B76D6: ;
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x40);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x3C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((1) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    goto loc_000B776E;

loc_000B76EE: ;
    PUSH32(esp, 0x322FB0);
    eax = esp + 0x454;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7700u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_000B7700: ;
    ecx = 0x400;
    esi = esp + 0x450;
    edi = esp + 0x1450;
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
    PUSH32(esp, 0x334D7C);
    ecx = esp + 0x1454;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7727u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000B7727: ;
    PUSH32(esp, 0x322FB0);
    edx = esp + 0x1454;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7739u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_000B7739: ;
    PUSH32(esp, 0x334D7C);
    eax = esp + 0x454;
    ecx = 0x400;
    esi = esp + 0x1454;
    edi = esp + 0x454;
    PUSH32(esp, eax);
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7760u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000B7760: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000B7775; /* jne: not equal / not zero */

loc_000B7766: ;
    eax = MEM32(esp + 0x3C);
    _fb = (uint32_t)(MEM32(esp + 0x40)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 0x40)));
    eax = eax - MEM32(esp + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000B776E: ;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM16(0x37089C)) + (uint64_t)(LO16(eax))) >> 16) & 1);
    MEM16(0x37089C) = MEM16(0x37089C) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x37089C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */

loc_000B7775: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x18);
    if (TEST_Z(_fa, _fb)) goto loc_000B785E; /* je: equal / zero */

loc_000B7786: ;
    eax = ZX8(MEM8(esi + -31));
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0x28));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0x28)); }
    ecx = MEM32(esp + edx * 4 + 0x150);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(edi + 0x524) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B7A7B; /* je: equal / zero */

loc_000B77A5: ;
    eax = MEM32(esi + -32);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000B77B7; /* jb: below (unsigned <) */

loc_000B77B2: ;
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE0u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B77B9;

loc_000B77B7: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B77B9: ;
    edx = MEM32(esp + edx * 4 + 0x250);
    xmm0 = XMM_SCALAR(MEMF(0x3708A8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + -16)); /* movss */
    PUSH32(esp, edx);
    edx = MEM32(esi);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0xC;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    eax = MEM32(esi + -4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + -8);
    PUSH32(esp, edx);
    edx = MEM32(0x3708A4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + -12); /* addss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2 = xmm4; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x3708AC)); /* movss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + -24)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + -12); /* addss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + -20)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + -12); /* subss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + -28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + -12); /* subss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7852u); RECOMP_ABI_CALL(0x000B6F40u, sub_000B6F40); /* call 0x000B6F40 */

loc_000B7852: ;
    eax = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;

loc_000B785E: ;
    _fa = (uint32_t)(MEM16(esi + -48)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + -48), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7890; /* je: equal / zero */

loc_000B7865: ;
    eax = ZX16(MEM16(esi + -52));
    ecx = MEM32(edi + 0x1C);
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(edx, MEM16(eax + ecx + 4));
    _fb = (uint32_t)(MEM16(ebx + 4)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO16(edx)) < (uint32_t)(MEM16(ebx + 4)));
    SET_LO16(edx, LO16(edx) - MEM16(ebx + 4));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(eax, MEM16(eax + 6));
    _fb = (uint32_t)(MEM16(ebx + 6)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO16(eax)) < (uint32_t)(MEM16(ebx + 6)));
    SET_LO16(eax, LO16(eax) - MEM16(ebx + 6));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM16(0x37089C)) + (uint64_t)(LO16(edx))) >> 16) & 1);
    MEM16(0x37089C) = MEM16(0x37089C) + LO16(edx);
    _fa = (uint32_t)(MEM16(0x37089C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM16(0x370898)) + (uint64_t)(LO16(eax))) >> 16) & 1);
    MEM16(0x370898) = MEM16(0x370898) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x370898)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */

loc_000B7890: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x30) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000B7A7B; /* jae: above or equal (unsigned >=) */

loc_000B789A: ;
    /* nop */

loc_000B78A0: ;
    eax = ZX8(MEM8(ebx + 1));
    ecx = MEM32(esp + eax * 4 + 0x150);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x2C) = eax;
    MEM32(edi + 0x524) = ecx;
    MEM16(edi + 0x10) = LO16(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000B7A6C; /* je: equal / zero */

loc_000B78C1: ;
    eax = MEM32(ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000B78D2; /* jb: below (unsigned <) */

loc_000B78CD: ;
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE0u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B78D4;

loc_000B78D2: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B78D4: ;
    SET_LO16(edx, MEM16(ebx + 6));
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + ecx + 0xC;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ebx + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x4C) = ecx;
    SET_LO16(ecx, MEM16(ebx + 8));
    MEM16(esp + 0x44) = LO16(edx);
    SET_LO16(edx, MEM16(ebx + 0xA));
    MEM16(esp + 0x38) = LO16(ecx);
    MEM32(esp + 0x48) = eax;
    MEM16(esp + 0x34) = LO16(edx);
    if (CMP_NE(_fa, _fb)) goto loc_000B7992; /* jne: not equal / not zero */

loc_000B790D: ;
    eax = MEM32(esp + 0x18);
    edx = ZX16(MEM16(eax + -52));
    ecx = ZX16(MEM16(eax + -48));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edi + 0x1C);
    if (4) _cf = (int)(((ecx) >> (32 - (4))) & 1);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000B7992; /* je: equal / zero */

loc_000B7927: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 3 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000B7992; /* je: equal / zero */

loc_000B7930: ;
    ecx = ZX16(MEM16(edi + 0x18));
    edx = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x20);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + -44); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, edi);
    MEM16(0x37089C) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B795Bu); RECOMP_ABI_CALL(0x000B6ED0u, sub_000B6ED0); /* call 0x000B6ED0 */

loc_000B795B: ;
    edx = MEM32(esp + 0x24);
    SET_LO16(edx, MEM16(edx + -48));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7992; /* je: equal / zero */

loc_000B796B: ;
    eax = MEM32(esp + 0x18);
    eax = ZX16(MEM16(eax + -52));
    ecx = MEM32(edi + 0x1C);
    edx = ZX16(LO16(edx));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO16(eax, MEM16(eax + ecx + 4));
    if (4) _cf = (int)(((edx) >> (32 - (4))) & 1);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM16(edx + ecx + 4)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO16(eax)) < (uint32_t)(MEM16(edx + ecx + 4)));
    SET_LO16(eax, LO16(eax) - MEM16(edx + ecx + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM16(0x37089C)) + (uint64_t)(LO16(eax))) >> 16) & 1);
    MEM16(0x37089C) = MEM16(0x37089C) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x37089C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */

loc_000B7992: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x1000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000B79AC; /* je: equal / zero */

loc_000B799B: ;
    SET_LO16(ecx, MEM16(esp + 0x38));
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int16_t)(LO16(ecx))) >> ((((1) & 31u)) - 1)) & 1);
    SET_LO16(ecx, (uint32_t)(((int32_t)(int16_t)(LO16(ecx))) >> ((1) & 31u)));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sar result */
    MEM16(0x370894) = LO16(ecx);
    goto loc_000B79C5;

loc_000B79AC: ;
    ecx = MEM32(esp + 0x38);
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x4000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(0x370894) = LO16(edx);

loc_000B79C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x2000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000B79D6; /* je: equal / zero */

loc_000B79CC: ;
    SET_LO16(eax, MEM16(esp + 0x34));
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int16_t)(LO16(eax))) >> ((((1) & 31u)) - 1)) & 1);
    SET_LO16(eax, (uint32_t)(((int32_t)(int16_t)(LO16(eax))) >> ((1) & 31u)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sar result */
    goto loc_000B79E5;

loc_000B79D6: ;
    ecx = MEM32(esp + 0x34);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x8000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000B79E5: ;
    esi = MEM32(0x370898);
    edx = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x48);
    MEM16(0x370890) = LO16(eax);
    eax = MEM32(0x370890);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = MEM32(0x370894);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x37089C);
    _fb = (uint32_t)(MEM16(edi + 0x1A)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO16(eax)) + (uint64_t)(MEM16(edi + 0x1A))) >> 16) & 1);
    SET_LO16(eax, LO16(eax) + MEM16(edi + 0x1A));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(esi));
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = MEM32(esp + 0x2C);
    esi = MEM32(esp + esi * 4 + 0x250);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x50);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3708A4);
    PUSH32(esp, ecx);
    ecx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x58);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7A51u); RECOMP_ABI_CALL(0x000B7080u, sub_000B7080); /* call 0x000B7080 */

loc_000B7A51: ;
    eax = MEM32(edi + 0x1C);
    edx = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x528);
    if (((4) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((4) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edx * 4) = esi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = esi;

loc_000B7A6C: ;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x10)) >> 32) & 1);
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000B78A0; /* jb: below (unsigned <) */

loc_000B7A7B: ;
    edx = MEM32(esp + 0x20);

loc_000B7A7F: ;
    esi = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x40)) >> 32) & 1);
    edx = edx + 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x40)) >> 32) & 1);
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x14) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_000B75F3; /* jb: below (unsigned <) */

loc_000B7AA6: ;
    ebx = MEM32(esp + 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B7AAFu); RECOMP_ABI_CALL(0x000BD6E0u, sub_000BD6E0); /* call 0x000BD6E0 */

loc_000B7AAF: ;
    eax = MEM32(0x3708B8);
    ecx = MEM32(eax + 0x14);
    edx = MEM32(ecx);
    ecx = MEM32(0x64D2B0);
    MEM32(edx) = ecx;
    ecx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x000B7AC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B7AC4u); } /* indirect call */
    }

loc_000B7AC7: ;
    edx = MEM32(0x3708B8);
    eax = MEM32(edx + 0x14);
    ecx = MEM32(eax);
    edx = MEM32(0x64D29C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = 0;

loc_000B7AE1: ;
    eax = MEM32(0x47DC14);
    ecx = MEM32(0x47DC18);
    MEM32(edx + 0x6C) = eax;
    MEM32(edx + 0x74) = ecx;
    SET_LO16(eax, MEM16(edx + 0x42C));
    ecx = MEM32(edx + 0x418);
    MEM16(edx + 0x42A) = LO16(eax);
    eax = ZX16(LO16(eax));
    eax = eax + eax * 4;
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x41C) = eax;

loc_000B7B17: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_000B7B20
 * Original: 0x000B7B20 - 0x000B7B77 (87 bytes, 37 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7B20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi));
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    MEM32(0x3708B4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B7B71; /* je: equal / zero */

loc_000B7B35: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7B71; /* je: equal / zero */

loc_000B7B39: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7B68; /* jne: not equal / not zero */

loc_000B7B3D: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7B46u); RECOMP_ABI_CALL(0x0028BB2Eu, sub_0028BB2E); /* call 0x0028BB2E */

loc_000B7B46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7B63; /* je: equal / zero */

loc_000B7B4D: ;
    eax = MEM32(0x3708B4);
    edx = (uint32_t)(int32_t)SMEM8(esi);
    ecx = eax + eax * 4;
    eax = edx + ecx * 2 + -48;
    MEM32(0x3708B4) = eax;
    goto loc_000B7B68;

loc_000B7B63: ;
    ebx = 1;

loc_000B7B68: ;
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7B35; /* jne: not equal / not zero */

loc_000B7B71: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7B80
 * Original: 0x000B7B80 - 0x000B7C5C (220 bytes, 62 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B7B80: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(0x3708B4) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7C55; /* je: equal / zero */

loc_000B7BA5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7C55; /* je: equal / zero */

loc_000B7BAD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7C48; /* jne: not equal / not zero */

loc_000B7BB5: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7BBEu); RECOMP_ABI_CALL(0x0028BB2Eu, sub_0028BB2E); /* call 0x0028BB2E */

loc_000B7BBE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7C2E; /* je: equal / zero */

loc_000B7BC5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B7C00; /* jp: parity */

loc_000B7BD8: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    xmm1 = XMM_SCALAR(MEMF(0x3708B4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3337D4); /* mulss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(0x3708B4) = xmm0.f[0]; /* movss */
    goto loc_000B7C48;

loc_000B7C00: ;
    edx = (uint32_t)(int32_t)SMEM8(esi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x3708B4); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333854); /* mulss */
    MEMF(0x3708B4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    goto loc_000B7C48;

loc_000B7C2E: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x2E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7C43; /* jne: not equal / not zero */

loc_000B7C33: ;
    xmm0 = XMM_SCALAR(MEMF(0x333854)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    goto loc_000B7C48;

loc_000B7C43: ;
    ebx = 1;

loc_000B7C48: ;
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7BA5; /* jne: not equal / not zero */

loc_000B7C55: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7C60
 * Original: 0x000B7C60 - 0x000B7D10 (176 bytes, 60 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7C60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi));
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    MEM32(0x3708B4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B7D0A; /* je: equal / zero */

loc_000B7C79: ;
    /* nop */

loc_000B7C80: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7D0A; /* je: equal / zero */

loc_000B7C88: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7CFD; /* jne: not equal / not zero */

loc_000B7C8C: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B7C95u); RECOMP_ABI_CALL(0x0028BB2Eu, sub_0028BB2E); /* call 0x0028BB2E */

loc_000B7C95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7CB8; /* je: equal / zero */

loc_000B7C9C: ;
    ecx = MEM32(0x3708B4);
    edx = (uint32_t)(int32_t)SMEM8(esi);
    _fb = (uint32_t)(0xFFFFFFD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFD;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x3708B4) = ecx;
    goto loc_000B7CFD;

loc_000B7CB8: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x61 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B7CD9; /* jl: less (signed <) */

loc_000B7CBE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x66) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x66 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000B7CD9; /* jg: greater (signed >) */

loc_000B7CC2: ;
    ecx = MEM32(0x3708B4);
    edx = SX8(LO8(eax));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + edx + -87;
    MEM32(0x3708B4) = eax;
    goto loc_000B7CFD;

loc_000B7CD9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x41 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B7CF8; /* jl: less (signed <) */

loc_000B7CDD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x46) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x46 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000B7CF8; /* jg: greater (signed >) */

loc_000B7CE1: ;
    ecx = MEM32(0x3708B4);
    edx = SX8(LO8(eax));
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + edx + -55;
    MEM32(0x3708B4) = eax;
    goto loc_000B7CFD;

loc_000B7CF8: ;
    ebx = 1;

loc_000B7CFD: ;
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7C80; /* jne: not equal / not zero */

loc_000B7D0A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7D10
 * Original: 0x000B7D10 - 0x000B7E48 (312 bytes, 70 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7D10: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7D18; /* je: equal / zero */

loc_000B7D15: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000B7D18: ;
    edx = (uint32_t)(int32_t)SMEM8(ecx + 1);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xFFFFFFD3u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFD3u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x4C (32-bit) */
    MEM32(0x3708B0) = 0;
    eax = 1;
    if (CMP_A(_fa, _fb)) goto loc_000B7E47; /* ja: above (unsigned >) */

loc_000B7D38: ;
    edx = ZX8(MEM8(edx + 0xB7E7C));
    { uint32_t _jt = MEM32(edx * 4 + 0xB7E48); /* switch: 13 entries, 13 targets */
    if (_jt == 0x000B7D46u) goto loc_000B7D46;
    if (_jt == 0x000B7D56u) goto loc_000B7D56;
    if (_jt == 0x000B7D6Cu) goto loc_000B7D6C;
    if (_jt == 0x000B7D82u) goto loc_000B7D82;
    if (_jt == 0x000B7D98u) goto loc_000B7D98;
    if (_jt == 0x000B7DAEu) goto loc_000B7DAE;
    if (_jt == 0x000B7DC4u) goto loc_000B7DC4;
    if (_jt == 0x000B7DDAu) goto loc_000B7DDA;
    if (_jt == 0x000B7DF0u) goto loc_000B7DF0;
    if (_jt == 0x000B7E06u) goto loc_000B7E06;
    if (_jt == 0x000B7E1Cu) goto loc_000B7E1C;
    if (_jt == 0x000B7E2Cu) goto loc_000B7E2C;
    if (_jt == 0x000B7E47u) goto loc_000B7E47;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000B7D46: ;
    eax = 2;
    MEM32(0x3708B0) = 1;
    esp += 4; return; /* ret */

loc_000B7D56: ;
    eax = ecx + 1;
    MEM32(0x3708B0) = 2;
    PUSH32(esp, 0x000B7D68u); RECOMP_ABI_CALL(0x000B7B20u, sub_000B7B20); /* call 0x000B7B20 */

loc_000B7D68: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B7D6C: ;
    eax = ecx + 1;
    MEM32(0x3708B0) = 8;
    PUSH32(esp, 0x000B7D7Eu); RECOMP_ABI_CALL(0x000B7B20u, sub_000B7B20); /* call 0x000B7B20 */

loc_000B7D7E: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B7D82: ;
    eax = ecx + 1;
    MEM32(0x3708B0) = 9;
    PUSH32(esp, 0x000B7D94u); RECOMP_ABI_CALL(0x000B7B20u, sub_000B7B20); /* call 0x000B7B20 */

loc_000B7D94: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B7D98: ;
    eax = ecx + 1;
    MEM32(0x3708B0) = 4;
    PUSH32(esp, 0x000B7DAAu); RECOMP_ABI_CALL(0x000B7B80u, sub_000B7B80); /* call 0x000B7B80 */

loc_000B7DAA: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B7DAE: ;
    eax = ecx + 1;
    MEM32(0x3708B0) = 5;
    PUSH32(esp, 0x000B7DC0u); RECOMP_ABI_CALL(0x000B7B80u, sub_000B7B80); /* call 0x000B7B80 */

loc_000B7DC0: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B7DC4: ;
    eax = ecx + 1;
    MEM32(0x3708B0) = 6;
    PUSH32(esp, 0x000B7DD6u); RECOMP_ABI_CALL(0x000B7B80u, sub_000B7B80); /* call 0x000B7B80 */

loc_000B7DD6: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B7DDA: ;
    eax = ecx + 1;
    MEM32(0x3708B0) = 7;
    PUSH32(esp, 0x000B7DECu); RECOMP_ABI_CALL(0x000B7B80u, sub_000B7B80); /* call 0x000B7B80 */

loc_000B7DEC: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B7DF0: ;
    eax = ecx + 1;
    MEM32(0x3708B0) = 3;
    PUSH32(esp, 0x000B7E02u); RECOMP_ABI_CALL(0x000B7C60u, sub_000B7C60); /* call 0x000B7C60 */

loc_000B7E02: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B7E06: ;
    eax = ecx + 1;
    MEM32(0x3708B0) = 0xA;
    PUSH32(esp, 0x000B7E18u); RECOMP_ABI_CALL(0x000B7B20u, sub_000B7B20); /* call 0x000B7B20 */

loc_000B7E18: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000B7E1C: ;
    eax = 2;
    MEM32(0x3708B0) = 0xB;
    esp += 4; return; /* ret */

loc_000B7E2C: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 1);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x3708B4) = eax;
    MEM32(0x3708B0) = 0xC;
    eax = 3;

loc_000B7E47: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B7ED0
 * Original: 0x000B7ED0 - 0x000B7F45 (117 bytes, 52 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B7ED0: ;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7F40; /* je: equal / zero */

loc_000B7EDC: ;
    /* nop */

loc_000B7EE0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7F2D; /* jne: not equal / not zero */

loc_000B7EE4: ;
    ecx = esi;
    PUSH32(esp, 0x000B7EEBu); RECOMP_ABI_CALL(0x000B7D10u, sub_000B7D10); /* call 0x000B7D10 */

loc_000B7EEB: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x3708B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7EFA; /* jne: not equal / not zero */

loc_000B7EF7: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000B7F3A;

loc_000B7EFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7F3A; /* jne: not equal / not zero */

loc_000B7EFF: ;
    eax = MEM32(0x3708B4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B7F0E; /* jb: below (unsigned <) */

loc_000B7F08: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B7F3A;

loc_000B7F0E: ;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x370280) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x370280;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;
    /* nop */

loc_000B7F20: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7F20; /* jne: not equal / not zero */

loc_000B7F27: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B7F3A;

loc_000B7F2D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7F39; /* je: equal / zero */

loc_000B7F31: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7F39; /* je: equal / zero */

loc_000B7F35: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000B7F3A;

loc_000B7F39: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B7F3A: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B7EE0; /* jne: not equal / not zero */

loc_000B7F40: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B7F50
 * Original: 0x000B7F50 - 0x000B81E0 (656 bytes, 185 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B7F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B7F50: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax;
    MEM8(esp + 0x13) = 0;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x20) = edi;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B7F7B: ;
    MEM8(esp + 0x12) = 0;

loc_000B7F80: ;
    ecx = MEM32(esp + 0x2C);
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B81A5; /* je: equal / zero */

loc_000B7F8E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B80B0; /* jne: not equal / not zero */

loc_000B7F96: ;
    PUSH32(esp, 0x000B7F9Bu); RECOMP_ABI_CALL(0x000B7D10u, sub_000B7D10); /* call 0x000B7D10 */

loc_000B7F9B: ;
    edx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x3708B0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    MEM32(esp + 0x2C) = edx;
    if (CMP_A(_fa, _fb)) goto loc_000B809E; /* ja: above (unsigned >) */

loc_000B7FB4: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xB81B0); /* switch: 12 entries, 12 targets */
    if (_jt == 0x000B7FBBu) goto loc_000B7FBB;
    if (_jt == 0x000B7FCFu) goto loc_000B7FCF;
    if (_jt == 0x000B7FE4u) goto loc_000B7FE4;
    if (_jt == 0x000B7FF3u) goto loc_000B7FF3;
    if (_jt == 0x000B8005u) goto loc_000B8005;
    if (_jt == 0x000B8014u) goto loc_000B8014;
    if (_jt == 0x000B8024u) goto loc_000B8024;
    if (_jt == 0x000B8034u) goto loc_000B8034;
    if (_jt == 0x000B8044u) goto loc_000B8044;
    if (_jt == 0x000B8054u) goto loc_000B8054;
    if (_jt == 0x000B807Fu) goto loc_000B807F;
    if (_jt == 0x000B8087u) goto loc_000B8087;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000B7FBB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B809E; /* je: equal / zero */

loc_000B7FC3: ;
    MEM32(ebp) = MEM32(ebp) | 0x400000;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000B809E;

loc_000B7FCF: ;
    eax = MEM32(0x3708B4);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 0xFFF0FFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000B809E;

loc_000B7FE4: ;
    ecx = MEM32(0x3708B4);
    MEM32(esp + 0x14) = ecx;
    goto loc_000B809E;

loc_000B7FF3: ;
    eax = MEM32(0x3708B4);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    goto loc_000B809E;

loc_000B8005: ;
    edx = MEM32(0x3708B4);
    MEM32(esp + 0x3C) = edx;
    goto loc_000B809E;

loc_000B8014: ;
    xmm0 = XMM_SCALAR(MEMF(0x3708B4)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    goto loc_000B809E;

loc_000B8024: ;
    xmm0 = XMM_SCALAR(MEMF(0x3708B4)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_000B809E;

loc_000B8034: ;
    xmm0 = XMM_SCALAR(MEMF(0x3708B4)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    goto loc_000B809E;

loc_000B8044: ;
    xmm0 = XMM_SCALAR(MEMF(0x3708B4)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    goto loc_000B809E;

loc_000B8054: ;
    SET_LO8(eax, MEM8(0x3708B4));
    MEM8(esp + 0x13) = LO8(eax);
    MEM8(esp + 0x12) = 1;

loc_000B8062: ;
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B81A5; /* je: equal / zero */

loc_000B806E: ;
    SET_LO8(edx, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B80DB; /* je: equal / zero */

loc_000B8076: ;
    eax = ZX8(MEM8(esp + 0x13));
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000B80FE;

loc_000B807F: ;
    ebx = ebx | 0x10000000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000B809E;

loc_000B8087: ;
    eax = MEM32(0x3708B4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B8094; /* jb: below (unsigned <) */

loc_000B8090: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000B809E;

loc_000B8094: ;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x370280) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x370280;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_000B809E: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8062; /* jne: not equal / not zero */

loc_000B80A6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B7F80; /* je: equal / zero */

loc_000B80AE: ;
    goto loc_000B8062;

loc_000B80B0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B80BE; /* jne: not equal / not zero */

loc_000B80B4: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = ecx;
    goto loc_000B7F80;

loc_000B80BE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8062; /* jne: not equal / not zero */

loc_000B80C2: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x2C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B7F80; /* je: equal / zero */

loc_000B80CF: ;
    MEM32(ebp) = MEM32(ebp) | 0x400000;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000B7F80;

loc_000B80DB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B80F1; /* jne: not equal / not zero */

loc_000B80DF: ;
    eax = MEM32(esp + 0x2C);
    eax = ZX8(MEM8(eax));
    eax = MEM32(eax * 4 + 0x370488);
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000B80FE;

loc_000B80F1: ;
    eax = (uint32_t)(int32_t)SMEM8(edi);
    eax = MEM32(eax * 4 + 0x370488);
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B80FE: ;
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x14);
    ebp = MEM32(esi);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = ebp | eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = MEM32(esp + 0x28);
    MEM32(esi) = ebp;
    ebp = ZX16(MEM16(eax + 0x18));
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x18); /* mulss */
    ebp = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM16(esi + 4) = LO16(ebp);
    ebp = ZX16(MEM16(eax + 0x1A));
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x1C); /* mulss */
    ebp = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM16(esi + 6) = LO16(ebp);
    ebp = ZX16(MEM16(eax + 0x18));
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x34); /* mulss */
    ebp = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM16(esi + 8) = LO16(ebp);
    eax = ZX16(MEM16(eax + 0x1A));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x38); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM16(esi + 0xA) = LO16(eax);
    eax = MEM32(esp + 0x3C);
    MEM32(esi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8182; /* je: equal / zero */

loc_000B8174: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8182; /* je: equal / zero */

loc_000B8179: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_000B80F1;

loc_000B8182: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B818A; /* jne: not equal / not zero */

loc_000B8186: ;
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B818A: ;
    ebp = esi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x20);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000B7F7B;

loc_000B81A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(0x14000B80) = MEM8(0x14000B80) + LO8(eax);
    _fa = (uint32_t)(MEM8(0x14000B80)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(ebx) = MEM8(ebx) | 0;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(eax, LO8(eax) & 0x80);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_000B81C2: ;
    eax = eax | MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(eax, LO8(eax) ^ 0x80);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = eax | MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebx) = MEM8(ebx) | 0;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    RECOMP_UNIMPL("in al, 0x7f", 0x000B81CCu); /* TODO: in al, 0x7f */
    eax = eax | MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas > 0)) (void)0; /* goto loc_000B81DE - dead code, label not in function */ /* jg: greater (signed >) */

loc_000B81D3: ;
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + eax * 4 + 0xB) = MEM8(eax + eax * 4 + 0xB) + LO8(edx);
    _fa = (uint32_t)(MEM8(eax + eax * 4 + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi + -128) = MEM8(edi + -128) + HI8(ebx);
    _fa = (uint32_t)(MEM8(edi + -128)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = eax | MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_000B81E0(); return; /* fallthrough 0x000B81E0 */

}

/**
 * sub_000B8000
 * Original: 0x000B8000 - 0x000B81E0 (480 bytes, 139 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B8000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B8000: ;
    goto loc_000B809E;

    edx = MEM32(0x3708B4);
    MEM32(esp + 0x3C) = edx;
    goto loc_000B809E;

    xmm0 = XMM_SCALAR(MEMF(0x3708B4)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    goto loc_000B809E;

    xmm0 = XMM_SCALAR(MEMF(0x3708B4)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    goto loc_000B809E;

    xmm0 = XMM_SCALAR(MEMF(0x3708B4)); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    goto loc_000B809E;

    xmm0 = XMM_SCALAR(MEMF(0x3708B4)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    goto loc_000B809E;

    SET_LO8(eax, MEM8(0x3708B4));
    MEM8(esp + 0x13) = LO8(eax);
    MEM8(esp + 0x12) = 1;

loc_000B8062: ;
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B81A5; /* je: equal / zero */

loc_000B806E: ;
    SET_LO8(edx, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B80DB; /* je: equal / zero */

loc_000B8076: ;
    eax = ZX8(MEM8(esp + 0x13));
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000B80FE;

    ebx = ebx | 0x10000000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000B809E;

    eax = MEM32(0x3708B4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B8094; /* jb: below (unsigned <) */

loc_000B8090: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000B809E;

loc_000B8094: ;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x370280) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x370280;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_000B809E: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8062; /* jne: not equal / not zero */

loc_000B80A6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000B7F80(); return; } /* je: equal / zero */

loc_000B80AE: ;
    goto loc_000B8062;

    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B80BE; /* jne: not equal / not zero */

loc_000B80B4: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = ecx;
    g_seh_ebp = ebp; sub_000B7F80(); return; /* tail jmp 0x000B7F80 */

loc_000B80BE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8062; /* jne: not equal / not zero */

loc_000B80C2: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x2C) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000B7F80(); return; } /* je: equal / zero */

loc_000B80CF: ;
    MEM32(ebp) = MEM32(ebp) | 0x400000;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_000B7F80(); return; /* tail jmp 0x000B7F80 */

loc_000B80DB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B80F1; /* jne: not equal / not zero */

loc_000B80DF: ;
    eax = MEM32(esp + 0x2C);
    eax = ZX8(MEM8(eax));
    eax = MEM32(eax * 4 + 0x370488);
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000B80FE;

loc_000B80F1: ;
    eax = (uint32_t)(int32_t)SMEM8(edi);
    eax = MEM32(eax * 4 + 0x370488);
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B80FE: ;
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x14);
    ebp = MEM32(esi);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = ebp | eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = MEM32(esp + 0x28);
    MEM32(esi) = ebp;
    ebp = ZX16(MEM16(eax + 0x18));
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x18); /* mulss */
    ebp = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM16(esi + 4) = LO16(ebp);
    ebp = ZX16(MEM16(eax + 0x1A));
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x1C); /* mulss */
    ebp = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM16(esi + 6) = LO16(ebp);
    ebp = ZX16(MEM16(eax + 0x18));
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x34); /* mulss */
    ebp = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM16(esi + 8) = LO16(ebp);
    eax = ZX16(MEM16(eax + 0x1A));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x38); /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    MEM16(esi + 0xA) = LO16(eax);
    eax = MEM32(esp + 0x3C);
    MEM32(esi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8182; /* je: equal / zero */

loc_000B8174: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8182; /* je: equal / zero */

loc_000B8179: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_000B80F1;

loc_000B8182: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B818A; /* jne: not equal / not zero */

loc_000B8186: ;
    MEM32(esp + 0x2C) = MEM32(esp + 0x2C) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B818A: ;
    ebp = esi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x20);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_000B7F7B(); return; /* tail jmp 0x000B7F7B */

loc_000B81A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(0x14000B80) = MEM8(0x14000B80) + LO8(eax);
    _fa = (uint32_t)(MEM8(0x14000B80)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(ebx) = MEM8(ebx) | 0;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(eax, LO8(eax) & 0x80);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_000B81C2: ;
    eax = eax | MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(eax, LO8(eax) ^ 0x80);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = eax | MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebx) = MEM8(ebx) | 0;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    RECOMP_UNIMPL("in al, 0x7f", 0x000B81CCu); /* TODO: in al, 0x7f */
    eax = eax | MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas > 0)) (void)0; /* goto loc_000B81DE - dead code, label not in function */ /* jg: greater (signed >) */

loc_000B81D3: ;
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + eax * 4 + 0xB) = MEM8(eax + eax * 4 + 0xB) + LO8(edx);
    _fa = (uint32_t)(MEM8(eax + eax * 4 + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi + -128) = MEM8(edi + -128) + HI8(ebx);
    _fa = (uint32_t)(MEM8(edi + -128)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = eax | MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_000B81E0(); return; /* fallthrough 0x000B81E0 */

}

/**
 * sub_000B81E0
 * Original: 0x000B81E0 - 0x000B8264 (132 bytes, 45 insns)
 * Folder: render (between: 0x000A2256 and 0x000B8270)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B81E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000B81E0: ;
    PUSH32(esp, ecx);
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337B4); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000B81EE; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3337B4)) */

loc_000B81EA: ;
    eax = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000B81EE: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337B0)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_000B8262; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000B81FD: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3337AC); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    SET_LO8(edx, MEM8(esp));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_000B821A; /* jns: not sign (positive) */

loc_000B8211: ;
    eax = ecx;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x7F7F7F7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_000B821A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_000B822D; /* je: equal / zero */

loc_000B8220: ;
    esi = ecx;
    esi = esi >> 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0x3F3F3F3F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B822D: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B823F; /* je: equal / zero */

loc_000B8232: ;
    esi = ecx;
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0x1F1F1F1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B823F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B8251; /* je: equal / zero */

loc_000B8244: ;
    esi = ecx;
    esi = esi >> 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0xF0F0F0F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B8251: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_000B8262; /* je: equal / zero */

loc_000B8257: ;
    ecx = ecx >> 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x7070707;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B8262: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B8270
 * Original: 0x000B8270 - 0x000B8970 (1792 bytes, 566 insns)
 * Folder: render (source: TEXlist.c)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000B8270(void)
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

loc_000B8270: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x2014;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8280u); RECOMP_ABI_CALL(0x0028A870u, sub_0028A870); /* call 0x0028A870 */

loc_000B8280: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000B8291; /* jne: not equal / not zero */

loc_000B828C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8291u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000B8291: ;
    edx = 0x28;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B829Du); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000B829D: ;
    edi = eax;
    edx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    ebx = MEM32(ebp + 0xC);
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    esi = MEM32(0x64D398);
    MEM32(ecx + 0x24) = eax;
    eax = MEM32(edx);
    ecx = MEM32(eax);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    _fb = (uint32_t)(0x470A80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x470A80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ecx;
    MEM32(edi + 4) = 0;
    eax = MEM32(ebx);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0xC) = edx;
    MEM32(ebx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B831C; /* je: equal / zero */

loc_000B82F7: ;
    ecx = edx;
    SET_LO8(eax, LO8(edx));
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xF) = LO8(eax);
    MEM8(esp + 0xC) = LO8(ecx);
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 0xC);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(edx);
    MEM8(esp + 0xE) = LO8(eax);

loc_000B831C: ;
    eax = MEM32(esp + 0xC);
    MEM32(edi + 8) = eax;
    eax = MEM32(ebx);
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    MEM32(ebx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8359; /* je: equal / zero */

loc_000B8334: ;
    edx = ecx;
    SET_LO8(eax, LO8(ecx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xF) = LO8(eax);
    MEM8(esp + 0xC) = LO8(edx);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0xC);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(ecx);
    MEM8(esp + 0xE) = LO8(eax);

loc_000B8359: ;
    edx = MEM32(esp + 0xC);
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ebx);
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    MEM32(ebx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8396; /* je: equal / zero */

loc_000B8371: ;
    edx = ecx;
    SET_LO8(eax, LO8(ecx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xF) = LO8(eax);
    MEM8(esp + 0xC) = LO8(edx);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0xC);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(ecx);
    MEM8(esp + 0xE) = LO8(eax);

loc_000B8396: ;
    edx = MEM32(esp + 0xC);
    MEM32(edi + 0x10) = edx;
    eax = MEM32(ebx);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(ebx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B83DB; /* je: equal / zero */

loc_000B83B2: ;
    ecx = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esp + 0xC));
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xF) = LO8(eax);
    MEM8(esp + 0xC) = LO8(ecx);
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 0xC);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(edx);
    MEM8(esp + 0xE) = LO8(eax);

loc_000B83DB: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(edi + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(ebx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8424; /* je: equal / zero */

loc_000B83FB: ;
    ecx = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esp + 0xC));
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xF) = LO8(eax);
    MEM8(esp + 0xC) = LO8(ecx);
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 0xC);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(edx);
    MEM8(esp + 0xE) = LO8(eax);

loc_000B8424: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(edi + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx);
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    MEM32(ebx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8465; /* je: equal / zero */

loc_000B8440: ;
    edx = ecx;
    SET_LO8(eax, LO8(ecx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xF) = LO8(eax);
    MEM8(esp + 0xC) = LO8(edx);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0xC);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(ecx);
    MEM8(esp + 0xE) = LO8(eax);

loc_000B8465: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 3 (32-bit) */
    edx = MEM32(esp + 0xC);
    MEM32(edi + 0x1C) = edx;
    if (CMP_A(_fa, _fb)) goto loc_000B8487; /* ja: above (unsigned >) */

loc_000B8472: ;
    eax = MEM32(edi + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8484u); RECOMP_ABI_CALL(0x00269770u, sub_00269770); /* call 0x00269770 */

loc_000B8484: ;
    MEM32(edi + 0x10) = eax;

loc_000B8487: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 1 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B8494; /* ja: above (unsigned >) */

loc_000B848D: ;
    MEM32(edi + 0x1C) = 0x1A;

loc_000B8494: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    MEM32(ebx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B84CA; /* je: equal / zero */

loc_000B84A5: ;
    edx = ecx;
    SET_LO8(eax, LO8(ecx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xF) = LO8(eax);
    MEM8(esp + 0xC) = LO8(edx);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0xC);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(ecx);
    MEM8(esp + 0xE) = LO8(eax);

loc_000B84CA: ;
    edx = MEM32(esp + 0xC);
    ecx = edi + 0x20;
    MEM32(ecx) = edx;
    eax = MEM32(ebx);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0xC) = edx;
    MEM32(ebx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8507; /* je: equal / zero */

loc_000B84E4: ;
    SET_LO8(eax, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xC) = LO8(edx);
    MEM8(esp + 0xF) = LO8(eax);
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 0xC);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(edx);
    MEM8(esp + 0xE) = LO8(eax);

loc_000B8507: ;
    eax = MEM32(esp + 0xC);
    MEM32(edi + 0x24) = eax;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8521; /* jne: not equal / not zero */

loc_000B8516: ;
    _fa = (uint32_t)(MEM32(0x47D774)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47D774), 0x40 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B853B; /* jne: not equal / not zero */

loc_000B851F: ;
    goto loc_000B8526;

loc_000B8521: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B853B; /* jb: below (unsigned <) */

loc_000B8526: ;
    eax = MEM32(0x64D33C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8538; /* je: equal / zero */

loc_000B852F: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B853B; /* je: equal / zero */

loc_000B8538: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx) = MEM32(ebx) + 4;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B853B: ;
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000B8560; /* jne: not equal / not zero */

loc_000B8546: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B854Du); RECOMP_ABI_CALL(0x000B8B70u, sub_000B8B70); /* call 0x000B8B70 */

loc_000B854D: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000B8556: ;
    esi = MEM32(esp + 0x10);
    /* nop */

loc_000B8560: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B856E; /* jne: not equal / not zero */

loc_000B8569: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B856Eu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000B856E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000B8577u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000B8574u); } /* indirect call */
    }

loc_000B8577: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8938; /* je: equal / zero */

loc_000B857F: ;
    edi = MEM32(0x64D398);
    MEM32(esi) = eax;
    eax = MEM32(ebx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebx) = eax;
    MEM32(esp + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B85AA; /* je: equal / zero */

loc_000B859B: ;
    edx = ecx;
    SET_LO8(eax, LO8(ecx));
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xC) = LO8(edx);
    MEM8(esp + 0xD) = LO8(eax);

loc_000B85AA: ;
    eax = MEM32(esi);
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM16(eax) = LO16(ecx);
    eax = MEM32(ebx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebx) = eax;
    MEM32(esp + 0xC) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000B85D7; /* je: equal / zero */

loc_000B85C8: ;
    ecx = edx;
    SET_LO8(eax, LO8(edx));
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xC) = LO8(ecx);
    MEM8(esp + 0xD) = LO8(eax);

loc_000B85D7: ;
    SET_LO16(eax, MEM16(esp + 0xC));
    edx = MEM32(esi);
    MEM16(edx + 2) = LO16(eax);
    eax = MEM32(ebx);
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    MEM32(ebx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8618; /* je: equal / zero */

loc_000B85F3: ;
    edx = ecx;
    SET_LO8(eax, LO8(ecx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xF) = LO8(eax);
    MEM8(esp + 0xC) = LO8(edx);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0xC);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(ecx);
    MEM8(esp + 0xE) = LO8(eax);

loc_000B8618: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi);
    MEM32(edx + 4) = eax;
    eax = MEM32(ebx);
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    MEM32(ebx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8657; /* je: equal / zero */

loc_000B8632: ;
    edx = ecx;
    SET_LO8(eax, LO8(ecx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xF) = LO8(eax);
    MEM8(esp + 0xC) = LO8(edx);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0xC);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(ecx);
    MEM8(esp + 0xE) = LO8(eax);

loc_000B8657: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi);
    MEM32(edx + 8) = eax;
    eax = MEM32(ebx);
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    MEM32(ebx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B8696; /* je: equal / zero */

loc_000B8671: ;
    edx = ecx;
    SET_LO8(eax, LO8(ecx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xF) = LO8(eax);
    MEM8(esp + 0xC) = LO8(edx);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0xC);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(ecx);
    MEM8(esp + 0xE) = LO8(eax);

loc_000B8696: ;
    edx = MEM32(esi);
    eax = MEM32(esp + 0xC);
    MEM32(edx + 0xC) = eax;
    edx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000B86EF; /* jb: below (unsigned <) */

loc_000B86A7: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    MEM32(ebx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B86DB; /* je: equal / zero */

loc_000B86B8: ;
    SET_LO8(eax, LO8(ecx));
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xC) = LO8(ecx);
    MEM8(esp + 0xF) = LO8(eax);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0xC);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(ecx);
    MEM8(esp + 0xE) = LO8(eax);

loc_000B86DB: ;
    eax = MEM32(esi);
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(esi);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0xFFFEFFFFu;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_000B86F8;

loc_000B86EF: ;
    eax = MEM32(esi);
    MEM32(eax + 0x10) = 0;

loc_000B86F8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000B8748; /* ja: above (unsigned >) */

loc_000B86FD: ;
    ecx = MEM32(esi);
    SET_LO8(eax, MEM8(ecx + 6));
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000B871B; /* jbe: below or equal (unsigned <=) */

loc_000B8708: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = ZX8(LO8(eax));
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xF0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 4) = MEM32(ecx + 4) ^ eax;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B871B: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 4);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(9) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 9 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B8731; /* jne: not equal / not zero */

loc_000B872C: ;
    eax = 7;

loc_000B8731: ;
    MEM8(ecx + 5) = MEM8(ecx + 5) & 0xEF;
    _fa = (uint32_t)(MEM8(ecx + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = MEM32(esi);
    eax = ZX16(LO16(eax));
    eax = eax << 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xE000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 4) = MEM32(ecx + 4) ^ eax;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000B8748: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 6 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000B8773; /* jae: above or equal (unsigned >=) */

loc_000B874D: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    ecx = ecx >> 0x16;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = ZX8(LO8(ecx));
    MEM32(esp + 0xC) = edx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333E84)); /* fmul dword ptr [0x333e84] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B876Eu); RECOMP_ABI_CALL(0x0028AF78u, sub_0028AF78); /* call 0x0028AF78 */

loc_000B876E: ;
    ecx = MEM32(esi);
    MEM8(ecx + 0x13) = LO8(eax);

loc_000B8773: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM8(eax + 0x1C)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x1C), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B8786; /* je: equal / zero */

loc_000B877D: ;
    eax = MEM32(esi);
    MEM32(eax + 4) = MEM32(eax + 4) | 0x200;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000B8786: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    MEM32(ebx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000B87BC; /* je: equal / zero */

loc_000B8797: ;
    edx = ecx;
    SET_LO8(eax, LO8(ecx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xF) = LO8(eax);
    MEM8(esp + 0xC) = LO8(edx);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0xC);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(ecx);
    MEM8(esp + 0xE) = LO8(eax);

loc_000B87BC: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi);
    MEM32(edx + 0x14) = eax;
    eax = MEM32(esi);
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    edi = MEM32(eax + 0x14);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0xC) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B87DAu); RECOMP_ABI_CALL(0x0009E7F0u, sub_0009E7F0); /* call 0x0009E7F0 */

loc_000B87DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B87EC; /* je: equal / zero */

loc_000B87DE: ;
    SET_LO16(edx, MEM16(eax + 0xA));
    eax = MEM32(esi);
    MEM16(eax) = LO16(edx);
    goto loc_000B88E8;

loc_000B87EC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B87F8; /* jne: not equal / not zero */

loc_000B87F1: ;
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000B88E3;

loc_000B87F8: ;
    eax = MEM32(0x47D734);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(0x47D73C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000B881A; /* je: equal / zero */

loc_000B8808: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B880Du); RECOMP_ABI_CALL(0x0009E7F0u, sub_0009E7F0); /* call 0x0009E7F0 */

loc_000B880D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B881A; /* je: equal / zero */

loc_000B8811: ;
    SET_LO16(eax, MEM16(eax + 0xA));
    goto loc_000B88E3;

loc_000B881A: ;
    edx = MEM32(0x47D730);
    _fa = (uint32_t)(MEM32(0x47D734)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47D734), edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B884F; /* jl: less (signed <) */

loc_000B8828: ;
    PUSH32(esp, 0x323BA0);
    PUSH32(esp, 0x323B40);
    PUSH32(esp, 0xDA);
    PUSH32(esp, 0x323B04);
    PUSH32(esp, 0x32308C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8846u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000B8846: ;
    edx = MEM32(0x47D730);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B884F: ;
    eax = MEM32(0x47D740);
    ecx = MEM32(0x47D738);
    esi = eax;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(0x47D734);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(0x47D734) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_000B88A1; /* jge: greater or equal (signed >=) */

loc_000B8877: ;
    edi = MEM32(0x47D738);
    ecx = eax;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + edi + 0xC;

loc_000B8886: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), 0x20000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B8898; /* je: equal / zero */

loc_000B888E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B8886; /* jl: less (signed <) */

loc_000B8896: ;
    goto loc_000B889D;

loc_000B8898: ;
    MEM32(0x47D740) = eax;

loc_000B889D: ;
    edi = MEM32(esp + 0xC);

loc_000B88A1: ;
    SET_LO16(ecx, MEM16(esp + 0x18));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esi + 0xC);
    edx = edx & 0x1FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = edi;
    edx = edx | 0x20000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    edi = 0x47D754;
    MEM16(esi + 0xA) = LO16(ecx);
    MEM32(esi + 0xC) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B88D8u); RECOMP_ABI_CALL(0x000BFB80u, sub_000BFB80); /* call 0x000BFB80 */

loc_000B88D8: ;
    SET_LO16(eax, MEM16(esi + 0xA));
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000B88E3: ;
    ecx = MEM32(esi);
    MEM16(ecx) = LO16(eax);

loc_000B88E8: ;
    edx = MEM32(esi);
    SET_LO16(esi, MEM16(edx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B88F2u); RECOMP_ABI_CALL(0x0009EA30u, sub_0009EA30); /* call 0x0009EA30 */

loc_000B88F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B8909; /* je: equal / zero */

loc_000B88F6: ;
    ecx = MEM32(eax + 0xC);
    edx = ecx + 1;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x1FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = edx;

loc_000B8909: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(eax) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000B8556; /* jne: not equal / not zero */

loc_000B8924: ;
    edi = MEM32(esp + 0x14);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B892Fu); RECOMP_ABI_CALL(0x000B8B70u, sub_000B8B70); /* call 0x000B8B70 */

loc_000B892F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000B8938: ;
    PUSH32(esp, 0x322FB0);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B8947u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_000B8947: ;
    PUSH32(esp, 0x334D7C);
    eax = esp + 0x1024;
    ecx = 0x400;
    esi = esp + 0x24;
    edi = esp + 0x1024;
    PUSH32(esp, eax);
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
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000B896Bu); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000B896B: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000EF630
 * Original: 0x000EF630 - 0x000F0250 (3104 bytes, 957 insns)
 * Folder: render (source: JadeGDIInterface.cpp)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EF630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EF630: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x64D29C);
    eax = MEM32(ecx + 0x430);
    edx = MEM32(eax + 0xB0464);
    eax = MEM32(eax + 0xF23C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x34);
    ebx = 0xFF808080u;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000EF695; /* jne: not equal / not zero */

loc_000EF664: ;
    eax = MEM32(ecx + 0x430);
    eax = MEM32(eax + 4);
    eax = eax | MEM32(0x64EDB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    ebx = ZX8(LO8(ebx));
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x10) = eax;
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & 0xFF00FF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000EF695: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64E7C0);
    PUSH32(esp, 0x000EF6A1u); RECOMP_ABI_CALL(0x000F17C0u, sub_000F17C0); /* call 0x000F17C0 */

loc_000EF6A1: ;
    esi = 0x64DA60;
    PUSH32(esp, 0x000EF6ABu); RECOMP_ABI_CALL(0x000EEB30u, sub_000EEB30); /* call 0x000EEB30 */

loc_000EF6AB: ;
    edx = MEM32(0x64D29C);
    eax = MEM32(edx + 0x74);
    PUSH32(esp, eax);
    esi = 0x64EDA4;
    PUSH32(esp, 0x000EF6BFu); RECOMP_ABI_CALL(0x000F4FA0u, sub_000F4FA0); /* call 0x000F4FA0 */

loc_000EF6BF: ;
    ecx = MEM32(0x64D29C);
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(ecx + 0x94);
    ebp = MEM32(edx + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_000EFA25; /* je: equal / zero */

loc_000EF6D9: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EFA25; /* je: equal / zero */

loc_000EF6E2: ;
    edi = MEM32(eax + 8);
    eax = MEM32(eax + 4);
    eax = edi + eax * 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x2C) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_000F0248; /* jae: above or equal (unsigned >=) */

loc_000EF6FB: ;
    ecx = edi + 4;
    MEM32(esp + 0x1C) = ecx;
    goto loc_000EF708;

loc_000EF704: ;
    edi = MEM32(esp + 0x34);

loc_000EF708: ;
    eax = MEM32(edi);
    edx = eax + eax * 8;
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    esi = 0x64E710;
    PUSH32(esp, 0x000EF71Bu); RECOMP_ABI_CALL(0x000F41C0u, sub_000F41C0); /* call 0x000F41C0 */

loc_000EF71B: ;
    ecx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EF7F8; /* jne: not equal / not zero */

loc_000EF727: ;
    edx = MEM32(edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x20) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_000EF9E2; /* jbe: below or equal (unsigned <=) */

loc_000EF737: ;
    goto loc_000EF740;

    /* nop */

loc_000EF740: ;
    edx = MEM32(esp + 0x1C);
    edx = MEM32(edx);
    ecx = ZX16(MEM16(edx + ecx * 4));
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x24) = ecx;
    ecx = ecx + ecx * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    edi = MEM32(edx);
    esi = eax;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EF784; /* je: equal / zero */

loc_000EF770: ;
    edx = MEM32(ecx + ebp);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + ebp + 4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(ecx + ebp + 8);
    MEM32(eax + 0x14) = ecx;

loc_000EF784: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EF7C9; /* je: equal / zero */

loc_000EF78C: ;
    edx = MEM32(esp + 0x24);
    ebx = MEM32(ecx + edx * 4);
    ecx = MEM32(0x64EDB8);
    edi = MEM32(esp + 0x18);
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx ^ edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(LO8(ecx));
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    edx = edx & 0xFF00FF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebx;
    MEM32(eax + 0x18) = ecx;
    goto loc_000EF7CC;

loc_000EF7C9: ;
    MEM32(eax + 0x18) = ebx;

loc_000EF7CC: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x34);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    esi = MEM32(edx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(esp + 0x20) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_000EF740; /* jb: below (unsigned <) */

loc_000EF7F3: ;
    goto loc_000EF9E2;

loc_000EF7F8: ;
    ecx = MEM32(0x64D29C);
    ecx = MEM32(ecx + 0x6C);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EF8DC; /* je: equal / zero */

loc_000EF80A: ;
    edx = MEM32(edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_000EF9E2; /* jbe: below or equal (unsigned <=) */

loc_000EF81A: ;
    /* nop */

loc_000EF820: ;
    edx = MEM32(esp + 0x1C);
    edx = MEM32(edx);
    ecx = ZX16(MEM16(edx + ecx * 4));
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x20) = ecx;
    ecx = ecx + ecx * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    edi = MEM32(edx);
    esi = eax;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EF864; /* je: equal / zero */

loc_000EF850: ;
    edx = MEM32(ecx + ebp);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + ebp + 4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(ecx + ebp + 8);
    MEM32(eax + 0x14) = ecx;

loc_000EF864: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = MEM32(esp + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_000EF8A9; /* je: equal / zero */

loc_000EF870: ;
    ebx = MEM32(edx + ecx * 4);
    esi = MEM32(0x64EDB8);
    edx = MEM32(esp + 0x18);
    ebx = ebx | esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx ^ edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebx;
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebx;
    esi = esi & 0xFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = ZX8(LO8(edx));
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ebx;
    esi = esi & 0xFF00FF00u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebx;
    MEM32(eax + 0x18) = edx;
    goto loc_000EF8AC;

loc_000EF8A9: ;
    MEM32(eax + 0x18) = ebx;

loc_000EF8AC: ;
    edx = MEM32(esp + 0x3C);
    esi = MEM32(edx + ecx * 8);
    MEM32(eax + 0x1C) = esi;
    ecx = MEM32(edx + ecx * 8 + 4);
    edx = MEM32(esp + 0x34);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x24);
    esi = MEM32(edx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_000EF820; /* jb: below (unsigned <) */

loc_000EF8D7: ;
    goto loc_000EF9E2;

loc_000EF8DC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EF907; /* je: equal / zero */

loc_000EF8E1: ;
    PUSH32(esp, 0x330D9C);
    PUSH32(esp, 0x32316C);
    PUSH32(esp, 0x1A6);
    PUSH32(esp, 0x330D84);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000EF8FFu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000EF8FF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000EF9E2;

loc_000EF907: ;
    edx = MEM32(edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_000EF9E2; /* jbe: below or equal (unsigned <=) */

loc_000EF917: ;
    edx = MEM32(esp + 0x1C);
    edx = MEM32(edx);
    ecx = edx + ecx * 4;
    SET_LO16(edx, MEM16(ecx));
    SET_LO16(ecx, MEM16(ecx + 2));
    MEM16(esp + 0x28) = LO16(ecx);
    ecx = ZX16(LO16(edx));
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x20) = ecx;
    ecx = ecx + ecx * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    edi = MEM32(edx);
    esi = eax;
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EF969; /* je: equal / zero */

loc_000EF955: ;
    edx = MEM32(ecx + ebp);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + ebp + 4);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(ecx + ebp + 8);
    MEM32(eax + 0x14) = ecx;

loc_000EF969: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EF9AE; /* je: equal / zero */

loc_000EF971: ;
    edx = MEM32(esp + 0x20);
    ebx = MEM32(ecx + edx * 4);
    ecx = MEM32(0x64EDB8);
    edi = MEM32(esp + 0x18);
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx ^ edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(LO8(ecx));
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    edx = edx & 0xFF00FF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebx;
    MEM32(eax + 0x18) = ecx;
    goto loc_000EF9B1;

loc_000EF9AE: ;
    MEM32(eax + 0x18) = ebx;

loc_000EF9B1: ;
    ecx = ZX16(MEM16(esp + 0x28));
    edx = MEM32(esp + 0x3C);
    ecx = edx + ecx * 8;
    edx = MEM32(ecx);
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(ecx + 4);
    edx = MEM32(esp + 0x34);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x24);
    esi = MEM32(edx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_000EF917; /* jb: below (unsigned <) */

loc_000EF9E2: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(eax);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    esi = 6;
    edi = 0x64E710;
    PUSH32(esp, 0x000EF9FBu); RECOMP_ABI_CALL(0x000F4220u, sub_000F4220); /* call 0x000F4220 */

loc_000EF9FB: ;
    eax = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x1C) = edx;
    if (CMP_B(_fa, _fb)) goto loc_000EF704; /* jb: below (unsigned <) */

loc_000EFA1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000EFA25: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0248; /* je: equal / zero */

loc_000EFA2F: ;
    edx = MEM32(esp + 0x34);
    edi = MEM32(edx + 8);
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    esi = 0x64E710;
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0x000EFA4Fu); RECOMP_ABI_CALL(0x000F41C0u, sub_000F41C0); /* call 0x000F41C0 */

loc_000EFA4F: ;
    ecx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000EFC68; /* jne: not equal / not zero */

loc_000EFA5B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F0232; /* jae: above or equal (unsigned >=) */

loc_000EFA65: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_000EFA70;

    /* nop */

loc_000EFA70: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = ZX16(MEM16(edi));
    edx = MEM32(esp + 0x38);
    ecx = ecx + ecx * 2;
    ecx = edx + ecx * 4;
    esi = MEM32(ecx);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EFABA; /* je: equal / zero */

loc_000EFA93: ;
    ecx = ZX16(MEM16(edi));
    edx = ecx + ecx * 2;
    ecx = MEM32(ebp + edx * 4);
    MEM32(eax + 0xC) = ecx;
    ecx = ZX16(MEM16(edi));
    edx = ecx + ecx * 2;
    ecx = MEM32(ebp + edx * 4 + 4);
    MEM32(eax + 0x10) = ecx;
    ecx = ZX16(MEM16(edi));
    edx = ecx + ecx * 2;
    ecx = MEM32(ebp + edx * 4 + 8);
    MEM32(eax + 0x14) = ecx;

loc_000EFABA: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFAFE; /* je: equal / zero */

loc_000EFAC2: ;
    edx = ZX16(MEM16(edi));
    ebx = MEM32(ecx + edx * 4);
    edx = MEM32(0x64EDB8);
    ecx = MEM32(esp + 0x18);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(LO8(ecx));
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    edx = edx & 0xFF00FF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebx;
    MEM32(eax + 0x18) = ecx;
    goto loc_000EFB01;

loc_000EFAFE: ;
    MEM32(eax + 0x18) = ebx;

loc_000EFB01: ;
    edx = MEM32(esp + 0x38);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    ecx = ZX16(MEM16(edi + 2));
    ecx = ecx + ecx * 2;
    ecx = edx + ecx * 4;
    esi = MEM32(ecx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EFB5C; /* je: equal / zero */

loc_000EFB32: ;
    ecx = ZX16(MEM16(edi + 2));
    edx = ecx + ecx * 2;
    ecx = MEM32(ebp + edx * 4);
    MEM32(eax + 0xC) = ecx;
    ecx = ZX16(MEM16(edi + 2));
    edx = ecx + ecx * 2;
    ecx = MEM32(ebp + edx * 4 + 4);
    MEM32(eax + 0x10) = ecx;
    ecx = ZX16(MEM16(edi + 2));
    edx = ecx + ecx * 2;
    ecx = MEM32(ebp + edx * 4 + 8);
    MEM32(eax + 0x14) = ecx;

loc_000EFB5C: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFBA1; /* je: equal / zero */

loc_000EFB64: ;
    edx = ZX16(MEM16(edi + 2));
    ebx = MEM32(ecx + edx * 4);
    edx = MEM32(0x64EDB8);
    ecx = MEM32(esp + 0x18);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(LO8(ecx));
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    edx = edx & 0xFF00FF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebx;
    MEM32(eax + 0x18) = ecx;
    goto loc_000EFBA4;

loc_000EFBA1: ;
    MEM32(eax + 0x18) = ebx;

loc_000EFBA4: ;
    edx = MEM32(esp + 0x38);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    ecx = ZX16(MEM16(edi + 4));
    ecx = ecx + ecx * 2;
    ecx = edx + ecx * 4;
    esi = MEM32(ecx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EFBFF; /* je: equal / zero */

loc_000EFBD5: ;
    ecx = ZX16(MEM16(edi + 4));
    edx = ecx + ecx * 2;
    ecx = MEM32(ebp + edx * 4);
    MEM32(eax + 0xC) = ecx;
    ecx = ZX16(MEM16(edi + 4));
    edx = ecx + ecx * 2;
    ecx = MEM32(ebp + edx * 4 + 4);
    MEM32(eax + 0x10) = ecx;
    ecx = ZX16(MEM16(edi + 4));
    edx = ecx + ecx * 2;
    ecx = MEM32(ebp + edx * 4 + 8);
    MEM32(eax + 0x14) = ecx;

loc_000EFBFF: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFC44; /* je: equal / zero */

loc_000EFC07: ;
    edx = ZX16(MEM16(edi + 4));
    ebx = MEM32(ecx + edx * 4);
    edx = MEM32(0x64EDB8);
    ecx = MEM32(esp + 0x18);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(LO8(ecx));
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    edx = edx & 0xFF00FF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebx;
    MEM32(eax + 0x18) = ecx;
    goto loc_000EFC47;

loc_000EFC44: ;
    MEM32(eax + 0x18) = ebx;

loc_000EFC47: ;
    ecx = MEM32(esp + 0x1C);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000EFA70; /* jb: below (unsigned <) */

loc_000EFC63: ;
    goto loc_000F0232;

loc_000EFC68: ;
    ecx = MEM32(0x64D29C);
    ecx = MEM32(ecx + 0x6C);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EFDD2; /* je: equal / zero */

loc_000EFC7A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F0232; /* jae: above or equal (unsigned >=) */

loc_000EFC84: ;
    ecx = MEM32(esp + 0x3C);
    goto loc_000EFC90;

    /* nop */

loc_000EFC90: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    edx = ZX16(MEM16(edi));
    esi = MEM32(esp + 0x38);
    edx = edx + edx * 2;
    edx = esi + edx * 4;
    ebx = MEM32(edx);
    esi = eax;
    MEM32(esi) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(esi + 4) = ebx;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EFCDA; /* je: equal / zero */

loc_000EFCB3: ;
    edx = ZX16(MEM16(edi));
    edx = edx + edx * 2;
    edx = MEM32(ebp + edx * 4);
    MEM32(eax + 0xC) = edx;
    edx = ZX16(MEM16(edi));
    edx = edx + edx * 2;
    edx = MEM32(ebp + edx * 4 + 4);
    MEM32(eax + 0x10) = edx;
    edx = ZX16(MEM16(edi));
    edx = edx + edx * 2;
    edx = MEM32(ebp + edx * 4 + 8);
    MEM32(eax + 0x14) = edx;

loc_000EFCDA: ;
    esi = MEM32(esp + 0x38);
    MEM32(eax + 0x18) = 0xFF808080u;
    edx = MEM32(ecx);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x20) = edx;
    edx = ZX16(MEM16(edi + 2));
    edx = edx + edx * 2;
    edx = esi + edx * 4;
    ebx = MEM32(edx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    MEM32(esi) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(esi + 4) = ebx;
    edx = MEM32(edx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esi + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EFD40; /* je: equal / zero */

loc_000EFD16: ;
    edx = ZX16(MEM16(edi + 2));
    edx = edx + edx * 2;
    edx = MEM32(ebp + edx * 4);
    MEM32(eax + 0xC) = edx;
    edx = ZX16(MEM16(edi + 2));
    edx = edx + edx * 2;
    edx = MEM32(ebp + edx * 4 + 4);
    MEM32(eax + 0x10) = edx;
    edx = ZX16(MEM16(edi + 2));
    edx = edx + edx * 2;
    edx = MEM32(ebp + edx * 4 + 8);
    MEM32(eax + 0x14) = edx;

loc_000EFD40: ;
    esi = MEM32(esp + 0x38);
    MEM32(eax + 0x18) = 0xFF808080u;
    edx = MEM32(ecx);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x20) = edx;
    edx = ZX16(MEM16(edi + 4));
    edx = edx + edx * 2;
    edx = esi + edx * 4;
    ebx = MEM32(edx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    MEM32(esi) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(esi + 4) = ebx;
    edx = MEM32(edx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esi + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EFDA6; /* je: equal / zero */

loc_000EFD7C: ;
    edx = ZX16(MEM16(edi + 4));
    edx = edx + edx * 2;
    edx = MEM32(ebp + edx * 4);
    MEM32(eax + 0xC) = edx;
    edx = ZX16(MEM16(edi + 4));
    edx = edx + edx * 2;
    edx = MEM32(ebp + edx * 4 + 4);
    MEM32(eax + 0x10) = edx;
    edx = ZX16(MEM16(edi + 4));
    edx = edx + edx * 2;
    edx = MEM32(ebp + edx * 4 + 8);
    MEM32(eax + 0x14) = edx;

loc_000EFDA6: ;
    MEM32(eax + 0x18) = 0xFF808080u;
    edx = MEM32(ecx);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000EFC90; /* jb: below (unsigned <) */

loc_000EFDCD: ;
    goto loc_000F0232;

loc_000EFDD2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    ecx = MEM32(esp + 0x1C);
    if (TEST_Z(_fa, _fb)) goto loc_000F000A; /* je: equal / zero */

loc_000EFDDF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F0232; /* jae: above or equal (unsigned >=) */

loc_000EFDE7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = ZX16(MEM16(edi));
    edx = MEM32(esp + 0x38);
    ecx = ecx + ecx * 2;
    ecx = edx + ecx * 4;
    esi = MEM32(ecx);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EFE31; /* je: equal / zero */

loc_000EFE0A: ;
    ecx = ZX16(MEM16(edi));
    edx = ecx + ecx * 2;
    ecx = MEM32(ebp + edx * 4);
    MEM32(eax + 0xC) = ecx;
    ecx = ZX16(MEM16(edi));
    edx = ecx + ecx * 2;
    ecx = MEM32(ebp + edx * 4 + 4);
    MEM32(eax + 0x10) = ecx;
    ecx = ZX16(MEM16(edi));
    edx = ecx + ecx * 2;
    ecx = MEM32(ebp + edx * 4 + 8);
    MEM32(eax + 0x14) = ecx;

loc_000EFE31: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFE75; /* je: equal / zero */

loc_000EFE39: ;
    edx = ZX16(MEM16(edi));
    ebx = MEM32(ecx + edx * 4);
    edx = MEM32(0x64EDB8);
    ecx = MEM32(esp + 0x18);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(LO8(ecx));
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    edx = edx & 0xFF00FF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebx;
    MEM32(eax + 0x18) = ecx;
    goto loc_000EFE78;

loc_000EFE75: ;
    MEM32(eax + 0x18) = ebx;

loc_000EFE78: ;
    edx = ZX16(MEM16(edi));
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx + edx * 8);
    MEM32(eax + 0x1C) = edx;
    edx = ZX16(MEM16(edi));
    ecx = MEM32(ecx + edx * 8 + 4);
    MEM32(eax + 0x20) = ecx;
    ecx = ZX16(MEM16(edi + 2));
    edx = ecx + ecx * 2;
    ecx = MEM32(esp + 0x38);
    edx = ecx + edx * 4;
    esi = MEM32(edx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = eax;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EFEE0; /* je: equal / zero */

loc_000EFEB6: ;
    ecx = ZX16(MEM16(edi + 2));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4);
    MEM32(eax + 0xC) = edx;
    ecx = ZX16(MEM16(edi + 2));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4 + 4);
    MEM32(eax + 0x10) = edx;
    ecx = ZX16(MEM16(edi + 2));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4 + 8);
    MEM32(eax + 0x14) = edx;

loc_000EFEE0: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFF25; /* je: equal / zero */

loc_000EFEE8: ;
    edx = ZX16(MEM16(edi + 2));
    ebx = MEM32(ecx + edx * 4);
    edx = MEM32(0x64EDB8);
    ecx = MEM32(esp + 0x18);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(LO8(ecx));
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    edx = edx & 0xFF00FF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebx;
    MEM32(eax + 0x18) = ecx;
    goto loc_000EFF28;

loc_000EFF25: ;
    MEM32(eax + 0x18) = ebx;

loc_000EFF28: ;
    edx = ZX16(MEM16(edi + 2));
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx + edx * 8);
    MEM32(eax + 0x1C) = edx;
    edx = ZX16(MEM16(edi + 2));
    ecx = MEM32(ecx + edx * 8 + 4);
    MEM32(eax + 0x20) = ecx;
    ecx = ZX16(MEM16(edi + 4));
    edx = ecx + ecx * 2;
    ecx = MEM32(esp + 0x38);
    edx = ecx + edx * 4;
    esi = MEM32(edx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = eax;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EFF92; /* je: equal / zero */

loc_000EFF68: ;
    ecx = ZX16(MEM16(edi + 4));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4);
    MEM32(eax + 0xC) = edx;
    ecx = ZX16(MEM16(edi + 4));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4 + 4);
    MEM32(eax + 0x10) = edx;
    ecx = ZX16(MEM16(edi + 4));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4 + 8);
    MEM32(eax + 0x14) = edx;

loc_000EFF92: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFFD7; /* je: equal / zero */

loc_000EFF9A: ;
    edx = ZX16(MEM16(edi + 4));
    ebx = MEM32(ecx + edx * 4);
    edx = MEM32(0x64EDB8);
    ecx = MEM32(esp + 0x18);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(LO8(ecx));
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    edx = edx & 0xFF00FF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebx;
    MEM32(eax + 0x18) = ecx;
    goto loc_000EFFDA;

loc_000EFFD7: ;
    MEM32(eax + 0x18) = ebx;

loc_000EFFDA: ;
    edx = ZX16(MEM16(edi + 4));
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx + edx * 8);
    MEM32(eax + 0x1C) = edx;
    edx = ZX16(MEM16(edi + 4));
    ecx = MEM32(ecx + edx * 8 + 4);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000EFDE7; /* jb: below (unsigned <) */

loc_000F0005: ;
    goto loc_000F0232;

loc_000F000A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F0232; /* jae: above or equal (unsigned >=) */

loc_000F0012: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = ZX16(MEM16(edi));
    edx = ecx + ecx * 2;
    ecx = MEM32(esp + 0x38);
    edx = ecx + edx * 4;
    esi = MEM32(edx);
    ecx = eax;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F005C; /* je: equal / zero */

loc_000F0035: ;
    ecx = ZX16(MEM16(edi));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4);
    MEM32(eax + 0xC) = edx;
    ecx = ZX16(MEM16(edi));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4 + 4);
    MEM32(eax + 0x10) = edx;
    ecx = ZX16(MEM16(edi));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4 + 8);
    MEM32(eax + 0x14) = edx;

loc_000F005C: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F00A0; /* je: equal / zero */

loc_000F0064: ;
    edx = ZX16(MEM16(edi));
    ebx = MEM32(ecx + edx * 4);
    edx = MEM32(0x64EDB8);
    ecx = MEM32(esp + 0x18);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(LO8(ecx));
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    edx = edx & 0xFF00FF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebx;
    MEM32(eax + 0x18) = ecx;
    goto loc_000F00A3;

loc_000F00A0: ;
    MEM32(eax + 0x18) = ebx;

loc_000F00A3: ;
    edx = ZX16(MEM16(edi + 6));
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx + edx * 8);
    MEM32(eax + 0x1C) = edx;
    edx = ZX16(MEM16(edi + 6));
    ecx = MEM32(ecx + edx * 8 + 4);
    MEM32(eax + 0x20) = ecx;
    ecx = ZX16(MEM16(edi + 2));
    edx = ecx + ecx * 2;
    ecx = MEM32(esp + 0x38);
    edx = ecx + edx * 4;
    esi = MEM32(edx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = eax;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F010D; /* je: equal / zero */

loc_000F00E3: ;
    ecx = ZX16(MEM16(edi + 2));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4);
    MEM32(eax + 0xC) = edx;
    ecx = ZX16(MEM16(edi + 2));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4 + 4);
    MEM32(eax + 0x10) = edx;
    ecx = ZX16(MEM16(edi + 2));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4 + 8);
    MEM32(eax + 0x14) = edx;

loc_000F010D: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0152; /* je: equal / zero */

loc_000F0115: ;
    edx = ZX16(MEM16(edi + 2));
    ebx = MEM32(ecx + edx * 4);
    edx = MEM32(0x64EDB8);
    ecx = MEM32(esp + 0x18);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(LO8(ecx));
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    edx = edx & 0xFF00FF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebx;
    MEM32(eax + 0x18) = ecx;
    goto loc_000F0155;

loc_000F0152: ;
    MEM32(eax + 0x18) = ebx;

loc_000F0155: ;
    edx = ZX16(MEM16(edi + 8));
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx + edx * 8);
    MEM32(eax + 0x1C) = edx;
    edx = ZX16(MEM16(edi + 8));
    ecx = MEM32(ecx + edx * 8 + 4);
    MEM32(eax + 0x20) = ecx;
    ecx = ZX16(MEM16(edi + 4));
    edx = ecx + ecx * 2;
    ecx = MEM32(esp + 0x38);
    edx = ecx + edx * 4;
    esi = MEM32(edx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = eax;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F01BF; /* je: equal / zero */

loc_000F0195: ;
    ecx = ZX16(MEM16(edi + 4));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4);
    MEM32(eax + 0xC) = edx;
    ecx = ZX16(MEM16(edi + 4));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4 + 4);
    MEM32(eax + 0x10) = edx;
    ecx = ZX16(MEM16(edi + 4));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4 + 8);
    MEM32(eax + 0x14) = edx;

loc_000F01BF: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0204; /* je: equal / zero */

loc_000F01C7: ;
    edx = ZX16(MEM16(edi + 4));
    ebx = MEM32(ecx + edx * 4);
    edx = MEM32(0x64EDB8);
    ecx = MEM32(esp + 0x18);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(LO8(ecx));
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    edx = edx & 0xFF00FF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebx;
    MEM32(eax + 0x18) = ecx;
    goto loc_000F0207;

loc_000F0204: ;
    MEM32(eax + 0x18) = ebx;

loc_000F0207: ;
    edx = ZX16(MEM16(edi + 0xA));
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx + edx * 8);
    MEM32(eax + 0x1C) = edx;
    edx = ZX16(MEM16(edi + 0xA));
    ecx = MEM32(ecx + edx * 8 + 4);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F0012; /* jb: below (unsigned <) */

loc_000F0232: ;
    edx = MEM32(esp + 0x34);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    esi = 5;
    edi = 0x64E710;
    PUSH32(esp, 0x000F0248u); RECOMP_ABI_CALL(0x000F4220u, sub_000F4220); /* call 0x000F4220 */

loc_000F0248: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000EFABE
 * Original: 0x000EFABE - 0x000F0250 (1938 bytes, 606 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000EFABE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000EFABE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFAFE; /* je: equal / zero */

loc_000EFAC2: ;
    edx = ZX16(MEM16(edi));
    ebx = MEM32(ecx + edx * 4);
    edx = MEM32(0x64EDB8);
    ecx = MEM32(esp + 0x18);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(LO8(ecx));
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    edx = edx & 0xFF00FF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebx;
    MEM32(eax + 0x18) = ecx;
    goto loc_000EFB01;

loc_000EFAFE: ;
    MEM32(eax + 0x18) = ebx;

loc_000EFB01: ;
    edx = MEM32(esp + 0x38);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    ecx = ZX16(MEM16(edi + 2));
    ecx = ecx + ecx * 2;
    ecx = edx + ecx * 4;
    esi = MEM32(ecx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EFB5C; /* je: equal / zero */

loc_000EFB32: ;
    ecx = ZX16(MEM16(edi + 2));
    edx = ecx + ecx * 2;
    ecx = MEM32(ebp + edx * 4);
    MEM32(eax + 0xC) = ecx;
    ecx = ZX16(MEM16(edi + 2));
    edx = ecx + ecx * 2;
    ecx = MEM32(ebp + edx * 4 + 4);
    MEM32(eax + 0x10) = ecx;
    ecx = ZX16(MEM16(edi + 2));
    edx = ecx + ecx * 2;
    ecx = MEM32(ebp + edx * 4 + 8);
    MEM32(eax + 0x14) = ecx;

loc_000EFB5C: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFBA1; /* je: equal / zero */

loc_000EFB64: ;
    edx = ZX16(MEM16(edi + 2));
    ebx = MEM32(ecx + edx * 4);
    edx = MEM32(0x64EDB8);
    ecx = MEM32(esp + 0x18);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(LO8(ecx));
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    edx = edx & 0xFF00FF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebx;
    MEM32(eax + 0x18) = ecx;
    goto loc_000EFBA4;

loc_000EFBA1: ;
    MEM32(eax + 0x18) = ebx;

loc_000EFBA4: ;
    edx = MEM32(esp + 0x38);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    ecx = ZX16(MEM16(edi + 4));
    ecx = ecx + ecx * 2;
    ecx = edx + ecx * 4;
    esi = MEM32(ecx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EFBFF; /* je: equal / zero */

loc_000EFBD5: ;
    ecx = ZX16(MEM16(edi + 4));
    edx = ecx + ecx * 2;
    ecx = MEM32(ebp + edx * 4);
    MEM32(eax + 0xC) = ecx;
    ecx = ZX16(MEM16(edi + 4));
    edx = ecx + ecx * 2;
    ecx = MEM32(ebp + edx * 4 + 4);
    MEM32(eax + 0x10) = ecx;
    ecx = ZX16(MEM16(edi + 4));
    edx = ecx + ecx * 2;
    ecx = MEM32(ebp + edx * 4 + 8);
    MEM32(eax + 0x14) = ecx;

loc_000EFBFF: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFC44; /* je: equal / zero */

loc_000EFC07: ;
    edx = ZX16(MEM16(edi + 4));
    ebx = MEM32(ecx + edx * 4);
    edx = MEM32(0x64EDB8);
    ecx = MEM32(esp + 0x18);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(LO8(ecx));
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    edx = edx & 0xFF00FF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebx;
    MEM32(eax + 0x18) = ecx;
    goto loc_000EFC47;

loc_000EFC44: ;
    MEM32(eax + 0x18) = ebx;

loc_000EFC47: ;
    ecx = MEM32(esp + 0x1C);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_000EFA70(); return; } /* jb: below (unsigned <) */

loc_000EFC63: ;
    goto loc_000F0232;

    ecx = MEM32(0x64D29C);
    ecx = MEM32(ecx + 0x6C);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000EFDD2; /* je: equal / zero */

loc_000EFC7A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F0232; /* jae: above or equal (unsigned >=) */

loc_000EFC84: ;
    ecx = MEM32(esp + 0x3C);
    goto loc_000EFC90;

    /* nop */

loc_000EFC90: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    edx = ZX16(MEM16(edi));
    esi = MEM32(esp + 0x38);
    edx = edx + edx * 2;
    edx = esi + edx * 4;
    ebx = MEM32(edx);
    esi = eax;
    MEM32(esi) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(esi + 4) = ebx;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EFCDA; /* je: equal / zero */

loc_000EFCB3: ;
    edx = ZX16(MEM16(edi));
    edx = edx + edx * 2;
    edx = MEM32(ebp + edx * 4);
    MEM32(eax + 0xC) = edx;
    edx = ZX16(MEM16(edi));
    edx = edx + edx * 2;
    edx = MEM32(ebp + edx * 4 + 4);
    MEM32(eax + 0x10) = edx;
    edx = ZX16(MEM16(edi));
    edx = edx + edx * 2;
    edx = MEM32(ebp + edx * 4 + 8);
    MEM32(eax + 0x14) = edx;

loc_000EFCDA: ;
    esi = MEM32(esp + 0x38);
    MEM32(eax + 0x18) = 0xFF808080u;
    edx = MEM32(ecx);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x20) = edx;
    edx = ZX16(MEM16(edi + 2));
    edx = edx + edx * 2;
    edx = esi + edx * 4;
    ebx = MEM32(edx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    MEM32(esi) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(esi + 4) = ebx;
    edx = MEM32(edx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esi + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EFD40; /* je: equal / zero */

loc_000EFD16: ;
    edx = ZX16(MEM16(edi + 2));
    edx = edx + edx * 2;
    edx = MEM32(ebp + edx * 4);
    MEM32(eax + 0xC) = edx;
    edx = ZX16(MEM16(edi + 2));
    edx = edx + edx * 2;
    edx = MEM32(ebp + edx * 4 + 4);
    MEM32(eax + 0x10) = edx;
    edx = ZX16(MEM16(edi + 2));
    edx = edx + edx * 2;
    edx = MEM32(ebp + edx * 4 + 8);
    MEM32(eax + 0x14) = edx;

loc_000EFD40: ;
    esi = MEM32(esp + 0x38);
    MEM32(eax + 0x18) = 0xFF808080u;
    edx = MEM32(ecx);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x20) = edx;
    edx = ZX16(MEM16(edi + 4));
    edx = edx + edx * 2;
    edx = esi + edx * 4;
    ebx = MEM32(edx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    MEM32(esi) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(esi + 4) = ebx;
    edx = MEM32(edx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esi + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EFDA6; /* je: equal / zero */

loc_000EFD7C: ;
    edx = ZX16(MEM16(edi + 4));
    edx = edx + edx * 2;
    edx = MEM32(ebp + edx * 4);
    MEM32(eax + 0xC) = edx;
    edx = ZX16(MEM16(edi + 4));
    edx = edx + edx * 2;
    edx = MEM32(ebp + edx * 4 + 4);
    MEM32(eax + 0x10) = edx;
    edx = ZX16(MEM16(edi + 4));
    edx = edx + edx * 2;
    edx = MEM32(ebp + edx * 4 + 8);
    MEM32(eax + 0x14) = edx;

loc_000EFDA6: ;
    MEM32(eax + 0x18) = 0xFF808080u;
    edx = MEM32(ecx);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000EFC90; /* jb: below (unsigned <) */

loc_000EFDCD: ;
    goto loc_000F0232;

loc_000EFDD2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    ecx = MEM32(esp + 0x1C);
    if (TEST_Z(_fa, _fb)) goto loc_000F000A; /* je: equal / zero */

loc_000EFDDF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F0232; /* jae: above or equal (unsigned >=) */

loc_000EFDE7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = ZX16(MEM16(edi));
    edx = MEM32(esp + 0x38);
    ecx = ecx + ecx * 2;
    ecx = edx + ecx * 4;
    esi = MEM32(ecx);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EFE31; /* je: equal / zero */

loc_000EFE0A: ;
    ecx = ZX16(MEM16(edi));
    edx = ecx + ecx * 2;
    ecx = MEM32(ebp + edx * 4);
    MEM32(eax + 0xC) = ecx;
    ecx = ZX16(MEM16(edi));
    edx = ecx + ecx * 2;
    ecx = MEM32(ebp + edx * 4 + 4);
    MEM32(eax + 0x10) = ecx;
    ecx = ZX16(MEM16(edi));
    edx = ecx + ecx * 2;
    ecx = MEM32(ebp + edx * 4 + 8);
    MEM32(eax + 0x14) = ecx;

loc_000EFE31: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFE75; /* je: equal / zero */

loc_000EFE39: ;
    edx = ZX16(MEM16(edi));
    ebx = MEM32(ecx + edx * 4);
    edx = MEM32(0x64EDB8);
    ecx = MEM32(esp + 0x18);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(LO8(ecx));
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    edx = edx & 0xFF00FF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebx;
    MEM32(eax + 0x18) = ecx;
    goto loc_000EFE78;

loc_000EFE75: ;
    MEM32(eax + 0x18) = ebx;

loc_000EFE78: ;
    edx = ZX16(MEM16(edi));
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx + edx * 8);
    MEM32(eax + 0x1C) = edx;
    edx = ZX16(MEM16(edi));
    ecx = MEM32(ecx + edx * 8 + 4);
    MEM32(eax + 0x20) = ecx;
    ecx = ZX16(MEM16(edi + 2));
    edx = ecx + ecx * 2;
    ecx = MEM32(esp + 0x38);
    edx = ecx + edx * 4;
    esi = MEM32(edx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = eax;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EFEE0; /* je: equal / zero */

loc_000EFEB6: ;
    ecx = ZX16(MEM16(edi + 2));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4);
    MEM32(eax + 0xC) = edx;
    ecx = ZX16(MEM16(edi + 2));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4 + 4);
    MEM32(eax + 0x10) = edx;
    ecx = ZX16(MEM16(edi + 2));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4 + 8);
    MEM32(eax + 0x14) = edx;

loc_000EFEE0: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFF25; /* je: equal / zero */

loc_000EFEE8: ;
    edx = ZX16(MEM16(edi + 2));
    ebx = MEM32(ecx + edx * 4);
    edx = MEM32(0x64EDB8);
    ecx = MEM32(esp + 0x18);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(LO8(ecx));
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    edx = edx & 0xFF00FF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebx;
    MEM32(eax + 0x18) = ecx;
    goto loc_000EFF28;

loc_000EFF25: ;
    MEM32(eax + 0x18) = ebx;

loc_000EFF28: ;
    edx = ZX16(MEM16(edi + 2));
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx + edx * 8);
    MEM32(eax + 0x1C) = edx;
    edx = ZX16(MEM16(edi + 2));
    ecx = MEM32(ecx + edx * 8 + 4);
    MEM32(eax + 0x20) = ecx;
    ecx = ZX16(MEM16(edi + 4));
    edx = ecx + ecx * 2;
    ecx = MEM32(esp + 0x38);
    edx = ecx + edx * 4;
    esi = MEM32(edx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = eax;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000EFF92; /* je: equal / zero */

loc_000EFF68: ;
    ecx = ZX16(MEM16(edi + 4));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4);
    MEM32(eax + 0xC) = edx;
    ecx = ZX16(MEM16(edi + 4));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4 + 4);
    MEM32(eax + 0x10) = edx;
    ecx = ZX16(MEM16(edi + 4));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4 + 8);
    MEM32(eax + 0x14) = edx;

loc_000EFF92: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000EFFD7; /* je: equal / zero */

loc_000EFF9A: ;
    edx = ZX16(MEM16(edi + 4));
    ebx = MEM32(ecx + edx * 4);
    edx = MEM32(0x64EDB8);
    ecx = MEM32(esp + 0x18);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(LO8(ecx));
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    edx = edx & 0xFF00FF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebx;
    MEM32(eax + 0x18) = ecx;
    goto loc_000EFFDA;

loc_000EFFD7: ;
    MEM32(eax + 0x18) = ebx;

loc_000EFFDA: ;
    edx = ZX16(MEM16(edi + 4));
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx + edx * 8);
    MEM32(eax + 0x1C) = edx;
    edx = ZX16(MEM16(edi + 4));
    ecx = MEM32(ecx + edx * 8 + 4);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000EFDE7; /* jb: below (unsigned <) */

loc_000F0005: ;
    goto loc_000F0232;

loc_000F000A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F0232; /* jae: above or equal (unsigned >=) */

loc_000F0012: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = ZX16(MEM16(edi));
    edx = ecx + ecx * 2;
    ecx = MEM32(esp + 0x38);
    edx = ecx + edx * 4;
    esi = MEM32(edx);
    ecx = eax;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F005C; /* je: equal / zero */

loc_000F0035: ;
    ecx = ZX16(MEM16(edi));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4);
    MEM32(eax + 0xC) = edx;
    ecx = ZX16(MEM16(edi));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4 + 4);
    MEM32(eax + 0x10) = edx;
    ecx = ZX16(MEM16(edi));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4 + 8);
    MEM32(eax + 0x14) = edx;

loc_000F005C: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F00A0; /* je: equal / zero */

loc_000F0064: ;
    edx = ZX16(MEM16(edi));
    ebx = MEM32(ecx + edx * 4);
    edx = MEM32(0x64EDB8);
    ecx = MEM32(esp + 0x18);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(LO8(ecx));
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    edx = edx & 0xFF00FF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebx;
    MEM32(eax + 0x18) = ecx;
    goto loc_000F00A3;

loc_000F00A0: ;
    MEM32(eax + 0x18) = ebx;

loc_000F00A3: ;
    edx = ZX16(MEM16(edi + 6));
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx + edx * 8);
    MEM32(eax + 0x1C) = edx;
    edx = ZX16(MEM16(edi + 6));
    ecx = MEM32(ecx + edx * 8 + 4);
    MEM32(eax + 0x20) = ecx;
    ecx = ZX16(MEM16(edi + 2));
    edx = ecx + ecx * 2;
    ecx = MEM32(esp + 0x38);
    edx = ecx + edx * 4;
    esi = MEM32(edx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = eax;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F010D; /* je: equal / zero */

loc_000F00E3: ;
    ecx = ZX16(MEM16(edi + 2));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4);
    MEM32(eax + 0xC) = edx;
    ecx = ZX16(MEM16(edi + 2));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4 + 4);
    MEM32(eax + 0x10) = edx;
    ecx = ZX16(MEM16(edi + 2));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4 + 8);
    MEM32(eax + 0x14) = edx;

loc_000F010D: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0152; /* je: equal / zero */

loc_000F0115: ;
    edx = ZX16(MEM16(edi + 2));
    ebx = MEM32(ecx + edx * 4);
    edx = MEM32(0x64EDB8);
    ecx = MEM32(esp + 0x18);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(LO8(ecx));
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    edx = edx & 0xFF00FF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebx;
    MEM32(eax + 0x18) = ecx;
    goto loc_000F0155;

loc_000F0152: ;
    MEM32(eax + 0x18) = ebx;

loc_000F0155: ;
    edx = ZX16(MEM16(edi + 8));
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx + edx * 8);
    MEM32(eax + 0x1C) = edx;
    edx = ZX16(MEM16(edi + 8));
    ecx = MEM32(ecx + edx * 8 + 4);
    MEM32(eax + 0x20) = ecx;
    ecx = ZX16(MEM16(edi + 4));
    edx = ecx + ecx * 2;
    ecx = MEM32(esp + 0x38);
    edx = ecx + edx * 4;
    esi = MEM32(edx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = eax;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F01BF; /* je: equal / zero */

loc_000F0195: ;
    ecx = ZX16(MEM16(edi + 4));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4);
    MEM32(eax + 0xC) = edx;
    ecx = ZX16(MEM16(edi + 4));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4 + 4);
    MEM32(eax + 0x10) = edx;
    ecx = ZX16(MEM16(edi + 4));
    ecx = ecx + ecx * 2;
    edx = MEM32(ebp + ecx * 4 + 8);
    MEM32(eax + 0x14) = edx;

loc_000F01BF: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0204; /* je: equal / zero */

loc_000F01C7: ;
    edx = ZX16(MEM16(edi + 4));
    ebx = MEM32(ecx + edx * 4);
    edx = MEM32(0x64EDB8);
    ecx = MEM32(esp + 0x18);
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx ^ ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(LO8(ecx));
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ebx;
    edx = edx & 0xFF00FF00u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = ebx;
    MEM32(eax + 0x18) = ecx;
    goto loc_000F0207;

loc_000F0204: ;
    MEM32(eax + 0x18) = ebx;

loc_000F0207: ;
    edx = ZX16(MEM16(edi + 0xA));
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx + edx * 8);
    MEM32(eax + 0x1C) = edx;
    edx = ZX16(MEM16(edi + 0xA));
    ecx = MEM32(ecx + edx * 8 + 4);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F0012; /* jb: below (unsigned <) */

loc_000F0232: ;
    edx = MEM32(esp + 0x34);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    esi = 5;
    edi = 0x64E710;
    PUSH32(esp, 0x000F0248u); RECOMP_ABI_CALL(0x000F4220u, sub_000F4220); /* call 0x000F4220 */

loc_000F0248: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F0250
 * Original: 0x000F0250 - 0x000F02E5 (149 bytes, 35 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F0250: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 1), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F02D6; /* je: equal / zero */

loc_000F0257: ;
    eax = MEM32(esi + 0xC);
    edx = ZX8(MEM8(esi + 0xE));
    ecx = eax;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & 0xFF00FF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F0278u); RECOMP_ABI_CALL(0x0029B1B0u, sub_0029B1B0); /* call 0x0029B1B0 */

loc_000F0278: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    ecx = MEM32(eax * 4 + 0x344410);
    eax = MEM32(0x2A7FF8);
    MEM32(0x2A8374) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    MEMF(0x2A8380) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEMF(0x2A8378) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    edx = MEM32(esp);
    eax = eax | 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2A7FF8) = eax;
    MEM32(0x2A837C) = edx;
    ecx = 1;
    eax = 0x64EDA4;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000F5520(); return; /* tail jmp 0x000F5520 */

loc_000F02D6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x64EDA4;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000F5520(); return; /* tail jmp 0x000F5520 */

}

/**
 * sub_000F02F0
 * Original: 0x000F02F0 - 0x000F0334 (68 bytes, 24 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F02F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F02F0: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x22) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x22 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000F0331; /* ja: above (unsigned >) */

loc_000F02FA: ;
    eax = ZX8(MEM8(eax + 0xF0344));
    { uint32_t _jt = MEM32(eax * 4 + 0xF0334); /* switch: 4 entries, 3 targets */
    if (_jt == 0x000F0308u) goto loc_000F0308;
    if (_jt == 0x000F0316u) goto loc_000F0316;
    if (_jt == 0x000F0331u) goto loc_000F0331;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000F0308: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0x000F0312u); RECOMP_ABI_CALL(0x000F0250u, sub_000F0250); /* call 0x000F0250 */

loc_000F0312: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000F0316: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x000F0321u); RECOMP_ABI_CALL(0x0009EA90u, sub_0009EA90); /* call 0x0009EA90 */

loc_000F0321: ;
    ebx = eax;
    edx = edi;
    eax = 0x64E780;
    PUSH32(esp, 0x000F032Fu); RECOMP_ABI_CALL(0x000F4910u, sub_000F4910); /* call 0x000F4910 */

loc_000F032F: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000F0331: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F0362
 * Original: 0x000F0362 - 0x000F0370 (14 bytes, 11 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0362(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F0362: ;
    _fb = (uint32_t)(MEM8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + HI8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000F0370
 * Original: 0x000F0370 - 0x000F0386 (22 bytes, 7 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F0370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F0370: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    ecx = 0x64E780;
    PUSH32(esp, 0x000F0383u); RECOMP_ABI_CALL(0x000F42C0u, sub_000F42C0); /* call 0x000F42C0 */

loc_000F0383: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F0390
 * Original: 0x000F0390 - 0x000F03A5 (21 bytes, 7 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0390(void)
{

loc_000F0390: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64E780);
    PUSH32(esp, 0x000F03A4u); RECOMP_ABI_CALL(0x000F4440u, sub_000F4440); /* call 0x000F4440 */

loc_000F03A4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F03B0
 * Original: 0x000F03B0 - 0x000F03C6 (22 bytes, 8 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F03B0(void)
{

loc_000F03B0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    esi = 0x64E780;
    PUSH32(esp, 0x000F03C4u); RECOMP_ABI_CALL(0x000F48B0u, sub_000F48B0); /* call 0x000F48B0 */

loc_000F03C4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F03D0
 * Original: 0x000F03D0 - 0x000F03FE (46 bytes, 17 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F03D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F03D0: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_000F03EB; /* je: equal / zero */

loc_000F03DE: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = 0x64E780;
    PUSH32(esp, 0x000F03EAu); RECOMP_ABI_CALL(0x000F49B0u, sub_000F49B0); /* call 0x000F49B0 */

loc_000F03EA: ;
    POP32(esp, edi);

loc_000F03EB: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    edx = esi;
    eax = 0x64E780;
    PUSH32(esp, 0x000F03FCu); RECOMP_ABI_CALL(0x000F49A0u, sub_000F49A0); /* call 0x000F49A0 */

loc_000F03FC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F0400
 * Original: 0x000F0400 - 0x000F0411 (17 bytes, 6 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0400(void)
{

loc_000F0400: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0x64E780;
    PUSH32(esp, 0x000F040Fu); RECOMP_ABI_CALL(0x000F4880u, sub_000F4880); /* call 0x000F4880 */

loc_000F040F: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F0420
 * Original: 0x000F0420 - 0x000F0431 (17 bytes, 6 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0420(void)
{

loc_000F0420: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0x64E780;
    PUSH32(esp, 0x000F042Fu); RECOMP_ABI_CALL(0x000F4970u, sub_000F4970); /* call 0x000F4970 */

loc_000F042F: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F0440
 * Original: 0x000F0440 - 0x000F0496 (86 bytes, 27 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F0440: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F0460; /* jne: not equal / not zero */

loc_000F0449: ;
    eax = 0x64E710;
    PUSH32(esp, 0x000F0453u); RECOMP_ABI_CALL(0x000F4260u, sub_000F4260); /* call 0x000F4260 */

loc_000F0453: ;
    PUSH32(esp, esi);
    esi = 0x64DA60;
    PUSH32(esp, 0x000F045Eu); RECOMP_ABI_CALL(0x000EF1D0u, sub_000EF1D0); /* call 0x000EF1D0 */

loc_000F045E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F0460: ;
    PUSH32(esp, 0x64E780);
    PUSH32(esp, 0x000F046Au); RECOMP_ABI_CALL(0x000F4AA0u, sub_000F4AA0); /* call 0x000F4AA0 */

loc_000F046A: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0489; /* je: equal / zero */

loc_000F0472: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F0489u); RECOMP_ABI_CALL(0x00298A50u, sub_00298A50); /* call 0x00298A50 */

loc_000F0489: ;
    PUSH32(esp, esi);
    esi = 0x64DA60;
    PUSH32(esp, 0x000F0494u); RECOMP_ABI_CALL(0x000EF1D0u, sub_000EF1D0); /* call 0x000EF1D0 */

loc_000F0494: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F04A0
 * Original: 0x000F04A0 - 0x000F04AC (12 bytes, 5 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F04A0(void)
{

loc_000F04A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F04AAu); RECOMP_ABI_CALL(0x000EF310u, sub_000EF310); /* call 0x000EF310 */

loc_000F04AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F04B0
 * Original: 0x000F04B0 - 0x000F04CD (29 bytes, 10 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F04B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F04B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0x64EDA4;
    PUSH32(esp, 0x000F04CBu); RECOMP_ABI_CALL(0x000F4E40u, sub_000F4E40); /* call 0x000F4E40 */

loc_000F04CB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F04D0
 * Original: 0x000F04D0 - 0x000F0916 (1094 bytes, 286 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F04D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F04D0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D29C);
    eax = MEM32(eax + 0x430);
    ecx = MEM32(eax + 0xB0464);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xF23C);
    eax = MEM32(eax + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = eax | MEM32(0x64EDB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = eax;
    edi = ZX8(MEM8(esp + 0x12));
    ecx = eax;
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & 0xFF00FF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0x64DA60;
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000F0524u); RECOMP_ABI_CALL(0x000EEB30u, sub_000EEB30); /* call 0x000EEB30 */

loc_000F0524: ;
    PUSH32(esp, 0x1000800);
    esi = 0x64EDA4;
    PUSH32(esp, 0x000F0533u); RECOMP_ABI_CALL(0x000F4FA0u, sub_000F4FA0); /* call 0x000F4FA0 */

loc_000F0533: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64E7C0);
    PUSH32(esp, 0x000F053Fu); RECOMP_ABI_CALL(0x000F17C0u, sub_000F17C0); /* call 0x000F17C0 */

loc_000F053F: ;
    ebp = MEM32(esp + 0x40);
    eax = MEM32(ebp);
    edx = eax + eax * 8;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    esi = 0x64E710;
    PUSH32(esp, 0x000F0557u); RECOMP_ABI_CALL(0x000F41C0u, sub_000F41C0); /* call 0x000F41C0 */

loc_000F0557: ;
    ecx = MEM32(0x64D29C);
    ecx = MEM32(ecx + 0x41C);
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0xC); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x24)); /* movss */
    edx = MEM32(ebp);
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + 0xC); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ebp + 0xC); /* mulss */
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0xC); /* mulss */
    xmm5 = xmm4; /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0xC); /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    ecx = MEM32(ebp + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0xC); /* mulss */
    edx = ecx + edx * 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x38) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_000F08F9; /* jae: above or equal (unsigned >=) */

loc_000F05DA: ;
    edx = MEM32(esp + 0x44);
    xmm7 = xmm4; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm3.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    xmm7 = xmm4; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm5.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm7.f[0]; /* movss */
    xmm7 = xmm4; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm6.f[0]; /* subss */
    xmm7.f[0] = xmm7.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm7.f[0]; /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm7.f[0]; /* movss */
    xmm7 = xmm5; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm7.f[0]; /* movss */
    xmm7 = xmm6; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm7.f[0]; /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x30) = xmm7.f[0]; /* movss */
    xmm7 = xmm1; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x34) = xmm7.f[0]; /* movss */
    xmm7 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm6.f[0]; /* subss */
    /* nop */

loc_000F0670: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    esi = ZX16(MEM16(ecx));
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    esi = esi + esi * 2;
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4); /* addss */
    MEMF(eax) = xmm6.f[0]; /* movss */
    esi = ZX16(MEM16(ecx));
    xmm6 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    esi = esi + esi * 2;
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4 + 4); /* addss */
    MEMF(eax + 4) = xmm6.f[0]; /* movss */
    esi = ZX16(MEM16(ecx));
    xmm6 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    esi = esi + esi * 2;
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4 + 8); /* addss */
    MEMF(eax + 8) = xmm6.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0704; /* je: equal / zero */

loc_000F06C7: ;
    esi = ZX16(MEM16(ecx));
    edi = MEM32(ebx + esi * 4);
    ebp = MEM32(0x64EDB8);
    esi = MEM32(esp + 0x14);
    edi = edi | ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi ^ esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edi;
    esi = ZX8(MEM8(esp + 0x12));
    ebp = edi;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp << 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = edi;
    ebp = ebp & 0xFF00FF00u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = MEM32(esp + 0x40);
    MEM32(eax + 0x18) = esi;
    goto loc_000F0707;

loc_000F0704: ;
    MEM32(eax + 0x18) = edi;

loc_000F0707: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(eax + 0x1C) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm4.f[0]; /* movss */
    esi = ZX16(MEM16(ecx));
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    esi = esi + esi * 2;
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4); /* addss */
    MEMF(eax + 0x24) = xmm6.f[0]; /* movss */
    esi = ZX16(MEM16(ecx));
    xmm6 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    esi = esi + esi * 2;
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4 + 4); /* addss */
    MEMF(eax + 4) = xmm6.f[0]; /* movss */
    esi = ZX16(MEM16(ecx));
    xmm6 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    esi = esi + esi * 2;
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4 + 8); /* addss */
    MEMF(eax + 8) = xmm6.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000F07A5; /* je: equal / zero */

loc_000F0768: ;
    esi = ZX16(MEM16(ecx));
    edi = MEM32(ebx + esi * 4);
    ebp = MEM32(0x64EDB8);
    esi = MEM32(esp + 0x14);
    edi = edi | ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi ^ esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edi;
    esi = ZX8(MEM8(esp + 0x12));
    ebp = edi;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp << 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = edi;
    ebp = ebp & 0xFF00FF00u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = MEM32(esp + 0x40);
    MEM32(eax + 0x18) = esi;
    goto loc_000F07A8;

loc_000F07A5: ;
    MEM32(eax + 0x18) = edi;

loc_000F07A8: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(eax + 0x1C) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm4.f[0]; /* movss */
    esi = ZX16(MEM16(ecx));
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    esi = esi + esi * 2;
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4); /* addss */
    MEMF(eax + 0x24) = xmm6.f[0]; /* movss */
    esi = ZX16(MEM16(ecx));
    xmm6 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    esi = esi + esi * 2;
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4 + 4); /* addss */
    MEMF(eax + 4) = xmm6.f[0]; /* movss */
    esi = ZX16(MEM16(ecx));
    esi = esi + esi * 2;
    xmm6 = xmm7; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4 + 8); /* addss */
    MEMF(eax + 8) = xmm6.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0843; /* je: equal / zero */

loc_000F0806: ;
    esi = ZX16(MEM16(ecx));
    edi = MEM32(ebx + esi * 4);
    ebp = MEM32(0x64EDB8);
    esi = MEM32(esp + 0x14);
    edi = edi | ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi ^ esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edi;
    esi = ZX8(MEM8(esp + 0x12));
    ebp = edi;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp << 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = edi;
    ebp = ebp & 0xFF00FF00u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = MEM32(esp + 0x40);
    MEM32(eax + 0x18) = esi;
    goto loc_000F0846;

loc_000F0843: ;
    MEM32(eax + 0x18) = edi;

loc_000F0846: ;
    MEMF(eax + 0x1C) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm5.f[0]; /* movss */
    esi = ZX16(MEM16(ecx));
    esi = esi + esi * 2;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4); /* addss */
    MEMF(eax) = xmm6.f[0]; /* movss */
    esi = ZX16(MEM16(ecx));
    esi = esi + esi * 2;
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4 + 4); /* addss */
    MEMF(eax + 4) = xmm6.f[0]; /* movss */
    esi = ZX16(MEM16(ecx));
    esi = esi + esi * 2;
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4 + 8); /* addss */
    MEMF(eax + 8) = xmm6.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000F08DA; /* je: equal / zero */

loc_000F089D: ;
    esi = ZX16(MEM16(ecx));
    edi = MEM32(ebx + esi * 4);
    ebp = MEM32(0x64EDB8);
    esi = MEM32(esp + 0x14);
    edi = edi | ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi ^ esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edi;
    esi = ZX8(MEM8(esp + 0x12));
    ebp = edi;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp << 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = edi;
    ebp = ebp & 0xFF00FF00u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = MEM32(esp + 0x40);
    MEM32(eax + 0x18) = esi;
    goto loc_000F08DD;

loc_000F08DA: ;
    MEM32(eax + 0x18) = edi;

loc_000F08DD: ;
    esi = MEM32(esp + 0x38);
    MEMF(eax + 0x1C) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm5.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F0670; /* jb: below (unsigned <) */

loc_000F08F9: ;
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    esi = 8;
    edi = 0x64E710;
    PUSH32(esp, 0x000F090Cu); RECOMP_ABI_CALL(0x000F4220u, sub_000F4220); /* call 0x000F4220 */

loc_000F090C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F0686
 * Original: 0x000F0686 - 0x000F0916 (656 bytes, 179 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0686(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F0686: ;
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4); /* addss */
    MEMF(eax) = xmm6.f[0]; /* movss */
    esi = ZX16(MEM16(ecx));
    xmm6 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    esi = esi + esi * 2;
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4 + 4); /* addss */
    MEMF(eax + 4) = xmm6.f[0]; /* movss */
    esi = ZX16(MEM16(ecx));
    xmm6 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    esi = esi + esi * 2;
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4 + 8); /* addss */
    MEMF(eax + 8) = xmm6.f[0]; /* movss */
    if (_flags /* je: equal / zero */) goto loc_000F0704;

loc_000F06C7: ;
    esi = ZX16(MEM16(ecx));
    edi = MEM32(ebx + esi * 4);
    ebp = MEM32(0x64EDB8);
    esi = MEM32(esp + 0x14);
    edi = edi | ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi ^ esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edi;
    esi = ZX8(MEM8(esp + 0x12));
    ebp = edi;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp << 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = edi;
    ebp = ebp & 0xFF00FF00u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = MEM32(esp + 0x40);
    MEM32(eax + 0x18) = esi;
    goto loc_000F0707;

loc_000F0704: ;
    MEM32(eax + 0x18) = edi;

loc_000F0707: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(eax + 0x1C) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm4.f[0]; /* movss */
    esi = ZX16(MEM16(ecx));
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    esi = esi + esi * 2;
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4); /* addss */
    MEMF(eax + 0x24) = xmm6.f[0]; /* movss */
    esi = ZX16(MEM16(ecx));
    xmm6 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    esi = esi + esi * 2;
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4 + 4); /* addss */
    MEMF(eax + 4) = xmm6.f[0]; /* movss */
    esi = ZX16(MEM16(ecx));
    xmm6 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    esi = esi + esi * 2;
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4 + 8); /* addss */
    MEMF(eax + 8) = xmm6.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000F07A5; /* je: equal / zero */

loc_000F0768: ;
    esi = ZX16(MEM16(ecx));
    edi = MEM32(ebx + esi * 4);
    ebp = MEM32(0x64EDB8);
    esi = MEM32(esp + 0x14);
    edi = edi | ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi ^ esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edi;
    esi = ZX8(MEM8(esp + 0x12));
    ebp = edi;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp << 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = edi;
    ebp = ebp & 0xFF00FF00u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = MEM32(esp + 0x40);
    MEM32(eax + 0x18) = esi;
    goto loc_000F07A8;

loc_000F07A5: ;
    MEM32(eax + 0x18) = edi;

loc_000F07A8: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(eax + 0x1C) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm4.f[0]; /* movss */
    esi = ZX16(MEM16(ecx));
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    esi = esi + esi * 2;
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4); /* addss */
    MEMF(eax + 0x24) = xmm6.f[0]; /* movss */
    esi = ZX16(MEM16(ecx));
    xmm6 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    esi = esi + esi * 2;
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4 + 4); /* addss */
    MEMF(eax + 4) = xmm6.f[0]; /* movss */
    esi = ZX16(MEM16(ecx));
    esi = esi + esi * 2;
    xmm6 = xmm7; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4 + 8); /* addss */
    MEMF(eax + 8) = xmm6.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0843; /* je: equal / zero */

loc_000F0806: ;
    esi = ZX16(MEM16(ecx));
    edi = MEM32(ebx + esi * 4);
    ebp = MEM32(0x64EDB8);
    esi = MEM32(esp + 0x14);
    edi = edi | ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi ^ esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edi;
    esi = ZX8(MEM8(esp + 0x12));
    ebp = edi;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp << 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = edi;
    ebp = ebp & 0xFF00FF00u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = MEM32(esp + 0x40);
    MEM32(eax + 0x18) = esi;
    goto loc_000F0846;

loc_000F0843: ;
    MEM32(eax + 0x18) = edi;

loc_000F0846: ;
    MEMF(eax + 0x1C) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm5.f[0]; /* movss */
    esi = ZX16(MEM16(ecx));
    esi = esi + esi * 2;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm6 = xmm0; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4); /* addss */
    MEMF(eax) = xmm6.f[0]; /* movss */
    esi = ZX16(MEM16(ecx));
    esi = esi + esi * 2;
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4 + 4); /* addss */
    MEMF(eax + 4) = xmm6.f[0]; /* movss */
    esi = ZX16(MEM16(ecx));
    esi = esi + esi * 2;
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + MEMF(edx + esi * 4 + 8); /* addss */
    MEMF(eax + 8) = xmm6.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000F08DA; /* je: equal / zero */

loc_000F089D: ;
    esi = ZX16(MEM16(ecx));
    edi = MEM32(ebx + esi * 4);
    ebp = MEM32(0x64EDB8);
    esi = MEM32(esp + 0x14);
    edi = edi | ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi ^ esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edi;
    esi = ZX8(MEM8(esp + 0x12));
    ebp = edi;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp << 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = edi;
    ebp = ebp & 0xFF00FF00u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = MEM32(esp + 0x40);
    MEM32(eax + 0x18) = esi;
    goto loc_000F08DD;

loc_000F08DA: ;
    MEM32(eax + 0x18) = edi;

loc_000F08DD: ;
    esi = MEM32(esp + 0x38);
    MEMF(eax + 0x1C) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm5.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_000F0670(); return; } /* jb: below (unsigned <) */

loc_000F08F9: ;
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    esi = 8;
    edi = 0x64E710;
    PUSH32(esp, 0x000F090Cu); RECOMP_ABI_CALL(0x000F4220u, sub_000F4220); /* call 0x000F4220 */

loc_000F090C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F0920
 * Original: 0x000F0920 - 0x000F0BF6 (726 bytes, 176 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0920(void)
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

loc_000F0920: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x64ECE0);
    PUSH32(esp, 0x000F092Du); RECOMP_ABI_CALL(0x000F26F0u, sub_000F26F0); /* call 0x000F26F0 */

loc_000F092D: ;
    eax = MEM32(0x64D29C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x490)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F0BE9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3337C0)) */

loc_000F0947: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0xA4); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x490); /* mulss */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40304;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000F0968u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F0968: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40300;
    MEM32(0x2A82EC) = 0;
    PUSH32(esp, 0x000F097Eu); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F097E: ;
    edx = 0x1010101;
    ecx = 0x40358;
    MEM32(0x2A82F0) = 0;
    PUSH32(esp, 0x000F0997u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F0997: ;
    PUSH32(esp, 0);
    MEM32(0x2A830C) = 0x1010101;
    PUSH32(esp, 0x000F09A8u); RECOMP_ABI_CALL(0x0029B200u, sub_0029B200); /* call 0x0029B200 */

loc_000F09A8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F09AFu); RECOMP_ABI_CALL(0x0029C080u, sub_0029C080); /* call 0x0029C080 */

loc_000F09AF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F09B8u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F09B8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000F09C1u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F09C1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000F09CAu); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F09CA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x000F09D3u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F09D3: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(0x64D29C);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0xA0); /* cvtsi2ss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x60);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x58);
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x54);
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    edx = MEM32(esp + 0x64);
    eax = MEM32(esp + 0x70);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x70);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x80);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x80);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x90);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x94);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F0AE0u); RECOMP_ABI_CALL(0x000F28E0u, sub_000F28E0); /* call 0x000F28E0 */

loc_000F0AE0: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    eax = MEM32(0x64D29C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x4C);
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0xA0); /* cvtsi2ss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0xA4); /* cvtsi2ss */
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x48);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x50);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x48);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x48);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x48);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x50);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x48);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x50);
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x40); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x50);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F0BE9u); RECOMP_ABI_CALL(0x000F28E0u, sub_000F28E0); /* call 0x000F28E0 */

loc_000F0BE9: ;
    eax = 0x64EDA4;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000F4F90(); return; /* tail jmp 0x000F4F90 */

}

/**
 * sub_000F0C00
 * Original: 0x000F0C00 - 0x000F0DA1 (417 bytes, 111 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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

loc_000F0C00: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    eax = eax | 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x000F0C1Du); RECOMP_ABI_CALL(0x000F04B0u, sub_000F04B0); /* call 0x000F04B0 */

loc_000F0C1D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0x64DA60;
    PUSH32(esp, 0x000F0C2Au); RECOMP_ABI_CALL(0x000EEB30u, sub_000EEB30); /* call 0x000EEB30 */

loc_000F0C2A: ;
    PUSH32(esp, 0x800);
    esi = 0x64EDA4;
    PUSH32(esp, 0x000F0C39u); RECOMP_ABI_CALL(0x000F4FA0u, sub_000F4FA0); /* call 0x000F4FA0 */

loc_000F0C39: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64E7C0);
    PUSH32(esp, 0x000F0C45u); RECOMP_ABI_CALL(0x000F17C0u, sub_000F17C0); /* call 0x000F17C0 */

loc_000F0C45: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x3337D8)); /* fsub dword ptr [0x3337d8] */
    eax = MEM32(0x64D29C);
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0xA0); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x14); /* addss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x3337D8)); /* fsub dword ptr [0x3337d8] */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0xA4); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x18); /* addss */
    PUSH32(esp, 0x144);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, 0x64DA60);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x000F0CBBu); RECOMP_ABI_CALL(0x000EEAE0u, sub_000EEAE0); /* call 0x000EEAE0 */

loc_000F0CBB: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x000F0CC2u); RECOMP_ABI_CALL(0x002A2D70u, sub_002A2D70); /* call 0x002A2D70 */

loc_000F0CC2: ;
    eax = MEM32(esp + 0x24);
    ecx = ZX8(MEM8(esp + 0x26));
    edx = eax;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & 0xFF00FF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    PUSH32(esp, 0x000F0CE7u); RECOMP_ABI_CALL(0x002A2D20u, sub_002A2D20); /* call 0x002A2D20 */

loc_000F0CE7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 9);
    PUSH32(esp, 0x000F0CF2u); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_000F0CF2: ;
    esi = MEM32(esp + 0x28);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x000F0D0Du); RECOMP_ABI_CALL(0x002A2CC0u, sub_002A2CC0); /* call 0x002A2CC0 */

loc_000F0D0D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 9);
    PUSH32(esp, 0x000F0D1Bu); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_000F0D1B: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x000F0D32u); RECOMP_ABI_CALL(0x002A2CC0u, sub_002A2CC0); /* call 0x002A2CC0 */

loc_000F0D32: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 9);
    PUSH32(esp, 0x000F0D43u); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_000F0D43: ;
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x000F0D5Au); RECOMP_ABI_CALL(0x002A2CC0u, sub_002A2CC0); /* call 0x002A2CC0 */

loc_000F0D5A: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 9);
    PUSH32(esp, 0x000F0D68u); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_000F0D68: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x000F0D7Bu); RECOMP_ABI_CALL(0x002A2CC0u, sub_002A2CC0); /* call 0x002A2CC0 */

loc_000F0D7B: ;
    PUSH32(esp, 0x000F0D80u); RECOMP_ABI_CALL(0x002A2DB0u, sub_002A2DB0); /* call 0x002A2DB0 */

loc_000F0D80: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x64DA60);
    eax = 1;
    PUSH32(esp, 0x000F0D91u); RECOMP_ABI_CALL(0x000EEAE0u, sub_000EEAE0); /* call 0x000EEAE0 */

loc_000F0D91: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x64EDA4;
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000F4F90(); return; /* tail jmp 0x000F4F90 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F0DB0
 * Original: 0x000F0DB0 - 0x000F0DC2 (18 bytes, 6 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0DB0(void)
{

loc_000F0DB0: ;
    PUSH32(esp, edi);
    ecx = 1;
    edi = 0x64DA60;
    PUSH32(esp, 0x000F0DC0u); RECOMP_ABI_CALL(0x000EED50u, sub_000EED50); /* call 0x000EED50 */

loc_000F0DC0: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F0DD0
 * Original: 0x000F0DD0 - 0x000F0DEE (30 bytes, 10 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F0DD0: ;
    eax = MEM32(0x64DA60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_000F0DEC; /* jge: greater or equal (signed >=) */

loc_000F0DDB: ;
    PUSH32(esp, ecx);
    esi = 0x64DA60;
    PUSH32(esp, 0x000F0DE6u); RECOMP_ABI_CALL(0x000EEEA0u, sub_000EEEA0); /* call 0x000EEEA0 */

loc_000F0DE6: ;
    MEM32(0x64DA60) = MEM32(0x64DA60) + 1;
    _fa = (uint32_t)(MEM32(0x64DA60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000F0DEC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F0DF0
 * Original: 0x000F0DF0 - 0x000F0E84 (148 bytes, 50 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F0DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F0DF0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x64DA60;
    PUSH32(esp, 0x000F0E01u); RECOMP_ABI_CALL(0x000EEB30u, sub_000EEB30); /* call 0x000EEB30 */

loc_000F0E01: ;
    eax = MEM32(0x64D29C);
    ecx = MEM32(eax + 0x74);
    PUSH32(esp, ecx);
    esi = 0x64EDA4;
    PUSH32(esp, 0x000F0E14u); RECOMP_ABI_CALL(0x000F4FA0u, sub_000F4FA0); /* call 0x000F4FA0 */

loc_000F0E14: ;
    edx = MEM32(ebp + 0x20);
    eax = MEM32(ebx + 0x4C);
    edi = 1;
    esi = 0x64E7C0;
    PUSH32(esp, 0x000F0E29u); RECOMP_ABI_CALL(0x000F1700u, sub_000F1700); /* call 0x000F1700 */

loc_000F0E29: ;
    eax = MEM32(ebx + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F0E6C; /* jne: not equal / not zero */

loc_000F0E30: ;
    PUSH32(esp, 0x000F0E35u); RECOMP_ABI_CALL(0x000F5540u, sub_000F5540); /* call 0x000F5540 */

loc_000F0E35: ;
    eax = MEM32(ebx + 0x20);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F0E64; /* jbe: below or equal (unsigned <=) */

loc_000F0E3E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F0E40: ;
    edx = MEM32(ebx + 0x24);
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(edx + edi + 0x10);
    _fa = (uint32_t)(MEM32(ecx + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + esi * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0E59; /* je: equal / zero */

loc_000F0E50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0E59; /* je: equal / zero */

loc_000F0E54: ;
    PUSH32(esp, 0x000F0E59u); RECOMP_ABI_CALL(0x000F1960u, sub_000F1960); /* call 0x000F1960 */

loc_000F0E59: ;
    eax = MEM32(ebx + 0x20);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F0E40; /* jb: below (unsigned <) */

loc_000F0E64: ;
    PUSH32(esp, 0x000F0E69u); RECOMP_ABI_CALL(0x000F5560u, sub_000F5560); /* call 0x000F5560 */

loc_000F0E69: ;
    MEM32(ebx + 0x50) = eax;

loc_000F0E6C: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F0E74u); RECOMP_ABI_CALL(0x002A39A0u, sub_002A39A0); /* call 0x002A39A0 */

loc_000F0E74: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x64E7C0);
    PUSH32(esp, 0x000F0E80u); RECOMP_ABI_CALL(0x000F17C0u, sub_000F17C0); /* call 0x000F17C0 */

loc_000F0E80: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F0E90
 * Original: 0x000F0E90 - 0x000F0EA8 (24 bytes, 9 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0E90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F0E90: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D848);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F0EA4u); RECOMP_ABI_CALL(0x000F1A30u, sub_000F1A30); /* call 0x000F1A30 */

loc_000F0EA4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F0EB0
 * Original: 0x000F0EB0 - 0x000F0EC5 (21 bytes, 6 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F0EB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F0EB0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(0x64D848);
    PUSH32(esp, 0x000F0EC2u); RECOMP_ABI_CALL(0x000F1B80u, sub_000F1B80); /* call 0x000F1B80 */

loc_000F0EC2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F0ED0
 * Original: 0x000F0ED0 - 0x000F0EEB (27 bytes, 8 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0ED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F0ED0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0x64EDA4;
    PUSH32(esp, 0x000F0EEAu); RECOMP_ABI_CALL(0x000F4F20u, sub_000F4F20); /* call 0x000F4F20 */

loc_000F0EEA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F0EF0
 * Original: 0x000F0EF0 - 0x000F0F16 (38 bytes, 10 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F0EF0: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F0F00; /* je: equal / zero */

loc_000F0EF7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F0EFDu); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_000F0EFD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F0F00: ;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000F0F20
 * Original: 0x000F0F20 - 0x000F16FD (2013 bytes, 360 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F0F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F0F20: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ebx = 2;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0x32;
    ecx = 0x40;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = ebp;
    MEM8(esp + 0x1C) = LO8(edx);
    MEM8(esp + 0x1D) = LO8(edx);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = ebx;
    MEM8(esp + 0x2C) = LO8(edx);
    MEM8(esp + 0x2D) = LO8(edx);
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = ebx;
    MEM8(esp + 0x3C) = LO8(edx);
    MEM8(esp + 0x3D) = LO8(edx);
    MEM32(esp + 0x40) = 1;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = ecx;
    MEM8(esp + 0x4C) = LO8(edx);
    MEM8(esp + 0x4D) = LO8(edx);
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x58) = ebx;
    MEM8(esp + 0x5C) = LO8(edx);
    MEM8(esp + 0x5D) = LO8(edx);
    MEM32(esp + 0x60) = edx;
    MEM32(esp + 0x64) = edx;
    MEM32(esp + 0x68) = ebx;
    MEM8(esp + 0x6C) = LO8(edx);
    MEM8(esp + 0x6D) = LO8(edx);
    MEM32(esp + 0x70) = edx;
    MEM32(esp + 0x74) = edx;
    MEM32(esp + 0x78) = ebx;
    MEM8(esp + 0x7C) = LO8(edx);
    MEM8(esp + 0x7D) = LO8(edx);
    MEM32(esp + 0x80) = edx;
    MEM32(esp + 0x84) = edx;
    MEM32(esp + 0x88) = ebx;
    MEM8(esp + 0x8C) = LO8(edx);
    MEM8(esp + 0x8D) = LO8(edx);
    MEM32(esp + 0x90) = edx;
    MEM32(esp + 0x94) = edx;
    MEM32(esp + 0x98) = ebx;
    MEM8(esp + 0x9C) = LO8(edx);
    MEM8(esp + 0x9D) = LO8(edx);
    MEM32(esp + 0xA0) = edx;
    MEM32(esp + 0xA4) = 0xC;
    MEM32(esp + 0xA8) = 0x22;
    MEM8(esp + 0xAC) = LO8(edx);
    MEM8(esp + 0xAD) = LO8(edx);
    MEM32(esp + 0xB0) = edx;
    MEM32(esp + 0xB4) = edx;
    MEM32(esp + 0xB8) = ebx;
    MEM8(esp + 0xBC) = LO8(edx);
    MEM8(esp + 0xBD) = LO8(edx);
    MEM32(esp + 0xC0) = edx;
    MEM32(esp + 0xC4) = edx;
    MEM32(esp + 0xC8) = ebx;
    MEM8(esp + 0xCC) = LO8(edx);
    MEM8(esp + 0xCD) = LO8(edx);
    MEM32(esp + 0xD0) = edx;
    MEM32(esp + 0xD4) = edx;
    MEM32(esp + 0xD8) = ebx;
    MEM8(esp + 0xDC) = LO8(edx);
    MEM8(esp + 0xDD) = LO8(edx);
    MEM32(esp + 0xE0) = edx;
    MEM32(esp + 0xE4) = edx;
    MEM32(esp + 0xE8) = ebx;
    MEM8(esp + 0xEC) = LO8(edx);
    MEM8(esp + 0xED) = LO8(edx);
    MEM32(esp + 0xF0) = edx;
    MEM32(esp + 0xF4) = edx;
    MEM32(esp + 0xF8) = ebx;
    esi = esp + 0x10;
    edi = eax;
    MEM8(esp + 0xFC) = LO8(edx);
    MEM8(esp + 0xFD) = LO8(edx);
    MEM32(esp + 0x100) = edx;
    MEM32(esp + 0x104) = edx;
    MEM32(esp + 0x108) = ebx;
    MEM8(esp + 0x10C) = LO8(edx);
    MEM8(esp + 0x10D) = LO8(edx);
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
    ecx = 1;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = ebp;
    MEM8(esp + 0x1C) = LO8(edx);
    MEM8(esp + 0x1D) = LO8(edx);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = ebx;
    MEM8(esp + 0x2C) = LO8(edx);
    MEM8(esp + 0x2D) = LO8(edx);
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = ebx;
    MEM8(esp + 0x3C) = LO8(edx);
    MEM8(esp + 0x3D) = LO8(edx);
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = 0x40;
    MEM8(esp + 0x4C) = LO8(edx);
    MEM8(esp + 0x4D) = LO8(edx);
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x58) = ebx;
    MEM8(esp + 0x5C) = LO8(edx);
    MEM8(esp + 0x5D) = LO8(edx);
    MEM32(esp + 0x60) = edx;
    MEM32(esp + 0x64) = edx;
    MEM32(esp + 0x68) = ebx;
    MEM8(esp + 0x6C) = LO8(edx);
    MEM8(esp + 0x6D) = LO8(edx);
    MEM32(esp + 0x70) = edx;
    MEM32(esp + 0x74) = edx;
    MEM32(esp + 0x78) = ebx;
    MEM8(esp + 0x7C) = LO8(edx);
    MEM8(esp + 0x7D) = LO8(edx);
    MEM32(esp + 0x80) = edx;
    MEM32(esp + 0x84) = edx;
    MEM32(esp + 0x88) = ebx;
    MEM8(esp + 0x8C) = LO8(edx);
    MEM8(esp + 0x8D) = LO8(edx);
    MEM32(esp + 0x90) = edx;
    MEM32(esp + 0x94) = edx;
    MEM32(esp + 0x98) = ebx;
    MEM8(esp + 0x9C) = LO8(edx);
    MEM8(esp + 0x9D) = LO8(edx);
    MEM32(esp + 0xA0) = ecx;
    MEM32(esp + 0xA4) = 4;
    MEM32(esp + 0xA8) = 0x22;
    MEM8(esp + 0xAC) = LO8(edx);
    MEM8(esp + 0xAD) = LO8(edx);
    MEM32(esp + 0xB0) = edx;
    MEM32(esp + 0xB4) = edx;
    MEM32(esp + 0xB8) = ebx;
    MEM8(esp + 0xBC) = LO8(edx);
    MEM8(esp + 0xBD) = LO8(edx);
    MEM32(esp + 0xC0) = edx;
    MEM32(esp + 0xC4) = edx;
    MEM32(esp + 0xC8) = ebx;
    MEM8(esp + 0xCC) = LO8(edx);
    MEM8(esp + 0xCD) = LO8(edx);
    MEM32(esp + 0xD0) = edx;
    MEM32(esp + 0xD4) = edx;
    MEM32(esp + 0xD8) = ebx;
    MEM8(esp + 0xDC) = LO8(edx);
    MEM8(esp + 0xDD) = LO8(edx);
    MEM32(esp + 0xE0) = edx;
    MEM32(esp + 0xE4) = edx;
    MEM32(esp + 0xE8) = ebx;
    MEM8(esp + 0xEC) = LO8(edx);
    MEM8(esp + 0xED) = LO8(edx);
    edi = eax + 0x100;
    ecx = 0x40;
    esi = esp + 0x10;
    MEM32(esp + 0xF0) = edx;
    MEM32(esp + 0xF4) = edx;
    MEM32(esp + 0xF8) = ebx;
    MEM8(esp + 0xFC) = LO8(edx);
    MEM8(esp + 0xFD) = LO8(edx);
    MEM32(esp + 0x100) = edx;
    MEM32(esp + 0x104) = edx;
    MEM32(esp + 0x108) = ebx;
    MEM8(esp + 0x10C) = LO8(edx);
    MEM8(esp + 0x10D) = LO8(edx);
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
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = ebp;
    MEM8(esp + 0x1C) = LO8(edx);
    MEM8(esp + 0x1D) = LO8(edx);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = ebx;
    MEM8(esp + 0x2C) = LO8(edx);
    MEM8(esp + 0x2D) = LO8(edx);
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = 0xC;
    MEM32(esp + 0x38) = ebp;
    MEM8(esp + 0x3C) = LO8(edx);
    MEM8(esp + 0x3D) = LO8(edx);
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = ebx;
    MEM8(esp + 0x4C) = LO8(edx);
    MEM8(esp + 0x4D) = LO8(edx);
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x58) = ebx;
    MEM8(esp + 0x5C) = LO8(edx);
    MEM8(esp + 0x5D) = LO8(edx);
    MEM32(esp + 0x60) = edx;
    MEM32(esp + 0x64) = edx;
    MEM32(esp + 0x68) = ebx;
    MEM8(esp + 0x6C) = LO8(edx);
    MEM8(esp + 0x6D) = LO8(edx);
    MEM32(esp + 0x70) = edx;
    MEM32(esp + 0x74) = edx;
    MEM32(esp + 0x78) = ebx;
    MEM8(esp + 0x7C) = LO8(edx);
    MEM8(esp + 0x7D) = LO8(edx);
    MEM32(esp + 0x80) = edx;
    MEM32(esp + 0x84) = edx;
    MEM32(esp + 0x88) = ebx;
    MEM8(esp + 0x8C) = LO8(edx);
    MEM8(esp + 0x8D) = LO8(edx);
    MEM32(esp + 0x90) = edx;
    MEM32(esp + 0x94) = edx;
    MEM32(esp + 0x98) = ebx;
    MEM8(esp + 0x9C) = LO8(edx);
    MEM8(esp + 0x9D) = LO8(edx);
    MEM32(esp + 0xA0) = edx;
    MEM32(esp + 0xA4) = 0x18;
    MEM32(esp + 0xA8) = 0x22;
    MEM8(esp + 0xAC) = LO8(edx);
    MEM8(esp + 0xAD) = LO8(edx);
    MEM32(esp + 0xB0) = edx;
    MEM32(esp + 0xB4) = edx;
    MEM32(esp + 0xB8) = ebx;
    MEM8(esp + 0xBC) = LO8(edx);
    MEM8(esp + 0xBD) = LO8(edx);
    MEM32(esp + 0xC0) = edx;
    MEM32(esp + 0xC4) = edx;
    MEM32(esp + 0xC8) = ebx;
    MEM8(esp + 0xCC) = LO8(edx);
    MEM8(esp + 0xCD) = LO8(edx);
    MEM32(esp + 0xD0) = edx;
    MEM32(esp + 0xD4) = edx;
    MEM32(esp + 0xD8) = ebx;
    MEM8(esp + 0xDC) = LO8(edx);
    MEM8(esp + 0xDD) = LO8(edx);
    MEM32(esp + 0xE0) = edx;
    MEM32(esp + 0xE4) = edx;
    edi = eax + 0x200;
    ecx = 0x40;
    esi = esp + 0x10;
    MEM32(esp + 0xE8) = ebx;
    MEM8(esp + 0xEC) = LO8(edx);
    MEM8(esp + 0xED) = LO8(edx);
    MEM32(esp + 0xF0) = edx;
    MEM32(esp + 0xF4) = edx;
    MEM32(esp + 0xF8) = ebx;
    MEM8(esp + 0xFC) = LO8(edx);
    MEM8(esp + 0xFD) = LO8(edx);
    MEM32(esp + 0x100) = edx;
    MEM32(esp + 0x104) = edx;
    MEM32(esp + 0x108) = ebx;
    MEM8(esp + 0x10C) = LO8(edx);
    MEM8(esp + 0x10D) = LO8(edx);
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
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = ebp;
    MEM8(esp + 0x1C) = LO8(edx);
    MEM8(esp + 0x1D) = LO8(edx);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = 0x1E;
    MEM32(esp + 0x28) = ebp;
    MEM8(esp + 0x2C) = LO8(edx);
    MEM8(esp + 0x2D) = LO8(edx);
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = 0xC;
    MEM32(esp + 0x38) = ebp;
    MEM8(esp + 0x3C) = LO8(edx);
    MEM8(esp + 0x3D) = LO8(edx);
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = ebx;
    MEM8(esp + 0x4C) = LO8(edx);
    MEM8(esp + 0x4D) = LO8(edx);
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x58) = ebx;
    MEM8(esp + 0x5C) = LO8(edx);
    MEM8(esp + 0x5D) = LO8(edx);
    MEM32(esp + 0x60) = edx;
    MEM32(esp + 0x64) = edx;
    MEM32(esp + 0x68) = ebx;
    MEM8(esp + 0x6C) = LO8(edx);
    MEM8(esp + 0x6D) = LO8(edx);
    MEM32(esp + 0x70) = edx;
    MEM32(esp + 0x74) = edx;
    MEM32(esp + 0x78) = ebx;
    MEM8(esp + 0x7C) = LO8(edx);
    MEM8(esp + 0x7D) = LO8(edx);
    MEM32(esp + 0x80) = edx;
    MEM32(esp + 0x84) = 0x18;
    MEM32(esp + 0x88) = 0x35;
    MEM8(esp + 0x8C) = LO8(edx);
    MEM8(esp + 0x8D) = LO8(edx);
    MEM32(esp + 0x90) = edx;
    MEM32(esp + 0x94) = edx;
    MEM32(esp + 0x98) = ebx;
    MEM8(esp + 0x9C) = LO8(edx);
    MEM8(esp + 0x9D) = LO8(edx);
    MEM32(esp + 0xA0) = edx;
    MEM32(esp + 0xA4) = 0x2A;
    MEM32(esp + 0xA8) = 0x22;
    MEM8(esp + 0xAC) = LO8(edx);
    MEM8(esp + 0xAD) = LO8(edx);
    MEM32(esp + 0xB0) = edx;
    MEM32(esp + 0xB4) = edx;
    MEM32(esp + 0xB8) = ebx;
    MEM8(esp + 0xBC) = LO8(edx);
    MEM8(esp + 0xBD) = LO8(edx);
    MEM32(esp + 0xC0) = edx;
    MEM32(esp + 0xC4) = edx;
    MEM32(esp + 0xC8) = ebx;
    MEM8(esp + 0xCC) = LO8(edx);
    MEM8(esp + 0xCD) = LO8(edx);
    MEM32(esp + 0xD0) = edx;
    MEM32(esp + 0xD4) = edx;
    MEM32(esp + 0xD8) = ebx;
    MEM8(esp + 0xDC) = LO8(edx);
    MEM32(esp + 0xE8) = ebx;
    MEM32(esp + 0xF8) = ebx;
    MEM32(esp + 0x108) = ebx;
    edi = eax + 0x300;
    ecx = 0x40;
    esi = esp + 0x10;
    MEM8(esp + 0xDD) = LO8(edx);
    MEM32(esp + 0xE0) = edx;
    MEM32(esp + 0xE4) = edx;
    MEM8(esp + 0xEC) = LO8(edx);
    MEM8(esp + 0xED) = LO8(edx);
    MEM32(esp + 0xF0) = edx;
    MEM32(esp + 0xF4) = edx;
    MEM8(esp + 0xFC) = LO8(edx);
    MEM8(esp + 0xFD) = LO8(edx);
    MEM32(esp + 0x100) = edx;
    MEM32(esp + 0x104) = edx;
    MEM8(esp + 0x10C) = LO8(edx);
    MEM8(esp + 0x10D) = LO8(edx);
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
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax + 0x500;
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ecx;
    POP32(esp, edi);
    MEM32(esi + 0x14) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 0x518) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F1700
 * Original: 0x000F1700 - 0x000F17A9 (169 bytes, 46 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F1700: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000F17A8; /* ja: above (unsigned >) */

loc_000F1709: ;
    { uint32_t _jt = MEM32(edi * 4 + 0xF17AC); /* switch: 4 entries, 2 targets */
    if (_jt == 0x000F1710u) goto loc_000F1710;
    if (_jt == 0x000F1771u) goto loc_000F1771;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000F1710: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F17A8; /* je: equal / zero */

loc_000F1718: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F17A8; /* je: equal / zero */

loc_000F1720: ;
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    ecx = esi + 0x500;
    MEM32(ecx) = ebp;
    eax = MEM32(eax + 4);
    MEM32(esi + 0x504) = eax;
    MEM32(esi + 0x508) = 0;
    eax = MEM32(edx);
    MEM32(esi + 0x50C) = eax;
    edx = MEM32(edx + 4);
    PUSH32(esp, ecx);
    eax = edi;
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 2);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(esi + 0x510) = edx;
    MEM32(esi + 0x514) = 0;
    PUSH32(esp, 0x000F1769u); RECOMP_ABI_CALL(0x0029A6A0u, sub_0029A6A0); /* call 0x0029A6A0 */

loc_000F1769: ;
    POP32(esp, ebp);
    MEM32(esi + 0x518) = edi;
    esp += 4; return; /* ret */

loc_000F1771: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F17A8; /* je: equal / zero */

loc_000F1775: ;
    edx = MEM32(eax);
    ecx = esi + 0x500;
    PUSH32(esp, ecx);
    MEM32(ecx) = edx;
    eax = MEM32(eax + 4);
    ecx = edi;
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 1);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEM32(esi + 0x504) = eax;
    MEM32(esi + 0x508) = 0;
    PUSH32(esp, 0x000F17A2u); RECOMP_ABI_CALL(0x0029A6A0u, sub_0029A6A0); /* call 0x0029A6A0 */

loc_000F17A2: ;
    MEM32(esi + 0x518) = edi;

loc_000F17A8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F17C0
 * Original: 0x000F17C0 - 0x000F17E4 (36 bytes, 10 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F17C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F17C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F17CBu); RECOMP_ABI_CALL(0x0029A6A0u, sub_0029A6A0); /* call 0x0029A6A0 */

loc_000F17CB: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F17E1; /* je: equal / zero */

loc_000F17D3: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x518) = 4;

loc_000F17E1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F17F0
 * Original: 0x000F17F0 - 0x000F184D (93 bytes, 32 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F17F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F17F0: ;
    eax = MEM32(ecx + 0x518);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000F184C; /* ja: above (unsigned >) */

loc_000F17FB: ;
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0xF1850); /* switch: 4 entries, 2 targets */
    if (_jt == 0x000F1803u) goto loc_000F1803;
    if (_jt == 0x000F182Du) goto loc_000F182D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000F1803: ;
    esi = MEM32(ecx + 0x500);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edx = ecx + 0x500;
    if (CMP_EQ(_fa, _fb)) goto loc_000F184B; /* je: equal / zero */

loc_000F1813: ;
    esi = MEM32(ecx + 0x50C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F184B; /* je: equal / zero */

loc_000F181D: ;
    PUSH32(esp, edx);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 2);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F182Bu); RECOMP_ABI_CALL(0x0029A6A0u, sub_0029A6A0); /* call 0x0029A6A0 */

loc_000F182B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F182D: ;
    esi = MEM32(ecx + 0x500);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edx = ecx + 0x500;
    if (CMP_EQ(_fa, _fb)) goto loc_000F184B; /* je: equal / zero */

loc_000F183D: ;
    PUSH32(esp, edx);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 1);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F184Bu); RECOMP_ABI_CALL(0x0029A6A0u, sub_0029A6A0); /* call 0x0029A6A0 */

loc_000F184B: ;
    POP32(esp, esi);

loc_000F184C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F1860
 * Original: 0x000F1860 - 0x000F18AE (78 bytes, 30 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F1860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1860: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    MEM32(ebx) = 0;
    eax = MEM32(ebp + 4);
    PUSH32(esp, esi);
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = 1;
    esi = MEM32(ebp + 4);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F1887u); RECOMP_ABI_CALL(0x0029E6A0u, sub_0029E6A0); /* call 0x0029E6A0 */

loc_000F1887: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(ebx) = eax;
    PUSH32(esp, 0x000F1891u); RECOMP_ABI_CALL(0x0029E6F0u, sub_0029E6F0); /* call 0x0029E6F0 */

loc_000F1891: ;
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebp + 8;
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
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F18B0
 * Original: 0x000F18B0 - 0x000F18C3 (19 bytes, 7 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F18B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F18B0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F18C2; /* je: equal / zero */

loc_000F18B6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F18BCu); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F18BC: ;
    MEM32(esi) = 0;

loc_000F18C2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F18D0
 * Original: 0x000F18D0 - 0x000F190D (61 bytes, 24 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F18D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F18D0: ;
    PUSH32(esp, esi);
    esi = eax + eax * 2;
    MEM32(ebx + 4) = eax;
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = esi + esi;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(ebx + 8) = 0;
    PUSH32(esp, 0x000F18EAu); RECOMP_ABI_CALL(0x0028A424u, sub_0028A424); /* call 0x0028A424 */

loc_000F18EA: ;
    ecx = esi;
    esi = MEM32(esp + 0x10);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebx + 8) = eax;
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
    ecx = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    eax = ebx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F1910
 * Original: 0x000F1910 - 0x000F191B (11 bytes, 5 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1910(void)
{

loc_000F1910: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F1919u); RECOMP_ABI_CALL(0x0028C403u, sub_0028C403); /* call 0x0028C403 */

loc_000F1919: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F1920
 * Original: 0x000F1920 - 0x000F1956 (54 bytes, 19 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1920: ;
    PUSH32(esp, esi);
    esi = 0x64DA60;
    PUSH32(esp, 0x000F192Bu); RECOMP_ABI_CALL(0x000EEB30u, sub_000EEB30); /* call 0x000EEB30 */

loc_000F192B: ;
    eax = MEM32(0x64D29C);
    ecx = MEM32(eax + 0x74);
    PUSH32(esp, ecx);
    esi = 0x64EDA4;
    PUSH32(esp, 0x000F193Eu); RECOMP_ABI_CALL(0x000F4FA0u, sub_000F4FA0); /* call 0x000F4FA0 */

loc_000F193E: ;
    eax = MEM32(edi + 4);
    eax = eax + eax * 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_000F1955; /* jbe: below or equal (unsigned <=) */

loc_000F1949: ;
    edx = MEM32(edi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, 0x000F1955u); RECOMP_ABI_CALL(0x002A2A20u, sub_002A2A20); /* call 0x002A2A20 */

loc_000F1955: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F1960
 * Original: 0x000F1960 - 0x000F1973 (19 bytes, 8 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1960(void)
{

loc_000F1960: ;
    ecx = MEM32(eax + 8);
    eax = MEM32(eax + 4);
    PUSH32(esp, ecx);
    edx = eax + eax * 2;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    PUSH32(esp, 0x000F1972u); RECOMP_ABI_CALL(0x002A2A20u, sub_002A2A20); /* call 0x002A2A20 */

loc_000F1972: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F1980
 * Original: 0x000F1980 - 0x000F199B (27 bytes, 9 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1980: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax) = 1;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F19A0
 * Original: 0x000F19A0 - 0x000F19CE (46 bytes, 19 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F19A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F19A0: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F19B3; /* je: equal / zero */

loc_000F19AA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F19B0u); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F19B0: ;
    MEM32(esi + 8) = edi;

loc_000F19B3: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F19C3; /* je: equal / zero */

loc_000F19BA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F19C0u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_000F19C0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F19C3: ;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x18) = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F19D0
 * Original: 0x000F19D0 - 0x000F19ED (29 bytes, 10 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F19D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F19D0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F19EC; /* je: equal / zero */

loc_000F19D5: ;
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000F19E7; /* je: equal / zero */

loc_000F19DD: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_000F19EC; /* jne: not equal / not zero */

loc_000F19E2: ;
    g_seh_ebp = ebp; sub_000F1A10(); return; /* tail jmp 0x000F1A10 */

loc_000F19E7: ;
    g_seh_ebp = ebp; sub_000F1B50(); return; /* tail jmp 0x000F1B50 */

loc_000F19EC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F19F0
 * Original: 0x000F19F0 - 0x000F1A0D (29 bytes, 13 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F19F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F19F0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1A0C; /* je: equal / zero */

loc_000F19F5: ;
    ecx = MEM32(eax + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000F1A03; /* je: equal / zero */

loc_000F19FB: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F1A0C; /* jne: not equal / not zero */

loc_000F19FE: ;
    g_seh_ebp = ebp; sub_000F1AF0(); return; /* tail jmp 0x000F1AF0 */

loc_000F1A03: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x000F1A0Bu); RECOMP_ABI_CALL(0x000F1C50u, sub_000F1C50); /* call 0x000F1C50 */

loc_000F1A0B: ;
    POP32(esp, esi);

loc_000F1A0C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F1A10
 * Original: 0x000F1A10 - 0x000F1A2A (26 bytes, 6 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1A10(void)
{

loc_000F1A10: ;
    ecx = MEM32(eax + 0x10);
    MEM32(eax + 0x1C) = ecx;
    eax = MEM32(0x64D29C);
    MEM32(eax + 0x28) = 0xF0E90;
    MEM32(eax + 0x30) = 0xF0ED0;
    esp += 4; return; /* ret */

}

/**
 * sub_000F1A30
 * Original: 0x000F1A30 - 0x000F1AEE (190 bytes, 60 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F1A30: ;
    eax = MEM32(0x64D29C);
    ecx = MEM32(eax + 0x74);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x64EDA4;
    PUSH32(esp, 0x000F1A4Cu); RECOMP_ABI_CALL(0x000F5510u, sub_000F5510); /* call 0x000F5510 */

loc_000F1A4C: ;
    ecx = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F1A70; /* jne: not equal / not zero */

loc_000F1A54: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1A70; /* je: equal / zero */

loc_000F1A5B: ;
    esi = 0x64DA60;
    PUSH32(esp, 0x000F1A65u); RECOMP_ABI_CALL(0x000EEB30u, sub_000EEB30); /* call 0x000EEB30 */

loc_000F1A65: ;
    edx = MEM32(ebx + 8);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F1A70u); RECOMP_ABI_CALL(0x002A39A0u, sub_002A39A0); /* call 0x002A39A0 */

loc_000F1A70: ;
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F1AC5; /* jne: not equal / not zero */

loc_000F1A77: ;
    ecx = MEM32(0x64EDA4);
    edx = MEM32(0x64EDA8);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(0x64EDAC);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(0x64EDB0);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(0x64EDB4);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(0x64EDB8);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    ecx = 6;
    edi = esp + 0xC;
    esi = eax + 4;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_000F1ACA; /* je: equal / zero */

loc_000F1AC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1ADC; /* je: equal / zero */

loc_000F1ACA: ;
    eax = MEM32(ebx + 0x1C);
    POP32(esp, edi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(ebx + 0x1C) = eax;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000F1ADC: ;
    edi = ebp;
    esi = ebx;
    PUSH32(esp, 0x000F1AE5u); RECOMP_ABI_CALL(0x000F1C90u, sub_000F1C90); /* call 0x000F1C90 */

loc_000F1AE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F1AF0
 * Original: 0x000F1AF0 - 0x000F1B49 (89 bytes, 20 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1AF0: ;
    eax = MEM32(eax + 0x14);
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    MEM32(0x64EDA4) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x64EDA8) = edx;
    ecx = MEM32(eax + 8);
    MEM32(0x64EDAC) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(0x64EDB0) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(0x64EDB4) = ecx;
    edx = MEM32(eax + 0x14);
    eax = 0x64EDA4;
    MEM32(0x64EDB8) = edx;
    PUSH32(esp, 0x000F1B35u); RECOMP_ABI_CALL(0x000F4F90u, sub_000F4F90); /* call 0x000F4F90 */

loc_000F1B35: ;
    eax = MEM32(0x64D29C);
    MEM32(eax + 0x28) = 0xEF600;
    MEM32(eax + 0x30) = 0xF04B0;
    esp += 4; return; /* ret */

}

/**
 * sub_000F1B50
 * Original: 0x000F1B50 - 0x000F1B78 (40 bytes, 9 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1B50(void)
{

loc_000F1B50: ;
    MEM32(eax + 4) = 1;
    eax = 0x64EDA4;
    PUSH32(esp, 0x000F1B61u); RECOMP_ABI_CALL(0x000F4F90u, sub_000F4F90); /* call 0x000F4F90 */

loc_000F1B61: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F1B6Au); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F1B6A: ;
    ecx = MEM32(0x64D29C);
    MEM32(ecx + 0x28) = 0xF0EB0;
    esp += 4; return; /* ret */

}

/**
 * sub_000F1B80
 * Original: 0x000F1B80 - 0x000F1C50 (208 bytes, 57 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1B80: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(MEM8(0x64DA68)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x64DA68), 1 (8-bit) */
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_000F1C40; /* jne: not equal / not zero */

loc_000F1B96: ;
    eax = MEM32(0x64EDC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1C40; /* je: equal / zero */

loc_000F1BA3: ;
    edx = MEM32(0x64EDB0);
    eax = 0x64E780;
    PUSH32(esp, 0x000F1BB3u); RECOMP_ABI_CALL(0x000F4B00u, sub_000F4B00); /* call 0x000F4B00 */

loc_000F1BB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F1C40; /* jne: not equal / not zero */

loc_000F1BBB: ;
    PUSH32(esp, ebx);
    ebx = esi + 0xC;
    ecx = ebx;
    PUSH32(esp, 0x000F1BC6u); RECOMP_ABI_CALL(0x000F1CC0u, sub_000F1CC0); /* call 0x000F1CC0 */

loc_000F1BC6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1BE2; /* je: equal / zero */

loc_000F1BCA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F1BD3u); RECOMP_ABI_CALL(0x00298310u, sub_00298310); /* call 0x00298310 */

loc_000F1BD3: ;
    esi = 0x64DA60;
    PUSH32(esp, 0x000F1BDDu); RECOMP_ABI_CALL(0x000EEB30u, sub_000EEB30); /* call 0x000EEB30 */

loc_000F1BDD: ;
    PUSH32(esp, 0x000F1BE2u); RECOMP_ABI_CALL(0x000F5540u, sub_000F5540); /* call 0x000F5540 */

loc_000F1BE2: ;
    PUSH32(esp, 0x000F1BE7u); RECOMP_ABI_CALL(0x000F1920u, sub_000F1920); /* call 0x000F1920 */

loc_000F1BE7: ;
    eax = esp + 0x10;
    PUSH32(esp, 0x000F1BF0u); RECOMP_ABI_CALL(0x000F4E00u, sub_000F4E00); /* call 0x000F4E00 */

loc_000F1BF0: ;
    eax = MEM32(0x64EDA4);
    ecx = MEM32(0x64EDA8);
    edx = MEM32(0x64EDAC);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x64EDB0);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(0x64EDB4);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(0x64EDB8);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    eax = esp + 0xC;
    ecx = ebx;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0x000F1C39u); RECOMP_ABI_CALL(0x000F1D00u, sub_000F1D00); /* call 0x000F1D00 */

loc_000F1C39: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000F1C40: ;
    PUSH32(esp, 0x000F1C45u); RECOMP_ABI_CALL(0x000F55E0u, sub_000F55E0); /* call 0x000F55E0 */

loc_000F1C45: ;
    PUSH32(esp, 0x000F1C4Au); RECOMP_ABI_CALL(0x000F1C90u, sub_000F1C90); /* call 0x000F1C90 */

loc_000F1C4A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F1C50
 * Original: 0x000F1C50 - 0x000F1C88 (56 bytes, 15 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1C50: ;
    MEM32(esi + 4) = 2;
    PUSH32(esp, 0x000F1C5Cu); RECOMP_ABI_CALL(0x000F5560u, sub_000F5560); /* call 0x000F5560 */

loc_000F1C5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000F1C72; /* jne: not equal / not zero */

loc_000F1C63: ;
    MEM32(esi) = eax;
    eax = MEM32(0x64D29C);
    MEM32(eax + 0x28) = 0xEF600;
    esp += 4; return; /* ret */

loc_000F1C72: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F1C7Au); RECOMP_ABI_CALL(0x002A39A0u, sub_002A39A0); /* call 0x002A39A0 */

loc_000F1C7A: ;
    ecx = MEM32(0x64D29C);
    MEM32(ecx + 0x28) = 0xEF600;
    esp += 4; return; /* ret */

}

/**
 * sub_000F1C90
 * Original: 0x000F1C90 - 0x000F1CC0 (48 bytes, 8 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1C90(void)
{

loc_000F1C90: ;
    MEM32(esi) = 0;
    PUSH32(esp, 0x000F1C9Bu); RECOMP_ABI_CALL(0x000F1920u, sub_000F1920); /* call 0x000F1920 */

loc_000F1C9B: ;
    eax = MEM32(0x64D29C);
    MEM32(eax + 0x28) = 0xEF600;
    MEM32(eax + 0x30) = 0xF04B0;
    MEM32(esi + 4) = 3;
    MEM32(0x64D848) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000F1CC0
 * Original: 0x000F1CC0 - 0x000F1CF3 (51 bytes, 22 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1CC0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F1CD1; /* jne: not equal / not zero */

loc_000F1CC7: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

loc_000F1CD1: ;
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_000F1D00
 * Original: 0x000F1D00 - 0x000F1D84 (132 bytes, 61 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F1D00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = MEM32(edi + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000F1D14; /* jne: not equal / not zero */

loc_000F1D10: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F1D2C;

loc_000F1D14: ;
    ecx = MEM32(edi + 8);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = edx;
    esi = esi >> 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1D2C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1D6F; /* je: equal / zero */

loc_000F1D30: ;
    ecx = MEM32(edi + 0xC);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F1D6F; /* jae: above or equal (unsigned >=) */

loc_000F1D4C: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(edi + 8);
    PUSH32(esp, eax);
    ecx = 1;
    eax = esi;
    PUSH32(esp, 0x000F1D60u); RECOMP_ABI_CALL(0x000F2110u, sub_000F2110); /* call 0x000F2110 */

loc_000F1D60: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000F1D6F: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F1D7Eu); RECOMP_ABI_CALL(0x000F1DC0u, sub_000F1DC0); /* call 0x000F1DC0 */

loc_000F1D7E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F1D90
 * Original: 0x000F1D90 - 0x000F1DB1 (33 bytes, 14 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1D90: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F1D98; /* jne: not equal / not zero */

loc_000F1D97: ;
    esp += 4; return; /* ret */

loc_000F1D98: ;
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F1DC0
 * Original: 0x000F1DC0 - 0x000F1E29 (105 bytes, 43 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F1DC0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1DF0; /* je: equal / zero */

loc_000F1DD2: ;
    ecx = MEM32(edi + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_000F1DF4; /* jne: not equal / not zero */

loc_000F1DF0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F1E0B;

loc_000F1DF4: ;
    ecx = ebx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = edx;
    esi = esi >> 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1E0B: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F1E18u); RECOMP_ABI_CALL(0x000F1E30u, sub_000F1E30); /* call 0x000F1E30 */

loc_000F1E18: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = esi;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F1E30
 * Original: 0x000F1E30 - 0x000F20CE (670 bytes, 247 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F1E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F1E30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296AF0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 7;
    esi = edx;
    edi = ebp + -48;
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
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -16) = esp;
    if (CMP_NE(_fa, _fb)) goto loc_000F1E6B; /* jne: not equal / not zero */

loc_000F1E67: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F1E83;

loc_000F1E6B: ;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1E83: ;
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F20BB; /* je: equal / zero */

loc_000F1E8E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F1E96; /* jne: not equal / not zero */

loc_000F1E92: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F1EB1;

loc_000F1E96: ;
    edx = MEM32(esi + 4);
    ebx = MEM32(esi + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1EB1: ;
    edx = 0x9249249;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F1EC1; /* jae: above or equal (unsigned >=) */

loc_000F1EBC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1EC1u); RECOMP_ABI_CALL(0x00018B70u, sub_00018B70); /* call 0x00018B70 */

loc_000F1EC1: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F1ECC; /* jne: not equal / not zero */

loc_000F1EC8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F1EE7;

loc_000F1ECC: ;
    edx = MEM32(esi + 4);
    ebx = MEM32(esi + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1EE7: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F2005; /* jae: above or equal (unsigned >=) */

loc_000F1EF1: ;
    eax = ecx;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0x9249249;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F1F04; /* jae: above or equal (unsigned >=) */

loc_000F1F00: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F1F06;

loc_000F1F04: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1F06: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F1F11; /* jne: not equal / not zero */

loc_000F1F0D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F1F2C;

loc_000F1F11: ;
    edx = MEM32(esi + 4);
    ebx = MEM32(esi + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1F2C: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F1F3D; /* jae: above or equal (unsigned >=) */

loc_000F1F32: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1F39u); RECOMP_ABI_CALL(0x000F1D90u, sub_000F1D90); /* call 0x000F1D90 */

loc_000F1F39: ;
    ecx = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1F3D: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    PUSH32(esp, ecx);
    MEM32(ebp + -20) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1F49u); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_000F1F49: ;
    MEM32(ebp + -4) = 0;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(esi + 4);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1F62u); RECOMP_ABI_CALL(0x000F2130u, sub_000F2130); /* call 0x000F2130 */

loc_000F1F62: ;
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ebx = ebp + -48;
    ecx = edi;
    MEM32(ebp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1F76u); RECOMP_ABI_CALL(0x000F2110u, sub_000F2110); /* call 0x000F2110 */

loc_000F1F76: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    ebx = MEM32(esi + 8);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1F92u); RECOMP_ABI_CALL(0x000F2130u, sub_000F2130); /* call 0x000F2130 */

loc_000F1F92: ;
    ebx = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F1FA0; /* jne: not equal / not zero */

loc_000F1F9C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F1FB8;

loc_000F1FA0: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1FB8: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F1FC7; /* je: equal / zero */

loc_000F1FBE: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F1FC4u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_000F1FC4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F1FC7: ;
    eax = MEM32(ebp + 8);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1C);
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 8) = edi;
    MEM32(esi + 4) = eax;
    ecx = MEM32(ebp + -12);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2005u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000F2005: ;
    ebx = MEM32(esi + 8);
    edx = MEM32(ebp + 0xC);
    ecx = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F2084; /* jae: above or equal (unsigned >=) */

loc_000F2026: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    MEM32(ebp + 8) = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F203Cu); RECOMP_ABI_CALL(0x000F2130u, sub_000F2130); /* call 0x000F2130 */

loc_000F203C: ;
    MEM32(ebp + -4) = 2;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 0xC);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 8);
    PUSH32(esp, ecx);
    ebx = ebp + -48;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F206Fu); RECOMP_ABI_CALL(0x000F2110u, sub_000F2110); /* call 0x000F2110 */

loc_000F206F: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    goto loc_000F20B3;

loc_000F2084: ;
    eax = MEM32(ebp + 0xC);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1C);
    edx = ebx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = ebx;
    MEM32(ebp + 8) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2099u); RECOMP_ABI_CALL(0x000F2130u, sub_000F2130); /* call 0x000F2130 */

loc_000F2099: ;
    edx = MEM32(ebp + 8);
    MEM32(esi + 8) = eax;
    esi = MEM32(ebp + 0xC);
    eax = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F20AEu); RECOMP_ABI_CALL(0x000F20F0u, sub_000F20F0); /* call 0x000F20F0 */

loc_000F20AE: ;
    edx = edi + esi;
    eax = esi;

loc_000F20B3: ;
    ebx = ebp + -48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F20BBu); RECOMP_ABI_CALL(0x000F20D0u, sub_000F20D0); /* call 0x000F20D0 */

loc_000F20BB: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F1FF0
 * Original: 0x000F1FF0 - 0x000F20CE (222 bytes, 80 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F1FF0: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F1FF9u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_000F1FF9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F2005u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000F2005: ;
    ebx = MEM32(esi + 8);
    edx = MEM32(ebp + 0xC);
    ecx = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F2084; /* jae: above or equal (unsigned >=) */

loc_000F2026: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    MEM32(ebp + 8) = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F203Cu); RECOMP_ABI_CALL(0x000F2130u, sub_000F2130); /* call 0x000F2130 */

loc_000F203C: ;
    MEM32(ebp + -4) = 2;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 0xC);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 8);
    PUSH32(esp, ecx);
    ebx = ebp + -48;
    ecx = edi;
    PUSH32(esp, 0x000F206Fu); RECOMP_ABI_CALL(0x000F2110u, sub_000F2110); /* call 0x000F2110 */

loc_000F206F: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    goto loc_000F20B3;

loc_000F2084: ;
    eax = MEM32(ebp + 0xC);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1C);
    edx = ebx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = ebx;
    MEM32(ebp + 8) = edx;
    PUSH32(esp, 0x000F2099u); RECOMP_ABI_CALL(0x000F2130u, sub_000F2130); /* call 0x000F2130 */

loc_000F2099: ;
    edx = MEM32(ebp + 8);
    MEM32(esi + 8) = eax;
    esi = MEM32(ebp + 0xC);
    eax = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esi;
    PUSH32(esp, 0x000F20AEu); RECOMP_ABI_CALL(0x000F20F0u, sub_000F20F0); /* call 0x000F20F0 */

loc_000F20AE: ;
    edx = edi + esi;
    eax = esi;

loc_000F20B3: ;
    ebx = ebp + -48;
    PUSH32(esp, 0x000F20BBu); RECOMP_ABI_CALL(0x000F20D0u, sub_000F20D0); /* call 0x000F20D0 */

loc_000F20BB: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F1FFC
 * Original: 0x000F1FFC - 0x000F20CE (210 bytes, 76 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F1FFC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F1FFC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F2005u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000F2005: ;
    ebx = MEM32(esi + 8);
    edx = MEM32(ebp + 0xC);
    ecx = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F2084; /* jae: above or equal (unsigned >=) */

loc_000F2026: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    MEM32(ebp + 8) = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F203Cu); RECOMP_ABI_CALL(0x000F2130u, sub_000F2130); /* call 0x000F2130 */

loc_000F203C: ;
    MEM32(ebp + -4) = 2;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x92492493u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 0xC);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 8);
    PUSH32(esp, ecx);
    ebx = ebp + -48;
    ecx = edi;
    PUSH32(esp, 0x000F206Fu); RECOMP_ABI_CALL(0x000F2110u, sub_000F2110); /* call 0x000F2110 */

loc_000F206F: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    goto loc_000F20B3;

loc_000F2084: ;
    eax = MEM32(ebp + 0xC);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1C);
    edx = ebx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = ebx;
    MEM32(ebp + 8) = edx;
    PUSH32(esp, 0x000F2099u); RECOMP_ABI_CALL(0x000F2130u, sub_000F2130); /* call 0x000F2130 */

loc_000F2099: ;
    edx = MEM32(ebp + 8);
    MEM32(esi + 8) = eax;
    esi = MEM32(ebp + 0xC);
    eax = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esi;
    PUSH32(esp, 0x000F20AEu); RECOMP_ABI_CALL(0x000F20F0u, sub_000F20F0); /* call 0x000F20F0 */

loc_000F20AE: ;
    edx = edi + esi;
    eax = esi;

loc_000F20B3: ;
    ebx = ebp + -48;
    PUSH32(esp, 0x000F20BBu); RECOMP_ABI_CALL(0x000F20D0u, sub_000F20D0); /* call 0x000F20D0 */

loc_000F20BB: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F20D0
 * Original: 0x000F20D0 - 0x000F20EB (27 bytes, 14 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F20D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F20D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F20EA; /* je: equal / zero */

loc_000F20D4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_000F20D6: ;
    edi = eax;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    ecx = 7;
    esi = ebx;
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
    if (CMP_NE(_fa, _fb)) goto loc_000F20D6; /* jne: not equal / not zero */

loc_000F20E8: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000F20EA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F20F0
 * Original: 0x000F20F0 - 0x000F210E (30 bytes, 15 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F20F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F20F0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F210D; /* je: equal / zero */

loc_000F20F4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_000F20F6: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    ecx = 7;
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
    if (CMP_NE(_fa, _fb)) goto loc_000F20F6; /* jne: not equal / not zero */

loc_000F210B: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000F210D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F2110
 * Original: 0x000F2110 - 0x000F2130 (32 bytes, 17 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2110: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F212F; /* jbe: below or equal (unsigned <=) */

loc_000F2114: ;
    PUSH32(esp, esi);
    edx = ecx;
    PUSH32(esp, edi);

loc_000F2118: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F2127; /* je: equal / zero */

loc_000F211C: ;
    ecx = 7;
    esi = ebx;
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

loc_000F2127: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F2118; /* jne: not equal / not zero */

loc_000F212D: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000F212F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F2130
 * Original: 0x000F2130 - 0x000F2152 (34 bytes, 17 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2130: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F2151; /* je: equal / zero */

loc_000F2134: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_000F2136: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F2145; /* je: equal / zero */

loc_000F213A: ;
    ecx = 7;
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

loc_000F2145: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F2136; /* jne: not equal / not zero */

loc_000F214F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000F2151: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F2160
 * Original: 0x000F2160 - 0x000F2163 (3 bytes, 1 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2160(void)
{

loc_000F2160: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F2170
 * Original: 0x000F2170 - 0x000F2179 (9 bytes, 2 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2170(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000F2170: ;
    fp_push(MEMF(0x3337C0)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F2180
 * Original: 0x000F2180 - 0x000F219F (31 bytes, 11 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2180: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x330DE4;
    if (TEST_Z(_fa, _fb)) goto loc_000F2199; /* je: equal / zero */

loc_000F2190: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F2196u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_000F2196: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F2199: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F21A0
 * Original: 0x000F21A0 - 0x000F21A7 (7 bytes, 2 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F21A0(void)
{

loc_000F21A0: ;
    MEM32(eax) = 0x330DE4;
    esp += 4; return; /* ret */

}

/**
 * sub_000F21B0
 * Original: 0x000F21B0 - 0x000F2224 (116 bytes, 40 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F21B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F21B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F21B6: ;
    ecx = MEM32(esi + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F21C3; /* je: equal / zero */

loc_000F21BD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000F21C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F21C1u); } /* indirect call */
    }

loc_000F21C3: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x19 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F21B6; /* jl: less (signed <) */

loc_000F21C9: ;
    eax = MEM32(esi + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F21DF; /* je: equal / zero */

loc_000F21D3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F21D9u); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F21D9: ;
    MEM32(esi + 0xB0) = ebx;

loc_000F21DF: ;
    eax = MEM32(esi + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F21F5; /* je: equal / zero */

loc_000F21E9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F21EFu); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F21EF: ;
    MEM32(esi + 0xAC) = ebx;

loc_000F21F5: ;
    eax = MEM32(esi + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F220B; /* je: equal / zero */

loc_000F21FF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F2205u); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F2205: ;
    MEM32(esi + 0xA8) = ebx;

loc_000F220B: ;
    eax = MEM32(esi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F2221; /* je: equal / zero */

loc_000F2215: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F221Bu); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F221B: ;
    MEM32(esi + 0xA4) = ebx;

loc_000F2221: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F2230
 * Original: 0x000F2230 - 0x000F267B (1099 bytes, 324 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000F2230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2230: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x128) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x128;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(ebx + 0xA4) = esi;
    MEM32(ebx + 0xA8) = esi;
    MEM32(ebx + 0xAC) = esi;
    MEM32(ebx + 0xB0) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F225Eu); RECOMP_ABI_CALL(0x00297EA0u, sub_00297EA0); /* call 0x00297EA0 */

loc_000F225E: ;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2265u); RECOMP_ABI_CALL(0x00297F10u, sub_00297F10); /* call 0x00297F10 */

loc_000F2265: ;
    MEM32(ebx + 0xAC) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2276u); RECOMP_ABI_CALL(0x002A3880u, sub_002A3880); /* call 0x002A3880 */

loc_000F2276: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    eax = MEM32(0x64D29C);
    MEM32(ebx + 0x68) = ecx;
    MEM32(ebx + 0x6C) = edx;
    ecx = MEM32(eax + 0xA0);
    MEM32(ebx + 0x70) = ecx;
    edx = MEM32(eax + 0xA4);
    eax = MEM32(esp + 8);
    ecx = esp + 0x24;
    MEM32(ebx + 0x74) = edx;
    edx = MEM32(ebx + 0xAC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(ebx + 0x78) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F22B3u); RECOMP_ABI_CALL(0x002A3880u, sub_002A3880); /* call 0x002A3880 */

loc_000F22B3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx + 0x7C;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    ecx = MEM32(esp + 0x24);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + 0x90;
    eax = edi;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, ecx);
    MEM32(eax + 0x10) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F22E8u); RECOMP_ABI_CALL(0x002C963Au, sub_002C963A); /* call 0x002C963A */

loc_000F22E8: ;
    ecx = MEM32(ebx + 0xAC);
    edx = eax;
    eax = MEM32(esp + 0x38);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 4);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2311u); RECOMP_ABI_CALL(0x002C8EA4u, sub_002C8EA4); /* call 0x002C8EA4 */

loc_000F2311: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(ebx + 0xA4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2332u); RECOMP_ABI_CALL(0x002A5BB0u, sub_002A5BB0); /* call 0x002A5BB0 */

loc_000F2332: ;
    MEM32(ebx + 0xA4) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F233Fu); RECOMP_ABI_CALL(0x002A5C80u, sub_002A5C80); /* call 0x002A5C80 */

loc_000F233F: ;
    MEM32(ebx + 0xB0) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3C;
    edi = esp + 0x40;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 0x10C00;
    MEM32(esp + 0xF4) = eax;
    MEM32(esp + 0xA8) = eax;
    eax = 0x40404040;
    MEM32(esp + 0x68) = eax;
    MEM32(esp + 0x88) = eax;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x8C) = eax;
    eax = 0x30C00;
    ecx = 0x10D00;
    MEM32(esp + 0xFC) = eax;
    MEM32(esp + 0xB0) = eax;
    eax = ebx + 0xB4;
    MEM32(esp + 0xF8) = ecx;
    MEM32(esp + 0xAC) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    MEM32(esp + 0x11C) = 0x11103;
    MEM32(esp + 0x120) = 0x8421;
    MEM32(esp + 0x128) = esi;
    MEM32(esp + 0x124) = esi;
    MEM32(esp + 0xF0) = esi;
    MEM32(esp + 0xD0) = 0xC1C8C2C9u;
    MEM32(esp + 0x48) = 0xD1D8D2D9u;
    MEM32(esp + 0xD4) = 0xC1CAC2CBu;
    MEM32(esp + 0x4C) = 0xD1DAD2DBu;
    MEM32(esp + 0xD8) = 0xCC20CD20u;
    MEM32(esp + 0x50) = 0xDC30DD30u;
    MEM32(esp + 0x78) = esi;
    MEM32(esp + 0x98) = esi;
    MEM32(esp + 0x12C) = 0xFFFFFF20u;
    MEM32(esp + 0x130) = 0xFFFFFF31u;
    MEM32(esp + 0x134) = 0x1FF;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2447u); RECOMP_ABI_CALL(0x002A2530u, sub_002A2530); /* call 0x002A2530 */

loc_000F2447: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x19;
    edi = ebx;
    PUSH32(esp, 8);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2459u); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_000F2459: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F246B; /* je: equal / zero */

loc_000F2460: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = 0x330DD4;
    goto loc_000F246D;

loc_000F246B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F246D: ;
    PUSH32(esp, 8);
    MEM32(ebx) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2476u); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_000F2476: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F2488; /* je: equal / zero */

loc_000F247D: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = 0x330DD4;
    goto loc_000F248A;

loc_000F2488: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F248A: ;
    PUSH32(esp, 8);
    MEM32(ebx + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2494u); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_000F2494: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F24A6; /* je: equal / zero */

loc_000F249B: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = 0x330DD4;
    goto loc_000F24A8;

loc_000F24A6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F24A8: ;
    PUSH32(esp, 0x18);
    MEM32(ebx + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F24B2u); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_000F24B2: ;
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F24C8; /* je: equal / zero */

loc_000F24BB: ;
    eax = ebx;
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F24C4u); RECOMP_ABI_CALL(0x000F5620u, sub_000F5620); /* call 0x000F5620 */

loc_000F24C4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F24CA;

loc_000F24C8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F24CA: ;
    PUSH32(esp, 8);
    MEM32(ebx + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F24D4u); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_000F24D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F24E6; /* je: equal / zero */

loc_000F24DB: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = 0x330DD4;
    goto loc_000F24E8;

loc_000F24E6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F24E8: ;
    PUSH32(esp, 8);
    MEM32(ebx + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F24F2u); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_000F24F2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F2504; /* je: equal / zero */

loc_000F24F9: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = 0x330DD4;
    goto loc_000F2506;

loc_000F2504: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F2506: ;
    PUSH32(esp, 8);
    MEM32(ebx + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2510u); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_000F2510: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F2522; /* je: equal / zero */

loc_000F2517: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = 0x330DD4;
    goto loc_000F2524;

loc_000F2522: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F2524: ;
    PUSH32(esp, 8);
    MEM32(ebx + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F252Eu); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_000F252E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F2540; /* je: equal / zero */

loc_000F2535: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = 0x330DD4;
    goto loc_000F2542;

loc_000F2540: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F2542: ;
    PUSH32(esp, 8);
    MEM32(ebx + 0x20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F254Cu); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_000F254C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F255E; /* je: equal / zero */

loc_000F2553: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = 0x330DD4;
    goto loc_000F2560;

loc_000F255E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F2560: ;
    PUSH32(esp, 8);
    MEM32(ebx + 0x24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F256Au); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_000F256A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F257C; /* je: equal / zero */

loc_000F2571: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = 0x330DD4;
    goto loc_000F257E;

loc_000F257C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F257E: ;
    PUSH32(esp, 8);
    MEM32(ebx + 0x28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2588u); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_000F2588: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F259A; /* je: equal / zero */

loc_000F258F: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = 0x330DD4;
    goto loc_000F259C;

loc_000F259A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F259C: ;
    PUSH32(esp, 8);
    MEM32(ebx + 0x30) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F25A6u); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_000F25A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F25B8; /* je: equal / zero */

loc_000F25AD: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = 0x330DD4;
    goto loc_000F25BA;

loc_000F25B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F25BA: ;
    PUSH32(esp, 0x38);
    MEM32(ebx + 0x3C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F25C4u); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_000F25C4: ;
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F25DA; /* je: equal / zero */

loc_000F25CD: ;
    eax = ebx;
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F25D6u); RECOMP_ABI_CALL(0x000F5E50u, sub_000F5E50); /* call 0x000F5E50 */

loc_000F25D6: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F25DC;

loc_000F25DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F25DC: ;
    PUSH32(esp, 8);
    MEM32(ebx + 0x44) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F25E6u); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_000F25E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F25F8; /* je: equal / zero */

loc_000F25ED: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = 0x330DD4;
    goto loc_000F25FA;

loc_000F25F8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F25FA: ;
    PUSH32(esp, 0x44);
    MEM32(ebx + 0x48) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2604u); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_000F2604: ;
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F261A; /* je: equal / zero */

loc_000F260D: ;
    eax = ebx;
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2616u); RECOMP_ABI_CALL(0x000F66B0u, sub_000F66B0); /* call 0x000F66B0 */

loc_000F2616: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F261C;

loc_000F261A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F261C: ;
    PUSH32(esp, 0x54);
    MEM32(ebx + 0x54) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2626u); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_000F2626: ;
    ecx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F263C; /* je: equal / zero */

loc_000F262F: ;
    eax = ebx;
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2638u); RECOMP_ABI_CALL(0x000F7920u, sub_000F7920); /* call 0x000F7920 */

loc_000F2638: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F263E;

loc_000F263C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F263E: ;
    PUSH32(esp, 8);
    MEM32(ebx + 0x58) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000F2648u); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_000F2648: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F265A; /* je: equal / zero */

loc_000F264F: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = 0x330DD4;
    goto loc_000F265C;

loc_000F265A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F265C: ;
    MEM32(ebx + 0x5C) = eax;
    ecx = MEM32(ebx + 0x64);
    ecx = ecx | 0x200000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ecx;
    eax = eax | 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(ebx + 0x64) = ecx;
    MEM32(ebx + 0x64) = eax;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F2680
 * Original: 0x000F2680 - 0x000F2695 (21 bytes, 7 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F2680: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x15 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F2692; /* je: equal / zero */

loc_000F2685: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000F2692u); RECOMP_ABI_CALL(0x000F31D0u, sub_000F31D0); /* call 0x000F31D0 */

loc_000F2692: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F26A0
 * Original: 0x000F26A0 - 0x000F26C7 (39 bytes, 12 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F26A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F26A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F26AA; /* jb: below (unsigned <) */

loc_000F26A5: ;
    PUSH32(esp, 0x000F26AAu); RECOMP_ABI_CALL(0x000F3220u, sub_000F3220); /* call 0x000F3220 */

loc_000F26AA: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 4);
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + eax * 4 + 0x64), edx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F26D0
 * Original: 0x000F26D0 - 0x000F26D8 (8 bytes, 3 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F26D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F26D0: ;
    ecx = MEM32(eax + ecx * 4);
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

}

/**
 * sub_000F26E0
 * Original: 0x000F26E0 - 0x000F26E8 (8 bytes, 3 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F26E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F26E0: ;
    ecx = MEM32(eax + ecx * 4);
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

}

/**
 * sub_000F26F0
 * Original: 0x000F26F0 - 0x000F28E0 (496 bytes, 143 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F26F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F26F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F26FEu); RECOMP_ABI_CALL(0x00297EF0u, sub_00297EF0); /* call 0x00297EF0 */

loc_000F26FE: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000F2707u); RECOMP_ABI_CALL(0x00297F10u, sub_00297F10); /* call 0x00297F10 */

loc_000F2707: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000F2713u); RECOMP_ABI_CALL(0x00297EA0u, sub_00297EA0); /* call 0x00297EA0 */

loc_000F2713: ;
    esi = MEM32(ebp + 0x68);
    MEM32(ebp + 0xA8) = eax;
    eax = MEM32(ebp + 0x78);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F2725u); RECOMP_ABI_CALL(0x002C963Au, sub_002C963A); /* call 0x002C963A */

loc_000F2725: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    ecx = MEM32(ebp + 0xA8);
    edx = MEM32(ecx + 4);
    ecx = MEM32(ebp + 0x78);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x6C);
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F2749u); RECOMP_ABI_CALL(0x002C8EA4u, sub_002C8EA4); /* call 0x002C8EA4 */

loc_000F2749: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40304;
    PUSH32(esp, 0x000F2755u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F2755: ;
    edx = 0x10101;
    ecx = 0x40358;
    MEM32(0x2A82EC) = ebx;
    PUSH32(esp, 0x000F276Au); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F276A: ;
    PUSH32(esp, ebx);
    MEM32(0x2A830C) = 0x10101;
    PUSH32(esp, 0x000F277Au); RECOMP_ABI_CALL(0x0029B200u, sub_0029B200); /* call 0x0029B200 */

loc_000F277A: ;
    ecx = MEM32(0x2A7FF8);
    ecx = ecx | 0x2000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    MEM32(0x2A7FF8) = ecx;
    MEM32(0x2A8370) = ebx;
    PUSH32(esp, 0x000F2798u); RECOMP_ABI_CALL(0x0029C080u, sub_0029C080); /* call 0x0029C080 */

loc_000F2798: ;
    esi = 0x2A8040;
    /* nop */

loc_000F27A0: ;
    edx = MEM32(0x2A7FF8);
    edi = 1;
    MEM32(esi + -16) = edi;
    MEM32(esi) = edi;
    ecx = ebx;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 4;
    PUSH32(esp, 0);
    MEM32(esi + -64) = eax;
    ecx = edi;
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    MEM32(0x2A7FF8) = edx;
    MEM32(esi + -60) = eax;
    PUSH32(esp, 0x000F27D7u); RECOMP_ABI_CALL(0x0029B820u, sub_0029B820); /* call 0x0029B820 */

loc_000F27D7: ;
    eax = 2;
    MEM32(esi + -52) = eax;
    MEM32(esi + -48) = eax;
    eax = MEM32(0x2A7FF8);
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + -44) = 0;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2A8240) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2A8240 (32-bit) */
    MEM32(0x2A7FF8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000F27A0; /* jl: less (signed <) */

loc_000F2804: ;
    edx = MEM32(0x2A7FF8);
    edx = edx | 0x800;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 2;
    edi = 1;
    MEM32(0x2A7FF8) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40300;
    MEM32(0x2A8030) = 5;
    MEM32(0x2A8038) = eax;
    MEM32(0x2A803C) = edi;
    MEM32(0x2A8040) = 4;
    MEM32(0x2A8048) = eax;
    MEM32(0x2A804C) = edi;
    PUSH32(esp, 0x000F2856u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F2856: ;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x64E7C0);
    MEM32(0x2A82F0) = ebx;
    PUSH32(esp, 0x000F2869u); RECOMP_ABI_CALL(0x000F17C0u, sub_000F17C0); /* call 0x000F17C0 */

loc_000F2869: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x19 (32-bit) */

loc_000F286E: ;
    if (CMP_AE(_fa, _fb)) goto loc_000F28D9; /* jae: above or equal (unsigned >=) */

loc_000F2870: ;
    ecx = esi;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edi;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = esi;
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebp + eax * 4 + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + eax * 4 + 0x64), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F288D; /* je: equal / zero */

loc_000F2884: ;
    ecx = MEM32(ebp + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000F288Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F288Au); } /* indirect call */
    }

loc_000F288D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x19 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F286E; /* jl: less (signed <) */

loc_000F2893: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64DA60);
    eax = edi;
    PUSH32(esp, 0x000F28A0u); RECOMP_ABI_CALL(0x000EEAE0u, sub_000EEAE0); /* call 0x000EEAE0 */

loc_000F28A0: ;
    edi = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F28AFu); RECOMP_ABI_CALL(0x00297C20u, sub_00297C20); /* call 0x00297C20 */

loc_000F28AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F28B5u); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F28B5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F28BBu); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F28BB: ;
    eax = MEM32(ebp + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F28D1; /* je: equal / zero */

loc_000F28C5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F28CBu); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F28CB: ;
    MEM32(ebp + 0xA8) = ebx;

loc_000F28D1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000F28D9: ;
    PUSH32(esp, 0x000F28DEu); RECOMP_ABI_CALL(0x000F3220u, sub_000F3220); /* call 0x000F3220 */

loc_000F28DE: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000F28E0
 * Original: 0x000F28E0 - 0x000F2AB8 (472 bytes, 153 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 21 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F28E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F28E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, ebx);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    PUSH32(esp, ebp);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, esi);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    PUSH32(esp, edi);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    PUSH32(esp, 0x444);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, 0x64DA60);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x000F293Du); RECOMP_ABI_CALL(0x000EEAE0u, sub_000EEAE0); /* call 0x000EEAE0 */

loc_000F293D: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, 0x000F2949u); RECOMP_ABI_CALL(0x002A2D20u, sub_002A2D20); /* call 0x002A2D20 */

loc_000F2949: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x000F2950u); RECOMP_ABI_CALL(0x002A2D70u, sub_002A2D70); /* call 0x002A2D70 */

loc_000F2950: ;
    esi = MEM32(esp + 0x2C);
    edi = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 9);
    PUSH32(esp, 0x000F2961u); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_000F2961: ;
    ebx = MEM32(esp + 0x3C);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x000F2972u); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_000F2972: ;
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x000F2983u); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_000F2983: ;
    eax = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x000F2994u); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_000F2994: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x000F29AFu); RECOMP_ABI_CALL(0x002A2CC0u, sub_002A2CC0); /* call 0x002A2CC0 */

loc_000F29AF: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, 9);
    PUSH32(esp, 0x000F29BCu); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_000F29BC: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x44);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x000F29C9u); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_000F29C9: ;
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x000F29DAu); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_000F29DA: ;
    eax = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x000F29EBu); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_000F29EB: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x000F2A06u); RECOMP_ABI_CALL(0x002A2CC0u, sub_002A2CC0); /* call 0x002A2CC0 */

loc_000F2A06: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 9);
    PUSH32(esp, 0x000F2A13u); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_000F2A13: ;
    esi = MEM32(esp + 0x44);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x000F2A20u); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_000F2A20: ;
    ebx = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x50);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x000F2A31u); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_000F2A31: ;
    eax = MEM32(esp + 0x64);
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x000F2A42u); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_000F2A42: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x000F2A5Du); RECOMP_ABI_CALL(0x002A2CC0u, sub_002A2CC0); /* call 0x002A2CC0 */

loc_000F2A5D: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 9);
    PUSH32(esp, 0x000F2A6Au); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_000F2A6A: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x000F2A73u); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_000F2A73: ;
    edx = MEM32(esp + 0x48);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x000F2A80u); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_000F2A80: ;
    eax = MEM32(esp + 0x64);
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x000F2A91u); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_000F2A91: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x000F2AACu); RECOMP_ABI_CALL(0x002A2CC0u, sub_002A2CC0); /* call 0x002A2CC0 */

loc_000F2AAC: ;
    PUSH32(esp, 0x000F2AB1u); RECOMP_ABI_CALL(0x002A2DB0u, sub_002A2DB0); /* call 0x002A2DB0 */

loc_000F2AB1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 88; return; /* ret 84 */

}

/**
 * sub_000F2AC0
 * Original: 0x000F2AC0 - 0x000F314B (1675 bytes, 377 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F2AC0(void)
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

loc_000F2AC0: ;
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x150;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    esi = eax;
    PUSH32(esp, 0x000F2AD6u); RECOMP_ABI_CALL(0x002A5C80u, sub_002A5C80); /* call 0x002A5C80 */

loc_000F2AD6: ;
    edi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F2AE0u); RECOMP_ABI_CALL(0x00297C20u, sub_00297C20); /* call 0x00297C20 */

loc_000F2AE0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F2AEA; /* je: equal / zero */

loc_000F2AE4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F2AEAu); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F2AEA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F2AF2u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F2AF2: ;
    PUSH32(esp, esi);
    ebp = 1;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000F2AFEu); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F2AFE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000F2B06u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F2B06: ;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x000F2B0Eu); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F2B0E: ;
    eax = esp + 0x128;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F2B1Eu); RECOMP_ABI_CALL(0x002A5C70u, sub_002A5C70); /* call 0x002A5C70 */

loc_000F2B1E: ;
    ecx = esp + 0x144;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000F2B2Eu); RECOMP_ABI_CALL(0x002A5C70u, sub_002A5C70); /* call 0x002A5C70 */

loc_000F2B2E: ;
    eax = MEM32(esp + 0x13C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0x158));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0x158)); }
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax;
    eax = MEM32(esp + 0x140);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 0x15C));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 0x15C)); }
    edx = MEM32(esp + 0x164);
    edi = eax;
    eax = MEM32(edx + 0xB4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F2B65u); RECOMP_ABI_CALL(0x002A2580u, sub_002A2580); /* call 0x002A2580 */

loc_000F2B65: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40304;
    PUSH32(esp, 0x000F2B71u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F2B71: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x8006;
    ecx = 0x40350;
    MEM32(0x2A82EC) = ebx;
    PUSH32(esp, 0x000F2B88u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F2B88: ;
    edx = ebp;
    ecx = 0x40344;
    MEM32(0x2A8328) = 0x8006;
    PUSH32(esp, 0x000F2B9Eu); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F2B9E: ;
    edx = ebp;
    ecx = 0x40348;
    MEM32(0x2A82F8) = ebp;
    PUSH32(esp, 0x000F2BB0u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F2BB0: ;
    PUSH32(esp, 0x404);
    PUSH32(esp, 0x64DA60);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x2A82FC) = ebp;
    PUSH32(esp, 0x000F2BC7u); RECOMP_ABI_CALL(0x000EEAE0u, sub_000EEAE0); /* call 0x000EEAE0 */

loc_000F2BC7: ;
    fp_push((double)SMEM32(esp + 0x158)); /* fild */
    ecx = MEM32(esp + 0x158);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F2BDF; /* jge: greater or equal (signed >=) */

loc_000F2BD9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F2BDF: ;
    edx = MEM32(esp + 0x15C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x3337D8)); /* fsub dword ptr [0x3337d8] */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(esp + 0x15C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000F2BFD; /* jge: greater or equal (signed >=) */

loc_000F2BF7: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F2BFD: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x3337D8)); /* fsub dword ptr [0x3337d8] */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x78) = eax;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x333900)); /* movss */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    MEM32(esp + 0x7C) = eax;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(esp + 0x80) = eax;
    MEMF(esp + 0x98) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x84) = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x88) = eax;
    MEMF(esp + 0xC8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x8C) = eax;
    MEMF(esp + 0xCC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x90) = eax;
    MEM32(esp + 0xA8) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x94) = eax;
    MEM32(esp + 0xAC) = ecx;
    MEM32(esp + 0xD8) = edx;
    MEM32(esp + 0x108) = eax;
    MEM32(esp + 0xB0) = ecx;
    MEM32(esp + 0xDC) = edx;
    MEM32(esp + 0x10C) = eax;
    MEM32(esp + 0xB4) = ecx;
    MEM32(esp + 0xE0) = edx;
    MEM32(esp + 0x110) = eax;
    MEM32(esp + 0xB8) = ecx;
    MEM32(esp + 0xE4) = edx;
    MEM32(esp + 0x114) = eax;
    MEM32(esp + 0xBC) = ecx;
    MEM32(esp + 0xC0) = ecx;
    MEM32(esp + 0xE8) = edx;
    MEM32(esp + 0x118) = eax;
    MEM32(esp + 0xC4) = ecx;
    ecx = MEM32(esp + 0x128);
    MEM32(esp + 0xEC) = edx;
    MEM32(esp + 0x11C) = eax;
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x9C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0xF0) = edx;
    MEMF(esp + 0xF8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(esp + 0x120) = eax;
    PUSH32(esp, ecx);
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xD4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xD8) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xF8) = edx;
    MEMF(esp + 0x100) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x104) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x108) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x128) = eax;
    PUSH32(esp, 0x000F2D8Cu); RECOMP_ABI_CALL(0x002C95F6u, sub_002C95F6); /* call 0x002C95F6 */

loc_000F2D8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F2E41; /* je: equal / zero */

loc_000F2D94: ;
    edx = MEM32(esp + 0x13C);
    fp_push((double)SMEM32(esp + 0x13C)); /* fild */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F2DAC; /* jge: greater or equal (signed >=) */

loc_000F2DA6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F2DAC: ;
    xmm3 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x140);
    fp_push((double)SMEM32(esp + 0x140)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_000F2DE3; /* jge: greater or equal (signed >=) */

loc_000F2DDD: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F2DE3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEM32(esp + 0x18) = esi;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    xmm3.f[0] = xmm3.f[0] / xmm2.f[0]; /* divss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_000F2E09; /* jge: greater or equal (signed >=) */

loc_000F2E03: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F2E09: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEM32(esp + 0x14) = edi;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000F2E23; /* jge: greater or equal (signed >=) */

loc_000F2E1D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F2E23: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    goto loc_000F2EA5;

loc_000F2E41: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = esi;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000F2E53; /* jge: greater or equal (signed >=) */

loc_000F2E4D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F2E53: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x10) = edi;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000F2E69; /* jge: greater or equal (signed >=) */

loc_000F2E63: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F2E69: ;
    ecx = MEM32(esp + 0x13C);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_push((double)SMEM32(esp + 0x13C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000F2E85; /* jge: greater or equal (signed >=) */

loc_000F2E7F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F2E85: ;
    edx = MEM32(esp + 0x140);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(esp + 0x140)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000F2EA1; /* jge: greater or equal (signed >=) */

loc_000F2E9B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_000F2EA1: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_000F2EA5: ;
    eax = MEM32(esp + 0x16C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_000F3137; /* jbe: below or equal (unsigned <=) */

loc_000F2EBA: ;
    esi = MEM32(esp + 0x168);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = esi;
    goto loc_000F2ED0;

    /* nop */

loc_000F2ED0: ;
    xmm1 = XMM_SCALAR(MEMF(esi + -8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x170); /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F2F26; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F2EE6: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    eax = esp + 0x58;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000F2F0Bu); RECOMP_ABI_CALL(0x000F3290u, sub_000F3290); /* call 0x000F3290 */

loc_000F2F0B: ;
    MEM32(esp + ebx * 4 + 0x28) = eax;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    eax = 0;
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax | 0xE0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + ebx * 4 + 0x38) = eax;
    goto loc_000F2F61;

loc_000F2F26: ;
    eax = esp + 0x48;
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x000F2F47u); RECOMP_ABI_CALL(0x000F3290u, sub_000F3290); /* call 0x000F3290 */

loc_000F2F47: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    ecx = 0;
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esp + ebx * 4 + 0x28) = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx | 0xC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + ebx * 4 + 0x38) = ecx;

loc_000F2F61: ;
    xmm0 = XMM_SCALAR(MEMF(esi + -4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi); /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + ebx * 8 + 0x7C) = xmm1.f[0]; /* movss */
    MEMF(esp + ebx * 8 + 0xAC) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x18); /* addss */
    MEMF(esp + ebx * 8 + 0x78) = xmm2.f[0]; /* movss */
    MEMF(esp + ebx * 8 + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(esp + ebx * 8 + 0xD8) = xmm0.f[0]; /* movss */
    MEMF(esp + ebx * 8 + 0xDC) = xmm1.f[0]; /* movss */
    MEMF(esp + ebx * 8 + 0x108) = xmm2.f[0]; /* movss */
    MEMF(esp + ebx * 8 + 0x10C) = xmm1.f[0]; /* movss */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3014; /* je: equal / zero */

loc_000F2FCD: ;
    edx = MEM32(esp + 0x16C);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F311C; /* jne: not equal / not zero */

loc_000F2FDD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F3014; /* jae: above or equal (unsigned >=) */

loc_000F2FE2: ;
    edx = 4;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esp + ebx * 4 + 0x38;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    esi = esp + ebx * 4 + 0x28;
    ecx = edx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_000F3006: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000F300Eu); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F300E: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F3006; /* jb: below (unsigned <) */

loc_000F3014: ;
    esi = MEM32(esp + 0x28);
    edx = esi;
    ecx = 0x40A60;
    PUSH32(esp, 0x000F3024u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F3024: ;
    MEM32(0x2A8228) = esi;
    esi = MEM32(esp + 0x2C);
    edx = esi;
    ecx = 0x40A80;
    PUSH32(esp, 0x000F303Au); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F303A: ;
    MEM32(0x2A8248) = esi;
    esi = MEM32(esp + 0x30);
    edx = esi;
    ecx = 0x40A64;
    PUSH32(esp, 0x000F3050u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F3050: ;
    MEM32(0x2A822C) = esi;
    esi = MEM32(esp + 0x34);
    edx = esi;
    ecx = 0x40A84;
    PUSH32(esp, 0x000F3066u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F3066: ;
    ecx = MEM32(esp + 0x3C);
    MEM32(0x2A824C) = esi;
    esi = MEM32(esp + 0x38);
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = esi;
    edi = edi | 0xC800C9;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edi;
    ecx = 0x40AC0;
    PUSH32(esp, 0x000F3090u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F3090: ;
    esi = esi | 0x10D810D9;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = esi;
    ecx = 0x40260;
    MEM32(0x2A8288) = edi;
    PUSH32(esp, 0x000F30A8u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F30A8: ;
    ecx = MEM32(esp + 0x44);
    MEM32(0x2A8200) = esi;
    esi = MEM32(esp + 0x40);
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = esi;
    edi = edi | 0xCA00CB;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edi;
    ecx = 0x40AC4;
    PUSH32(esp, 0x000F30D2u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F30D2: ;
    esi = esi | 0x10DA10DB;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = esi;
    ecx = 0x40264;
    MEM32(0x2A828C) = edi;
    PUSH32(esp, 0x000F30EAu); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F30EA: ;
    PUSH32(esp, 0x30);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    MEM32(0x2A8204) = esi;
    PUSH32(esp, 0x000F3100u); RECOMP_ABI_CALL(0x002A2810u, sub_002A2810); /* call 0x002A2810 */

loc_000F3100: ;
    edx = ebp;
    ecx = 0x40304;
    PUSH32(esp, 0x000F310Cu); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F310C: ;
    esi = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x14);
    MEM32(0x2A82EC) = ebp;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000F311C: ;
    eax = MEM32(esp + 0x16C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x10) = esi;
    if (CMP_B(_fa, _fb)) goto loc_000F2ED0; /* jb: below (unsigned <) */

loc_000F3137: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F313Eu); RECOMP_ABI_CALL(0x002A2580u, sub_002A2580); /* call 0x002A2580 */

loc_000F313E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x150;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F3150
 * Original: 0x000F3150 - 0x000F3178 (40 bytes, 13 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3150: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x64ECE0);
    ecx = esi;
    PUSH32(esp, 0x000F3161u); RECOMP_ABI_CALL(0x000F2680u, sub_000F2680); /* call 0x000F2680 */

loc_000F3161: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    eax = 0x64ECE0;
    PUSH32(esp, 0x000F3177u); RECOMP_ABI_CALL(0x000F26D0u, sub_000F26D0); /* call 0x000F26D0 */

loc_000F3177: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F3180
 * Original: 0x000F3180 - 0x000F3190 (16 bytes, 5 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3180: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x64ECE0);
    PUSH32(esp, 0x000F318Fu); RECOMP_ABI_CALL(0x000F2680u, sub_000F2680); /* call 0x000F2680 */

loc_000F318F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F3190
 * Original: 0x000F3190 - 0x000F31A5 (21 bytes, 7 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3190(void)
{

loc_000F3190: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    eax = 0x64ECE0;
    PUSH32(esp, 0x000F31A4u); RECOMP_ABI_CALL(0x000F26D0u, sub_000F26D0); /* call 0x000F26D0 */

loc_000F31A4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F31B0
 * Original: 0x000F31B0 - 0x000F31BE (14 bytes, 4 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F31B0(void)
{

loc_000F31B0: ;
    PUSH32(esp, 0x64ECE0);
    PUSH32(esp, 0x000F31BAu); RECOMP_ABI_CALL(0x000F26A0u, sub_000F26A0); /* call 0x000F26A0 */

loc_000F31BA: ;
    eax = ZX8(LO8(eax));
    esp += 4; return; /* ret */

}

/**
 * sub_000F31C0
 * Original: 0x000F31C0 - 0x000F31CC (12 bytes, 4 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F31C0(void)
{

loc_000F31C0: ;
    PUSH32(esp, eax);
    eax = 0x64ECE0;
    PUSH32(esp, 0x000F31CBu); RECOMP_ABI_CALL(0x000F26E0u, sub_000F26E0); /* call 0x000F26E0 */

loc_000F31CB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F31D0
 * Original: 0x000F31D0 - 0x000F3218 (72 bytes, 28 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F31D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F31D0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x19 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F31DA; /* jb: below (unsigned <) */

loc_000F31D5: ;
    PUSH32(esp, 0x000F31DAu); RECOMP_ABI_CALL(0x000F3220u, sub_000F3220); /* call 0x000F3220 */

loc_000F31DA: ;
    SET_LO8(edx, MEM8(esp + 4));
    PUSH32(esp, esi);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    esi = 1;
    edx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F3200; /* je: equal / zero */

loc_000F31EA: ;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx >> 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + edx * 4);
    edx = eax + edx * 4;
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000F3200: ;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + edx * 4);
    edx = eax + edx * 4;
    esi = ~esi;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F3220
 * Original: 0x000F3220 - 0x000F3290 (112 bytes, 30 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3220: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297148);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x330DF4);
    ecx = esp + 8;
    MEM32(esp + 0x20) = 0xF;
    MEM32(esp + 0x1C) = 0;
    MEM8(esp + 0xC) = 0;
    PUSH32(esp, 0x000F325Du); RECOMP_ABI_CALL(0x00017340u, sub_00017340); /* call 0x00017340 */

loc_000F325D: ;
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    MEM32(esp + 0x50) = 0;
    PUSH32(esp, 0x000F3272u); RECOMP_ABI_CALL(0x00017430u, sub_00017430); /* call 0x00017430 */

loc_000F3272: ;
    PUSH32(esp, 0x334E44);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = 0x323120;
    PUSH32(esp, 0x000F3289u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000F3289: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000F3290
 * Original: 0x000F3290 - 0x000F3396 (262 bytes, 67 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000F3290: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x3337FC)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F32BF; /* jb: below (unsigned <) (xmm0.f[0] vs xmm3.f[0]) */

loc_000F32B7: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    goto loc_000F32DE;

loc_000F32BF: ;
    _fca = xmm1.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F32CC; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(eax)) */

loc_000F32C4: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    goto loc_000F32DE;

loc_000F32CC: ;
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 4) = xmm4.f[0]; /* movss */

loc_000F32DE: ;
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F32EF; /* jb: below (unsigned <) (xmm4.f[0] vs xmm3.f[0]) */

loc_000F32E8: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    goto loc_000F330E;

loc_000F32EF: ;
    _fca = xmm1.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F32FC; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(eax + 4)) */

loc_000F32F5: ;
    MEMF(esp) = xmm1.f[0]; /* movss */
    goto loc_000F330E;

loc_000F32FC: ;
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp) = xmm4.f[0]; /* movss */

loc_000F330E: ;
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F3320; /* jb: below (unsigned <) (xmm4.f[0] vs xmm3.f[0]) */

loc_000F3318: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    goto loc_000F3341;

loc_000F3320: ;
    _fca = xmm1.f[0]; _fcb = MEMF(eax + 8); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F332E; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(eax + 8)) */

loc_000F3326: ;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    goto loc_000F3341;

loc_000F332E: ;
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */

loc_000F3341: ;
    xmm4 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F3353; /* jb: below (unsigned <) (xmm4.f[0] vs xmm3.f[0]) */

loc_000F334B: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_000F336C;

loc_000F3353: ;
    _fca = xmm1.f[0]; _fcb = MEMF(eax + 0xC); /* comiss */
    if ((_fca >= _fcb)) goto loc_000F3366; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs MEMF(eax + 0xC)) */

loc_000F3359: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */

loc_000F3366: ;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */

loc_000F336C: ;
    eax = (int32_t)MEMF(esp + 0xC); /* cvtss2si */
    edx = (int32_t)MEMF(esp + 8); /* cvtss2si */
    edx = edx << 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = (int32_t)MEMF(esp + 4); /* cvtss2si */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = (int32_t)MEMF(esp); /* cvtss2si */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F33A0
 * Original: 0x000F33A0 - 0x000F33AB (11 bytes, 5 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F33A0(void)
{

loc_000F33A0: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F33A9u); RECOMP_ABI_CALL(0x0028C403u, sub_0028C403); /* call 0x0028C403 */

loc_000F33A9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F33B0
 * Original: 0x000F33B0 - 0x000F341B (107 bytes, 42 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F33B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F33B0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ebx);
    ecx = eax + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    PUSH32(esp, ebp);
    if (CMP_BE(_fa, _fb)) goto loc_000F3415; /* jbe: below or equal (unsigned <=) */

loc_000F33BE: ;
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x000F33CDu); RECOMP_ABI_CALL(0x0028A424u, sub_0028A424); /* call 0x0028A424 */

loc_000F33CD: ;
    ebp = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F33DF; /* jne: not equal / not zero */

loc_000F33D6: ;
    eax = 0x8007000Eu;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000F33DF: ;
    ecx = MEM32(ebx + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 4);
    edx = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    eax = MEM32(ebx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F3400u); RECOMP_ABI_CALL(0x0028C403u, sub_0028C403); /* call 0x0028C403 */

loc_000F3400: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ebx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ebx + 4) = ebp;
    MEM32(ebx) = ecx;
    MEM8(edx + ebp) = 0;
    POP32(esp, esi);

loc_000F3415: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F3420
 * Original: 0x000F3420 - 0x000F3476 (86 bytes, 35 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3420: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx);
    edx = MEM32(ebx + 8);
    ecx = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3E8 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F344A; /* jae: above or equal (unsigned >=) */

loc_000F3434: ;
    _fb = (uint32_t)(0x7D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7D0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F343Fu); RECOMP_ABI_CALL(0x000F33B0u, sub_000F33B0); /* call 0x000F33B0 */

loc_000F343F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F344A; /* jge: greater or equal (signed >=) */

loc_000F3443: ;
    eax = 0x8007000Eu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000F344A: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ebx + 8);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F3467u); RECOMP_ABI_CALL(0x0028AFEDu, sub_0028AFED); /* call 0x0028AFED */

loc_000F3467: ;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 8) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F3480
 * Original: 0x000F3480 - 0x000F34D7 (87 bytes, 38 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F3480: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F3493u); RECOMP_ABI_CALL(0x000F33B0u, sub_000F33B0); /* call 0x000F33B0 */

loc_000F3493: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F34A1; /* jge: greater or equal (signed >=) */

loc_000F3497: ;
    POP32(esp, ebp);
    eax = 0x8007000Eu;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000F34A1: ;
    edx = MEM32(ebx + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp;
    edx = ecx;
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
    eax = MEM32(ebx + 8);
    ecx = MEM32(ebx + 4);
    POP32(esp, edi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(ebx + 8) = eax;
    POP32(esp, ebp);
    MEM8(eax + ecx) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F34E0
 * Original: 0x000F34E0 - 0x000F3507 (39 bytes, 12 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F34E0(void)
{

loc_000F34E0: ;
    PUSH32(esp, 0x000F34E5u); RECOMP_ABI_CALL(0x000F3EE0u, sub_000F3EE0); /* call 0x000F3EE0 */

loc_000F34E5: ;
    MEM32(esi + 4) = eax;
    MEM8(eax + 0x15) = 1;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    MEM32(esi + 8) = 0;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_000F3510
 * Original: 0x000F3510 - 0x000F3564 (84 bytes, 33 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3510: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000F353C; /* je: equal / zero */

loc_000F3521: ;
    eax = MEM32(eax + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F352Au); RECOMP_ABI_CALL(0x0029A9D0u, sub_0029A9D0); /* call 0x0029A9D0 */

loc_000F352A: ;
    edx = esp + 4;
    PUSH32(esp, 0x000F3533u); RECOMP_ABI_CALL(0x0027F560u, sub_0027F560); /* call 0x0027F560 */

loc_000F3533: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3521; /* jne: not equal / not zero */

loc_000F353C: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F354Du); RECOMP_ABI_CALL(0x000F3B20u, sub_000F3B20); /* call 0x000F3B20 */

loc_000F354D: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F3556u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_000F3556: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F3570
 * Original: 0x000F3570 - 0x000F389C (812 bytes, 247 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F3570: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296AD8);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    ebx = esp + 0x34;
    eax = esp + 0x10;
    ecx = edi;
    PUSH32(esp, 0x000F359Du); RECOMP_ABI_CALL(0x00108700u, sub_00108700); /* call 0x00108700 */

loc_000F359D: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F35C0; /* je: equal / zero */

loc_000F35A4: ;
    eax = MEM32(eax + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F35ADu); RECOMP_ABI_CALL(0x0029AAE0u, sub_0029AAE0); /* call 0x0029AAE0 */

loc_000F35AD: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x18);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_000F35C0: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x30) = ebp;
    edx = MEM32(0x3400B4);
    eax = edx;
    esi = eax + 1;
    /* nop */

loc_000F35E0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F35E0; /* jne: not equal / not zero */

loc_000F35E7: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, 0x000F35F4u); RECOMP_ABI_CALL(0x000F3480u, sub_000F3480); /* call 0x000F3480 */

loc_000F35F4: ;
    ecx = MEM32(0x3400B8);
    PUSH32(esp, 0xFFFFFFFAu);
    PUSH32(esp, 0xFFFFFFA0u);
    PUSH32(esp, 0xFFFFFFA0u);
    PUSH32(esp, 0xFFFFFFA0u);
    PUSH32(esp, 0xFFFFFFA0u);
    PUSH32(esp, ecx);
    eax = esp + 0x34;
    PUSH32(esp, 0x000F360Eu); RECOMP_ABI_CALL(0x000F3420u, sub_000F3420); /* call 0x000F3420 */

loc_000F360E: ;
    ebx = MEM32(esp + 0x54);
    esi = ebx;
    esi = esi >> 0xE;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_000F3636; /* jne: not equal / not zero */

loc_000F361F: ;
    edx = MEM32(0x3400C0);
    PUSH32(esp, 0xFFFFFFA4u);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, 0x000F3631u); RECOMP_ABI_CALL(0x000F3420u, sub_000F3420); /* call 0x000F3420 */

loc_000F3631: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F3658;

loc_000F3636: ;
    eax = MEM32(0x3400F8);
    PUSH32(esp, 0xFFFFFFA8u);
    PUSH32(esp, 0xFFFFFFA8u);
    PUSH32(esp, 0xFFFFFFA8u);
    PUSH32(esp, 0xFFFFFFA4u);
    PUSH32(esp, 0xFFFFFFA4u);
    PUSH32(esp, 0xFFFFFFA4u);
    PUSH32(esp, 0xFFFFFFA4u);
    PUSH32(esp, 0xFFFFFFACu);
    PUSH32(esp, eax);
    eax = esp + 0x40;
    PUSH32(esp, 0x000F3655u); RECOMP_ABI_CALL(0x000F3420u, sub_000F3420); /* call 0x000F3420 */

loc_000F3655: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F3658: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    eax = esp + 0x1C;
    if (TEST_Z(_fa, _fb)) goto loc_000F3718; /* je: equal / zero */

loc_000F3665: ;
    ecx = MEM32(0x3400CC);
    PUSH32(esp, 0xFFFFFFB4u);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F3673u); RECOMP_ABI_CALL(0x000F3420u, sub_000F3420); /* call 0x000F3420 */

loc_000F3673: ;
    edi = ebx;
    edi = edi >> 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi & 7;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000F36B7; /* je: equal / zero */

loc_000F3680: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F36AA; /* jne: not equal / not zero */

loc_000F3684: ;
    edx = MEM32(0x3400C4);
    PUSH32(esp, 0xFFFFFFA8u);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, 0x000F3696u); RECOMP_ABI_CALL(0x000F3420u, sub_000F3420); /* call 0x000F3420 */

loc_000F3696: ;
    eax = MEM32(0x3400C8);
    PUSH32(esp, 0xFFFFFFACu);
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, 0x000F36A7u); RECOMP_ABI_CALL(0x000F3420u, sub_000F3420); /* call 0x000F3420 */

loc_000F36A7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F36AA: ;
    edx = edi;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esp + 0x1C;
    PUSH32(esp, 0x000F36B7u); RECOMP_ABI_CALL(0x000F38A0u, sub_000F38A0); /* call 0x000F38A0 */

loc_000F36B7: ;
    edx = ebx;
    edx = edx >> 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000F36CF; /* je: equal / zero */

loc_000F36C1: ;
    ecx = 1;
    eax = esp + 0x1C;
    PUSH32(esp, 0x000F36CFu); RECOMP_ABI_CALL(0x000F38A0u, sub_000F38A0); /* call 0x000F38A0 */

loc_000F36CF: ;
    edx = ebx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000F36E7; /* je: equal / zero */

loc_000F36D9: ;
    ecx = 2;
    eax = esp + 0x1C;
    PUSH32(esp, 0x000F36E7u); RECOMP_ABI_CALL(0x000F38A0u, sub_000F38A0); /* call 0x000F38A0 */

loc_000F36E7: ;
    edx = ebx;
    edx = edx >> 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_000F36FF; /* je: equal / zero */

loc_000F36F1: ;
    ecx = 3;
    eax = esp + 0x1C;
    PUSH32(esp, 0x000F36FFu); RECOMP_ABI_CALL(0x000F38A0u, sub_000F38A0); /* call 0x000F38A0 */

loc_000F36FF: ;
    ecx = MEM32(0x3400E0);
    PUSH32(esp, ecx);
    eax = esp + 0x20;
    PUSH32(esp, 0x000F370Fu); RECOMP_ABI_CALL(0x000F3420u, sub_000F3420); /* call 0x000F3420 */

loc_000F370F: ;
    edi = MEM32(esp + 0x3C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F372A;

loc_000F3718: ;
    edx = MEM32(0x3400EC);
    PUSH32(esp, 3);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F3727u); RECOMP_ABI_CALL(0x000F3420u, sub_000F3420); /* call 0x000F3420 */

loc_000F3727: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F372A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F374D; /* je: equal / zero */

loc_000F372F: ;
    eax = MEM32(0x3400E4);
    PUSH32(esp, 0xFFFFFFB0u);
    PUSH32(esp, 9);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xFFFFFFB0u);
    PUSH32(esp, 9);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = esp + 0x38;
    PUSH32(esp, 0x000F3748u); RECOMP_ABI_CALL(0x000F3420u, sub_000F3420); /* call 0x000F3420 */

loc_000F3748: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F3763;

loc_000F374D: ;
    ecx = MEM32(0x3400E8);
    PUSH32(esp, 9);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    PUSH32(esp, 0x000F3760u); RECOMP_ABI_CALL(0x000F3420u, sub_000F3420); /* call 0x000F3420 */

loc_000F3760: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F3763: ;
    edx = MEM32(0x3400F0);
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, 0x000F3773u); RECOMP_ABI_CALL(0x000F3420u, sub_000F3420); /* call 0x000F3420 */

loc_000F3773: ;
    eax = MEM32(0x3400F4);
    PUSH32(esp, 0xFFFFFFA1u);
    PUSH32(esp, 0xFFFFFFA2u);
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, 0x000F3786u); RECOMP_ABI_CALL(0x000F3420u, sub_000F3420); /* call 0x000F3420 */

loc_000F3786: ;
    edx = MEM32(0x3400BC);
    eax = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax + 1;

loc_000F3794: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3794; /* jne: not equal / not zero */

loc_000F379B: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, 0x000F37A8u); RECOMP_ABI_CALL(0x000F3480u, sub_000F3480); /* call 0x000F3480 */

loc_000F37A8: ;
    edx = MEM32(esp + 0x24);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x325305);
    PUSH32(esp, 0x000F37C8u); RECOMP_ABI_CALL(0x002D28FFu, sub_002D28FF); /* call 0x002D28FF */

loc_000F37C8: ;
    _fa = (uint32_t)(MEM8(0x653C94)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x653C94), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F384B; /* jne: not equal / not zero */

loc_000F37D1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(0x653C94);
    MEMF(0x344424) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(0x344428) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(0x34442C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333884)); /* movss */
    MEM32(0x653C94) = eax;
    MEMF(0x344430) = xmm0.f[0]; /* movss */
    MEM32(0x344434) = 0x40320000;
    MEM32(0x344438) = 0x40320002;
    MEM32(0x34443C) = 0x40400003;
    MEM32(0x344440) = 0x40220009;
    MEM32(0x344444) = 0xFFFFFFFFu;

loc_000F384B: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 4);
    PUSH32(esp, ebp);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x34441C);
    PUSH32(esp, 0x000F3863u); RECOMP_ABI_CALL(0x0029A330u, sub_0029A330); /* call 0x0029A330 */

loc_000F3863: ;
    eax = esp + 0x3C;
    ecx = edi;
    PUSH32(esp, 0x000F386Eu); RECOMP_ABI_CALL(0x000F3980u, sub_000F3980); /* call 0x000F3980 */

loc_000F386E: ;
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F387Eu); RECOMP_ABI_CALL(0x0029AAE0u, sub_0029AAE0); /* call 0x0029AAE0 */

loc_000F387E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F3884u); RECOMP_ABI_CALL(0x0028C403u, sub_0028C403); /* call 0x0028C403 */

loc_000F3884: ;
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F38A0
 * Original: 0x000F38A0 - 0x000F3966 (198 bytes, 63 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F38A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F38A0: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000F3965; /* ja: above (unsigned >) */

loc_000F38AA: ;
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(edx * 4 + 0xF3968); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000F38B2u) goto loc_000F38B2;
    if (_jt == 0x000F38D3u) goto loc_000F38D3;
    if (_jt == 0x000F3905u) goto loc_000F3905;
    if (_jt == 0x000F392Fu) goto loc_000F392F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000F38B2: ;
    edx = ecx * 4 + -73;
    PUSH32(esp, edx);
    edx = MEM32(0x3400D0);
    ecx = ecx * 4 + -74;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F38CEu); RECOMP_ABI_CALL(0x000F3420u, sub_000F3420); /* call 0x000F3420 */

loc_000F38CE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F38D3: ;
    esi = ecx * 4 + -73;
    PUSH32(esp, esi);
    edx = ecx * 4 + -72;
    esi = ecx * 4 + -74;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    edx = MEM32(0x3400D4);
    ecx = ecx * 4 + -75;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F3900u); RECOMP_ABI_CALL(0x000F3420u, sub_000F3420); /* call 0x000F3420 */

loc_000F3900: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F3905: ;
    edx = ecx * 4 + -72;
    esi = ecx * 4 + -73;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    edx = MEM32(0x3400D8);
    ecx = ecx * 4 + -75;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F392Au); RECOMP_ABI_CALL(0x000F3420u, sub_000F3420); /* call 0x000F3420 */

loc_000F392A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F392F: ;
    PUSH32(esp, edi);
    edx = ecx * 4 + -72;
    edi = ecx * 4 + -73;
    PUSH32(esp, edi);
    esi = ecx * 4 + -74;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    edx = MEM32(0x3400DC);
    ecx = ecx * 4 + -75;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F3960u); RECOMP_ABI_CALL(0x000F3420u, sub_000F3420); /* call 0x000F3420 */

loc_000F3960: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);

loc_000F3965: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F3966
 * Original: 0x000F3966 - 0x000F3980 (26 bytes, 14 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3966(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3966: ;
    edi = edi;
    SET_LO8(edx, 0x38);
    RECOMP_UNIMPL("lldt bx", 0x000F396Au); /* TODO: lldt bx */
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), LO8(ecx) (8-bit) */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(0x2F000F39) = MEM8(0x2F000F39) + LO8(eax);
    _fa = (uint32_t)(MEM8(0x2F000F39)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ecx (32-bit) */
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

}

/**
 * sub_000F3980
 * Original: 0x000F3980 - 0x000F39EA (106 bytes, 45 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3980: ;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(edx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000F39AC; /* jne: not equal / not zero */

loc_000F3995: ;
    edi = MEM32(esi);

loc_000F3997: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F39A1; /* jae: above or equal (unsigned >=) */

loc_000F399C: ;
    eax = MEM32(eax + 8);
    goto loc_000F39A5;

loc_000F39A1: ;
    edx = eax;
    eax = MEM32(eax);

loc_000F39A5: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3997; /* je: equal / zero */

loc_000F39AC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F39B8; /* je: equal / zero */

loc_000F39B1: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F39E0; /* jae: above or equal (unsigned >=) */

loc_000F39B8: ;
    eax = MEM32(esi);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x000F39D4u); RECOMP_ABI_CALL(0x000F39F0u, sub_000F39F0); /* call 0x000F39F0 */

loc_000F39D4: ;
    eax = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000F39E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = edx + 0x10;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F39F0
 * Original: 0x000F39F0 - 0x000F3B1B (299 bytes, 130 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F39F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F39F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = eax;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(edi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_000F3A17; /* jne: not equal / not zero */

loc_000F3A03: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F3A0Du); RECOMP_ABI_CALL(0x0027F380u, sub_0027F380); /* call 0x0027F380 */

loc_000F3A0D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000F3A17: ;
    ecx = MEM32(eax);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3A42; /* jne: not equal / not zero */

loc_000F3A22: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F3B00; /* jae: above or equal (unsigned >=) */

loc_000F3A2D: ;
    PUSH32(esp, ebx);

loc_000F3A2E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F3A37u); RECOMP_ABI_CALL(0x0027F380u, sub_0027F380); /* call 0x0027F380 */

loc_000F3A37: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000F3A42: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    ecx = MEM32(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000F3A6B; /* jne: not equal / not zero */

loc_000F3A48: ;
    eax = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F3B00; /* jae: above or equal (unsigned >=) */

loc_000F3A56: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F3A60u); RECOMP_ABI_CALL(0x0027F380u, sub_0027F380); /* call 0x0027F380 */

loc_000F3A60: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000F3A6B: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F3AA9; /* jae: above or equal (unsigned >=) */

loc_000F3A72: ;
    edx = esp + 0x18;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x000F3A7Fu); RECOMP_ABI_CALL(0x0027B390u, sub_0027B390); /* call 0x0027B390 */

loc_000F3A7F: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(ebx);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F3AA9; /* jae: above or equal (unsigned >=) */

loc_000F3A8A: ;
    ecx = MEM32(eax + 8);
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000F3A2E; /* je: equal / zero */

loc_000F3A95: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F3A9Eu); RECOMP_ABI_CALL(0x0027F380u, sub_0027F380); /* call 0x0027F380 */

loc_000F3A9E: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000F3AA9: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F3B00; /* jae: above or equal (unsigned >=) */

loc_000F3AB0: ;
    edx = esp + 0x18;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x000F3ABDu); RECOMP_ABI_CALL(0x0027F560u, sub_0027F560); /* call 0x0027F560 */

loc_000F3ABD: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3ACD; /* je: equal / zero */

loc_000F3AC6: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F3B00; /* jae: above or equal (unsigned >=) */

loc_000F3ACD: ;
    edx = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(edx + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000F3AEC; /* je: equal / zero */

loc_000F3AD8: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F3AE1u); RECOMP_ABI_CALL(0x0027F380u, sub_0027F380); /* call 0x0027F380 */

loc_000F3AE1: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000F3AEC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F3AF5u); RECOMP_ABI_CALL(0x0027F380u, sub_0027F380); /* call 0x0027F380 */

loc_000F3AF5: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000F3B00: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0x000F3B0Cu); RECOMP_ABI_CALL(0x0027F240u, sub_0027F240); /* call 0x0027F240 */

loc_000F3B0C: ;
    ecx = MEM32(eax);
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM32(esi) = ecx;
    eax = esi;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F3B20
 * Original: 0x000F3B20 - 0x000F3B9A (122 bytes, 48 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F3B20: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_000F3B6B; /* jne: not equal / not zero */

loc_000F3B35: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3B6B; /* jne: not equal / not zero */

loc_000F3B39: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000F3B44u); RECOMP_ABI_CALL(0x000F3F60u, sub_000F3F60); /* call 0x000F3F60 */

loc_000F3B44: ;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(esi + 8) = 0;
    MEM32(eax) = eax;
    eax = MEM32(esi + 4);
    MEM32(eax + 8) = eax;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    MEM32(ebp) = edx;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000F3B6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3B90; /* je: equal / zero */

loc_000F3B6F: ;
    PUSH32(esp, edi);

loc_000F3B70: ;
    edx = esp + 0x14;
    edi = eax;
    PUSH32(esp, 0x000F3B7Bu); RECOMP_ABI_CALL(0x0027F560u, sub_0027F560); /* call 0x0027F560 */

loc_000F3B7B: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F3B87u); RECOMP_ABI_CALL(0x000F3BA0u, sub_000F3BA0); /* call 0x000F3BA0 */

loc_000F3B87: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3B70; /* jne: not equal / not zero */

loc_000F3B8F: ;
    POP32(esp, edi);

loc_000F3B90: ;
    MEM32(ebp) = eax;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F3BA0
 * Original: 0x000F3BA0 - 0x000F3E54 (692 bytes, 243 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F3BA0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297148);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    MEM32(XBOX_FS_BASE) = esp;
    SET_LO8(ecx, MEM8(eax + 0x15));
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x58);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000F3C15; /* je: equal / zero */

loc_000F3BC9: ;
    PUSH32(esp, 0x1B);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x323150);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = 0xF;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x000F3BECu); RECOMP_ABI_CALL(0x00017340u, sub_00017340); /* call 0x00017340 */

loc_000F3BEC: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEM32(esp + 0x58) = esi;
    PUSH32(esp, 0x000F3BFEu); RECOMP_ABI_CALL(0x00017430u, sub_00017430); /* call 0x00017430 */

loc_000F3BFE: ;
    PUSH32(esp, 0x334E44);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x323120;
    PUSH32(esp, 0x000F3C15u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000F3C15: ;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, edi);
    edx = esp + 0x6C;
    MEM32(esp + 0x64) = ebx;
    PUSH32(esp, 0x000F3C26u); RECOMP_ABI_CALL(0x0027F560u, sub_0027F560); /* call 0x0027F560 */

loc_000F3C26: ;
    eax = MEM32(ebx);
    SET_LO8(ecx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3C34; /* je: equal / zero */

loc_000F3C2F: ;
    edi = MEM32(ebx + 8);
    goto loc_000F3C4D;

loc_000F3C34: ;
    edx = MEM32(ebx + 8);
    SET_LO8(ecx, MEM8(edx + 0x15));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3C42; /* je: equal / zero */

loc_000F3C3E: ;
    edi = eax;
    goto loc_000F3C4D;

loc_000F3C42: ;
    ecx = MEM32(esp + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    edi = MEM32(ecx + 8);
    if (CMP_NE(_fa, _fb)) goto loc_000F3CB7; /* jne: not equal / not zero */

loc_000F3C4D: ;
    SET_LO8(eax, MEM8(edi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(ebx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_000F3C5A; /* jne: not equal / not zero */

loc_000F3C57: ;
    MEM32(edi + 4) = esi;

loc_000F3C5A: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3C67; /* jne: not equal / not zero */

loc_000F3C62: ;
    MEM32(eax + 4) = edi;
    goto loc_000F3C72;

loc_000F3C67: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3C6F; /* jne: not equal / not zero */

loc_000F3C6B: ;
    MEM32(esi) = edi;
    goto loc_000F3C72;

loc_000F3C6F: ;
    MEM32(esi + 8) = edi;

loc_000F3C72: ;
    ebx = MEM32(ebp + 4);
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x64) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3C91; /* jne: not equal / not zero */

loc_000F3C7D: ;
    SET_LO8(eax, MEM8(edi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3C88; /* je: equal / zero */

loc_000F3C84: ;
    eax = esi;
    goto loc_000F3C8F;

loc_000F3C88: ;
    eax = edi;
    PUSH32(esp, 0x000F3C8Fu); RECOMP_ABI_CALL(0x000F3EC0u, sub_000F3EC0); /* call 0x000F3EC0 */

loc_000F3C8F: ;
    MEM32(ebx) = eax;

loc_000F3C91: ;
    ebx = MEM32(ebp + 4);
    ecx = MEM32(esp + 0x64);
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3D0F; /* jne: not equal / not zero */

loc_000F3C9D: ;
    SET_LO8(eax, MEM8(edi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3CAB; /* je: equal / zero */

loc_000F3CA4: ;
    eax = esi;
    MEM32(ebx + 8) = eax;
    goto loc_000F3D0F;

loc_000F3CAB: ;
    eax = edi;
    PUSH32(esp, 0x000F3CB2u); RECOMP_ABI_CALL(0x0027B070u, sub_0027B070); /* call 0x0027B070 */

loc_000F3CB2: ;
    MEM32(ebx + 8) = eax;
    goto loc_000F3D0F;

loc_000F3CB7: ;
    MEM32(eax + 4) = ecx;
    edx = MEM32(ebx);
    MEM32(ecx) = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3CC7; /* jne: not equal / not zero */

loc_000F3CC3: ;
    esi = ecx;
    goto loc_000F3CE2;

loc_000F3CC7: ;
    SET_LO8(eax, MEM8(edi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(ecx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_000F3CD4; /* jne: not equal / not zero */

loc_000F3CD1: ;
    MEM32(edi + 4) = esi;

loc_000F3CD4: ;
    MEM32(esi) = edi;
    eax = MEM32(ebx + 8);
    MEM32(ecx + 8) = eax;
    edx = MEM32(ebx + 8);
    MEM32(edx + 4) = ecx;

loc_000F3CE2: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3CEF; /* jne: not equal / not zero */

loc_000F3CEA: ;
    MEM32(eax + 4) = ecx;
    goto loc_000F3CFD;

loc_000F3CEF: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3CFA; /* jne: not equal / not zero */

loc_000F3CF6: ;
    MEM32(eax) = ecx;
    goto loc_000F3CFD;

loc_000F3CFA: ;
    MEM32(eax + 8) = ecx;

loc_000F3CFD: ;
    eax = MEM32(ebx + 4);
    MEM32(ecx + 4) = eax;
    SET_LO8(edx, MEM8(ebx + 0x14));
    SET_LO8(eax, MEM8(ecx + 0x14));
    MEM8(ecx + 0x14) = LO8(edx);
    MEM8(ebx + 0x14) = LO8(eax);

loc_000F3D0F: ;
    eax = MEM32(esp + 0x64);
    SET_LO8(ecx, MEM8(eax + 0x14));
    SET_LO8(ebx, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3E1D; /* jne: not equal / not zero */

loc_000F3D20: ;
    ecx = MEM32(ebp + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3E1A; /* je: equal / zero */

loc_000F3D2C: ;
    /* nop */

loc_000F3D30: ;
    _fa = (uint32_t)(MEM8(edi + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3E1A; /* jne: not equal / not zero */

loc_000F3D39: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3DA4; /* jne: not equal / not zero */

loc_000F3D3F: ;
    ecx = MEM32(esi + 8);
    SET_LO8(eax, MEM8(ecx + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3D5B; /* jne: not equal / not zero */

loc_000F3D49: ;
    MEM8(ecx + 0x14) = LO8(ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(esi + 0x14) = 0;
    PUSH32(esp, 0x000F3D58u); RECOMP_ABI_CALL(0x000F3E60u, sub_000F3E60); /* call 0x000F3E60 */

loc_000F3D58: ;
    ecx = MEM32(esi + 8);

loc_000F3D5B: ;
    SET_LO8(eax, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3DD6; /* jne: not equal / not zero */

loc_000F3D62: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3D71; /* jne: not equal / not zero */

loc_000F3D69: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x14), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3DD2; /* je: equal / zero */

loc_000F3D71: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3D8B; /* jne: not equal / not zero */

loc_000F3D79: ;
    eax = MEM32(ecx);
    MEM8(eax + 0x14) = LO8(ebx);
    PUSH32(esp, ebp);
    MEM8(ecx + 0x14) = 0;
    PUSH32(esp, 0x000F3D88u); RECOMP_ABI_CALL(0x000F95F0u, sub_000F95F0); /* call 0x000F95F0 */

loc_000F3D88: ;
    ecx = MEM32(esi + 8);

loc_000F3D8B: ;
    SET_LO8(edx, MEM8(esi + 0x14));
    MEM8(ecx + 0x14) = LO8(edx);
    MEM8(esi + 0x14) = LO8(ebx);
    eax = MEM32(ecx + 8);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(eax + 0x14) = LO8(ebx);
    PUSH32(esp, 0x000F3DA2u); RECOMP_ABI_CALL(0x000F3E60u, sub_000F3E60); /* call 0x000F3E60 */

loc_000F3DA2: ;
    goto loc_000F3E1A;

loc_000F3DA4: ;
    SET_LO8(eax, MEM8(ecx + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3DBC; /* jne: not equal / not zero */

loc_000F3DAB: ;
    MEM8(ecx + 0x14) = LO8(ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(esi + 0x14) = 0;
    PUSH32(esp, 0x000F3DBAu); RECOMP_ABI_CALL(0x000F95F0u, sub_000F95F0); /* call 0x000F95F0 */

loc_000F3DBA: ;
    ecx = MEM32(esi);

loc_000F3DBC: ;
    SET_LO8(eax, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3DD6; /* jne: not equal / not zero */

loc_000F3DC3: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3DEB; /* jne: not equal / not zero */

loc_000F3DCB: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3DEB; /* jne: not equal / not zero */

loc_000F3DD2: ;
    MEM8(ecx + 0x14) = 0;

loc_000F3DD6: ;
    ecx = MEM32(ebp + 4);
    eax = MEM32(ecx + 4);
    edi = esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    esi = MEM32(esi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_000F3D30; /* jne: not equal / not zero */

loc_000F3DE9: ;
    goto loc_000F3E1A;

loc_000F3DEB: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3E04; /* jne: not equal / not zero */

loc_000F3DF2: ;
    eax = MEM32(ecx + 8);
    MEM8(eax + 0x14) = LO8(ebx);
    PUSH32(esp, ebp);
    MEM8(ecx + 0x14) = 0;
    PUSH32(esp, 0x000F3E02u); RECOMP_ABI_CALL(0x000F3E60u, sub_000F3E60); /* call 0x000F3E60 */

loc_000F3E02: ;
    ecx = MEM32(esi);

loc_000F3E04: ;
    SET_LO8(edx, MEM8(esi + 0x14));
    MEM8(ecx + 0x14) = LO8(edx);
    MEM8(esi + 0x14) = LO8(ebx);
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(eax + 0x14) = LO8(ebx);
    PUSH32(esp, 0x000F3E1Au); RECOMP_ABI_CALL(0x000F95F0u, sub_000F95F0); /* call 0x000F95F0 */

loc_000F3E1A: ;
    MEM8(edi + 0x14) = LO8(ebx);

loc_000F3E1D: ;
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F3E27u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_000F3E27: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_000F3E37; /* jbe: below or equal (unsigned <=) */

loc_000F3E33: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = eax;

loc_000F3E37: ;
    edx = MEM32(esp + 0x64);
    eax = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x4C);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F3E60
 * Original: 0x000F3E60 - 0x000F3EB1 (81 bytes, 33 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3E60: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3E75; /* jne: not equal / not zero */

loc_000F3E72: ;
    MEM32(edx + 4) = ecx;

loc_000F3E75: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3E93; /* jne: not equal / not zero */

loc_000F3E87: ;
    MEM32(edx + 4) = eax;
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000F3E93: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3EA5; /* jne: not equal / not zero */

loc_000F3E9A: ;
    MEM32(edx) = eax;
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000F3EA5: ;
    MEM32(edx + 8) = eax;
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F3EC0
 * Original: 0x000F3EC0 - 0x000F3EDC (28 bytes, 11 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3EC0: ;
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F3EDB; /* jne: not equal / not zero */

loc_000F3EC9: ;
    /* nop */

loc_000F3ED0: ;
    eax = ecx;
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3ED0; /* je: equal / zero */

loc_000F3EDB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F3EE0
 * Original: 0x000F3EE0 - 0x000F3F17 (55 bytes, 17 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3EE0: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000F3EE7u); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_000F3EE7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3EF4; /* je: equal / zero */

loc_000F3EEE: ;
    MEM32(eax) = 0;

loc_000F3EF4: ;
    ecx = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3F01; /* je: equal / zero */

loc_000F3EFB: ;
    MEM32(ecx) = 0;

loc_000F3F01: ;
    ecx = eax + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3F0E; /* je: equal / zero */

loc_000F3F08: ;
    MEM32(ecx) = 0;

loc_000F3F0E: ;
    MEM8(eax + 0x14) = 1;
    MEM8(eax + 0x15) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000F3F20
 * Original: 0x000F3F20 - 0x000F3F5B (59 bytes, 19 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3F20: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000F3F27u); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_000F3F27: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F3F58; /* je: equal / zero */

loc_000F3F2E: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM32(eax + 0x10) = ecx;
    MEM8(eax + 0x14) = LO8(edx);
    MEM8(eax + 0x15) = 0;

loc_000F3F58: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000F3F60
 * Original: 0x000F3F60 - 0x000F3F97 (55 bytes, 25 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3F60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(edi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000F3F91; /* jne: not equal / not zero */

loc_000F3F72: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000F3F7Du); RECOMP_ABI_CALL(0x000F3F60u, sub_000F3F60); /* call 0x000F3F60 */

loc_000F3F7D: ;
    esi = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F3F85u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_000F3F85: ;
    SET_LO8(eax, MEM8(esi + 0x15));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000F3F72; /* je: equal / zero */

loc_000F3F91: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F3FA0
 * Original: 0x000F3FA0 - 0x000F4005 (101 bytes, 31 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F3FA0: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    ecx = 0x11;
    edi = esi + 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 1;
    MEM32(esi + 0x18) = 6;
    MEM32(esi + 0x1C) = 2;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = 0x2A;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x38) = 0x100;
    PUSH32(esp, 0x000F3FE7u); RECOMP_ABI_CALL(0x002930C5u, sub_002930C5); /* call 0x002930C5 */

loc_000F3FE7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F3FEF; /* je: equal / zero */

loc_000F3FEB: ;
    MEM32(esi + 0x38) = MEM32(esi + 0x38) | 0x40;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000F3FEF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F3FFA; /* je: equal / zero */

loc_000F3FF3: ;
    MEM32(esi + 0x3C) = 0x3C;

loc_000F3FFA: ;
    POP32(esp, edi);
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x64) = ebx;
    eax = esi;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F4010
 * Original: 0x000F4010 - 0x000F4168 (344 bytes, 106 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F4010: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0xA0);
    PUSH32(esp, edi);
    edi = esi + 0x10;
    MEM32(edi) = ecx;
    edx = MEM32(eax + 0xA4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    MEM32(esi + 0x14) = edx;
    PUSH32(esp, 0x000F4032u); RECOMP_ABI_CALL(0x002A5EF0u, sub_002A5EF0); /* call 0x002A5EF0 */

loc_000F4032: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000F404C; /* je: equal / zero */

loc_000F4038: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000F4048u); RECOMP_ABI_CALL(0x002A5F00u, sub_002A5F00); /* call 0x002A5F00 */

loc_000F4048: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F4056; /* jge: greater or equal (signed >=) */

loc_000F404C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x80004005u;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000F4056: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x000F405Eu); RECOMP_ABI_CALL(0x0029A870u, sub_0029A870); /* call 0x0029A870 */

loc_000F405E: ;
    PUSH32(esp, 0x000F4063u); RECOMP_ABI_CALL(0x00297F10u, sub_00297F10); /* call 0x00297F10 */

loc_000F4063: ;
    PUSH32(esp, ebx);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x000F406Cu); RECOMP_ABI_CALL(0x00297EA0u, sub_00297EA0); /* call 0x00297EA0 */

loc_000F406C: ;
    edi = esi + 0x54;
    MEM32(esi + 8) = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edi;
    goto loc_000F4080;

    /* nop */

loc_000F4080: ;
    PUSH32(esp, 0x83D60);
    PUSH32(esp, 0x000F408Au); RECOMP_ABI_CALL(0x0029E6A0u, sub_0029E6A0); /* call 0x0029E6A0 */

loc_000F408A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(edi) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x8007000Eu (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000F415D; /* jl: less (signed <) */

loc_000F40A0: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F4080; /* jb: below (unsigned <) */

loc_000F40A9: ;
    edx = MEM32(esp + 0x10);
    MEM32(esi + 0x68) = ebx;
    eax = MEM32(edx);
    PUSH32(esp, 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000F40BBu); RECOMP_ABI_CALL(0x0029A6E0u, sub_0029A6E0); /* call 0x0029A6E0 */

loc_000F40BB: ;
    MEM32(0x2A7FF8) = MEM32(0x2A7FF8) | 0x1200;
    _fa = (uint32_t)(MEM32(0x2A7FF8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 1;
    edx = esi;
    ecx = 0x40310;
    MEM32(0x2A8398) = ebx;
    PUSH32(esp, 0x000F40DCu); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F40DC: ;
    PUSH32(esp, 0x901);
    MEM32(0x2A8304) = esi;
    PUSH32(esp, 0x000F40ECu); RECOMP_ABI_CALL(0x0029B270u, sub_0029B270); /* call 0x0029B270 */

loc_000F40EC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000F40F2u); RECOMP_ABI_CALL(0x0029B200u, sub_0029B200); /* call 0x0029B200 */

loc_000F40F2: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0x000F4101u); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_000F4101: ;
    eax = 2;
    MEM32(0x2A8038) = eax;
    MEM32(0x2A8048) = eax;
    eax = MEM32(0x2A7FF8);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = eax | 0x801;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2A80B0) = esi;
    POP32(esp, esi);
    MEM32(0x2A8014) = ebx;
    MEM32(0x2A803C) = ebx;
    MEM32(0x2A7FF8) = eax;
    MEM32(0x2A804C) = ebx;
    MEM32(0x2A82E4) = 0x203;
    MEM32(0x2A8030) = 5;
    MEM32(0x2A8040) = 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000F415D: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x80004005u;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F4170
 * Original: 0x000F4170 - 0x000F41B9 (73 bytes, 25 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4170: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 0x54;
    edi = 3;
    /* nop */

loc_000F4180: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4192; /* je: equal / zero */

loc_000F4186: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F418Cu); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F418C: ;
    MEM32(esi) = 0;

loc_000F4192: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F4180; /* jne: not equal / not zero */

loc_000F4198: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000F41AD; /* je: equal / zero */

loc_000F41A1: ;
    PUSH32(esp, 0x000F41A6u); RECOMP_ABI_CALL(0x00297A80u, sub_00297A80); /* call 0x00297A80 */

loc_000F41A6: ;
    MEM32(ebx + 4) = 0;

loc_000F41AD: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F41B8; /* je: equal / zero */

loc_000F41B2: ;
    MEM32(ebx) = 0;

loc_000F41B8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F41C0
 * Original: 0x000F41C0 - 0x000F4212 (82 bytes, 32 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F41C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F41C0: ;
    ecx = MEM32(esi + 0x60);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x83D60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x83D60 (32-bit) */
    PUSH32(esp, edi);
    eax = 0x20;
    if (CMP_B(_fa, _fb)) goto loc_000F41EF; /* jb: below (unsigned <) */

loc_000F41D8: ;
    ecx = MEM32(esi + 0x68);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x60) = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x68) = edx;

loc_000F41EF: ;
    ecx = MEM32(esi + 0x68);
    ecx = MEM32(esi + ecx * 4 + 0x54);
    edi = MEM32(esi + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F4200u); RECOMP_ABI_CALL(0x0029E6F0u, sub_0029E6F0); /* call 0x0029E6F0 */

loc_000F4200: ;
    ecx = MEM32(esi + 0x60);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x64) = ecx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x60) = ecx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F4220
 * Original: 0x000F4220 - 0x000F425A (58 bytes, 17 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4220: ;
    eax = MEM32(edi + 0x68);
    ecx = MEM32(edi + eax * 4 + 0x54);
    PUSH32(esp, 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F4231u); RECOMP_ABI_CALL(0x0029A6E0u, sub_0029A6E0); /* call 0x0029A6E0 */

loc_000F4231: ;
    edx = MEM32(esi * 8 + 0x322F58);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 4));
    _fb = (uint32_t)(MEM32(esi * 8 + 0x322F5C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esi * 8 + 0x322F5C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = 0x38E38E39;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(edi + 0x64);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F4257u); RECOMP_ABI_CALL(0x002A2980u, sub_002A2980); /* call 0x002A2980 */

loc_000F4257: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F4260
 * Original: 0x000F4260 - 0x000F426E (14 bytes, 6 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4260(void)
{

loc_000F4260: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F426Du); RECOMP_ABI_CALL(0x00297C20u, sub_00297C20); /* call 0x00297C20 */

loc_000F426D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F4270
 * Original: 0x000F4270 - 0x000F42BF (79 bytes, 23 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4270: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296B5E);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(XBOX_FS_BASE) = esp;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    ecx = MEM32(esp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F42C0
 * Original: 0x000F42C0 - 0x000F4369 (169 bytes, 62 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F42C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F42C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = eax;
    PUSH32(esp, 0x000F42CCu); RECOMP_ABI_CALL(0x000F4370u, sub_000F4370); /* call 0x000F4370 */

loc_000F42CC: ;
    PUSH32(esp, 0);
    ecx = ebx;
    edi = esi;
    PUSH32(esp, 0x000F42D7u); RECOMP_ABI_CALL(0x000F4B20u, sub_000F4B20); /* call 0x000F4B20 */

loc_000F42D7: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    edi = esi + 0x20;
    PUSH32(esp, 0x000F42E5u); RECOMP_ABI_CALL(0x000F4B20u, sub_000F4B20); /* call 0x000F4B20 */

loc_000F42E5: ;
    PUSH32(esp, 0xFFFFFFFFu);
    edi = esi + 0x30;
    ecx = ebx;
    PUSH32(esp, 0x000F42F1u); RECOMP_ABI_CALL(0x000F4B20u, sub_000F4B20); /* call 0x000F4B20 */

loc_000F42F1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0x10;
    /* nop */

loc_000F4300: ;
    PUSH32(esp, 3);
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x000F4319u); RECOMP_ABI_CALL(0x002A5BB0u, sub_002A5BB0); /* call 0x002A5BB0 */

loc_000F4319: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000F4328; /* jne: not equal / not zero */

loc_000F4324: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000F4330;

loc_000F4328: ;
    edi = MEM32(esi + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((2) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_000F4330: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F434D; /* je: equal / zero */

loc_000F4334: ;
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F434D; /* jae: above or equal (unsigned >=) */

loc_000F4340: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = ecx;
    goto loc_000F4360;

loc_000F434D: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = esp + 0x18;
    ecx = 1;
    PUSH32(esp, 0x000F4360u); RECOMP_ABI_CALL(0x000F4BD0u, sub_000F4BD0); /* call 0x000F4BD0 */

loc_000F4360: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F4300; /* jne: not equal / not zero */

loc_000F4363: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F4370
 * Original: 0x000F4370 - 0x000F443F (207 bytes, 83 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4370: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4398; /* je: equal / zero */

loc_000F437E: ;
    edi = edi;

loc_000F4380: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F438E; /* je: equal / zero */

loc_000F4386: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F438Cu); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F438C: ;
    MEM32(edi) = ebx;

loc_000F438E: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4380; /* jne: not equal / not zero */

loc_000F4398: ;
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F43B8; /* je: equal / zero */

loc_000F43A0: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F43AE; /* je: equal / zero */

loc_000F43A6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F43ACu); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F43AC: ;
    MEM32(edi) = ebx;

loc_000F43AE: ;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F43A0; /* jne: not equal / not zero */

loc_000F43B8: ;
    edi = MEM32(esi + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x28) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F43D8; /* je: equal / zero */

loc_000F43C0: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F43CE; /* je: equal / zero */

loc_000F43C6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F43CCu); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F43CC: ;
    MEM32(edi) = ebx;

loc_000F43CE: ;
    eax = MEM32(esi + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F43C0; /* jne: not equal / not zero */

loc_000F43D8: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F43E8; /* je: equal / zero */

loc_000F43DF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F43E5u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_000F43E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F43E8: ;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4401; /* je: equal / zero */

loc_000F43F8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F43FEu); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_000F43FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F4401: ;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F441A; /* je: equal / zero */

loc_000F4411: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F4417u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_000F4417: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F441A: ;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4433; /* je: equal / zero */

loc_000F442A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F4430u); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_000F4430: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F4433: ;
    POP32(esp, edi);
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x3C) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F4440
 * Original: 0x000F4440 - 0x000F47C3 (899 bytes, 288 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F4440: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x5C);
    eax = MEM32(esi + 0x2C);
    ebx = ZX16(MEM16(esi + 4));
    MEM32(esp + 0x18) = eax;
    eax = ZX8(MEM8(esi + 0x53));
    PUSH32(esp, edi);
    edi = ZX16(MEM16(esi + 6));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70 (32-bit) */
    MEM32(esp + 0x2C) = edi;
    MEM8(esp + 0x13) = 1;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x28) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_000F45D9; /* ja: above (unsigned >) */

loc_000F447D: ;
    edx = ZX8(MEM8(eax + 0xF47D8));
    { uint32_t _jt = MEM32(edx * 4 + 0xF47C4); /* switch: 5 entries, 5 targets */
    if (_jt == 0x000F448Bu) goto loc_000F448B;
    if (_jt == 0x000F451Fu) goto loc_000F451F;
    if (_jt == 0x000F4567u) goto loc_000F4567;
    if (_jt == 0x000F45B6u) goto loc_000F45B6;
    if (_jt == 0x000F45D9u) goto loc_000F45D9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000F448B: ;
    eax = ZX8(MEM8(esi + 0x11));
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000F44D9; /* ja: above (unsigned >) */

loc_000F4497: ;
    eax = ZX8(MEM8(eax + 0xF4858));
    { uint32_t _jt = MEM32(eax * 4 + 0xF484C); /* switch: 3 entries, 3 targets */
    if (_jt == 0x000F44A5u) goto loc_000F44A5;
    if (_jt == 0x000F44B7u) goto loc_000F44B7;
    if (_jt == 0x000F44D9u) goto loc_000F44D9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000F44A5: ;
    MEM32(esp + 0x18) = 0xB;
    MEM32(esp + 0x20) = 1;
    goto loc_000F44D9;

loc_000F44B7: ;
    edx = MEM32(esp + 0x1C);
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx);
    MEM32(esp + 0x18) = 6;
    MEM32(esp + 0x20) = 4;
    PUSH32(esp, 0x000F44D5u); RECOMP_ABI_CALL(0x000F4A60u, sub_000F4A60); /* call 0x000F4A60 */

loc_000F44D5: ;
    esi = MEM32(esp + 0x60);

loc_000F44D9: ;
    ebp = MEM32(esp + 0x20);
    SET_LO8(eax, MEM8(esi + 0x11));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edi);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ebx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F4510; /* jne: not equal / not zero */

loc_000F44EA: ;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F44F5u); RECOMP_ABI_CALL(0x0028A424u, sub_0028A424); /* call 0x0028A424 */

loc_000F44F5: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edx = ebx;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x000F4505u); RECOMP_ABI_CALL(0x000A5350u, sub_000A5350); /* call 0x000A5350 */

loc_000F4505: ;
    edx = MEM32(esp + 0x30);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = edx;

loc_000F4510: ;
    SET_LO16(eax, ZX8(MEM8(esi + 0x6C)));
    MEM16(esp + 0x14) = LO16(eax);
    goto loc_000F45DD;

loc_000F451F: ;
    SET_LO8(eax, MEM8(esi + 0x6C));
    ebp = edi;
    ebp = ebp >> 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ebx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ecx);
    ebp = ebp << 3;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x18) = 0xC;
    MEM8(esp + 0x13) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_000F45DD; /* jbe: below or equal (unsigned <=) */

loc_000F4547: ;
    ecx = 4;
    edx = edi;
    eax = ebx;
    PUSH32(esp, 0x000F4555u); RECOMP_ABI_CALL(0x000A4190u, sub_000A4190); /* call 0x000A4190 */

loc_000F4555: ;
    SET_LO8(ecx, MEM8(esi + 0x6C));
    SET_LO16(edx, ZX8(LO8(ecx)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F45AB; /* jae: above or equal (unsigned >=) */

loc_000F4561: ;
    MEM32(esp + 0x14) = eax;
    goto loc_000F45DD;

loc_000F4567: ;
    SET_LO8(eax, MEM8(esi + 0x6C));
    ebp = edi;
    ebp = ebp >> 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ebx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ecx);
    ebp = ebp << 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x18) = 0xE;
    MEM8(esp + 0x13) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_000F45DD; /* jbe: below or equal (unsigned <=) */

loc_000F458B: ;
    ecx = 4;
    edx = edi;
    eax = ebx;
    PUSH32(esp, 0x000F4599u); RECOMP_ABI_CALL(0x000A4190u, sub_000A4190); /* call 0x000A4190 */

loc_000F4599: ;
    SET_LO8(ecx, MEM8(esi + 0x6C));
    SET_LO16(edx, ZX8(LO8(ecx)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F45AB; /* jae: above or equal (unsigned >=) */

loc_000F45A5: ;
    MEM32(esp + 0x14) = eax;
    goto loc_000F45DD;

loc_000F45AB: ;
    SET_LO16(eax, ZX8(LO8(ecx)));
    MEM16(esp + 0x14) = LO16(eax);
    goto loc_000F45DD;

loc_000F45B6: ;
    ebp = edi;
    edx = ebx;
    ebp = ebp >> 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edx);
    MEM32(esp + 0x18) = 0xF;
    MEM8(esp + 0x13) = 0;
    ebp = ebp << 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x14) = ecx;
    goto loc_000F45DD;

loc_000F45D9: ;
    ebp = MEM32(esp + 0x60);

loc_000F45DD: ;
    _fa = (uint32_t)(MEM8(esi + 0x50)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x50), 8 (8-bit) */
    PUSH32(esp, 3);
    if (TEST_NZ(_fa, _fb)) goto loc_000F45F0; /* jne: not equal / not zero */

loc_000F45E5: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    goto loc_000F4610;

loc_000F45F0: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4607; /* je: equal / zero */

loc_000F45F9: ;
    ecx = MEM32(esp + 0x1C);
    edx = ZX16(LO16(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    goto loc_000F4610;

loc_000F4607: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);

loc_000F4610: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000F4619u); RECOMP_ABI_CALL(0x002A5BB0u, sub_002A5BB0); /* call 0x002A5BB0 */

loc_000F4619: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x000F4627u); RECOMP_ABI_CALL(0x002A5C80u, sub_002A5C80); /* call 0x002A5C80 */

loc_000F4627: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x000F463Au); RECOMP_ABI_CALL(0x002A38A0u, sub_002A38A0); /* call 0x002A38A0 */

loc_000F463A: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4663; /* je: equal / zero */

loc_000F4642: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F4661u); RECOMP_ABI_CALL(0x002C9EACu, sub_002C9EAC); /* call 0x002C9EAC */

loc_000F4661: ;
    goto loc_000F4683;

loc_000F4663: ;
    edi = MEM32(esp + 0x34);
    esi = MEM32(esp + 0x1C);
    ecx = ebp;
    edx = ecx;
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
    edi = MEM32(esp + 0x2C);
    esi = MEM32(esp + 0x60);

loc_000F4683: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F468Du); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F468D: ;
    _fa = (uint32_t)(MEM8(esi + 0x50)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x50), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F4798; /* je: equal / zero */

loc_000F4697: ;
    _fa = (uint32_t)(MEM16(esp + 0x14)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x14), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F46B4; /* jne: not equal / not zero */

loc_000F469F: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F46AFu); RECOMP_ABI_CALL(0x002C0250u, sub_002C0250); /* call 0x002C0250 */

loc_000F46AF: ;
    goto loc_000F4798;

loc_000F46B4: ;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x24) = ebx;
    ebx = ZX16(MEM16(esp + 0x14));
    esi = 1;
    MEM32(esp + 0x60) = edi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    edi = edx + ebp;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x2C) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_000F4798; /* jle: less or equal (signed <=) */

loc_000F46E0: ;
    goto loc_000F46E7;

loc_000F46E2: ;
    eax = 1;

loc_000F46E7: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F46F5; /* jbe: below or equal (unsigned <=) */

loc_000F46EF: ;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x24) = ecx;

loc_000F46F5: ;
    ecx = MEM32(esp + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F4705; /* jbe: below or equal (unsigned <=) */

loc_000F46FD: ;
    eax = ecx;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x60) = eax;

loc_000F4705: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F4710u); RECOMP_ABI_CALL(0x002A5C80u, sub_002A5C80); /* call 0x002A5C80 */

loc_000F4710: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x38;
    ebp = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000F4721u); RECOMP_ABI_CALL(0x002A38A0u, sub_002A38A0); /* call 0x002A38A0 */

loc_000F4721: ;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000F472Cu); RECOMP_ABI_CALL(0x002A3880u, sub_002A3880); /* call 0x002A3880 */

loc_000F472C: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esp + 0x44);
    MEM32(esp + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000F4761; /* je: equal / zero */

loc_000F473C: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x60);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000F475Fu); RECOMP_ABI_CALL(0x002C9EACu, sub_002C9EAC); /* call 0x002C9EAC */

loc_000F475F: ;
    goto loc_000F477D;

loc_000F4761: ;
    edx = ecx;
    esi = edi;
    edi = MEM32(esp + 0x34);
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
    esi = MEM32(esp + 0x2C);
    edi = MEM32(esp + 0x1C);

loc_000F477D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000F4783u); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F4783: ;
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x2C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000F46E2; /* jl: less (signed <) */

loc_000F4798: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F47A2u); RECOMP_ABI_CALL(0x0028C403u, sub_0028C403); /* call 0x0028C403 */

loc_000F47A2: ;
    ecx = MEM32(esp + 0x5C);
    edx = MEM32(ecx + 4);
    eax = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = edx + eax * 4;
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F4880
 * Original: 0x000F4880 - 0x000F48A5 (37 bytes, 15 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4880: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(edi + 4);
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + esi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F48A3; /* je: equal / zero */

loc_000F4892: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F4898u); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F4898: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 0;

loc_000F48A3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F48B0
 * Original: 0x000F48B0 - 0x000F490F (95 bytes, 36 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F48B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F48B0: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ebx);
    ebx = eax;
    SET_LO8(eax, MEM8(ebx + 8));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ebp * 4;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = eax;
    eax = ecx + edi;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000F48EF; /* je: equal / zero */

loc_000F48DC: ;
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F48E4u); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F48E4: ;
    eax = MEM32(esi + 0x24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 0;

loc_000F48EF: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F48F9u); RECOMP_ABI_CALL(0x0029E740u, sub_0029E740); /* call 0x0029E740 */

loc_000F48F9: ;
    ecx = MEM32(esi + 0x24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    edx = ebp;
    eax = esi;
    PUSH32(esp, 0x000F4909u); RECOMP_ABI_CALL(0x000F4910u, sub_000F4910); /* call 0x000F4910 */

loc_000F4909: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F4910
 * Original: 0x000F4910 - 0x000F496F (95 bytes, 38 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F4910: ;
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ecx + edx * 4);
    SET_LO8(ecx, MEM8(ebx + 8));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFF10u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x100)) >> 32) & 1);
    ecx = ecx + 0x100;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx;
    PUSH32(esp, 0x000F4937u); RECOMP_ABI_CALL(0x0029E7A0u, sub_0029E7A0); /* call 0x0029E7A0 */

loc_000F4937: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_000F496D; /* jbe: below or equal (unsigned <=) */

loc_000F493D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    /* nop */

loc_000F4940: ;
    ecx = MEM32(ebx + 4);
    esi = ecx + edx * 4;
    ecx = MEM32(esi);
    esi = ZX8(MEM8(esi + 2));
    ebp = ecx;
    _cf = 0; /* logical op clears CF */
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (0x10) _cf = (int)(((ebp) >> (32 - (0x10))) & 1);
    ebp = ebp << 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ebp = ebp | esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFF00FF00u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ebp = ebp | ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000F4940; /* jb: below (unsigned <) */

loc_000F496B: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_000F496D: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F4970
 * Original: 0x000F4970 - 0x000F4995 (37 bytes, 15 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4970: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(edi + 0x24);
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + esi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4993; /* je: equal / zero */

loc_000F4982: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000F4988u); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F4988: ;
    eax = MEM32(edi + 0x24);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 0;

loc_000F4993: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F49A0
 * Original: 0x000F49A0 - 0x000F49AF (15 bytes, 5 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F49A0(void)
{

loc_000F49A0: ;
    ecx = MEM32(eax + 0x34);
    eax = ecx + edx * 4;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F49B0
 * Original: 0x000F49B0 - 0x000F49D0 (32 bytes, 12 insns)
 * Folder: render (between: 0x000EF630 and 0x000F49D0)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F49B0(void)
{

loc_000F49B0: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + ecx * 4);
    eax = eax + ecx * 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F49C0u); RECOMP_ABI_CALL(0x00298FB0u, sub_00298FB0); /* call 0x00298FB0 */

loc_000F49C0: ;
    edx = MEM32(edi + 4);
    eax = MEM32(esp + 8);
    eax = edx + eax * 4;
    MEM32(eax) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F49D0
 * Original: 0x000F49D0 - 0x000F4A58 (136 bytes, 52 insns)
 * Folder: render (source: XbTextureMgr.cpp)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F49D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F49D0: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4A4E; /* je: equal / zero */

loc_000F49D8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_000F4A15; /* jns: not sign (positive) */

loc_000F49DC: ;
    esi = esi & 0x7FFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F4A08; /* jb: below (unsigned <) */

loc_000F49E7: ;
    PUSH32(esp, 0x331E68);
    PUSH32(esp, 0x331E48);
    PUSH32(esp, 0x19B);
    PUSH32(esp, 0x331E34);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000F4A05u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000F4A05: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F4A08: ;
    eax = MEM32(edi + 0x14);
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax);
    PUSH32(esp, eax);
    goto loc_000F4A21;

loc_000F4A15: ;
    eax = MEM32(edi + 4);
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + esi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);

loc_000F4A21: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000F4A27u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F4A27: ;
    eax = MEM32(edi + 0x34);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F4A44; /* je: equal / zero */

loc_000F4A33: ;
    edx = MEM32(edi + 0x24);
    eax = edx + eax * 4;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000F4A42u); RECOMP_ABI_CALL(0x00298310u, sub_00298310); /* call 0x00298310 */

loc_000F4A42: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F4A44: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000F4A4Cu); RECOMP_ABI_CALL(0x00298310u, sub_00298310); /* call 0x00298310 */

loc_000F4A4C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000F4A4E: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000F4A56u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_000F4A56: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F4A60
 * Original: 0x000F4A60 - 0x000F4A9C (60 bytes, 24 insns)
 * Folder: render (between: 0x000F49D0 and 0x000F4AA0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4A60: ;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F4A9A; /* jbe: below or equal (unsigned <=) */

loc_000F4A67: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    /* nop */

loc_000F4A70: ;
    eax = MEM32(edx + ecx * 4);
    MEM32(esp + 8) = eax;
    edi = ZX8(MEM8(esp + 0xA));
    ebx = eax;
    ebx = ebx & 0xFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & 0xFF00FF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + ecx * 4) = edi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F4A70; /* jb: below (unsigned <) */

loc_000F4A98: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000F4A9A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F4AA0
 * Original: 0x000F4AA0 - 0x000F4AF1 (81 bytes, 26 insns)
 * Folder: render (source: XbTextureMgr.cpp)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F4AA0: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F4AC9; /* jb: below (unsigned <) */

loc_000F4AA8: ;
    PUSH32(esp, 0x331E68);
    PUSH32(esp, 0x331E48);
    PUSH32(esp, 0x1D0);
    PUSH32(esp, 0x331E34);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000F4AC6u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000F4AC6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F4AC9: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x14);
    eax = ecx + esi * 4;
    eax = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F4ADDu); RECOMP_ABI_CALL(0x002A5C80u, sub_002A5C80); /* call 0x002A5C80 */

loc_000F4ADD: ;
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F4AE7u); RECOMP_ABI_CALL(0x00297C20u, sub_00297C20); /* call 0x00297C20 */

loc_000F4AE7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F4AEDu); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_000F4AED: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
