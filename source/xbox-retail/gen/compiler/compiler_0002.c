/**
 * PoP Warrior Within Xbox retail - compiler, chunk 2
 * Compiler-generated C++ exception unwinding and global set-up (.text$x, .text$yc/yd)
 * Functions: 250 (0x0048BE28 - 0x0048CDF8)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_0048BE28
 * Original: 0x0048BE28 - 0x0048BE33 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048BDF0 and 0x0048BE79)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BE28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BE28: ;
    ecx = MEM32(ebp + -24);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

}

/**
 * sub_0048BE33
 * Original: 0x0048BE33 - 0x0048BE3D (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BDF0 and 0x0048BE79)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BE33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BE33: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x0048BE3Bu); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BE3B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BE3D
 * Original: 0x0048BE3D - 0x0048BE47 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BDF0 and 0x0048BE79)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BE3D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BE3D: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x0048BE45u); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BE45: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BE47
 * Original: 0x0048BE47 - 0x0048BE51 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BDF0 and 0x0048BE79)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BE47(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BE47: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x0048BE4Fu); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BE4F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BE51
 * Original: 0x0048BE51 - 0x0048BE5B (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BDF0 and 0x0048BE79)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BE51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BE51: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x0048BE59u); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BE59: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BE5B
 * Original: 0x0048BE5B - 0x0048BE65 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BDF0 and 0x0048BE79)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BE5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BE5B: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x0048BE63u); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BE63: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BE65
 * Original: 0x0048BE65 - 0x0048BE6F (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BDF0 and 0x0048BE79)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BE65(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BE65: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x0048BE6Du); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BE6D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BE6F
 * Original: 0x0048BE6F - 0x0048BE79 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BDF0 and 0x0048BE79)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BE6F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BE6F: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x0048BE77u); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BE77: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BE79
 * Original: 0x0048BE79 - 0x0048BE83 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BE79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BE79: ;
    eax = 0x589AE0;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BE83
 * Original: 0x0048BE83 - 0x0048BE8B (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048BE79 and 0x0048BED5)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BE83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BE83: ;
    ecx = MEM32(ebp + -40);
    g_seh_ebp = ebp; sub_00502625(); return; /* tail jmp 0x00502625 */

}

/**
 * sub_0048BE8B
 * Original: 0x0048BE8B - 0x0048BE96 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048BE79 and 0x0048BED5)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BE8B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BE8B: ;
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005006C1(); return; /* tail jmp 0x005006C1 */

}

/**
 * sub_0048BE96
 * Original: 0x0048BE96 - 0x0048BEA1 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048BE79 and 0x0048BED5)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BE96(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BE96: ;
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005011C9(); return; /* tail jmp 0x005011C9 */

}

/**
 * sub_0048BEA1
 * Original: 0x0048BEA1 - 0x0048BEAC (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048BE79 and 0x0048BED5)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BEA1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BEA1: ;
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005011C9(); return; /* tail jmp 0x005011C9 */

}

/**
 * sub_0048BEAC
 * Original: 0x0048BEAC - 0x0048BEB7 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048BE79 and 0x0048BED5)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BEAC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BEAC: ;
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005011C9(); return; /* tail jmp 0x005011C9 */

}

/**
 * sub_0048BEB7
 * Original: 0x0048BEB7 - 0x0048BEC1 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BE79 and 0x0048BED5)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BEB7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BEB7: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x0048BEBFu); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BEBF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BEC1
 * Original: 0x0048BEC1 - 0x0048BECB (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BE79 and 0x0048BED5)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BEC1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BEC1: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x0048BEC9u); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BEC9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BECB
 * Original: 0x0048BECB - 0x0048BED5 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BE79 and 0x0048BED5)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BECB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BECB: ;
    PUSH32(esp, MEM32(ebp + -44));
    PUSH32(esp, 0x0048BED3u); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BED3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BED5
 * Original: 0x0048BED5 - 0x0048BEDF (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BED5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BED5: ;
    eax = 0x589B3C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BEDF
 * Original: 0x0048BEDF - 0x0048BEE7 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048BED5 and 0x0048BEFF)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BEDF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BEDF: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_005031D4(); return; /* tail jmp 0x005031D4 */

}

/**
 * sub_0048BEE7
 * Original: 0x0048BEE7 - 0x0048BEFF (24 bytes, 5 insns)
 * Folder: compiler (between: 0x0048BED5 and 0x0048BEFF)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BEE7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BEE7: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x88;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005006DE(); return; /* tail jmp 0x005006DE */

    eax = 0x589B68;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BEFF
 * Original: 0x0048BEFF - 0x0048BF07 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BEFF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BEFF: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

}

/**
 * sub_0048BF07
 * Original: 0x0048BF07 - 0x0048BF19 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BEFF and 0x0048BF2B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BF07(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BF07: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

    eax = 0x589B94;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BF19
 * Original: 0x0048BF19 - 0x0048BF2B (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BEFF and 0x0048BF2B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BF19(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BF19: ;
    ecx = ebp + 0x14;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

    eax = 0x589BB8;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BF2B
 * Original: 0x0048BF2B - 0x0048BF33 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BF2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BF2B: ;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_005006DE(); return; /* tail jmp 0x005006DE */

}

/**
 * sub_0048BF33
 * Original: 0x0048BF33 - 0x0048BF45 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BF2B and 0x0048BF7F)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BF33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BF33: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_005006E9(); return; /* tail jmp 0x005006E9 */

    eax = 0x589BE4;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BF45
 * Original: 0x0048BF45 - 0x0048BF57 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BF2B and 0x0048BF7F)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BF45(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BF45: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

    eax = 0x589C08;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BF57
 * Original: 0x0048BF57 - 0x0048BF61 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BF2B and 0x0048BF7F)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BF57(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BF57: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x0048BF5Fu); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BF5F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BF61
 * Original: 0x0048BF61 - 0x0048BF6B (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BF2B and 0x0048BF7F)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BF61(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BF61: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x0048BF69u); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BF69: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BF6B
 * Original: 0x0048BF6B - 0x0048BF75 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BF2B and 0x0048BF7F)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BF6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BF6B: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x0048BF73u); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BF73: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BF75
 * Original: 0x0048BF75 - 0x0048BF7F (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BF2B and 0x0048BF7F)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BF75(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BF75: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x0048BF7Du); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BF7D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BF7F
 * Original: 0x0048BF7F - 0x0048BF89 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BF7F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BF7F: ;
    eax = 0x589C78;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BF89
 * Original: 0x0048BF89 - 0x0048BF91 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BF89(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BF89: ;
    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_005006DE(); return; /* tail jmp 0x005006DE */

}

/**
 * sub_0048BF91
 * Original: 0x0048BF91 - 0x0048BF99 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BF91(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BF91: ;
    ecx = ebp + -100;
    g_seh_ebp = ebp; sub_005006DE(); return; /* tail jmp 0x005006DE */

}

/**
 * sub_0048BF99
 * Original: 0x0048BF99 - 0x0048BFA1 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BF99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BF99: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_005006C1(); return; /* tail jmp 0x005006C1 */

}

/**
 * sub_0048BFA1
 * Original: 0x0048BFA1 - 0x0048BFA9 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BFA1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BFA1: ;
    ecx = ebp + -84;
    g_seh_ebp = ebp; sub_005006C1(); return; /* tail jmp 0x005006C1 */

}

/**
 * sub_0048BFA9
 * Original: 0x0048BFA9 - 0x0048BFB1 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BFA9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BFA9: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_005006B6(); return; /* tail jmp 0x005006B6 */

}

/**
 * sub_0048BFB1
 * Original: 0x0048BFB1 - 0x0048BFBB (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BFA9 and 0x0048BFBB)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BFB1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BFB1: ;
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, 0x0048BFB9u); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BFB9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BFBB
 * Original: 0x0048BFBB - 0x0048BFC5 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BFBB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BFBB: ;
    eax = 0x589CC4;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BFC5
 * Original: 0x0048BFC5 - 0x0048BFCD (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048BFBB and 0x0048C00E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BFC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BFC5: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00511BA6(); return; /* tail jmp 0x00511BA6 */

}

/**
 * sub_0048BFCD
 * Original: 0x0048BFCD - 0x0048BFD8 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048BFBB and 0x0048C00E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BFCD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BFCD: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00511B19(); return; /* tail jmp 0x00511B19 */

}

/**
 * sub_0048BFD8
 * Original: 0x0048BFD8 - 0x0048BFE3 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048BFBB and 0x0048C00E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BFD8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BFD8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00511B19(); return; /* tail jmp 0x00511B19 */

}

/**
 * sub_0048BFE3
 * Original: 0x0048BFE3 - 0x0048BFEE (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048BFBB and 0x0048C00E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BFE3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BFE3: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00511B19(); return; /* tail jmp 0x00511B19 */

}

/**
 * sub_0048BFEE
 * Original: 0x0048BFEE - 0x0048BFF9 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048BFBB and 0x0048C00E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BFEE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BFEE: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00511B19(); return; /* tail jmp 0x00511B19 */

}

/**
 * sub_0048BFF9
 * Original: 0x0048BFF9 - 0x0048C00E (21 bytes, 5 insns)
 * Folder: compiler (between: 0x0048BFBB and 0x0048C00E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BFF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BFF9: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00511B19(); return; /* tail jmp 0x00511B19 */

    eax = 0x589D10;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C00E
 * Original: 0x0048C00E - 0x0048C016 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C00E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C00E: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_004FA173(); return; /* tail jmp 0x004FA173 */

}

/**
 * sub_0048C016
 * Original: 0x0048C016 - 0x0048C028 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048C00E and 0x0048C0C2)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C016(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C016: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_004FA173(); return; /* tail jmp 0x004FA173 */

    eax = 0x589D3C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C028
 * Original: 0x0048C028 - 0x0048C033 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048C00E and 0x0048C0C2)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C028(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C028: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004FA173(); return; /* tail jmp 0x004FA173 */

}

/**
 * sub_0048C033
 * Original: 0x0048C033 - 0x0048C048 (21 bytes, 5 insns)
 * Folder: compiler (between: 0x0048C00E and 0x0048C0C2)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C033(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C033: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004FA173(); return; /* tail jmp 0x004FA173 */

    eax = 0x589D68;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C048
 * Original: 0x0048C048 - 0x0048C053 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048C00E and 0x0048C0C2)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C048(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C048: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004FA173(); return; /* tail jmp 0x004FA173 */

}

/**
 * sub_0048C053
 * Original: 0x0048C053 - 0x0048C05E (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048C00E and 0x0048C0C2)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C053(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C053: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004FA173(); return; /* tail jmp 0x004FA173 */

}

/**
 * sub_0048C05E
 * Original: 0x0048C05E - 0x0048C074 (22 bytes, 8 insns)
 * Folder: compiler (between: 0x0048C00E and 0x0048C0C2)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C05E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C05E: ;
    PUSH32(esp, 0x50F5B6);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x4C);
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048C073u); RECOMP_ABI_CALL(0x004801C5u, sub_004801C5); /* call 0x004801C5 */

loc_0048C073: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048C074
 * Original: 0x0048C074 - 0x0048C08C (24 bytes, 5 insns)
 * Folder: compiler (between: 0x0048C00E and 0x0048C0C2)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C074(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C074: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x54C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x54C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0050FCE2(); return; /* tail jmp 0x0050FCE2 */

    eax = 0x589DA4;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C08C
 * Original: 0x0048C08C - 0x0048C09E (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048C00E and 0x0048C0C2)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C08C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C08C: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_0050FCE2(); return; /* tail jmp 0x0050FCE2 */

    eax = 0x589DC8;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C09E
 * Original: 0x0048C09E - 0x0048C0B0 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048C00E and 0x0048C0C2)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C09E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C09E: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_004FA173(); return; /* tail jmp 0x004FA173 */

    eax = 0x589DEC;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C0B0
 * Original: 0x0048C0B0 - 0x0048C0C2 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048C00E and 0x0048C0C2)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C0B0: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_0050FCE2(); return; /* tail jmp 0x0050FCE2 */

    eax = 0x589E10;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C0C2
 * Original: 0x0048C0C2 - 0x0048C0CA (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C0C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C0C2: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_004FA173(); return; /* tail jmp 0x004FA173 */

}

/**
 * sub_0048C0CA
 * Original: 0x0048C0CA - 0x0048C0DC (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048C0C2 and 0x0048C0DC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C0CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C0CA: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_004FA173(); return; /* tail jmp 0x004FA173 */

    eax = 0x589E3C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C0DC
 * Original: 0x0048C0DC - 0x0048C0E4 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C0DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C0DC: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_004FA173(); return; /* tail jmp 0x004FA173 */

}

/**
 * sub_0048C0E4
 * Original: 0x0048C0E4 - 0x0048C0F6 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048C0DC and 0x0048C124)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C0E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C0E4: ;
    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_004FA173(); return; /* tail jmp 0x004FA173 */

    eax = 0x589E68;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C0F6
 * Original: 0x0048C0F6 - 0x0048C108 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048C0DC and 0x0048C124)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C0F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C0F6: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_0050FCE2(); return; /* tail jmp 0x0050FCE2 */

    eax = 0x589E8C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C108
 * Original: 0x0048C108 - 0x0048C11A (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048C0DC and 0x0048C124)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C108(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C108: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_004FA173(); return; /* tail jmp 0x004FA173 */

    eax = 0x589EB0;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C11A
 * Original: 0x0048C11A - 0x0048C124 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048C0DC and 0x0048C124)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C11A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C11A: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x0048C122u); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048C122: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C124
 * Original: 0x0048C124 - 0x0048C12E (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C124(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C124: ;
    eax = 0x589ED4;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C12E
 * Original: 0x0048C12E - 0x0048C138 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048C124 and 0x0048C138)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C12E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C12E: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0x0048C136u); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048C136: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C138
 * Original: 0x0048C138 - 0x0048C142 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C138(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C138: ;
    eax = 0x589EF8;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C142
 * Original: 0x0048C142 - 0x0048C14A (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C142(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C142: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_005119F2(); return; /* tail jmp 0x005119F2 */

}

/**
 * sub_0048C14A
 * Original: 0x0048C14A - 0x0048C152 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C14A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C14A: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_005117C1(); return; /* tail jmp 0x005117C1 */

}

/**
 * sub_0048C152
 * Original: 0x0048C152 - 0x0048C15A (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C152(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C152: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_005117C1(); return; /* tail jmp 0x005117C1 */

}

/**
 * sub_0048C15A
 * Original: 0x0048C15A - 0x0048C170 (22 bytes, 8 insns)
 * Folder: compiler (between: 0x0048C152 and 0x0048C1D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C15A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C15A: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_005117C1(); return; /* tail jmp 0x005117C1 */

    eax = 0x589F34;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048C170
 * Original: 0x0048C170 - 0x0048C17D (13 bytes, 3 insns)
 * Folder: compiler (between: 0x0048C152 and 0x0048C1D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C170: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x2E24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2E24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000B8FA0(); return; /* tail jmp 0x000B8FA0 */

}

/**
 * sub_0048C190
 * Original: 0x0048C190 - 0x0048C198 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C152 and 0x0048C1D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C190: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_0002A7C0(); return; /* tail jmp 0x0002A7C0 */

}

/**
 * sub_0048C1B0
 * Original: 0x0048C1B0 - 0x0048C1BB (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048C152 and 0x0048C1D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C1B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C1B0: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048C1B9u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048C1B9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C1BB
 * Original: 0x0048C1BB - 0x0048C1D0 (21 bytes, 7 insns)
 * Folder: compiler (between: 0x0048C152 and 0x0048C1D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C1BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C1BB: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0002A7C0(); return; /* tail jmp 0x0002A7C0 */

    eax = 0x58A15C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048C1D0
 * Original: 0x0048C1D0 - 0x0048C1DA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C1D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C1D0: ;
    eax = 0x58A1E0;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C1E0
 * Original: 0x0048C1E0 - 0x0048C1EB (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C1D0 and 0x0048C276)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C1E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C1E0: ;
    eax = ebp + -2100;
    g_seh_ebp = ebp; sub_000B5310(); return; /* tail jmp 0x000B5310 */

}

/**
 * sub_0048C1EB
 * Original: 0x0048C1EB - 0x0048C200 (21 bytes, 4 insns)
 * Folder: compiler (between: 0x0048C1D0 and 0x0048C276)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C1EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C1EB: ;
    eax = ebp + -2104;
    g_seh_ebp = ebp; sub_000B8F90(); return; /* tail jmp 0x000B8F90 */

    eax = 0x58A20C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C200
 * Original: 0x0048C200 - 0x0048C20B (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C1D0 and 0x0048C276)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C200: ;
    eax = ebp + -544;
    g_seh_ebp = ebp; sub_000B5310(); return; /* tail jmp 0x000B5310 */

}

/**
 * sub_0048C20B
 * Original: 0x0048C20B - 0x0048C216 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C1D0 and 0x0048C276)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C20B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C20B: ;
    eax = ebp + -536;
    g_seh_ebp = ebp; sub_000B6F80(); return; /* tail jmp 0x000B6F80 */

}

/**
 * sub_0048C216
 * Original: 0x0048C216 - 0x0048C230 (26 bytes, 9 insns)
 * Folder: compiler (between: 0x0048C1D0 and 0x0048C276)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C216(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C216: ;
    eax = ebp + -548;
    g_seh_ebp = ebp; sub_000B6F80(); return; /* tail jmp 0x000B6F80 */

    eax = 0x58A240;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048C230
 * Original: 0x0048C230 - 0x0048C23B (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C1D0 and 0x0048C276)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C230: ;
    eax = ebp + -532;
    g_seh_ebp = ebp; sub_000B5310(); return; /* tail jmp 0x000B5310 */

}

/**
 * sub_0048C23B
 * Original: 0x0048C23B - 0x0048C246 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C1D0 and 0x0048C276)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C23B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C23B: ;
    eax = ebp + -528;
    g_seh_ebp = ebp; sub_000B5AC0(); return; /* tail jmp 0x000B5AC0 */

}

/**
 * sub_0048C246
 * Original: 0x0048C246 - 0x0048C260 (26 bytes, 9 insns)
 * Folder: compiler (between: 0x0048C1D0 and 0x0048C276)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C246(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C246: ;
    eax = ebp + -536;
    g_seh_ebp = ebp; sub_000B6F60(); return; /* tail jmp 0x000B6F60 */

    eax = 0x58A274;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048C260
 * Original: 0x0048C260 - 0x0048C26B (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048C1D0 and 0x0048C276)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C260: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048C269u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048C269: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C26B
 * Original: 0x0048C26B - 0x0048C276 (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048C1D0 and 0x0048C276)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C26B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C26B: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048C274u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048C274: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C276
 * Original: 0x0048C276 - 0x0048C280 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C276(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C276: ;
    eax = 0x58A2A0;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C280
 * Original: 0x0048C280 - 0x0048C28B (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048C276 and 0x0048C300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C280: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x7C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000CF200(); return; /* tail jmp 0x000CF200 */

}

/**
 * sub_0048C28B
 * Original: 0x0048C28B - 0x0048C299 (14 bytes, 3 insns)
 * Folder: compiler (between: 0x0048C276 and 0x0048C300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C28B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C28B: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x8C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000316D0(); return; /* tail jmp 0x000316D0 */

}

/**
 * sub_0048C299
 * Original: 0x0048C299 - 0x0048C2A7 (14 bytes, 3 insns)
 * Folder: compiler (between: 0x0048C276 and 0x0048C300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C299(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C299: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000316D0(); return; /* tail jmp 0x000316D0 */

}

/**
 * sub_0048C2A7
 * Original: 0x0048C2A7 - 0x0048C2B5 (14 bytes, 3 insns)
 * Folder: compiler (between: 0x0048C276 and 0x0048C300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C2A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C2A7: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x94;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000316D0(); return; /* tail jmp 0x000316D0 */

}

/**
 * sub_0048C2B5
 * Original: 0x0048C2B5 - 0x0048C2C3 (14 bytes, 3 insns)
 * Folder: compiler (between: 0x0048C276 and 0x0048C300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C2B5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C2B5: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x98;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000316D0(); return; /* tail jmp 0x000316D0 */

}

/**
 * sub_0048C2C3
 * Original: 0x0048C2C3 - 0x0048C2E0 (29 bytes, 10 insns)
 * Folder: compiler (between: 0x0048C276 and 0x0048C300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C2C3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C2C3: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x9C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000CF200(); return; /* tail jmp 0x000CF200 */

    eax = 0x58A2EC;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048C2E0
 * Original: 0x0048C2E0 - 0x0048C2E8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C276 and 0x0048C300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C2E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C2E0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0047E0CA(); return; /* tail jmp 0x0047E0CA */

}

/**
 * sub_0048C300
 * Original: 0x0048C300 - 0x0048C30A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C300: ;
    eax = 0x58A394;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C310
 * Original: 0x0048C310 - 0x0048C318 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C300 and 0x0048C346)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C310: ;
    eax = ebp + -24;
    g_seh_ebp = ebp; sub_000BE440(); return; /* tail jmp 0x000BE440 */

}

/**
 * sub_0048C330
 * Original: 0x0048C330 - 0x0048C338 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C300 and 0x0048C346)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C330: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_000B5310(); return; /* tail jmp 0x000B5310 */

}

/**
 * sub_0048C338
 * Original: 0x0048C338 - 0x0048C346 (14 bytes, 4 insns)
 * Folder: compiler (between: 0x0048C300 and 0x0048C346)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C338(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048C338: ;
    eax = MEM32(0x959644);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x959644) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0048C346
 * Original: 0x0048C346 - 0x0048C350 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C346(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C346: ;
    eax = 0x58A3E4;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C350
 * Original: 0x0048C350 - 0x0048C358 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C346 and 0x0048C3E1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C350: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000B8820(); return; /* tail jmp 0x000B8820 */

}

/**
 * sub_0048C358
 * Original: 0x0048C358 - 0x0048C370 (24 bytes, 8 insns)
 * Folder: compiler (between: 0x0048C346 and 0x0048C3E1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C358(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C358: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000B8850(); return; /* tail jmp 0x000B8850 */

    eax = 0x58A410;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048C370
 * Original: 0x0048C370 - 0x0048C37B (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C346 and 0x0048C3E1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C370: ;
    eax = ebp + -5152;
    g_seh_ebp = ebp; sub_000B5310(); return; /* tail jmp 0x000B5310 */

}

/**
 * sub_0048C37B
 * Original: 0x0048C37B - 0x0048C386 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C346 and 0x0048C3E1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C37B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C37B: ;
    eax = ebp + -5148;
    g_seh_ebp = ebp; sub_000B5AC0(); return; /* tail jmp 0x000B5AC0 */

}

/**
 * sub_0048C386
 * Original: 0x0048C386 - 0x0048C391 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C346 and 0x0048C3E1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C386(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C386: ;
    eax = ebp + -5156;
    g_seh_ebp = ebp; sub_000B6F60(); return; /* tail jmp 0x000B6F60 */

}

/**
 * sub_0048C391
 * Original: 0x0048C391 - 0x0048C3B0 (31 bytes, 14 insns)
 * Folder: compiler (between: 0x0048C346 and 0x0048C3E1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C391(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C391: ;
    eax = ebp + -5156;
    g_seh_ebp = ebp; sub_000B6F60(); return; /* tail jmp 0x000B6F60 */

    eax = 0x58A44C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

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
 * sub_0048C3B0
 * Original: 0x0048C3B0 - 0x0048C3B8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C346 and 0x0048C3E1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C3B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C3B0: ;
    eax = ebp + 4;
    g_seh_ebp = ebp; sub_000B5310(); return; /* tail jmp 0x000B5310 */

}

/**
 * sub_0048C3D0
 * Original: 0x0048C3D0 - 0x0048C3E1 (17 bytes, 7 insns)
 * Folder: compiler (between: 0x0048C346 and 0x0048C3E1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C3D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C3D0: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0048C3DDu); RECOMP_ABI_CALL(0x0008CE90u, sub_0008CE90); /* call 0x0008CE90 */

loc_0048C3DD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0048C3E1
 * Original: 0x0048C3E1 - 0x0048C3EB (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C3E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C3E1: ;
    eax = 0x58A4C8;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C3F0
 * Original: 0x0048C3F0 - 0x0048C401 (17 bytes, 7 insns)
 * Folder: compiler (between: 0x0048C3E1 and 0x0048C401)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C3F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C3F0: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0048C3FDu); RECOMP_ABI_CALL(0x0008CE90u, sub_0008CE90); /* call 0x0008CE90 */

loc_0048C3FD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0048C401
 * Original: 0x0048C401 - 0x0048C40B (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C401(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C401: ;
    eax = 0x58A520;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C410
 * Original: 0x0048C410 - 0x0048C421 (17 bytes, 7 insns)
 * Folder: compiler (between: 0x0048C401 and 0x0048C421)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C410: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0048C41Du); RECOMP_ABI_CALL(0x0008CE90u, sub_0008CE90); /* call 0x0008CE90 */

loc_0048C41D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0048C421
 * Original: 0x0048C421 - 0x0048C42B (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C421(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C421: ;
    eax = 0x58A578;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C430
 * Original: 0x0048C430 - 0x0048C438 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C421 and 0x0048C481)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C430: ;
    esi = ebp + -52;
    g_seh_ebp = ebp; sub_0002C0B0(); return; /* tail jmp 0x0002C0B0 */

}

/**
 * sub_0048C450
 * Original: 0x0048C450 - 0x0048C458 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C421 and 0x0048C481)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C450: ;
    esi = ebp + 0xC;
    g_seh_ebp = ebp; sub_0002C0B0(); return; /* tail jmp 0x0002C0B0 */

}

/**
 * sub_0048C470
 * Original: 0x0048C470 - 0x0048C481 (17 bytes, 7 insns)
 * Folder: compiler (between: 0x0048C421 and 0x0048C481)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C470: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0048C47Du); RECOMP_ABI_CALL(0x0008CE90u, sub_0008CE90); /* call 0x0008CE90 */

loc_0048C47D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0048C481
 * Original: 0x0048C481 - 0x0048C48B (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C481(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C481: ;
    eax = 0x58A618;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C490
 * Original: 0x0048C490 - 0x0048C49B (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048C481 and 0x0048C4C1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C490: ;
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048C49B
 * Original: 0x0048C49B - 0x0048C4B0 (21 bytes, 5 insns)
 * Folder: compiler (between: 0x0048C481 and 0x0048C4C1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C49B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C49B: ;
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

    eax = 0x58A644;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C4B0
 * Original: 0x0048C4B0 - 0x0048C4C1 (17 bytes, 7 insns)
 * Folder: compiler (between: 0x0048C481 and 0x0048C4C1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C4B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C4B0: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0048C4BDu); RECOMP_ABI_CALL(0x0008CE90u, sub_0008CE90); /* call 0x0008CE90 */

loc_0048C4BD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0048C4C1
 * Original: 0x0048C4C1 - 0x0048C4CB (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C4C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C4C1: ;
    eax = 0x58A69C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C4D0
 * Original: 0x0048C4D0 - 0x0048C4D8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C4C1 and 0x0048C4F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C4D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C4D0: ;
    esi = ebp + -44;
    g_seh_ebp = ebp; sub_00017C50(); return; /* tail jmp 0x00017C50 */

}

/**
 * sub_0048C4F0
 * Original: 0x0048C4F0 - 0x0048C4F8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C4F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C4F0: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048C4F8
 * Original: 0x0048C4F8 - 0x0048C503 (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048C4F0 and 0x0048C520)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C4F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C4F8: ;
    eax = MEM32(ebp + -76);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048C501u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048C501: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048C503
 * Original: 0x0048C503 - 0x0048C520 (29 bytes, 15 insns)
 * Folder: compiler (between: 0x0048C4F0 and 0x0048C520)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C503(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C503: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x58A6F4;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

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
 * sub_0048C520
 * Original: 0x0048C520 - 0x0048C52A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C520: ;
    eax = 0x58A778;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C530
 * Original: 0x0048C530 - 0x0048C53A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C530: ;
    eax = 0x58A7C8;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C540
 * Original: 0x0048C540 - 0x0048C54B (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048C530 and 0x0048C611)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C540: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000BCD60(); return; /* tail jmp 0x000BCD60 */

}

/**
 * sub_0048C560
 * Original: 0x0048C560 - 0x0048C56B (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048C530 and 0x0048C611)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C560: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000CF200(); return; /* tail jmp 0x000CF200 */

}

/**
 * sub_0048C580
 * Original: 0x0048C580 - 0x0048C58B (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048C530 and 0x0048C611)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C580: ;
    esi = MEM32(ebp + -20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000CF200(); return; /* tail jmp 0x000CF200 */

}

/**
 * sub_0048C58B
 * Original: 0x0048C58B - 0x0048C5A0 (21 bytes, 5 insns)
 * Folder: compiler (between: 0x0048C530 and 0x0048C611)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C58B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C58B: ;
    esi = MEM32(ebp + -20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000CF200(); return; /* tail jmp 0x000CF200 */

    eax = 0x58A83C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C5A0
 * Original: 0x0048C5A0 - 0x0048C5AB (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048C530 and 0x0048C611)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C5A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C5A0: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000CF200(); return; /* tail jmp 0x000CF200 */

}

/**
 * sub_0048C5AB
 * Original: 0x0048C5AB - 0x0048C5C0 (21 bytes, 5 insns)
 * Folder: compiler (between: 0x0048C530 and 0x0048C611)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C5AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C5AB: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000CF200(); return; /* tail jmp 0x000CF200 */

    eax = 0x58A868;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C5C0
 * Original: 0x0048C5C0 - 0x0048C5E0 (32 bytes, 18 insns)
 * Folder: compiler (between: 0x0048C530 and 0x0048C611)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C5C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C5C0: ;
    eax = ebp + -100;
    g_seh_ebp = ebp; sub_000BE440(); return; /* tail jmp 0x000BE440 */

    eax = 0x58A88C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

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
 * sub_0048C5E0
 * Original: 0x0048C5E0 - 0x0048C5E8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C530 and 0x0048C611)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C5E0: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000BCDC0(); return; /* tail jmp 0x000BCDC0 */

}

/**
 * sub_0048C600
 * Original: 0x0048C600 - 0x0048C611 (17 bytes, 7 insns)
 * Folder: compiler (between: 0x0048C530 and 0x0048C611)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C600: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0048C60Du); RECOMP_ABI_CALL(0x0008CE90u, sub_0008CE90); /* call 0x0008CE90 */

loc_0048C60D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0048C611
 * Original: 0x0048C611 - 0x0048C61B (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C611(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C611: ;
    eax = 0x58A908;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C620
 * Original: 0x0048C620 - 0x0048C62B (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048C611 and 0x0048C640)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C620: ;
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048C640
 * Original: 0x0048C640 - 0x0048C648 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C640: ;
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048C660
 * Original: 0x0048C660 - 0x0048C668 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C660: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048C668
 * Original: 0x0048C668 - 0x0048C670 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C668(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C668: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048C670
 * Original: 0x0048C670 - 0x0048C678 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C670: ;
    ecx = ebp + -100;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048C678
 * Original: 0x0048C678 - 0x0048C683 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C678(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C678: ;
    ecx = ebp + -156;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048C683
 * Original: 0x0048C683 - 0x0048C6A0 (29 bytes, 15 insns)
 * Folder: compiler (between: 0x0048C678 and 0x0048C6A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C683(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C683: ;
    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x58A9FC;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

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
 * sub_0048C6A0
 * Original: 0x0048C6A0 - 0x0048C6AB (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C6A0: ;
    ecx = ebp + -304;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048C6AB
 * Original: 0x0048C6AB - 0x0048C6C0 (21 bytes, 4 insns)
 * Folder: compiler (between: 0x0048C6A0 and 0x0048C6C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C6AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C6AB: ;
    ecx = ebp + -340;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x58AA28;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C6C0
 * Original: 0x0048C6C0 - 0x0048C6C8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C6C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C6C0: ;
    ecx = ebp + 0x24;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048C6C8
 * Original: 0x0048C6C8 - 0x0048C6E0 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x0048C6C0 and 0x0048C6E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C6C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C6C8: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x58AA54;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048C6E0
 * Original: 0x0048C6E0 - 0x0048C6E8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C6E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C6E0: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048C700
 * Original: 0x0048C700 - 0x0048C708 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C700: ;
    ecx = ebp + -108;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048C708
 * Original: 0x0048C708 - 0x0048C710 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C708(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C708: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048C710
 * Original: 0x0048C710 - 0x0048C730 (32 bytes, 18 insns)
 * Folder: compiler (between: 0x0048C708 and 0x0048C7A1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C710: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x58AAB4;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

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
 * sub_0048C730
 * Original: 0x0048C730 - 0x0048C73D (13 bytes, 3 insns)
 * Folder: compiler (between: 0x0048C708 and 0x0048C7A1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C730: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x2001C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2001C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002CCE0(); return; /* tail jmp 0x0002CCE0 */

}

/**
 * sub_0048C73D
 * Original: 0x0048C73D - 0x0048C74A (13 bytes, 3 insns)
 * Folder: compiler (between: 0x0048C708 and 0x0048C7A1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C73D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C73D: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x20028) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20028;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002CCE0(); return; /* tail jmp 0x0002CCE0 */

}

/**
 * sub_0048C74A
 * Original: 0x0048C74A - 0x0048C758 (14 bytes, 3 insns)
 * Folder: compiler (between: 0x0048C708 and 0x0048C7A1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C74A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C74A: ;
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(0x20034) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20034;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048C758
 * Original: 0x0048C758 - 0x0048C770 (24 bytes, 5 insns)
 * Folder: compiler (between: 0x0048C708 and 0x0048C7A1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C758(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C758: ;
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(0x20050) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20050;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x58B00C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C770
 * Original: 0x0048C770 - 0x0048C790 (32 bytes, 18 insns)
 * Folder: compiler (between: 0x0048C708 and 0x0048C7A1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C770: ;
    esi = ebp + 0x10;
    g_seh_ebp = ebp; sub_0002C0B0(); return; /* tail jmp 0x0002C0B0 */

    eax = 0x58AAD8;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

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
 * sub_0048C790
 * Original: 0x0048C790 - 0x0048C7A1 (17 bytes, 7 insns)
 * Folder: compiler (between: 0x0048C708 and 0x0048C7A1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C790: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0048C79Du); RECOMP_ABI_CALL(0x0008CE90u, sub_0008CE90); /* call 0x0008CE90 */

loc_0048C79D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0048C7A1
 * Original: 0x0048C7A1 - 0x0048C7AB (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C7A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C7A1: ;
    eax = 0x58AB30;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C7B0
 * Original: 0x0048C7B0 - 0x0048C7C1 (17 bytes, 7 insns)
 * Folder: compiler (between: 0x0048C7A1 and 0x0048C7C1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C7B0: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0048C7BDu); RECOMP_ABI_CALL(0x0008CE90u, sub_0008CE90); /* call 0x0008CE90 */

loc_0048C7BD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0048C7C1
 * Original: 0x0048C7C1 - 0x0048C7CB (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C7C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C7C1: ;
    eax = 0x58AB88;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C7D0
 * Original: 0x0048C7D0 - 0x0048C7DA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C7D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C7D0: ;
    eax = 0x58AC0C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C7E0
 * Original: 0x0048C7E0 - 0x0048C7EA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C7E0: ;
    eax = 0x58AC5C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C7F0
 * Original: 0x0048C7F0 - 0x0048C7FA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C7F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C7F0: ;
    eax = 0x58ACAC;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C800
 * Original: 0x0048C800 - 0x0048C80A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C800: ;
    eax = 0x58ACFC;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C810
 * Original: 0x0048C810 - 0x0048C81A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C810: ;
    eax = 0x58AD4C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C820
 * Original: 0x0048C820 - 0x0048C828 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C810 and 0x0048C8C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C820: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_0001D4C0(); return; /* tail jmp 0x0001D4C0 */

}

/**
 * sub_0048C840
 * Original: 0x0048C840 - 0x0048C84B (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048C810 and 0x0048C8C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C840: ;
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048C84B
 * Original: 0x0048C84B - 0x0048C860 (21 bytes, 5 insns)
 * Folder: compiler (between: 0x0048C810 and 0x0048C8C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C84B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C84B: ;
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

    eax = 0x58AD9C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C860
 * Original: 0x0048C860 - 0x0048C86B (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048C810 and 0x0048C8C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C860: ;
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048C86B
 * Original: 0x0048C86B - 0x0048C876 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048C810 and 0x0048C8C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C86B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C86B: ;
    ecx = MEM32(ebp + 4);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x38;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048C876
 * Original: 0x0048C876 - 0x0048C881 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048C810 and 0x0048C8C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C876(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C876: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x54;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001E010(); return; /* tail jmp 0x0001E010 */

}

/**
 * sub_0048C881
 * Original: 0x0048C881 - 0x0048C8A0 (31 bytes, 12 insns)
 * Folder: compiler (between: 0x0048C810 and 0x0048C8C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C881(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C881: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xAC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001E010(); return; /* tail jmp 0x0001E010 */

    eax = 0x58ADD8;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048C8A0
 * Original: 0x0048C8A0 - 0x0048C8A8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C810 and 0x0048C8C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C8A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C8A0: ;
    eax = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_00016C50(); return; /* tail jmp 0x00016C50 */

}

/**
 * sub_0048C8C0
 * Original: 0x0048C8C0 - 0x0048C8CB (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C8C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C8C0: ;
    ecx = ebp + -820;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048C8CB
 * Original: 0x0048C8CB - 0x0048C8D6 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C8CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C8CB: ;
    ecx = ebp + -876;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048C8D6
 * Original: 0x0048C8D6 - 0x0048C8F0 (26 bytes, 9 insns)
 * Folder: compiler (between: 0x0048C8CB and 0x0048C8F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C8D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C8D6: ;
    ecx = ebp + -848;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

    eax = 0x58AE30;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048C8F0
 * Original: 0x0048C8F0 - 0x0048C8F8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C8F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C8F0: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048C8F8
 * Original: 0x0048C8F8 - 0x0048C910 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x0048C8F0 and 0x0048C961)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C8F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C8F8: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

    eax = 0x58AE5C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048C910
 * Original: 0x0048C910 - 0x0048C918 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C8F0 and 0x0048C961)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C910: ;
    eax = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000CC0D0(); return; /* tail jmp 0x000CC0D0 */

}

/**
 * sub_0048C930
 * Original: 0x0048C930 - 0x0048C938 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C8F0 and 0x0048C961)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C930: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_000BCDC0(); return; /* tail jmp 0x000BCDC0 */

}

/**
 * sub_0048C950
 * Original: 0x0048C950 - 0x0048C961 (17 bytes, 7 insns)
 * Folder: compiler (between: 0x0048C8F0 and 0x0048C961)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C950: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0048C95Du); RECOMP_ABI_CALL(0x0008CE90u, sub_0008CE90); /* call 0x0008CE90 */

loc_0048C95D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0048C961
 * Original: 0x0048C961 - 0x0048C96B (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C961(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C961: ;
    eax = 0x58AEFC;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048C970
 * Original: 0x0048C970 - 0x0048C978 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C970: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048C990
 * Original: 0x0048C990 - 0x0048C998 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C990: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048C998
 * Original: 0x0048C998 - 0x0048C9B0 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x0048C990 and 0x0048C9B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C998(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C998: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x58AF4C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048C9B0
 * Original: 0x0048C9B0 - 0x0048C9B8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C9B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C9B0: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048C9B8
 * Original: 0x0048C9B8 - 0x0048C9D0 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x0048C9B0 and 0x0048C9F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C9B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C9B8: ;
    ecx = MEM32(ebp + -48);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x58AF78;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048C9D0
 * Original: 0x0048C9D0 - 0x0048C9D8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C9B0 and 0x0048C9F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C9D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C9D0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048C9F0
 * Original: 0x0048C9F0 - 0x0048C9F8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C9F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C9F0: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048C9F8
 * Original: 0x0048C9F8 - 0x0048CA00 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C9F0 and 0x0048CA40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048C9F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048C9F8: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048CA00
 * Original: 0x0048CA00 - 0x0048CA20 (32 bytes, 18 insns)
 * Folder: compiler (between: 0x0048C9F0 and 0x0048CA40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CA00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CA00: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x58AFD0;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

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
 * sub_0048CA20
 * Original: 0x0048CA20 - 0x0048CA28 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048C9F0 and 0x0048CA40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CA20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CA20: ;
    esi = ebp + -56;
    g_seh_ebp = ebp; sub_0002C0B0(); return; /* tail jmp 0x0002C0B0 */

}

/**
 * sub_0048CA40
 * Original: 0x0048CA40 - 0x0048CA4A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CA40: ;
    eax = 0x58B11C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048CA50
 * Original: 0x0048CA50 - 0x0048CA58 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CA50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CA50: ;
    ecx = ebp + -108;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048CA70
 * Original: 0x0048CA70 - 0x0048CA7B (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CA70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CA70: ;
    ecx = ebp + -844;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048CA7B
 * Original: 0x0048CA7B - 0x0048CA86 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CA7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CA7B: ;
    ecx = ebp + -844;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048CA86
 * Original: 0x0048CA86 - 0x0048CA91 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CA86(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CA86: ;
    ecx = ebp + -900;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048CA91
 * Original: 0x0048CA91 - 0x0048CA9C (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CA91(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CA91: ;
    ecx = ebp + -844;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048CA9C
 * Original: 0x0048CA9C - 0x0048CAC0 (36 bytes, 19 insns)
 * Folder: compiler (between: 0x0048CA91 and 0x0048CAC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CA9C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CA9C: ;
    ecx = ebp + -872;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

    eax = 0x58B184;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

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
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048CAC0
 * Original: 0x0048CAC0 - 0x0048CACB (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CAC0: ;
    ecx = ebp + -1580;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048CAE0
 * Original: 0x0048CAE0 - 0x0048CAEB (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CAE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CAE0: ;
    ecx = ebp + -1096;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048CAEB
 * Original: 0x0048CAEB - 0x0048CAF6 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CAEB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CAEB: ;
    ecx = ebp + -1096;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048CAF6
 * Original: 0x0048CAF6 - 0x0048CB01 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CAF6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CAF6: ;
    ecx = ebp + -1096;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048CB01
 * Original: 0x0048CB01 - 0x0048CB20 (31 bytes, 14 insns)
 * Folder: compiler (between: 0x0048CAF6 and 0x0048CB40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CB01(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CB01: ;
    ecx = ebp + -1068;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

    eax = 0x58B1E4;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

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
 * sub_0048CB20
 * Original: 0x0048CB20 - 0x0048CB28 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048CAF6 and 0x0048CB40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CB20: ;
    eax = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_00016C50(); return; /* tail jmp 0x00016C50 */

}

/**
 * sub_0048CB28
 * Original: 0x0048CB28 - 0x0048CB40 (24 bytes, 8 insns)
 * Folder: compiler (between: 0x0048CAF6 and 0x0048CB40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CB28(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CB28: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00016C80(); return; /* tail jmp 0x00016C80 */

    eax = 0x58B210;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048CB40
 * Original: 0x0048CB40 - 0x0048CB4B (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CB40: ;
    ecx = ebp + -336;
    g_seh_ebp = ebp; sub_000D5150(); return; /* tail jmp 0x000D5150 */

}

/**
 * sub_0048CB4B
 * Original: 0x0048CB4B - 0x0048CB61 (22 bytes, 7 insns)
 * Folder: compiler (between: 0x0048CB40 and 0x0048CB61)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CB4B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CB4B: ;
    PUSH32(esp, 0xD5150);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0xC);
    eax = ebp + -324;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048CB60u); RECOMP_ABI_CALL(0x004801C5u, sub_004801C5); /* call 0x004801C5 */

loc_0048CB60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048CB61
 * Original: 0x0048CB61 - 0x0048CB6B (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CB61(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CB61: ;
    eax = 0x58B23C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048CB70
 * Original: 0x0048CB70 - 0x0048CB78 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048CB61 and 0x0048CBAE)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CB70: ;
    esi = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000CF200(); return; /* tail jmp 0x000CF200 */

}

/**
 * sub_0048CB90
 * Original: 0x0048CB90 - 0x0048CB98 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048CB61 and 0x0048CBAE)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CB90: ;
    esi = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000CF200(); return; /* tail jmp 0x000CF200 */

}

/**
 * sub_0048CB98
 * Original: 0x0048CB98 - 0x0048CBA3 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048CB61 and 0x0048CBAE)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CB98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CB98: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000CF200(); return; /* tail jmp 0x000CF200 */

}

/**
 * sub_0048CBA3
 * Original: 0x0048CBA3 - 0x0048CBAE (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048CB61 and 0x0048CBAE)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CBA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CBA3: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000CF200(); return; /* tail jmp 0x000CF200 */

}

/**
 * sub_0048CBAE
 * Original: 0x0048CBAE - 0x0048CBD0 (34 bytes, 18 insns)
 * Folder: compiler (match: xbox-retail 0x0036888E, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CBAE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CBAE: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000CF200(); return; /* tail jmp 0x000CF200 */

    eax = 0x58B29C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

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
 * sub_0048CBD0
 * Original: 0x0048CBD0 - 0x0048CBD8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048CBAE and 0x0048CBE6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CBD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CBD0: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_000B5310(); return; /* tail jmp 0x000B5310 */

}

/**
 * sub_0048CBD8
 * Original: 0x0048CBD8 - 0x0048CBE6 (14 bytes, 4 insns)
 * Folder: compiler (between: 0x0048CBAE and 0x0048CBE6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CBD8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048CBD8: ;
    eax = MEM32(0x959B10);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x959B10) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0048CBE6
 * Original: 0x0048CBE6 - 0x0048CBF0 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CBE6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CBE6: ;
    eax = 0x58B2C8;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048CBF0
 * Original: 0x0048CBF0 - 0x0048CC01 (17 bytes, 7 insns)
 * Folder: compiler (between: 0x0048CBE6 and 0x0048CC01)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CBF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CBF0: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0048CBFDu); RECOMP_ABI_CALL(0x0008CE90u, sub_0008CE90); /* call 0x0008CE90 */

loc_0048CBFD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0048CC01
 * Original: 0x0048CC01 - 0x0048CC0B (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CC01(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CC01: ;
    eax = 0x58B320;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048CC10
 * Original: 0x0048CC10 - 0x0048CC1A (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048CC01 and 0x0048CC1A)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CC10: ;
    eax = ebp + -100;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048CC19u); RECOMP_ABI_CALL(0x0001D3E0u, sub_0001D3E0); /* call 0x0001D3E0 */

loc_0048CC19: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048CC1A
 * Original: 0x0048CC1A - 0x0048CC24 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CC1A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CC1A: ;
    eax = 0x58B3AC;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048CC30
 * Original: 0x0048CC30 - 0x0048CC3A (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048CC1A and 0x0048CC3A)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CC30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CC30: ;
    eax = ebp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048CC39u); RECOMP_ABI_CALL(0x0001D3E0u, sub_0001D3E0); /* call 0x0001D3E0 */

loc_0048CC39: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048CC3A
 * Original: 0x0048CC3A - 0x0048CC44 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CC3A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CC3A: ;
    eax = 0x58B3D0;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048CC50
 * Original: 0x0048CC50 - 0x0048CC58 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048CC3A and 0x0048CC9B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CC50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CC50: ;
    ebx = ebp + -28;
    g_seh_ebp = ebp; sub_00020940(); return; /* tail jmp 0x00020940 */

}

/**
 * sub_0048CC70
 * Original: 0x0048CC70 - 0x0048CC78 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048CC3A and 0x0048CC9B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CC70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CC70: ;
    ebx = ebp + -56;
    g_seh_ebp = ebp; sub_00020940(); return; /* tail jmp 0x00020940 */

}

/**
 * sub_0048CC78
 * Original: 0x0048CC78 - 0x0048CC90 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x0048CC3A and 0x0048CC9B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CC78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CC78: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

    eax = 0x58B420;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048CC90
 * Original: 0x0048CC90 - 0x0048CC9B (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048CC3A and 0x0048CC9B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CC90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CC90: ;
    ebx = ebp + -380;
    g_seh_ebp = ebp; sub_00020940(); return; /* tail jmp 0x00020940 */

}

/**
 * sub_0048CC9B
 * Original: 0x0048CC9B - 0x0048CCA6 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CC9B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CC9B: ;
    ecx = ebp + -240;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048CCA6
 * Original: 0x0048CCA6 - 0x0048CCAE (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CCA6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CCA6: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048CCAE
 * Original: 0x0048CCAE - 0x0048CCB9 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CCAE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CCAE: ;
    ecx = ebp + -352;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048CCB9
 * Original: 0x0048CCB9 - 0x0048CCC4 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048CCAE and 0x0048CCC4)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CCB9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CCB9: ;
    ecx = MEM32(ebp + -388);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048CCC4
 * Original: 0x0048CCC4 - 0x0048CCCF (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CCC4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CCC4: ;
    ecx = ebp + -212;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048CCCF
 * Original: 0x0048CCCF - 0x0048CCD7 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CCCF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CCCF: ;
    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048CCD7
 * Original: 0x0048CCD7 - 0x0048CCE2 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CCD7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CCD7: ;
    ecx = ebp + -184;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048CCE2
 * Original: 0x0048CCE2 - 0x0048CCEA (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CCE2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CCE2: ;
    ecx = ebp + -100;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048CCEA
 * Original: 0x0048CCEA - 0x0048CCF2 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CCEA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CCEA: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048CCF2
 * Original: 0x0048CCF2 - 0x0048CCFD (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CCF2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CCF2: ;
    ecx = ebp + -156;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048CCFD
 * Original: 0x0048CCFD - 0x0048CD08 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CCFD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CCFD: ;
    ecx = ebp + -268;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048CD08
 * Original: 0x0048CD08 - 0x0048CD13 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CD08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CD08: ;
    ecx = ebp + -296;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048CD13
 * Original: 0x0048CD13 - 0x0048CD1E (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CD13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CD13: ;
    ecx = ebp + -324;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048CD1E
 * Original: 0x0048CD1E - 0x0048CD40 (34 bytes, 17 insns)
 * Folder: compiler (between: 0x0048CD13 and 0x0048CD4B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CD1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CD1E: ;
    ecx = MEM32(ebp + -388);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x58B4B8;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

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
 * sub_0048CD40
 * Original: 0x0048CD40 - 0x0048CD4B (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048CD13 and 0x0048CD4B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CD40: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048CD49u); RECOMP_ABI_CALL(0x000BCE00u, sub_000BCE00); /* call 0x000BCE00 */

loc_0048CD49: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048CD4B
 * Original: 0x0048CD4B - 0x0048CD55 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CD4B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CD4B: ;
    eax = 0x58B4DC;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048CD60
 * Original: 0x0048CD60 - 0x0048CD68 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048CD4B and 0x0048CD76)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CD60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CD60: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_000B5310(); return; /* tail jmp 0x000B5310 */

}

/**
 * sub_0048CD68
 * Original: 0x0048CD68 - 0x0048CD76 (14 bytes, 4 insns)
 * Folder: compiler (between: 0x0048CD4B and 0x0048CD76)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CD68(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048CD68: ;
    eax = MEM32(0x959B3C);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x959B3C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0048CD76
 * Original: 0x0048CD76 - 0x0048CD80 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CD76(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CD76: ;
    eax = 0x58B508;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048CD90
 * Original: 0x0048CD90 - 0x0048CD9A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CD90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CD90: ;
    eax = 0x58B58C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048CDA0
 * Original: 0x0048CDA0 - 0x0048CDAA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CDA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CDA0: ;
    eax = 0x58B610;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048CDB0
 * Original: 0x0048CDB0 - 0x0048CDB8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048CDA0 and 0x0048CE2F)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CDB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CDB0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00042CA0(); return; /* tail jmp 0x00042CA0 */

}

/**
 * sub_0048CDD0
 * Original: 0x0048CDD0 - 0x0048CDD8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048CDA0 and 0x0048CE2F)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CDD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CDD0: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_00042CA0(); return; /* tail jmp 0x00042CA0 */

}

/**
 * sub_0048CDF0
 * Original: 0x0048CDF0 - 0x0048CDF8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048CDA0 and 0x0048CE2F)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CDF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CDF0: ;
    esi = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_00041380(); return; /* tail jmp 0x00041380 */

}

/**
 * sub_0048CDF8
 * Original: 0x0048CDF8 - 0x0048CE03 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048CDA0 and 0x0048CE2F)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048CDF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048CDF8: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00041380(); return; /* tail jmp 0x00041380 */

}
