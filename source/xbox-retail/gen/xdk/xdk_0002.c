/**
 * PoP SoT xbox-retail - xdk, chunk 2
 * Statically linked Microsoft runtime code no evidence assigns to one library
 * Functions: 28 (0x003497E5 - 0x0034A213)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_003497E5
 * Original: 0x003497E5 - 0x00349813 (46 bytes, 13 insns)
 * Folder: xdk (library: 0x003497AB and 0x00349813)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003497E5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003497E5: ;
    _fa = (uint32_t)(MEM32(0x42D564)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x42D564), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003497FF; /* jle: less or equal (signed <=) */

loc_003497EE: ;
    PUSH32(esp, 0x103);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x003497FCu); RECOMP_ABI_CALL(0x0034C14Bu, sub_0034C14B); /* call 0x0034C14B */

loc_003497FC: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003497FF: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x42D55C);
    eax = ZX16(MEM16(ecx + eax * 2));
    eax = eax & 0x103;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00349813
 * Original: 0x00349813 - 0x0034983C (41 bytes, 13 insns)
 * Folder: xdk (match: xbox-demo 0x0028BB2E, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349813(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00349813: ;
    _fa = (uint32_t)(MEM32(0x42D564)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x42D564), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0034982A; /* jle: less or equal (signed <=) */

loc_0034981C: ;
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00349827u); RECOMP_ABI_CALL(0x0034C14Bu, sub_0034C14B); /* call 0x0034C14B */

loc_00349827: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0034982A: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x42D55C);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0034983C
 * Original: 0x0034983C - 0x00349865 (41 bytes, 13 insns)
 * Folder: xdk (match: xbox-demo 0x0028BB57, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034983C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034983C: ;
    _fa = (uint32_t)(MEM32(0x42D564)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x42D564), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00349853; /* jle: less or equal (signed <=) */

loc_00349845: ;
    PUSH32(esp, 8);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00349850u); RECOMP_ABI_CALL(0x0034C14Bu, sub_0034C14B); /* call 0x0034C14B */

loc_00349850: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00349853: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x42D55C);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00349865
 * Original: 0x00349865 - 0x00349893 (46 bytes, 13 insns)
 * Folder: xdk (between: 0x0034983C and 0x003498BC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349865(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00349865: ;
    _fa = (uint32_t)(MEM32(0x42D564)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x42D564), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0034987F; /* jle: less or equal (signed <=) */

loc_0034986E: ;
    PUSH32(esp, 0x107);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0034987Cu); RECOMP_ABI_CALL(0x0034C14Bu, sub_0034C14B); /* call 0x0034C14B */

loc_0034987C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0034987F: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x42D55C);
    eax = ZX16(MEM16(ecx + eax * 2));
    eax = eax & 0x107;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00349894
 * Original: 0x00349894 - 0x00349896 (2 bytes, 1 insns)
 * Folder: xdk (between: 0x0034983C and 0x003498BC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349894(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00349894: ;
    g_seh_ebp = ebp; sub_003498B3(); return; /* tail jmp 0x003498B3 */

}

/**
 * sub_00349898
 * Original: 0x00349898 - 0x003498B3 (27 bytes, 9 insns)
 * Folder: xdk (between: 0x0034983C and 0x003498BC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349898(void)
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

loc_00349898: ;
    goto loc_0034989A;

loc_0034989A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    MEMD(esp + 8) = fp_top(); /* fst */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x003498AFu); RECOMP_ABI_CALL(0x003498BCu, sub_003498BC); /* call 0x003498BC */

loc_003498AF: ;
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
 * sub_003498B3
 * Original: 0x003498B3 - 0x003498BC (9 bytes, 2 insns)
 * Folder: xdk (between: 0x0034983C and 0x003498BC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003498B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003498B3: ;
    edx = esp + 0xC;
    PUSH32(esp, 0x003498BCu); RECOMP_ABI_CALL(0x0034E355u, sub_0034E355); /* call 0x0034E355 */

    g_seh_ebp = ebp; sub_003498BC(); return; /* fallthrough 0x003498BC */

}

/**
 * sub_003498BC
 * Original: 0x003498BC - 0x00349A81 (453 bytes, 123 insns)
 * Folder: xdk (match: xbox-demo 0x0028C430, library)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003498BC(void)
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

loc_003498BC: ;
    ecx = eax;
    PUSH32(esp, eax);
    /* wait - FPU sync */
    MEM16(esp) = g_fp_control_word; /* fnstcw word ptr [esp] */
    _fa = (uint32_t)(MEM16(esp)) & 0xFFFFu; _fb = (uint32_t)(0x27F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp), 0x27F (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003498D0; /* je: equal / zero */

loc_003498CB: ;
    PUSH32(esp, 0x003498D0u); RECOMP_ABI_CALL(0x0034E325u, sub_0034E325); /* call 0x0034E325 */

loc_003498D0: ;
    ecx = ecx & 0x7FF00000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7FF00000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00349983; /* je: equal / zero */

loc_003498E6: ;
    PUSH32(esp, 0x003498EBu); RECOMP_ABI_CALL(0x0034E355u, sub_0034E355); /* call 0x0034E355 */

loc_003498EB: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0034997F; /* je: equal / zero */

loc_003498F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FF00000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003499F2; /* je: equal / zero */

loc_003498FC: ;
    SET_LO8(ecx, MEM8(esp + 0xF));
    SET_LO8(ecx, LO8(ecx) & 0x80);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_00349A5C; /* jne: not equal / not zero */

loc_00349909: ;
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    PUSH32(esp, 0x00349910u); RECOMP_ABI_CALL(0x0034E310u, sub_0034E310); /* call 0x0034E310 */

loc_00349910: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00349917; /* jne: not equal / not zero */

loc_00349915: ;
    fp_top() = -fp_top(); /* fchs */

loc_00349917: ;
    _fa = (uint32_t)(MEM32(0x447F58)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x447F58), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0034E3AE(); return; } /* jne: not equal / not zero */

loc_00349924: ;
    ecx = 0x42D028;
    edx = 0x1D;
    g_seh_ebp = ebp; sub_0034E3F9(); return; /* tail jmp 0x0034E3F9 */

loc_00349934: ;
    _fa = (uint32_t)(MEM32(0x447F58)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x447F58), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0034E3AE(); return; } /* jne: not equal / not zero */

loc_00349941: ;
    ecx = 0x42D028;
    edx = 0x1D;
    PUSH32(esp, 0x00349951u); RECOMP_ABI_CALL(0x0034E2BCu, sub_0034E2BC); /* call 0x0034E2BC */

loc_00349951: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

loc_00349953: ;
    edx = esp + 8;
    PUSH32(esp, 0x0034995Cu); RECOMP_ABI_CALL(0x0034E355u, sub_0034E355); /* call 0x0034E355 */

loc_0034995C: ;
    _fa = (uint32_t)(MEM8(esp + 0x16)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x16), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00349966; /* jne: not equal / not zero */

loc_00349963: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00349999;

loc_00349966: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    eax = 1;
    goto loc_00349934;

loc_0034996F: ;
    _fa = (uint32_t)(MEM8(esp + 0xE)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xE), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00349966; /* jne: not equal / not zero */

loc_00349976: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    eax = 7;
    goto loc_00349934;

loc_0034997F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00349999;

loc_00349983: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00349953; /* jne: not equal / not zero */

loc_00349990: ;
    edx = esp + 8;
    PUSH32(esp, 0x00349999u); RECOMP_ABI_CALL(0x0034E355u, sub_0034E355); /* call 0x0034E355 */

loc_00349999: ;
    eax = MEM32(esp + 0xC);
    edx = eax;
    eax = eax & 0x7FF00000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0xFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FF00000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003499B7; /* jne: not equal / not zero */

loc_003499B1: ;
    edx = edx | MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_0034996F; /* jne: not equal / not zero */

loc_003499B7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00349976; /* jne: not equal / not zero */

loc_003499BB: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    /* wait - FPU sync */
    /* FPU: fnsave dword ptr [ecx + 8] */
    PUSH32(esp, 0x003499D4u); RECOMP_ABI_CALL(0x0034E501u, sub_0034E501); /* call 0x0034E501 */

loc_003499D4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    /* FPU: frstor dword ptr [ecx + 8] */
    fp_push(MEMD(ecx)); /* fld double */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0034E3AE(); return; } /* je: equal / zero */

loc_003499E8: ;
    eax = 1;
    goto loc_00349934;

loc_003499F2: ;
    eax = MEM32(esp + 0xC);
    eax = eax & 0xFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_003498FC; /* jne: not equal / not zero */

loc_00349A05: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(esp + 0x14);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00349A53; /* je: equal / zero */

loc_00349A16: ;
    PUSH32(esp, 0x00349A1Bu); RECOMP_ABI_CALL(0x00349A81u, sub_00349A81); /* call 0x00349A81 */

loc_00349A1B: ;
    SET_HI8(ecx, MEM8(esp + 0xF));
    SET_HI8(ecx, HI8(ecx) >> 7);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(esp + 0x17)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x17), 0x80 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00349A42; /* je: equal / zero */

loc_00349A2C: ;
    fp_push(MEMF(0x42D6CC)); /* fld */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00349A38; /* je: equal / zero */

loc_00349A36: ;
    fp_top() = -fp_top(); /* fchs */

loc_00349A38: ;
    eax = 2;
    goto loc_00349934;

loc_00349A42: ;
    fp_push(0.0); /* fldz */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0034E3AE(); return; } /* je: equal / zero */

loc_00349A4C: ;
    fp_top() = -fp_top(); /* fchs */
    g_seh_ebp = ebp; sub_0034E3AE(); return; /* tail jmp 0x0034E3AE */

loc_00349A53: ;
    fp_pop(); /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    g_seh_ebp = ebp; sub_0034E3AE(); return; /* tail jmp 0x0034E3AE */

loc_00349A5C: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    PUSH32(esp, 0x00349A63u); RECOMP_ABI_CALL(0x00349A81u, sub_00349A81); /* call 0x00349A81 */

loc_00349A63: ;
    fp_top() = -fp_top(); /* fchs */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00349909; /* jne: not equal / not zero */

loc_00349A6D: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x42D728)); /* fld */
    eax = 1;
    goto loc_00349934;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00349A81
 * Original: 0x00349A81 - 0x00349AA9 (40 bytes, 21 insns)
 * Folder: xdk (match: xbox-demo 0x0028C5F5, library)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00349A81(void)
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

loc_00349A81: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    SET_LO8(ecx, 0);
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    /* sahf - store AH to flags */
    if ((g_fp_cmp == -1 || g_fp_cmp == 1) /* sahf */) goto loc_00349AA6; /* jne: not equal / not zero */

loc_00349A8F: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x42D020)); /* fmul qword ptr [0x42d020] */
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    /* sahf - store AH to flags */
    if ((g_fp_cmp == -1 || g_fp_cmp == 1) /* sahf */) goto loc_00349AA5; /* jne: not equal / not zero */

loc_00349AA3: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00349AA5: ;
    esp += 4; return; /* ret */

loc_00349AA6: ;
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00349AA9
 * Original: 0x00349AA9 - 0x00349AC4 (27 bytes, 13 insns)
 * Folder: xdk (between: 0x00349A81 and 0x00349AC4)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00349AA9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00349AA9: ;
    eax = MEM32(0x447F74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00349AC1; /* je: equal / zero */

loc_00349AB2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00349AB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00349AB6u); } /* indirect call */
    }

loc_00349AB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00349AC1; /* je: equal / zero */

loc_00349ABD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00349AC1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00349AC4
 * Original: 0x00349AC4 - 0x00349AEF (43 bytes, 15 insns)
 * Folder: xdk (match: xbox-demo 0x0028C638, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00349AC4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00349AC4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = eax;
    ebx = MEM32(XBOX_FS_BASE);
    eax = MEM32(ebx);
    MEM32(XBOX_FS_BASE) = eax;
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp + 0xC);
    esp = MEM32(ebx + -4);
    ebp = MEM32(ebp + -4);
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

}

/**
 * sub_00349AF4
 * Original: 0x00349AF4 - 0x00349AFB (7 bytes, 4 insns)
 * Folder: xdk (between: 0x00349AC4 and 0x00349AFB)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349AF4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00349AF4: ;
    POP32(esp, eax);
    POP32(esp, ecx);
    { uint32_t _tmp = MEM32(esp);
    MEM32(esp) = eax;
    eax = _tmp; }
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

}

/**
 * sub_00349AFB
 * Original: 0x00349AFB - 0x00349B4D (82 bytes, 29 insns)
 * Folder: xdk (match: xbox-demo 0x0028C66F, library)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00349AFB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00349AFB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(XBOX_FS_BASE);
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -8) = 0x349B24;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349B24u); RECOMP_ABI_CALL(0x003673CCu, sub_003673CC); /* call 0x003673CC */

loc_00349B24: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 4);
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx + 4) = eax;
    edi = MEM32(XBOX_FS_BASE);
    ebx = MEM32(ebp + -4);
    MEM32(ebx) = edi;
    MEM32(XBOX_FS_BASE) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00349B4D
 * Original: 0x00349B4D - 0x00349B83 (54 bytes, 27 insns)
 * Folder: xdk (match: xbox-demo 0x0028C6C1, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00349B4D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00349B4D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_df = 0; /* cld */
    MEM32(ebp + -4) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349B73u); RECOMP_ABI_CALL(0x0034EE3Cu, sub_0034EE3C); /* call 0x0034EE3C */

loc_00349B73: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00349B83
 * Original: 0x00349B83 - 0x00349BBE (59 bytes, 21 insns)
 * Folder: xdk (match: xbox-demo 0x0028C6F7, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349B83(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00349B83: ;
    g_df = 0; /* cld */
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x42D758)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x42D758) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00349B9F; /* je: equal / zero */

loc_00349B93: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = MEM32(eax + 4) | 8;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00349B9F: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x20));
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, MEM32(esp + 0x20));
    PUSH32(esp, 0x00349BBAu); RECOMP_ABI_CALL(0x0034EE3Cu, sub_0034EE3C); /* call 0x0034EE3C */

loc_00349BBA: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00349BBE
 * Original: 0x00349BBE - 0x00349C85 (199 bytes, 61 insns)
 * Folder: xdk (match: xbox-demo 0x0028C732, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00349BBE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00349BBE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x123) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0x123 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00349BE0; /* jne: not equal / not zero */

loc_00349BCE: ;
    eax = 0x349C59;
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00349C82;

loc_00349BE0: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) & 0;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -36) = 0x349C85;
    eax = MEM32(0x42D758);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0x20);
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -12) = esp;
    MEM32(ebp + -8) = ebp;
    eax = MEM32(XBOX_FS_BASE);
    MEM32(ebp + -40) = eax;
    eax = ebp + -40;
    MEM32(XBOX_FS_BASE) = eax;
    MEM32(ebp + -52) = 1;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -44) = eax;
    eax = ebp + -48;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349C50u); RECOMP_ABI_CALL(0x0034A9D1u, sub_0034A9D1); /* call 0x0034A9D1 */

loc_00349C50: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x00349C53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00349C50u); } /* indirect call */
    }

loc_00349C53: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -52) = MEM32(ebp + -52) & 0;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00349C76; /* je: equal / zero */

loc_00349C5F: ;
    ebx = MEM32(XBOX_FS_BASE);
    eax = MEM32(ebx);
    ebx = MEM32(ebp + -40);
    MEM32(ebx) = eax;
    MEM32(XBOX_FS_BASE) = ebx;
    goto loc_00349C7F;

loc_00349C76: ;
    eax = MEM32(ebp + -40);
    MEM32(XBOX_FS_BASE) = eax;

loc_00349C7F: ;
    eax = MEM32(ebp + -52);

loc_00349C82: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00349C85
 * Original: 0x00349C85 - 0x00349D37 (178 bytes, 66 insns)
 * Folder: xdk (match: xbox-demo 0x0028C7F9, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00349C85(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00349C85: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    g_df = 0; /* cld */
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x42D758)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x42D758) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00349CB0; /* je: equal / zero */

loc_00349C99: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    eax = eax | 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 4) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00349D34;

loc_00349CB0: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    eax = eax & 0x66;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00349CCA; /* je: equal / zero */

loc_00349CBB: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x24) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00349D34;

loc_00349CCA: ;
    PUSH32(esp, 1);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(eax + 0x18));
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(eax + 0x14));
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349CF1u); RECOMP_ABI_CALL(0x0034EE3Cu, sub_0034EE3C); /* call 0x0034EE3C */

loc_00349CF1: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00349D08; /* jne: not equal / not zero */

loc_00349CFD: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349D08u); RECOMP_ABI_CALL(0x00349AFBu, sub_00349AFB); /* call 0x00349AFB */

loc_00349D08: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x123);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349D20u); RECOMP_ABI_CALL(0x00349BBEu, sub_00349BBE); /* call 0x00349BBE */

loc_00349D20: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -4);
    ebx = MEM32(ebp + 0xC);
    esp = MEM32(ebx + 0x1C);
    ebp = MEM32(ebx + 0x20);
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00349D34: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00349D37
 * Original: 0x00349D37 - 0x00349DB1 (122 bytes, 51 insns)
 * Folder: xdk (match: xbox-demo 0x0028C8AB, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00349D37(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00349D37: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0xC);
    ebx = MEM32(edi + 0x10);
    eax = esi;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + 8) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00349D8D; /* jl: less (signed <) */

loc_00349D55: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00349D5F; /* jne: not equal / not zero */

loc_00349D5A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349D5Fu); RECOMP_ABI_CALL(0x0034C1D8u, sub_0034C1D8); /* call 0x0034C1D8 */

loc_00349D5F: ;
    ecx = MEM32(ebp + 0x10);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = esi + esi * 4;
    eax = ebx + eax * 4;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00349D73; /* jge: greater or equal (signed >=) */

loc_00349D6E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 8) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00349D78; /* jle: less or equal (signed <=) */

loc_00349D73: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00349D84; /* jne: not equal / not zero */

loc_00349D78: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = eax;
    MEM32(ebp + 8) = esi;

loc_00349D84: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00349D55; /* jge: greater or equal (signed >=) */

loc_00349D8A: ;
    eax = MEM32(ebp + -4);

loc_00349D8D: ;
    ecx = MEM32(ebp + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = esi;
    ecx = MEM32(ebp + 0x18);
    MEM32(ecx) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0xC) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00349DA1; /* ja: above (unsigned >) */

loc_00349D9D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00349DA6; /* jbe: below or equal (unsigned <=) */

loc_00349DA1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349DA6u); RECOMP_ABI_CALL(0x0034C1D8u, sub_0034C1D8); /* call 0x0034C1D8 */

loc_00349DA6: ;
    POP32(esp, edi);
    eax = esi + esi * 4;
    POP32(esp, esi);
    eax = ebx + eax * 4;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00349DB1
 * Original: 0x00349DB1 - 0x00349DD9 (40 bytes, 12 insns)
 * Folder: xdk (match: xbox-demo 0x0028C925, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349DB1(void)
{

loc_00349DB1: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi) = eax;
    PUSH32(esp, 0x00349DC1u); RECOMP_ABI_CALL(0x0034A9D1u, sub_0034A9D1); /* call 0x0034A9D1 */

loc_00349DC1: ;
    eax = MEM32(eax + 0x84);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x00349DCFu); RECOMP_ABI_CALL(0x0034A9D1u, sub_0034A9D1); /* call 0x0034A9D1 */

loc_00349DCF: ;
    MEM32(eax + 0x84) = esi;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00349DD9
 * Original: 0x00349DD9 - 0x00349DFA (33 bytes, 13 insns)
 * Folder: xdk (match: xbox-demo 0x0028C94D, library)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00349DD9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00349DD9: ;
    PUSH32(esp, 0x00349DDEu); RECOMP_ABI_CALL(0x0034A9D1u, sub_0034A9D1); /* call 0x0034A9D1 */

loc_00349DDE: ;
    eax = MEM32(eax + 0x84);
    goto loc_00349DF1;

loc_00349DE6: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00349DF7; /* je: equal / zero */

loc_00349DEE: ;
    eax = MEM32(eax + 4);

loc_00349DF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00349DE6; /* jne: not equal / not zero */

loc_00349DF5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00349DF7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00349DFA
 * Original: 0x00349DFA - 0x00349E46 (76 bytes, 25 insns)
 * Folder: xdk (match: xbox-demo 0x0028C96E, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349DFA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00349DFA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00349E00u); RECOMP_ABI_CALL(0x0034A9D1u, sub_0034A9D1); /* call 0x0034A9D1 */

loc_00349E00: ;
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x84)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x84) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00349E1C; /* jne: not equal / not zero */

loc_00349E0C: ;
    PUSH32(esp, 0x00349E11u); RECOMP_ABI_CALL(0x0034A9D1u, sub_0034A9D1); /* call 0x0034A9D1 */

loc_00349E11: ;
    ecx = MEM32(esi + 4);
    MEM32(eax + 0x84) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00349E1C: ;
    PUSH32(esp, 0x00349E21u); RECOMP_ABI_CALL(0x0034A9D1u, sub_0034A9D1); /* call 0x0034A9D1 */

loc_00349E21: ;
    eax = MEM32(eax + 0x84);
    goto loc_00349E32;

loc_00349E29: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00349E3E; /* je: equal / zero */

loc_00349E30: ;
    eax = ecx;

loc_00349E32: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00349E29; /* jne: not equal / not zero */

loc_00349E38: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0034C1D8(); return; /* tail jmp 0x0034C1D8 */

loc_00349E3E: ;
    ecx = MEM32(esi + 4);
    MEM32(eax + 4) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00349E46
 * Original: 0x00349E46 - 0x00349E9F (89 bytes, 28 insns)
 * Folder: xdk (match: xbox-demo 0x0028C9BA, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00349E46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00349E46: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -20) = 0x349B83;
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = eax;
    eax = MEM32(XBOX_FS_BASE);
    MEM32(ebp + -24) = eax;
    eax = ebp + -24;
    MEM32(XBOX_FS_BASE) = eax;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349E90u); RECOMP_ABI_CALL(0x0034EEE0u, sub_0034EEE0); /* call 0x0034EEE0 */

loc_00349E90: ;
    ecx = eax;
    eax = MEM32(ebp + -24);
    MEM32(XBOX_FS_BASE) = eax;
    eax = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00349EA0
 * Original: 0x00349EA0 - 0x00349EBF (31 bytes, 10 insns)
 * Folder: xdk (between: 0x00349E46 and 0x00349EBF)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00349EA0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = esp;
    MEM32(esp + 0xC) = ebp;
    ebp = esp + 0xC;
    PUSH32(esp, eax);
    g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00349EBF
 * Original: 0x00349EBF - 0x00349EF8 (57 bytes, 24 insns)
 * Folder: xdk (match: xbox-demo 0x0028CA33, library)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00349EBF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00349EBF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    esi = 0x41DA44;
    edi = ebp + -32;
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
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = eax;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, MEM32(ebp + -32));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349EF2u); RECOMP_ABI_CALL(0x00331CB6u, sub_00331CB6); /* call 0x00331CB6 */

loc_00349EF2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0034A0A3
 * Original: 0x0034A0A3 - 0x0034A1BC (281 bytes, 105 insns)
 * Folder: xdk (match: xbox-demo 0x0028CA6C, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034A0A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034A0A3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x82) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x82 (8-bit) */
    ebx = MEM32(esi + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_0034A1AF; /* je: equal / zero */

loc_0034A0B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034A1AF; /* jne: not equal / not zero */

loc_0034A0C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034A0DC; /* je: equal / zero */

loc_0034A0C5: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034A1AF; /* je: equal / zero */

loc_0034A0D1: ;
    ecx = MEM32(esi + 8);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = ecx;
    MEM32(esi + 0xC) = eax;

loc_0034A0DC: ;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xFFFFFFEFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x10C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), 0x10C (16-bit) */
    MEM32(esi + 0xC) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0034A118; /* jne: not equal / not zero */

loc_0034A0F6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x42D178) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x42D178 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A106; /* je: equal / zero */

loc_0034A0FE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x42D198) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x42D198 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034A111; /* jne: not equal / not zero */

loc_0034A106: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A10Cu); RECOMP_ABI_CALL(0x0034F045u, sub_0034F045); /* call 0x0034F045 */

loc_0034A10C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0034A118; /* jne: not equal / not zero */

loc_0034A111: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A117u); RECOMP_ABI_CALL(0x0034F001u, sub_0034F001); /* call 0x0034F001 */

loc_0034A117: ;
    POP32(esp, ecx);

loc_0034A118: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x108) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0xC), 0x108 (16-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0034A185; /* je: equal / zero */

loc_0034A121: ;
    eax = MEM32(esi + 8);
    edi = MEM32(esi);
    ecx = eax + 1;
    MEM32(esi) = ecx;
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 4) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0034A145; /* jle: less or equal (signed <=) */

loc_0034A138: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A140u); RECOMP_ABI_CALL(0x0034CC94u, sub_0034CC94); /* call 0x0034CC94 */

loc_0034A140: ;
    MEM32(ebp + 0xC) = eax;
    goto loc_0034A178;

loc_0034A145: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A163; /* je: equal / zero */

loc_0034A14A: ;
    ecx = ebx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = MEM32(ecx * 4 + 0x76C5C0);
    eax = ebx;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    goto loc_0034A168;

loc_0034A163: ;
    eax = 0x42D6A4;

loc_0034A168: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034A17B; /* je: equal / zero */

loc_0034A16E: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A178u); RECOMP_ABI_CALL(0x0034CDB1u, sub_0034CDB1); /* call 0x0034CDB1 */

loc_0034A178: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0034A17B: ;
    eax = MEM32(esi + 8);
    SET_LO8(ecx, MEM8(ebp + 8));
    MEM8(eax) = LO8(ecx);
    goto loc_0034A199;

loc_0034A185: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A193u); RECOMP_ABI_CALL(0x0034CC94u, sub_0034CC94); /* call 0x0034CC94 */

loc_0034A193: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = eax;

loc_0034A199: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0034A1A5; /* je: equal / zero */

loc_0034A19F: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x20;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0034A1B5;

loc_0034A1A5: ;
    eax = MEM32(ebp + 8);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0034A1B8;

loc_0034A1AF: ;
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;

loc_0034A1B5: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0034A1B8: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0034A1BC
 * Original: 0x0034A1BC - 0x0034A1EF (51 bytes, 23 insns)
 * Folder: xdk (match: xbox-demo 0x0028CB85, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A1BC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034A1BC: ;
    _fa = (uint32_t)(MEM8(ecx + 0xC)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xC), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034A1C8; /* je: equal / zero */

loc_0034A1C2: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A1EC; /* je: equal / zero */

loc_0034A1C8: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0034A1D8; /* js: sign (negative) */

loc_0034A1CD: ;
    edx = MEM32(ecx);
    MEM8(edx) = LO8(eax);
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(eax));
    goto loc_0034A1E4;

loc_0034A1D8: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0034A1E2u); RECOMP_ABI_CALL(0x0034A0A3u, sub_0034A0A3); /* call 0x0034A0A3 */

loc_0034A1E2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0034A1E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034A1EC; /* jne: not equal / not zero */

loc_0034A1E9: ;
    MEM32(esi) = MEM32(esi) | eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0034A1EC: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0034A1EF
 * Original: 0x0034A1EF - 0x0034A213 (36 bytes, 16 insns)
 * Folder: xdk (match: xbox-demo 0x0028CBB8, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034A1EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034A1EF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = eax;
    goto loc_0034A20A;

loc_0034A1F7: ;
    ecx = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(ebp + 8));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A205u); RECOMP_ABI_CALL(0x0034A1BCu, sub_0034A1BC); /* call 0x0034A1BC */

loc_0034A205: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A210; /* je: equal / zero */

loc_0034A20A: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0034A1F7; /* jg: greater (signed >) */

loc_0034A210: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0034A213
 * Original: 0x0034A213 - 0x0034A24A (55 bytes, 23 insns)
 * Folder: xdk (match: xbox-demo 0x0028CBDC, library)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A213(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034A213: ;
    _fa = (uint32_t)(MEM8(edi + 0xC)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xC), 0x40 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0034A240; /* je: equal / zero */

loc_0034A21F: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034A240; /* jne: not equal / not zero */

loc_0034A225: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0034A247;

loc_0034A22D: ;
    SET_LO8(eax, MEM8(ebx));
    MEM32(esp + 0xC) = MEM32(esp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edi;
    PUSH32(esp, 0x0034A23Au); RECOMP_ABI_CALL(0x0034A1BCu, sub_0034A1BC); /* call 0x0034A1BC */

loc_0034A23A: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A247; /* je: equal / zero */

loc_0034A240: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0034A22D; /* jg: greater (signed >) */

loc_0034A247: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
