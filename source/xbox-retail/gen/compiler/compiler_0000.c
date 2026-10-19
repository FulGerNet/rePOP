/**
 * PoP SoT xbox-retail - compiler, chunk 0
 * Compiler-generated C++ exception unwinding and global set-up (.text$x, .text$yc/yd)
 * Functions: 250 (0x00367D30 - 0x00368B7B)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_00367D30
 * Original: 0x00367D30 - 0x00367D38 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367D30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367D30: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00367D42
 * Original: 0x00367D42 - 0x00367D4A (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367D42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367D42: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_003CC442(); return; /* tail jmp 0x003CC442 */

}

/**
 * sub_00367D4A
 * Original: 0x00367D4A - 0x00367D5F (21 bytes, 4 insns)
 * Folder: compiler (between: 0x00367D42 and 0x00367D5F)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367D4A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367D4A: ;
    ecx = ebp + -1056;
    g_seh_ebp = ebp; sub_003DB44E(); return; /* tail jmp 0x003DB44E */

    eax = 0x42A10C;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367D5F
 * Original: 0x00367D5F - 0x00367D67 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367D5F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367D5F: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_00367D67
 * Original: 0x00367D67 - 0x00367D6F (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367D67(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367D67: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_00367D6F
 * Original: 0x00367D6F - 0x00367D81 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00367D67 and 0x00367D93)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367D6F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367D6F: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A174;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367D81
 * Original: 0x00367D81 - 0x00367D93 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00367D67 and 0x00367D93)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367D81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367D81: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A198;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367D93
 * Original: 0x00367D93 - 0x00367D9B (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367D93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367D93: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

}

/**
 * sub_00367D9B
 * Original: 0x00367D9B - 0x00367DA3 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367D9B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367D9B: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

}

/**
 * sub_00367DA3
 * Original: 0x00367DA3 - 0x00367DB5 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00367D9B and 0x00367DD9)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367DA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367DA3: ;
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

    eax = 0x42A1CC;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367DB5
 * Original: 0x00367DB5 - 0x00367DC7 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00367D9B and 0x00367DD9)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367DB5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367DB5: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A1F0;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367DC7
 * Original: 0x00367DC7 - 0x00367DD9 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00367D9B and 0x00367DD9)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367DC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367DC7: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A214;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367DD9
 * Original: 0x00367DD9 - 0x00367DE1 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367DD9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367DD9: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_00367DE1
 * Original: 0x00367DE1 - 0x00367DE9 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00367DD9 and 0x00367DFE)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367DE1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367DE1: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_003D2297(); return; /* tail jmp 0x003D2297 */

}

/**
 * sub_00367DE9
 * Original: 0x00367DE9 - 0x00367DF4 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00367DD9 and 0x00367DFE)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367DE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367DE9: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003D0328(); return; /* tail jmp 0x003D0328 */

}

/**
 * sub_00367DF4
 * Original: 0x00367DF4 - 0x00367DFE (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00367DD9 and 0x00367DFE)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367DF4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367DF4: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x00367DFCu); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367DFC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367DFE
 * Original: 0x00367DFE - 0x00367E08 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367DFE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367DFE: ;
    eax = 0x42A250;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367E08
 * Original: 0x00367E08 - 0x00367E1A (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00367DFE and 0x00367E75)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E08: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_003D0350(); return; /* tail jmp 0x003D0350 */

    eax = 0x42A298;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367E1A
 * Original: 0x00367E1A - 0x00367E22 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00367DFE and 0x00367E75)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E1A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E1A: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_003D2297(); return; /* tail jmp 0x003D2297 */

}

/**
 * sub_00367E22
 * Original: 0x00367E22 - 0x00367E2D (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00367DFE and 0x00367E75)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E22(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E22: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_00367E2D
 * Original: 0x00367E2D - 0x00367E38 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00367DFE and 0x00367E75)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E2D: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_00367E38
 * Original: 0x00367E38 - 0x00367E4D (21 bytes, 5 insns)
 * Folder: compiler (between: 0x00367DFE and 0x00367E75)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E38: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A2D4;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367E4D
 * Original: 0x00367E4D - 0x00367E57 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00367DFE and 0x00367E75)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E4D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E4D: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x00367E55u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367E55: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367E57
 * Original: 0x00367E57 - 0x00367E61 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00367DFE and 0x00367E75)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E57(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E57: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x00367E5Fu); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367E5F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367E61
 * Original: 0x00367E61 - 0x00367E6B (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00367DFE and 0x00367E75)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E61(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E61: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x00367E69u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367E69: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367E6B
 * Original: 0x00367E6B - 0x00367E75 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00367DFE and 0x00367E75)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E6B: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x00367E73u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367E73: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367E75
 * Original: 0x00367E75 - 0x00367E7F (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E75(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E75: ;
    eax = 0x42A310;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367E7F
 * Original: 0x00367E7F - 0x00367E89 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00367E75 and 0x00367EC5)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E7F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E7F: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x00367E87u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367E87: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367E89
 * Original: 0x00367E89 - 0x00367E93 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00367E75 and 0x00367EC5)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E89(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E89: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x00367E91u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367E91: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367E93
 * Original: 0x00367E93 - 0x00367E9D (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00367E75 and 0x00367EC5)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E93: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x00367E9Bu); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367E9B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367E9D
 * Original: 0x00367E9D - 0x00367EA7 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00367E75 and 0x00367EC5)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E9D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E9D: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x00367EA5u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367EA5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367EA7
 * Original: 0x00367EA7 - 0x00367EB1 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00367E75 and 0x00367EC5)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367EA7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367EA7: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x00367EAFu); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367EAF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367EB1
 * Original: 0x00367EB1 - 0x00367EBB (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00367E75 and 0x00367EC5)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367EB1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367EB1: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x00367EB9u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367EB9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367EBB
 * Original: 0x00367EBB - 0x00367EC5 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00367E75 and 0x00367EC5)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367EBB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367EBB: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x00367EC3u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367EC3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367EC5
 * Original: 0x00367EC5 - 0x00367ECF (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367EC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367EC5: ;
    eax = 0x42A364;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367ECF
 * Original: 0x00367ECF - 0x00367ED7 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367ECF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367ECF: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

}

/**
 * sub_00367ED7
 * Original: 0x00367ED7 - 0x00367EDF (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367ED7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367ED7: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_00367EDF
 * Original: 0x00367EDF - 0x00367EF1 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00367ED7 and 0x00367F39)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367EDF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367EDF: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A398;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367EF1
 * Original: 0x00367EF1 - 0x00367EF9 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00367ED7 and 0x00367F39)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367EF1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367EF1: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_003D2297(); return; /* tail jmp 0x003D2297 */

}

/**
 * sub_00367EF9
 * Original: 0x00367EF9 - 0x00367F04 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00367ED7 and 0x00367F39)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367EF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367EF9: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003D0333(); return; /* tail jmp 0x003D0333 */

}

/**
 * sub_00367F04
 * Original: 0x00367F04 - 0x00367F0F (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00367ED7 and 0x00367F39)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F04(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F04: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003D0E3B(); return; /* tail jmp 0x003D0E3B */

}

/**
 * sub_00367F0F
 * Original: 0x00367F0F - 0x00367F1A (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00367ED7 and 0x00367F39)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F0F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F0F: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003D0E3B(); return; /* tail jmp 0x003D0E3B */

}

/**
 * sub_00367F1A
 * Original: 0x00367F1A - 0x00367F2F (21 bytes, 5 insns)
 * Folder: compiler (between: 0x00367ED7 and 0x00367F39)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F1A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F1A: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003D0E3B(); return; /* tail jmp 0x003D0E3B */

    eax = 0x42A3DC;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367F2F
 * Original: 0x00367F2F - 0x00367F39 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00367ED7 and 0x00367F39)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F2F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F2F: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x00367F37u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367F37: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367F39
 * Original: 0x00367F39 - 0x00367F43 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F39(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F39: ;
    eax = 0x42A274;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367F43
 * Original: 0x00367F43 - 0x00367F55 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00367F39 and 0x00367FE9)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F43(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F43: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_003D2E46(); return; /* tail jmp 0x003D2E46 */

    eax = 0x42A400;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367F55
 * Original: 0x00367F55 - 0x00367F5D (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00367F39 and 0x00367FE9)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F55: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_003D2297(); return; /* tail jmp 0x003D2297 */

}

/**
 * sub_00367F5D
 * Original: 0x00367F5D - 0x00367F72 (21 bytes, 5 insns)
 * Folder: compiler (between: 0x00367F39 and 0x00367FE9)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F5D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F5D: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003D0328(); return; /* tail jmp 0x003D0328 */

    eax = 0x42A42C;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367F72
 * Original: 0x00367F72 - 0x00367F84 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00367F39 and 0x00367FE9)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F72(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F72: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A450;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367F84
 * Original: 0x00367F84 - 0x00367F96 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00367F39 and 0x00367FE9)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F84: ;
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A474;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367F96
 * Original: 0x00367F96 - 0x00367F9E (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00367F39 and 0x00367FE9)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F96(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F96: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_003D2297(); return; /* tail jmp 0x003D2297 */

}

/**
 * sub_00367F9E
 * Original: 0x00367F9E - 0x00367FB3 (21 bytes, 5 insns)
 * Folder: compiler (between: 0x00367F39 and 0x00367FE9)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F9E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F9E: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

    eax = 0x42A4A0;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367FB3
 * Original: 0x00367FB3 - 0x00367FC5 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00367F39 and 0x00367FE9)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367FB3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367FB3: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

    eax = 0x42A4D4;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367FC5
 * Original: 0x00367FC5 - 0x00367FD7 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00367F39 and 0x00367FE9)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367FC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367FC5: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A4F8;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367FD7
 * Original: 0x00367FD7 - 0x00367FE9 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00367F39 and 0x00367FE9)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367FD7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367FD7: ;
    ecx = ebp + 0x1C;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A51C;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367FE9
 * Original: 0x00367FE9 - 0x00367FF4 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367FE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367FE9: ;
    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

}

/**
 * sub_00367FF4
 * Original: 0x00367FF4 - 0x00367FFF (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367FF4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367FF4: ;
    ecx = ebp + -200;
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

}

/**
 * sub_00367FFF
 * Original: 0x00367FFF - 0x00368007 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367FFF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367FFF: ;
    ecx = ebp + -76;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_00368007
 * Original: 0x00368007 - 0x0036800F (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368007(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368007: ;
    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_0036800F
 * Original: 0x0036800F - 0x00368017 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036800F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036800F: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_00368017
 * Original: 0x00368017 - 0x0036801F (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368017(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368017: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

}

/**
 * sub_0036801F
 * Original: 0x0036801F - 0x00368027 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036801F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036801F: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_00368027
 * Original: 0x00368027 - 0x0036802F (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368027(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368027: ;
    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_0036802F
 * Original: 0x0036802F - 0x00368041 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00368027 and 0x0036805A)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036802F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036802F: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

    eax = 0x42A580;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368041
 * Original: 0x00368041 - 0x0036805A (25 bytes, 7 insns)
 * Folder: compiler (between: 0x00368027 and 0x0036805A)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368041(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368041: ;
    eax = MEM32(ebp + -16);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00368059; /* je: equal / zero */

loc_0036804D: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

loc_00368059: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0036805A
 * Original: 0x0036805A - 0x00368064 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036805A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036805A: ;
    eax = 0x42A5A4;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368064
 * Original: 0x00368064 - 0x0036806C (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368064(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368064: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_0036806C
 * Original: 0x0036806C - 0x00368074 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036806C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036806C: ;
    ecx = ebp + 0x10;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_00368074
 * Original: 0x00368074 - 0x0036807C (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368074(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368074: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_003D0350(); return; /* tail jmp 0x003D0350 */

}

/**
 * sub_0036807C
 * Original: 0x0036807C - 0x0036808E (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00368074 and 0x0036808E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036807C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036807C: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

    eax = 0x42A5E0;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_0036808E
 * Original: 0x0036808E - 0x00368096 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036808E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036808E: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_00368096
 * Original: 0x00368096 - 0x003680A8 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0036808E and 0x00368117)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368096(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368096: ;
    ecx = ebp + 0x10;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A60C;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003680A8
 * Original: 0x003680A8 - 0x003680B0 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0036808E and 0x00368117)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003680A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003680A8: ;
    ecx = MEM32(ebp + -24);
    g_seh_ebp = ebp; sub_003D2297(); return; /* tail jmp 0x003D2297 */

}

/**
 * sub_003680B0
 * Original: 0x003680B0 - 0x003680BB (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0036808E and 0x00368117)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003680B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003680B0: ;
    ecx = MEM32(ebp + -24);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_003680BB
 * Original: 0x003680BB - 0x003680C6 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0036808E and 0x00368117)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003680BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003680BB: ;
    ecx = MEM32(ebp + -24);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_003680C6
 * Original: 0x003680C6 - 0x003680D1 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0036808E and 0x00368117)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003680C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003680C6: ;
    ecx = MEM32(ebp + -24);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_003680D1
 * Original: 0x003680D1 - 0x003680DB (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0036808E and 0x00368117)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003680D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003680D1: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x003680D9u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_003680D9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003680DB
 * Original: 0x003680DB - 0x003680E5 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0036808E and 0x00368117)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003680DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003680DB: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x003680E3u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_003680E3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003680E5
 * Original: 0x003680E5 - 0x003680EF (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0036808E and 0x00368117)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003680E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003680E5: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x003680EDu); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_003680ED: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003680EF
 * Original: 0x003680EF - 0x003680F9 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0036808E and 0x00368117)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003680EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003680EF: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x003680F7u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_003680F7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003680F9
 * Original: 0x003680F9 - 0x00368103 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0036808E and 0x00368117)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003680F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003680F9: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x00368101u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00368101: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00368103
 * Original: 0x00368103 - 0x0036810D (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0036808E and 0x00368117)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368103(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368103: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x0036810Bu); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_0036810B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036810D
 * Original: 0x0036810D - 0x00368117 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0036808E and 0x00368117)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036810D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036810D: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x00368115u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00368115: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00368117
 * Original: 0x00368117 - 0x00368121 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368117(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368117: ;
    eax = 0x42A680;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368121
 * Original: 0x00368121 - 0x00368129 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00368117 and 0x00368173)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368121(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368121: ;
    ecx = MEM32(ebp + -40);
    g_seh_ebp = ebp; sub_003D2297(); return; /* tail jmp 0x003D2297 */

}

/**
 * sub_00368129
 * Original: 0x00368129 - 0x00368134 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00368117 and 0x00368173)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368129(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368129: ;
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003D0333(); return; /* tail jmp 0x003D0333 */

}

/**
 * sub_00368134
 * Original: 0x00368134 - 0x0036813F (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00368117 and 0x00368173)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368134(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368134: ;
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003D0E3B(); return; /* tail jmp 0x003D0E3B */

}

/**
 * sub_0036813F
 * Original: 0x0036813F - 0x0036814A (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00368117 and 0x00368173)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036813F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036813F: ;
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003D0E3B(); return; /* tail jmp 0x003D0E3B */

}

/**
 * sub_0036814A
 * Original: 0x0036814A - 0x00368155 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00368117 and 0x00368173)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036814A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036814A: ;
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003D0E3B(); return; /* tail jmp 0x003D0E3B */

}

/**
 * sub_00368155
 * Original: 0x00368155 - 0x0036815F (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00368117 and 0x00368173)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368155(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368155: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x0036815Du); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_0036815D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036815F
 * Original: 0x0036815F - 0x00368169 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00368117 and 0x00368173)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036815F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036815F: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x00368167u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00368167: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00368169
 * Original: 0x00368169 - 0x00368173 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00368117 and 0x00368173)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368169(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368169: ;
    PUSH32(esp, MEM32(ebp + -44));
    PUSH32(esp, 0x00368171u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00368171: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00368173
 * Original: 0x00368173 - 0x0036817D (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368173(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368173: ;
    eax = 0x42A6DC;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_0036817D
 * Original: 0x0036817D - 0x00368185 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00368173 and 0x0036819D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036817D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036817D: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_003D2E46(); return; /* tail jmp 0x003D2E46 */

}

/**
 * sub_00368185
 * Original: 0x00368185 - 0x0036819D (24 bytes, 5 insns)
 * Folder: compiler (between: 0x00368173 and 0x0036819D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368185(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368185: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x88;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003D0350(); return; /* tail jmp 0x003D0350 */

    eax = 0x42A708;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_0036819D
 * Original: 0x0036819D - 0x003681A5 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036819D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036819D: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_003681A5
 * Original: 0x003681A5 - 0x003681B7 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0036819D and 0x003681C9)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003681A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003681A5: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A734;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003681B7
 * Original: 0x003681B7 - 0x003681C9 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0036819D and 0x003681C9)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003681B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003681B7: ;
    ecx = ebp + 0x14;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A758;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003681C9
 * Original: 0x003681C9 - 0x003681D1 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003681C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003681C9: ;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_003D0350(); return; /* tail jmp 0x003D0350 */

}

/**
 * sub_003681D1
 * Original: 0x003681D1 - 0x003681E3 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x003681C9 and 0x0036821D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003681D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003681D1: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_003D035B(); return; /* tail jmp 0x003D035B */

    eax = 0x42A784;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003681E3
 * Original: 0x003681E3 - 0x003681F5 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x003681C9 and 0x0036821D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003681E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003681E3: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A7A8;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003681F5
 * Original: 0x003681F5 - 0x003681FF (10 bytes, 4 insns)
 * Folder: compiler (between: 0x003681C9 and 0x0036821D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003681F5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003681F5: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x003681FDu); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_003681FD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003681FF
 * Original: 0x003681FF - 0x00368209 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x003681C9 and 0x0036821D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003681FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003681FF: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x00368207u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00368207: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00368209
 * Original: 0x00368209 - 0x00368213 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x003681C9 and 0x0036821D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368209(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368209: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x00368211u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00368211: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00368213
 * Original: 0x00368213 - 0x0036821D (10 bytes, 4 insns)
 * Folder: compiler (between: 0x003681C9 and 0x0036821D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368213(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368213: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x0036821Bu); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_0036821B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036821D
 * Original: 0x0036821D - 0x00368227 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036821D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036821D: ;
    eax = 0x42A818;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368227
 * Original: 0x00368227 - 0x0036822F (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368227(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368227: ;
    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_003D0350(); return; /* tail jmp 0x003D0350 */

}

/**
 * sub_0036822F
 * Original: 0x0036822F - 0x00368237 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036822F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036822F: ;
    ecx = ebp + -100;
    g_seh_ebp = ebp; sub_003D0350(); return; /* tail jmp 0x003D0350 */

}

/**
 * sub_00368237
 * Original: 0x00368237 - 0x0036823F (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368237(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368237: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_003D0333(); return; /* tail jmp 0x003D0333 */

}

/**
 * sub_0036823F
 * Original: 0x0036823F - 0x00368247 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036823F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036823F: ;
    ecx = ebp + -84;
    g_seh_ebp = ebp; sub_003D0333(); return; /* tail jmp 0x003D0333 */

}

/**
 * sub_00368247
 * Original: 0x00368247 - 0x0036824F (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368247(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368247: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_003D0328(); return; /* tail jmp 0x003D0328 */

}

/**
 * sub_0036824F
 * Original: 0x0036824F - 0x00368259 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00368247 and 0x00368259)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036824F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036824F: ;
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, 0x00368257u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00368257: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00368259
 * Original: 0x00368259 - 0x00368263 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368259(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368259: ;
    eax = 0x42A864;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368263
 * Original: 0x00368263 - 0x0036826B (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00368259 and 0x003682AC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368263(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368263: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_003E1818(); return; /* tail jmp 0x003E1818 */

}

/**
 * sub_0036826B
 * Original: 0x0036826B - 0x00368276 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00368259 and 0x003682AC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036826B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036826B: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003E178B(); return; /* tail jmp 0x003E178B */

}

/**
 * sub_00368276
 * Original: 0x00368276 - 0x00368281 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00368259 and 0x003682AC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368276(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368276: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003E178B(); return; /* tail jmp 0x003E178B */

}

/**
 * sub_00368281
 * Original: 0x00368281 - 0x0036828C (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00368259 and 0x003682AC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368281(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368281: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003E178B(); return; /* tail jmp 0x003E178B */

}

/**
 * sub_0036828C
 * Original: 0x0036828C - 0x00368297 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00368259 and 0x003682AC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036828C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036828C: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003E178B(); return; /* tail jmp 0x003E178B */

}

/**
 * sub_00368297
 * Original: 0x00368297 - 0x003682AC (21 bytes, 5 insns)
 * Folder: compiler (between: 0x00368259 and 0x003682AC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368297(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368297: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003E178B(); return; /* tail jmp 0x003E178B */

    eax = 0x42A8B0;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003682AC
 * Original: 0x003682AC - 0x003682B4 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003682AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003682AC: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

}

/**
 * sub_003682B4
 * Original: 0x003682B4 - 0x003682C6 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x003682AC and 0x00368360)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003682B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003682B4: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

    eax = 0x42A8DC;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003682C6
 * Original: 0x003682C6 - 0x003682D1 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x003682AC and 0x00368360)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003682C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003682C6: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

}

/**
 * sub_003682D1
 * Original: 0x003682D1 - 0x003682E6 (21 bytes, 5 insns)
 * Folder: compiler (between: 0x003682AC and 0x00368360)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003682D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003682D1: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

    eax = 0x42A908;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003682E6
 * Original: 0x003682E6 - 0x003682F1 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x003682AC and 0x00368360)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003682E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003682E6: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

}

/**
 * sub_003682F1
 * Original: 0x003682F1 - 0x003682FC (11 bytes, 3 insns)
 * Folder: compiler (between: 0x003682AC and 0x00368360)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003682F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003682F1: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

}

/**
 * sub_003682FC
 * Original: 0x003682FC - 0x00368312 (22 bytes, 8 insns)
 * Folder: compiler (between: 0x003682AC and 0x00368360)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003682FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003682FC: ;
    PUSH32(esp, 0x3DF228);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x4C);
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00368311u); RECOMP_ABI_CALL(0x00348953u, sub_00348953); /* call 0x00348953 */

loc_00368311: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00368312
 * Original: 0x00368312 - 0x0036832A (24 bytes, 5 insns)
 * Folder: compiler (between: 0x003682AC and 0x00368360)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368312(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368312: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x54C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x54C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003DF954(); return; /* tail jmp 0x003DF954 */

    eax = 0x42A944;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_0036832A
 * Original: 0x0036832A - 0x0036833C (18 bytes, 4 insns)
 * Folder: compiler (between: 0x003682AC and 0x00368360)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036832A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036832A: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_003DF954(); return; /* tail jmp 0x003DF954 */

    eax = 0x42A968;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_0036833C
 * Original: 0x0036833C - 0x0036834E (18 bytes, 4 insns)
 * Folder: compiler (between: 0x003682AC and 0x00368360)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036833C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036833C: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

    eax = 0x42A98C;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_0036834E
 * Original: 0x0036834E - 0x00368360 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x003682AC and 0x00368360)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036834E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036834E: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_003DF954(); return; /* tail jmp 0x003DF954 */

    eax = 0x42A9B0;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368360
 * Original: 0x00368360 - 0x00368368 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368360: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

}

/**
 * sub_00368368
 * Original: 0x00368368 - 0x0036837A (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00368360 and 0x0036837A)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368368(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368368: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

    eax = 0x42A9DC;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_0036837A
 * Original: 0x0036837A - 0x00368382 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036837A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036837A: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

}

/**
 * sub_00368382
 * Original: 0x00368382 - 0x00368394 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0036837A and 0x003683C2)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368382(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368382: ;
    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

    eax = 0x42AA08;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368394
 * Original: 0x00368394 - 0x003683A6 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0036837A and 0x003683C2)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368394(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368394: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_003DF954(); return; /* tail jmp 0x003DF954 */

    eax = 0x42AA2C;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003683A6
 * Original: 0x003683A6 - 0x003683B8 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0036837A and 0x003683C2)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003683A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003683A6: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

    eax = 0x42AA50;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003683B8
 * Original: 0x003683B8 - 0x003683C2 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0036837A and 0x003683C2)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003683B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003683B8: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x003683C0u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_003683C0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003683C2
 * Original: 0x003683C2 - 0x003683CC (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003683C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003683C2: ;
    eax = 0x42AA74;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003683CC
 * Original: 0x003683CC - 0x003683D6 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x003683C2 and 0x003683D6)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003683CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003683CC: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0x003683D4u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_003683D4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003683D6
 * Original: 0x003683D6 - 0x003683E0 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003683D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003683D6: ;
    eax = 0x42AA98;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003683E0
 * Original: 0x003683E0 - 0x003683E8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003683E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003683E0: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_003E1664(); return; /* tail jmp 0x003E1664 */

}

/**
 * sub_003683E8
 * Original: 0x003683E8 - 0x003683F0 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003683E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003683E8: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_003E1433(); return; /* tail jmp 0x003E1433 */

}

/**
 * sub_003683F0
 * Original: 0x003683F0 - 0x003683F8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003683F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003683F0: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_003E1433(); return; /* tail jmp 0x003E1433 */

}

/**
 * sub_003683F8
 * Original: 0x003683F8 - 0x00368410 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x003683F0 and 0x003684F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003683F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003683F8: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_003E1433(); return; /* tail jmp 0x003E1433 */

    eax = 0x42AAD4;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00368410
 * Original: 0x00368410 - 0x00368418 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x003683F0 and 0x003684F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368410: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000B5DE0(); return; /* tail jmp 0x000B5DE0 */

}

/**
 * sub_00368430
 * Original: 0x00368430 - 0x00368438 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x003683F0 and 0x003684F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368430: ;
    eax = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000B3420(); return; /* tail jmp 0x000B3420 */

}

/**
 * sub_00368450
 * Original: 0x00368450 - 0x0036845D (13 bytes, 3 insns)
 * Folder: compiler (between: 0x003683F0 and 0x003684F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368450: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x2E24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2E24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00096E70(); return; /* tail jmp 0x00096E70 */

}

/**
 * sub_00368470
 * Original: 0x00368470 - 0x0036847B (11 bytes, 2 insns)
 * Folder: compiler (between: 0x003683F0 and 0x003684F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368470: ;
    eax = ebp + -2100;
    g_seh_ebp = ebp; sub_00094700(); return; /* tail jmp 0x00094700 */

}

/**
 * sub_0036847B
 * Original: 0x0036847B - 0x00368490 (21 bytes, 4 insns)
 * Folder: compiler (between: 0x003683F0 and 0x003684F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036847B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036847B: ;
    eax = ebp + -2104;
    g_seh_ebp = ebp; sub_00096E60(); return; /* tail jmp 0x00096E60 */

    eax = 0x42AD20;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368490
 * Original: 0x00368490 - 0x0036849B (11 bytes, 2 insns)
 * Folder: compiler (between: 0x003683F0 and 0x003684F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368490: ;
    eax = ebp + -544;
    g_seh_ebp = ebp; sub_00094700(); return; /* tail jmp 0x00094700 */

}

/**
 * sub_0036849B
 * Original: 0x0036849B - 0x003684A6 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x003683F0 and 0x003684F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036849B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036849B: ;
    eax = ebp + -536;
    g_seh_ebp = ebp; sub_000946B0(); return; /* tail jmp 0x000946B0 */

}

/**
 * sub_003684A6
 * Original: 0x003684A6 - 0x003684C0 (26 bytes, 9 insns)
 * Folder: compiler (between: 0x003683F0 and 0x003684F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003684A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003684A6: ;
    eax = ebp + -548;
    g_seh_ebp = ebp; sub_000946B0(); return; /* tail jmp 0x000946B0 */

    eax = 0x42AD54;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003684C0
 * Original: 0x003684C0 - 0x003684CB (11 bytes, 2 insns)
 * Folder: compiler (between: 0x003683F0 and 0x003684F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003684C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003684C0: ;
    eax = ebp + -532;
    g_seh_ebp = ebp; sub_00094700(); return; /* tail jmp 0x00094700 */

}

/**
 * sub_003684CB
 * Original: 0x003684CB - 0x003684D6 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x003683F0 and 0x003684F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003684CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003684CB: ;
    eax = ebp + -528;
    g_seh_ebp = ebp; sub_00093210(); return; /* tail jmp 0x00093210 */

}

/**
 * sub_003684D6
 * Original: 0x003684D6 - 0x003684F0 (26 bytes, 9 insns)
 * Folder: compiler (between: 0x003683F0 and 0x003684F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003684D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003684D6: ;
    eax = ebp + -536;
    g_seh_ebp = ebp; sub_00094690(); return; /* tail jmp 0x00094690 */

    eax = 0x42ADAC;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003684F0
 * Original: 0x003684F0 - 0x003684FA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003684F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003684F0: ;
    eax = 0x42AE30;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368500
 * Original: 0x00368500 - 0x00368508 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x003684F0 and 0x00368536)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368500: ;
    eax = ebp + -24;
    g_seh_ebp = ebp; sub_000CA800(); return; /* tail jmp 0x000CA800 */

}

/**
 * sub_00368520
 * Original: 0x00368520 - 0x00368528 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x003684F0 and 0x00368536)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368520: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_00094700(); return; /* tail jmp 0x00094700 */

}

/**
 * sub_00368528
 * Original: 0x00368528 - 0x00368536 (14 bytes, 4 insns)
 * Folder: compiler (between: 0x003684F0 and 0x00368536)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368528(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368528: ;
    eax = MEM32(0x76B42C);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x76B42C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00368536
 * Original: 0x00368536 - 0x00368540 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368536(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368536: ;
    eax = 0x42AE80;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368540
 * Original: 0x00368540 - 0x00368548 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00368536 and 0x003685C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368540: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000966F0(); return; /* tail jmp 0x000966F0 */

}

/**
 * sub_00368548
 * Original: 0x00368548 - 0x00368560 (24 bytes, 8 insns)
 * Folder: compiler (between: 0x00368536 and 0x003685C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368548(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368548: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00096720(); return; /* tail jmp 0x00096720 */

    eax = 0x42AEAC;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00368560
 * Original: 0x00368560 - 0x0036856B (11 bytes, 2 insns)
 * Folder: compiler (between: 0x00368536 and 0x003685C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368560: ;
    eax = ebp + -5152;
    g_seh_ebp = ebp; sub_00094700(); return; /* tail jmp 0x00094700 */

}

/**
 * sub_0036856B
 * Original: 0x0036856B - 0x00368576 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x00368536 and 0x003685C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036856B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036856B: ;
    eax = ebp + -5148;
    g_seh_ebp = ebp; sub_00093210(); return; /* tail jmp 0x00093210 */

}

/**
 * sub_00368576
 * Original: 0x00368576 - 0x00368581 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x00368536 and 0x003685C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368576(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368576: ;
    eax = ebp + -5156;
    g_seh_ebp = ebp; sub_00094690(); return; /* tail jmp 0x00094690 */

}

/**
 * sub_00368581
 * Original: 0x00368581 - 0x003685A0 (31 bytes, 14 insns)
 * Folder: compiler (between: 0x00368536 and 0x003685C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368581(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368581: ;
    eax = ebp + -5156;
    g_seh_ebp = ebp; sub_00094690(); return; /* tail jmp 0x00094690 */

    eax = 0x42AEE8;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_003685A0
 * Original: 0x003685A0 - 0x003685A8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00368536 and 0x003685C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003685A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003685A0: ;
    eax = ebp + 4;
    g_seh_ebp = ebp; sub_00094700(); return; /* tail jmp 0x00094700 */

}

/**
 * sub_003685C0
 * Original: 0x003685C0 - 0x003685C8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003685C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003685C0: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_003685C8
 * Original: 0x003685C8 - 0x003685E0 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x003685C0 and 0x00368630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003685C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003685C8: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

    eax = 0x42AF38;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003685E0
 * Original: 0x003685E0 - 0x003685E8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x003685C0 and 0x00368630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003685E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003685E0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00347374(); return; /* tail jmp 0x00347374 */

}

/**
 * sub_00368600
 * Original: 0x00368600 - 0x00368608 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x003685C0 and 0x00368630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368600: ;
    esi = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000D10A0(); return; /* tail jmp 0x000D10A0 */

}

/**
 * sub_00368620
 * Original: 0x00368620 - 0x00368625 (5 bytes, 1 insns)
 * Folder: compiler (between: 0x003685C0 and 0x00368630)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368620: ;
    g_seh_ebp = ebp; sub_00049710(); return; /* tail jmp 0x00049710 */

}

/**
 * sub_00368630
 * Original: 0x00368630 - 0x00368638 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368630: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00368650
 * Original: 0x00368650 - 0x00368655 (5 bytes, 1 insns)
 * Folder: compiler (between: 0x00368630 and 0x00368660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368650: ;
    g_seh_ebp = ebp; sub_00049710(); return; /* tail jmp 0x00049710 */

}

/**
 * sub_00368660
 * Original: 0x00368660 - 0x00368668 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368660: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00368668
 * Original: 0x00368668 - 0x00368670 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368668(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368668: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00368670
 * Original: 0x00368670 - 0x00368678 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368670: ;
    ecx = ebp + -100;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00368678
 * Original: 0x00368678 - 0x00368683 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368678(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368678: ;
    ecx = ebp + -156;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00368683
 * Original: 0x00368683 - 0x003686A0 (29 bytes, 15 insns)
 * Folder: compiler (between: 0x00368678 and 0x003686A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368683(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368683: ;
    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

    eax = 0x42B098;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_003686A0
 * Original: 0x003686A0 - 0x003686AB (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003686A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003686A0: ;
    ecx = ebp + -304;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_003686AB
 * Original: 0x003686AB - 0x003686C0 (21 bytes, 4 insns)
 * Folder: compiler (between: 0x003686A0 and 0x00368730)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003686AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003686AB: ;
    ecx = ebp + -340;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

    eax = 0x42B0C4;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003686C0
 * Original: 0x003686C0 - 0x003686E0 (32 bytes, 18 insns)
 * Folder: compiler (between: 0x003686A0 and 0x00368730)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003686C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003686C0: ;
    eax = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000CE290(); return; /* tail jmp 0x000CE290 */

    eax = 0x42B10C;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_003686E0
 * Original: 0x003686E0 - 0x003686E8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x003686A0 and 0x00368730)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003686E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003686E0: ;
    esi = ebp + -28;
    g_seh_ebp = ebp; sub_000D10A0(); return; /* tail jmp 0x000D10A0 */

}

/**
 * sub_00368700
 * Original: 0x00368700 - 0x00368708 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x003686A0 and 0x00368730)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368700: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_0009A4D0(); return; /* tail jmp 0x0009A4D0 */

}

/**
 * sub_00368720
 * Original: 0x00368720 - 0x00368725 (5 bytes, 1 insns)
 * Folder: compiler (between: 0x003686A0 and 0x00368730)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368720: ;
    g_seh_ebp = ebp; sub_00049710(); return; /* tail jmp 0x00049710 */

}

/**
 * sub_00368730
 * Original: 0x00368730 - 0x00368738 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368730: ;
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00368750
 * Original: 0x00368750 - 0x0036875B (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368750: ;
    ecx = ebp + -364;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_0036875B
 * Original: 0x0036875B - 0x00368766 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036875B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036875B: ;
    ecx = ebp + -392;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00368766
 * Original: 0x00368766 - 0x00368771 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368766(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368766: ;
    ecx = ebp + -448;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00368771
 * Original: 0x00368771 - 0x0036877C (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368771(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368771: ;
    ecx = ebp + -448;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_0036877C
 * Original: 0x0036877C - 0x00368787 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036877C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036877C: ;
    ecx = ebp + -448;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00368787
 * Original: 0x00368787 - 0x003687A0 (25 bytes, 8 insns)
 * Folder: compiler (between: 0x0036877C and 0x003687C1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368787(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368787: ;
    ecx = ebp + -420;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

    eax = 0x42B284;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003687A0
 * Original: 0x003687A0 - 0x003687AB (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0036877C and 0x003687C1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003687A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003687A0: ;
    eax = ebp + -612;
    g_seh_ebp = ebp; sub_00012C00(); return; /* tail jmp 0x00012C00 */

}

/**
 * sub_003687AB
 * Original: 0x003687AB - 0x003687B6 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0036877C and 0x003687C1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003687AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003687AB: ;
    eax = ebp + -624;
    g_seh_ebp = ebp; sub_00012C00(); return; /* tail jmp 0x00012C00 */

}

/**
 * sub_003687B6
 * Original: 0x003687B6 - 0x003687C1 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0036877C and 0x003687C1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003687B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003687B6: ;
    esi = ebp + -580;
    g_seh_ebp = ebp; sub_000113D0(); return; /* tail jmp 0x000113D0 */

}

/**
 * sub_003687C1
 * Original: 0x003687C1 - 0x003687CC (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003687C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003687C1: ;
    ecx = ebp + -412;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_003687CC
 * Original: 0x003687CC - 0x003687D7 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003687CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003687CC: ;
    ecx = ebp + -440;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_003687D7
 * Original: 0x003687D7 - 0x003687E2 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003687D7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003687D7: ;
    ecx = ebp + -524;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_003687E2
 * Original: 0x003687E2 - 0x003687ED (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003687E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003687E2: ;
    ecx = ebp + -468;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_003687ED
 * Original: 0x003687ED - 0x003687F8 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003687ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003687ED: ;
    ecx = ebp + -496;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_003687F8
 * Original: 0x003687F8 - 0x00368810 (24 bytes, 7 insns)
 * Folder: compiler (between: 0x003687ED and 0x00368810)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003687F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003687F8: ;
    ecx = ebp + -384;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

    eax = 0x42B2F0;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00368810
 * Original: 0x00368810 - 0x00368818 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368810: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00368818
 * Original: 0x00368818 - 0x00368820 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368818(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368818: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00368820
 * Original: 0x00368820 - 0x00368828 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368820: ;
    ecx = ebp + -104;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00368828
 * Original: 0x00368828 - 0x00368840 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x00368820 and 0x00368840)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368828(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368828: ;
    ecx = ebp + -104;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

    eax = 0x42B32C;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00368840
 * Original: 0x00368840 - 0x0036884B (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368840: ;
    ecx = ebp + -336;
    g_seh_ebp = ebp; sub_000DB600(); return; /* tail jmp 0x000DB600 */

}

/**
 * sub_0036884B
 * Original: 0x0036884B - 0x00368861 (22 bytes, 7 insns)
 * Folder: compiler (between: 0x00368840 and 0x00368861)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036884B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036884B: ;
    PUSH32(esp, 0xDB600);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0xC);
    eax = ebp + -324;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00368860u); RECOMP_ABI_CALL(0x00348953u, sub_00348953); /* call 0x00348953 */

loc_00368860: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00368861
 * Original: 0x00368861 - 0x0036886B (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368861(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368861: ;
    eax = 0x42B358;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368870
 * Original: 0x00368870 - 0x00368878 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00368861 and 0x0036888E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368870: ;
    esi = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000D10A0(); return; /* tail jmp 0x000D10A0 */

}

/**
 * sub_00368878
 * Original: 0x00368878 - 0x00368883 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00368861 and 0x0036888E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368878(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368878: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000D10A0(); return; /* tail jmp 0x000D10A0 */

}

/**
 * sub_00368883
 * Original: 0x00368883 - 0x0036888E (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00368861 and 0x0036888E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368883(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368883: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000D10A0(); return; /* tail jmp 0x000D10A0 */

}

/**
 * sub_0036888E
 * Original: 0x0036888E - 0x003688B0 (34 bytes, 18 insns)
 * Folder: compiler (match: xbox-demo 0x002970EE, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036888E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036888E: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000D10A0(); return; /* tail jmp 0x000D10A0 */

    eax = 0x42B394;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_003688B0
 * Original: 0x003688B0 - 0x003688B8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0036888E and 0x003688E6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003688B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003688B0: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_0009A4D0(); return; /* tail jmp 0x0009A4D0 */

}

/**
 * sub_003688D0
 * Original: 0x003688D0 - 0x003688D8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0036888E and 0x003688E6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003688D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003688D0: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_00094700(); return; /* tail jmp 0x00094700 */

}

/**
 * sub_003688D8
 * Original: 0x003688D8 - 0x003688E6 (14 bytes, 4 insns)
 * Folder: compiler (between: 0x0036888E and 0x003688E6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003688D8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003688D8: ;
    eax = MEM32(0x76BA7C);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x76BA7C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003688E6
 * Original: 0x003688E6 - 0x003688F0 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003688E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003688E6: ;
    eax = 0x42B3E4;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368900
 * Original: 0x00368900 - 0x0036890B (11 bytes, 2 insns)
 * Folder: compiler (between: 0x003688E6 and 0x00368920)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368900: ;
    eax = ebp + -276;
    g_seh_ebp = ebp; sub_00094700(); return; /* tail jmp 0x00094700 */

}

/**
 * sub_00368920
 * Original: 0x00368920 - 0x0036892A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368920: ;
    eax = 0x42B4EC;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368930
 * Original: 0x00368930 - 0x00368938 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00368920 and 0x00368990)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368930: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000376D0(); return; /* tail jmp 0x000376D0 */

}

/**
 * sub_00368938
 * Original: 0x00368938 - 0x00368950 (24 bytes, 8 insns)
 * Folder: compiler (between: 0x00368920 and 0x00368990)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368938(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368938: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001DE70(); return; /* tail jmp 0x0001DE70 */

    eax = 0x42B518;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00368950
 * Original: 0x00368950 - 0x00368958 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00368920 and 0x00368990)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368950: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00038120(); return; /* tail jmp 0x00038120 */

}

/**
 * sub_00368970
 * Original: 0x00368970 - 0x00368978 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00368920 and 0x00368990)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368970: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_00038120(); return; /* tail jmp 0x00038120 */

}

/**
 * sub_00368990
 * Original: 0x00368990 - 0x0036899A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368990: ;
    eax = 0x42B634;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003689A0
 * Original: 0x003689A0 - 0x003689AA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003689A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003689A0: ;
    eax = 0x42B5E4;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003689B0
 * Original: 0x003689B0 - 0x003689B8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x003689A0 and 0x003689EF)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003689B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003689B0: ;
    esi = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_0001DE70(); return; /* tail jmp 0x0001DE70 */

}

/**
 * sub_003689B8
 * Original: 0x003689B8 - 0x003689C3 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x003689A0 and 0x003689EF)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003689B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003689B8: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001DE70(); return; /* tail jmp 0x0001DE70 */

}

/**
 * sub_003689C3
 * Original: 0x003689C3 - 0x003689CE (11 bytes, 3 insns)
 * Folder: compiler (between: 0x003689A0 and 0x003689EF)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003689C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003689C3: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001DE70(); return; /* tail jmp 0x0001DE70 */

}

/**
 * sub_003689CE
 * Original: 0x003689CE - 0x003689D9 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x003689A0 and 0x003689EF)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003689CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003689CE: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001DE70(); return; /* tail jmp 0x0001DE70 */

}

/**
 * sub_003689D9
 * Original: 0x003689D9 - 0x003689E4 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x003689A0 and 0x003689EF)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003689D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003689D9: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001DE70(); return; /* tail jmp 0x0001DE70 */

}

/**
 * sub_003689E4
 * Original: 0x003689E4 - 0x003689EF (11 bytes, 3 insns)
 * Folder: compiler (between: 0x003689A0 and 0x003689EF)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003689E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003689E4: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001DE70(); return; /* tail jmp 0x0001DE70 */

}

/**
 * sub_003689EF
 * Original: 0x003689EF - 0x00368A10 (33 bytes, 17 insns)
 * Folder: compiler (match: xbox-demo 0x00296F2F, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003689EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003689EF: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001DE70(); return; /* tail jmp 0x0001DE70 */

    eax = 0x42B688;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_00368A10
 * Original: 0x00368A10 - 0x00368A1B (11 bytes, 5 insns)
 * Folder: compiler (between: 0x003689EF and 0x00368A1B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368A10: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00368A19u); RECOMP_ABI_CALL(0x0009A510u, sub_0009A510); /* call 0x0009A510 */

loc_00368A19: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00368A1B
 * Original: 0x00368A1B - 0x00368A25 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368A1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368A1B: ;
    eax = 0x42B6AC;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368A30
 * Original: 0x00368A30 - 0x00368A38 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00368A1B and 0x00368A46)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368A30: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_00094700(); return; /* tail jmp 0x00094700 */

}

/**
 * sub_00368A38
 * Original: 0x00368A38 - 0x00368A46 (14 bytes, 4 insns)
 * Folder: compiler (between: 0x00368A1B and 0x00368A46)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368A38(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368A38: ;
    eax = MEM32(0x76BAB8);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x76BAB8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00368A46
 * Original: 0x00368A46 - 0x00368A50 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368A46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368A46: ;
    eax = 0x42B6D8;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368A50
 * Original: 0x00368A50 - 0x00368A70 (32 bytes, 18 insns)
 * Folder: compiler (between: 0x00368A46 and 0x00368C70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368A50: ;
    eax = ebp + 0x14;
    g_seh_ebp = ebp; sub_000946B0(); return; /* tail jmp 0x000946B0 */

    eax = 0x42B764;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_00368A70
 * Original: 0x00368A70 - 0x00368A78 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00368A46 and 0x00368C70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368A70: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00092B80(); return; /* tail jmp 0x00092B80 */

}

/**
 * sub_00368A90
 * Original: 0x00368A90 - 0x00368A9B (11 bytes, 2 insns)
 * Folder: compiler (between: 0x00368A46 and 0x00368C70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368A90: ;
    esi = MEM32(ebp + -4112);
    g_seh_ebp = ebp; sub_00097970(); return; /* tail jmp 0x00097970 */

}

/**
 * sub_00368AB0
 * Original: 0x00368AB0 - 0x00368AB8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00368A46 and 0x00368C70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368AB0: ;
    esi = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_00097970(); return; /* tail jmp 0x00097970 */

}

/**
 * sub_00368AD0
 * Original: 0x00368AD0 - 0x00368AD8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00368A46 and 0x00368C70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368AD0: ;
    esi = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_00097970(); return; /* tail jmp 0x00097970 */

}

/**
 * sub_00368AD8
 * Original: 0x00368AD8 - 0x00368AE0 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00368A46 and 0x00368C70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368AD8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368AD8: ;
    esi = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_00097970(); return; /* tail jmp 0x00097970 */

}

/**
 * sub_00368AE0
 * Original: 0x00368AE0 - 0x00368B00 (32 bytes, 18 insns)
 * Folder: compiler (between: 0x00368A46 and 0x00368C70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368AE0: ;
    esi = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_00097970(); return; /* tail jmp 0x00097970 */

    eax = 0x42B804;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_00368B00
 * Original: 0x00368B00 - 0x00368B08 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00368A46 and 0x00368C70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368B00: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_000376D0(); return; /* tail jmp 0x000376D0 */

}

/**
 * sub_00368B08
 * Original: 0x00368B08 - 0x00368B13 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00368A46 and 0x00368C70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368B08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368B08: ;
    esi = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001DE70(); return; /* tail jmp 0x0001DE70 */

}

/**
 * sub_00368B13
 * Original: 0x00368B13 - 0x00368B30 (29 bytes, 13 insns)
 * Folder: compiler (between: 0x00368A46 and 0x00368C70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368B13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368B13: ;
    esi = MEM32(ebp + -16);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001DE70(); return; /* tail jmp 0x0001DE70 */

    eax = 0x42B838;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

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
 * sub_00368B30
 * Original: 0x00368B30 - 0x00368B38 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00368A46 and 0x00368C70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368B30: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_000376D0(); return; /* tail jmp 0x000376D0 */

}

/**
 * sub_00368B50
 * Original: 0x00368B50 - 0x00368B5B (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00368A46 and 0x00368C70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368B50: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x58;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001DE70(); return; /* tail jmp 0x0001DE70 */

}

/**
 * sub_00368B70
 * Original: 0x00368B70 - 0x00368B7B (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00368A46 and 0x00368C70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368B70: ;
    esi = MEM32(ebp + -16);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001DE70(); return; /* tail jmp 0x0001DE70 */

}

/**
 * sub_00368B7B
 * Original: 0x00368B7B - 0x00368B86 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00368A46 and 0x00368C70)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368B7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368B7B: ;
    esi = MEM32(ebp + -16);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001DE70(); return; /* tail jmp 0x0001DE70 */

}
