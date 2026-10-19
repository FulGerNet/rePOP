/**
 * PoP SoT xbox-demo - scripts, chunk 7
 * The game's AI models compiled to C (AI2C), listed in the compiled AI table
 * Functions: 67 (0x002476A0 - 0x00251BA0)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_002476A0
 * Original: 0x002476A0 - 0x002476FD (93 bytes, 21 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002476A0(void)
{

loc_002476A0: ;
    eax = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x44);
    PUSH32(esp, edi);
    edi = MEM32(0x64D880);
    eax = edi;
    PUSH32(esp, 0x002476B7u); RECOMP_ABI_CALL(0x002479A0u, sub_002479A0); /* call 0x002479A0 */

loc_002476B7: ;
    MEM32(esi + 0x84C) = 1;
    ecx = MEM32(edi + 0x18);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 0x44);
    ecx = 0xFF;
    POP32(esp, edi);
    MEM32(eax + 0x744) = ecx;
    MEM32(eax + 0x20C) = ecx;
    MEM32(eax + 0x8D0) = ecx;
    MEM32(eax + 0x868) = 0xFFFFFFFFu;
    MEM32(eax + 0x8F0) = 0;
    eax = 0x3E8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00247700
 * Original: 0x00247700 - 0x00247991 (657 bytes, 165 insns)
 * Folder: scripts (between: 0x002476A0 and 0x00248650)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247700(void)
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

loc_00247700: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    edx = MEM32(0x64D87C);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(edi + 0x18);
    eax = MEM32(eax + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D884);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x44);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x8DC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x158); /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x8E0)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x15C); /* subss */
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = eax;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x8E4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x160); /* subss */
    eax = 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    MEM32(esp + 0x14) = edx;
    MEM32(0x64D884) = edi;
    MEM32(0x64D880) = edi;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_002477A7; /* jne: not equal / not zero */

loc_00247797: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x20), eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002477A7; /* jne: not equal / not zero */

loc_0024779D: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x24), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00247929; /* je: equal / zero */

loc_002477A7: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0x002477B3u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_002477B3: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esi + 0x128);
    MEM32(esp + 0x40) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x33382C); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 0x34) = edx;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_002477F4; /* jne: not equal / not zero */

loc_002477ED: ;
    eax = MEM32(0x614FCC);
    goto loc_002477FE;

loc_002477F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002477FE; /* jne: not equal / not zero */

loc_002477F9: ;
    eax = MEM32(0x614FD0);

loc_002477FE: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00247808u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_00247808: ;
    eax = esp + 0x44;
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0x00247814u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_00247814: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x48); /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x4C); /* subss */
    ecx = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x50); /* subss */
    edx = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x38);
    MEM32(esp + 0x2C) = eax;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    MEM32(esp + 0x28) = edx;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    MEM32(esp + 0x24) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    ebx = MEM32(0x34AC38);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    PUSH32(esp, 0);
    fp_push(MEMF(esp + 0x28)); /* fld float */
    PUSH32(esp, 1);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    edx = esp + 0x68;
    eax = esp + 0x5C;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x34); /* divss */
    ecx = MEM32(esp + 0x34);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, edx);
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    PUSH32(esp, eax);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, edi);
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x002478F0u); RECOMP_ABI_CALL(0x0007DBB0u, sub_0007DBB0); /* call 0x0007DBB0 */

loc_002478F0: ;
    edx = MEM32(0x614FD0);
    ecx = MEM32(0x614FCC);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00247908; /* jne: not equal / not zero */

loc_00247904: ;
    eax = ecx;
    goto loc_0024790F;

loc_00247908: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024790F; /* jne: not equal / not zero */

loc_0024790D: ;
    eax = edx;

loc_0024790F: ;
    esi = MEM32(esi + 0x128);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024791E; /* jne: not equal / not zero */

loc_0024791A: ;
    esi = ecx;
    goto loc_00247925;

loc_0024791E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00247925; /* jne: not equal / not zero */

loc_00247923: ;
    esi = edx;

loc_00247925: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024795D; /* je: equal / zero */

loc_00247929: ;
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    MEM32(ecx) = 0;
    ecx = MEM32(esp + 0x18);
    MEM32(0x64D878) = edx;
    MEM32(0x64D87C) = eax;
    MEM32(0x64D880) = ecx;
    MEM32(0x64D884) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0024795D: ;
    edx = MEM32(esp + 0x50);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    POP32(esp, esi);
    MEM32(edx) = 0x1000;
    edx = MEM32(esp + 0x14);
    MEM32(0x64D884) = ebp;
    POP32(esp, ebp);
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D880) = edx;
    POP32(esp, ebx);
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
 * sub_002479A0
 * Original: 0x002479A0 - 0x00247A2E (142 bytes, 39 insns)
 * Folder: scripts (between: 0x002476A0 and 0x00248650)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002479A0(void)
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

loc_002479A0: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 0x44);
    ecx = MEM32(eax + 0xC80);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00247A2A; /* je: equal / zero */

loc_002479B8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00247A18; /* je: equal / zero */

loc_002479BD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00247A1E; /* jne: not equal / not zero */

loc_002479C2: ;
    ecx = MEM32(eax + 0xC1C);
    xmm1.f[0] = (float)(int32_t)MEM32(eax + 0x284); /* cvtsi2ss */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002479E1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_002479DA: ;
    MEMF(esp) = xmm1.f[0]; /* movss */
    goto loc_002479F3;

loc_002479E1: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_002479F3; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_002479EE: ;
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_002479F3: ;
    fp_push(MEMF(esp)); /* fld float */
    MEM32(eax + 0xC80) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEM32(eax + 0x118) = edx;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp);
    MEM32(eax + 0xC1C) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00247A18: ;
    MEM32(eax + 0xC1C) = edx;

loc_00247A1E: ;
    MEM32(eax + 0xC80) = edx;
    MEM32(eax + 0x118) = edx;

loc_00247A2A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_00247A30
 * Original: 0x00247A30 - 0x00247B07 (215 bytes, 72 insns)
 * Folder: scripts (between: 0x002476A0 and 0x00248650)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00247A30: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x18);
    eax = MEM32(0x344944);
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x64D1F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x44);
    if (CMP_EQ(_fa, _fb)) goto loc_00247ABA; /* je: equal / zero */

loc_00247A4B: ;
    PUSH32(esp, 0x8002717);
    eax = 0x493610;
    PUSH32(esp, 0x00247A5Au); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00247A5A: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00247A70; /* je: equal / zero */

loc_00247A67: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00247A7A; /* je: equal / zero */

loc_00247A70: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00247A86; /* je: equal / zero */

loc_00247A7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00247A86; /* jne: not equal / not zero */

loc_00247A7F: ;
    ecx = 0x8002717;
    goto loc_00247A8D;

loc_00247A86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00247AAA; /* je: equal / zero */

loc_00247A8D: ;
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
    PUSH32(esp, 0x00247AA5u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00247AA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00247AAF;

loc_00247AAA: ;
    eax = 0x8002717;

loc_00247AAF: ;
    MEM32(0x65098C) = eax;
    MEM32(0x344944) = esi;

loc_00247ABA: ;
    eax = MEM32(edi + 0x128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00247ACD; /* jne: not equal / not zero */

loc_00247AC5: ;
    ecx = MEM32(0x614FCC);
    goto loc_00247ADA;

loc_00247ACD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    ecx = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_00247ADA; /* je: equal / zero */

loc_00247AD8: ;
    ecx = eax;

loc_00247ADA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00247AFD; /* je: equal / zero */

loc_00247ADE: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00247AE9u); RECOMP_ABI_CALL(0x0023A350u, sub_0023A350); /* call 0x0023A350 */

loc_00247AE9: ;
    eax = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ebx) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00247AFD: ;
    POP32(esp, edi);
    MEM32(ebx) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00247B10
 * Original: 0x00247B10 - 0x00247C7E (366 bytes, 106 insns)
 * Folder: scripts (between: 0x002476A0 and 0x00248650)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247B10(void)
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

loc_00247B10: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    edx = MEM32(0x64D87C);
    MEM32(esp + 8) = eax;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x44);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D884);
    PUSH32(esp, edi);
    edi = MEM32(0x64D1F8);
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = eax;
    _fa = (uint32_t)(MEM32(0x344940)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x344940), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    MEM32(0x64D884) = esi;
    MEM32(0x64D880) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00247BD5; /* je: equal / zero */

loc_00247B66: ;
    PUSH32(esp, 0xCC000431u);
    eax = 0x493610;
    PUSH32(esp, 0x00247B75u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00247B75: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00247B8B; /* je: equal / zero */

loc_00247B82: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00247B95; /* je: equal / zero */

loc_00247B8B: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00247BA1; /* je: equal / zero */

loc_00247B95: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00247BA1; /* jne: not equal / not zero */

loc_00247B9A: ;
    ecx = 0xCC000431u;
    goto loc_00247BA8;

loc_00247BA1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00247BC5; /* je: equal / zero */

loc_00247BA8: ;
    edx = ecx;
    if (8) _cf = (int)(((edx) >> ((8) - 1)) & 1);
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x47EC30)) >> 32) & 1);
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00247BC0u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00247BC0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00247BCA;

loc_00247BC5: ;
    eax = 0xCC000431u;

loc_00247BCA: ;
    MEM32(0x650988) = eax;
    MEM32(0x344940) = edi;

loc_00247BD5: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x00247BE1u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_00247BE1: ;
    eax = MEM32(0x650988);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00247BF5; /* jne: not equal / not zero */

loc_00247BEE: ;
    eax = MEM32(0x614FCC);
    goto loc_00247BFF;

loc_00247BF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00247BFF; /* jne: not equal / not zero */

loc_00247BFA: ;
    eax = MEM32(0x614FD0);

loc_00247BFF: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00247C09u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_00247C09: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
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
    fp_push(MEMF(ebx + 0xC44)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00247C54; /* jbe: below or equal (unsigned <=) */

loc_00247C48: ;
    edx = MEM32(0x650988);
    MEM32(ebx + 0x128) = edx;

loc_00247C54: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(0x64D884) = ebp;
    POP32(esp, ebp);
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D880) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
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
 * sub_00247C80
 * Original: 0x00247C80 - 0x00247D96 (278 bytes, 87 insns)
 * Folder: scripts (between: 0x002476A0 and 0x00248650)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00247C80: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D87C);
    edx = MEM32(ecx + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    edi = MEM32(0x64D880);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edx + 4);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = eax;
    eax = MEM32(0x34AC38);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 2);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D880) = ecx;
    PUSH32(esp, 0x00247CD8u); RECOMP_ABI_CALL(0x0005A070u, sub_0005A070); /* call 0x0005A070 */

loc_00247CD8: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00247D3D; /* je: equal / zero */

loc_00247CDF: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00247D3D; /* jle: less or equal (signed <=) */

loc_00247CE5: ;
    ecx = MEM32(esp + ebx * 4 + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00247D38; /* je: equal / zero */

loc_00247CED: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00247CFA; /* jne: not equal / not zero */

loc_00247CF2: ;
    ecx = MEM32(0x614FCC);
    goto loc_00247D05;

loc_00247CFA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00247D05; /* jne: not equal / not zero */

loc_00247CFF: ;
    ecx = MEM32(0x614FD0);

loc_00247D05: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00247D38; /* je: equal / zero */

loc_00247D0C: ;
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx);
    edx = MEM32(edx + 8);
    SET_LO8(edx, MEM8(edx + 2));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00247D38; /* je: equal / zero */

loc_00247D21: ;
    ecx = MEM32(ecx + 8);
    edx = ZX8(LO8(edx));
    edx = MEM32(ecx + edx * 4);
    ecx = ZX8(MEM8(edx + 3));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00247D68; /* je: equal / zero */

loc_00247D33: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00247D53; /* je: equal / zero */

loc_00247D38: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00247CE5; /* jl: less (signed <) */

loc_00247D3D: ;
    eax = MEM32(esp + 0x54);
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    MEM32(0x64D87C) = ecx;
    goto loc_00247D7C;

loc_00247D53: ;
    edx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x10);
    MEM32(edx) = 8;
    MEM32(0x64D87C) = eax;
    goto loc_00247D7C;

loc_00247D68: ;
    ecx = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x10);
    MEM32(ecx) = 0x10;
    MEM32(0x64D87C) = edx;

loc_00247D7C: ;
    MEM32(0x64D880) = edi;
    POP32(esp, edi);
    MEM32(0x64D884) = esi;
    POP32(esp, esi);
    MEM32(0x64D878) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00247DA0
 * Original: 0x00247DA0 - 0x0024801A (634 bytes, 165 insns)
 * Folder: scripts (between: 0x002476A0 and 0x00248650)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247DA0(void)
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

loc_00247DA0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    edx = MEM32(0x64D87C);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    ebx = MEM32(0x614FD0);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(edi + 0x18);
    eax = MEM32(eax + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D884);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x44);
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = eax;
    eax = MEM32(esi + 0x128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(0x614FCC);
    MEM32(esp + 0x14) = ecx;
    MEM32(0x64D884) = edi;
    MEM32(0x64D880) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00247E03; /* jne: not equal / not zero */

loc_00247DFF: ;
    ecx = edx;
    goto loc_00247E0C;

loc_00247E03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00247E0C; /* je: equal / zero */

loc_00247E0A: ;
    ecx = eax;

loc_00247E0C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00247FBD; /* je: equal / zero */

loc_00247E14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00247E1D; /* jne: not equal / not zero */

loc_00247E19: ;
    eax = edx;
    goto loc_00247E24;

loc_00247E1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00247E24; /* jne: not equal / not zero */

loc_00247E22: ;
    eax = ebx;

loc_00247E24: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00247E2Eu); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_00247E2E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = esi + 0xC58;
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x3C;
    ecx = ebx;
    PUSH32(esp, 0x00247E47u); RECOMP_ABI_CALL(0x000FB740u, sub_000FB740); /* call 0x000FB740 */

loc_00247E47: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00247E96; /* jne: not equal / not zero */

loc_00247E4E: ;
    eax = MEM32(esi + 0x128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00247E60; /* jne: not equal / not zero */

loc_00247E59: ;
    eax = MEM32(0x614FCC);
    goto loc_00247E6A;

loc_00247E60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00247E6A; /* jne: not equal / not zero */

loc_00247E65: ;
    eax = MEM32(0x614FD0);

loc_00247E6A: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00247E74u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_00247E74: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = eax;
    PUSH32(esp, ebx);
    eax = edi;
    MEM32(ebx + 4) = ecx;
    MEM32(ebx + 8) = edx;
    PUSH32(esp, 0x00247E93u); RECOMP_ABI_CALL(0x00212AF0u, sub_00212AF0); /* call 0x00212AF0 */

loc_00247E93: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00247E96: ;
    eax = MEM32(esi + 0x128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00247EA8; /* jne: not equal / not zero */

loc_00247EA1: ;
    eax = MEM32(0x614FCC);
    goto loc_00247EB2;

loc_00247EA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00247EB2; /* jne: not equal / not zero */

loc_00247EAD: ;
    eax = MEM32(0x614FD0);

loc_00247EB2: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00247EBCu); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_00247EBC: ;
    edx = esp + 0x3C;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0x00247ECBu); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_00247ECB: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x44); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x40); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x3C); /* subss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm4.f[0]; /* movss */
    eax = MEM32(esp + 0x20);
    MEM32(esi + 0x1F4) = eax;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    MEM32(esi + 0x1F8) = ecx;
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x28);
    MEM32(esi + 0x1FC) = edx;
    fp_push(MEMF(esi + 0x1F8)); /* fld float */
    fp_push(MEMF(esi + 0x1F4)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1F4)); /* fmul dword ptr [esi + 0x1f4] */
    MEMF(esi + 0x1F4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x1F8)); /* fmul dword ptr [esi + 0x1f8] */
    MEMF(esi + 0x1F8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3337C0)); /* fmul dword ptr [0x3337c0] */
    MEMF(esi + 0x1FC) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00247FF0;

loc_00247FBD: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x28);
    MEM32(esi + 0xC58) = eax;
    MEM32(esi + 0xC5C) = ecx;
    MEM32(esi + 0xC60) = edx;

loc_00247FF0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    POP32(esp, esi);
    MEM32(0x64D884) = ebp;
    POP32(esp, ebp);
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D880) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00248020
 * Original: 0x00248020 - 0x0024813D (285 bytes, 85 insns)
 * Folder: scripts (between: 0x002476A0 and 0x00248650)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248020(void)
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

loc_00248020: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x64D878);
    edx = MEM32(0x64D87C);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D884);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D880);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 0x18);
    ecx = MEM32(ecx + 4);
    esi = MEM32(ecx + 0x44);
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, edi);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    MEM32(0x64D878) = ecx;
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D884) = eax;
    MEM32(0x64D880) = eax;
    edi = 1;
    PUSH32(esp, 0x00248075u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_00248075: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi + 0x128);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00248099; /* jne: not equal / not zero */

loc_00248092: ;
    eax = MEM32(0x614FCC);
    goto loc_002480A3;

loc_00248099: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002480A3; /* jne: not equal / not zero */

loc_0024809E: ;
    eax = MEM32(0x614FD0);

loc_002480A3: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002480ADu); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_002480AD: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esi + 0x128);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002480D2; /* jne: not equal / not zero */

loc_002480CB: ;
    eax = MEM32(0x614FCC);
    goto loc_002480DC;

loc_002480D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002480DC; /* jne: not equal / not zero */

loc_002480D7: ;
    eax = MEM32(0x614FD0);

loc_002480DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024810E; /* je: equal / zero */

loc_002480E0: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x19C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00248110; /* jbe: below or equal (unsigned <=) */

loc_0024810E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00248110: ;
    edx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(edx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x64D880) = ebp;
    POP32(esp, ebp);
    MEM32(0x64D884) = ebx;
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = ecx;
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
 * sub_00248140
 * Original: 0x00248140 - 0x0024816C (44 bytes, 15 insns)
 * Folder: scripts (between: 0x002476A0 and 0x00248650)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00248140: ;
    ecx = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(ecx + 4);
    ecx = MEM32(edx + 0x44);
    if (CMP_EQ(_fa, _fb)) goto loc_00248161; /* je: equal / zero */

loc_00248150: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248161; /* je: equal / zero */

loc_00248156: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248161; /* je: equal / zero */

loc_0024815D: ;
    MEM8(eax + 0x10) = MEM8(eax + 0x10) | 8;
    _fa = (uint32_t)(MEM8(eax + 0x10)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00248161: ;
    MEM32(ecx + 0x178) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00248170
 * Original: 0x00248170 - 0x00248304 (404 bytes, 126 insns)
 * Folder: scripts (between: 0x002476A0 and 0x00248650)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00248170: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x64D87C);
    eax = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    edi = MEM32(0x64D880);
    MEM32(esp + 0x18) = edx;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx + 0x18);
    eax = MEM32(eax + 4);
    ebp = MEM32(eax + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = eax;
    eax = MEM32(0x34AC38);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 2);
    MEM32(esp + 0x3C) = esi;
    MEM32(esp + 0x38) = edi;
    MEM32(0x64D884) = ecx;
    MEM32(0x64D880) = ecx;
    PUSH32(esp, 0x002481D7u); RECOMP_ABI_CALL(0x0005A070u, sub_0005A070); /* call 0x0005A070 */

loc_002481D7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002481F1; /* jne: not equal / not zero */

loc_002481E2: ;
    eax = MEM32(esp + 0x68);
    MEM32(eax) = 0;
    goto loc_002482DC;

loc_002481F1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_002482D2; /* jle: less or equal (signed <=) */

loc_002481FF: ;
    eax = MEM32(0x614FD0);

loc_00248204: ;
    ebx = MEM32(esp + ecx * 4 + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002482B5; /* je: equal / zero */

loc_00248210: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024821D; /* jne: not equal / not zero */

loc_00248215: ;
    ecx = MEM32(0x614FCC);
    goto loc_00248226;

loc_0024821D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00248226; /* je: equal / zero */

loc_00248224: ;
    ecx = ebx;

loc_00248226: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00248259; /* je: equal / zero */

loc_0024822D: ;
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx);
    edx = MEM32(edx + 8);
    SET_LO8(edx, MEM8(edx + 2));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248259; /* je: equal / zero */

loc_00248242: ;
    ecx = MEM32(ecx + 8);
    edx = ZX8(LO8(edx));
    edx = MEM32(ecx + edx * 4);
    ecx = ZX8(MEM8(edx + 3));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002482B5; /* je: equal / zero */

loc_00248254: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002482B5; /* je: equal / zero */

loc_00248259: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00248266; /* jne: not equal / not zero */

loc_0024825E: ;
    edi = MEM32(0x614FCC);
    goto loc_0024826F;

loc_00248266: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024826F; /* je: equal / zero */

loc_0024826D: ;
    edi = ebx;

loc_0024826F: ;
    esi = ebp + 0x13C;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi;
    /* nop */

loc_00248280: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024828F; /* je: equal / zero */

loc_00248284: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00248280; /* jl: less (signed <) */

loc_0024828D: ;
    goto loc_00248294;

loc_0024828F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002482B5; /* jne: not equal / not zero */

loc_00248294: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi;

loc_00248298: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002482A9; /* je: equal / zero */

loc_0024829D: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00248298; /* jl: less (signed <) */

loc_002482A6: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002482A9: ;
    MEM32(ebp + ecx * 4 + 0x13C) = ebx;
    eax = MEM32(0x614FD0);

loc_002482B5: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x1C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00248204; /* jl: less (signed <) */

loc_002482CA: ;
    edi = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x24);

loc_002482D2: ;
    eax = MEM32(esp + 0x68);
    MEM32(eax) = 1;

loc_002482DC: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    MEM32(0x64D880) = edi;
    POP32(esp, edi);
    MEM32(0x64D884) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x64D878) = ecx;
    MEM32(0x64D87C) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00248310
 * Original: 0x00248310 - 0x002483D4 (196 bytes, 48 insns)
 * Folder: scripts (between: 0x002476A0 and 0x00248650)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00248310: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x64D87C);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D880);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx + 0x44);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D878);
    MEM32(0x64D878) = ecx;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = edx;
    MEM32(0x64D884) = eax;
    MEM32(0x64D880) = eax;
    PUSH32(esp, 0x0024835Fu); RECOMP_ABI_CALL(0x00103310u, sub_00103310); /* call 0x00103310 */

loc_0024835F: ;
    edx = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(edx + 0xC44)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    eax = MEM32(esp + 0x18);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(0x64D884) = edi;
    POP32(esp, edi);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(0x64D878) = ebp;
    POP32(esp, ebp);
    MEM32(esi + 4) = ecx;
    MEM32(0x64D880) = ebx;
    MEM32(esi + 8) = edx;
    MEM32(0x64D87C) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002483E0
 * Original: 0x002483E0 - 0x002484FD (285 bytes, 85 insns)
 * Folder: scripts (between: 0x002476A0 and 0x00248650)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002483E0(void)
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

loc_002483E0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x64D878);
    edx = MEM32(0x64D87C);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D884);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D880);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 0x18);
    ecx = MEM32(ecx + 4);
    esi = MEM32(ecx + 0x44);
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, edi);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    MEM32(0x64D878) = ecx;
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D884) = eax;
    MEM32(0x64D880) = eax;
    edi = 1;
    PUSH32(esp, 0x00248435u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_00248435: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi + 0x128);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00248459; /* jne: not equal / not zero */

loc_00248452: ;
    eax = MEM32(0x614FCC);
    goto loc_00248463;

loc_00248459: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00248463; /* jne: not equal / not zero */

loc_0024845E: ;
    eax = MEM32(0x614FD0);

loc_00248463: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0024846Du); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024846D: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esi + 0x128);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00248492; /* jne: not equal / not zero */

loc_0024848B: ;
    eax = MEM32(0x614FCC);
    goto loc_0024849C;

loc_00248492: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024849C; /* jne: not equal / not zero */

loc_00248497: ;
    eax = MEM32(0x614FD0);

loc_0024849C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002484CE; /* je: equal / zero */

loc_002484A0: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x1D4)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_002484D0; /* jbe: below or equal (unsigned <=) */

loc_002484CE: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002484D0: ;
    edx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(edx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x64D880) = ebp;
    POP32(esp, ebp);
    MEM32(0x64D884) = ebx;
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = ecx;
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
 * sub_00248500
 * Original: 0x00248500 - 0x0024864D (333 bytes, 100 insns)
 * Folder: scripts (between: 0x002476A0 and 0x00248650)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248500(void)
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

loc_00248500: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax + 0x18);
    ecx = MEM32(ecx + 4);
    edx = MEM32(0x64D87C);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D880);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x44);
    MEM32(0x64D878) = ecx;
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(esi + 0x128);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(esp + 0x10) = edx;
    MEM32(0x64D884) = eax;
    MEM32(0x64D880) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00248555; /* jne: not equal / not zero */

loc_0024854D: ;
    ecx = MEM32(0x614FCC);
    goto loc_00248560;

loc_00248555: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00248560; /* jne: not equal / not zero */

loc_0024855A: ;
    ecx = MEM32(0x614FD0);

loc_00248560: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00248623; /* je: equal / zero */

loc_00248568: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00248572u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_00248572: ;
    eax = MEM32(esi + 0x128);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00248587; /* jne: not equal / not zero */

loc_00248580: ;
    eax = MEM32(0x614FCC);
    goto loc_00248591;

loc_00248587: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00248591; /* jne: not equal / not zero */

loc_0024858C: ;
    eax = MEM32(0x614FD0);

loc_00248591: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024859Bu); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024859B: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(0x64D880) = ebx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEM32(0x64D878) = ebp;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEM32(0x64D884) = edi;
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
    fp_push(MEMF(esi + 0xC44)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 0 || g_fp_cmp == 1) /* fcompi */) goto loc_00248607; /* jae: above or equal (unsigned >=) */

loc_002485EC: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x10);
    MEM32(edx) = 0;
    MEM32(0x64D87C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00248607: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x10);
    MEM32(ecx) = 1;
    MEM32(0x64D87C) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00248623: ;
    eax = MEM32(esp + 0x30);
    MEM32(0x64D884) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x64D878) = ebp;
    POP32(esp, ebp);
    MEM32(0x64D880) = ebx;
    MEM32(eax) = 0;
    MEM32(0x64D87C) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
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
 * sub_00248650
 * Original: 0x00248650 - 0x002487B5 (357 bytes, 114 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00248650: ;
    eax = MEM32(0x64D870);
    ecx = MEM32(0x64D1F8);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ecx (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(0x3400FC);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0024873D; /* je: equal / zero */

loc_0024866C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 0x32000F94);
    eax = 0x493610;
    PUSH32(esp, 0x00248680u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00248680: ;
    edi = MEM32(0x64D33C);
    ebx = MEM32(0x64D3A4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248698; /* je: equal / zero */

loc_00248693: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024869C; /* je: equal / zero */

loc_00248698: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002486A8; /* je: equal / zero */

loc_0024869C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002486A8; /* jne: not equal / not zero */

loc_002486A1: ;
    ecx = 0x32000F94;
    goto loc_002486AF;

loc_002486A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002486CC; /* je: equal / zero */

loc_002486AF: ;
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
    PUSH32(esp, 0x002486C7u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_002486C7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002486D1;

loc_002486CC: ;
    eax = 0x32000F94;

loc_002486D1: ;
    esi = eax;
    PUSH32(esp, 0x32000F92);
    eax = 0x493610;
    MEM32(0x650980) = esi;
    PUSH32(esp, 0x002486E8u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_002486E8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002486F4; /* je: equal / zero */

loc_002486EF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002486F8; /* je: equal / zero */

loc_002486F4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248704; /* je: equal / zero */

loc_002486F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00248704; /* jne: not equal / not zero */

loc_002486FD: ;
    ecx = 0x32000F92;
    goto loc_0024870B;

loc_00248704: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024872F; /* je: equal / zero */

loc_0024870B: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00248723u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00248723: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(0x650984) = eax;
    POP32(esp, ebx);
    goto loc_00248743;

loc_0024872F: ;
    eax = 0x32000F92;
    POP32(esp, edi);
    MEM32(0x650984) = eax;
    POP32(esp, ebx);
    goto loc_00248743;

loc_0024873D: ;
    esi = MEM32(0x650980);

loc_00248743: ;
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D87C);
    edx = MEM32(0x64D880);
    MEM32(0x64D87C) = ecx;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), esi (32-bit) */
    MEM32(0x64D884) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00248783; /* je: equal / zero */

loc_00248765: ;
    MEM32(eax + 0x18) = esi;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00248783; /* jne: not equal / not zero */

loc_00248771: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248783; /* je: equal / zero */

loc_00248775: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248783; /* je: equal / zero */

loc_0024877C: ;
    MEM32(eax + 4) = 0xFFFFFFFFu;

loc_00248783: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_00248791; /* jne: not equal / not zero */

loc_0024878A: ;
    eax = MEM32(0x614FCC);
    goto loc_0024879D;

loc_00248791: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024879D; /* je: equal / zero */

loc_0024879B: ;
    eax = edx;

loc_0024879D: ;
    ecx = MEM32(0x650984);
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002487ACu); RECOMP_ABI_CALL(0x002566B0u, sub_002566B0); /* call 0x002566B0 */

loc_002487AC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x3E8;
    esp += 4; return; /* ret */

}

/**
 * sub_002487C0
 * Original: 0x002487C0 - 0x00248FBA (2042 bytes, 546 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002487C0(void)
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

loc_002487C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D878);
    ecx = MEM32(0x64D1F8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x44);
    eax = MEM32(0x64D870);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x34) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00248857; /* je: equal / zero */

loc_002487EB: ;
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 0x32000F95);
    eax = 0x493610;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002487FDu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_002487FD: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248813; /* je: equal / zero */

loc_0024880A: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024881D; /* je: equal / zero */

loc_00248813: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248829; /* je: equal / zero */

loc_0024881D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00248829; /* jne: not equal / not zero */

loc_00248822: ;
    ecx = 0x32000F95;
    goto loc_00248830;

loc_00248829: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024884D; /* je: equal / zero */

loc_00248830: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00248848u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00248848: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00248852;

loc_0024884D: ;
    eax = 0x32000F95;

loc_00248852: ;
    MEM32(0x65097C) = eax;

loc_00248857: ;
    edi = MEM32(0x64D880);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024888E; /* je: equal / zero */

loc_00248861: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024888E; /* je: equal / zero */

loc_00248868: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024888E; /* je: equal / zero */

loc_0024886F: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    eax = eax | 0x20004;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024887Eu); RECOMP_ABI_CALL(0x000702C0u, sub_000702C0); /* call 0x000702C0 */

loc_0024887E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00248888u); RECOMP_ABI_CALL(0x00070DD0u, sub_00070DD0); /* call 0x00070DD0 */

loc_00248888: ;
    edi = MEM32(0x64D880);

loc_0024888E: ;
    eax = MEM32(ebx + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002488FA; /* je: equal / zero */

loc_00248898: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    eax = MEM32(edi + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_002488CD; /* je: equal / zero */

loc_002488AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x9C); /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00248994; /* je: equal / zero */

loc_002488C5: ;
    eax = MEM32(eax + 4);
    goto loc_00248996;

loc_002488CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_002488DC; /* je: equal / zero */

loc_002488D7: ;
    eax = MEM32(eax + 4);
    goto loc_002488DE;

loc_002488DC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002488DE: ;
    eax = MEM32(eax + 0x24);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    goto loc_002489AD;

loc_002488FA: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(edi + 0xC);
    eax = esp + 0x24;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0xB4); /* subss */
    PUSH32(esp, eax);
    eax = esp + 0x18;
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024892Bu); RECOMP_ABI_CALL(0x000C3350u, sub_000C3350); /* call 0x000C3350 */

loc_0024892B: ;
    eax = MEM32(edi + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024893A; /* je: equal / zero */

loc_00248935: ;
    eax = MEM32(eax + 4);
    goto loc_0024893C;

loc_0024893A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024893C: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x20); /* divss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00248994; /* je: equal / zero */

loc_0024898F: ;
    eax = MEM32(eax + 4);
    goto loc_00248996;

loc_00248994: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00248996: ;
    eax = MEM32(eax + 0x24);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_002489AD: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_002489E6; /* je: equal / zero */

loc_002489B6: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002489E6; /* je: equal / zero */

loc_002489BD: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002489CE; /* je: equal / zero */

loc_002489C5: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002489CBu); RECOMP_ABI_CALL(0x0005B360u, sub_0005B360); /* call 0x0005B360 */

loc_002489CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002489CE: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    eax = eax & 0xFFBFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002489DDu); RECOMP_ABI_CALL(0x0001B920u, sub_0001B920); /* call 0x0001B920 */

loc_002489DD: ;
    edi = MEM32(0x64D880);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002489E6: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002489F2; /* je: equal / zero */

loc_002489ED: ;
    eax = MEM32(eax + 4);
    goto loc_002489F4;

loc_002489F2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002489F4: ;
    edx = MEM32(eax + 0x24);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(edx + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248A17; /* je: equal / zero */

loc_00248A06: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248A17; /* je: equal / zero */

loc_00248A0C: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248A17; /* je: equal / zero */

loc_00248A13: ;
    MEM8(eax + 0x14) = MEM8(eax + 0x14) | 0x20;
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00248A17: ;
    eax = MEM32(ebx + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248A2D; /* je: equal / zero */

loc_00248A21: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00248A2Au); RECOMP_ABI_CALL(0x0026D0F0u, sub_0026D0F0); /* call 0x0026D0F0 */

loc_00248A2A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00248A2D: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00248A39u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_00248A39: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    MEM32(ebx + 0x20) = ecx;
    MEM32(ebx + 0x24) = edx;
    MEM32(ebx + 0x28) = eax;
    MEM32(ebx + 0x50) = ecx;
    edx = MEM32(ebx + 0x24);
    MEM32(ebx + 0x54) = edx;
    eax = MEM32(ebx + 0x28);
    MEM32(ebx + 0x58) = eax;
    eax = MEM32(ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248ADA; /* je: equal / zero */

loc_00248A66: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00248A72; /* jne: not equal / not zero */

loc_00248A6B: ;
    eax = MEM32(0x614FCC);
    goto loc_00248A7C;

loc_00248A72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00248A7C; /* jne: not equal / not zero */

loc_00248A77: ;
    eax = MEM32(0x614FD0);

loc_00248A7C: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00248A86u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_00248A86: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xA4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xA8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    eax = MEM32(esp + 0x1C);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x34) = edx;
    MEM32(ebx + 0x38) = eax;
    MEM32(ebx + 0x3C) = ecx;

loc_00248ADA: ;
    _fa = (uint32_t)(MEM8(ebx + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 8), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00248BF4; /* jne: not equal / not zero */

loc_00248AE4: ;
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x90)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x88)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00248B32; /* jnp: not parity */

loc_00248B09: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00248B0Eu); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_00248B0E: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337E0); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_00248B32: ;
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x88)); /* movss */
    MEMF(ebx + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x90)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00248B8E; /* jnp: not parity */

loc_00248B65: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00248B6Au); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_00248B6A: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337E0); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_00248B8E: ;
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x88)); /* movss */
    MEMF(ebx + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x90)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00248BEA; /* jnp: not parity */

loc_00248BC1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00248BC6u); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_00248BC6: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337E0); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_00248BEA: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 0x3C); /* addss */
    MEMF(ebx + 0x3C) = xmm0.f[0]; /* movss */

loc_00248BF4: ;
    eax = MEM32(ebx + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    esi = MEM32(0x64D880);
    if (CMP_EQ(_fa, _fb)) goto loc_00248D19; /* je: equal / zero */

loc_00248C09: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00248DEA; /* jne: not equal / not zero */

loc_00248C12: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x20); /* subss */
    edx = MEM32(esi + 0xC);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x24); /* subss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x28); /* subss */
    eax = esp + 0x50;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00248C4Eu); RECOMP_ABI_CALL(0x000C37B0u, sub_000C37B0); /* call 0x000C37B0 */

loc_00248C4E: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    ecx = esp + 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00248C60u); RECOMP_ABI_CALL(0x000C3350u, sub_000C3350); /* call 0x000C3350 */

loc_00248C60: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    xmm3 = XMM_SCALAR(MEMF(0x333F68)); /* movss */
    MEM32(ebx + 0x44) = eax;
    MEM32(ebx + 0x48) = ecx;
    MEM32(ebx + 0x4C) = edx;
    eax = ecx;
    MEM32(ebx + 0x18) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x20); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 0x24); /* subss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x3C)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebx + 0x28); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 0x20); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x24)); /* movss */
    ecx = MEM32(esp + 0x18);
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x28)); /* movss */
    edx = MEM32(esp + 0x1C);
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x20);
    MEM32(ebx + 0xC) = ecx;
    MEM32(ebx + 0x10) = edx;
    MEM32(ebx + 0x14) = eax;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x8C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 0x14); /* addss */
    MEMF(ebx + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x64D90C); /* subss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */
    goto loc_00248DEA;

loc_00248D19: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xA0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 0x34); /* addss */
    xmm3 = XMM_SCALAR(MEMF(ebx + 0x20)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 0xA4)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ebx + 0x38); /* addss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 0xA8)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(ebx + 0x3C); /* addss */
    ecx = ebx + 0x34;
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x28)); /* movss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x8C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337A4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(ebx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00248DDB; /* jp: parity */

loc_00248DA6: ;
    fp_push(MEMF(ebx + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    fp_push(MEMF(ebx + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_push(MEMF(ebx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] * fp_top()); fp_pop(); /* fmulp st(3) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333A04)); /* fmul dword ptr [0x333a04] */
    MEMF(ebx + 0x8C) = (float)fp_top(); fp_pop(); /* fstp */

loc_00248DDB: ;
    xmm2 = XMM_SCALAR(MEMF(ebx + 0x8C)); /* movss */
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00248DEAu); RECOMP_ABI_CALL(0x0025D5F0u, sub_0025D5F0); /* call 0x0025D5F0 */

loc_00248DEA: ;
    eax = MEM32(ebx + 0xC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248EB7; /* je: equal / zero */

loc_00248DF8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    edi = MEM32(0x614FD0);
    ecx = MEM32(0x614FCC);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00248E60; /* jne: not equal / not zero */

loc_00248E5C: ;
    edx = ecx;
    goto loc_00248E69;

loc_00248E60: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    edx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00248E69; /* je: equal / zero */

loc_00248E67: ;
    edx = esi;

loc_00248E69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00248E72; /* jne: not equal / not zero */

loc_00248E6E: ;
    eax = ecx;
    goto loc_00248E79;

loc_00248E72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00248E79; /* jne: not equal / not zero */

loc_00248E77: ;
    eax = edi;

loc_00248E79: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00248EB7; /* je: equal / zero */

loc_00248E80: ;
    ecx = MEM32(eax + 0x14);
    ecx = MEM32(ecx);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248EB7; /* je: equal / zero */

loc_00248E8B: ;
    edi = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0xB (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00248EB7; /* jne: not equal / not zero */

loc_00248E92: ;
    PUSH32(esp, edx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00248EAEu); RECOMP_ABI_CALL(0x00098270u, sub_00098270); /* call 0x00098270 */

loc_00248EAE: ;
    esi = MEM32(0x64D880);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00248EB7: ;
    edi = ebx + 0x7C;
    MEM32(esp + 0x20) = 2;

loc_00248EC2: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248F01; /* je: equal / zero */

loc_00248EC7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi));
    PUSH32(esp, eax);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00248ED3u); RECOMP_ABI_CALL(0x0005B440u, sub_0005B440); /* call 0x0005B440 */

loc_00248ED3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248F01; /* je: equal / zero */

loc_00248EDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00248EE6; /* jne: not equal / not zero */

loc_00248EDF: ;
    eax = MEM32(0x614FCC);
    goto loc_00248EF0;

loc_00248EE6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00248EF0; /* jne: not equal / not zero */

loc_00248EEB: ;
    eax = MEM32(0x614FD0);

loc_00248EF0: ;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00248EF7u); RECOMP_ABI_CALL(0x00105790u, sub_00105790); /* call 0x00105790 */

loc_00248EF7: ;
    esi = MEM32(0x64D880);
    ebx = MEM32(esp + 0x34);

loc_00248F01: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = eax;
    if ((_fa != 0)) goto loc_00248EC2; /* jne: not equal / not zero */

loc_00248F0F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248F2D; /* je: equal / zero */

loc_00248F13: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248F2D; /* je: equal / zero */

loc_00248F1A: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248F2D; /* je: equal / zero */

loc_00248F20: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248F2D; /* je: equal / zero */

loc_00248F27: ;
    MEM16(eax + 0x10) = 0xFFFF;

loc_00248F2D: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00248F34u); RECOMP_ABI_CALL(0x001AF060u, sub_001AF060); /* call 0x001AF060 */

loc_00248F34: ;
    edi = MEM32(0x64D880);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00248F44u); RECOMP_ABI_CALL(0x001AEFA0u, sub_001AEFA0); /* call 0x001AEFA0 */

loc_00248F44: ;
    eax = MEM32(ebx + 0xBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248F66; /* je: equal / zero */

loc_00248F51: ;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x98);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00248F5Du); RECOMP_ABI_CALL(0x0026EF50u, sub_0026EF50); /* call 0x0026EF50 */

loc_00248F5D: ;
    edi = MEM32(0x64D880);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00248F66: ;
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D87C);
    edx = MEM32(eax + 0x20);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x65097C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(0x64D884) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00248FAE; /* je: equal / zero */

loc_00248F8A: ;
    MEM32(eax + 0x20) = ecx;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax + 0xC) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00248FAE; /* jne: not equal / not zero */

loc_00248F96: ;
    edx = MEM32(0x3400FC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248FAE; /* je: equal / zero */

loc_00248FA0: ;
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248FAE; /* je: equal / zero */

loc_00248FA7: ;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;

loc_00248FAE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x3E8;
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
 * sub_00248FC0
 * Original: 0x00248FC0 - 0x002490E0 (288 bytes, 90 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00248FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00248FC0: ;
    eax = MEM32(0x64D870);
    ecx = MEM32(0x64D1F8);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024903C; /* je: equal / zero */

loc_00248FD0: ;
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 0x32000F95);
    eax = 0x493610;
    PUSH32(esp, 0x00248FE2u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00248FE2: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00248FF8; /* je: equal / zero */

loc_00248FEF: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00249002; /* je: equal / zero */

loc_00248FF8: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024900E; /* je: equal / zero */

loc_00249002: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024900E; /* jne: not equal / not zero */

loc_00249007: ;
    ecx = 0x32000F95;
    goto loc_00249015;

loc_0024900E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00249032; /* je: equal / zero */

loc_00249015: ;
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
    PUSH32(esp, 0x0024902Du); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024902D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00249037;

loc_00249032: ;
    eax = 0x32000F95;

loc_00249037: ;
    MEM32(0x650978) = eax;

loc_0024903C: ;
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D87C);
    edx = MEM32(0x650978);
    PUSH32(esp, esi);
    esi = MEM32(0x64D880);
    MEM32(0x64D87C) = ecx;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), edx (32-bit) */
    PUSH32(esp, edi);
    MEM32(0x64D884) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_002490A3; /* je: equal / zero */

loc_00249066: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0024906Du); RECOMP_ABI_CALL(0x001AF060u, sub_001AF060); /* call 0x001AF060 */

loc_0024906D: ;
    edi = MEM32(0x64D880);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0024907Au); RECOMP_ABI_CALL(0x001AEFA0u, sub_001AEFA0); /* call 0x001AEFA0 */

loc_0024907A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002490D8; /* je: equal / zero */

loc_00249081: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002490D8; /* je: equal / zero */

loc_00249088: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002490D8; /* je: equal / zero */

loc_0024908E: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002490D8; /* je: equal / zero */

loc_00249095: ;
    POP32(esp, edi);
    MEM16(eax + 0x10) = 0;
    eax = 0x3E8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002490A3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x002490AAu); RECOMP_ABI_CALL(0x001AF060u, sub_001AF060); /* call 0x001AF060 */

loc_002490AA: ;
    edi = MEM32(0x64D880);
    PUSH32(esp, 1);
    PUSH32(esp, 0x002490B7u); RECOMP_ABI_CALL(0x001AEFA0u, sub_001AEFA0); /* call 0x001AEFA0 */

loc_002490B7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002490D8; /* je: equal / zero */

loc_002490BE: ;
    edi = MEM32(edi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002490D8; /* je: equal / zero */

loc_002490C5: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002490D8; /* je: equal / zero */

loc_002490CB: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002490D8; /* je: equal / zero */

loc_002490D2: ;
    MEM16(eax + 0x10) = 0xFFFF;

loc_002490D8: ;
    POP32(esp, edi);
    eax = 0x3E8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002490E0
 * Original: 0x002490E0 - 0x002494F3 (1043 bytes, 247 insns)
 * Folder: scripts (between: 0x00248FC0 and 0x0024A250)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002490E0(void)
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

loc_002490E0: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x64D87C);
    PUSH32(esp, ebx);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esi + 0x18);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x44);
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = eax;
    eax = MEM32(edi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 0x2C) = edx;
    MEM32(0x64D884) = esi;
    MEM32(0x64D880) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00249140; /* jne: not equal / not zero */

loc_00249139: ;
    eax = MEM32(0x614FCC);
    goto loc_0024914A;

loc_00249140: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024914A; /* jne: not equal / not zero */

loc_00249145: ;
    eax = MEM32(0x614FD0);

loc_0024914A: ;
    edx = esp + 0x70;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00249154u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_00249154: ;
    eax = MEM32(esp + 0x74);
    ecx = MEM32(esp + 0x78);
    edx = MEM32(esp + 0x7C);
    MEM32(esp + 0x68) = eax;
    eax = MEM32(edi + 0x8C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 0x68) = ecx;
    MEM32(esp + 0x6C) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00249181; /* jne: not equal / not zero */

loc_0024917A: ;
    eax = MEM32(0x614FCC);
    goto loc_0024918B;

loc_00249181: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024918B; /* jne: not equal / not zero */

loc_00249186: ;
    eax = MEM32(0x614FD0);

loc_0024918B: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x14);
    edx = edx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002491D2; /* je: equal / zero */

loc_00249199: ;
    eax = ecx;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002491C0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_002491BD: ;
    xmm0 = xmm1; /* movaps */

loc_002491C0: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_002491C8; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_002491C5: ;
    xmm0 = xmm2; /* movaps */

loc_002491C8: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337D8); /* mulss */
    goto loc_002491D7;

loc_002491D2: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */

loc_002491D7: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(edi + 0x9C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x94); /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    if ((_fca >= _fcb)) goto loc_00249206; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00249200: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_00249206: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ebp = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0x38) = fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x38);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002494B6; /* jge: greater or equal (signed >=) */

loc_00249224: ;
    fp_push(MEMD(0x333C48)); /* fld double */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    eax = edi + ebp * 4 + 0x1C;
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x14); /* divss */
    xmm2 = xmm0; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333930); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    /* nop */

loc_00249270: ;
    PUSH32(esp, 0x00249275u); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_00249275: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337E0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333884); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3337A0); /* subss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0024929Cu); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_0024929C: ;
    ebx = MEM32(esp + 0x60);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337E0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333884); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3337A0); /* subss */
    eax = MEM32(esp + 0x58);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x343DDC)); /* movss */
    ecx = MEM32(esp + 0x5C);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x40) = eax;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x48) = ebx;
    if (CMP_G(_fas, _fbs)) goto loc_00249309; /* jg: greater (signed >) */

loc_002492F1: ;
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00249309; /* jg: greater (signed >) */

loc_002492FB: ;
    ebx = ebx & 0x7FFFFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002493A1; /* jle: less or equal (signed <=) */

loc_00249309: ;
    xmm3 = XMM_SCALAR(MEMF(0x333920)); /* movss */
    _fca = xmm3.f[0]; _fcb = MEMF(esp + 0xC); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00249347; /* jnp: not parity */

loc_0024931C: ;
    PUSH32(esp, 0x00249321u); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_00249321: ;
    xmm0 = XMM_SCALAR(MEMF(0x333920)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x3337E0); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */

loc_00249347: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    goto loc_002493B3;

loc_002493A1: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */

loc_002493B3: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x64); /* addss */
    ebx = MEM32(0x34AC38);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    ecx = MEM32(esp + 0x80);
    PUSH32(esp, 0);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    PUSH32(esp, 0);
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x84)); /* movss */
    edx = MEM32(esp + 0x8C);
    PUSH32(esp, 0);
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x94);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    PUSH32(esp, 0xFFFFFFFFu);
    MEM32(esp + 0x6C) = ecx;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    MEM32(esp + 0x74) = edx;
    edx = esp + 0xA0;
    MEM32(esp + 0x78) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0xB4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00249461u); RECOMP_ABI_CALL(0x0007DBB0u, sub_0007DBB0); /* call 0x0007DBB0 */

loc_00249461: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00249499; /* je: equal / zero */

loc_00249468: ;
    ecx = MEM32(ebx + 0x278);
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024948A; /* jne: not equal / not zero */

loc_0024947C: ;
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0x00249488u); RECOMP_ABI_CALL(0x00249BC0u, sub_00249BC0); /* call 0x00249BC0 */

loc_00249488: ;
    goto loc_00249496;

loc_0024948A: ;
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0x00249496u); RECOMP_ABI_CALL(0x00249FB0u, sub_00249FB0); /* call 0x00249FB0 */

loc_00249496: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00249499: ;
    ebx = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x10);
    edx = MEM32(esp + 0x38);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00249270; /* jl: less (signed <) */

loc_002494B6: ;
    ecx = MEM32(esp + 0x90);
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x28);
    POP32(esp, edi);
    MEM32(ecx) = edx;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    MEM32(0x64D884) = eax;
    eax = MEM32(esp + 0x30);
    POP32(esp, ebp);
    MEM32(0x64D878) = ecx;
    MEM32(0x64D87C) = edx;
    MEM32(0x64D880) = eax;
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
 * sub_00249500
 * Original: 0x00249500 - 0x002495DA (218 bytes, 63 insns)
 * Folder: scripts (between: 0x00248FC0 and 0x0024A250)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00249500: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 4);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x44);
    MEM32(esp + 4) = eax;
    _fa = (uint32_t)(MEM32(ebx + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x98), 1 (32-bit) */
    PUSH32(esp, ebp);
    MEM32(esp + 0x38) = 2;
    MEM32(esp + 0x30) = 0x226;
    MEM32(esp + 0x34) = 5;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0024954A; /* jne: not equal / not zero */

loc_0024953C: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */

loc_0024954A: ;
    eax = MEM32(ebx + 0x80);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002495BD; /* jle: less or equal (signed <=) */

loc_00249556: ;
    PUSH32(esp, esi);
    edx = ebx + 0x1C;
    PUSH32(esp, edi);
    goto loc_00249560;

    /* nop */

loc_00249560: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024956E; /* jne: not equal / not zero */

loc_00249567: ;
    eax = MEM32(0x614FCC);
    goto loc_00249578;

loc_0024956E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00249578; /* jne: not equal / not zero */

loc_00249573: ;
    eax = MEM32(0x614FD0);

loc_00249578: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002495A7; /* je: equal / zero */

loc_0024957F: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002495A7; /* je: equal / zero */

loc_00249586: ;
    edi = MEM32(eax + 0x104);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002495A7; /* jae: above or equal (unsigned >=) */

loc_00249591: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x34);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xD;
    esi = esp + 0x10;
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
    MEM32(eax + 0x104) = MEM32(eax + 0x104) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x104)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002495A7: ;
    MEM32(edx) = 0;
    eax = MEM32(ebx + 0x80);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00249560; /* jl: less (signed <) */

loc_002495BB: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002495BD: ;
    POP32(esp, ebp);
    MEM32(ebx + 0x80) = 0;
    MEM32(ebx + 0x10) = 0;
    MEM32(ebx) = 0xFFFFFFFFu;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002495E0
 * Original: 0x002495E0 - 0x00249671 (145 bytes, 48 insns)
 * Folder: scripts (between: 0x00248FC0 and 0x0024A250)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002495E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002495E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 4);
    ecx = MEM32(ecx + 0x44);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_002495F7; /* jne: not equal / not zero */

loc_002495EF: ;
    esi = MEM32(0x614FCC);
    goto loc_00249604;

loc_002495F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    esi = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_00249604; /* je: equal / zero */

loc_00249602: ;
    esi = eax;

loc_00249604: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x1C;
    /* nop */

loc_00249610: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00249625; /* je: equal / zero */

loc_00249614: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00249610; /* jl: less (signed <) */

loc_0024961D: ;
    POP32(esp, esi);
    MEM32(edi) = 0;
    esp += 4; return; /* ret */

loc_00249625: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00249669; /* je: equal / zero */

loc_0024962A: ;
    MEM32(ecx + eax * 4 + 0x1C) = 0;
    esi = MEM32(ecx + 0x80);
    edx = MEM32(ecx + 0x10);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x80) = esi;
    edx = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00249669; /* jge: greater or equal (signed >=) */

loc_0024964C: ;
    eax = ecx + eax * 4 + 0x20;

loc_00249650: ;
    esi = MEM32(eax);
    MEM32(eax + -4) = esi;
    MEM32(eax) = 0;
    esi = MEM32(ecx + 0x80);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00249650; /* jl: less (signed <) */

loc_00249669: ;
    POP32(esp, esi);
    MEM32(edi) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00249680
 * Original: 0x00249680 - 0x0024993B (699 bytes, 167 insns)
 * Folder: scripts (between: 0x00248FC0 and 0x0024A250)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249680(void)
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

loc_00249680: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(esp + 4) = eax;
    eax = MEM32(0x64D87C);
    PUSH32(esp, ebx);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(edi + 0x18);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x44);
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = eax;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 0x14) = edx;
    MEM32(0x64D884) = edi;
    MEM32(0x64D880) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_002496DD; /* jne: not equal / not zero */

loc_002496D6: ;
    eax = MEM32(0x614FCC);
    goto loc_002496E7;

loc_002496DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002496E7; /* jne: not equal / not zero */

loc_002496E2: ;
    eax = MEM32(0x614FD0);

loc_002496E7: ;
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002496F1u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_002496F1: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x4C);
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x78); /* cvtsi2ss */
    edx = MEM32(esp + 0x50);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esi + 0x9C);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esp + 0x40) = edx;
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    if ((_fca >= _fcb)) goto loc_00249732; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0024972C: ;
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */

loc_00249732: ;
    fp_push(MEMF(esp + 0x74)); /* fld float */
    ebx = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0x20) = fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00249904; /* jge: greater or equal (signed >=) */

loc_00249750: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    ebp = esi + ebx * 4 + 0x1C;
    /* nop */

loc_00249760: ;
    PUSH32(esp, 0x00249765u); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_00249765: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337E0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333884); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3337A0); /* subss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0024978Cu); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_0024978C: ;
    edx = MEM32(esp + 0x4C);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337E0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333884); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3337A0); /* subss */
    eax = MEM32(esp + 0x44);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x343DDC)); /* movss */
    ecx = MEM32(esp + 0x48);
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esp + 0x74);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x30) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_002497F8; /* jg: greater (signed >) */

loc_002497E1: ;
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002497F8; /* jg: greater (signed >) */

loc_002497EB: ;
    eax = MEM32(esp + 0x4C);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00249873; /* jle: less or equal (signed <=) */

loc_002497F8: ;
    PUSH32(esp, 0x002497FDu); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_002497FD: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337E0); /* mulss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333A5C); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x333854); /* addss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    goto loc_00249885;

loc_00249873: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */

loc_00249885: ;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x38); /* addss */
    eax = edi;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if (CMP_NE(_fa, _fb)) goto loc_002498C6; /* jne: not equal / not zero */

loc_0024989E: ;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    ecx = esp + 0x50;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002498C4u); RECOMP_ABI_CALL(0x00249BC0u, sub_00249BC0); /* call 0x00249BC0 */

loc_002498C4: ;
    goto loc_002498EC;

loc_002498C6: ;
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    edx = esp + 0x5C;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002498ECu); RECOMP_ABI_CALL(0x00249FB0u, sub_00249FB0); /* call 0x00249FB0 */

loc_002498EC: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00249760; /* jl: less (signed <) */

loc_00249904: ;
    ecx = MEM32(esp + 0x70);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(ecx) = edx;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(0x64D884) = eax;
    eax = MEM32(esp + 0x18);
    POP32(esp, ebp);
    MEM32(0x64D878) = ecx;
    MEM32(0x64D87C) = edx;
    MEM32(0x64D880) = eax;
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
 * sub_002496B6
 * Original: 0x002496B6 - 0x0024993B (645 bytes, 152 insns)
 * Folder: scripts (between: 0x00248FC0 and 0x0024A250)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002496B6(void)
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

loc_002496B6: ;
    MEM32(0x64D87C) = eax;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 0x14) = edx;
    MEM32(0x64D884) = edi;
    MEM32(0x64D880) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_002496DD; /* jne: not equal / not zero */

loc_002496D6: ;
    eax = MEM32(0x614FCC);
    goto loc_002496E7;

loc_002496DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002496E7; /* jne: not equal / not zero */

loc_002496E2: ;
    eax = MEM32(0x614FD0);

loc_002496E7: ;
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002496F1u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_002496F1: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x4C);
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 0x78); /* cvtsi2ss */
    edx = MEM32(esp + 0x50);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esi + 0x9C);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esp + 0x40) = edx;
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    if ((_fca >= _fcb)) goto loc_00249732; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0024972C: ;
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */

loc_00249732: ;
    fp_push(MEMF(esp + 0x74)); /* fld float */
    ebx = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0x20) = fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00249904; /* jge: greater or equal (signed >=) */

loc_00249750: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    ebp = esi + ebx * 4 + 0x1C;
    /* nop */

loc_00249760: ;
    PUSH32(esp, 0x00249765u); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_00249765: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337E0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333884); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3337A0); /* subss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0024978Cu); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_0024978C: ;
    edx = MEM32(esp + 0x4C);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337E0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333884); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3337A0); /* subss */
    eax = MEM32(esp + 0x44);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x343DDC)); /* movss */
    ecx = MEM32(esp + 0x48);
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esp + 0x74);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x30) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_002497F8; /* jg: greater (signed >) */

loc_002497E1: ;
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002497F8; /* jg: greater (signed >) */

loc_002497EB: ;
    eax = MEM32(esp + 0x4C);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00249873; /* jle: less or equal (signed <=) */

loc_002497F8: ;
    PUSH32(esp, 0x002497FDu); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_002497FD: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337E0); /* mulss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333A5C); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x333854); /* addss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    goto loc_00249885;

loc_00249873: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */

loc_00249885: ;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x38); /* addss */
    eax = edi;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    if (CMP_NE(_fa, _fb)) goto loc_002498C6; /* jne: not equal / not zero */

loc_0024989E: ;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    ecx = esp + 0x50;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002498C4u); RECOMP_ABI_CALL(0x00249BC0u, sub_00249BC0); /* call 0x00249BC0 */

loc_002498C4: ;
    goto loc_002498EC;

loc_002498C6: ;
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    edx = esp + 0x5C;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x002498ECu); RECOMP_ABI_CALL(0x00249FB0u, sub_00249FB0); /* call 0x00249FB0 */

loc_002498EC: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00249760; /* jl: less (signed <) */

loc_00249904: ;
    ecx = MEM32(esp + 0x70);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(ecx) = edx;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(0x64D884) = eax;
    eax = MEM32(esp + 0x18);
    POP32(esp, ebp);
    MEM32(0x64D878) = ecx;
    MEM32(0x64D87C) = edx;
    MEM32(0x64D880) = eax;
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
 * sub_00249940
 * Original: 0x00249940 - 0x00249BB9 (633 bytes, 166 insns)
 * Folder: scripts (between: 0x00248FC0 and 0x0024A250)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249940(void)
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

loc_00249940: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(0x64D87C);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D884);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(edx + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x44);
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 8) = esi;
    MEM32(0x64D878) = ecx;
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D884) = eax;
    MEM32(0x64D880) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0024999D; /* jne: not equal / not zero */

loc_00249995: ;
    edx = MEM32(0x614FCC);
    goto loc_002499AA;

loc_0024999D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    edx = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_002499AA; /* je: equal / zero */

loc_002499A8: ;
    edx = edi;

loc_002499AA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;

loc_002499B1: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00249A10; /* je: equal / zero */

loc_002499B5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002499B1; /* jl: less (signed <) */

loc_002499BE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x30);
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = ecx;
    MEM32(ebx + 8) = edx;
    MEM32(0x64D884) = ebp;

loc_002499ED: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    POP32(esp, esi);
    MEM32(0x64D878) = edx;
    MEM32(0x64D87C) = eax;
    MEM32(0x64D880) = ecx;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00249A10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002499BE; /* je: equal / zero */

loc_00249A15: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 8);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 0x80);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x30);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x24) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_00249B96; /* jle: less or equal (signed <=) */

loc_00249A56: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00249B80; /* je: equal / zero */

loc_00249A60: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00249A6D; /* jne: not equal / not zero */

loc_00249A65: ;
    ecx = MEM32(0x614FCC);
    goto loc_00249A7A;

loc_00249A6D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    ecx = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_00249A7A; /* je: equal / zero */

loc_00249A78: ;
    ecx = edi;

loc_00249A7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00249A86; /* jne: not equal / not zero */

loc_00249A7F: ;
    eax = MEM32(0x614FCC);
    goto loc_00249A90;

loc_00249A86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00249A90; /* jne: not equal / not zero */

loc_00249A8B: ;
    eax = MEM32(0x614FD0);

loc_00249A90: ;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(eax + 0xC);
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x38); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x34); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00249B80; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00249AE6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00249AF2; /* jne: not equal / not zero */

loc_00249AEB: ;
    eax = MEM32(0x614FCC);
    goto loc_00249AFE;

loc_00249AF2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_00249AFE; /* je: equal / zero */

loc_00249AFC: ;
    eax = edi;

loc_00249AFE: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00249B08u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_00249B08: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00249B19; /* jne: not equal / not zero */

loc_00249B12: ;
    eax = MEM32(0x614FCC);
    goto loc_00249B23;

loc_00249B19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00249B23; /* jne: not equal / not zero */

loc_00249B1E: ;
    eax = MEM32(0x614FD0);

loc_00249B23: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00249B2Du); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_00249B2D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x38); /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x3C); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x40); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */

loc_00249B80: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x80);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00249A56; /* jl: less (signed <) */

loc_00249B96: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    MEM32(ebx) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(ebx + 4) = edx;
    MEM32(ebx + 8) = eax;
    MEM32(0x64D884) = ecx;
    goto loc_002499ED;

}

/**
 * sub_00249BC0
 * Original: 0x00249BC0 - 0x00249F04 (836 bytes, 225 insns)
 * Folder: scripts (between: 0x00248FC0 and 0x0024A250)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249BC0(void)
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

loc_00249BC0: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D1F8);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x64D884);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x64D87C);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(edi + 0x18);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ecx + 4);
    ebp = MEM32(eax + 0x44);
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = eax;
    _fa = (uint32_t)(MEM32(0x34493C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x34493C), esi (32-bit) */
    MEM32(esp + 0x14) = edx;
    MEM32(0x64D884) = edi;
    MEM32(0x64D880) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00249C98; /* je: equal / zero */

loc_00249C1C: ;
    PUSH32(esp, 0x3200181F);
    eax = 0x493610;
    PUSH32(esp, 0x00249C2Bu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00249C2B: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00249C41; /* je: equal / zero */

loc_00249C38: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00249C4B; /* je: equal / zero */

loc_00249C41: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00249C57; /* je: equal / zero */

loc_00249C4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00249C57; /* jne: not equal / not zero */

loc_00249C50: ;
    ecx = 0x3200181F;
    goto loc_00249C5E;

loc_00249C57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00249C86; /* je: equal / zero */

loc_00249C5E: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00249C76u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00249C76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x650974) = eax;
    MEM32(0x34493C) = esi;
    goto loc_00249C9D;

loc_00249C86: ;
    eax = 0x3200181F;
    MEM32(0x650974) = eax;
    MEM32(0x34493C) = esi;
    goto loc_00249C9D;

loc_00249C98: ;
    eax = MEM32(0x650974);

loc_00249C9D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    esi = MEM32(0x614FD0);
    edx = MEM32(0x614FCC);
    if (CMP_NE(_fa, _fb)) goto loc_00249CB2; /* jne: not equal / not zero */

loc_00249CAE: ;
    ecx = edx;
    goto loc_00249CBB;

loc_00249CB2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00249CBB; /* je: equal / zero */

loc_00249CB9: ;
    ecx = edi;

loc_00249CBB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00249CC4; /* jne: not equal / not zero */

loc_00249CC0: ;
    eax = edx;
    goto loc_00249CCB;

loc_00249CC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00249CCB; /* jne: not equal / not zero */

loc_00249CC9: ;
    eax = esi;

loc_00249CCB: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x78);
    PUSH32(esp, 0x00249CD5u); RECOMP_ABI_CALL(0x000FFCD0u, sub_000FFCD0); /* call 0x000FFCD0 */

loc_00249CD5: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00249ED5; /* je: equal / zero */

loc_00249CE2: ;
    PUSH32(esp, 0x00249CE7u); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_00249CE7: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337E0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333884); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3337A0); /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00249D0Eu); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_00249D0E: ;
    xmm2 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337E0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333884); /* mulss */
    eax = MEM32(esp + 0x30);
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x24) = eax;
    eax = esp + 0x24;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0x00249D5Eu); RECOMP_ABI_CALL(0x000FB690u, sub_000FB690); /* call 0x000FB690 */

loc_00249D5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00249D8E; /* je: equal / zero */

loc_00249D62: ;
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    goto loc_00249DD2;

loc_00249D8E: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_00249DD2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00249DF1; /* jne: not equal / not zero */

loc_00249DE9: ;
    esi = MEM32(0x614FCC);
    goto loc_00249DFE;

loc_00249DF1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    esi = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_00249DFE; /* je: equal / zero */

loc_00249DFC: ;
    esi = ebx;

loc_00249DFE: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00249E0Du); RECOMP_ABI_CALL(0x00102F50u, sub_00102F50); /* call 0x00102F50 */

loc_00249E0D: ;
    eax = MEM32(ebp + 0xA0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00249E20; /* je: equal / zero */

loc_00249E1A: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00249E29; /* je: equal / zero */

loc_00249E20: ;
    PUSH32(esp, 1);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    goto loc_00249E30;

loc_00249E29: ;
    PUSH32(esp, 0);
    eax = esp + 0x24;
    PUSH32(esp, eax);

loc_00249E30: ;
    eax = edi;
    PUSH32(esp, 0x00249E37u); RECOMP_ABI_CALL(0x00249F10u, sub_00249F10); /* call 0x00249F10 */

loc_00249E37: ;
    eax = MEM32(ebp + 0x98);
    ecx = MEM32(0x64D880);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 0x6C) = 2;
    MEM32(esp + 0x64) = 0x226;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00249E73; /* jne: not equal / not zero */

loc_00249E67: ;
    edx = MEM32(ebp + 0x94);
    ecx = MEM32(edx);
    MEM32(esp + 0x40) = ecx;

loc_00249E73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00249E86; /* je: equal / zero */

loc_00249E77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00249E8E; /* jne: not equal / not zero */

loc_00249E7C: ;
    MEM32(esp + 0x68) = 3;
    goto loc_00249E8E;

loc_00249E86: ;
    MEM32(esp + 0x68) = 4;

loc_00249E8E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00249E9B; /* jne: not equal / not zero */

loc_00249E93: ;
    ebx = MEM32(0x614FCC);
    goto loc_00249EA6;

loc_00249E9B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00249EA6; /* jne: not equal / not zero */

loc_00249EA0: ;
    ebx = MEM32(0x614FD0);

loc_00249EA6: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00249ED5; /* je: equal / zero */

loc_00249EAD: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00249ED5; /* je: equal / zero */

loc_00249EB4: ;
    edi = MEM32(eax + 0x104);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00249ED5; /* jae: above or equal (unsigned >=) */

loc_00249EBF: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x34);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xD;
    esi = esp + 0x3C;
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
    MEM32(eax + 0x104) = MEM32(eax + 0x104) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x104)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00249ED5: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x64D884) = edx;
    edx = MEM32(esp + 0x14);
    POP32(esp, ebp);
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D880) = edx;
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
 * sub_00249F10
 * Original: 0x00249F10 - 0x00249FA5 (149 bytes, 53 insns)
 * Folder: scripts (between: 0x00248FC0 and 0x0024A250)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00249F10: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 0x44);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x80);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x19 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00249F9B; /* je: equal / zero */

loc_00249F2A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00249F38; /* jne: not equal / not zero */

loc_00249F30: ;
    edi = MEM32(0x614FCC);
    goto loc_00249F45;

loc_00249F38: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    edi = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_00249F45; /* je: equal / zero */

loc_00249F43: ;
    edi = ebx;

loc_00249F45: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax + 0x1C;
    /* nop */

loc_00249F50: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00249F5F; /* je: equal / zero */

loc_00249F54: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x19 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00249F50; /* jl: less (signed <) */

loc_00249F5D: ;
    goto loc_00249F64;

loc_00249F5F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00249F90; /* jne: not equal / not zero */

loc_00249F64: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + esi * 4 + 0x1C) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00249F78; /* jne: not equal / not zero */

loc_00249F70: ;
    ecx = MEM32(eax + 0x80);
    MEM32(eax) = ecx;

loc_00249F78: ;
    ecx = MEM32(eax + 0x80);
    POP32(esp, edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x80) = ecx;
    POP32(esp, esi);
    MEM32(ebp) = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00249F90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = 0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00249F9B: ;
    POP32(esp, esi);
    MEM32(ebp) = 0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00249FB0
 * Original: 0x00249FB0 - 0x0024A248 (664 bytes, 174 insns)
 * Folder: scripts (between: 0x00248FC0 and 0x0024A250)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249FB0(void)
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

loc_00249FB0: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x64D880);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(0x64D884);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(0x64D878);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(eax + 0x18);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x44);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(0x64D87C);
    MEM32(0x64D878) = ecx;
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x34AC3C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x614FD0);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(0x614FCC);
    MEM32(0x64D884) = eax;
    MEM32(0x64D880) = eax;
    eax = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0024A02E; /* je: equal / zero */

loc_0024A018: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A021; /* jne: not equal / not zero */

loc_0024A01D: ;
    eax = edx;
    goto loc_0024A028;

loc_0024A021: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A028; /* jne: not equal / not zero */

loc_0024A026: ;
    eax = edi;

loc_0024A028: ;
    eax = MEM32(eax + 0x18);
    ecx = MEM32(eax + 4);

loc_0024A02E: ;
    ecx = MEM32(ecx + 0x44);
    _fa = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x40), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A050; /* jne: not equal / not zero */

loc_0024A037: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A040; /* jne: not equal / not zero */

loc_0024A03C: ;
    edi = edx;
    goto loc_0024A047;

loc_0024A040: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024A047; /* je: equal / zero */

loc_0024A045: ;
    edi = ebx;

loc_0024A047: ;
    esi = MEM32(esp + 0x70);
    PUSH32(esp, 0x0024A050u); RECOMP_ABI_CALL(0x001022C0u, sub_001022C0); /* call 0x001022C0 */

loc_0024A050: ;
    PUSH32(esp, 0x0024A055u); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_0024A055: ;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337E0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333884); /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3337A0); /* subss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0024A07Cu); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_0024A07C: ;
    xmm2 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 0x2C);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337E0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333884); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x34);
    MEM32(esp + 0x24) = eax;
    eax = esp + 0x20;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0x0024A0CCu); RECOMP_ABI_CALL(0x000FB690u, sub_000FB690); /* call 0x000FB690 */

loc_0024A0CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024A0FC; /* je: equal / zero */

loc_0024A0D0: ;
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x34);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;
    goto loc_0024A140;

loc_0024A0FC: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_0024A140: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0024A15F; /* jne: not equal / not zero */

loc_0024A157: ;
    esi = MEM32(0x614FCC);
    goto loc_0024A16C;

loc_0024A15F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    esi = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024A16C; /* je: equal / zero */

loc_0024A16A: ;
    esi = ebx;

loc_0024A16C: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024A17Bu); RECOMP_ABI_CALL(0x00102F50u, sub_00102F50); /* call 0x00102F50 */

loc_0024A17B: ;
    eax = MEM32(ebp + 0x98);
    ecx = MEM32(0x64D880);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 0x68) = 2;
    MEM32(esp + 0x60) = 0x226;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0024A1B7; /* jne: not equal / not zero */

loc_0024A1AB: ;
    edx = MEM32(ebp + 0x94);
    ecx = MEM32(edx);
    MEM32(esp + 0x3C) = ecx;

loc_0024A1B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024A1CA; /* je: equal / zero */

loc_0024A1BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A1D2; /* jne: not equal / not zero */

loc_0024A1C0: ;
    MEM32(esp + 0x64) = 3;
    goto loc_0024A1D2;

loc_0024A1CA: ;
    MEM32(esp + 0x64) = 4;

loc_0024A1D2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A1DF; /* jne: not equal / not zero */

loc_0024A1D7: ;
    ebx = MEM32(0x614FCC);
    goto loc_0024A1EA;

loc_0024A1DF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A1EA; /* jne: not equal / not zero */

loc_0024A1E4: ;
    ebx = MEM32(0x614FD0);

loc_0024A1EA: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024A219; /* je: equal / zero */

loc_0024A1F1: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024A219; /* je: equal / zero */

loc_0024A1F8: ;
    edi = MEM32(eax + 0x104);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0024A219; /* jae: above or equal (unsigned >=) */

loc_0024A203: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x34);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xD;
    esi = esp + 0x38;
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
    MEM32(eax + 0x104) = MEM32(eax + 0x104) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x104)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0024A219: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x64D884) = edx;
    edx = MEM32(esp + 0x14);
    POP32(esp, ebp);
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D880) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0024A250
 * Original: 0x0024A250 - 0x0024A4ED (669 bytes, 174 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024A250: ;
    ecx = MEM32(0x64D880);
    eax = MEM32(0x64D878);
    edx = MEM32(ecx + 0x18);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x44);
    MEM8(edx + 0x2C) = 0x64;
    MEM32(edi + 0x58) = 0;
    ebp = 2;
    goto loc_0024A280;

    /* nop */

loc_0024A280: ;
    ecx = MEM32(edi + 0x58);
    eax = MEM32(edi + ecx * 4 + 0xE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A296; /* jne: not equal / not zero */

loc_0024A28F: ;
    eax = MEM32(0x614FCC);
    goto loc_0024A29F;

loc_0024A296: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A29F; /* jne: not equal / not zero */

loc_0024A29A: ;
    eax = MEM32(0x614FD0);

loc_0024A29F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024A4AD; /* je: equal / zero */

loc_0024A2A7: ;
    MEM32(edi + ecx * 4 + 0x110) = 0;
    eax = MEM32(edi + 0x58);
    _fa = (uint32_t)(MEM32(edi + eax * 4 + 0x110)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax * 4 + 0x110), ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0024A312; /* jge: greater or equal (signed >=) */

loc_0024A2BE: ;
    edi = edi;

loc_0024A2C0: ;
    eax = MEM32(edi + 0x58);
    ecx = MEM32(edi + 0x60);
    esi = MEM32(edi + eax * 4 + 0x110);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edx = (uint32_t)(int32_t)SMEM16(0x34191A);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    ecx = MEM32(ecx + edi + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A2ED; /* jne: not equal / not zero */

loc_0024A2E5: ;
    ecx = MEM32(0x614FCC);
    goto loc_0024A2F7;

loc_0024A2ED: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A2F7; /* jne: not equal / not zero */

loc_0024A2F1: ;
    ecx = MEM32(0x614FD0);

loc_0024A2F7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024A312; /* je: equal / zero */

loc_0024A2FB: ;
    MEM32(edi + eax * 4 + 0x110) = MEM32(edi + eax * 4 + 0x110) + 1;
    _fa = (uint32_t)(MEM32(edi + eax * 4 + 0x110)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi + 0x58);
    _fa = (uint32_t)(MEM32(edi + eax * 4 + 0x110)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax * 4 + 0x110), ebp (32-bit) */
    /* nop */
    if (CMP_L(_fas, _fbs)) goto loc_0024A2C0; /* jl: less (signed <) */

loc_0024A312: ;
    ecx = MEM32(edi + 0x58);
    eax = MEM32(edi + ecx * 4 + 0xE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A328; /* jne: not equal / not zero */

loc_0024A321: ;
    eax = MEM32(0x614FCC);
    goto loc_0024A331;

loc_0024A328: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A331; /* jne: not equal / not zero */

loc_0024A32C: ;
    eax = MEM32(0x614FD0);

loc_0024A331: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0024A33Bu); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024A33B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3337A0); /* addss */
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    xmm0 = XMM_SCALAR(MEMF(0x333920)); /* movss */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x74) = eax;
    MEM32(esp + 0x78) = ecx;
    MEM32(esp + 0x7C) = edx;
    edx = MEM32(0x64D880);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x70;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0024A3ADu); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0024A3AD: ;
    ecx = MEM32(0x34AC38);
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x298) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x298;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024A3C8u); RECOMP_ABI_CALL(0x00080200u, sub_00080200); /* call 0x00080200 */

loc_0024A3C8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024A49B; /* je: equal / zero */

loc_0024A3D3: ;
    eax = MEM32(0x34AC38);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x2DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x2DC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0024A3F6; /* jae: above or equal (unsigned >=) */

loc_0024A3E0: ;
    edx = esi + esi * 2;
    eax = MEM32(eax + edx * 4 + 0x2E8);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0024A3F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024A3EEu); } /* indirect call */
    }

loc_0024A3F1: ;
    eax = MEM32(0x34AC38);

loc_0024A3F6: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x34;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    PUSH32(esp, ecx);
    ebx = eax + 0x298;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0024A423u); RECOMP_ABI_CALL(0x000808B0u, sub_000808B0); /* call 0x000808B0 */

loc_0024A423: ;
    edx = MEM32(0x34AC38);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x298) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x298;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ebx = esp + 0x48;
    eax = esi;
    PUSH32(esp, 0x0024A43Du); RECOMP_ABI_CALL(0x000802D0u, sub_000802D0); /* call 0x000802D0 */

loc_0024A43D: ;
    ecx = MEM32(0x34AC38);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x298) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x298;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x64) = eax;
    PUSH32(esp, ecx);
    ebx = esp + 0x54;
    eax = esi;
    PUSH32(esp, 0x0024A45Fu); RECOMP_ABI_CALL(0x000802D0u, sub_000802D0); /* call 0x000802D0 */

loc_0024A45F: ;
    eax = (uint32_t)(int32_t)SMEM16(0x3418FA);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0x58));
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    edx = MEM32(esp + 0x54);
    MEMF(eax + edi + 0xB8) = xmm0.f[0]; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(0x3418FA);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edi + 0x58));
    MEM32(esp + 0x6C) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    MEMF(ecx + edi + 0x140) = xmm0.f[0]; /* movss */

loc_0024A49B: ;
    ecx = MEM32(edi + 0x58);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    MEM32(edi + 0x58) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0024A280; /* jl: less (signed <) */

loc_0024A4AD: ;
    edx = MEM32(0x64D880);
    eax = MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024A4D8; /* je: equal / zero */

loc_0024A4BA: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024A4D8; /* je: equal / zero */

loc_0024A4C1: ;
    eax = MEM32(eax);
    eax = MEM32(eax);
    MEM32(edi + 0x138) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x3E8;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0024A4D8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x138) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x3E8;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0024A4F0
 * Original: 0x0024A4F0 - 0x0024A96C (1148 bytes, 326 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0024A4F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0024A4F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D878);
    ecx = MEM32(0x64D1F8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x44);
    eax = MEM32(0x64D870);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0024A58E; /* je: equal / zero */

loc_0024A515: ;
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 0xCC000431u);
    eax = 0x493610;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024A527u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024A527: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024A53D; /* je: equal / zero */

loc_0024A534: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024A547; /* je: equal / zero */

loc_0024A53D: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024A553; /* je: equal / zero */

loc_0024A547: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A553; /* jne: not equal / not zero */

loc_0024A54C: ;
    ecx = 0xCC000431u;
    goto loc_0024A55A;

loc_0024A553: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024A57F; /* je: equal / zero */

loc_0024A55A: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024A572u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024A572: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x650970) = esi;
    goto loc_0024A594;

loc_0024A57F: ;
    eax = 0xCC000431u;
    esi = eax;
    MEM32(0x650970) = esi;
    goto loc_0024A594;

loc_0024A58E: ;
    esi = MEM32(0x650970);

loc_0024A594: ;
    eax = MEM32(ebp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0024A95F; /* jle: less or equal (signed <=) */

loc_0024A5A7: ;
    eax = ebp + 0x110;
    MEM32(esp + 0x10) = eax;

loc_0024A5B1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    eax = MEM32(0x614FCC);
    edi = MEM32(0x614FD0);
    /* nop */
    if (CMP_NE(_fa, _fb)) goto loc_0024A5C6; /* jne: not equal / not zero */

loc_0024A5C2: ;
    ecx = eax;
    goto loc_0024A5CF;

loc_0024A5C6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0024A5CF; /* je: equal / zero */

loc_0024A5CD: ;
    ecx = esi;

loc_0024A5CF: ;
    edx = MEM32(esp + 0x10);
    edx = MEM32(edx + -44);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024A5E4; /* je: equal / zero */

loc_0024A5DB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0024A5E4; /* je: equal / zero */

loc_0024A5E2: ;
    eax = edx;

loc_0024A5E4: ;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(eax + 0xC);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x34); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(0x333914)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024A940; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0024A627: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    MEM32(esp + 0x1C) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0024A63B; /* jne: not equal / not zero */

loc_0024A634: ;
    eax = MEM32(0x614FCC);
    goto loc_0024A647;

loc_0024A63B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024A647; /* je: equal / zero */

loc_0024A645: ;
    eax = edx;

loc_0024A647: ;
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024A651u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024A651: ;
    eax = MEM32(esp + 0x4C);
    edx = MEM32(esp + 0x48);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(0x650970);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 0x20) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0024A675; /* jne: not equal / not zero */

loc_0024A66E: ;
    eax = MEM32(0x614FCC);
    goto loc_0024A67F;

loc_0024A675: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A67F; /* jne: not equal / not zero */

loc_0024A67A: ;
    eax = MEM32(0x614FD0);

loc_0024A67F: ;
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024A689u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024A689: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x3337A0); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x58) = xmm2.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_0024A932; /* jle: less or equal (signed <=) */

loc_0024A6AE: ;
    esi = MEM32(0x64D880);

loc_0024A6B4: ;
    eax = (uint32_t)(int32_t)SMEM16(0x3418FA);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x14));
    xmm1 = XMM_SCALAR(MEMF(eax + ebp + 0x140)); /* movss */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xB8); /* subss */
    edx = 1;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEM32(esp + 0x18) = edx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024A6F1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0024A6E8: ;
    edx = 2;
    MEM32(esp + 0x18) = edx;

loc_0024A6F1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024A704; /* je: equal / zero */

loc_0024A6F5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx;
    MEM32(esp + 0x18) = edx;

loc_0024A704: ;
    eax = MEM32(ebp + 0x60);
    edi = MEM32(esp + 0x14);
    ecx = (uint32_t)(int32_t)SMEM16(0x34191A);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = MEM32(eax + ebp + 0x64);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    edx = MEM32(ebp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0024A7FE; /* je: equal / zero */

loc_0024A72A: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = MEM32(edx + ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A743; /* jne: not equal / not zero */

loc_0024A73B: ;
    ecx = MEM32(0x614FCC);
    goto loc_0024A74E;

loc_0024A743: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A74E; /* jne: not equal / not zero */

loc_0024A748: ;
    ecx = MEM32(0x614FD0);

loc_0024A74E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A917; /* jne: not equal / not zero */

loc_0024A756: ;
    xmm1 = XMM_SCALAR(MEMF(0x3339F4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024A837; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0024A767: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A774; /* jne: not equal / not zero */

loc_0024A76C: ;
    ecx = MEM32(0x614FCC);
    goto loc_0024A781;

loc_0024A774: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    ecx = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024A781; /* je: equal / zero */

loc_0024A77F: ;
    ecx = eax;

loc_0024A781: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(MEM8(ecx + 0x28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x28), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024A7A0; /* je: equal / zero */

loc_0024A78A: ;
    edx = MEM32(ebp + 0x138);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024A79Du); RECOMP_ABI_CALL(0x001EAA10u, sub_001EAA10); /* call 0x001EAA10 */

loc_0024A79D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024A7A0: ;
    eax = MEM32(ebp + 0x60);
    ecx = (uint32_t)(int32_t)SMEM16(0x34191A);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = MEM32(eax + ebp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0024A7EB; /* jne: not equal / not zero */

loc_0024A7DD: ;
    eax = MEM32(0x614FCC);
    esi = esp + 0x2C;
    goto loc_0024A904;

loc_0024A7EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A7F5; /* jne: not equal / not zero */

loc_0024A7F0: ;
    eax = MEM32(0x614FD0);

loc_0024A7F5: ;
    esi = esp + 0x2C;
    goto loc_0024A904;

loc_0024A7FE: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = MEM32(edx + ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A817; /* jne: not equal / not zero */

loc_0024A80F: ;
    ecx = MEM32(0x614FCC);
    goto loc_0024A822;

loc_0024A817: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A822; /* jne: not equal / not zero */

loc_0024A81C: ;
    ecx = MEM32(0x614FD0);

loc_0024A822: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A917; /* jne: not equal / not zero */

loc_0024A82A: ;
    xmm0 = XMM_SCALAR(MEMF(0x3339F4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0024A879; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0024A837: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A844; /* jne: not equal / not zero */

loc_0024A83C: ;
    ecx = MEM32(0x614FCC);
    goto loc_0024A851;

loc_0024A844: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    ecx = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024A851; /* je: equal / zero */

loc_0024A84F: ;
    ecx = eax;

loc_0024A851: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(MEM8(ecx + 0x28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x28), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024A917; /* jne: not equal / not zero */

loc_0024A85E: ;
    edx = MEM32(ebp + 0x138);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024A871u); RECOMP_ABI_CALL(0x001EAA10u, sub_001EAA10); /* call 0x001EAA10 */

loc_0024A871: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0024A917;

loc_0024A879: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A886; /* jne: not equal / not zero */

loc_0024A87E: ;
    ecx = MEM32(0x614FCC);
    goto loc_0024A893;

loc_0024A886: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    ecx = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024A893; /* je: equal / zero */

loc_0024A891: ;
    ecx = eax;

loc_0024A893: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(MEM8(ecx + 0x28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x28), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024A8B2; /* je: equal / zero */

loc_0024A89C: ;
    edx = MEM32(ebp + 0x138);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024A8AFu); RECOMP_ABI_CALL(0x001EAA10u, sub_001EAA10); /* call 0x001EAA10 */

loc_0024A8AF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024A8B2: ;
    eax = MEM32(ebp + 0x60);
    ecx = (uint32_t)(int32_t)SMEM16(0x34191A);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = MEM32(eax + ebp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0024A8F6; /* jne: not equal / not zero */

loc_0024A8EF: ;
    eax = MEM32(0x614FCC);
    goto loc_0024A900;

loc_0024A8F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A900; /* jne: not equal / not zero */

loc_0024A8FB: ;
    eax = MEM32(0x614FD0);

loc_0024A900: ;
    esi = esp + 0x38;

loc_0024A904: ;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024A90Bu); RECOMP_ABI_CALL(0x001022C0u, sub_001022C0); /* call 0x001022C0 */

loc_0024A90B: ;
    esi = MEM32(0x64D880);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */

loc_0024A917: ;
    edi = MEM32(esp + 0x1C);
    edi = edi | MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x1C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0024A6B4; /* jl: less (signed <) */

loc_0024A932: ;
    esi = MEM32(0x650970);
    goto loc_0024A940;

    /* nop */

loc_0024A940: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    ecx = MEM32(ebp + 0x58);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0024A5B1; /* jl: less (signed <) */

loc_0024A95F: ;
    POP32(esp, edi);
    eax = 0x3E8;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0024A970
 * Original: 0x0024A970 - 0x0024AC36 (710 bytes, 203 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024A970: ;
    eax = MEM32(0x64D878);
    ecx = MEM32(0x64D1F8);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x44);
    eax = MEM32(0x64D870);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ecx (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0024AA6A; /* je: equal / zero */

loc_0024A993: ;
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 0xA000554);
    eax = 0x493610;
    PUSH32(esp, 0x0024A9A5u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024A9A5: ;
    esi = MEM32(0x64D33C);
    edi = MEM32(0x64D3A4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024A9BD; /* je: equal / zero */

loc_0024A9B8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024A9C7; /* je: equal / zero */

loc_0024A9BD: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024A9D3; /* je: equal / zero */

loc_0024A9C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024A9D3; /* jne: not equal / not zero */

loc_0024A9CC: ;
    ecx = 0xA000554;
    goto loc_0024A9DA;

loc_0024A9D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024A9F7; /* je: equal / zero */

loc_0024A9DA: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024A9F2u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024A9F2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0024A9FC;

loc_0024A9F7: ;
    eax = 0xA000554;

loc_0024A9FC: ;
    ebp = eax;
    PUSH32(esp, 0xA000559);
    eax = 0x493610;
    MEM32(0x65096C) = ebp;
    PUSH32(esp, 0x0024AA13u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024AA13: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AA1F; /* je: equal / zero */

loc_0024AA1A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AA29; /* je: equal / zero */

loc_0024AA1F: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AA35; /* je: equal / zero */

loc_0024AA29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024AA35; /* jne: not equal / not zero */

loc_0024AA2E: ;
    ecx = 0xA000559;
    goto loc_0024AA3C;

loc_0024AA35: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024AA5E; /* je: equal / zero */

loc_0024AA3C: ;
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
    PUSH32(esp, 0x0024AA54u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024AA54: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x650968) = eax;
    goto loc_0024AA70;

loc_0024AA5E: ;
    eax = 0xA000559;
    MEM32(0x650968) = eax;
    goto loc_0024AA70;

loc_0024AA6A: ;
    ebp = MEM32(0x65096C);

loc_0024AA70: ;
    edx = MEM32(0x64D880);
    eax = MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AC29; /* je: equal / zero */

loc_0024AA81: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AC29; /* je: equal / zero */

loc_0024AA8C: ;
    ecx = MEM32(eax + 0x104);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AC29; /* je: equal / zero */

loc_0024AA9A: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x64D90C)); /* movss */
    MEM32(esp + 0x10) = 0;

loc_0024AAB2: ;
    eax = MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024AABD; /* jne: not equal / not zero */

loc_0024AAB9: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0024AACA;

loc_0024AABD: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AACA; /* je: equal / zero */

loc_0024AAC4: ;
    ecx = MEM32(ecx + 0x104);

loc_0024AACA: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0024AC29; /* jge: greater or equal (signed >=) */

loc_0024AAD4: ;
    ecx = MEM32(eax + 0x14);
    eax = MEM32(ecx + 0x104);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0024AAEF; /* jle: less or equal (signed <=) */

loc_0024AAE1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x104) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0024AAFB;

loc_0024AAEF: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x30) = 0;

loc_0024AAFB: ;
    esi = eax;
    ecx = 0xD;
    edi = esp + 0x14;
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
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AC15; /* je: equal / zero */

loc_0024AB15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024ABB4; /* je: equal / zero */

loc_0024AB1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AB84; /* je: equal / zero */

loc_0024AB23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024AC15; /* jne: not equal / not zero */

loc_0024AB2C: ;
    ecx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xCE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024AB78; /* jne: not equal / not zero */

loc_0024AB38: ;
    eax = MEM32(ebx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AB45; /* je: equal / zero */

loc_0024AB40: ;
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x20), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0024AB78; /* jge: greater or equal (signed >=) */

loc_0024AB45: ;
    eax = MEM32(ebx + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    edx = ebp;
    esi = 2;
    MEM32(ebx + 0x20) = eax;
    MEMF(ebx + 0x48) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x0024AB64u); RECOMP_ABI_CALL(0x002560A0u, sub_002560A0); /* call 0x002560A0 */

loc_0024AB64: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(0x64D880);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    goto loc_0024AAB2;

loc_0024AB78: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xCF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024AC15; /* jne: not equal / not zero */

loc_0024AB84: ;
    edx = MEM32(0x650968);
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    esi = 2;
    MEMF(ebx + 0x48) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0x0024ABA0u); RECOMP_ABI_CALL(0x002560A0u, sub_002560A0); /* call 0x002560A0 */

loc_0024ABA0: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(0x64D880);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    goto loc_0024AAB2;

loc_0024ABB4: ;
    eax = MEM32(ebx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024ABC1; /* je: equal / zero */

loc_0024ABBC: ;
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x20), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0024AC15; /* jge: greater or equal (signed >=) */

loc_0024ABC1: ;
    esi = MEM32(ebx + 0x20);
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D87C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEM32(ebx + 0x20) = esi;
    MEMF(ebx + 0x48) = xmm2.f[0]; /* movss */
    MEM32(0x64D87C) = ecx;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), ebp (32-bit) */
    MEM32(0x64D884) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0024AC15; /* je: equal / zero */

loc_0024ABF0: ;
    MEM32(eax + 0x20) = ebp;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 0xC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0024AC15; /* jne: not equal / not zero */

loc_0024ABFD: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AC15; /* je: equal / zero */

loc_0024AC07: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AC15; /* je: equal / zero */

loc_0024AC0E: ;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;

loc_0024AC15: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(0x64D880);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    goto loc_0024AAB2;

loc_0024AC29: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x3E8;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0024AC40
 * Original: 0x0024AC40 - 0x0024B01E (990 bytes, 299 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0024AC40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024AC40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D878);
    ecx = MEM32(eax + 0x44);
    eax = MEM32(0x64D870);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ebp);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(0x64D1F8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0024ACD6; /* je: equal / zero */

loc_0024AC6A: ;
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 0x33000767);
    eax = 0x493610;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024AC7Cu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024AC7C: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AC92; /* je: equal / zero */

loc_0024AC89: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AC9C; /* je: equal / zero */

loc_0024AC92: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024ACA8; /* je: equal / zero */

loc_0024AC9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024ACA8; /* jne: not equal / not zero */

loc_0024ACA1: ;
    ecx = 0x33000767;
    goto loc_0024ACAF;

loc_0024ACA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024ACCC; /* je: equal / zero */

loc_0024ACAF: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024ACC7u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024ACC7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0024ACD1;

loc_0024ACCC: ;
    eax = 0x33000767;

loc_0024ACD1: ;
    MEM32(0x650964) = eax;

loc_0024ACD6: ;
    esi = MEM32(0x64D880);
    PUSH32(esp, 2);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024ACE5u); RECOMP_ABI_CALL(0x0005B440u, sub_0005B440); /* call 0x0005B440 */

loc_0024ACE5: ;
    ebp = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024ACF7; /* jne: not equal / not zero */

loc_0024ACEF: ;
    ecx = MEM32(0x614FCC);
    goto loc_0024AD04;

loc_0024ACF7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    ecx = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024AD04; /* je: equal / zero */

loc_0024AD02: ;
    ecx = ebp;

loc_0024AD04: ;
    eax = MEM32(ecx + 4);
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x200000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024AD23; /* jne: not equal / not zero */

loc_0024AD13: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024AD1Du); RECOMP_ABI_CALL(0x0001CAD0u, sub_0001CAD0); /* call 0x0001CAD0 */

loc_0024AD1D: ;
    esi = MEM32(0x64D880);

loc_0024AD23: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024AD30; /* jne: not equal / not zero */

loc_0024AD28: ;
    ebp = MEM32(0x614FCC);
    goto loc_0024AD3B;

loc_0024AD30: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024AD3B; /* jne: not equal / not zero */

loc_0024AD35: ;
    ebp = MEM32(0x614FD0);

loc_0024AD3B: ;
    eax = MEM32(ebp + 4);
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024ADC4; /* jne: not equal / not zero */

loc_0024AD4A: ;
    eax = eax | 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ebp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024AD56u); RECOMP_ABI_CALL(0x0001CAD0u, sub_0001CAD0); /* call 0x0001CAD0 */

loc_0024AD56: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024ADBE; /* je: equal / zero */

loc_0024AD5F: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024ADBE; /* je: equal / zero */

loc_0024AD66: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024ADBE; /* je: equal / zero */

loc_0024AD6D: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024ADBE; /* jne: not equal / not zero */

loc_0024AD72: ;
    edx = ebp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024AD79u); RECOMP_ABI_CALL(0x0002B630u, sub_0002B630); /* call 0x0002B630 */

loc_0024AD79: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024AD8B; /* je: equal / zero */

loc_0024AD82: ;
    PUSH32(esp, ebp);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024AD88u); RECOMP_ABI_CALL(0x0005B360u, sub_0005B360); /* call 0x0005B360 */

loc_0024AD88: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024AD8B: ;
    ecx = MEM32(ebp);
    eax = MEM32(ebp + 0x14);
    ecx = ecx & 0xFFBFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp) = ecx;
    edi = MEM32(eax + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024ADB4; /* je: equal / zero */

loc_0024ADA1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024ADA6u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0024ADA6: ;
    ecx = MEM32(ebp + 0x14);
    ecx = MEM32(ecx + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0024ADB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0024ADB1u); } /* indirect call */
    }

loc_0024ADB4: ;
    edx = MEM32(ebp + 0x14);
    MEM32(edx + 8) = 0;

loc_0024ADBE: ;
    esi = MEM32(0x64D880);

loc_0024ADC4: ;
    ecx = MEM32(0x650964);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024ADD7; /* jne: not equal / not zero */

loc_0024ADCF: ;
    ecx = MEM32(0x614FCC);
    goto loc_0024ADE2;

loc_0024ADD7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024ADE2; /* jne: not equal / not zero */

loc_0024ADDC: ;
    ecx = MEM32(0x614FD0);

loc_0024ADE2: ;
    eax = MEM32(ecx + 4);
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x200000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024AE01; /* jne: not equal / not zero */

loc_0024ADF1: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024ADFBu); RECOMP_ABI_CALL(0x0001CAD0u, sub_0001CAD0); /* call 0x0001CAD0 */

loc_0024ADFB: ;
    esi = MEM32(0x64D880);

loc_0024AE01: ;
    eax = MEM32(esi + 0x18);
    MEM8(eax + 0x2C) = 0xC8;
    eax = MEM32(esi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_0024AE25; /* js: sign (negative) */

loc_0024AE0E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = eax | 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024AE1Cu); RECOMP_ABI_CALL(0x0001B920u, sub_0001B920); /* call 0x0001B920 */

loc_0024AE1C: ;
    esi = MEM32(0x64D880);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024AE25: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx + 0x14);
    MEM32(edx + 0x104) = 0;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AE49; /* je: equal / zero */

loc_0024AE3C: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AE49; /* je: equal / zero */

loc_0024AE43: ;
    MEM32(eax) = MEM32(eax) | 0x80000000u;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0024AE49: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AE76; /* je: equal / zero */

loc_0024AE50: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AE76; /* je: equal / zero */

loc_0024AE57: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    eax = eax | 0x40021004;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024AE66u); RECOMP_ABI_CALL(0x000702C0u, sub_000702C0); /* call 0x000702C0 */

loc_0024AE66: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024AE70u); RECOMP_ABI_CALL(0x00070DD0u, sub_00070DD0); /* call 0x00070DD0 */

loc_0024AE70: ;
    esi = MEM32(0x64D880);

loc_0024AE76: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x333A00)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AE9F; /* je: equal / zero */

loc_0024AE9A: ;
    eax = MEM32(eax + 4);
    goto loc_0024AEA1;

loc_0024AE9F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024AEA1: ;
    eax = MEM32(eax + 0x24);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AED6; /* je: equal / zero */

loc_0024AED1: ;
    eax = MEM32(eax + 4);
    goto loc_0024AED8;

loc_0024AED6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024AED8: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024AEF7; /* je: equal / zero */

loc_0024AEDD: ;
    eax = MEM32(eax + 0x24);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;

loc_0024AEF7: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AF03; /* je: equal / zero */

loc_0024AEFE: ;
    eax = MEM32(eax + 4);
    goto loc_0024AF05;

loc_0024AF03: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024AF05: ;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AF19; /* je: equal / zero */

loc_0024AF14: ;
    MEMF(eax + 4) = xmm1.f[0]; /* movss */

loc_0024AF19: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AF25; /* je: equal / zero */

loc_0024AF20: ;
    eax = MEM32(eax + 4);
    goto loc_0024AF27;

loc_0024AF25: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024AF27: ;
    xmm2 = XMM_SCALAR(MEMF(0x333920)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    edi = MEM32(esp + 0x1C);
    MEMF(eax + 0x4C) = xmm2.f[0]; /* movss */
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x80000000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AF70; /* je: equal / zero */

loc_0024AF6B: ;
    eax = MEM32(eax + 4);
    goto loc_0024AF72;

loc_0024AF70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024AF72: ;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = edx;
    MEM32(eax + 0x58) = edi;
    eax = MEM32(esi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024AFA4; /* je: equal / zero */

loc_0024AF82: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 4);
    edx = MEM32(eax);
    ecx = MEM32(edx + 8);
    SET_LO8(ecx, MEM8(ecx + 2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024AFA4; /* je: equal / zero */

loc_0024AF97: ;
    eax = MEM32(eax + 8);
    edx = ZX8(LO8(ecx));
    ecx = MEM32(eax + edx * 4);
    MEM8(ecx + 3) = 1;

loc_0024AFA4: ;
    SET_LO8(eax, MEM8(esi + 0x1E));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    SET_LO8(eax, LO8(eax) | 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM8(esi + 0x1E) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024AFB8u); RECOMP_ABI_CALL(0x00020DF0u, sub_00020DF0); /* call 0x00020DF0 */

loc_0024AFB8: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx);
    esi = MEM32(esp + 0x20);
    MEM16(eax + 0x3E) = 0;
    eax = MEM32(0x64D880);
    MEM32(0x614FD0) = eax;
    edx = MEM32(esi + 0x7F4);
    edx = edx | 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x7F4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0024B002; /* je: equal / zero */

loc_0024AFEA: ;
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024B002; /* je: equal / zero */

loc_0024AFF1: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024B002; /* je: equal / zero */

loc_0024AFF7: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024B002; /* je: equal / zero */

loc_0024AFFE: ;
    MEM8(ecx + 0x14) = MEM8(ecx + 0x14) | 0x40;
    _fa = (uint32_t)(MEM8(ecx + 0x14)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0024B002: ;
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024B009u); RECOMP_ABI_CALL(0x0005B440u, sub_0005B440); /* call 0x0005B440 */

loc_0024B009: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x89C) = eax;
    POP32(esp, edi);
    eax = 0x3E8;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0024B9A0
 * Original: 0x0024B9A0 - 0x0024C325 (2437 bytes, 574 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0024B9A0(void)
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

loc_0024B9A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D878);
    ecx = (uint32_t)(int32_t)SMEM16(0x3418FA);
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x64D90C); /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x44);
    eax = MEM32(ebp + 0x5E4);
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0xAC); /* subss */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    xmm0.f[0] = xmm0.f[0] / MEMF(ecx + ebp + 0x40); /* divss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024B9FB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0024B9F3: ;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    goto loc_0024BA0C;

loc_0024B9FB: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0024BA0C; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_0024BA06: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_0024BA0C: ;
    ecx = MEM32(0x64D880);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024BA2F; /* je: equal / zero */

loc_0024BA1A: ;
    edx = MEM32(ecx + 0x14);
    edx = MEM32(edx + 8);
    edi = MEM32(edx + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0024BC7C; /* jne: not equal / not zero */

loc_0024BA2F: ;
    edx = (uint32_t)(int32_t)SMEM16(0x341902);
    xmm0 = XMM_SCALAR(MEMF(0x333910)); /* movss */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    xmm3 = XMM_SCALAR(MEMF(edx + ebp + 0x82C)); /* movss */
    eax = edx + ebp + 0x82C;
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edx = MEM32(esp + 0x28);
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    ebx = 0x7FFFFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, edx (32-bit) */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm3.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BA96; /* jne: not equal / not zero */

loc_0024BA86: ;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x2C), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BA96; /* jne: not equal / not zero */

loc_0024BA8C: ;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x30), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024BB3B; /* je: equal / zero */

loc_0024BA96: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024BAB0; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0024BAA7: ;
    xmm0 = xmm2; /* movaps */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_0024BAB0: ;
    fp_push(MEMD(0x3338B0)); /* fld double */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0024BAC3; /* jbe: below or equal (unsigned <=) */

loc_0024BAC0: ;
    xmm0 = xmm1; /* movaps */

loc_0024BAC3: ;
    xmm3 = XMM_SCALAR(MEMF(ebp + 0xB8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0xBC)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0xC0)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    esi = esp + 0x28;
    edi = ecx;
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024BB2Du); RECOMP_ABI_CALL(0x001022C0u, sub_001022C0); /* call 0x001022C0 */

loc_0024BB2D: ;
    ecx = MEM32(0x64D880);
    xmm0 = XMM_SCALAR(MEMF(0x333910)); /* movss */

loc_0024BB3B: ;
    eax = (uint32_t)(int32_t)SMEM16(0x341902);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x5E4));
    xmm1 = XMM_SCALAR(MEMF(eax + ebp + 0xA0)); /* movss */
    esi = MEM32(esp + 0x10);
    eax = eax + ebp + 0xA0;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x28), ebx (32-bit) */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BBA5; /* jne: not equal / not zero */

loc_0024BB8B: ;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x2C), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BBA5; /* jne: not equal / not zero */

loc_0024BB91: ;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x30), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BBA5; /* jne: not equal / not zero */

loc_0024BB97: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024BBA3u); RECOMP_ABI_CALL(0x00103310u, sub_00103310); /* call 0x00103310 */

loc_0024BBA3: ;
    goto loc_0024BBBA;

loc_0024BBA5: ;
    PUSH32(esp, esi);
    ecx = ebp + 0x7F8;
    ebx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024BBB5u); RECOMP_ABI_CALL(0x000C2BD0u, sub_000C2BD0); /* call 0x000C2BD0 */

loc_0024BBB5: ;
    ebx = 0x7FFFFFFF;

loc_0024BBBA: ;
    eax = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x333910)); /* movss */
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x2C) = eax;
    eax = (uint32_t)(int32_t)SMEM16(0x341902);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x5E4));
    xmm1 = XMM_SCALAR(MEMF(eax + ebp + 0x20)); /* movss */
    eax = eax + ebp + 0x20;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ecx (32-bit) */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0x30) = edx;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BC42; /* jne: not equal / not zero */

loc_0024BC25: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x20), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BC42; /* jne: not equal / not zero */

loc_0024BC2B: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x24), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BC42; /* jne: not equal / not zero */

loc_0024BC31: ;
    edi = MEM32(0x64D880);
    esi = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024BC40u); RECOMP_ABI_CALL(0x00103820u, sub_00103820); /* call 0x00103820 */

loc_0024BC40: ;
    goto loc_0024BC55;

loc_0024BC42: ;
    PUSH32(esp, esi);
    ecx = ebp + 0x85C;
    ebx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024BC52u); RECOMP_ABI_CALL(0x000C2BD0u, sub_000C2BD0); /* call 0x000C2BD0 */

loc_0024BC52: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024BC55: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x1C) = ecx;
    ecx = esp + 0x1C;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, edx);
    goto loc_0024C1EF;

loc_0024BC7C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024BC88; /* jne: not equal / not zero */

loc_0024BC81: ;
    eax = MEM32(0x614FCC);
    goto loc_0024BC94;

loc_0024BC88: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024BC94; /* je: equal / zero */

loc_0024BC92: ;
    eax = edi;

loc_0024BC94: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024BC9Eu); RECOMP_ABI_CALL(0x00103310u, sub_00103310); /* call 0x00103310 */

loc_0024BC9E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    esi = ebp + 0xC4;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x28;
    ecx = esi;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024BCCFu); RECOMP_ABI_CALL(0x0002C570u, sub_0002C570); /* call 0x0002C570 */

loc_0024BCCF: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337A0); /* comiss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024BCE9; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3337A0)) */

loc_0024BCDE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_0024BD42;

loc_0024BCE9: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024BD06; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0024BCF6: ;
    xmm0 = XMM_SCALAR(MEMF(0x333894)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_0024BD13;

loc_0024BD06: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024BD0Fu); RECOMP_ABI_CALL(0x002941B0u, sub_002941B0); /* call 0x002941B0 */

loc_0024BD0F: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_0024BD13: ;
    edx = esp + 0x34;
    eax = esp + 0x28;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024BD22u); RECOMP_ABI_CALL(0x0002C620u, sub_0002C620); /* call 0x0002C620 */

loc_0024BD22: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    if ((_fca > _fcb)) goto loc_0024BD39; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0024BD33: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */

loc_0024BD39: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0024BD42: ;
    edx = (uint32_t)(int32_t)SMEM16(0x341902);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0x5E4));
    xmm1 = XMM_SCALAR(MEMF(0x333910)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx + ebp + 0x82C)); /* movss */
    ebx = MEM32(esp + 0x14);
    eax = edx + ebp + 0x82C;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x28);
    esi = 0x7FFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BDB1; /* jne: not equal / not zero */

loc_0024BDA1: ;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x2C), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BDB1; /* jne: not equal / not zero */

loc_0024BDA7: ;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x30), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024BF6E; /* je: equal / zero */

loc_0024BDB1: ;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    esi = ebp + 0xB8;
    PUSH32(esp, ebx);
    edx = esp + 0x2C;
    eax = esp + 0x38;
    ecx = esi;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024BDE1u); RECOMP_ABI_CALL(0x000FC8A0u, sub_000FC8A0); /* call 0x000FC8A0 */

loc_0024BDE1: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x34);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    eax = (uint32_t)(int32_t)SMEM16(0x341902);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x5E4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    ecx = eax + ebp + 0x82C;
    PUSH32(esp, ebx);
    edx = esp + 0x2C;
    eax = esp + 0x38;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024BE38u); RECOMP_ABI_CALL(0x000FC8A0u, sub_000FC8A0); /* call 0x000FC8A0 */

loc_0024BE38: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x341902);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x5E4));
    edx = MEM32(esp + 0x2C);
    eax = ecx + ebp + 0x82C;
    ecx = MEM32(esp + 0x30);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0024BE70; /* jne: not equal / not zero */

loc_0024BE69: ;
    eax = MEM32(0x614FCC);
    goto loc_0024BE7C;

loc_0024BE70: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024BE7C; /* je: equal / zero */

loc_0024BE7A: ;
    eax = edi;

loc_0024BE7C: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024BE86u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024BE86: ;
    edx = (uint32_t)(int32_t)SMEM16(0x341902);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0x5E4));
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    eax = edx + ebp + 0x82C;
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024BEBB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0024BEB2: ;
    xmm2 = xmm0; /* movaps */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */

loc_0024BEBB: ;
    fp_push(MEMD(0x3338B0)); /* fld double */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0024BED3; /* jbe: below or equal (unsigned <=) */

loc_0024BECB: ;
    xmm2 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */

loc_0024BED3: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edi = MEM32(0x64D880);
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    esi = esp + 0x28;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024BF5Au); RECOMP_ABI_CALL(0x001022C0u, sub_001022C0); /* call 0x001022C0 */

loc_0024BF5A: ;
    xmm1 = XMM_SCALAR(MEMF(0x333910)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = MEM32(esp + 0x18);
    esi = 0x7FFFFFFF;

loc_0024BF6E: ;
    eax = (uint32_t)(int32_t)SMEM16(0x341902);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x5E4));
    xmm2 = XMM_SCALAR(MEMF(eax + ebp + 0xA0)); /* movss */
    eax = eax + ebp + 0xA0;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x28), esi (32-bit) */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BFF2; /* jne: not equal / not zero */

loc_0024BFBA: ;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x2C), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BFF2; /* jne: not equal / not zero */

loc_0024BFC0: ;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x30), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BFF2; /* jne: not equal / not zero */

loc_0024BFC6: ;
    eax = MEM32(0x64D880);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024BFD5u); RECOMP_ABI_CALL(0x00103310u, sub_00103310); /* call 0x00103310 */

loc_0024BFD5: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x40);
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = ecx;
    goto loc_0024C0E7;

loc_0024BFF2: ;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    esi = ebp + 0x7F8;
    PUSH32(esp, ebx);
    edx = esp + 0x2C;
    eax = esp + 0x38;
    ecx = esi;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C022u); RECOMP_ABI_CALL(0x000FC8A0u, sub_000FC8A0); /* call 0x000FC8A0 */

loc_0024C022: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x34);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = edx;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ecx;
    edx = (uint32_t)(int32_t)SMEM16(0x341902);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0x5E4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    ecx = edx + ebp + 0xA0;
    PUSH32(esp, ebx);
    edx = esp + 0x2C;
    eax = esp + 0x38;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C079u); RECOMP_ABI_CALL(0x000FC8A0u, sub_000FC8A0); /* call 0x000FC8A0 */

loc_0024C079: ;
    eax = (uint32_t)(int32_t)SMEM16(0x341902);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x5E4));
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x30);
    eax = eax + ebp + 0xA0;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 8) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(0x341902);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x5E4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = eax + ebp + 0xA0;
    ebx = esp + 0x38;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C0CAu); RECOMP_ABI_CALL(0x000C2BD0u, sub_000C2BD0); /* call 0x000C2BD0 */

loc_0024C0CA: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x40);
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = eax;
    esi = 0x7FFFFFFF;

loc_0024C0E7: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x341902);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x5E4));
    xmm0 = XMM_SCALAR(MEMF(0x333910)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + ebp + 0x20)); /* movss */
    eax = ecx + ebp + 0x20;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = MEM32(esp + 0x20);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_0024C173; /* jne: not equal / not zero */

loc_0024C13A: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x20), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024C173; /* jne: not equal / not zero */

loc_0024C140: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x24), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024C173; /* jne: not equal / not zero */

loc_0024C146: ;
    edi = MEM32(0x64D880);
    esi = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C155u); RECOMP_ABI_CALL(0x00103820u, sub_00103820); /* call 0x00103820 */

loc_0024C155: ;
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x3C);
    edi = MEM32(esp + 0x18);
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;
    goto loc_0024C1A2;

loc_0024C173: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = ebp + 0x85C;
    ebx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C187u); RECOMP_ABI_CALL(0x000C2BD0u, sub_000C2BD0); /* call 0x000C2BD0 */

loc_0024C187: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x40);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;

loc_0024C1A2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024C1AE; /* jne: not equal / not zero */

loc_0024C1A7: ;
    eax = MEM32(0x614FCC);
    goto loc_0024C1BA;

loc_0024C1AE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024C1BA; /* je: equal / zero */

loc_0024C1B8: ;
    eax = edi;

loc_0024C1BA: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C1C4u); RECOMP_ABI_CALL(0x00103310u, sub_00103310); /* call 0x00103310 */

loc_0024C1C4: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x40);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC4) = edx;
    edx = esp + 0x1C;
    MEM32(ebp + 0xC8) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    MEM32(ebp + 0xCC) = ecx;
    PUSH32(esp, eax);

loc_0024C1EF: ;
    esi = MEM32(0x64D880);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C1FAu); RECOMP_ABI_CALL(0x00102F50u, sub_00102F50); /* call 0x00102F50 */

loc_0024C1FA: ;
    eax = MEM32(ebp + 0x87C);
    edi = MEM32(0x64D880);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C241; /* je: equal / zero */

loc_0024C20F: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C21B; /* je: equal / zero */

loc_0024C216: ;
    eax = MEM32(eax + 4);
    goto loc_0024C21D;

loc_0024C21B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024C21D: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x20); /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337C0); /* mulss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */

loc_0024C241: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x3418FA);
    eax = MEM32(ebp + 0x5E4);
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    xmm0.f[0] = xmm0.f[0] - MEMF(0x64D90C); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0xAC); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + ebp + 0x40); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C318; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ecx + ebp + 0x40)) */

loc_0024C274: ;
    eax = MEM32(ebp + eax * 4 + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C29A; /* je: equal / zero */

loc_0024C27D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C288u); RECOMP_ABI_CALL(0x00020DF0u, sub_00020DF0); /* call 0x00020DF0 */

loc_0024C288: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx);
    edi = MEM32(0x64D880);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x3E) = LO16(ebx);

loc_0024C29A: ;
    edx = MEM32(ebp + 0x5E4);
    ecx = MEM32(ebp + 0x868);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + 0x5E4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0024C2D2; /* je: equal / zero */

loc_0024C2B3: ;
    ecx = MEM32(ebp + 0x87C);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C2C2u); RECOMP_ABI_CALL(0x00145760u, sub_00145760); /* call 0x00145760 */

loc_0024C2C2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x3E8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0024C2D2: ;
    MEM32(ebp + 0x7F4) = MEM32(ebp + 0x7F4) & 0xFFFFFFFBu;
    _fa = (uint32_t)(MEM32(ebp + 0x7F4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)(int32_t)SMEM16(0x341912);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    ebp = MEM32(eax + ebp + 0x98);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C2FB; /* je: equal / zero */

loc_0024C2EF: ;
    edx = ebp;
    esi = 2;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C2FBu); RECOMP_ABI_CALL(0x002560A0u, sub_002560A0); /* call 0x002560A0 */

loc_0024C2FB: ;
    eax = MEM32(0x64D87C);
    ecx = MEM32(0x64D878);
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D884) = edi;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 8) = ebx;

loc_0024C318: ;
    POP32(esp, edi);
    eax = 0x3E8;
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_0024BB33
 * Original: 0x0024BB33 - 0x0024C325 (2034 bytes, 482 insns)
 * Folder: scripts (between: 0x0024B9A0 and 0x0024C330)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BB33(void)
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

loc_0024BB33: ;
    xmm0 = XMM_SCALAR(MEMF(0x333910)); /* movss */
    eax = (uint32_t)(int32_t)SMEM16(0x341902);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x5E4));
    xmm1 = XMM_SCALAR(MEMF(eax + ebp + 0xA0)); /* movss */
    esi = MEM32(esp + 0x10);
    eax = eax + ebp + 0xA0;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x28), ebx (32-bit) */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BBA5; /* jne: not equal / not zero */

loc_0024BB8B: ;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x2C), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BBA5; /* jne: not equal / not zero */

loc_0024BB91: ;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x30), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BBA5; /* jne: not equal / not zero */

loc_0024BB97: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, 0x0024BBA3u); RECOMP_ABI_CALL(0x00103310u, sub_00103310); /* call 0x00103310 */

loc_0024BBA3: ;
    goto loc_0024BBBA;

loc_0024BBA5: ;
    PUSH32(esp, esi);
    ecx = ebp + 0x7F8;
    ebx = esp + 0x20;
    PUSH32(esp, 0x0024BBB5u); RECOMP_ABI_CALL(0x000C2BD0u, sub_000C2BD0); /* call 0x000C2BD0 */

loc_0024BBB5: ;
    ebx = 0x7FFFFFFF;

loc_0024BBBA: ;
    eax = MEM32(esp + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x333910)); /* movss */
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x2C) = eax;
    eax = (uint32_t)(int32_t)SMEM16(0x341902);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x5E4));
    xmm1 = XMM_SCALAR(MEMF(eax + ebp + 0x20)); /* movss */
    eax = eax + ebp + 0x20;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ecx (32-bit) */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0x30) = edx;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BC42; /* jne: not equal / not zero */

loc_0024BC25: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x20), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BC42; /* jne: not equal / not zero */

loc_0024BC2B: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x24), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BC42; /* jne: not equal / not zero */

loc_0024BC31: ;
    edi = MEM32(0x64D880);
    esi = esp + 0x34;
    PUSH32(esp, 0x0024BC40u); RECOMP_ABI_CALL(0x00103820u, sub_00103820); /* call 0x00103820 */

loc_0024BC40: ;
    goto loc_0024BC55;

loc_0024BC42: ;
    PUSH32(esp, esi);
    ecx = ebp + 0x85C;
    ebx = esp + 0x38;
    PUSH32(esp, 0x0024BC52u); RECOMP_ABI_CALL(0x000C2BD0u, sub_000C2BD0); /* call 0x000C2BD0 */

loc_0024BC52: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024BC55: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x1C) = ecx;
    ecx = esp + 0x1C;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, edx);
    goto loc_0024C1EF;

    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024BC88; /* jne: not equal / not zero */

loc_0024BC81: ;
    eax = MEM32(0x614FCC);
    goto loc_0024BC94;

loc_0024BC88: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024BC94; /* je: equal / zero */

loc_0024BC92: ;
    eax = edi;

loc_0024BC94: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024BC9Eu); RECOMP_ABI_CALL(0x00103310u, sub_00103310); /* call 0x00103310 */

loc_0024BC9E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    esi = ebp + 0xC4;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x28;
    ecx = esi;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0024BCCFu); RECOMP_ABI_CALL(0x0002C570u, sub_0002C570); /* call 0x0002C570 */

loc_0024BCCF: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337A0); /* comiss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024BCE9; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3337A0)) */

loc_0024BCDE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_0024BD42;

loc_0024BCE9: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024BD06; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0024BCF6: ;
    xmm0 = XMM_SCALAR(MEMF(0x333894)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    goto loc_0024BD13;

loc_0024BD06: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, 0x0024BD0Fu); RECOMP_ABI_CALL(0x002941B0u, sub_002941B0); /* call 0x002941B0 */

loc_0024BD0F: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_0024BD13: ;
    edx = esp + 0x34;
    eax = esp + 0x28;
    ecx = esi;
    PUSH32(esp, 0x0024BD22u); RECOMP_ABI_CALL(0x0002C620u, sub_0002C620); /* call 0x0002C620 */

loc_0024BD22: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    if ((_fca > _fcb)) goto loc_0024BD39; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0024BD33: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */

loc_0024BD39: ;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0024BD42: ;
    edx = (uint32_t)(int32_t)SMEM16(0x341902);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0x5E4));
    xmm1 = XMM_SCALAR(MEMF(0x333910)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx + ebp + 0x82C)); /* movss */
    ebx = MEM32(esp + 0x14);
    eax = edx + ebp + 0x82C;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x28);
    esi = 0x7FFFFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BDB1; /* jne: not equal / not zero */

loc_0024BDA1: ;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x2C), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BDB1; /* jne: not equal / not zero */

loc_0024BDA7: ;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x30), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024BF6E; /* je: equal / zero */

loc_0024BDB1: ;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    esi = ebp + 0xB8;
    PUSH32(esp, ebx);
    edx = esp + 0x2C;
    eax = esp + 0x38;
    ecx = esi;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0024BDE1u); RECOMP_ABI_CALL(0x000FC8A0u, sub_000FC8A0); /* call 0x000FC8A0 */

loc_0024BDE1: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x34);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    eax = (uint32_t)(int32_t)SMEM16(0x341902);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x5E4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    ecx = eax + ebp + 0x82C;
    PUSH32(esp, ebx);
    edx = esp + 0x2C;
    eax = esp + 0x38;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0024BE38u); RECOMP_ABI_CALL(0x000FC8A0u, sub_000FC8A0); /* call 0x000FC8A0 */

loc_0024BE38: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x341902);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x5E4));
    edx = MEM32(esp + 0x2C);
    eax = ecx + ebp + 0x82C;
    ecx = MEM32(esp + 0x30);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0024BE70; /* jne: not equal / not zero */

loc_0024BE69: ;
    eax = MEM32(0x614FCC);
    goto loc_0024BE7C;

loc_0024BE70: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024BE7C; /* je: equal / zero */

loc_0024BE7A: ;
    eax = edi;

loc_0024BE7C: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024BE86u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024BE86: ;
    edx = (uint32_t)(int32_t)SMEM16(0x341902);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0x5E4));
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    eax = edx + ebp + 0x82C;
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024BEBB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0024BEB2: ;
    xmm2 = xmm0; /* movaps */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */

loc_0024BEBB: ;
    fp_push(MEMD(0x3338B0)); /* fld double */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0024BED3; /* jbe: below or equal (unsigned <=) */

loc_0024BECB: ;
    xmm2 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */

loc_0024BED3: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edi = MEM32(0x64D880);
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    esi = esp + 0x28;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0024BF5Au); RECOMP_ABI_CALL(0x001022C0u, sub_001022C0); /* call 0x001022C0 */

loc_0024BF5A: ;
    xmm1 = XMM_SCALAR(MEMF(0x333910)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = MEM32(esp + 0x18);
    esi = 0x7FFFFFFF;

loc_0024BF6E: ;
    eax = (uint32_t)(int32_t)SMEM16(0x341902);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x5E4));
    xmm2 = XMM_SCALAR(MEMF(eax + ebp + 0xA0)); /* movss */
    eax = eax + ebp + 0xA0;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x28), esi (32-bit) */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BFF2; /* jne: not equal / not zero */

loc_0024BFBA: ;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x2C), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BFF2; /* jne: not equal / not zero */

loc_0024BFC0: ;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x30), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024BFF2; /* jne: not equal / not zero */

loc_0024BFC6: ;
    eax = MEM32(0x64D880);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024BFD5u); RECOMP_ABI_CALL(0x00103310u, sub_00103310); /* call 0x00103310 */

loc_0024BFD5: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x40);
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = ecx;
    goto loc_0024C0E7;

loc_0024BFF2: ;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    esi = ebp + 0x7F8;
    PUSH32(esp, ebx);
    edx = esp + 0x2C;
    eax = esp + 0x38;
    ecx = esi;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0024C022u); RECOMP_ABI_CALL(0x000FC8A0u, sub_000FC8A0); /* call 0x000FC8A0 */

loc_0024C022: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x34);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = edx;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ecx;
    edx = (uint32_t)(int32_t)SMEM16(0x341902);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0x5E4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    ecx = edx + ebp + 0xA0;
    PUSH32(esp, ebx);
    edx = esp + 0x2C;
    eax = esp + 0x38;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0024C079u); RECOMP_ABI_CALL(0x000FC8A0u, sub_000FC8A0); /* call 0x000FC8A0 */

loc_0024C079: ;
    eax = (uint32_t)(int32_t)SMEM16(0x341902);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x5E4));
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x30);
    eax = eax + ebp + 0xA0;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 8) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(0x341902);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x5E4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = eax + ebp + 0xA0;
    ebx = esp + 0x38;
    ecx = esi;
    PUSH32(esp, 0x0024C0CAu); RECOMP_ABI_CALL(0x000C2BD0u, sub_000C2BD0); /* call 0x000C2BD0 */

loc_0024C0CA: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x40);
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = eax;
    esi = 0x7FFFFFFF;

loc_0024C0E7: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x341902);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x5E4));
    xmm0 = XMM_SCALAR(MEMF(0x333910)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + ebp + 0x20)); /* movss */
    eax = ecx + ebp + 0x20;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = MEM32(esp + 0x20);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_0024C173; /* jne: not equal / not zero */

loc_0024C13A: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x20), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024C173; /* jne: not equal / not zero */

loc_0024C140: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x24), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024C173; /* jne: not equal / not zero */

loc_0024C146: ;
    edi = MEM32(0x64D880);
    esi = esp + 0x34;
    PUSH32(esp, 0x0024C155u); RECOMP_ABI_CALL(0x00103820u, sub_00103820); /* call 0x00103820 */

loc_0024C155: ;
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x3C);
    edi = MEM32(esp + 0x18);
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = ecx;
    goto loc_0024C1A2;

loc_0024C173: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = ebp + 0x85C;
    ebx = esp + 0x38;
    PUSH32(esp, 0x0024C187u); RECOMP_ABI_CALL(0x000C2BD0u, sub_000C2BD0); /* call 0x000C2BD0 */

loc_0024C187: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x40);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;

loc_0024C1A2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024C1AE; /* jne: not equal / not zero */

loc_0024C1A7: ;
    eax = MEM32(0x614FCC);
    goto loc_0024C1BA;

loc_0024C1AE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024C1BA; /* je: equal / zero */

loc_0024C1B8: ;
    eax = edi;

loc_0024C1BA: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024C1C4u); RECOMP_ABI_CALL(0x00103310u, sub_00103310); /* call 0x00103310 */

loc_0024C1C4: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x40);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC4) = edx;
    edx = esp + 0x1C;
    MEM32(ebp + 0xC8) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    MEM32(ebp + 0xCC) = ecx;
    PUSH32(esp, eax);

loc_0024C1EF: ;
    esi = MEM32(0x64D880);
    PUSH32(esp, 0x0024C1FAu); RECOMP_ABI_CALL(0x00102F50u, sub_00102F50); /* call 0x00102F50 */

loc_0024C1FA: ;
    eax = MEM32(ebp + 0x87C);
    edi = MEM32(0x64D880);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C241; /* je: equal / zero */

loc_0024C20F: ;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C21B; /* je: equal / zero */

loc_0024C216: ;
    eax = MEM32(eax + 4);
    goto loc_0024C21D;

loc_0024C21B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024C21D: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x20); /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337C0); /* mulss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */

loc_0024C241: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x3418FA);
    eax = MEM32(ebp + 0x5E4);
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    xmm0.f[0] = xmm0.f[0] - MEMF(0x64D90C); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0xAC); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + ebp + 0x40); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024C318; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ecx + ebp + 0x40)) */

loc_0024C274: ;
    eax = MEM32(ebp + eax * 4 + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C29A; /* je: equal / zero */

loc_0024C27D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = edi;
    PUSH32(esp, 0x0024C288u); RECOMP_ABI_CALL(0x00020DF0u, sub_00020DF0); /* call 0x00020DF0 */

loc_0024C288: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx);
    edi = MEM32(0x64D880);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x3E) = LO16(ebx);

loc_0024C29A: ;
    edx = MEM32(ebp + 0x5E4);
    ecx = MEM32(ebp + 0x868);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + 0x5E4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0024C2D2; /* je: equal / zero */

loc_0024C2B3: ;
    ecx = MEM32(ebp + 0x87C);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = edi;
    PUSH32(esp, 0x0024C2C2u); RECOMP_ABI_CALL(0x00145760u, sub_00145760); /* call 0x00145760 */

loc_0024C2C2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x3E8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0024C2D2: ;
    MEM32(ebp + 0x7F4) = MEM32(ebp + 0x7F4) & 0xFFFFFFFBu;
    _fa = (uint32_t)(MEM32(ebp + 0x7F4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)(int32_t)SMEM16(0x341912);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    ebp = MEM32(eax + ebp + 0x98);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C2FB; /* je: equal / zero */

loc_0024C2EF: ;
    edx = ebp;
    esi = 2;
    PUSH32(esp, 0x0024C2FBu); RECOMP_ABI_CALL(0x002560A0u, sub_002560A0); /* call 0x002560A0 */

loc_0024C2FB: ;
    eax = MEM32(0x64D87C);
    ecx = MEM32(0x64D878);
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D884) = edi;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 8) = ebx;

loc_0024C318: ;
    POP32(esp, edi);
    eax = 0x3E8;
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_0024C330
 * Original: 0x0024C330 - 0x0024C35F (47 bytes, 12 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024C330(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024C330: ;
    eax = MEM32(0x64D87C);
    edx = MEM32(0x64D880);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0xC) = ecx;
    eax = MEM32(0x64D878);
    MEM32(0x64D87C) = eax;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(0x64D884) = edx;
    eax = 0x3E8;
    esp += 4; return; /* ret */

}

/**
 * sub_0024C360
 * Original: 0x0024C360 - 0x0024C393 (51 bytes, 15 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024C360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024C360: ;
    eax = MEM32(0x64D878);
    ecx = MEM32(eax + 0x44);
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x30), 1 (32-bit) */
    eax = MEM32(0x64D880);
    if (CMP_NE(_fa, _fb)) goto loc_0024C383; /* jne: not equal / not zero */

loc_0024C373: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0024C37Au); RECOMP_ABI_CALL(0x001B6440u, sub_001B6440); /* call 0x001B6440 */

loc_0024C37A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x3E8;
    esp += 4; return; /* ret */

loc_0024C383: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0024C38Au); RECOMP_ABI_CALL(0x001B6440u, sub_001B6440); /* call 0x001B6440 */

loc_0024C38A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x3E8;
    esp += 4; return; /* ret */

}

/**
 * sub_0024C3A0
 * Original: 0x0024C3A0 - 0x0024C4EF (335 bytes, 103 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024C3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024C3A0: ;
    eax = MEM32(0x64D878);
    ecx = MEM32(0x64D1F8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x44);
    eax = MEM32(0x64D870);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C426; /* je: equal / zero */

loc_0024C3BA: ;
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 0x5500003C);
    eax = 0x493610;
    PUSH32(esp, 0x0024C3CCu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024C3CC: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C3E2; /* je: equal / zero */

loc_0024C3D9: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C3EC; /* je: equal / zero */

loc_0024C3E2: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C3F8; /* je: equal / zero */

loc_0024C3EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024C3F8; /* jne: not equal / not zero */

loc_0024C3F1: ;
    ecx = 0x5500003C;
    goto loc_0024C3FF;

loc_0024C3F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024C41C; /* je: equal / zero */

loc_0024C3FF: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024C417u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024C417: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0024C421;

loc_0024C41C: ;
    eax = 0x5500003C;

loc_0024C421: ;
    MEM32(0x650960) = eax;

loc_0024C426: ;
    eax = MEM32(0x64D880);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6E);
    PUSH32(esp, 0x0024C434u); RECOMP_ABI_CALL(0x0010F660u, sub_0010F660); /* call 0x0010F660 */

loc_0024C434: ;
    eax = MEM32(esi + 0x2E8);
    PUSH32(esp, eax);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0024C442u); RECOMP_ABI_CALL(0x00266820u, sub_00266820); /* call 0x00266820 */

loc_0024C442: ;
    eax = MEM32(0x34AC38);
    ecx = MEM32(0x64D880);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C45D; /* je: equal / zero */

loc_0024C454: ;
    edx = MEM32(eax + 0x30);
    MEM32(edx + 0xA0) = ecx;

loc_0024C45D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024C469; /* jne: not equal / not zero */

loc_0024C462: ;
    eax = MEM32(0x614FCC);
    goto loc_0024C475;

loc_0024C469: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024C475; /* je: equal / zero */

loc_0024C473: ;
    eax = ecx;

loc_0024C475: ;
    SET_LO8(edx, MEM8(0x64CFB8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ebx, MEM8(0x64CFB9));
    esi = MEM32(0x64D284);
    if (CMP_EQ(_fa, _fb)) goto loc_0024C499; /* je: equal / zero */

loc_0024C48B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C499; /* je: equal / zero */

loc_0024C490: ;
    MEM32(esi) = eax;
    MEM32(esi + 4) = 0;

loc_0024C499: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024C4A5; /* jne: not equal / not zero */

loc_0024C49E: ;
    eax = MEM32(0x614FCC);
    goto loc_0024C4B1;

loc_0024C4A5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024C4B1; /* je: equal / zero */

loc_0024C4AF: ;
    eax = ecx;

loc_0024C4B1: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C4BD; /* je: equal / zero */

loc_0024C4B5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C4BD; /* je: equal / zero */

loc_0024C4BA: ;
    MEM32(esi + 8) = eax;

loc_0024C4BD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0024C4CB; /* jne: not equal / not zero */

loc_0024C4C4: ;
    eax = MEM32(0x614FCC);
    goto loc_0024C4D7;

loc_0024C4CB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024C4D7; /* je: equal / zero */

loc_0024C4D5: ;
    eax = ecx;

loc_0024C4D7: ;
    edx = MEM32(0x650960);
    PUSH32(esp, edx);
    PUSH32(esp, 6);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024C4E6u); RECOMP_ABI_CALL(0x002566B0u, sub_002566B0); /* call 0x002566B0 */

loc_0024C4E6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x3E8;
    esp += 4; return; /* ret */

}

/**
 * sub_0024C4F0
 * Original: 0x0024C4F0 - 0x0024D69E (4526 bytes, 1064 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0024C4F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0024C4F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x68));
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D878);
    ecx = MEM32(0x64D1F8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x44);
    eax = MEM32(0x64D870);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0024C782; /* je: equal / zero */

loc_0024C51D: ;
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 0xCC000431u);
    eax = 0x493610;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C52Fu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024C52F: ;
    edi = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0024C545; /* je: equal / zero */

loc_0024C53C: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0024C54D; /* je: equal / zero */

loc_0024C545: ;
    _fa = (uint32_t)(MEM32(0x3400FC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3400FC), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0024C559; /* je: equal / zero */

loc_0024C54D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024C559; /* jne: not equal / not zero */

loc_0024C552: ;
    ecx = 0xCC000431u;
    goto loc_0024C560;

loc_0024C559: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024C57F; /* je: equal / zero */

loc_0024C560: ;
    edx = ecx;
    if (8) _cf = (int)(((edx) >> ((8) - 1)) & 1);
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x47EC30)) >> 32) & 1);
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C578u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024C578: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    goto loc_0024C584;

loc_0024C57F: ;
    esi = 0xCC000431u;

loc_0024C584: ;
    ebx = MEM32(0x34AC3C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x650950) = esi;
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0024C59A; /* jne: not equal / not zero */

loc_0024C596: ;
    eax = ebx;
    goto loc_0024C5B6;

loc_0024C59A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024C5A6; /* jne: not equal / not zero */

loc_0024C59F: ;
    eax = MEM32(0x614FCC);
    goto loc_0024C5B0;

loc_0024C5A6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024C5B0; /* jne: not equal / not zero */

loc_0024C5AB: ;
    eax = MEM32(0x614FD0);

loc_0024C5B0: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 4);

loc_0024C5B6: ;
    eax = MEM32(eax + 0x44);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x78)) >> 32) & 1);
    eax = eax + 0x78;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6542A0) = eax;
    PUSH32(esp, 0x4E000254);
    eax = 0x493610;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C5D0u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024C5D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C5E0; /* je: equal / zero */

loc_0024C5D7: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0024C5EA; /* je: equal / zero */

loc_0024C5E0: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C5F6; /* je: equal / zero */

loc_0024C5EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024C5F6; /* jne: not equal / not zero */

loc_0024C5EF: ;
    ecx = 0x4E000254;
    goto loc_0024C5FD;

loc_0024C5F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024C61A; /* je: equal / zero */

loc_0024C5FD: ;
    edx = ecx;
    if (8) _cf = (int)(((edx) >> ((8) - 1)) & 1);
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x47EC30)) >> 32) & 1);
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C615u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024C615: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0024C61F;

loc_0024C61A: ;
    eax = 0x4E000254;

loc_0024C61F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x650954) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0024C62C; /* jne: not equal / not zero */

loc_0024C628: ;
    eax = ebx;
    goto loc_0024C648;

loc_0024C62C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024C638; /* jne: not equal / not zero */

loc_0024C631: ;
    eax = MEM32(0x614FCC);
    goto loc_0024C642;

loc_0024C638: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024C642; /* jne: not equal / not zero */

loc_0024C63D: ;
    eax = MEM32(0x614FD0);

loc_0024C642: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 4);

loc_0024C648: ;
    ecx = MEM32(eax + 0x44);
    _fb = (uint32_t)(0x248) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x248)) >> 32) & 1);
    ecx = ecx + 0x248;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x65429C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0024C65F; /* jne: not equal / not zero */

loc_0024C65B: ;
    eax = ebx;
    goto loc_0024C67D;

loc_0024C65F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024C66C; /* jne: not equal / not zero */

loc_0024C664: ;
    esi = MEM32(0x614FCC);
    goto loc_0024C677;

loc_0024C66C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024C677; /* jne: not equal / not zero */

loc_0024C671: ;
    esi = MEM32(0x614FD0);

loc_0024C677: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edx + 4);

loc_0024C67D: ;
    eax = MEM32(eax + 0x44);
    _fb = (uint32_t)(0x5EC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x5EC)) >> 32) & 1);
    eax = eax + 0x5EC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x654298) = eax;
    PUSH32(esp, 0x55000040);
    eax = 0x493610;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C699u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024C699: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C6A9; /* je: equal / zero */

loc_0024C6A0: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0024C6B3; /* je: equal / zero */

loc_0024C6A9: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C6BF; /* je: equal / zero */

loc_0024C6B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024C6BF; /* jne: not equal / not zero */

loc_0024C6B8: ;
    ecx = 0x55000040;
    goto loc_0024C6C6;

loc_0024C6BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024C6E3; /* je: equal / zero */

loc_0024C6C6: ;
    edx = ecx;
    if (8) _cf = (int)(((edx) >> ((8) - 1)) & 1);
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x47EC30)) >> 32) & 1);
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C6DEu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024C6DE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0024C6E8;

loc_0024C6E3: ;
    eax = 0x55000040;

loc_0024C6E8: ;
    MEM32(0x65095C) = eax;
    PUSH32(esp, 0xCC00008Eu);
    eax = 0x493610;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C6FCu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024C6FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C70C; /* je: equal / zero */

loc_0024C703: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0024C716; /* je: equal / zero */

loc_0024C70C: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024C722; /* je: equal / zero */

loc_0024C716: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024C722; /* jne: not equal / not zero */

loc_0024C71B: ;
    ecx = 0xCC00008Eu;
    goto loc_0024C729;

loc_0024C722: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024C746; /* je: equal / zero */

loc_0024C729: ;
    eax = ecx;
    if (8) _cf = (int)(((eax) >> ((8) - 1)) & 1);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x47EC30)) >> 32) & 1);
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C741u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024C741: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0024C74B;

loc_0024C746: ;
    eax = 0xCC00008Eu;

loc_0024C74B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x650958) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0024C758; /* jne: not equal / not zero */

loc_0024C754: ;
    eax = ebx;
    goto loc_0024C774;

loc_0024C758: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024C764; /* jne: not equal / not zero */

loc_0024C75D: ;
    eax = MEM32(0x614FCC);
    goto loc_0024C76E;

loc_0024C764: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024C76E; /* jne: not equal / not zero */

loc_0024C769: ;
    eax = MEM32(0x614FD0);

loc_0024C76E: ;
    ecx = MEM32(eax + 0x18);
    eax = MEM32(ecx + 4);

loc_0024C774: ;
    edx = MEM32(eax + 0x44);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(8)) >> 32) & 1);
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x654294) = edx;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024C782: ;
    eax = MEM32(0x6542A0);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(0x64D880);
    if (CMP_EQ(_fa, _fb)) goto loc_0024D66F; /* je: equal / zero */

loc_0024C795: ;
    edx = MEM32(ecx + 0x18);
    eax = MEM32(edx + 4);
    edx = MEM32(eax + 0x44);
    _fa = (uint32_t)(MEM32(edx + 0x160)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x160), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0024D66F; /* je: equal / zero */

loc_0024C7AA: ;
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C7B1u); RECOMP_ABI_CALL(0x001B4C50u, sub_001B4C50); /* call 0x001B4C50 */

loc_0024C7B1: ;
    ecx = MEM32(0x64D880);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C7C2u); RECOMP_ABI_CALL(0x001B6940u, sub_001B6940); /* call 0x001B6940 */

loc_0024C7C2: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024D656; /* jne: not equal / not zero */

loc_0024C7D1: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1B0), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0024C83C; /* je: equal / zero */

loc_0024C7D9: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1E4), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024C83C; /* jne: not equal / not zero */

loc_0024C7E1: ;
    edi = MEM32(0x64D880);
    esi = ebp + 0x258;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C7F2u); RECOMP_ABI_CALL(0x001022C0u, sub_001022C0); /* call 0x001022C0 */

loc_0024C7F2: ;
    ecx = esi;
    esi = MEM32(0x64D880);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C801u); RECOMP_ABI_CALL(0x00262B70u, sub_00262B70); /* call 0x00262B70 */

loc_0024C801: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x54;
    PUSH32(esp, edx);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x40)) >> 32) & 1);
    ebp = ebp + 0x40;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C82Cu); RECOMP_ABI_CALL(0x00102F50u, sub_00102F50); /* call 0x00102F50 */

loc_0024C82C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x3E8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0024C83C: ;
    eax = (uint32_t)(int32_t)SMEM16(0x341902);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x2A4));
    ecx = MEM32(0x65429C);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx + 8)); /* movss */
    ebx = MEM32(ebp + 0x148);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(0x64D880);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C87Eu); RECOMP_ABI_CALL(0x001B4A90u, sub_001B4A90); /* call 0x001B4A90 */

loc_0024C87E: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x150); /* addss */
    eax = MEM32(0x654298);
    eax = MEM32(eax);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x154)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x5C); /* addss */
    esi = MEM32(esp + 0x4C);
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x158)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x60); /* addss */
    ebx = MEM32(esp + 0x50);
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 0x54);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x641) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x641 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x30) = esi;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0024C8EA; /* jl: less (signed <) */

loc_0024C8E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x643) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x643 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0024C8F1; /* jle: less or equal (signed <=) */

loc_0024C8EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x412) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x412 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024C90F; /* jne: not equal / not zero */

loc_0024C8F1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(ebp + 0x1B4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(ebp + 0x1B8) = xmm0.f[0]; /* movss */
    goto loc_0024C921;

loc_0024C90F: ;
    MEM32(ebp + 0x1B4) = esi;
    MEM32(ebp + 0x1B8) = ebx;
    MEM32(ebp + 0x1BC) = edi;

loc_0024C921: ;
    eax = MEM32(0x64D880);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C930u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024C930: ;
    eax = MEM32(esp + 0x5C);
    edx = MEM32(esp + 0x58);
    ecx = MEM32(esp + 0x60);
    MEM32(esp + 0x74) = eax;
    eax = MEM32(ebp + 0x110);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x6C) = edx;
    MEM32(esp + 0x74) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0024C963; /* je: equal / zero */

loc_0024C955: ;
    eax = MEM32(ebp + 0x210);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024CB81; /* je: equal / zero */

loc_0024C963: ;
    eax = MEM32(0x64D880);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024C972u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024C972: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    eax = MEM32(esp + 0x4C);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    ecx = MEM32(esp + 0x50);
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0x40) = eax;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x54);
    MEM32(esp + 0x48) = edx;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x48)); /* fmul dword ptr [esp + 0x48] */
    MEM32(esp + 0x44) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(0x64D880);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    ebx = MEM32(0x34AC38);
    fp_push(MEMF(esp + 0x40)); /* fld float */
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x44)); /* fmul dword ptr [esp + 0x44] */
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x74;
    edx = esp + 0x68;
    MEMF(esp + 0x68) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x3C); /* divss */
    eax = MEM32(esp + 0x3C);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    PUSH32(esp, eax);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    PUSH32(esp, edx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, esi);
    MEMF(esp + 0x8C) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024CA7Fu); RECOMP_ABI_CALL(0x0007DBB0u, sub_0007DBB0); /* call 0x0007DBB0 */

loc_0024CA7F: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024CAA7; /* je: equal / zero */

loc_0024CA86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x148)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x148) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0024CAA7; /* je: equal / zero */

loc_0024CA8E: ;
    ecx = esp + 0x20;
    edi = eax;
    PUSH32(esp, ecx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024CA9Cu); RECOMP_ABI_CALL(0x001B4A20u, sub_001B4A20); /* call 0x001B4A20 */

loc_0024CA9C: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024CAB7; /* je: equal / zero */

loc_0024CAA7: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + 0xE0) = xmm2.f[0]; /* movss */
    goto loc_0024CED7;

loc_0024CAB7: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xE0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0024CAE4; /* jp: parity */

loc_0024CACC: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x64D90C); /* subss */
    MEMF(ebp + 0xE0) = xmm0.f[0]; /* movss */

loc_0024CAE4: ;
    edx = MEM32(ebp + 0xE0);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024CAF5u); RECOMP_ABI_CALL(0x0010AC70u, sub_0010AC70); /* call 0x0010AC70 */

loc_0024CAF5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024CED4; /* je: equal / zero */

loc_0024CB00: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0);
    fp_top() = fabs(fp_top()); /* fabs */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024CB16u); RECOMP_ABI_CALL(0x000FDB20u, sub_000FDB20); /* call 0x000FDB20 */

loc_0024CB16: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024CED4; /* je: equal / zero */

loc_0024CB21: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0);
    fp_top() = fabs(fp_top()); /* fabs */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024CB37u); RECOMP_ABI_CALL(0x000FDB20u, sub_000FDB20); /* call 0x000FDB20 */

loc_0024CB37: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024CED4; /* je: equal / zero */

loc_0024CB42: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024CB49u); RECOMP_ABI_CALL(0x00266AC0u, sub_00266AC0); /* call 0x00266AC0 */

loc_0024CB49: ;
    edi = esi;
    MEMF(ebp + 0x84) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024CB58u); RECOMP_ABI_CALL(0x001B35E0u, sub_001B35E0); /* call 0x001B35E0 */

loc_0024CB58: ;
    edx = MEM32(0x65095C);
    esi = 2;
    MEM32(ebp + 0x1E8) = 6;
    MEM32(ebp + 0x250) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024CB7Cu); RECOMP_ABI_CALL(0x002560A0u, sub_002560A0); /* call 0x002560A0 */

loc_0024CB7C: ;
    goto loc_0024CECE;

loc_0024CB81: ;
    eax = MEM32(ebp + 0x208);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x228)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0024CBAD; /* jne: not equal / not zero */

loc_0024CB93: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0x204); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337D8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x204); /* addss */
    goto loc_0024CBD5;

loc_0024CBAD: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x33383C); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x1EC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x204)); /* movss */
    if ((_fca > _fcb)) goto loc_0024CBD5; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0024CBCA: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0 = xmm2; /* movaps */
    if ((_fca > _fcb)) goto loc_0024CBD5; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_0024CBD2: ;
    xmm0 = xmm1; /* movaps */

loc_0024CBD5: ;
    xmm1 = XMM_SCALAR(MEMF(0x333928)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    MEMF(ebp + 0x1EC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ebp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x1EC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x4C);
    MEMF(esp + 0x48) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x48);
    MEM32(esp + 0x3C) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEM32(esp + 0x40) = ecx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x50) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x50);
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x54);
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x58);
    MEM32(esp + 0x44) = edx;
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x44); /* addss */
    MEM32(esp + 0x24) = eax;
    MEM32(ebp + 0x1B4) = esi;
    MEM32(ebp + 0x1B8) = ebx;
    MEM32(ebp + 0x1BC) = edi;
    eax = esp + 0x24;
    MEMF(ebp + 0x54) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024CC9Du); RECOMP_ABI_CALL(0x0001D080u, sub_0001D080); /* call 0x0001D080 */

loc_0024CC9D: ;
    MEMF(ebp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(0x64D880);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024CCAFu); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024CCAF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    edx = MEM32(ebp + 0x2C);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    eax = MEM32(esp + 0x58);
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x5C) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x5C);
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    MEM32(esp + 0x2C) = ecx;
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024CD04u); RECOMP_ABI_CALL(0x000FAFE0u, sub_000FAFE0); /* call 0x000FAFE0 */

loc_0024CD04: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    ecx = MEM32(ebp + 0x80);
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x228)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0x1EC); /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x1A8); /* addss */
    MEMF(ebp + 0x50) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(ebp + 0x4C) = xmm2.f[0]; /* movss */
    eax = MEM32(ebp + 0x54);
    esi = MEM32(ebp + 0x4C);
    ebx = MEM32(ebp + 0x50);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024CD68u); RECOMP_ABI_CALL(0x000FE530u, sub_000FE530); /* call 0x000FE530 */

loc_0024CD68: ;
    edx = MEM32(ebp + 0x80);
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x228)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0x204); /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x1A8); /* addss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024CDA7u); RECOMP_ABI_CALL(0x000FE530u, sub_000FE530); /* call 0x000FE530 */

loc_0024CDA7: ;
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x228)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebp + 0x204); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x1EC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + 0x204); /* subss */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3337C8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x58); /* addss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x58);
    ecx = esp + 0x5C;
    MEM32(ebp + 0x270) = eax;
    eax = MEM32(0x64D880);
    PUSH32(esp, ecx);
    MEM32(ebp + 0x268) = esi;
    MEM32(ebp + 0x26C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024CE15u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024CE15: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x60); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x64); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0x150); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x68); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + 0x154); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebp + 0x158); /* subss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x60);
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x64);
    MEM32(esp + 0x48) = edx;
    MEMF(esp + 0x68) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x68);
    edx = esp + 0x2C;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x40) = eax;
    eax = MEM32(0x64D880);
    PUSH32(esp, edx);
    MEM32(esp + 0x48) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024CE8Du); RECOMP_ABI_CALL(0x001B32F0u, sub_001B32F0); /* call 0x001B32F0 */

loc_0024CE8D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x54;
    eax = esp + 0x3C;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024CEAFu); RECOMP_ABI_CALL(0x000FAF00u, sub_000FAF00); /* call 0x000FAF00 */

loc_0024CEAF: ;
    eax = MEM32(esp + 0x54);
    ecx = MEM32(esp + 0x58);
    edx = MEM32(esp + 0x5C);
    MEM32(ebp + 0x74) = eax;
    MEM32(ebp + 0x78) = ecx;
    MEM32(ebp + 0x7C) = edx;
    MEM32(ebp + 0x110) = 0;

loc_0024CECE: ;
    esi = MEM32(0x64D880);

loc_0024CED4: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */

loc_0024CED7: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x333920)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0024CFE1; /* jbe: below or equal (unsigned <=) */

loc_0024CEF7: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x333920)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0024CFE1; /* jbe: below or equal (unsigned <=) */

loc_0024CF0F: ;
    eax = MEM32(ebp + 0x210);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0024CFE1; /* jne: not equal / not zero */

loc_0024CF1D: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEM32(ebp + 0x210) = 0;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x4C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x54)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x50)); /* movss */
    eax = MEM32(esp + 0x54);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    ecx = MEM32(esp + 0x58);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ebp + 0x2C);
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x5C) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    eax = esp + 0x28;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024CF91u); RECOMP_ABI_CALL(0x000FAFE0u, sub_000FAFE0); /* call 0x000FAFE0 */

loc_0024CF91: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x58) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    ecx = MEM32(esp + 0x58);
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x60);
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x5C) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x5C);
    MEM32(ebp + 0x54) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    MEM32(ebp + 0x4C) = ecx;
    MEM32(ebp + 0x50) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024CFDCu); RECOMP_ABI_CALL(0x001B7BF0u, sub_001B7BF0); /* call 0x001B7BF0 */

loc_0024CFDC: ;
    goto loc_0024D4D1;

loc_0024CFE1: ;
    xmm1 = XMM_SCALAR(MEMF(0x333920)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024D035; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0024CFF4: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0);
    fp_top() = fabs(fp_top()); /* fabs */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024D00Au); RECOMP_ABI_CALL(0x000FDB20u, sub_000FDB20); /* call 0x000FDB20 */

loc_0024D00A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024D035; /* je: equal / zero */

loc_0024D011: ;
    ecx = MEM32(ebp + 0x1AC);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024D022u); RECOMP_ABI_CALL(0x0010AC70u, sub_0010AC70); /* call 0x0010AC70 */

loc_0024D022: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024D057; /* je: equal / zero */

loc_0024D029: ;
    MEM32(ebp + 0x210) = 0;
    goto loc_0024D057;

loc_0024D035: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x64D90C); /* subss */
    MEM32(ebp + 0x210) = 1;
    MEMF(ebp + 0x1AC) = xmm0.f[0]; /* movss */

loc_0024D057: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x1EC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x333928); /* addss */
    xmm7 = XMM_SCALAR(MEMF(0x49362C)); /* movss */
    MEMF(ebp + 0x2C) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0024D1AE; /* ja: above (unsigned >) (xmm1.f[0] vs xmm3.f[0]) */

loc_0024D07D: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024D087u); RECOMP_ABI_CALL(0x000FD100u, sub_000FD100); /* call 0x000FD100 */

loc_0024D087: ;
    eax = MEM32(esi + 0x18);
    xmm5 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333CDC); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    if (CMP_EQ(_fa, _fb)) goto loc_0024D0B9; /* je: equal / zero */

loc_0024D0B2: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    goto loc_0024D0BC;

loc_0024D0B9: ;
    xmm1 = xmm5; /* movaps */

loc_0024D0BC: ;
    xmm4 = XMM_SCALAR(MEMF(0x3337D0)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(0x33383C)); /* movss */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x33B4AC); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x1EC); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x204); /* comiss */
    MEMF(ebp + 0x1EC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024D130; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + 0x204)) */

loc_0024D0FC: ;
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x228)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm6.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024D130; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0024D10D: ;
    ecx = esp + 0x20;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024D118u); RECOMP_ABI_CALL(0x001B1260u, sub_001B1260); /* call 0x001B1260 */

loc_0024D118: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x2C); /* addss */
    MEMF(ebp + 0x2C) = xmm0.f[0]; /* movss */

loc_0024D130: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x228)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x1EC)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 0x204)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024D156; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0024D151: ;
    xmm1 = xmm0; /* movaps */
    goto loc_0024D15E;

loc_0024D156: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024D15E; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_0024D15B: ;
    xmm1 = xmm3; /* movaps */

loc_0024D15E: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ebp + 0x204); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(ebp + 0x1EC) = xmm1.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024D197; /* jnp: not parity */

loc_0024D173: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0024D1B6; /* jp: parity */

loc_0024D17C: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x228)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x333928); /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    MEMF(ebp + 0x2C) = xmm0.f[0]; /* movss */
    goto loc_0024D1B6;

loc_0024D197: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x204)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x333928); /* addss */
    MEMF(ebp + 0x2C) = xmm0.f[0]; /* movss */
    goto loc_0024D1B6;

loc_0024D1AE: ;
    xmm5 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */

loc_0024D1B6: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x4C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x50)); /* movss */
    eax = MEM32(esp + 0x54);
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x54)); /* movss */
    ecx = MEM32(esp + 0x58);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ebp + 0x2C);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    eax = esp + 0x28;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024D220u); RECOMP_ABI_CALL(0x000FAFE0u, sub_000FAFE0); /* call 0x000FAFE0 */

loc_0024D220: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x58) = xmm6.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    ecx = MEM32(esp + 0x58);
    xmm6.f[0] = xmm6.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x5C) = xmm6.f[0]; /* movss */
    edx = MEM32(esp + 0x5C);
    xmm6 = xmm1; /* movaps */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x333920)); /* fld float */
    xmm6.f[0] = xmm6.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x60) = xmm6.f[0]; /* movss */
    eax = MEM32(esp + 0x60);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(ebp + 0x4C) = ecx;
    MEM32(ebp + 0x50) = edx;
    MEM32(ebp + 0x54) = eax;
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_0024D3F8; /* ja: above (unsigned >) */

loc_0024D289: ;
    ecx = MEM32(0x654294);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0024D2A3; /* jne: not equal / not zero */

loc_0024D294: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_0024D2A3: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024D2ADu); RECOMP_ABI_CALL(0x000FD100u, sub_000FD100); /* call 0x000FD100 */

loc_0024D2AD: ;
    esi = MEM32(esi + 0x18);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x333920)); /* fsub dword ptr [0x333920] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333CDC)); /* fmul dword ptr [0x333cdc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0024D2E4; /* je: equal / zero */

loc_0024D2DD: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x3C)); /* movss */
    goto loc_0024D2E7;

loc_0024D2E4: ;
    xmm0 = xmm5; /* movaps */

loc_0024D2E7: ;
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm6 = xmm5; /* movaps */
    xmm6.f[0] = xmm6.f[0] / MEMF(0x33B4AC); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x2E4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333884); /* mulss */
    MEMF(ebp + 0xA8) = xmm0.f[0]; /* movss */
    xmm6 = XMM_SCALAR(MEMF(ebp + 0x4C)); /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x50)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(ebp + 0x54)); /* movss */
    MEMF(esp + 0x54) = xmm6.f[0]; /* movss */
    eax = MEM32(esp + 0x54);
    MEMF(esp + 0x58) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp + 0x58);
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x5C) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    MEMF(esp + 0x58) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm2.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    edx = esp + 0x64;
    eax = esp + 0x58;
    ecx = esp + 0x28;
    MEMF(esp + 0x60) = xmm5.f[0]; /* movss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024D38Au); RECOMP_ABI_CALL(0x000FC8A0u, sub_000FC8A0); /* call 0x000FC8A0 */

loc_0024D38A: ;
    eax = MEM32(esp + 0x64);
    ecx = MEM32(esp + 0x68);
    edx = MEM32(esp + 0x6C);
    xmm5 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEM32(esp + 0x28) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x58);
    MEM32(esp + 0x2C) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x38); /* addss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    ecx = MEM32(esp + 0x5C);
    MEM32(esp + 0x30) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x30); /* addss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x60);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x4C) = eax;
    MEM32(ebp + 0x50) = ecx;
    MEM32(ebp + 0x54) = edx;

loc_0024D3F8: ;
    ecx = MEM32(ebp + 0x80);
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x228)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0x1EC); /* subss */
    eax = MEM32(ebp + 0x54);
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x1A8); /* addss */
    esi = MEM32(ebp + 0x4C);
    edi = MEM32(ebp + 0x50);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    xmm5.f[0] = xmm5.f[0] / xmm0.f[0]; /* divss */
    MEM32(esp + 0x58) = eax;
    MEMF(esp) = xmm5.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024D433u); RECOMP_ABI_CALL(0x000FE530u, sub_000FE530); /* call 0x000FE530 */

loc_0024D433: ;
    edx = MEM32(ebp + 0x80);
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x228)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0x204); /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x1A8); /* addss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024D472u); RECOMP_ABI_CALL(0x000FE530u, sub_000FE530); /* call 0x000FE530 */

loc_0024D472: ;
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x1EC)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebp + 0x204); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x228)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + 0x204); /* subss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3337C8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x58); /* addss */
    MEMF(esp + 0x58) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x58);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x268) = esi;
    MEM32(ebp + 0x26C) = edi;
    MEM32(ebp + 0x270) = eax;

loc_0024D4D1: ;
    edi = MEM32(0x64D880);
    esi = esp + 0x6C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024D4E0u); RECOMP_ABI_CALL(0x001022C0u, sub_001022C0); /* call 0x001022C0 */

loc_0024D4E0: ;
    eax = MEM32(0x64D880);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024D4EFu); RECOMP_ABI_CALL(0x001B3F30u, sub_001B3F30); /* call 0x001B3F30 */

loc_0024D4EF: ;
    eax = MEM32(0x64D880);
    edx = esp + 0x70;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024D501u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024D501: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x1B4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x70); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0x150); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x1B8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x1BC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x74); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x78); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + 0x154); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ebp + 0x158); /* subss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x58);
    MEM32(esp + 0x40) = eax;
    eax = esp + 0x24;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x58);
    MEMF(esp + 0x5C) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    eax = MEM32(0x64D880);
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x48) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024D57Fu); RECOMP_ABI_CALL(0x001B32F0u, sub_001B32F0); /* call 0x001B32F0 */

loc_0024D57F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x48); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x6C;
    eax = esp + 0x3C;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024D5A1u); RECOMP_ABI_CALL(0x000FAF00u, sub_000FAF00); /* call 0x000FAF00 */

loc_0024D5A1: ;
    eax = MEM32(esp + 0x74);
    ecx = MEM32(esp + 0x6C);
    edx = MEM32(esp + 0x70);
    esi = MEM32(0x64D880);
    MEM32(esp + 0x3C) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    MEM32(esp + 0x44) = eax;
    eax = ebp + 0x74;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x40) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEMF(ebp + 0x78) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024D5E5; /* je: equal / zero */

loc_0024D5DE: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x3C)); /* movss */
    goto loc_0024D5ED;

loc_0024D5E5: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */

loc_0024D5ED: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x49362C); /* mulss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x33B4AC); /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333884); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + 0x7C); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x7C); /* addss */
    MEMF(ebp + 0x7C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024D646u); RECOMP_ABI_CALL(0x00102F50u, sub_00102F50); /* call 0x00102F50 */

loc_0024D646: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x3E8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0024D656: ;
    edx = MEM32(0x64D874);
    MEM32(edx) = 0xFFFFFFFFu;
    eax = 0x3E8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0024D66F: ;
    PUSH32(esp, 2);
    MEM32(ebp + 0x244) = ebx;
    MEM32(ebp + 0x210) = ebx;
    MEM32(ebp + 0x1CC) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024D688u); RECOMP_ABI_CALL(0x001B1B10u, sub_001B1B10); /* call 0x001B1B10 */

loc_0024D688: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ebp + 0x110) = ebx;
    eax = 0x3E8;
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_0024D6A0
 * Original: 0x0024D6A0 - 0x0024D7FE (350 bytes, 113 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024D6A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D878);
    ecx = MEM32(eax + 0x44);
    eax = MEM32(0x64D870);
    edx = MEM32(eax + 0x14);
    MEM32(esp) = ecx;
    ecx = MEM32(0x64D1F8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0024D7D3; /* je: equal / zero */

loc_0024D6C3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 0xCC00008Eu);
    eax = 0x493610;
    PUSH32(esp, 0x0024D6D8u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024D6D8: ;
    edi = MEM32(0x64D33C);
    ebp = MEM32(0x3400FC);
    ebx = MEM32(0x64D3A4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024D6F6; /* je: equal / zero */

loc_0024D6F1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024D6FA; /* je: equal / zero */

loc_0024D6F6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024D706; /* je: equal / zero */

loc_0024D6FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D706; /* jne: not equal / not zero */

loc_0024D6FF: ;
    ecx = 0xCC00008Eu;
    goto loc_0024D70D;

loc_0024D706: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024D72A; /* je: equal / zero */

loc_0024D70D: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024D725u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024D725: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0024D72F;

loc_0024D72A: ;
    eax = 0xCC00008Eu;

loc_0024D72F: ;
    ecx = MEM32(0x34AC3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(0x65094C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0024D742; /* jne: not equal / not zero */

loc_0024D73E: ;
    eax = ecx;
    goto loc_0024D75E;

loc_0024D742: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D74E; /* jne: not equal / not zero */

loc_0024D747: ;
    eax = MEM32(0x614FCC);
    goto loc_0024D758;

loc_0024D74E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D758; /* jne: not equal / not zero */

loc_0024D753: ;
    eax = MEM32(0x614FD0);

loc_0024D758: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 4);

loc_0024D75E: ;
    esi = MEM32(eax + 0x44);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xB60024EDu);
    eax = 0x493610;
    MEM32(0x653B1C) = esi;
    PUSH32(esp, 0x0024D77Cu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024D77C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024D788; /* je: equal / zero */

loc_0024D783: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024D78C; /* je: equal / zero */

loc_0024D788: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024D798; /* je: equal / zero */

loc_0024D78C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D798; /* jne: not equal / not zero */

loc_0024D791: ;
    ecx = 0xB60024EDu;
    goto loc_0024D79F;

loc_0024D798: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024D7C4; /* je: equal / zero */

loc_0024D79F: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024D7B7u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024D7B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(0x650948) = eax;
    POP32(esp, ebx);
    goto loc_0024D7D9;

loc_0024D7C4: ;
    POP32(esp, edi);
    eax = 0xB60024EDu;
    POP32(esp, ebp);
    MEM32(0x650948) = eax;
    POP32(esp, ebx);
    goto loc_0024D7D9;

loc_0024D7D3: ;
    esi = MEM32(0x653B1C);

loc_0024D7D9: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0024D7F7; /* je: equal / zero */

loc_0024D7DF: ;
    eax = MEM32(esp);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024D7F7; /* je: equal / zero */

loc_0024D7E7: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x650948);
    PUSH32(esp, 0x0024D7F7u); RECOMP_ABI_CALL(0x001EAF50u, sub_001EAF50); /* call 0x001EAF50 */

loc_0024D7F7: ;
    eax = 0x3E8;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024D800
 * Original: 0x0024D800 - 0x0024D984 (388 bytes, 113 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0024D800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024D800: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x64D878);
    ecx = MEM32(0x64D1F8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x44);
    eax = MEM32(0x64D870);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ecx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0024D88C; /* je: equal / zero */

loc_0024D820: ;
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 0x3200026B);
    eax = 0x493610;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024D832u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024D832: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024D848; /* je: equal / zero */

loc_0024D83F: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024D852; /* je: equal / zero */

loc_0024D848: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024D85E; /* je: equal / zero */

loc_0024D852: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D85E; /* jne: not equal / not zero */

loc_0024D857: ;
    ecx = 0x3200026B;
    goto loc_0024D865;

loc_0024D85E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024D882; /* je: equal / zero */

loc_0024D865: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024D87Du); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024D87D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0024D887;

loc_0024D882: ;
    eax = 0x3200026B;

loc_0024D887: ;
    MEM32(0x650944) = eax;

loc_0024D88C: ;
    ecx = MEM32(0x64D880);
    eax = MEM32(ecx);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_0024D8A9; /* js: sign (negative) */

loc_0024D898: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = eax | 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024D8A6u); RECOMP_ABI_CALL(0x0001B920u, sub_0001B920); /* call 0x0001B920 */

loc_0024D8A6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024D8A9: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(eax + 0x18);
    MEM8(ecx + 0x2C) = 0x20;
    MEM32(esi + 0x2C) = 0;
    MEM32(esi + 0x30) = 0;
    MEM32(esi + 0x1F4) = 0;
    _fb = (uint32_t)(0x1FC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1FC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 2;

loc_0024D8D8: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024D927; /* je: equal / zero */

loc_0024D8DE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D8EB; /* jne: not equal / not zero */

loc_0024D8E3: ;
    ecx = MEM32(0x614FCC);
    goto loc_0024D8F6;

loc_0024D8EB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024D8F6; /* jne: not equal / not zero */

loc_0024D8F0: ;
    ecx = MEM32(0x614FD0);

loc_0024D8F6: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(esi + -152);
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024D916; /* je: equal / zero */

loc_0024D908: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x200000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0024D927; /* jne: not equal / not zero */

loc_0024D90F: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0024D922;

loc_0024D916: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024D927; /* je: equal / zero */

loc_0024D91D: ;
    eax = eax & 0xFFDFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0024D922: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024D927u); RECOMP_ABI_CALL(0x0001CAD0u, sub_0001CAD0); /* call 0x0001CAD0 */

loc_0024D927: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0024D8D8; /* jne: not equal / not zero */

loc_0024D92D: ;
    edx = MEM32(0x64D878);
    ecx = MEM32(0x64D880);
    eax = MEM32(0x64D87C);
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x650944);
    MEM32(0x64D884) = ecx;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x18), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024D979; /* je: equal / zero */

loc_0024D955: ;
    MEM32(eax + 0x18) = edx;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0024D979; /* jne: not equal / not zero */

loc_0024D961: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024D979; /* je: equal / zero */

loc_0024D96B: ;
    ecx = MEM32(edx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024D979; /* je: equal / zero */

loc_0024D972: ;
    MEM32(eax + 4) = 0xFFFFFFFFu;

loc_0024D979: ;
    POP32(esp, edi);
    eax = 0x3E8;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0024D990
 * Original: 0x0024D990 - 0x0024DA0D (125 bytes, 39 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024D990: ;
    eax = MEM32(0x64D878);
    ecx = MEM32(0x64D880);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x44);
    eax = MEM32(ecx);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_0024D9BD; /* js: sign (negative) */

loc_0024D9A6: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = eax | 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024D9B4u); RECOMP_ABI_CALL(0x0001B920u, sub_0001B920); /* call 0x0001B920 */

loc_0024D9B4: ;
    ecx = MEM32(0x64D880);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024D9BD: ;
    edi = MEM32(ebx + 0x44);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024D9F4; /* je: equal / zero */

loc_0024D9C5: ;
    eax = MEM32(0x64D87C);
    edx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = eax + 0x54;
    MEM32(0x64D87C) = edx;
    MEM32(0x64D884) = ecx;
    PUSH32(esp, 0x0024D9E5u); RECOMP_ABI_CALL(0x001083D0u, sub_001083D0); /* call 0x001083D0 */

loc_0024D9E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0024D9F4; /* je: equal / zero */

loc_0024D9EA: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0024D9F1u); RECOMP_ABI_CALL(0x00270A40u, sub_00270A40); /* call 0x00270A40 */

loc_0024D9F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024D9F4: ;
    eax = 1;
    MEM32(ebx + 8) = eax;
    MEM32(ebx + 0xC) = eax;
    POP32(esp, edi);
    MEM32(ebx) = 0;
    eax = 0x3E8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024DA10
 * Original: 0x0024DA10 - 0x0024DBA0 (400 bytes, 117 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0024DA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0024DA10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    eax = MEM32(0x64D878);
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x44);
    eax = MEM32(esi + 0x54);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0024DA91; /* jne: not equal / not zero */

loc_0024DA34: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x64D90C); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x58); /* subss */
    _fca = xmm1.f[0]; _fcb = MEMF(esi + 0x140); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024DB88; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(esi + 0x140)) */

loc_0024DA51: ;
    _fa = (uint32_t)(MEM32(esi + 0x19C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x19C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024DA62; /* jne: not equal / not zero */

loc_0024DA59: ;
    MEM32(esi + 0x54) = 9;
    goto loc_0024DA91;

loc_0024DA62: ;
    eax = MEM32(0x64D880);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x80000007u);
    PUSH32(esp, eax);
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DA76u); RECOMP_ABI_CALL(0x00020DF0u, sub_00020DF0); /* call 0x00020DF0 */

loc_0024DA76: ;
    ecx = MEM32(edi + 0x14);
    edx = MEM32(ecx);
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    MEM16(edx + 0x3E) = LO16(ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x54) = 8;

loc_0024DA91: ;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), 8 (32-bit) */
    edi = MEM32(0x64D880);
    if (CMP_NE(_fa, _fb)) goto loc_0024DACA; /* jne: not equal / not zero */

loc_0024DA9D: ;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0024DACA; /* jns: not sign (positive) */

loc_0024DAAA: ;
    _fa = (uint32_t)(MEM32(esi + 0x130)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x130), 1 (32-bit) */
    MEM32(esi + 0x54) = 9;
    if (CMP_NE(_fa, _fb)) goto loc_0024DACA; /* jne: not equal / not zero */

loc_0024DABA: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x64D90C); /* subss */
    MEMF(esi + 0x58) = xmm1.f[0]; /* movss */

loc_0024DACA: ;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024DB94; /* jne: not equal / not zero */

loc_0024DAD4: ;
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DADBu); RECOMP_ABI_CALL(0x0014B9A0u, sub_0014B9A0); /* call 0x0014B9A0 */

loc_0024DADB: ;
    _fa = (uint32_t)(MEM32(esi + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x78), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024DB02; /* je: equal / zero */

loc_0024DAE0: ;
    eax = MEM32(esi + 0x130);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024DAF0; /* je: equal / zero */

loc_0024DAEB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024DAFD; /* jne: not equal / not zero */

loc_0024DAF0: ;
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DAF7u); RECOMP_ABI_CALL(0x001EF330u, sub_001EF330); /* call 0x001EF330 */

loc_0024DAF7: ;
    edi = MEM32(0x64D880);

loc_0024DAFD: ;
    MEM32(esi + 0x78) = ebp;
    goto loc_0024DB0B;

loc_0024DB02: ;
    _fa = (uint32_t)(MEM32(esi + 0x130)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x130), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024DB37; /* je: equal / zero */

loc_0024DB0B: ;
    eax = MEM32(0x64D87C);
    ecx = MEM32(0x64D878);
    MEM32(esi + 0x54) = ebp;
    MEM32(eax + 0x20) = ebp;
    MEM32(eax + 0xC) = ebp;
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D884) = edi;
    eax = 0x3E8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0024DB37: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x64D90C); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x58); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x178); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024DB71; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 0x178)) */

loc_0024DB4D: ;
    PUSH32(esp, 1);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DB56u); RECOMP_ABI_CALL(0x001F05C0u, sub_001F05C0); /* call 0x001F05C0 */

loc_0024DB56: ;
    edx = MEM32(0x64D874);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = 0xFFFFFFFFu;
    eax = 0x3E8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0024DB71: ;
    eax = MEM32(0x64D874);
    MEM32(eax) = 0xFFFFFFFFu;
    eax = 0x3E8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0024DB88: ;
    ecx = MEM32(0x64D874);
    MEM32(ecx) = 0xFFFFFFFFu;

loc_0024DB94: ;
    POP32(esp, edi);
    eax = 0x3E8;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0024DBA0
 * Original: 0x0024DBA0 - 0x0024E1F8 (1624 bytes, 440 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0024DBA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0024DBA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x60));
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D878);
    ecx = MEM32(0x64D1F8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x44);
    eax = MEM32(0x64D870);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0024DC31; /* je: equal / zero */

loc_0024DBC5: ;
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 0xB600246Bu);
    eax = 0x493610;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DBD7u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024DBD7: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024DBED; /* je: equal / zero */

loc_0024DBE4: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0024DBF7; /* je: equal / zero */

loc_0024DBED: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024DC03; /* je: equal / zero */

loc_0024DBF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024DC03; /* jne: not equal / not zero */

loc_0024DBFC: ;
    ecx = 0xB600246Bu;
    goto loc_0024DC0A;

loc_0024DC03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024DC27; /* je: equal / zero */

loc_0024DC0A: ;
    edx = ecx;
    if (8) _cf = (int)(((edx) >> ((8) - 1)) & 1);
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x47EC30)) >> 32) & 1);
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DC22u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024DC22: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0024DC2C;

loc_0024DC27: ;
    eax = 0xB600246Bu;

loc_0024DC2C: ;
    MEM32(0x650940) = eax;

loc_0024DC31: ;
    esi = MEM32(0x64D880);
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024DC4B; /* je: equal / zero */

loc_0024DC3E: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024DC4B; /* je: equal / zero */

loc_0024DC45: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) | 0x80000000u;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0024DC4B: ;
    eax = MEM32(esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0024DC75; /* je: equal / zero */

loc_0024DC56: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + 8);
    ebx = MEM32(ecx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024DC6B; /* jne: not equal / not zero */

loc_0024DC64: ;
    eax = MEM32(0x614FCC);
    goto loc_0024DC77;

loc_0024DC6B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024DC77; /* je: equal / zero */

loc_0024DC75: ;
    eax = ebx;

loc_0024DC77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E1E0; /* je: equal / zero */

loc_0024DC7F: ;
    eax = MEM32(ebp + 0xE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = 0xCA;
    if (CMP_EQ(_fa, _fb)) goto loc_0024DD51; /* je: equal / zero */

loc_0024DC92: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DC9Eu); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024DC9E: ;
    fp_push(MEMF(ebp + 0x11C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    esi = MEM32(0x64D880);
    fp_push(MEMF(ebp + 0x120)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    fp_push(MEMF(ebp + 0x124)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
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
    fp_push(MEMF(ebp + 0xEC)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_0024DD51; /* jb: below (unsigned <) */

loc_0024DCEB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x6C) = 2;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = esi;
    MEM32(esp + 0x64) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0024DD0B; /* jne: not equal / not zero */

loc_0024DD04: ;
    eax = MEM32(0x614FCC);
    goto loc_0024DD17;

loc_0024DD0B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024DD17; /* je: equal / zero */

loc_0024DD15: ;
    eax = ebx;

loc_0024DD17: ;
    edx = esp + 0x3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DD20u); RECOMP_ABI_CALL(0x0010F4D0u, sub_0010F4D0); /* call 0x0010F4D0 */

loc_0024DD20: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DD25u); RECOMP_ABI_CALL(0x00105B40u, sub_00105B40); /* call 0x00105B40 */

loc_0024DD25: ;
    esi = MEM32(0x64D880);
    ebx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DD32u); RECOMP_ABI_CALL(0x001D70A0u, sub_001D70A0); /* call 0x001D70A0 */

loc_0024DD32: ;
    eax = MEM32(0x64D87C);
    ecx = MEM32(0x64D878);
    MEM32(0x64D87C) = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x64D884) = esi;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0xC) = ecx;

loc_0024DD51: ;
    ecx = MEM32(0x34AC38);
    PUSH32(esp, esi);
    eax = 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DD62u); RECOMP_ABI_CALL(0x00068450u, sub_00068450); /* call 0x00068450 */

loc_0024DD62: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E0D7; /* je: equal / zero */

loc_0024DD6D: ;
    eax = MEM32(ebp + 0xF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024DF4C; /* je: equal / zero */

loc_0024DD7B: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DD87u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024DD87: ;
    esi = MEM32(0x64D880);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x18;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DD9Bu); RECOMP_ABI_CALL(0x00260460u, sub_00260460); /* call 0x00260460 */

loc_0024DD9B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    edi = ebp + 0x40;
    eax = esp + 0x30;
    ecx = edi;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DDDFu); RECOMP_ABI_CALL(0x000C3B00u, sub_000C3B00); /* call 0x000C3B00 */

loc_0024DDDF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0024DF4C; /* jne: not equal / not zero */

loc_0024DDE7: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DDF3u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024DDF3: ;
    esi = MEM32(0x64D880);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x30;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DE07u); RECOMP_ABI_CALL(0x002605B0u, sub_002605B0); /* call 0x002605B0 */

loc_0024DE07: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    ebx = ebp + 0x4C;
    eax = esp + 0x18;
    ecx = ebx;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DE4Bu); RECOMP_ABI_CALL(0x000C3B00u, sub_000C3B00); /* call 0x000C3B00 */

loc_0024DE4B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0024DF4C; /* jne: not equal / not zero */

loc_0024DE53: ;
    ecx = MEM32(ebp + 0x138);
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DE62u); RECOMP_ABI_CALL(0x000FF390u, sub_000FF390); /* call 0x000FF390 */

loc_0024DE62: ;
    eax = MEM32(0x64D880);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DE71u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024DE71: ;
    esi = MEM32(0x64D880);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x30;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DE85u); RECOMP_ABI_CALL(0x00260460u, sub_00260460); /* call 0x00260460 */

loc_0024DE85: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    ecx = MEM32(esp + 0x1C);
    MEM32(edi) = eax;
    eax = esp + 0x24;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = esi;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DEDBu); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024DEDB: ;
    eax = MEM32(0x64D880);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DEECu); RECOMP_ABI_CALL(0x002605B0u, sub_002605B0); /* call 0x002605B0 */

loc_0024DEEC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    edx = MEM32(esp + 0x1C);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x20);
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = edx;
    MEM32(ebx + 8) = eax;
    ecx = MEM32(ebp + 0x138);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DF43u); RECOMP_ABI_CALL(0x000FF390u, sub_000FF390); /* call 0x000FF390 */

loc_0024DF43: ;
    esi = MEM32(0x64D880);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024DF4C: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DF58u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024DF58: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x58)); /* fsub dword ptr [ebp + 0x58] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x5C)); /* fsub dword ptr [ebp + 0x5c] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x60)); /* fsub dword ptr [ebp + 0x60] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] * fp_top()); fp_pop(); /* fmulp st(3) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333F64)); /* fmul dword ptr [0x333f64] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3337C0)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0024DFE4; /* jbe: below or equal (unsigned <=) */

loc_0024DFA2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x333930)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024DFB8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0024DFB5: ;
    xmm0 = xmm1; /* movaps */

loc_0024DFB8: ;
    eax = MEM32(0x33B4C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024DFE4; /* je: equal / zero */

loc_0024DFC1: ;
    edx = MEM32(0x33B4C8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0024DFE4; /* je: equal / zero */

loc_0024DFCC: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEM32(edx * 4 + 0x49A868) = 1;
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DFE4u); RECOMP_ABI_CALL(0x000C0EF0u, sub_000C0EF0); /* call 0x000C0EF0 */

loc_0024DFE4: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    eax = MEM32(0x64D880);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024DFF3u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024DFF3: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    MEM32(ebp + 0x58) = ecx;
    MEM32(ebp + 0x5C) = edx;
    MEM32(ebp + 0x60) = eax;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E1EB; /* je: equal / zero */

loc_0024E016: ;
    eax = MEM32(0x64D880);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024E025u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024E025: ;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024E037; /* jne: not equal / not zero */

loc_0024E030: ;
    eax = MEM32(0x614FCC);
    goto loc_0024E041;

loc_0024E037: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024E041; /* jne: not equal / not zero */

loc_0024E03C: ;
    eax = MEM32(0x614FD0);

loc_0024E041: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024E04Bu); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024E04B: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    eax = MEM32(ebp + 0x118);
    fp_push(MEMF(esp + 0x38)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] * fp_top()); fp_pop(); /* fmulp st(3) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_0024E09B; /* jne: not equal / not zero */

loc_0024E08C: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x128)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    goto loc_0024E0A8;

loc_0024E09B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 0x128); /* comiss */

loc_0024E0A8: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024E1EB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + 0x128)) */

loc_0024E0AE: ;
    eax = MEM32(0x64D880);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024E0B8u); RECOMP_ABI_CALL(0x001D6EA0u, sub_001D6EA0); /* call 0x001D6EA0 */

loc_0024E0B8: ;
    ebx = MEM32(0x64D880);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024E0C3u); RECOMP_ABI_CALL(0x001D70A0u, sub_001D70A0); /* call 0x001D70A0 */

loc_0024E0C3: ;
    MEM32(ebp + 0x10) = 0;
    eax = 0x3E8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0024E0D7: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0024E12A; /* jnp: not parity */

loc_0024E0E9: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x13C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x33382C); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x30); /* addss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x64D90C); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024E13F; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0024E113: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x400000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0024E13F; /* je: equal / zero */

loc_0024E11B: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E13F; /* je: equal / zero */

loc_0024E128: ;
    goto loc_0024E182;

loc_0024E12A: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x64D90C); /* subss */
    MEMF(ebp + 0x30) = xmm0.f[0]; /* movss */

loc_0024E13F: ;
    eax = MEM32(ebp + 0xF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E1C7; /* je: equal / zero */

loc_0024E149: ;
    ecx = esp + 0x30;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024E154u); RECOMP_ABI_CALL(0x0025DCA0u, sub_0025DCA0); /* call 0x0025DCA0 */

loc_0024E154: ;
    ecx = MEM32(esp + 0x30);
    eax = 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0024E16D; /* jne: not equal / not zero */

loc_0024E161: ;
    _fa = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x34), eax (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0024E16D; /* jne: not equal / not zero */

loc_0024E167: ;
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x38), eax (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0024E1C7; /* je: equal / zero */

loc_0024E16D: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x400000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0024E1C7; /* je: equal / zero */

loc_0024E175: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E1C7; /* je: equal / zero */

loc_0024E182: ;
    MEM32(esp + 0x6C) = 2;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = esi;
    MEM32(esp + 0x64) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024E19Bu); RECOMP_ABI_CALL(0x0012D180u, sub_0012D180); /* call 0x0012D180 */

loc_0024E19B: ;
    edx = esp + 0x3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024E1A4u); RECOMP_ABI_CALL(0x0010F4D0u, sub_0010F4D0); /* call 0x0010F4D0 */

loc_0024E1A4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024E1A9u); RECOMP_ABI_CALL(0x00105B40u, sub_00105B40); /* call 0x00105B40 */

loc_0024E1A9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ebx = MEM32(0x64D880);
    MEMF(ebp + 0x30) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024E1BCu); RECOMP_ABI_CALL(0x001D70A0u, sub_001D70A0); /* call 0x001D70A0 */

loc_0024E1BC: ;
    edx = MEM32(0x650940);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0024E1C7u); RECOMP_ABI_CALL(0x00256270u, sub_00256270); /* call 0x00256270 */

loc_0024E1C7: ;
    edx = MEM32(0x64D874);
    MEM32(edx) = 0xFFFFFFFFu;
    eax = 0x3E8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0024E1E0: ;
    eax = MEM32(0x64D874);
    MEM32(eax) = 0xFFFFFFFFu;

loc_0024E1EB: ;
    POP32(esp, edi);
    eax = 0x3E8;
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_0024E200
 * Original: 0x0024E200 - 0x0024E32F (303 bytes, 102 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024E200: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D878);
    ecx = MEM32(0x64D880);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x44);
    eax = MEM32(ecx);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebp;
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_0024E234; /* js: sign (negative) */

loc_0024E21D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = eax | 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024E22Bu); RECOMP_ABI_CALL(0x0001B920u, sub_0001B920); /* call 0x0001B920 */

loc_0024E22B: ;
    ecx = MEM32(0x64D880);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024E234: ;
    edi = MEM32(ebp + 0x390);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E278; /* je: equal / zero */

loc_0024E23F: ;
    eax = MEM32(0x64D87C);
    edx = MEM32(0x64D878);
    esi = eax + 0x54;
    MEM32(0x64D87C) = edx;
    MEM32(0x64D884) = ecx;
    PUSH32(esp, 0x0024E25Eu); RECOMP_ABI_CALL(0x001083D0u, sub_001083D0); /* call 0x001083D0 */

loc_0024E25E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E278; /* je: equal / zero */

loc_0024E262: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0024E269u); RECOMP_ABI_CALL(0x00270A40u, sub_00270A40); /* call 0x00270A40 */

loc_0024E269: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E278; /* je: equal / zero */

loc_0024E270: ;
    PUSH32(esp, 0x0024E275u); RECOMP_ABI_CALL(0x00270910u, sub_00270910); /* call 0x00270910 */

loc_0024E275: ;
    MEM32(ebp + 4) = eax;

loc_0024E278: ;
    eax = MEM32(ebp + 0x56C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E286; /* jne: not equal / not zero */

loc_0024E282: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0024E2C0;

loc_0024E286: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E292; /* jne: not equal / not zero */

loc_0024E28B: ;
    eax = MEM32(0x614FCC);
    goto loc_0024E29C;

loc_0024E292: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E29C; /* jne: not equal / not zero */

loc_0024E297: ;
    eax = MEM32(0x614FD0);

loc_0024E29C: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024E2AD; /* je: equal / zero */

loc_0024E2A3: ;
    eax = MEM32(eax + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x28);
    goto loc_0024E2BE;

loc_0024E2AD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024E2BC; /* je: equal / zero */

loc_0024E2B2: ;
    edx = MEM32(eax + 0x14);
    eax = MEM32(edx);
    eax = MEM32(eax + 0x70);
    goto loc_0024E2BE;

loc_0024E2BC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0024E2BE: ;
    ebx = eax;

loc_0024E2C0: ;
    esi = ebp + 0x2CC;
    ebp = 0xF;
    goto loc_0024E2D0;

    /* nop */

loc_0024E2D0: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + -704) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0024E310; /* je: equal / zero */

loc_0024E2E0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    edx = MEM32(0x614FD0);
    eax = MEM32(0x614FCC);
    if (CMP_NE(_fa, _fb)) goto loc_0024E2F4; /* jne: not equal / not zero */

loc_0024E2F0: ;
    edi = eax;
    goto loc_0024E2FD;

loc_0024E2F4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    edi = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0024E2FD; /* je: equal / zero */

loc_0024E2FB: ;
    edi = ebx;

loc_0024E2FD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E30B; /* je: equal / zero */

loc_0024E302: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    eax = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0024E30B; /* je: equal / zero */

loc_0024E309: ;
    eax = ecx;

loc_0024E30B: ;
    PUSH32(esp, 0x0024E310u); RECOMP_ABI_CALL(0x001079F0u, sub_001079F0); /* call 0x001079F0 */

loc_0024E310: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0024E2D0; /* jne: not equal / not zero */

loc_0024E316: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    /* nop */
    MEM32(ecx + 0x4C) = 0;
    eax = 0x3E8;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024E330
 * Original: 0x0024E330 - 0x0024EC62 (2354 bytes, 756 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024E330: ;
    eax = MEM32(0x64D870);
    ecx = MEM32(0x64D1F8);
    edx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E3B1; /* je: equal / zero */

loc_0024E345: ;
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 0xB0044F7);
    eax = 0x493610;
    PUSH32(esp, 0x0024E357u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024E357: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E36D; /* je: equal / zero */

loc_0024E364: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E377; /* je: equal / zero */

loc_0024E36D: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E383; /* je: equal / zero */

loc_0024E377: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E383; /* jne: not equal / not zero */

loc_0024E37C: ;
    ecx = 0xB0044F7;
    goto loc_0024E38A;

loc_0024E383: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024E3A7; /* je: equal / zero */

loc_0024E38A: ;
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
    PUSH32(esp, 0x0024E3A2u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024E3A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0024E3AC;

loc_0024E3A7: ;
    eax = 0xB0044F7;

loc_0024E3AC: ;
    MEM32(0x65093C) = eax;

loc_0024E3B1: ;
    eax = MEM32(0x64D29C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E3C5; /* je: equal / zero */

loc_0024E3BA: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 0x490) = xmm0.f[0]; /* movss */

loc_0024E3C5: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x43000000);
    ebp = 1;
    PUSH32(esp, 5);
    eax = ebp;
    esi = 0x15;
    PUSH32(esp, 0x0024E3DFu); RECOMP_ABI_CALL(0x000F3150u, sub_000F3150); /* call 0x000F3150 */

loc_0024E3DF: ;
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 7);
    eax = ebp;
    PUSH32(esp, 0x0024E3EDu); RECOMP_ABI_CALL(0x000F3150u, sub_000F3150); /* call 0x000F3150 */

loc_0024E3ED: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    eax = ebp;
    PUSH32(esp, 0x0024E3FBu); RECOMP_ABI_CALL(0x000F3150u, sub_000F3150); /* call 0x000F3150 */

loc_0024E3FB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x11;
    PUSH32(esp, 0x0024E40Bu); RECOMP_ABI_CALL(0x000F3150u, sub_000F3150); /* call 0x000F3150 */

loc_0024E40B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 4;
    PUSH32(esp, 0x0024E41Bu); RECOMP_ABI_CALL(0x000F3150u, sub_000F3150); /* call 0x000F3150 */

loc_0024E41B: ;
    eax = MEM32(0x33B4C0);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E46C; /* je: equal / zero */

loc_0024E427: ;
    edx = MEM32(0x33B4C8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E44C; /* je: equal / zero */

loc_0024E432: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = edx;
    MEM32(edx * 4 + 0x49A878) = 0;
    PUSH32(esp, 0x0024E446u); RECOMP_ABI_CALL(0x000C0EA0u, sub_000C0EA0); /* call 0x000C0EA0 */

loc_0024E446: ;
    edx = MEM32(0x33B4C8);

loc_0024E44C: ;
    eax = MEM32(0x33B4C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E46C; /* je: equal / zero */

loc_0024E455: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E46C; /* je: equal / zero */

loc_0024E45A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx * 4 + 0x49A868) = 0;
    PUSH32(esp, 0x0024E46Cu); RECOMP_ABI_CALL(0x000C0EF0u, sub_000C0EF0); /* call 0x000C0EF0 */

loc_0024E46C: ;
    eax = MEM32(0x65093C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E47C; /* jne: not equal / not zero */

loc_0024E475: ;
    eax = MEM32(0x614FCC);
    goto loc_0024E486;

loc_0024E47C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E486; /* jne: not equal / not zero */

loc_0024E481: ;
    eax = MEM32(0x614FD0);

loc_0024E486: ;
    ecx = MEM32(0x34AC38);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x428) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x428;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x11);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024E49Bu); RECOMP_ABI_CALL(0x000898F0u, sub_000898F0); /* call 0x000898F0 */

loc_0024E49B: ;
    eax = MEM32(0x65093C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E4AE; /* jne: not equal / not zero */

loc_0024E4A7: ;
    eax = MEM32(0x614FCC);
    goto loc_0024E4B8;

loc_0024E4AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E4B8; /* jne: not equal / not zero */

loc_0024E4B3: ;
    eax = MEM32(0x614FD0);

loc_0024E4B8: ;
    edx = MEM32(0x64D870);
    ecx = MEM32(edx + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0024E4C8u); RECOMP_ABI_CALL(0x0008F6A0u, sub_0008F6A0); /* call 0x0008F6A0 */

loc_0024E4C8: ;
    xmm0 = XMM_SCALAR(MEMF(0x333ED4)); /* movss */
    esi = MEM32(0x65093C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x33383C)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0024E4FE; /* jne: not equal / not zero */

loc_0024E4F7: ;
    eax = MEM32(0x614FCC);
    goto loc_0024E50A;

loc_0024E4FE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024E50A; /* je: equal / zero */

loc_0024E508: ;
    eax = esi;

loc_0024E50A: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024E54D; /* je: equal / zero */

loc_0024E511: ;
    eax = MEM32(eax + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E54D; /* je: equal / zero */

loc_0024E51C: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E54D; /* jne: not equal / not zero */

loc_0024E523: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E54D; /* je: equal / zero */

loc_0024E52A: ;
    SET_LO8(ecx, MEM8(eax + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0024E54D; /* jbe: below or equal (unsigned <=) */

loc_0024E531: ;
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E54D; /* je: equal / zero */

loc_0024E538: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = ecx;

loc_0024E54D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E558; /* jne: not equal / not zero */

loc_0024E551: ;
    eax = MEM32(0x614FCC);
    goto loc_0024E564;

loc_0024E558: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024E564; /* je: equal / zero */

loc_0024E562: ;
    eax = esi;

loc_0024E564: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024E591; /* je: equal / zero */

loc_0024E56B: ;
    edx = MEM32(eax + 0x14);
    eax = MEM32(edx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E591; /* je: equal / zero */

loc_0024E576: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E591; /* jne: not equal / not zero */

loc_0024E57D: ;
    PUSH32(esp, 0x60000000);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0024E58Eu); RECOMP_ABI_CALL(0x0009FC20u, sub_0009FC20); /* call 0x0009FC20 */

loc_0024E58E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024E591: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E59C; /* jne: not equal / not zero */

loc_0024E595: ;
    eax = MEM32(0x614FCC);
    goto loc_0024E5A8;

loc_0024E59C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024E5A8; /* je: equal / zero */

loc_0024E5A6: ;
    eax = esi;

loc_0024E5A8: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024E5DB; /* je: equal / zero */

loc_0024E5AF: ;
    edx = MEM32(eax + 0x14);
    eax = MEM32(edx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E5DB; /* je: equal / zero */

loc_0024E5BA: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E5DB; /* jne: not equal / not zero */

loc_0024E5C1: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E5DB; /* je: equal / zero */

loc_0024E5C8: ;
    SET_LO8(ecx, MEM8(eax + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0024E5DB; /* jbe: below or equal (unsigned <=) */

loc_0024E5CF: ;
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E5DB; /* je: equal / zero */

loc_0024E5D6: ;
    MEM16(eax) = 0xA;

loc_0024E5DB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E5E6; /* jne: not equal / not zero */

loc_0024E5DF: ;
    eax = MEM32(0x614FCC);
    goto loc_0024E5F2;

loc_0024E5E6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024E5F2; /* je: equal / zero */

loc_0024E5F0: ;
    eax = esi;

loc_0024E5F2: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024E61E; /* je: equal / zero */

loc_0024E5F9: ;
    edx = MEM32(eax + 0x14);
    eax = MEM32(edx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E61E; /* je: equal / zero */

loc_0024E604: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E61E; /* jne: not equal / not zero */

loc_0024E60B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 6);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0024E61Bu); RECOMP_ABI_CALL(0x0009FDA0u, sub_0009FDA0); /* call 0x0009FDA0 */

loc_0024E61B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024E61E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x333ED0)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333ECC)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0024E64E; /* jne: not equal / not zero */

loc_0024E647: ;
    eax = MEM32(0x614FCC);
    goto loc_0024E65A;

loc_0024E64E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024E65A; /* je: equal / zero */

loc_0024E658: ;
    eax = esi;

loc_0024E65A: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0024E66Au); RECOMP_ABI_CALL(0x0009FFB0u, sub_0009FFB0); /* call 0x0009FFB0 */

loc_0024E66A: ;
    eax = MEM32(0x65093C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E67D; /* jne: not equal / not zero */

loc_0024E676: ;
    eax = MEM32(0x614FCC);
    goto loc_0024E687;

loc_0024E67D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E687; /* jne: not equal / not zero */

loc_0024E682: ;
    eax = MEM32(0x614FD0);

loc_0024E687: ;
    ecx = MEM32(0x64D870);
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0024E699u); RECOMP_ABI_CALL(0x0008F6A0u, sub_0008F6A0); /* call 0x0008F6A0 */

loc_0024E699: ;
    xmm0 = XMM_SCALAR(MEMF(0x333990)); /* movss */
    esi = MEM32(0x65093C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x33383C)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0024E6CF; /* jne: not equal / not zero */

loc_0024E6C8: ;
    eax = MEM32(0x614FCC);
    goto loc_0024E6DB;

loc_0024E6CF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024E6DB; /* je: equal / zero */

loc_0024E6D9: ;
    eax = esi;

loc_0024E6DB: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024E71E; /* je: equal / zero */

loc_0024E6E2: ;
    edx = MEM32(eax + 0x14);
    eax = MEM32(edx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E71E; /* je: equal / zero */

loc_0024E6ED: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E71E; /* jne: not equal / not zero */

loc_0024E6F4: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E71E; /* je: equal / zero */

loc_0024E6FB: ;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xC), 1 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0024E71E; /* jbe: below or equal (unsigned <=) */

loc_0024E701: ;
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0024E71E; /* je: equal / zero */

loc_0024E709: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = edx;

loc_0024E71E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E729; /* jne: not equal / not zero */

loc_0024E722: ;
    eax = MEM32(0x614FCC);
    goto loc_0024E735;

loc_0024E729: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024E735; /* je: equal / zero */

loc_0024E733: ;
    eax = esi;

loc_0024E735: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024E762; /* je: equal / zero */

loc_0024E73C: ;
    eax = MEM32(eax + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E762; /* je: equal / zero */

loc_0024E747: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E762; /* jne: not equal / not zero */

loc_0024E74E: ;
    PUSH32(esp, 0xA05F7078u);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0x0024E75Fu); RECOMP_ABI_CALL(0x0009FC20u, sub_0009FC20); /* call 0x0009FC20 */

loc_0024E75F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024E762: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E76D; /* jne: not equal / not zero */

loc_0024E766: ;
    eax = MEM32(0x614FCC);
    goto loc_0024E779;

loc_0024E76D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024E779; /* je: equal / zero */

loc_0024E777: ;
    eax = esi;

loc_0024E779: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024E7AC; /* je: equal / zero */

loc_0024E780: ;
    eax = MEM32(eax + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E7AC; /* je: equal / zero */

loc_0024E78B: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E7AC; /* jne: not equal / not zero */

loc_0024E792: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E7AC; /* je: equal / zero */

loc_0024E799: ;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xC), 1 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0024E7AC; /* jbe: below or equal (unsigned <=) */

loc_0024E79F: ;
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0024E7AC; /* je: equal / zero */

loc_0024E7A7: ;
    MEM16(eax) = 0xA;

loc_0024E7AC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E7B7; /* jne: not equal / not zero */

loc_0024E7B0: ;
    eax = MEM32(0x614FCC);
    goto loc_0024E7C3;

loc_0024E7B7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024E7C3; /* je: equal / zero */

loc_0024E7C1: ;
    eax = esi;

loc_0024E7C3: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024E7EF; /* je: equal / zero */

loc_0024E7CA: ;
    eax = MEM32(eax + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E7EF; /* je: equal / zero */

loc_0024E7D5: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E7EF; /* jne: not equal / not zero */

loc_0024E7DC: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 6);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0x0024E7ECu); RECOMP_ABI_CALL(0x0009FDA0u, sub_0009FDA0); /* call 0x0009FDA0 */

loc_0024E7EC: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024E7EF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x333ED0)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333ECC)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0024E81F; /* jne: not equal / not zero */

loc_0024E818: ;
    eax = MEM32(0x614FCC);
    goto loc_0024E82B;

loc_0024E81F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024E82B; /* je: equal / zero */

loc_0024E829: ;
    eax = esi;

loc_0024E82B: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x0024E83Bu); RECOMP_ABI_CALL(0x0009FFB0u, sub_0009FFB0); /* call 0x0009FFB0 */

loc_0024E83B: ;
    eax = MEM32(0x65093C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E84E; /* jne: not equal / not zero */

loc_0024E847: ;
    eax = MEM32(0x614FCC);
    goto loc_0024E858;

loc_0024E84E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E858; /* jne: not equal / not zero */

loc_0024E853: ;
    eax = MEM32(0x614FD0);

loc_0024E858: ;
    edx = MEM32(0x64D870);
    ecx = MEM32(edx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 2);
    PUSH32(esp, 0x0024E86Bu); RECOMP_ABI_CALL(0x0008F6A0u, sub_0008F6A0); /* call 0x0008F6A0 */

loc_0024E86B: ;
    xmm0 = XMM_SCALAR(MEMF(0x333EC8)); /* movss */
    esi = MEM32(0x65093C);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333EC4)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x33383C)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0024E8A9; /* jne: not equal / not zero */

loc_0024E8A2: ;
    eax = MEM32(0x614FCC);
    goto loc_0024E8B5;

loc_0024E8A9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024E8B5; /* je: equal / zero */

loc_0024E8B3: ;
    eax = esi;

loc_0024E8B5: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024E8FA; /* je: equal / zero */

loc_0024E8BC: ;
    eax = MEM32(eax + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E8FA; /* je: equal / zero */

loc_0024E8C7: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E8FA; /* jne: not equal / not zero */

loc_0024E8CE: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E8FA; /* je: equal / zero */

loc_0024E8D5: ;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xC), 2 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0024E8FA; /* jbe: below or equal (unsigned <=) */

loc_0024E8DB: ;
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0024E8FA; /* je: equal / zero */

loc_0024E8E5: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = ecx;

loc_0024E8FA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E905; /* jne: not equal / not zero */

loc_0024E8FE: ;
    eax = MEM32(0x614FCC);
    goto loc_0024E911;

loc_0024E905: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024E911; /* je: equal / zero */

loc_0024E90F: ;
    eax = esi;

loc_0024E911: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024E941; /* je: equal / zero */

loc_0024E918: ;
    edx = MEM32(eax + 0x14);
    eax = MEM32(edx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E941; /* je: equal / zero */

loc_0024E923: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E941; /* jne: not equal / not zero */

loc_0024E92A: ;
    PUSH32(esp, 0x60000000);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0x0024E93Eu); RECOMP_ABI_CALL(0x0009FC20u, sub_0009FC20); /* call 0x0009FC20 */

loc_0024E93E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024E941: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E94C; /* jne: not equal / not zero */

loc_0024E945: ;
    eax = MEM32(0x614FCC);
    goto loc_0024E958;

loc_0024E94C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024E958; /* je: equal / zero */

loc_0024E956: ;
    eax = esi;

loc_0024E958: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024E98D; /* je: equal / zero */

loc_0024E95F: ;
    edx = MEM32(eax + 0x14);
    eax = MEM32(edx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E98D; /* je: equal / zero */

loc_0024E96A: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E98D; /* jne: not equal / not zero */

loc_0024E971: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E98D; /* je: equal / zero */

loc_0024E978: ;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xC), 2 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0024E98D; /* jbe: below or equal (unsigned <=) */

loc_0024E97E: ;
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0024E98D; /* je: equal / zero */

loc_0024E988: ;
    MEM16(eax) = 8;

loc_0024E98D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E998; /* jne: not equal / not zero */

loc_0024E991: ;
    eax = MEM32(0x614FCC);
    goto loc_0024E9A4;

loc_0024E998: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024E9A4; /* je: equal / zero */

loc_0024E9A2: ;
    eax = esi;

loc_0024E9A4: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024E9D3; /* je: equal / zero */

loc_0024E9AB: ;
    edx = MEM32(eax + 0x14);
    eax = MEM32(edx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024E9D3; /* je: equal / zero */

loc_0024E9B6: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024E9D3; /* jne: not equal / not zero */

loc_0024E9BD: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0x0024E9D0u); RECOMP_ABI_CALL(0x0009FDA0u, sub_0009FDA0); /* call 0x0009FDA0 */

loc_0024E9D0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024E9D3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x333EC0)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333ECC)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0024EA03; /* jne: not equal / not zero */

loc_0024E9FC: ;
    eax = MEM32(0x614FCC);
    goto loc_0024EA0F;

loc_0024EA03: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024EA0F; /* je: equal / zero */

loc_0024EA0D: ;
    eax = esi;

loc_0024EA0F: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ecx = 2;
    PUSH32(esp, 0x0024EA22u); RECOMP_ABI_CALL(0x0009FFB0u, sub_0009FFB0); /* call 0x0009FFB0 */

loc_0024EA22: ;
    eax = MEM32(0x65093C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EA35; /* jne: not equal / not zero */

loc_0024EA2E: ;
    eax = MEM32(0x614FCC);
    goto loc_0024EA3F;

loc_0024EA35: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EA3F; /* jne: not equal / not zero */

loc_0024EA3A: ;
    eax = MEM32(0x614FD0);

loc_0024EA3F: ;
    ecx = MEM32(0x64D870);
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(0x15) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x15;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 3);
    PUSH32(esp, 0x0024EA52u); RECOMP_ABI_CALL(0x0008F6A0u, sub_0008F6A0); /* call 0x0008F6A0 */

loc_0024EA52: ;
    xmm0 = XMM_SCALAR(MEMF(0x333A04)); /* movss */
    esi = MEM32(0x65093C);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333EBC)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x33383C)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0024EA90; /* jne: not equal / not zero */

loc_0024EA89: ;
    eax = MEM32(0x614FCC);
    goto loc_0024EA9C;

loc_0024EA90: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024EA9C; /* je: equal / zero */

loc_0024EA9A: ;
    eax = esi;

loc_0024EA9C: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024EAE1; /* je: equal / zero */

loc_0024EAA3: ;
    edx = MEM32(eax + 0x14);
    eax = MEM32(edx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EAE1; /* je: equal / zero */

loc_0024EAAE: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EAE1; /* jne: not equal / not zero */

loc_0024EAB5: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EAE1; /* je: equal / zero */

loc_0024EABC: ;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xC), 3 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0024EAE1; /* jbe: below or equal (unsigned <=) */

loc_0024EAC2: ;
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0024EAE1; /* je: equal / zero */

loc_0024EACC: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = edx;

loc_0024EAE1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EAEC; /* jne: not equal / not zero */

loc_0024EAE5: ;
    eax = MEM32(0x614FCC);
    goto loc_0024EAF8;

loc_0024EAEC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024EAF8; /* je: equal / zero */

loc_0024EAF6: ;
    eax = esi;

loc_0024EAF8: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024EB28; /* je: equal / zero */

loc_0024EAFF: ;
    eax = MEM32(eax + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EB28; /* je: equal / zero */

loc_0024EB0A: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EB28; /* jne: not equal / not zero */

loc_0024EB11: ;
    PUSH32(esp, 0xA05F7078u);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = 3;
    PUSH32(esp, 0x0024EB25u); RECOMP_ABI_CALL(0x0009FC20u, sub_0009FC20); /* call 0x0009FC20 */

loc_0024EB25: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024EB28: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EB33; /* jne: not equal / not zero */

loc_0024EB2C: ;
    eax = MEM32(0x614FCC);
    goto loc_0024EB3F;

loc_0024EB33: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024EB3F; /* je: equal / zero */

loc_0024EB3D: ;
    eax = esi;

loc_0024EB3F: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024EB74; /* je: equal / zero */

loc_0024EB46: ;
    eax = MEM32(eax + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EB74; /* je: equal / zero */

loc_0024EB51: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EB74; /* jne: not equal / not zero */

loc_0024EB58: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EB74; /* je: equal / zero */

loc_0024EB5F: ;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xC), 3 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0024EB74; /* jbe: below or equal (unsigned <=) */

loc_0024EB65: ;
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0024EB74; /* je: equal / zero */

loc_0024EB6F: ;
    MEM16(eax) = 8;

loc_0024EB74: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EB7F; /* jne: not equal / not zero */

loc_0024EB78: ;
    eax = MEM32(0x614FCC);
    goto loc_0024EB8B;

loc_0024EB7F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024EB8B; /* je: equal / zero */

loc_0024EB89: ;
    eax = esi;

loc_0024EB8B: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0024EBBA; /* je: equal / zero */

loc_0024EB92: ;
    eax = MEM32(eax + 0x14);
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EBBA; /* je: equal / zero */

loc_0024EB9D: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EBBA; /* jne: not equal / not zero */

loc_0024EBA4: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = 3;
    PUSH32(esp, 0x0024EBB7u); RECOMP_ABI_CALL(0x0009FDA0u, sub_0009FDA0); /* call 0x0009FDA0 */

loc_0024EBB7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024EBBA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x333EC0)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333ECC)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0024EBEA; /* jne: not equal / not zero */

loc_0024EBE3: ;
    eax = MEM32(0x614FCC);
    goto loc_0024EBF6;

loc_0024EBEA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024EBF6; /* je: equal / zero */

loc_0024EBF4: ;
    eax = esi;

loc_0024EBF6: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ecx = 3;
    PUSH32(esp, 0x0024EC09u); RECOMP_ABI_CALL(0x0009FFB0u, sub_0009FFB0); /* call 0x0009FFB0 */

loc_0024EC09: ;
    eax = MEM32(0x34AC38);
    ecx = MEM32(eax + 0x428);
    eax = MEM32(0x64D2A4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EC26; /* je: equal / zero */

loc_0024EC20: ;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EC53; /* je: equal / zero */

loc_0024EC26: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = ecx;
    MEM32(0x64D2A4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024EC57; /* je: equal / zero */

loc_0024EC31: ;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), LO16(ebp) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EC4E; /* je: equal / zero */

loc_0024EC37: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EC31; /* jne: not equal / not zero */

loc_0024EC3E: ;
    POP32(esp, esi);
    MEM32(0x64D2A4) = eax;
    eax = 0x3E8;
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0024EC4E: ;
    MEM32(0x64D2A4) = eax;

loc_0024EC53: ;
    MEM16(eax + 2) = MEM16(eax + 2) | LO16(ebp);
    _fa = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_0024EC57: ;
    POP32(esp, esi);
    eax = 0x3E8;
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0024EC70
 * Original: 0x0024EC70 - 0x0024EF8C (796 bytes, 218 insns)
 * Folder: scripts (between: 0x0024E330 and 0x0024EF90)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EC70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024EC70: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x50);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x64D87C);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(ebp + 0x18);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx + 4);
    ebx = MEM32(eax + 0x44);
    MEM32(esp + 8) = edx;
    edx = MEM32(0x64D1F8);
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = eax;
    _fa = (uint32_t)(MEM32(0x344938)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x344938), edx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D880) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0024ED9E; /* je: equal / zero */

loc_0024ECCC: ;
    PUSH32(esp, 0x33000908);
    eax = 0x493610;
    PUSH32(esp, 0x0024ECDBu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024ECDB: ;
    esi = MEM32(0x64D33C);
    ebp = MEM32(0x3400FC);
    edi = MEM32(0x64D3A4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024ECF9; /* je: equal / zero */

loc_0024ECF4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024ECFD; /* je: equal / zero */

loc_0024ECF9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024ED09; /* je: equal / zero */

loc_0024ECFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024ED09; /* jne: not equal / not zero */

loc_0024ED02: ;
    ecx = 0x33000908;
    goto loc_0024ED10;

loc_0024ED09: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024ED2D; /* je: equal / zero */

loc_0024ED10: ;
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
    PUSH32(esp, 0x0024ED28u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024ED28: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0024ED32;

loc_0024ED2D: ;
    eax = 0x33000908;

loc_0024ED32: ;
    MEM32(0x650938) = eax;
    PUSH32(esp, 0x6C000172);
    eax = 0x493610;
    PUSH32(esp, 0x0024ED46u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024ED46: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024ED52; /* je: equal / zero */

loc_0024ED4D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024ED56; /* je: equal / zero */

loc_0024ED52: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024ED62; /* je: equal / zero */

loc_0024ED56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024ED62; /* jne: not equal / not zero */

loc_0024ED5B: ;
    ecx = 0x6C000172;
    goto loc_0024ED69;

loc_0024ED62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024ED86; /* je: equal / zero */

loc_0024ED69: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024ED81u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024ED81: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0024ED8B;

loc_0024ED86: ;
    eax = 0x6C000172;

loc_0024ED8B: ;
    ebp = MEM32(esp + 0x58);
    MEM32(0x650934) = eax;
    eax = MEM32(0x64D1F8);
    MEM32(0x344938) = eax;

loc_0024ED9E: ;
    eax = MEM32(ebx + 0x138);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EDB4; /* jne: not equal / not zero */

loc_0024EDA8: ;
    ecx = MEM32(0x614FCC);
    MEM32(ebx + 0x138) = ecx;

loc_0024EDB4: ;
    edx = MEM32(esp + 0x60);
    ecx = MEM32(edx + 0x28);
    eax = 0x20D;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EE22; /* jne: not equal / not zero */

loc_0024EDC4: ;
    MEM32(esp + 0x48) = eax;
    eax = MEM32(edx);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ebx + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x50) = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_0024EE22; /* je: equal / zero */

loc_0024EDDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EDE9; /* jne: not equal / not zero */

loc_0024EDE2: ;
    eax = MEM32(0x614FCC);
    goto loc_0024EDF3;

loc_0024EDE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EDF3; /* jne: not equal / not zero */

loc_0024EDEE: ;
    eax = MEM32(0x614FD0);

loc_0024EDF3: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EE22; /* je: equal / zero */

loc_0024EDFA: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EE22; /* je: equal / zero */

loc_0024EE01: ;
    edi = MEM32(eax + 0x104);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0024EE22; /* jae: above or equal (unsigned >=) */

loc_0024EE0C: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x34);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xD;
    esi = esp + 0x20;
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
    MEM32(eax + 0x104) = MEM32(eax + 0x104) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x104)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0024EE22: ;
    _fa = (uint32_t)(MEM32(edx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x28), 0x20E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EE5A; /* je: equal / zero */

loc_0024EE2B: ;
    ecx = MEM32(esp + 0x5C);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = 0;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    MEM32(0x64D878) = edx;
    MEM32(0x64D87C) = eax;
    MEM32(0x64D880) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0024EE5A: ;
    esi = MEM32(edx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edx = MEM32(edx);
    MEM32(ebx + 0x7C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0024EF37; /* je: equal / zero */

loc_0024EE6A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EE76; /* jne: not equal / not zero */

loc_0024EE6F: ;
    eax = MEM32(0x614FCC);
    goto loc_0024EE82;

loc_0024EE76: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024EE82; /* je: equal / zero */

loc_0024EE80: ;
    eax = esi;

loc_0024EE82: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EF37; /* je: equal / zero */

loc_0024EE8D: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EF37; /* je: equal / zero */

loc_0024EE98: ;
    ecx = MEM32(0x650938);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EF37; /* jne: not equal / not zero */

loc_0024EEA6: ;
    edx = MEM32(ebx + 0xD8);
    ecx = esi;
    MEM32(ebx + edx * 4 + 0xE4) = esi;
    PUSH32(esp, 0x0024EEBAu); RECOMP_ABI_CALL(0x0012D1A0u, sub_0012D1A0); /* call 0x0012D1A0 */

loc_0024EEBA: ;
    eax = MEM32(eax + 0x44);
    ecx = MEM32(ebx + 0xDC);
    MEM32(eax + 0x17C) = ecx;
    ecx = esi;
    PUSH32(esp, 0x0024EED0u); RECOMP_ABI_CALL(0x0012D1A0u, sub_0012D1A0); /* call 0x0012D1A0 */

loc_0024EED0: ;
    edx = MEM32(eax + 0x44);
    MEM32(edx + 0x198) = ebp;
    edi = MEM32(ebx + 0xD8);
    ecx = esi;
    PUSH32(esp, 0x0024EEE6u); RECOMP_ABI_CALL(0x0012D1A0u, sub_0012D1A0); /* call 0x0012D1A0 */

loc_0024EEE6: ;
    eax = MEM32(eax + 0x44);
    ecx = MEM32(ebx + edi * 4 + 0x110);
    MEM32(eax + 0x180) = ecx;
    eax = MEM32(ebx + 0xDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EF31; /* je: equal / zero */

loc_0024EF00: ;
    ecx = esi;
    PUSH32(esp, 0x0024EF07u); RECOMP_ABI_CALL(0x0012D1A0u, sub_0012D1A0); /* call 0x0012D1A0 */

loc_0024EF07: ;
    edx = MEM32(eax + 0x44);
    xmm0 = XMM_SCALAR(MEMF(0x3337D4)); /* movss */
    ecx = esi;
    MEMF(edx + 0x188) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0024EF21u); RECOMP_ABI_CALL(0x0012D1A0u, sub_0012D1A0); /* call 0x0012D1A0 */

loc_0024EF21: ;
    eax = MEM32(eax + 0x44);
    xmm0 = XMM_SCALAR(MEMF(0x3337D4)); /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */

loc_0024EF31: ;
    MEM32(ebx + 0xD8) = MEM32(ebx + 0xD8) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0xD8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0024EF37: ;
    ecx = MEM32(0x64D878);
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EF54; /* jne: not equal / not zero */

loc_0024EF44: ;
    edx = MEM32(0x650934);
    esi = 2;
    PUSH32(esp, 0x0024EF54u); RECOMP_ABI_CALL(0x002560A0u, sub_002560A0); /* call 0x002560A0 */

loc_0024EF54: ;
    edx = MEM32(esp + 0x5C);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = 1;
    edx = MEM32(esp + 0xC);
    MEM32(0x64D884) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebp);
    MEM32(0x64D878) = ecx;
    MEM32(0x64D87C) = edx;
    MEM32(0x64D880) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0024EF90
 * Original: 0x0024EF90 - 0x0024F1F7 (615 bytes, 199 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024EF90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024EF90: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D878);
    ecx = MEM32(0x64D1F8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x44);
    eax = MEM32(0x64D870);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ecx (32-bit) */
    MEM32(esp + 0xC) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0024F01C; /* je: equal / zero */

loc_0024EFB0: ;
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 0x3200117B);
    eax = 0x493610;
    PUSH32(esp, 0x0024EFC2u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024EFC2: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EFD8; /* je: equal / zero */

loc_0024EFCF: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EFE2; /* je: equal / zero */

loc_0024EFD8: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024EFEE; /* je: equal / zero */

loc_0024EFE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024EFEE; /* jne: not equal / not zero */

loc_0024EFE7: ;
    ecx = 0x3200117B;
    goto loc_0024EFF5;

loc_0024EFEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024F012; /* je: equal / zero */

loc_0024EFF5: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024F00Du); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024F00D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0024F017;

loc_0024F012: ;
    eax = 0x3200117B;

loc_0024F017: ;
    MEM32(0x650930) = eax;

loc_0024F01C: ;
    eax = MEM32(ebx + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F1C0; /* je: equal / zero */

loc_0024F027: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = ebx + 0x5C;
    MEM32(esp + 4) = 1;
    MEM32(esp + 0x10) = 0;
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024F1C0; /* je: equal / zero */

loc_0024F046: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, edi);
    /* nop */

loc_0024F050: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 0x14 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0024F1BD; /* jge: greater or equal (signed >=) */

loc_0024F05B: ;
    eax = MEM32(esp + 0x20);
    eax = MEM32(eax);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024F1BD; /* je: equal / zero */

loc_0024F06F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F07B; /* jne: not equal / not zero */

loc_0024F074: ;
    eax = MEM32(0x614FCC);
    goto loc_0024F085;

loc_0024F07B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F085; /* jne: not equal / not zero */

loc_0024F080: ;
    eax = MEM32(0x614FD0);

loc_0024F085: ;
    ecx = MEM32(eax + 0x18);
    esi = MEM32(ecx + 0x18);
    edx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0024F0AC; /* jbe: below or equal (unsigned <=) */

loc_0024F094: ;
    edi = MEM32(ebx + 0x54);
    ecx = MEM32(esi);
    /* nop */

loc_0024F0A0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F0AC; /* je: equal / zero */

loc_0024F0A4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0024F0A0; /* jb: below (unsigned <) */

loc_0024F0AC: ;
    edx = eax + eax * 2;
    eax = MEM32(esi);
    eax = MEM32(eax + edx * 4 + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x28) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0024F1A4; /* jle: less or equal (signed <=) */

loc_0024F0C1: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = ebp;
    ebx = ebx + ecx * 4 + 0x5C;
    /* nop */

loc_0024F0D0: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0x14 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0024F1A0; /* jge: greater or equal (signed >=) */

loc_0024F0DB: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F0EB; /* jne: not equal / not zero */

loc_0024F0E4: ;
    eax = MEM32(0x614FCC);
    goto loc_0024F0F5;

loc_0024F0EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F0F5; /* jne: not equal / not zero */

loc_0024F0F0: ;
    eax = MEM32(0x614FD0);

loc_0024F0F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 0x18);
    edi = MEM32(edx + 0x54);
    edx = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0024F13F; /* je: equal / zero */

loc_0024F102: ;
    eax = MEM32(eax + 0x18);
    esi = MEM32(eax + 0x18);
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0024F11F; /* jbe: below or equal (unsigned <=) */

loc_0024F111: ;
    edx = MEM32(esi);

loc_0024F113: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F11F; /* je: equal / zero */

loc_0024F117: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0024F113; /* jb: below (unsigned <) */

loc_0024F11F: ;
    edx = MEM32(esi);
    ecx = eax + eax * 2;
    eax = edx + ecx * 4;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F188; /* je: equal / zero */

loc_0024F12E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax + 8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0024F137; /* jb: below (unsigned <) */

loc_0024F133: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0024F13F;

loc_0024F137: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(ecx + eax + 8);

loc_0024F13F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F188; /* je: equal / zero */

loc_0024F143: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F150; /* jne: not equal / not zero */

loc_0024F148: ;
    esi = MEM32(0x614FCC);
    goto loc_0024F15D;

loc_0024F150: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    esi = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024F15D; /* je: equal / zero */

loc_0024F15B: ;
    esi = edx;

loc_0024F15D: ;
    ecx = MEM32(esp + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024F166: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F175; /* je: equal / zero */

loc_0024F16A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024F166; /* jl: less (signed <) */

loc_0024F173: ;
    goto loc_0024F17A;

loc_0024F175: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F188; /* jne: not equal / not zero */

loc_0024F17A: ;
    ecx = MEM32(esp + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx) = edx;
    MEM32(esp + 0x10) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024F188: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x28);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0024F0D0; /* jl: less (signed <) */

loc_0024F1A0: ;
    ebx = MEM32(esp + 0x18);

loc_0024F1A4: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = eax;
    goto loc_0024F050;

loc_0024F1BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0024F1C0: ;
    ecx = MEM32(0x64D880);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0024F1D3; /* jne: not equal / not zero */

loc_0024F1CC: ;
    eax = MEM32(0x614FCC);
    goto loc_0024F1DF;

loc_0024F1D3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024F1DF; /* je: equal / zero */

loc_0024F1DD: ;
    eax = ecx;

loc_0024F1DF: ;
    edx = MEM32(0x650930);
    PUSH32(esp, edx);
    PUSH32(esp, 6);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024F1EEu); RECOMP_ABI_CALL(0x002566B0u, sub_002566B0); /* call 0x002566B0 */

loc_0024F1EE: ;
    eax = 0x3E8;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0024F200
 * Original: 0x0024F200 - 0x0024F39F (415 bytes, 130 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024F200: ;
    eax = MEM32(0x64D878);
    ecx = MEM32(0x64D1F8);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x44);
    eax = MEM32(0x64D870);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ecx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0024F2E9; /* je: equal / zero */

loc_0024F21E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 0x1000034);
    eax = 0x493610;
    PUSH32(esp, 0x0024F232u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024F232: ;
    esi = MEM32(0x64D33C);
    ebx = MEM32(0x3400FC);
    edi = MEM32(0x64D3A4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F250; /* je: equal / zero */

loc_0024F24B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F254; /* je: equal / zero */

loc_0024F250: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F260; /* je: equal / zero */

loc_0024F254: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F260; /* jne: not equal / not zero */

loc_0024F259: ;
    ecx = 0x1000034;
    goto loc_0024F267;

loc_0024F260: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024F284; /* je: equal / zero */

loc_0024F267: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024F27Fu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024F27F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0024F289;

loc_0024F284: ;
    eax = 0x1000034;

loc_0024F289: ;
    MEM32(0x65092C) = eax;
    PUSH32(esp, 0x32000853);
    eax = 0x493610;
    PUSH32(esp, 0x0024F29Du); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024F29D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F2A9; /* je: equal / zero */

loc_0024F2A4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F2AD; /* je: equal / zero */

loc_0024F2A9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F2B9; /* je: equal / zero */

loc_0024F2AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F2B9; /* jne: not equal / not zero */

loc_0024F2B2: ;
    ecx = 0x32000853;
    goto loc_0024F2C0;

loc_0024F2B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024F2DD; /* je: equal / zero */

loc_0024F2C0: ;
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
    PUSH32(esp, 0x0024F2D8u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024F2D8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0024F2E2;

loc_0024F2DD: ;
    eax = 0x32000853;

loc_0024F2E2: ;
    POP32(esp, edi);
    MEM32(0x650928) = eax;
    POP32(esp, ebx);

loc_0024F2E9: ;
    eax = MEM32(ebp + 0x1E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = MEM32(0x64D880);
    if (CMP_EQ(_fa, _fb)) goto loc_0024F307; /* je: equal / zero */

loc_0024F2F9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x6E);
    eax = esi;
    PUSH32(esp, 0x0024F304u); RECOMP_ABI_CALL(0x0010F660u, sub_0010F660); /* call 0x0010F660 */

loc_0024F304: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024F307: ;
    eax = MEM32(ebp + 0x1E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F31F; /* je: equal / zero */

loc_0024F311: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 7);
    eax = esi;
    PUSH32(esp, 0x0024F31Cu); RECOMP_ABI_CALL(0x0010F660u, sub_0010F660); /* call 0x0010F660 */

loc_0024F31C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024F31F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F32B; /* jne: not equal / not zero */

loc_0024F324: ;
    eax = MEM32(0x614FCC);
    goto loc_0024F337;

loc_0024F32B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024F337; /* je: equal / zero */

loc_0024F335: ;
    eax = esi;

loc_0024F337: ;
    ecx = MEM32(0x65092C);
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0024F346u); RECOMP_ABI_CALL(0x002566B0u, sub_002566B0); /* call 0x002566B0 */

loc_0024F346: ;
    edx = MEM32(0x64D878);
    ecx = MEM32(0x64D880);
    eax = MEM32(0x64D87C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D87C) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x650928);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0024F399; /* je: equal / zero */

loc_0024F375: ;
    MEM32(eax + 0x18) = ecx;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax + 4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0024F399; /* jne: not equal / not zero */

loc_0024F381: ;
    edx = MEM32(0x3400FC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F399; /* je: equal / zero */

loc_0024F38B: ;
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F399; /* je: equal / zero */

loc_0024F392: ;
    MEM32(eax + 4) = 0xFFFFFFFFu;

loc_0024F399: ;
    eax = 0x3E8;
    esp += 4; return; /* ret */

}

/**
 * sub_0024F3A0
 * Original: 0x0024F3A0 - 0x0024F4C4 (292 bytes, 83 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F3A0: ;
    eax = MEM32(0x64D870);
    ecx = MEM32(0x64D1F8);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ecx (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D878);
    ebx = MEM32(esi + 0x44);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0024F428; /* je: equal / zero */

loc_0024F3BC: ;
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 0x8002717);
    eax = 0x493610;
    PUSH32(esp, 0x0024F3CEu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024F3CE: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F3E4; /* je: equal / zero */

loc_0024F3DB: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F3EE; /* je: equal / zero */

loc_0024F3E4: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F3FA; /* je: equal / zero */

loc_0024F3EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F3FA; /* jne: not equal / not zero */

loc_0024F3F3: ;
    ecx = 0x8002717;
    goto loc_0024F401;

loc_0024F3FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0024F41E; /* je: equal / zero */

loc_0024F401: ;
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
    PUSH32(esp, 0x0024F419u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0024F419: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0024F423;

loc_0024F41E: ;
    eax = 0x8002717;

loc_0024F423: ;
    MEM32(0x650924) = eax;

loc_0024F428: ;
    edi = MEM32(ebx + 0x3DC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F477; /* je: equal / zero */

loc_0024F433: ;
    eax = MEM32(0x64D87C);
    ecx = MEM32(0x64D880);
    MEM32(0x64D87C) = esi;
    esi = eax + 0x54;
    MEM32(0x64D884) = ecx;
    PUSH32(esp, 0x0024F452u); RECOMP_ABI_CALL(0x001083D0u, sub_001083D0); /* call 0x001083D0 */

loc_0024F452: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F465; /* jne: not equal / not zero */

loc_0024F456: ;
    edx = MEM32(ebx + 0x3DC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0024F462u); RECOMP_ABI_CALL(0x00270B00u, sub_00270B00); /* call 0x00270B00 */

loc_0024F462: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024F465: ;
    eax = MEM32(ebx + 0xE4);
    _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0024F474u); RECOMP_ABI_CALL(0x00270710u, sub_00270710); /* call 0x00270710 */

loc_0024F474: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0024F477: ;
    eax = MEM32(ebx + 0xC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F4BB; /* je: equal / zero */

loc_0024F481: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(ecx + 0x18);
    eax = MEM32(edx + 4);
    ecx = MEM32(0x650924);
    edx = MEM32(ecx + 0x18);
    eax = MEM32(eax + 0x44);
    ecx = MEM32(edx + 4);
    edx = MEM32(eax + 0xE0);
    esi = MEM32(eax + 0x1BC);
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(ecx + 0x12F4);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x12F4) = eax;

loc_0024F4BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x3E8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024F4D0
 * Original: 0x0024F4D0 - 0x0024F5B4 (228 bytes, 68 insns)
 * Folder: scripts (between: 0x0024F3A0 and 0x002515A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F4D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024F4D0: ;
    eax = MEM32(ecx + 0x18);
    edx = MEM32(eax + 4);
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x44);
    esi = esp + 0x14;
    PUSH32(esp, 0x0024F4EBu); RECOMP_ABI_CALL(0x002514E0u, sub_002514E0); /* call 0x002514E0 */

loc_0024F4EB: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F5AE; /* je: equal / zero */

loc_0024F4F8: ;
    esi = MEM32(edi + 0x1264);
    PUSH32(esp, ebx);
    ebx = (uint32_t)(int32_t)SMEM16(0x34191A);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = (uint32_t)((int32_t)esi * (int32_t)eax);
    eax = MEM32(edi + 0x1268);
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_0024F520: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x10));
    /* nop */

loc_0024F530: ;
    ecx = esi + edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    eax = MEM32(ecx + edi + 0x126C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F549; /* jne: not equal / not zero */

loc_0024F542: ;
    eax = MEM32(0x614FCC);
    goto loc_0024F553;

loc_0024F549: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F553; /* jne: not equal / not zero */

loc_0024F54E: ;
    eax = MEM32(0x614FD0);

loc_0024F553: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F564; /* jne: not equal / not zero */

loc_0024F55C: ;
    ecx = MEM32(0x614FCC);
    goto loc_0024F56F;

loc_0024F564: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F56F; /* jne: not equal / not zero */

loc_0024F569: ;
    ecx = MEM32(0x614FD0);

loc_0024F56F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F588; /* je: equal / zero */

loc_0024F573: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024F530; /* jl: less (signed <) */

loc_0024F579: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    /* nop */
    if (CMP_GE(_fas, _fbs)) goto loc_0024F5AC; /* jge: greater or equal (signed >=) */

loc_0024F582: ;
    esi = MEM32(esp + 0x14);
    goto loc_0024F520;

loc_0024F588: ;
    eax = MEM32(edi + 0x1264);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x1C));
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0x1268));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    MEM32(eax + edi + 0x126C) = 0;

loc_0024F5AC: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0024F5AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0024F5C0
 * Original: 0x0024F5C0 - 0x0024F7D8 (536 bytes, 142 insns)
 * Folder: scripts (between: 0x0024F3A0 and 0x002515A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F5C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024F5C0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x64D884);
    edx = MEM32(0x64D880);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(0x64D878);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(0x64D87C);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(edx + 0x44);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(0x64D878) = edx;
    MEM32(0x64D87C) = edx;
    edx = ecx + 0x117C;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D880) = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edx;
    /* nop */

loc_0024F620: ;
    edx = MEM32(esp + 0x10);
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F633; /* jne: not equal / not zero */

loc_0024F62B: ;
    ebx = MEM32(0x614FCC);
    goto loc_0024F640;

loc_0024F633: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    ebx = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024F640; /* je: equal / zero */

loc_0024F63E: ;
    ebx = edx;

loc_0024F640: ;
    edi = MEM32(esp + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F651; /* jne: not equal / not zero */

loc_0024F649: ;
    edi = MEM32(0x614FCC);
    goto loc_0024F65C;

loc_0024F651: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F65C; /* jne: not equal / not zero */

loc_0024F656: ;
    edi = MEM32(0x614FD0);

loc_0024F65C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F7A3; /* je: equal / zero */

loc_0024F664: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F687; /* jne: not equal / not zero */

loc_0024F669: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F676; /* jne: not equal / not zero */

loc_0024F66E: ;
    edx = MEM32(0x614FCC);
    goto loc_0024F681;

loc_0024F676: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F681; /* jne: not equal / not zero */

loc_0024F67B: ;
    edx = MEM32(0x614FD0);

loc_0024F681: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F687; /* jne: not equal / not zero */

loc_0024F685: ;
    esi = ebp;

loc_0024F687: ;
    edi = MEM32(esp + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0024F620; /* jl: less (signed <) */

loc_0024F698: ;
    edx = MEM32(esp + 0x2C);
    MEM32(ecx + esi * 4 + 0x117C) = edx;
    edx = MEM32(eax + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F6B1; /* je: equal / zero */

loc_0024F6AA: ;
    xmm2 = XMM_SCALAR(MEMF(edx + 0x3C)); /* movss */
    goto loc_0024F6B9;

loc_0024F6B1: ;
    xmm2 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */

loc_0024F6B9: ;
    edx = (uint32_t)(int32_t)SMEM16(0x3418FA);
    edi = edx;
    edi = (uint32_t)((int32_t)edi * (int32_t)esi);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ecx + 0x12C8));
    xmm0 = XMM_SCALAR(MEMF(edi + ecx + 0x12CC)); /* movss */
    edi = MEM32(ecx + 0x1114);
    xmm1 = XMM_SCALAR(MEMF(0x333BA8)); /* movss */
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    xmm3 = XMM_SCALAR(MEMF(0x49362C)); /* movss */
    edi = (uint32_t)((int32_t)edi * (int32_t)esi);
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + ecx + 0x1118); /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x333BA4); /* mulss */
    edi = (int32_t)xmm2.f[0]; /* cvttss2si */
    xmm2.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    edi = MEM32(ecx + 0x1114);
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    edi = (uint32_t)((int32_t)edi * (int32_t)esi);
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(edi + ecx + 0x1118) = xmm0.f[0]; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(0x3418FA);
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ecx + 0x1114));
    edx = MEM32(edx + ecx + 0x1118);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x1450);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x154C);
    ecx = MEM32(ecx + 0x146C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0024F76Cu); RECOMP_ABI_CALL(0x00250AB0u, sub_00250AB0); /* call 0x00250AB0 */

loc_0024F76C: ;
    edx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x30);
    MEM32(edx) = esi;
    edx = MEM32(esp + 0x34);
    MEM32(0x64D884) = eax;
    eax = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D878) = ecx;
    MEM32(0x64D87C) = edx;
    MEM32(0x64D880) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0024F7A3: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = ebp;
    ecx = MEM32(esp + 0x14);
    MEM32(0x64D884) = edx;
    edx = MEM32(esp + 0x18);
    POP32(esp, ebp);
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D880) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0024F7E0
 * Original: 0x0024F7E0 - 0x0024F8D1 (241 bytes, 64 insns)
 * Folder: scripts (between: 0x0024F3A0 and 0x002515A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024F7E0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(0x64D87C);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D884);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(edx + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x44);
    MEM32(0x64D884) = eax;
    MEM32(0x64D880) = eax;
    eax = MEM32(esi + ebx * 4 + 0x117C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(0x64D878) = ecx;
    MEM32(0x64D87C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0024F8A7; /* je: equal / zero */

loc_0024F834: ;
    ecx = MEM32(esi + 0x12F4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0024F846; /* jg: greater (signed >) */

loc_0024F83E: ;
    ecx = MEM32(esp + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024F8A7; /* je: equal / zero */

loc_0024F846: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F852; /* jne: not equal / not zero */

loc_0024F84B: ;
    eax = MEM32(0x614FCC);
    goto loc_0024F85C;

loc_0024F852: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F85C; /* jne: not equal / not zero */

loc_0024F857: ;
    eax = MEM32(0x614FD0);

loc_0024F85C: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024F866u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024F866: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x2C) = eax;
    SET_LO8(eax, MEM8(0x3662F8));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x2C) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_0024F897; /* ja: above (unsigned >) */

loc_0024F88A: ;
    MEM32(esi + ebx * 4 + 0x1300) = 0x20;
    goto loc_0024F8A7;

loc_0024F897: ;
    edi = esp + 0x24;
    PUSH32(esp, 0x0024F8A0u); RECOMP_ABI_CALL(0x000FEBE0u, sub_000FEBE0); /* call 0x000FEBE0 */

loc_0024F8A0: ;
    MEM32(esi + ebx * 4 + 0x1300) = eax;

loc_0024F8A7: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x64D884) = ebp;
    MEM32(0x64D878) = edx;
    MEM32(0x64D87C) = eax;
    MEM32(0x64D880) = ecx;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0024F8E0
 * Original: 0x0024F8E0 - 0x0024F905 (37 bytes, 13 insns)
 * Folder: scripts (between: 0x0024F3A0 and 0x002515A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F8E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0024F8E0: ;
    edx = MEM32(eax + 0x18);
    eax = MEM32(edx + 4);
    eax = MEM32(eax + 0x44);
    edx = MEM32(eax + 0x115C);
    _fb = (uint32_t)(0x115C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x115C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0024F910
 * Original: 0x0024F910 - 0x0024FA37 (295 bytes, 93 insns)
 * Folder: scripts (between: 0x0024F3A0 and 0x002515A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024F910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024F910: ;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 0x44);
    ecx = (uint32_t)(int32_t)SMEM16(0x3418F2);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x116C);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ebx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ecx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + ebp + 0x1170)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ebp + 0x1170), esi (32-bit) */
    edx = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_0024FA2D; /* jle: less or equal (signed <=) */

loc_0024F945: ;
    edx = MEM32(eax + 0x116C);
    ebp = (uint32_t)(int32_t)SMEM16(0x34191A);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = MEM32(edx + eax + 0x1170);
    MEM32(esp + 8) = ecx;

loc_0024F965: ;
    edx = MEM32(eax + 0x1264);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax + 0x1268));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    ecx = MEM32(edx + eax + 0x126C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F990; /* jne: not equal / not zero */

loc_0024F988: ;
    ecx = MEM32(0x614FCC);
    goto loc_0024F99B;

loc_0024F990: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F99B; /* jne: not equal / not zero */

loc_0024F995: ;
    ecx = MEM32(0x614FD0);

loc_0024F99B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024FA21; /* je: equal / zero */

loc_0024F9A3: ;
    ecx = MEM32(eax + 0x1264);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(eax + 0x1268));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    ecx = MEM32(ecx + eax + 0x126C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F9CE; /* jne: not equal / not zero */

loc_0024F9C6: ;
    ecx = MEM32(0x614FCC);
    goto loc_0024F9D9;

loc_0024F9CE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F9D9; /* jne: not equal / not zero */

loc_0024F9D3: ;
    ecx = MEM32(0x614FD0);

loc_0024F9D9: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F9EA; /* jne: not equal / not zero */

loc_0024F9E2: ;
    edx = MEM32(0x614FCC);
    goto loc_0024F9F5;

loc_0024F9EA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0024F9F5; /* jne: not equal / not zero */

loc_0024F9EF: ;
    edx = MEM32(0x614FD0);

loc_0024F9F5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0024FA15; /* je: equal / zero */

loc_0024F9F9: ;
    ecx = MEM32(esp + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0024F965; /* jl: less (signed <) */

loc_0024FA06: ;
    edx = MEM32(esp + 0x10);
    eax = 1;
    POP32(esp, esi);
    MEM32(edx) = eax;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0024FA15: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(ecx) = eax;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0024FA21: ;
    edx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(edx) = eax;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0024FA2D: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0024FA40
 * Original: 0x0024FA40 - 0x00250871 (3633 bytes, 846 insns)
 * Folder: scripts (between: 0x0024F3A0 and 0x002515A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024FA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024FA40: ;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x6C));
    esp = esp - 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x7C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x78);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(0x64D87C);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(ecx + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x44);
    MEM32(esp + 0x40) = edx;
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = eax;
    MEM32(0x64D884) = ebp;
    MEM32(0x64D880) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_0024FAA0; /* jne: not equal / not zero */

loc_0024FA99: ;
    eax = MEM32(0x614FCC);
    goto loc_0024FAAC;

loc_0024FAA0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_0024FAAC; /* je: equal / zero */

loc_0024FAAA: ;
    eax = ebx;

loc_0024FAAC: ;
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0024FAB6u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024FAB6: ;
    eax = MEM32(esp + 0x54);
    ecx = MEM32(esp + 0x58);
    edx = MEM32(esp + 0x5C);
    MEM32(esp + 0x64) = eax;
    eax = MEM32(esp + 0x88);
    MEM32(esp + 0x68) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 0x38;
    ecx = ebp;
    MEM32(esp + 0x68) = edx;
    PUSH32(esp, 0x0024FAE3u); RECOMP_ABI_CALL(0x002514E0u, sub_002514E0); /* call 0x002514E0 */

loc_0024FAE3: ;
    esi = MEM32(esp + 0x38);
    PUSH32(esp, ebx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    eax = esi;
    PUSH32(esp, 0x0024FAF5u); RECOMP_ABI_CALL(0x00251310u, sub_00251310); /* call 0x00251310 */

loc_0024FAF5: ;
    ebp = MEM32(esp + 0x44);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0025082E; /* je: equal / zero */

loc_0024FB05: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esp + 0x84);
    if (CMP_EQ(_fa, _fb)) goto loc_0024FB50; /* je: equal / zero */

loc_0024FB10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024FB1C; /* jne: not equal / not zero */

loc_0024FB15: ;
    eax = MEM32(0x614FCC);
    goto loc_0024FB26;

loc_0024FB1C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024FB26; /* jne: not equal / not zero */

loc_0024FB21: ;
    eax = MEM32(0x614FD0);

loc_0024FB26: ;
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024FB30u); RECOMP_ABI_CALL(0x00103310u, sub_00103310); /* call 0x00103310 */

loc_0024FB30: ;
    edx = MEM32(esp + 0x70);
    eax = MEM32(esp + 0x74);
    ecx = MEM32(esp + 0x78);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x58) = ecx;
    goto loc_0024FC2A;

loc_0024FB50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024FB5C; /* jne: not equal / not zero */

loc_0024FB55: ;
    eax = MEM32(0x614FCC);
    goto loc_0024FB66;

loc_0024FB5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024FB66; /* jne: not equal / not zero */

loc_0024FB61: ;
    eax = MEM32(0x614FD0);

loc_0024FB66: ;
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0024FB70u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_0024FB70: ;
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x78)); /* fsub dword ptr [esp + 0x78] */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x70); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x74); /* subss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x6C) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x6C);
    MEM32(esp + 0x50) = eax;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x50)); /* fmul dword ptr [esp + 0x50] */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x70);
    MEM32(esp + 0x54) = ecx;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x54)); /* fmul dword ptr [esp + 0x54] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3337C0)); /* fmul dword ptr [0x3337c0] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */

loc_0024FC2A: ;
    edx = MEM32(edi + 0x116C);
    ebx = (uint32_t)(int32_t)SMEM16(0x3418F2);
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    xmm0 = XMM_SCALAR(MEMF(0x333BA8)); /* movss */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebp)) >> 32) & 1);
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    xmm1.f[0] = (float)(int32_t)MEM32(edx + edi + 0x1170); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x6C;
    ecx = esp + 0x50;
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0024FC84u); RECOMP_ABI_CALL(0x0002C570u, sub_0002C570); /* call 0x0002C570 */

loc_0024FC84: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337A0); /* comiss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024FC98; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3337A0)) */

loc_0024FC93: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    goto loc_0024FCC2;

loc_0024FC98: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024FCAF; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0024FCA5: ;
    xmm2 = XMM_SCALAR(MEMF(0x333894)); /* movss */
    goto loc_0024FCC2;

loc_0024FCAF: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    PUSH32(esp, 0x0024FCB8u); RECOMP_ABI_CALL(0x002941B0u, sub_002941B0); /* call 0x002941B0 */

loc_0024FCB8: ;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */

loc_0024FCC2: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x54); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    xmm0 = xmm2; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024FCE9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0024FCDD: ;
    xmm0 = XMM_SCALAR(MEMF(0x333BA8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_0024FCE9: ;
    ecx = MEM32(edi + 0x1114);
    eax = (uint32_t)(int32_t)SMEM16(0x3418FA);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + edi + 0x1118); /* subss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(esp + 0x2C) = eax;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024FD24; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_0024FD16: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x333BA8); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_0024FD24: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm2 = xmm0; /* movaps */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    edx = (int32_t)xmm2.f[0]; /* cvttss2si */
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_0024FEE9; /* jle: less or equal (signed <=) */

loc_0024FD67: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x333864); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024FEE9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x333864)) */

loc_0024FD74: ;
    eax = MEM32(esp + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024FD87; /* jne: not equal / not zero */

loc_0024FD80: ;
    eax = MEM32(0x614FCC);
    goto loc_0024FD91;

loc_0024FD87: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024FD91; /* jne: not equal / not zero */

loc_0024FD8C: ;
    eax = MEM32(0x614FD0);

loc_0024FD91: ;
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0024FD9Bu); RECOMP_ABI_CALL(0x00103310u, sub_00103310); /* call 0x00103310 */

loc_0024FD9B: ;
    edx = MEM32(esp + 0x70);
    ebx = (uint32_t)(int32_t)SMEM16(0x3418F2);
    eax = MEM32(esp + 0x74);
    ecx = MEM32(esp + 0x78);
    xmm0 = XMM_SCALAR(MEMF(0x333BA8)); /* movss */
    MEM32(esp + 0x54) = edx;
    edx = MEM32(edi + 0x116C);
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebp)) >> 32) & 1);
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    xmm1.f[0] = (float)(int32_t)MEM32(edx + edi + 0x1170); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = ecx;
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x6C;
    ecx = esp + 0x50;
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0024FE10u); RECOMP_ABI_CALL(0x0002C570u, sub_0002C570); /* call 0x0002C570 */

loc_0024FE10: ;
    xmm2 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024FE2B; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_0024FE23: ;
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = xmm4; /* movaps */
    goto loc_0024FE60;

loc_0024FE2B: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024FE42; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0024FE38: ;
    xmm3 = XMM_SCALAR(MEMF(0x333894)); /* movss */
    goto loc_0024FE5D;

loc_0024FE42: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    PUSH32(esp, 0x0024FE4Bu); RECOMP_ABI_CALL(0x002941B0u, sub_002941B0); /* call 0x002941B0 */

loc_0024FE4B: ;
    xmm2 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */

loc_0024FE5D: ;
    xmm4 = XMM_ZERO(); /* xorps self = zero */

loc_0024FE60: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x54); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm0 = xmm3; /* movaps */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024FE84; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_0024FE78: ;
    xmm0 = XMM_SCALAR(MEMF(0x333BA8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */

loc_0024FE84: ;
    ecx = MEM32(edi + 0x1114);
    eax = (uint32_t)(int32_t)SMEM16(0x3418FA);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + edi + 0x1118); /* subss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(esp + 0x2C) = eax;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0024FEBF; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0024FEB1: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x333BA8); /* addss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_0024FEBF: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    edx = (int32_t)xmm2.f[0]; /* cvttss2si */
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */

loc_0024FEE9: ;
    eax = MEM32(esp + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024FFA6; /* jne: not equal / not zero */

loc_0024FEF9: ;
    eax = MEM32(0x614FCC);

loc_0024FEFE: ;
    MEM32(esp + 0x24) = eax;

loc_0024FF02: ;
    eax = MEM32(edi + 0x1264);
    edx = MEM32(edi + 0x1268);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    ecx = edi + 0x1260;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x38) = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x38));
    edx = (uint32_t)(int32_t)SMEM16(0x34191A);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xC)) >> 32) & 1);
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x1C);

loc_0024FF45: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0024FF55; /* je: equal / zero */

loc_0024FF49: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0024FF45; /* jl: less (signed <) */

loc_0024FF52: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0024FF55: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x38) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0024FFEA; /* je: equal / zero */

loc_0024FF62: ;
    eax = MEM32(edi + 0x1338);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x64D90C); /* subss */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0x133C));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x2C));
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + edi + 0x1340); /* subss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337D0); /* comiss */
    if ((_fca >= _fcb)) goto loc_0024FFBE; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x3337D0)) */

loc_0024FF9D: ;
    MEM32(esp + 0x14) = ecx;
    goto loc_00250288;

loc_0024FFA6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0024FEFE; /* jne: not equal / not zero */

loc_0024FFAF: ;
    ecx = MEM32(0x614FD0);
    MEM32(esp + 0x24) = ecx;
    goto loc_0024FF02;

loc_0024FFBE: ;
    edx = MEM32(edi + 0x1264);
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebp)) >> 32) & 1);
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(edi + 0x1268));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0x20));
    MEM32(edx + edi + 0x126C) = 0;
    MEM32(esp + 0x38) = 0xFFFFFFFFu;

loc_0024FFEA: ;
    ecx = MEM32(edi + 0x116C);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    ebx = (uint32_t)(int32_t)SMEM16(0x3418F2);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0x50) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x50);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + edi + 0x1170)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + edi + 0x1170))); }
    ecx = MEM32(edi + 0x116C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + edi + 0x1170)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edi + 0x1170), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0025011A; /* jle: less or equal (signed <=) */

loc_00250052: ;
    eax = MEM32(edi + 0x1264);
    ecx = MEM32(edi + 0x116C);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0x1268));
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    ecx = MEM32(ecx + edi + 0x1170);
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = ecx;
    goto loc_00250090;

loc_00250083: ;
    eax = MEM32(esp + 0x4C);
    goto loc_00250090;

    /* nop */

loc_00250090: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(int32_t)SMEM16(0x34191A);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = MEM32(ecx + edi + 0x126C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002500B3; /* jne: not equal / not zero */

loc_002500AC: ;
    eax = MEM32(0x614FCC);
    goto loc_002500BD;

loc_002500B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002500BD; /* jne: not equal / not zero */

loc_002500B8: ;
    eax = MEM32(0x614FD0);

loc_002500BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0025011A; /* je: equal / zero */

loc_002500C1: ;
    edx = MEM32(edi + 0x116C);
    ecx = MEM32(esp + 0x14);
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebp)) >> 32) & 1);
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    eax = MEM32(edx + edi + 0x1170);
    eax = eax + ecx + -1;
    ecx = MEM32(edi + 0x116C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + edi + 0x1170)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + edi + 0x1170))); }
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x50);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x1C);
    if (CMP_L(_fas, _fbs)) goto loc_00250083; /* jl: less (signed <) */

loc_0025011A: ;
    eax = MEM32(edi + 0x116C);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    ecx = MEM32(eax + edi + 0x1170);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x20) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_002501E5; /* jle: less or equal (signed <=) */

loc_0025013F: ;
    eax = MEM32(edi + 0x1264);
    ecx = MEM32(edi + 0x116C);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0x1268));
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    ecx = MEM32(ecx + edi + 0x1170);
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x4C) = ecx;
    goto loc_00250180;

loc_00250170: ;
    eax = MEM32(esp + 0x50);
    goto loc_00250180;

    /* nop */
    /* nop */

loc_00250180: ;
    ecx = eax + edx;
    eax = (uint32_t)(int32_t)SMEM16(0x34191A);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = MEM32(ecx + edi + 0x126C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002501A0; /* jne: not equal / not zero */

loc_00250199: ;
    eax = MEM32(0x614FCC);
    goto loc_002501AA;

loc_002501A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002501AA; /* jne: not equal / not zero */

loc_002501A5: ;
    eax = MEM32(0x614FD0);

loc_002501AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002501E1; /* je: equal / zero */

loc_002501AE: ;
    ecx = MEM32(edi + 0x116C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    eax = edx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + edi + 0x1170)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + edi + 0x1170))); }
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x4C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00250170; /* jl: less (signed <) */

loc_002501E1: ;
    MEM32(esp + 0x1C) = edx;

loc_002501E5: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0025027C; /* jl: less (signed <) */

loc_002501F5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0025026C; /* jg: greater (signed >) */

loc_002501F9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0025026C; /* je: equal / zero */

loc_002501FF: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = edi + 0x9C;
    PUSH32(esp, 3);
    edx = ebp;
    PUSH32(esp, 0x00250214u); RECOMP_ABI_CALL(0x00252120u, sub_00252120); /* call 0x00252120 */

loc_00250214: ;
    ecx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x60;
    PUSH32(esp, 0x00250222u); RECOMP_ABI_CALL(0x0001EFF0u, sub_0001EFF0); /* call 0x0001EFF0 */

loc_00250222: ;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    edx = ebp;
    eax = edi + 0x9C;
    PUSH32(esp, 0x0025023Bu); RECOMP_ABI_CALL(0x00252120u, sub_00252120); /* call 0x00252120 */

loc_0025023B: ;
    ecx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x60;
    PUSH32(esp, 0x00250249u); RECOMP_ABI_CALL(0x0001EFF0u, sub_0001EFF0); /* call 0x0001EFF0 */

loc_00250249: ;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_00250272; /* ja: above (unsigned >) */

loc_0025025B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x24); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0025027C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x24)) */

loc_00250268: ;
    edx = MEM32(esp + 0x1C);

loc_0025026C: ;
    MEM32(esp + 0x14) = edx;
    goto loc_00250284;

loc_00250272: ;
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x14) = eax;
    goto loc_00250284;

loc_0025027C: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x14) = ecx;

loc_00250284: ;
    ecx = MEM32(esp + 0x14);

loc_00250288: ;
    eax = MEM32(edi + 0x116C);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    ebx = eax;
    eax = ecx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebx + edi + 0x1170)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebx + edi + 0x1170))); }
    eax = MEM32(edi + 0x1464);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = edx;
    MEM32(esp + 0x50) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_002502D8; /* je: equal / zero */

loc_002502B3: ;
    ebx = MEM32(esp + 0x80);
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0x002502C2u); RECOMP_ABI_CALL(0x002509B0u, sub_002509B0); /* call 0x002509B0 */

loc_002502C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0x002502CDu); RECOMP_ABI_CALL(0x002509B0u, sub_002509B0); /* call 0x002509B0 */

loc_002502CD: ;
    ecx = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x54);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002502D8: ;
    SET_LO8(eax, MEM8(esp + 0x8C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00250490; /* je: equal / zero */

loc_002502E7: ;
    edx = MEM32(edi + 0x143C);
    eax = (uint32_t)(int32_t)SMEM16(0x3418FA);
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebp)) >> 32) & 1);
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    xmm0 = XMM_SCALAR(MEMF(edx + edi + 0x1440)); /* movss */
    edx = MEM32(edi + 0xA0);
    eax = (uint32_t)(int32_t)SMEM16(0x341902);
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebp)) >> 32) & 1);
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(edi + 0xA4));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    xmm1 = XMM_SCALAR(MEMF(edx + edi + 0xA8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = edx + edi + 0xA8;
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edx = MEM32(esp + 0x50);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x54);
    MEM32(edi + 0x1148) = eax;
    MEM32(edi + 0x1144) = edx;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x58);
    MEM32(edi + 0x114C) = edx;
    eax = MEM32(edi + 0x12D8);
    edx = (uint32_t)(int32_t)SMEM16(0x3418FA);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    xmm0 = XMM_SCALAR(MEMF(eax + edi + 0x12DC)); /* movss */
    eax = MEM32(edi + 0xA0);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337D8); /* mulss */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0xA4));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(int32_t)SMEM16(0x341902);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    xmm1 = XMM_SCALAR(MEMF(eax + edi + 0xAC)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + edi + 0xB0)); /* movss */
    eax = eax + edi + 0xA8;
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax); /* mulss */
    eax = MEM32(esp + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + 0x1148); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x1144)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(edi + 0x114C); /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(edi + 0x1144) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x1148) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x114C) = xmm2.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0025042C; /* jne: not equal / not zero */

loc_00250425: ;
    eax = MEM32(0x614FCC);
    goto loc_00250436;

loc_0025042C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00250436; /* jne: not equal / not zero */

loc_00250431: ;
    eax = MEM32(0x614FD0);

loc_00250436: ;
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00250440u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_00250440: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x1144); /* addss */
    ecx = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(esp + 0x90));
    MEMF(edi + 0x1144) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x1148)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x74); /* addss */
    MEMF(edi + 0x1148) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x114C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x78); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edi + 0x114C) = xmm0.f[0]; /* movss */

loc_00250490: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00250637; /* je: equal / zero */

loc_00250498: ;
    eax = MEM32(edi + 0x143C);
    edx = MEM32(edi + 0xA0);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    ecx = (uint32_t)(int32_t)SMEM16(0x3418FA);
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    xmm0 = XMM_SCALAR(MEMF(eax + edi + 0x1440)); /* movss */
    eax = (uint32_t)(int32_t)SMEM16(0x341902);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebp)) >> 32) & 1);
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(edi + 0xA4));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebx)) >> 32) & 1);
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = edx + edi + 0xA8;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    ecx = MEM32(esp + 0x50);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = MEM32(esp + 0x54);
    MEM32(edi + 0x115C) = ecx;
    MEM32(edi + 0x1160) = edx;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x58);
    MEM32(edi + 0x1164) = eax;
    ecx = MEM32(edi + 0x12D8);
    eax = MEM32(edi + 0xA0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    edx = (uint32_t)(int32_t)SMEM16(0x3418FA);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0xA4));
    xmm0 = XMM_SCALAR(MEMF(ecx + edi + 0x12DC)); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(0x341902);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337D8); /* mulss */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    xmm2 = XMM_SCALAR(MEMF(eax + edi + 0xAC)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + edi + 0xB0)); /* movss */
    eax = eax + edi + 0xA8;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    eax = MEM32(esp + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + 0x115C); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(edi + 0x1160); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(edi + 0x1164); /* addss */
    MEMF(edi + 0x115C) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x1160) = xmm2.f[0]; /* movss */
    MEMF(edi + 0x1164) = xmm3.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_002505D3; /* jne: not equal / not zero */

loc_002505CC: ;
    eax = MEM32(0x614FCC);
    goto loc_002505DD;

loc_002505D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002505DD; /* jne: not equal / not zero */

loc_002505D8: ;
    eax = MEM32(0x614FD0);

loc_002505DD: ;
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002505E7u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_002505E7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x115C); /* addss */
    ecx = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(esp + 0x90));
    MEMF(edi + 0x115C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x74)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x1160); /* addss */
    MEMF(edi + 0x1160) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x1164); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edi + 0x1164) = xmm0.f[0]; /* movss */

loc_00250637: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00250647; /* je: equal / zero */

loc_0025063B: ;
    MEM32(edi + 0x1254) = ecx;
    MEM32(edi + 0x125C) = ebx;

loc_00250647: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00250729; /* je: equal / zero */

loc_0025064F: ;
    eax = MEM32(esp + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00250662; /* jne: not equal / not zero */

loc_0025065B: ;
    eax = MEM32(0x614FCC);
    goto loc_0025066C;

loc_00250662: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0025066C; /* jne: not equal / not zero */

loc_00250667: ;
    eax = MEM32(0x614FD0);

loc_0025066C: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00250676u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_00250676: ;
    eax = MEM32(esp + 0x88);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0025068C; /* jne: not equal / not zero */

loc_00250685: ;
    eax = MEM32(0x614FCC);
    goto loc_00250696;

loc_0025068C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00250696; /* jne: not equal / not zero */

loc_00250691: ;
    eax = MEM32(0x614FD0);

loc_00250696: ;
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002506A0u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_002506A0: ;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x70)); /* fsub dword ptr [esp + 0x70] */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x38); /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x74)); /* fsub dword ptr [esp + 0x74] */
    MEMF(edi + 0x12C0) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    ecx = MEM32(edi + 0x143C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x78)); /* fsub dword ptr [esp + 0x78] */
    edx = MEM32(edi + 0x12D8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] * fp_top()); fp_pop(); /* fmulp st(3) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    eax = (uint32_t)(int32_t)SMEM16(0x3418FA);
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] + fp_top()); fp_pop(); /* faddp st(3) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebp)) >> 32) & 1);
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + edi + 0x1440)); /* fsub dword ptr [ecx + edi + 0x1440] */
    ecx = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(esp + 0x8C));
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(edx + edi + 0x12DC)); /* fdiv dword ptr [edx + edi + 0x12dc] */
    MEMF(edi + 0x12EC) = (float)fp_top(); fp_pop(); /* fstp */

loc_00250729: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00250751; /* je: equal / zero */

loc_0025072D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3337D8); /* subss */
    MEMF(edi + 0x12F8) = xmm0.f[0]; /* movss */

loc_00250751: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0025075B; /* je: equal / zero */

loc_00250755: ;
    MEM32(edi + 0x12E8) = ebp;

loc_0025075B: ;
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x38), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002507FF; /* jne: not equal / not zero */

loc_00250766: ;
    eax = (uint32_t)(int32_t)SMEM16(0x3418FA);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    xmm0 = XMM_SCALAR(MEMF(eax + edi + 0x10D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    edx = eax + edi + 0x10D4;
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002507A4; /* jp: parity */

loc_00250795: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x64D90C); /* subss */
    MEMF(edx) = xmm1.f[0]; /* movss */

loc_002507A4: ;
    edx = MEM32(edi + 0x1264);
    eax = (uint32_t)(int32_t)SMEM16(0x34191A);
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebp)) >> 32) & 1);
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(edi + 0x1268));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(esp + 0x88);
    MEM32(edx + edi + 0x126C) = eax;
    edx = MEM32(edi + 0x1338);
    eax = (uint32_t)(int32_t)SMEM16(0x3418FA);
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    xmm0.f[0] = xmm0.f[0] - MEMF(0x64D90C); /* subss */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebp)) >> 32) & 1);
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(edi + 0x133C));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    MEMF(edx + edi + 0x1340) = xmm0.f[0]; /* movss */

loc_002507FF: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x44);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(0x64D878) = edx;
    MEM32(0x64D87C) = eax;
    MEM32(0x64D880) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x6C)) >> 32) & 1);
    esp = esp + 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0025082E: ;
    _fa = (uint32_t)(MEM8(esp + 0x8C)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x8C), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00250842; /* je: equal / zero */

loc_00250838: ;
    MEM32(edi + 0x12E8) = 0xFFFFFFFFu;

loc_00250842: ;
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x44);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x64D884) = edx;
    edx = MEM32(esp + 0x40);
    POP32(esp, ebp);
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D880) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x6C)) >> 32) & 1);
    esp = esp + 0x6C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00250880
 * Original: 0x00250880 - 0x00250952 (210 bytes, 57 insns)
 * Folder: scripts (between: 0x0024F3A0 and 0x002515A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00250880: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x64D87C);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(edi + 0x18);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 8) = edx;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x44);
    edx = MEM32(esi + 0x116C);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = eax;
    eax = (uint32_t)(int32_t)SMEM16(0x3418F2);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(edx + esi + 0x1170);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D884) = edi;
    MEM32(0x64D880) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00250925; /* jle: less or equal (signed <=) */

loc_002508F5: ;
    PUSH32(esp, ebp);
    eax = edi;
    PUSH32(esp, 0x002508FDu); RECOMP_ABI_CALL(0x002509B0u, sub_002509B0); /* call 0x002509B0 */

loc_002508FD: ;
    ecx = MEM32(esi + 0x116C);
    edx = MEM32(esp + 0x24);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(int32_t)SMEM16(0x3418F2);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    eax = MEM32(ecx + esi + 0x1170);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002508F5; /* jl: less (signed <) */

loc_00250925: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(0x64D884) = eax;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebp);
    MEM32(0x64D878) = ecx;
    MEM32(0x64D87C) = edx;
    MEM32(0x64D880) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00250960
 * Original: 0x00250960 - 0x002509AF (79 bytes, 33 insns)
 * Folder: scripts (between: 0x0024F3A0 and 0x002515A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00250960: ;
    eax = MEM32(ecx + 0x18);
    edx = MEM32(eax + 4);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x44);
    esi = esp + 0x14;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00250980u); RECOMP_ABI_CALL(0x002514E0u, sub_002514E0); /* call 0x002514E0 */

loc_00250980: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002509A7; /* je: equal / zero */

loc_00250989: ;
    eax = MEM32(edi + eax * 4 + 0x1300);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025099A; /* je: equal / zero */

loc_00250995: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002509A7; /* jne: not equal / not zero */

loc_0025099A: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    MEM32(ebp) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002509A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = ebx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002509B0
 * Original: 0x002509B0 - 0x00250A3C (140 bytes, 39 insns)
 * Folder: scripts (between: 0x0024F3A0 and 0x002515A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002509B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002509B0: ;
    ecx = MEM32(eax + 0x18);
    ecx = MEM32(ecx + 4);
    edx = MEM32(ecx + 0x44);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D878);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D87C);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    edi = MEM32(0x64D880);
    MEM32(0x64D884) = eax;
    MEM32(0x64D880) = eax;
    eax = MEM32(esp + 0x20);
    eax = MEM32(edx + eax * 4 + 0x117C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(0x64D878) = ecx;
    MEM32(0x64D87C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00250A05; /* jne: not equal / not zero */

loc_002509FE: ;
    eax = MEM32(0x614FCC);
    goto loc_00250A0F;

loc_00250A05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00250A0F; /* jne: not equal / not zero */

loc_00250A0A: ;
    eax = MEM32(0x614FD0);

loc_00250A0F: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00250A19u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_00250A19: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D880) = edi;
    POP32(esp, edi);
    MEM32(0x64D884) = esi;
    POP32(esp, esi);
    MEM32(0x64D87C) = ebp;
    POP32(esp, ebp);
    MEM32(0x64D878) = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00250A40
 * Original: 0x00250A40 - 0x00250A65 (37 bytes, 13 insns)
 * Folder: scripts (between: 0x0024F3A0 and 0x002515A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250A40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250A40: ;
    edx = MEM32(eax + 0x18);
    eax = MEM32(edx + 4);
    eax = MEM32(eax + 0x44);
    edx = MEM32(eax + 0x1144);
    _fb = (uint32_t)(0x1144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1144;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00250A43
 * Original: 0x00250A43 - 0x00250A65 (34 bytes, 12 insns)
 * Folder: scripts (between: 0x0024F3A0 and 0x002515A0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250A43(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250A43: ;
    eax = MEM32(edx + 4);
    eax = MEM32(eax + 0x44);
    edx = MEM32(eax + 0x1144);
    _fb = (uint32_t)(0x1144) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1144;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00250A70
 * Original: 0x00250A70 - 0x00250AAD (61 bytes, 21 insns)
 * Folder: scripts (between: 0x0024F3A0 and 0x002515A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00250A70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00250A7Eu); RECOMP_ABI_CALL(0x00251270u, sub_00251270); /* call 0x00251270 */

loc_00250A7E: ;
    ecx = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00250A89u); RECOMP_ABI_CALL(0x0023AF30u, sub_0023AF30); /* call 0x0023AF30 */

loc_00250A89: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00250AA7; /* jl: less (signed <) */

loc_00250A9A: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00250AA7; /* jle: less or equal (signed <=) */

loc_00250AA2: ;
    eax = 1;

loc_00250AA7: ;
    MEM32(edi) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00250AB0
 * Original: 0x00250AB0 - 0x00251261 (1969 bytes, 445 insns)
 * Folder: scripts (between: 0x0024F3A0 and 0x002515A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00250AB0(void)
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

loc_00250AB0: ;
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xDC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x64D884);
    edx = MEM32(0x64D880);
    xmm2 = XMM_SCALAR(MEMF(0x333BA8)); /* movss */
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(0x64D878);
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(eax + 0x18);
    ecx = MEM32(ecx + 4);
    MEM32(0x64D884) = eax;
    MEM32(0x64D880) = eax;
    eax = MEM32(esp + 0xE8);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xF0)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x33382C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xEC); /* addss */
    PUSH32(esp, ebx);
    MEM32(esp + 0x54) = edx;
    edx = MEM32(0x64D87C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xE8);
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x44);
    ebx = MEM32(esi + ebp * 4 + 0x117C);
    MEM32(esp + 0x78) = edx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(0x64D878) = ecx;
    MEM32(0x64D87C) = ecx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x4C) = edi;
    MEM32(esp + 0x1C) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00250BFF; /* jle: less or equal (signed <=) */

loc_00250B87: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00250B93; /* jne: not equal / not zero */

loc_00250B8C: ;
    eax = MEM32(0x614FCC);
    goto loc_00250B9F;

loc_00250B93: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    eax = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_00250B9F; /* je: equal / zero */

loc_00250B9D: ;
    eax = ebx;

loc_00250B9F: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00250BA9u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_00250BA9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    eax = MEM32(esp + 0x18);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ecx;
    goto loc_00250C07;

loc_00250BFF: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */

loc_00250C07: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00250C7B; /* je: equal / zero */

loc_00250C0B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    edx = MEM32(0x614FD0);
    ecx = MEM32(0x614FCC);
    if (CMP_NE(_fa, _fb)) goto loc_00250C20; /* jne: not equal / not zero */

loc_00250C1C: ;
    eax = ecx;
    goto loc_00250C29;

loc_00250C20: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    eax = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00250C29; /* je: equal / zero */

loc_00250C27: ;
    eax = ebx;

loc_00250C29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00250C47; /* je: equal / zero */

loc_00250C2D: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00250C47; /* je: equal / zero */

loc_00250C34: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00250C47; /* je: equal / zero */

loc_00250C3A: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00250C47; /* je: equal / zero */

loc_00250C41: ;
    eax = ZX16(MEM16(eax + 0x14));
    goto loc_00250C49;

loc_00250C47: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00250C49: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    MEM32(esp + 0x4C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00250C56; /* jne: not equal / not zero */

loc_00250C52: ;
    eax = ecx;
    goto loc_00250C5F;

loc_00250C56: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    eax = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00250C5F; /* je: equal / zero */

loc_00250C5D: ;
    eax = ebx;

loc_00250C5F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00250C7B; /* je: equal / zero */

loc_00250C63: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00250C7B; /* je: equal / zero */

loc_00250C6A: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00250C7B; /* je: equal / zero */

loc_00250C70: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00250C7B; /* je: equal / zero */

loc_00250C77: ;
    MEM8(eax + 0x14) = MEM8(eax + 0x14) | 0x20;
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00250C7B: ;
    eax = MEM32(esp + 0xF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0025117A; /* jle: less or equal (signed <=) */

loc_00250C8A: ;
    goto loc_00250CA0;

loc_00250C8C: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    /* nop */

loc_00250CA0: ;
    MEMF(esp + 0xC0) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x84) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xBC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x88) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x104); /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x333BA4); /* mulss */
    edx = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x333BA8); /* mulss */
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    edx = esp + 0xA8;
    eax = esp + 0x84;
    ecx = esp + 0xC0;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00250D2Cu); RECOMP_ABI_CALL(0x000FC8A0u, sub_000FC8A0); /* call 0x000FC8A0 */

loc_00250D2C: ;
    eax = MEM32(esi + 0xA0);
    ecx = MEM32(esp + 0xF8);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    edx = (uint32_t)(int32_t)SMEM16(0x341902);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0xA4));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = MEM32(esp + 0xA8);
    eax = eax + esi + 0xA8;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0xAC);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xB0);
    MEM32(eax + 8) = edx;
    eax = MEM32(esi + 0x1264);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    edx = MEM32(0x64D880);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x1268));
    ecx = (uint32_t)(int32_t)SMEM16(0x34191A);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(eax + esi + 0x126C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025116A; /* je: equal / zero */

loc_00250DAB: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x78)); /* movss */
    MEMF(esp + 0x8C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x90) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    MEMF(esp + 0xDC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3337D8); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x30); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x104); /* addss */
    MEMF(esp + 0xD4) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xD8) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x333BA4); /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x333BA8); /* mulss */
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    edx = esp + 0x9C;
    eax = esp + 0xD8;
    ecx = esp + 0x90;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00250E52u); RECOMP_ABI_CALL(0x000FC8A0u, sub_000FC8A0); /* call 0x000FC8A0 */

loc_00250E52: ;
    ecx = MEM32(esp + 0x9C);
    edx = MEM32(esp + 0xA0);
    eax = MEM32(esp + 0xA4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00250E83; /* jne: not equal / not zero */

loc_00250E7B: ;
    ebx = MEM32(0x614FCC);
    goto loc_00250E8E;

loc_00250E83: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00250E8E; /* jne: not equal / not zero */

loc_00250E88: ;
    ebx = MEM32(0x614FD0);

loc_00250E8E: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    PUSH32(esp, 0);
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x40)); /* fmul dword ptr [esp + 0x40] */
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0xD0;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    eax = esp + 0x54;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0x40); /* divss */
    ecx = MEM32(esp + 0x40);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0xD4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    PUSH32(esp, edx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xDC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ebx = MEM32(0x34AC38);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xE8) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x00250F25u); RECOMP_ABI_CALL(0x0007DBB0u, sub_0007DBB0); /* call 0x0007DBB0 */

loc_00250F25: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002510FD; /* jne: not equal / not zero */

loc_00250F30: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    xmm3 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x3339E0)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    ecx = MEM32(esp + 0x50);
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    edx = MEM32(esp + 0x54);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x58);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0xE8) = eax;
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xE0) = ecx;
    ecx = MEM32(esp + 0x6C);
    MEM32(esp + 0xE4) = edx;
    edx = MEM32(esp + 0x70);
    MEMF(esp + 0x74) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x74);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEM32(esp + 0x40) = ecx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    MEM32(esp + 0x44) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00251015; /* jne: not equal / not zero */

loc_0025100E: ;
    eax = MEM32(0x614FCC);
    goto loc_0025101F;

loc_00251015: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025101F; /* jne: not equal / not zero */

loc_0025101A: ;
    eax = MEM32(0x614FD0);

loc_0025101F: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    ebx = MEM32(0x34AC38);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    PUSH32(esp, 1);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    PUSH32(esp, 0);
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    PUSH32(esp, 0);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0xE8;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x40);
    xmm3.f[0] = xmm3.f[0] / MEMF(esp + 0x40); /* divss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x108;
    PUSH32(esp, ecx);
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    PUSH32(esp, eax);
    MEMF(esp + 0xF8) = xmm4.f[0]; /* movss */
    MEMF(esp + 0xFC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x100) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x002510A2u); RECOMP_ABI_CALL(0x0007DBB0u, sub_0007DBB0); /* call 0x0007DBB0 */

loc_002510A2: ;
    ebx = MEM32(esp + 0x4C);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025116A; /* jne: not equal / not zero */

loc_002510B1: ;
    edx = MEM32(esi + 0x1338);
    ecx = MEM32(esp + 0xF4);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    eax = (uint32_t)(int32_t)SMEM16(0x3418FA);
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x64D90C); /* subss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esi + 0x133C));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + esi + 0x1340); /* subss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x3337D0); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0025116A; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(0x3337D0)) */

loc_002510FB: ;
    goto loc_00251111;

loc_002510FD: ;
    xmm0 = XMM_SCALAR(MEMF(0x64D354)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x64D90C); /* subss */
    ebx = MEM32(esp + 0x1C);

loc_00251111: ;
    ecx = MEM32(esi + 0x1264);
    eax = MEM32(esp + 0xF4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    edx = (uint32_t)(int32_t)SMEM16(0x34191A);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x1268));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = MEM32(0x64D880);
    MEM32(ecx + esi + 0x126C) = edx;
    ecx = MEM32(esi + 0x1338);
    edx = (uint32_t)(int32_t)SMEM16(0x3418FA);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x133C));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    MEMF(ecx + esi + 0x1340) = xmm0.f[0]; /* movss */

loc_0025116A: ;
    eax = MEM32(esp + 0xF8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00250C8C; /* jl: less (signed <) */

loc_0025117A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002511B7; /* je: equal / zero */

loc_0025117E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025118B; /* jne: not equal / not zero */

loc_00251183: ;
    ebx = MEM32(0x614FCC);
    goto loc_00251196;

loc_0025118B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251196; /* jne: not equal / not zero */

loc_00251190: ;
    ebx = MEM32(0x614FD0);

loc_00251196: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002511B7; /* je: equal / zero */

loc_0025119A: ;
    ebx = MEM32(ebx + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002511B7; /* je: equal / zero */

loc_002511A1: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002511B7; /* je: equal / zero */

loc_002511A7: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002511B7; /* je: equal / zero */

loc_002511AE: ;
    SET_LO16(ecx, MEM16(esp + 0x4C));
    MEM16(eax + 0x14) = LO16(ecx);

loc_002511B7: ;
    edx = MEM32(esi + 0x143C);
    ecx = (uint32_t)(int32_t)SMEM16(0x3418FA);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    eax = MEM32(esp + 0xF4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xFC)); /* movss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    MEMF(edx + esi + 0x1440) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x12D8);
    ecx = (uint32_t)(int32_t)SMEM16(0x3418FA);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x100)); /* movss */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    MEMF(edx + esi + 0x12DC) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x116C);
    ecx = MEM32(esp + 0xF8);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebp);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(int32_t)SMEM16(0x3418F2);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(esp + 0x64);
    MEM32(edx + esi + 0x1170) = ecx;
    edx = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x7C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x64D884) = edx;
    edx = MEM32(esp + 0x58);
    POP32(esp, ebp);
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D880) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xDC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00251270
 * Original: 0x00251270 - 0x00251301 (145 bytes, 51 insns)
 * Folder: scripts (between: 0x0024F3A0 and 0x002515A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00251270: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(eax + 4);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x44);
    esi = esp + 0xC;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0025128Cu); RECOMP_ABI_CALL(0x002514E0u, sub_002514E0); /* call 0x002514E0 */

loc_0025128C: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002512F2; /* je: equal / zero */

loc_00251295: ;
    eax = (uint32_t)(int32_t)SMEM16(0x3418F2);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0x116C));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    esi = MEM32(eax + edi + 0x1170);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002512E7; /* jle: less or equal (signed <=) */

loc_002512B3: ;
    eax = MEM32(edi + 0x1268);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0x1264));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = (uint32_t)(int32_t)SMEM16(0x34191A);
    PUSH32(esp, ebp);
    goto loc_002512D0;

    /* nop */

loc_002512D0: ;
    ebp = eax + ecx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edx);
    _fa = (uint32_t)(MEM32(edi + ebp + 0x126C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + ebp + 0x126C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002512E1; /* je: equal / zero */

loc_002512E0: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002512E1: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002512D0; /* jl: less (signed <) */

loc_002512E6: ;
    POP32(esp, ebp);

loc_002512E7: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002512F2: ;
    edx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = 0;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00251310
 * Original: 0x00251310 - 0x00251477 (359 bytes, 104 insns)
 * Folder: scripts (between: 0x0024F3A0 and 0x002515A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251310(void)
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

loc_00251310: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(0x64D884);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(0x64D87C);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(ebp + 0x18);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x44);
    MEM32(0x64D878) = eax;
    MEM32(0x64D87C) = eax;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = edx;
    MEM32(0x64D884) = ebp;
    MEM32(0x64D880) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_00251372; /* jne: not equal / not zero */

loc_0025136B: ;
    eax = MEM32(0x614FCC);
    goto loc_0025137C;

loc_00251372: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025137C; /* jne: not equal / not zero */

loc_00251377: ;
    eax = MEM32(0x614FD0);

loc_0025137C: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00251386u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_00251386: ;
    eax = MEM32(esi + ebx * 4 + 0x117C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025139C; /* jne: not equal / not zero */

loc_00251395: ;
    eax = MEM32(0x614FCC);
    goto loc_002513A6;

loc_0025139C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002513A6; /* jne: not equal / not zero */

loc_002513A1: ;
    eax = MEM32(0x614FD0);

loc_002513A6: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002513B0u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_002513B0: ;
    eax = MEM32(esi + ebx * 4 + 0x117C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 0x34) = 0xFFFFFFFFu;
    if (CMP_NE(_fa, _fb)) goto loc_002513CE; /* jne: not equal / not zero */

loc_002513C7: ;
    eax = MEM32(0x614FCC);
    goto loc_002513D8;

loc_002513CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002513D8; /* jne: not equal / not zero */

loc_002513D3: ;
    eax = MEM32(0x614FD0);

loc_002513D8: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002513E2u); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_002513E2: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_002513F0: ;
    eax = MEM32(esi + 0x12D8);
    ecx = (uint32_t)(int32_t)SMEM16(0x3418FA);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    xmm1 = XMM_SCALAR(MEMF(eax + esi + 0x12DC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00251433; /* jnp: not parity */

loc_00251417: ;
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0x00251428u); RECOMP_ABI_CALL(0x0024F910u, sub_0024F910); /* call 0x0024F910 */

loc_00251428: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025143B; /* je: equal / zero */

loc_00251433: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002513F0; /* jl: less (signed <) */

loc_00251439: ;
    goto loc_0025143F;

loc_0025143B: ;
    MEM32(esp + 0x34) = edi;

loc_0025143F: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = edx;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(0x64D884) = eax;
    eax = MEM32(esp + 0x18);
    POP32(esp, ebp);
    MEM32(0x64D878) = ecx;
    MEM32(0x64D87C) = edx;
    MEM32(0x64D880) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00251480
 * Original: 0x00251480 - 0x002514D1 (81 bytes, 28 insns)
 * Folder: scripts (between: 0x0024F3A0 and 0x002515A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00251480: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x44);
    if (CMP_NE(_fa, _fb)) goto loc_00251497; /* jne: not equal / not zero */

loc_0025148F: ;
    edx = MEM32(0x614FCC);
    goto loc_002514A4;

loc_00251497: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    edx = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_002514A4; /* je: equal / zero */

loc_002514A2: ;
    edx = eax;

loc_002514A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x117C;
    /* nop */

loc_002514B0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002514BF; /* je: equal / zero */

loc_002514B4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002514B0; /* jl: less (signed <) */

loc_002514BD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002514BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002514CF; /* je: equal / zero */

loc_002514C4: ;
    MEM32(esi + eax * 4 + 0x117C) = 0;

loc_002514CF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002514E0
 * Original: 0x002514E0 - 0x00251523 (67 bytes, 24 insns)
 * Folder: scripts (between: 0x0024F3A0 and 0x002515A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002514E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002514E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 4);
    ecx = MEM32(ecx + 0x44);
    if (CMP_NE(_fa, _fb)) goto loc_002514F6; /* jne: not equal / not zero */

loc_002514EE: ;
    edx = MEM32(0x614FCC);
    goto loc_00251503;

loc_002514F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    edx = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_00251503; /* je: equal / zero */

loc_00251501: ;
    edx = eax;

loc_00251503: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x117C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x117C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00251510;

    /* nop */

loc_00251510: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251520; /* je: equal / zero */

loc_00251514: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00251510; /* jl: less (signed <) */

loc_0025151D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00251520: ;
    MEM32(esi) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00251530
 * Original: 0x00251530 - 0x0025159F (111 bytes, 40 insns)
 * Folder: scripts (between: 0x0024F3A0 and 0x002515A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00251530: ;
    PUSH32(esp, ecx);
    edx = MEM32(0x64D880);
    ecx = MEM32(eax + 0x18);
    ecx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0x44);
    MEM32(0x64D880) = eax;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 1 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    MEM32(esp + 4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00251596; /* jne: not equal / not zero */

loc_00251555: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x118C;
    edi = 0x32;

loc_00251562: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025158A; /* je: equal / zero */

loc_00251568: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251574; /* jne: not equal / not zero */

loc_0025156D: ;
    eax = MEM32(0x614FCC);
    goto loc_0025157E;

loc_00251574: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025157E; /* jne: not equal / not zero */

loc_00251579: ;
    eax = MEM32(0x614FD0);

loc_0025157E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00251587u); RECOMP_ABI_CALL(0x0010F720u, sub_0010F720); /* call 0x0010F720 */

loc_00251587: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0025158A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00251562; /* jne: not equal / not zero */

loc_00251590: ;
    edx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);

loc_00251596: ;
    MEM32(0x64D880) = edx;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002515A0
 * Original: 0x002515A0 - 0x002518E4 (836 bytes, 255 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002515A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002515A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D878);
    ecx = MEM32(eax + 0x44);
    eax = MEM32(0x64D870);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(0x64D1F8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00251803; /* je: equal / zero */

loc_002515C9: ;
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 0xCC00008Eu);
    eax = 0x493610;
    PUSH32(esp, 0x002515DBu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_002515DB: ;
    ebx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002515F1; /* je: equal / zero */

loc_002515E8: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002515FB; /* je: equal / zero */

loc_002515F1: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251607; /* je: equal / zero */

loc_002515FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251607; /* jne: not equal / not zero */

loc_00251600: ;
    ecx = 0xCC00008Eu;
    goto loc_0025160E;

loc_00251607: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0025162B; /* je: equal / zero */

loc_0025160E: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00251626u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00251626: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00251630;

loc_0025162B: ;
    eax = 0xCC00008Eu;

loc_00251630: ;
    esi = MEM32(0x34AC3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = MEM32(0x614FCC);
    MEM32(0x650920) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00251649; /* jne: not equal / not zero */

loc_00251645: ;
    eax = esi;
    goto loc_00251662;

loc_00251649: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251652; /* jne: not equal / not zero */

loc_0025164E: ;
    eax = edi;
    goto loc_0025165C;

loc_00251652: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025165C; /* jne: not equal / not zero */

loc_00251657: ;
    eax = MEM32(0x614FD0);

loc_0025165C: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 4);

loc_00251662: ;
    eax = MEM32(eax + 0x44);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6540F0) = eax;
    PUSH32(esp, 0xB004619);
    eax = 0x493610;
    PUSH32(esp, 0x0025167Cu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0025167C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025168C; /* je: equal / zero */

loc_00251683: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251696; /* je: equal / zero */

loc_0025168C: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002516A2; /* je: equal / zero */

loc_00251696: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002516A2; /* jne: not equal / not zero */

loc_0025169B: ;
    ecx = 0xB004619;
    goto loc_002516A9;

loc_002516A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002516C6; /* je: equal / zero */

loc_002516A9: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002516C1u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_002516C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002516CB;

loc_002516C6: ;
    eax = 0xB004619;

loc_002516CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x65091C) = eax;
    ecx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002516DA; /* jne: not equal / not zero */

loc_002516D6: ;
    ecx = esi;
    goto loc_002516F4;

loc_002516DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002516E3; /* jne: not equal / not zero */

loc_002516DF: ;
    ecx = edi;
    goto loc_002516EE;

loc_002516E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002516EE; /* jne: not equal / not zero */

loc_002516E8: ;
    ecx = MEM32(0x614FD0);

loc_002516EE: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 4);

loc_002516F4: ;
    ebp = MEM32(ecx + 0x44);
    _fb = (uint32_t)(0x14C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x14C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x6540EC) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_0025170B; /* jne: not equal / not zero */

loc_00251707: ;
    eax = esi;
    goto loc_00251724;

loc_0025170B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251714; /* jne: not equal / not zero */

loc_00251710: ;
    eax = edi;
    goto loc_0025171E;

loc_00251714: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0025171E; /* jne: not equal / not zero */

loc_00251719: ;
    eax = MEM32(0x614FD0);

loc_0025171E: ;
    edx = MEM32(eax + 0x18);
    eax = MEM32(edx + 4);

loc_00251724: ;
    esi = MEM32(eax + 0x44);
    _fb = (uint32_t)(0x174) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x174;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xCC000431u);
    eax = 0x493610;
    MEM32(0x6540E8) = esi;
    PUSH32(esp, 0x00251742u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00251742: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251752; /* je: equal / zero */

loc_00251749: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025175C; /* je: equal / zero */

loc_00251752: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251768; /* je: equal / zero */

loc_0025175C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251768; /* jne: not equal / not zero */

loc_00251761: ;
    ecx = 0xCC000431u;
    goto loc_0025176F;

loc_00251768: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0025178C; /* je: equal / zero */

loc_0025176F: ;
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
    PUSH32(esp, 0x00251787u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00251787: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00251791;

loc_0025178C: ;
    eax = 0xCC000431u;

loc_00251791: ;
    edi = eax;
    PUSH32(esp, 0xB004640);
    eax = 0x493610;
    MEM32(0x650914) = edi;
    PUSH32(esp, 0x002517A8u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_002517A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002517B8; /* je: equal / zero */

loc_002517AF: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002517C2; /* je: equal / zero */

loc_002517B8: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002517CE; /* je: equal / zero */

loc_002517C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002517CE; /* jne: not equal / not zero */

loc_002517C7: ;
    ecx = 0xB004640;
    goto loc_002517D5;

loc_002517CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002517F7; /* je: equal / zero */

loc_002517D5: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002517EDu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_002517ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x650918) = eax;
    goto loc_00251815;

loc_002517F7: ;
    eax = 0xB004640;
    MEM32(0x650918) = eax;
    goto loc_00251815;

loc_00251803: ;
    ebp = MEM32(0x6540EC);
    esi = MEM32(0x6540E8);
    edi = MEM32(0x650914);

loc_00251815: ;
    eax = MEM32(0x6540F0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(eax + 0x18) = 0;
    PUSH32(esp, 0x0025182Bu); RECOMP_ABI_CALL(0x0012AC40u, sub_0012AC40); /* call 0x0012AC40 */

loc_0025182B: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251867; /* je: equal / zero */

loc_00251836: ;
    eax = MEM32(0x65091C);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ebx = 0x23;
    PUSH32(esp, 0x0025184Au); RECOMP_ABI_CALL(0x0012B470u, sub_0012B470); /* call 0x0012B470 */

loc_0025184A: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251867; /* je: equal / zero */

loc_00251855: ;
    eax = MEM32(esp + 0x14);
    MEM32(ebp) = ebx;
    ecx = MEM32(eax + 0x24);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 0x28);
    MEM32(esi + 4) = edx;

loc_00251867: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251874; /* jne: not equal / not zero */

loc_0025186C: ;
    edx = MEM32(0x614FCC);
    goto loc_00251881;

loc_00251874: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    edx = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_00251881; /* je: equal / zero */

loc_0025187F: ;
    edx = edi;

loc_00251881: ;
    ecx = MEM32(0x64D880);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0025188Eu); RECOMP_ABI_CALL(0x00058E40u, sub_00058E40); /* call 0x00058E40 */

loc_0025188E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002518D7; /* jne: not equal / not zero */

loc_00251895: ;
    eax = MEM32(0x64D878);
    ecx = MEM32(0x64D864);
    edx = MEM32(0x650918);
    _fa = (uint32_t)(MEM32(eax + ecx * 4 + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx * 4 + 0x18), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002518D7; /* je: equal / zero */

loc_002518AC: ;
    MEM32(eax + ecx * 4 + 0x18) = edx;
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax + ecx * 4 + 4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_002518D7; /* jne: not equal / not zero */

loc_002518BA: ;
    edx = MEM32(0x3400FC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002518D7; /* je: equal / zero */

loc_002518C4: ;
    edx = MEM32(eax + ecx * 4 + 0x18);
    esi = MEM32(edx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002518D7; /* je: equal / zero */

loc_002518CF: ;
    MEM32(eax + ecx * 4 + 4) = 0xFFFFFFFFu;

loc_002518D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x3E8;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002518F0
 * Original: 0x002518F0 - 0x00251B98 (680 bytes, 208 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002518F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002518F0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D878);
    ecx = MEM32(eax + 0x44);
    eax = MEM32(0x64D870);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(0x64D1F8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00251AC3; /* je: equal / zero */

loc_00251919: ;
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 0xB004619);
    eax = 0x493610;
    PUSH32(esp, 0x0025192Bu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0025192B: ;
    ebx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251941; /* je: equal / zero */

loc_00251938: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0025194B; /* je: equal / zero */

loc_00251941: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251957; /* je: equal / zero */

loc_0025194B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251957; /* jne: not equal / not zero */

loc_00251950: ;
    ecx = 0xB004619;
    goto loc_0025195E;

loc_00251957: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0025197B; /* je: equal / zero */

loc_0025195E: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00251976u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00251976: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00251980;

loc_0025197B: ;
    eax = 0xB004619;

loc_00251980: ;
    edx = MEM32(0x34AC3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    edi = MEM32(0x614FD0);
    esi = MEM32(0x614FCC);
    MEM32(0x650910) = eax;
    ecx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002519A1; /* jne: not equal / not zero */

loc_0025199D: ;
    ecx = edx;
    goto loc_002519B7;

loc_002519A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002519AA; /* jne: not equal / not zero */

loc_002519A6: ;
    ecx = esi;
    goto loc_002519B1;

loc_002519AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002519B1; /* jne: not equal / not zero */

loc_002519AF: ;
    ecx = edi;

loc_002519B1: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 4);

loc_002519B7: ;
    ebp = MEM32(ecx + 0x44);
    _fb = (uint32_t)(0x14C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x14C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(0x6540E4) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_002519CE; /* jne: not equal / not zero */

loc_002519CA: ;
    eax = edx;
    goto loc_002519E4;

loc_002519CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002519D7; /* jne: not equal / not zero */

loc_002519D3: ;
    eax = esi;
    goto loc_002519DE;

loc_002519D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002519DE; /* jne: not equal / not zero */

loc_002519DC: ;
    eax = edi;

loc_002519DE: ;
    edx = MEM32(eax + 0x18);
    eax = MEM32(edx + 4);

loc_002519E4: ;
    esi = MEM32(eax + 0x44);
    _fb = (uint32_t)(0x174) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x174;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xCC000431u);
    eax = 0x493610;
    MEM32(0x6540E0) = esi;
    PUSH32(esp, 0x00251A02u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00251A02: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251A12; /* je: equal / zero */

loc_00251A09: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251A1C; /* je: equal / zero */

loc_00251A12: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251A28; /* je: equal / zero */

loc_00251A1C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251A28; /* jne: not equal / not zero */

loc_00251A21: ;
    ecx = 0xCC000431u;
    goto loc_00251A2F;

loc_00251A28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00251A4C; /* je: equal / zero */

loc_00251A2F: ;
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
    PUSH32(esp, 0x00251A47u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00251A47: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00251A51;

loc_00251A4C: ;
    eax = 0xCC000431u;

loc_00251A51: ;
    edi = eax;
    PUSH32(esp, 0xB004640);
    eax = 0x493610;
    MEM32(0x650908) = edi;
    PUSH32(esp, 0x00251A68u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00251A68: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251A78; /* je: equal / zero */

loc_00251A6F: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251A82; /* je: equal / zero */

loc_00251A78: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251A8E; /* je: equal / zero */

loc_00251A82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251A8E; /* jne: not equal / not zero */

loc_00251A87: ;
    ecx = 0xB004640;
    goto loc_00251A95;

loc_00251A8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00251AB7; /* je: equal / zero */

loc_00251A95: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00251AADu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00251AAD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x65090C) = eax;
    goto loc_00251AD5;

loc_00251AB7: ;
    eax = 0xB004640;
    MEM32(0x65090C) = eax;
    goto loc_00251AD5;

loc_00251AC3: ;
    ebp = MEM32(0x6540E4);
    esi = MEM32(0x6540E0);
    edi = MEM32(0x650908);

loc_00251AD5: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00251ADFu); RECOMP_ABI_CALL(0x0012BA20u, sub_0012BA20); /* call 0x0012BA20 */

loc_00251ADF: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251B1B; /* je: equal / zero */

loc_00251AEA: ;
    eax = MEM32(0x650910);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ebx = 0x26;
    PUSH32(esp, 0x00251AFEu); RECOMP_ABI_CALL(0x0012B470u, sub_0012B470); /* call 0x0012B470 */

loc_00251AFE: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251B1B; /* je: equal / zero */

loc_00251B09: ;
    eax = MEM32(esp + 0x14);
    MEM32(ebp) = ebx;
    edx = MEM32(eax + 0x24);
    MEM32(esi) = edx;
    eax = MEM32(eax + 0x28);
    MEM32(esi + 4) = eax;

loc_00251B1B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251B28; /* jne: not equal / not zero */

loc_00251B20: ;
    edx = MEM32(0x614FCC);
    goto loc_00251B35;

loc_00251B28: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    edx = MEM32(0x614FD0);
    if (CMP_EQ(_fa, _fb)) goto loc_00251B35; /* je: equal / zero */

loc_00251B33: ;
    edx = edi;

loc_00251B35: ;
    ecx = MEM32(0x64D880);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00251B42u); RECOMP_ABI_CALL(0x00058E40u, sub_00058E40); /* call 0x00058E40 */

loc_00251B42: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251B8B; /* jne: not equal / not zero */

loc_00251B49: ;
    eax = MEM32(0x64D878);
    ecx = MEM32(0x64D864);
    edx = MEM32(0x65090C);
    _fa = (uint32_t)(MEM32(eax + ecx * 4 + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx * 4 + 0x18), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251B8B; /* je: equal / zero */

loc_00251B60: ;
    MEM32(eax + ecx * 4 + 0x18) = edx;
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(eax + ecx * 4 + 4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00251B8B; /* jne: not equal / not zero */

loc_00251B6E: ;
    edx = MEM32(0x3400FC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251B8B; /* je: equal / zero */

loc_00251B78: ;
    edx = MEM32(eax + ecx * 4 + 0x18);
    esi = MEM32(edx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251B8B; /* je: equal / zero */

loc_00251B83: ;
    MEM32(eax + ecx * 4 + 4) = 0xFFFFFFFFu;

loc_00251B8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x3E8;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00251BA0
 * Original: 0x00251BA0 - 0x00251E6B (715 bytes, 223 insns)
 * Folder: scripts (table: AI table at 0x00340100)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00251BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00251BA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D878);
    ecx = MEM32(eax + 0x44);
    eax = MEM32(0x64D870);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(0x64D1F8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00251DDD; /* je: equal / zero */

loc_00251BC9: ;
    MEM32(eax + 0x14) = ecx;
    PUSH32(esp, 0xCC00008Eu);
    eax = 0x493610;
    PUSH32(esp, 0x00251BDBu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00251BDB: ;
    esi = MEM32(0x64D33C);
    ebp = MEM32(0x64D3A4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251BF3; /* je: equal / zero */

loc_00251BEE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251BFD; /* je: equal / zero */

loc_00251BF3: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251C09; /* je: equal / zero */

loc_00251BFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251C09; /* jne: not equal / not zero */

loc_00251C02: ;
    ecx = 0xCC00008Eu;
    goto loc_00251C10;

loc_00251C09: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00251C2D; /* je: equal / zero */

loc_00251C10: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00251C28u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00251C28: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00251C32;

loc_00251C2D: ;
    eax = 0xCC00008Eu;

loc_00251C32: ;
    ebx = MEM32(0x34AC3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x650904) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00251C45; /* jne: not equal / not zero */

loc_00251C41: ;
    eax = ebx;
    goto loc_00251C61;

loc_00251C45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251C51; /* jne: not equal / not zero */

loc_00251C4A: ;
    eax = MEM32(0x614FCC);
    goto loc_00251C5B;

loc_00251C51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251C5B; /* jne: not equal / not zero */

loc_00251C56: ;
    eax = MEM32(0x614FD0);

loc_00251C5B: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 4);

loc_00251C61: ;
    edi = MEM32(eax + 0x44);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xB004619);
    eax = 0x493610;
    MEM32(0x6540DC) = edi;
    PUSH32(esp, 0x00251C7Cu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00251C7C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251C88; /* je: equal / zero */

loc_00251C83: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251C92; /* je: equal / zero */

loc_00251C88: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251C9E; /* je: equal / zero */

loc_00251C92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251C9E; /* jne: not equal / not zero */

loc_00251C97: ;
    ecx = 0xB004619;
    goto loc_00251CA5;

loc_00251C9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00251CC2; /* je: equal / zero */

loc_00251CA5: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00251CBDu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00251CBD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00251CC7;

loc_00251CC2: ;
    eax = 0xB004619;

loc_00251CC7: ;
    MEM32(0x650900) = eax;
    PUSH32(esp, 0xCC000431u);
    eax = 0x493610;
    PUSH32(esp, 0x00251CDBu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00251CDB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251CE7; /* je: equal / zero */

loc_00251CE2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251CF1; /* je: equal / zero */

loc_00251CE7: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251CFD; /* je: equal / zero */

loc_00251CF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251CFD; /* jne: not equal / not zero */

loc_00251CF6: ;
    ecx = 0xCC000431u;
    goto loc_00251D04;

loc_00251CFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00251D21; /* je: equal / zero */

loc_00251D04: ;
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
    PUSH32(esp, 0x00251D1Cu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00251D1C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00251D26;

loc_00251D21: ;
    eax = 0xCC000431u;

loc_00251D26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x6508FC) = eax;
    ecx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00251D35; /* jne: not equal / not zero */

loc_00251D31: ;
    ecx = ebx;
    goto loc_00251D53;

loc_00251D35: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251D42; /* jne: not equal / not zero */

loc_00251D3A: ;
    ecx = MEM32(0x614FCC);
    goto loc_00251D4D;

loc_00251D42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251D4D; /* jne: not equal / not zero */

loc_00251D47: ;
    ecx = MEM32(0x614FD0);

loc_00251D4D: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 4);

loc_00251D53: ;
    ebp = MEM32(ecx + 0x44);
    _fb = (uint32_t)(0x8FC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x8FC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x6540D8) = ebp;
    ecx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00251D6C; /* jne: not equal / not zero */

loc_00251D68: ;
    ecx = ebx;
    goto loc_00251D8A;

loc_00251D6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251D79; /* jne: not equal / not zero */

loc_00251D71: ;
    ecx = MEM32(0x614FCC);
    goto loc_00251D84;

loc_00251D79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251D84; /* jne: not equal / not zero */

loc_00251D7E: ;
    ecx = MEM32(0x614FD0);

loc_00251D84: ;
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 4);

loc_00251D8A: ;
    esi = MEM32(ecx + 0x44);
    _fb = (uint32_t)(0x8A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x8A8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x6540D4) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00251DB0; /* jne: not equal / not zero */

loc_00251D9D: ;
    eax = ebx;
    ebx = MEM32(eax + 0x44);
    _fb = (uint32_t)(0x464) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x464;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6540D0) = ebx;
    goto loc_00251DF5;

loc_00251DB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251DBC; /* jne: not equal / not zero */

loc_00251DB5: ;
    eax = MEM32(0x614FCC);
    goto loc_00251DC6;

loc_00251DBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251DC6; /* jne: not equal / not zero */

loc_00251DC1: ;
    eax = MEM32(0x614FD0);

loc_00251DC6: ;
    eax = MEM32(eax + 0x18);
    eax = MEM32(eax + 4);
    ebx = MEM32(eax + 0x44);
    _fb = (uint32_t)(0x464) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x464;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x6540D0) = ebx;
    goto loc_00251DF5;

loc_00251DDD: ;
    edi = MEM32(0x6540DC);
    ebp = MEM32(0x6540D8);
    esi = MEM32(0x6540D4);
    ebx = MEM32(0x6540D0);

loc_00251DF5: ;
    eax = MEM32(edi + 0x44);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251E1E; /* jne: not equal / not zero */

loc_00251DFE: ;
    eax = MEM32(0x64D864);
    ecx = MEM32(0x64D878);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + eax * 4 + 0x18) = edx;
    POP32(esp, ebp);
    MEM32(ecx + eax * 4 + 4) = edx;
    eax = 0x3E8;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00251E1E: ;
    eax = MEM32(0x650900);
    edi = esp + 0x10;
    PUSH32(esp, 0x00251E2Cu); RECOMP_ABI_CALL(0x0012AE40u, sub_0012AE40); /* call 0x0012AE40 */

loc_00251E2C: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251E5E; /* je: equal / zero */

loc_00251E34: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00251E5E; /* je: equal / zero */

loc_00251E3A: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00251E5E; /* jle: less or equal (signed <=) */

loc_00251E40: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00251E5E; /* jne: not equal / not zero */

loc_00251E44: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(0x650900);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = 0x10;
    PUSH32(esp, 0x00251E5Bu); RECOMP_ABI_CALL(0x0012AD70u, sub_0012AD70); /* call 0x0012AD70 */

loc_00251E5B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00251E5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x3E8;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}
