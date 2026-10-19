/**
 * PoP SoT xbox-demo - compiler, chunk 0
 * Compiler-generated C++ exception unwinding and global set-up (.text$x, .text$yc/yd)
 * Functions: 250 (0x00296220 - 0x00297090)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_00296220
 * Original: 0x00296220 - 0x00296228 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296220: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000172D0(); return; /* tail jmp 0x000172D0 */

}

/**
 * sub_00296232
 * Original: 0x00296232 - 0x0029623A (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296232(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296232: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_002D0FAA(); return; /* tail jmp 0x002D0FAA */

}

/**
 * sub_0029623A
 * Original: 0x0029623A - 0x0029624F (21 bytes, 4 insns)
 * Folder: compiler (between: 0x00296232 and 0x0029624F)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029623A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029623A: ;
    ecx = ebp + -1056;
    g_seh_ebp = ebp; sub_002DFFB6(); return; /* tail jmp 0x002DFFB6 */

    eax = 0x334398;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029624F
 * Original: 0x0029624F - 0x00296257 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029624F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029624F: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_00296257
 * Original: 0x00296257 - 0x0029625F (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296257(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296257: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_0029625F
 * Original: 0x0029625F - 0x00296271 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00296257 and 0x00296283)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029625F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029625F: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x334400;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296271
 * Original: 0x00296271 - 0x00296283 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00296257 and 0x00296283)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296271(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296271: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x334424;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296283
 * Original: 0x00296283 - 0x0029628B (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296283(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296283: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

}

/**
 * sub_0029628B
 * Original: 0x0029628B - 0x00296293 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029628B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029628B: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

}

/**
 * sub_00296293
 * Original: 0x00296293 - 0x002962A5 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0029628B and 0x002962C9)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296293(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296293: ;
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

    eax = 0x334458;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002962A5
 * Original: 0x002962A5 - 0x002962B7 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0029628B and 0x002962C9)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002962A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002962A5: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x33447C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002962B7
 * Original: 0x002962B7 - 0x002962C9 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0029628B and 0x002962C9)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002962B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002962B7: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x3344A0;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002962C9
 * Original: 0x002962C9 - 0x002962D1 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002962C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002962C9: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_002962D1
 * Original: 0x002962D1 - 0x002962E3 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x002962C9 and 0x00296300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002962D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002962D1: ;
    ecx = ebp + 0x10;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x334898;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002962E3
 * Original: 0x002962E3 - 0x002962EB (8 bytes, 2 insns)
 * Folder: compiler (between: 0x002962C9 and 0x00296300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002962E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002962E3: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_002D6DFF(); return; /* tail jmp 0x002D6DFF */

}

/**
 * sub_002962EB
 * Original: 0x002962EB - 0x00296300 (21 bytes, 5 insns)
 * Folder: compiler (between: 0x002962C9 and 0x00296300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002962EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002962EB: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

    eax = 0x33472C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296300
 * Original: 0x00296300 - 0x00296308 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296300: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_00296308
 * Original: 0x00296308 - 0x00296310 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296300 and 0x00296325)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296308(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296308: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_002D6DFF(); return; /* tail jmp 0x002D6DFF */

}

/**
 * sub_00296310
 * Original: 0x00296310 - 0x0029631B (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296300 and 0x00296325)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296310: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D4E94(); return; /* tail jmp 0x002D4E94 */

}

/**
 * sub_0029631B
 * Original: 0x0029631B - 0x00296325 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00296300 and 0x00296325)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029631B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029631B: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x00296323u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_00296323: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296325
 * Original: 0x00296325 - 0x0029632F (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296325(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296325: ;
    eax = 0x3344DC;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029632F
 * Original: 0x0029632F - 0x00296339 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00296325 and 0x00296339)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029632F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029632F: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x00296337u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_00296337: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296339
 * Original: 0x00296339 - 0x00296343 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296339(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296339: ;
    eax = 0x334500;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296343
 * Original: 0x00296343 - 0x00296355 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00296339 and 0x002963B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296343(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296343: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_002D4EBC(); return; /* tail jmp 0x002D4EBC */

    eax = 0x334524;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296355
 * Original: 0x00296355 - 0x0029635D (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296339 and 0x002963B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296355(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296355: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_002D6DFF(); return; /* tail jmp 0x002D6DFF */

}

/**
 * sub_0029635D
 * Original: 0x0029635D - 0x00296368 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296339 and 0x002963B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029635D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029635D: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_00296368
 * Original: 0x00296368 - 0x00296373 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296339 and 0x002963B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296368(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296368: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_00296373
 * Original: 0x00296373 - 0x00296388 (21 bytes, 5 insns)
 * Folder: compiler (between: 0x00296339 and 0x002963B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296373(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296373: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x334560;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296388
 * Original: 0x00296388 - 0x00296392 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00296339 and 0x002963B0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296388(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296388: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x00296390u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_00296390: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296392
 * Original: 0x00296392 - 0x0029639C (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00296339 and 0x002963B0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296392(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296392: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x0029639Au); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_0029639A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0029639C
 * Original: 0x0029639C - 0x002963A6 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00296339 and 0x002963B0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029639C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029639C: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x002963A4u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002963A4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002963A6
 * Original: 0x002963A6 - 0x002963B0 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00296339 and 0x002963B0)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002963A6: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x002963AEu); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002963AE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002963B0
 * Original: 0x002963B0 - 0x002963BA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002963B0: ;
    eax = 0x33459C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002963BA
 * Original: 0x002963BA - 0x002963C4 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x002963B0 and 0x00296400)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002963BA: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x002963C2u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002963C2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002963C4
 * Original: 0x002963C4 - 0x002963CE (10 bytes, 4 insns)
 * Folder: compiler (between: 0x002963B0 and 0x00296400)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002963C4: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x002963CCu); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002963CC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002963CE
 * Original: 0x002963CE - 0x002963D8 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x002963B0 and 0x00296400)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002963CE: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x002963D6u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002963D6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002963D8
 * Original: 0x002963D8 - 0x002963E2 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x002963B0 and 0x00296400)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002963D8: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x002963E0u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002963E0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002963E2
 * Original: 0x002963E2 - 0x002963EC (10 bytes, 4 insns)
 * Folder: compiler (between: 0x002963B0 and 0x00296400)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002963E2: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x002963EAu); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002963EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002963EC
 * Original: 0x002963EC - 0x002963F6 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x002963B0 and 0x00296400)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002963EC: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x002963F4u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002963F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002963F6
 * Original: 0x002963F6 - 0x00296400 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x002963B0 and 0x00296400)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002963F6: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x002963FEu); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002963FE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296400
 * Original: 0x00296400 - 0x0029640A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296400: ;
    eax = 0x3345F0;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029640A
 * Original: 0x0029640A - 0x00296412 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029640A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029640A: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

}

/**
 * sub_00296412
 * Original: 0x00296412 - 0x0029641A (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296412(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296412: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_0029641A
 * Original: 0x0029641A - 0x0029642C (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00296412 and 0x002964F3)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029641A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029641A: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x334624;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029642C
 * Original: 0x0029642C - 0x00296434 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296412 and 0x002964F3)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029642C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029642C: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_002D6DFF(); return; /* tail jmp 0x002D6DFF */

}

/**
 * sub_00296434
 * Original: 0x00296434 - 0x0029643F (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296412 and 0x002964F3)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296434(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296434: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D4E9F(); return; /* tail jmp 0x002D4E9F */

}

/**
 * sub_0029643F
 * Original: 0x0029643F - 0x0029644A (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296412 and 0x002964F3)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029643F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029643F: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D59C2(); return; /* tail jmp 0x002D59C2 */

}

/**
 * sub_0029644A
 * Original: 0x0029644A - 0x00296455 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296412 and 0x002964F3)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029644A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029644A: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D59C2(); return; /* tail jmp 0x002D59C2 */

}

/**
 * sub_00296455
 * Original: 0x00296455 - 0x0029646A (21 bytes, 5 insns)
 * Folder: compiler (between: 0x00296412 and 0x002964F3)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296455(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296455: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D59C2(); return; /* tail jmp 0x002D59C2 */

    eax = 0x334668;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029646A
 * Original: 0x0029646A - 0x0029647C (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00296412 and 0x002964F3)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029646A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029646A: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_002D79AE(); return; /* tail jmp 0x002D79AE */

    eax = 0x33468C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029647C
 * Original: 0x0029647C - 0x00296484 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296412 and 0x002964F3)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029647C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029647C: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_002D6DFF(); return; /* tail jmp 0x002D6DFF */

}

/**
 * sub_00296484
 * Original: 0x00296484 - 0x00296499 (21 bytes, 5 insns)
 * Folder: compiler (between: 0x00296412 and 0x002964F3)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296484(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296484: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D4E94(); return; /* tail jmp 0x002D4E94 */

    eax = 0x3346B8;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296499
 * Original: 0x00296499 - 0x002964AB (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00296412 and 0x002964F3)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296499(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296499: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x3346DC;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002964AB
 * Original: 0x002964AB - 0x002964BD (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00296412 and 0x002964F3)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002964AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002964AB: ;
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x334700;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002964BD
 * Original: 0x002964BD - 0x002964CF (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00296412 and 0x002964F3)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002964BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002964BD: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

    eax = 0x334760;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002964CF
 * Original: 0x002964CF - 0x002964E1 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00296412 and 0x002964F3)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002964CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002964CF: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x334784;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002964E1
 * Original: 0x002964E1 - 0x002964F3 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00296412 and 0x002964F3)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002964E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002964E1: ;
    ecx = ebp + 0x1C;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x3347A8;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002964F3
 * Original: 0x002964F3 - 0x002964FE (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002964F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002964F3: ;
    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

}

/**
 * sub_002964FE
 * Original: 0x002964FE - 0x00296509 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002964FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002964FE: ;
    ecx = ebp + -200;
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

}

/**
 * sub_00296509
 * Original: 0x00296509 - 0x00296511 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296509(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296509: ;
    ecx = ebp + -76;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_00296511
 * Original: 0x00296511 - 0x00296519 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296511(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296511: ;
    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_00296519
 * Original: 0x00296519 - 0x00296521 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296519(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296519: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_00296521
 * Original: 0x00296521 - 0x00296529 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296521(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296521: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

}

/**
 * sub_00296529
 * Original: 0x00296529 - 0x00296531 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296529(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296529: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_00296531
 * Original: 0x00296531 - 0x00296539 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296531(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296531: ;
    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_00296539
 * Original: 0x00296539 - 0x0029654B (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00296531 and 0x00296564)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296539(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296539: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

    eax = 0x33480C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029654B
 * Original: 0x0029654B - 0x00296564 (25 bytes, 7 insns)
 * Folder: compiler (between: 0x00296531 and 0x00296564)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029654B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029654B: ;
    eax = MEM32(ebp + -16);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00296563; /* je: equal / zero */

loc_00296557: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

loc_00296563: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296564
 * Original: 0x00296564 - 0x0029656E (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296564(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296564: ;
    eax = 0x334830;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029656E
 * Original: 0x0029656E - 0x00296576 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029656E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029656E: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_00296576
 * Original: 0x00296576 - 0x0029657E (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296576(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296576: ;
    ecx = ebp + 0x10;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_0029657E
 * Original: 0x0029657E - 0x00296586 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029657E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029657E: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_002D4EBC(); return; /* tail jmp 0x002D4EBC */

}

/**
 * sub_00296586
 * Original: 0x00296586 - 0x00296598 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0029657E and 0x00296607)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296586(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296586: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

    eax = 0x33486C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296598
 * Original: 0x00296598 - 0x002965A0 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0029657E and 0x00296607)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296598(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296598: ;
    ecx = MEM32(ebp + -24);
    g_seh_ebp = ebp; sub_002D6DFF(); return; /* tail jmp 0x002D6DFF */

}

/**
 * sub_002965A0
 * Original: 0x002965A0 - 0x002965AB (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0029657E and 0x00296607)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002965A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002965A0: ;
    ecx = MEM32(ebp + -24);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_002965AB
 * Original: 0x002965AB - 0x002965B6 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0029657E and 0x00296607)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002965AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002965AB: ;
    ecx = MEM32(ebp + -24);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_002965B6
 * Original: 0x002965B6 - 0x002965C1 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0029657E and 0x00296607)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002965B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002965B6: ;
    ecx = MEM32(ebp + -24);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_002965C1
 * Original: 0x002965C1 - 0x002965CB (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0029657E and 0x00296607)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002965C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002965C1: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x002965C9u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002965C9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002965CB
 * Original: 0x002965CB - 0x002965D5 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0029657E and 0x00296607)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002965CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002965CB: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x002965D3u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002965D3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002965D5
 * Original: 0x002965D5 - 0x002965DF (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0029657E and 0x00296607)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002965D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002965D5: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x002965DDu); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002965DD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002965DF
 * Original: 0x002965DF - 0x002965E9 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0029657E and 0x00296607)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002965DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002965DF: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x002965E7u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002965E7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002965E9
 * Original: 0x002965E9 - 0x002965F3 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0029657E and 0x00296607)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002965E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002965E9: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x002965F1u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002965F1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002965F3
 * Original: 0x002965F3 - 0x002965FD (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0029657E and 0x00296607)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002965F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002965F3: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x002965FBu); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002965FB: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002965FD
 * Original: 0x002965FD - 0x00296607 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0029657E and 0x00296607)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002965FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002965FD: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x00296605u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_00296605: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296607
 * Original: 0x00296607 - 0x00296611 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296607(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296607: ;
    eax = 0x33490C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296611
 * Original: 0x00296611 - 0x00296619 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296607 and 0x00296663)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296611(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296611: ;
    ecx = MEM32(ebp + -40);
    g_seh_ebp = ebp; sub_002D6DFF(); return; /* tail jmp 0x002D6DFF */

}

/**
 * sub_00296619
 * Original: 0x00296619 - 0x00296624 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296607 and 0x00296663)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296619(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296619: ;
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D4E9F(); return; /* tail jmp 0x002D4E9F */

}

/**
 * sub_00296624
 * Original: 0x00296624 - 0x0029662F (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296607 and 0x00296663)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296624(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296624: ;
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D59C2(); return; /* tail jmp 0x002D59C2 */

}

/**
 * sub_0029662F
 * Original: 0x0029662F - 0x0029663A (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296607 and 0x00296663)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029662F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029662F: ;
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D59C2(); return; /* tail jmp 0x002D59C2 */

}

/**
 * sub_0029663A
 * Original: 0x0029663A - 0x00296645 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296607 and 0x00296663)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029663A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029663A: ;
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D59C2(); return; /* tail jmp 0x002D59C2 */

}

/**
 * sub_00296645
 * Original: 0x00296645 - 0x0029664F (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00296607 and 0x00296663)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296645(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296645: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x0029664Du); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_0029664D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0029664F
 * Original: 0x0029664F - 0x00296659 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00296607 and 0x00296663)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029664F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029664F: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x00296657u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_00296657: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296659
 * Original: 0x00296659 - 0x00296663 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00296607 and 0x00296663)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296659(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296659: ;
    PUSH32(esp, MEM32(ebp + -44));
    PUSH32(esp, 0x00296661u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_00296661: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296663
 * Original: 0x00296663 - 0x0029666D (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296663(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296663: ;
    eax = 0x334968;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029666D
 * Original: 0x0029666D - 0x00296675 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296663 and 0x0029668D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029666D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029666D: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_002D79AE(); return; /* tail jmp 0x002D79AE */

}

/**
 * sub_00296675
 * Original: 0x00296675 - 0x0029668D (24 bytes, 5 insns)
 * Folder: compiler (between: 0x00296663 and 0x0029668D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296675(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296675: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x88;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D4EBC(); return; /* tail jmp 0x002D4EBC */

    eax = 0x334994;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029668D
 * Original: 0x0029668D - 0x00296695 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029668D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029668D: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_00296695
 * Original: 0x00296695 - 0x002966A7 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0029668D and 0x002966B9)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296695(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296695: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x3349C0;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002966A7
 * Original: 0x002966A7 - 0x002966B9 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0029668D and 0x002966B9)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002966A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002966A7: ;
    ecx = ebp + 0x14;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x3349E4;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002966B9
 * Original: 0x002966B9 - 0x002966C1 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002966B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002966B9: ;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_002D4EBC(); return; /* tail jmp 0x002D4EBC */

}

/**
 * sub_002966C1
 * Original: 0x002966C1 - 0x002966D3 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x002966B9 and 0x0029670D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002966C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002966C1: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_002D4EC7(); return; /* tail jmp 0x002D4EC7 */

    eax = 0x334A10;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002966D3
 * Original: 0x002966D3 - 0x002966E5 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x002966B9 and 0x0029670D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002966D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002966D3: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x334A34;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002966E5
 * Original: 0x002966E5 - 0x002966EF (10 bytes, 4 insns)
 * Folder: compiler (between: 0x002966B9 and 0x0029670D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002966E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002966E5: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x002966EDu); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002966ED: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002966EF
 * Original: 0x002966EF - 0x002966F9 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x002966B9 and 0x0029670D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002966EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002966EF: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x002966F7u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002966F7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002966F9
 * Original: 0x002966F9 - 0x00296703 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x002966B9 and 0x0029670D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002966F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002966F9: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x00296701u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_00296701: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296703
 * Original: 0x00296703 - 0x0029670D (10 bytes, 4 insns)
 * Folder: compiler (between: 0x002966B9 and 0x0029670D)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296703(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296703: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x0029670Bu); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_0029670B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0029670D
 * Original: 0x0029670D - 0x00296717 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029670D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029670D: ;
    eax = 0x334AA4;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296717
 * Original: 0x00296717 - 0x0029671F (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296717(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296717: ;
    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_002D4EBC(); return; /* tail jmp 0x002D4EBC */

}

/**
 * sub_0029671F
 * Original: 0x0029671F - 0x00296727 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029671F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029671F: ;
    ecx = ebp + -100;
    g_seh_ebp = ebp; sub_002D4EBC(); return; /* tail jmp 0x002D4EBC */

}

/**
 * sub_00296727
 * Original: 0x00296727 - 0x0029672F (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296727(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296727: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_002D4E9F(); return; /* tail jmp 0x002D4E9F */

}

/**
 * sub_0029672F
 * Original: 0x0029672F - 0x00296737 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029672F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029672F: ;
    ecx = ebp + -84;
    g_seh_ebp = ebp; sub_002D4E9F(); return; /* tail jmp 0x002D4E9F */

}

/**
 * sub_00296737
 * Original: 0x00296737 - 0x0029673F (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296737(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296737: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_002D4E94(); return; /* tail jmp 0x002D4E94 */

}

/**
 * sub_0029673F
 * Original: 0x0029673F - 0x00296749 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x00296737 and 0x00296749)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029673F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029673F: ;
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, 0x00296747u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_00296747: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296749
 * Original: 0x00296749 - 0x00296753 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296749(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296749: ;
    eax = 0x334AF0;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296753
 * Original: 0x00296753 - 0x0029675B (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296749 and 0x0029679C)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296753(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296753: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_002E6380(); return; /* tail jmp 0x002E6380 */

}

/**
 * sub_0029675B
 * Original: 0x0029675B - 0x00296766 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296749 and 0x0029679C)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029675B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029675B: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002E62F3(); return; /* tail jmp 0x002E62F3 */

}

/**
 * sub_00296766
 * Original: 0x00296766 - 0x00296771 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296749 and 0x0029679C)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296766(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296766: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002E62F3(); return; /* tail jmp 0x002E62F3 */

}

/**
 * sub_00296771
 * Original: 0x00296771 - 0x0029677C (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296749 and 0x0029679C)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296771(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296771: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002E62F3(); return; /* tail jmp 0x002E62F3 */

}

/**
 * sub_0029677C
 * Original: 0x0029677C - 0x00296787 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296749 and 0x0029679C)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029677C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029677C: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002E62F3(); return; /* tail jmp 0x002E62F3 */

}

/**
 * sub_00296787
 * Original: 0x00296787 - 0x0029679C (21 bytes, 5 insns)
 * Folder: compiler (between: 0x00296749 and 0x0029679C)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296787(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296787: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002E62F3(); return; /* tail jmp 0x002E62F3 */

    eax = 0x334B3C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029679C
 * Original: 0x0029679C - 0x002967A4 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029679C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029679C: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

}

/**
 * sub_002967A4
 * Original: 0x002967A4 - 0x002967B6 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0029679C and 0x00296850)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002967A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002967A4: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

    eax = 0x334B68;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002967B6
 * Original: 0x002967B6 - 0x002967C1 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0029679C and 0x00296850)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002967B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002967B6: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

}

/**
 * sub_002967C1
 * Original: 0x002967C1 - 0x002967D6 (21 bytes, 5 insns)
 * Folder: compiler (between: 0x0029679C and 0x00296850)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002967C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002967C1: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

    eax = 0x334B94;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002967D6
 * Original: 0x002967D6 - 0x002967E1 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0029679C and 0x00296850)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002967D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002967D6: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

}

/**
 * sub_002967E1
 * Original: 0x002967E1 - 0x002967EC (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0029679C and 0x00296850)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002967E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002967E1: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

}

/**
 * sub_002967EC
 * Original: 0x002967EC - 0x00296802 (22 bytes, 8 insns)
 * Folder: compiler (between: 0x0029679C and 0x00296850)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002967EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002967EC: ;
    PUSH32(esp, 0x2E3D7A);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x4C);
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00296801u); RECOMP_ABI_CALL(0x0028B4E6u, sub_0028B4E6); /* call 0x0028B4E6 */

loc_00296801: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296802
 * Original: 0x00296802 - 0x0029681A (24 bytes, 5 insns)
 * Folder: compiler (between: 0x0029679C and 0x00296850)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296802(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296802: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x54C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x54C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002E44A6(); return; /* tail jmp 0x002E44A6 */

    eax = 0x334BD0;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029681A
 * Original: 0x0029681A - 0x0029682C (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0029679C and 0x00296850)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029681A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029681A: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_002E44A6(); return; /* tail jmp 0x002E44A6 */

    eax = 0x334BF4;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029682C
 * Original: 0x0029682C - 0x0029683E (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0029679C and 0x00296850)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029682C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029682C: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

    eax = 0x334C18;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029683E
 * Original: 0x0029683E - 0x00296850 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0029679C and 0x00296850)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029683E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029683E: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_002E44A6(); return; /* tail jmp 0x002E44A6 */

    eax = 0x334C3C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296850
 * Original: 0x00296850 - 0x00296858 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296850: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

}

/**
 * sub_00296858
 * Original: 0x00296858 - 0x0029686A (18 bytes, 4 insns)
 * Folder: compiler (between: 0x00296850 and 0x0029686A)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296858(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296858: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

    eax = 0x334C68;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029686A
 * Original: 0x0029686A - 0x00296872 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029686A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029686A: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

}

/**
 * sub_00296872
 * Original: 0x00296872 - 0x00296884 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0029686A and 0x002968B2)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296872(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296872: ;
    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

    eax = 0x334C94;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296884
 * Original: 0x00296884 - 0x00296896 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0029686A and 0x002968B2)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296884(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296884: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_002E44A6(); return; /* tail jmp 0x002E44A6 */

    eax = 0x334CB8;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296896
 * Original: 0x00296896 - 0x002968A8 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0029686A and 0x002968B2)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296896(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296896: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

    eax = 0x334CDC;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002968A8
 * Original: 0x002968A8 - 0x002968B2 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0029686A and 0x002968B2)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002968A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002968A8: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x002968B0u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002968B0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002968B2
 * Original: 0x002968B2 - 0x002968BC (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002968B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002968B2: ;
    eax = 0x334D00;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002968BC
 * Original: 0x002968BC - 0x002968C6 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x002968B2 and 0x002968C6)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002968BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002968BC: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0x002968C4u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002968C4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002968C6
 * Original: 0x002968C6 - 0x002968D0 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002968C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002968C6: ;
    eax = 0x334D24;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002968D0
 * Original: 0x002968D0 - 0x002968D8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002968D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002968D0: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_002E61CC(); return; /* tail jmp 0x002E61CC */

}

/**
 * sub_002968D8
 * Original: 0x002968D8 - 0x002968E0 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002968D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002968D8: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_002E5F88(); return; /* tail jmp 0x002E5F88 */

}

/**
 * sub_002968E0
 * Original: 0x002968E0 - 0x002968E8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002968E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002968E0: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_002E5F88(); return; /* tail jmp 0x002E5F88 */

}

/**
 * sub_002968E8
 * Original: 0x002968E8 - 0x00296900 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x002968E0 and 0x002969A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002968E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002968E8: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_002E5F88(); return; /* tail jmp 0x002E5F88 */

    eax = 0x334D60;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00296900
 * Original: 0x00296900 - 0x00296908 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x002968E0 and 0x002969A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296900: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00277040(); return; /* tail jmp 0x00277040 */

}

/**
 * sub_00296920
 * Original: 0x00296920 - 0x0029692D (13 bytes, 3 insns)
 * Folder: compiler (between: 0x002968E0 and 0x002969A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296920: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x2E24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2E24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00276E70(); return; /* tail jmp 0x00276E70 */

}

/**
 * sub_00296940
 * Original: 0x00296940 - 0x00296948 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x002968E0 and 0x002969A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296940: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000DA260(); return; /* tail jmp 0x000DA260 */

}

/**
 * sub_00296960
 * Original: 0x00296960 - 0x00296968 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x002968E0 and 0x002969A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296960: ;
    eax = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_000D4800(); return; /* tail jmp 0x000D4800 */

}

/**
 * sub_00296980
 * Original: 0x00296980 - 0x00296988 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x002968E0 and 0x002969A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296980: ;
    eax = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000D8020(); return; /* tail jmp 0x000D8020 */

}

/**
 * sub_002969A0
 * Original: 0x002969A0 - 0x002969AA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002969A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002969A0: ;
    eax = 0x33504C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002969B0
 * Original: 0x002969B0 - 0x002969B8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x002969A0 and 0x00296A46)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002969B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002969B0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0028B331(); return; /* tail jmp 0x0028B331 */

}

/**
 * sub_002969D0
 * Original: 0x002969D0 - 0x002969D8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x002969A0 and 0x00296A46)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002969D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002969D0: ;
    eax = ebp + 4;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_002969F0
 * Original: 0x002969F0 - 0x002969FB (11 bytes, 2 insns)
 * Folder: compiler (between: 0x002969A0 and 0x00296A46)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002969F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002969F0: ;
    eax = ebp + -2100;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_002969FB
 * Original: 0x002969FB - 0x00296A10 (21 bytes, 4 insns)
 * Folder: compiler (between: 0x002969A0 and 0x00296A46)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002969FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002969FB: ;
    eax = ebp + -2104;
    g_seh_ebp = ebp; sub_00276E60(); return; /* tail jmp 0x00276E60 */

    eax = 0x3350C0;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296A10
 * Original: 0x00296A10 - 0x00296A1B (11 bytes, 2 insns)
 * Folder: compiler (between: 0x002969A0 and 0x00296A46)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296A10: ;
    eax = ebp + -2064;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296A1B
 * Original: 0x00296A1B - 0x00296A30 (21 bytes, 4 insns)
 * Folder: compiler (between: 0x002969A0 and 0x00296A46)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296A1B: ;
    eax = ebp + -2068;
    g_seh_ebp = ebp; sub_00276E60(); return; /* tail jmp 0x00276E60 */

    eax = 0x3350EC;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296A30
 * Original: 0x00296A30 - 0x00296A38 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x002969A0 and 0x00296A46)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296A30: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296A38
 * Original: 0x00296A38 - 0x00296A46 (14 bytes, 4 insns)
 * Folder: compiler (between: 0x002969A0 and 0x00296A46)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A38(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00296A38: ;
    eax = MEM32(0x653ACC);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x653ACC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00296A46
 * Original: 0x00296A46 - 0x00296A50 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296A46: ;
    eax = 0x335118;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296A50
 * Original: 0x00296A50 - 0x00296A58 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296A46 and 0x00296AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296A50: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_00276580(); return; /* tail jmp 0x00276580 */

}

/**
 * sub_00296A58
 * Original: 0x00296A58 - 0x00296A70 (24 bytes, 8 insns)
 * Folder: compiler (between: 0x00296A46 and 0x00296AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296A58: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002765B0(); return; /* tail jmp 0x002765B0 */

    eax = 0x335168;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00296A70
 * Original: 0x00296A70 - 0x00296A7B (11 bytes, 2 insns)
 * Folder: compiler (between: 0x00296A46 and 0x00296AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296A70: ;
    eax = ebp + -544;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296A7B
 * Original: 0x00296A7B - 0x00296A86 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x00296A46 and 0x00296AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296A7B: ;
    eax = ebp + -536;
    g_seh_ebp = ebp; sub_00012600(); return; /* tail jmp 0x00012600 */

}

/**
 * sub_00296A86
 * Original: 0x00296A86 - 0x00296AA0 (26 bytes, 9 insns)
 * Folder: compiler (between: 0x00296A46 and 0x00296AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A86(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296A86: ;
    eax = ebp + -548;
    g_seh_ebp = ebp; sub_00012600(); return; /* tail jmp 0x00012600 */

    eax = 0x33519C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00296AA0
 * Original: 0x00296AA0 - 0x00296AAB (11 bytes, 2 insns)
 * Folder: compiler (between: 0x00296A46 and 0x00296AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296AA0: ;
    eax = ebp + -532;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296AAB
 * Original: 0x00296AAB - 0x00296AB6 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x00296A46 and 0x00296AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296AAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296AAB: ;
    eax = ebp + -528;
    g_seh_ebp = ebp; sub_000BE070(); return; /* tail jmp 0x000BE070 */

}

/**
 * sub_00296AB6
 * Original: 0x00296AB6 - 0x00296AD0 (26 bytes, 9 insns)
 * Folder: compiler (between: 0x00296A46 and 0x00296AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296AB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296AB6: ;
    eax = ebp + -536;
    g_seh_ebp = ebp; sub_000BE250(); return; /* tail jmp 0x000BE250 */

    eax = 0x3351D0;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00296AD0
 * Original: 0x00296AD0 - 0x00296AD8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296A46 and 0x00296AF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296AD0: ;
    eax = ebp + -24;
    g_seh_ebp = ebp; sub_000F33A0(); return; /* tail jmp 0x000F33A0 */

}

/**
 * sub_00296AF0
 * Original: 0x00296AF0 - 0x00296AFA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296AF0: ;
    eax = 0x335278;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296B00
 * Original: 0x00296B00 - 0x00296B08 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296AF0 and 0x00296BA6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296B00: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_0027EDE0(); return; /* tail jmp 0x0027EDE0 */

}

/**
 * sub_00296B20
 * Original: 0x00296B20 - 0x00296B28 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296AF0 and 0x00296BA6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296B20: ;
    eax = ebp + 8;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296B40
 * Original: 0x00296B40 - 0x00296B48 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296AF0 and 0x00296BA6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296B40: ;
    esi = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000F0EF0(); return; /* tail jmp 0x000F0EF0 */

}

/**
 * sub_00296B48
 * Original: 0x00296B48 - 0x00296B53 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296AF0 and 0x00296BA6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296B48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296B48: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000F0EF0(); return; /* tail jmp 0x000F0EF0 */

}

/**
 * sub_00296B53
 * Original: 0x00296B53 - 0x00296B63 (16 bytes, 4 insns)
 * Folder: compiler (between: 0x00296AF0 and 0x00296BA6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296B53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296B53: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000F0EF0(); return; /* tail jmp 0x000F0EF0 */

    eax = 0x3352F4;

    g_seh_ebp = ebp; sub_00296B63(); return; /* fallthrough 0x00296B63 */

}

/**
 * sub_00296B63
 * Original: 0x00296B63 - 0x00296B70 (13 bytes, 9 insns)
 * Folder: compiler (between: 0x00296AF0 and 0x00296BA6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296B63(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296B63: ;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

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
 * sub_00296B70
 * Original: 0x00296B70 - 0x00296B78 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296AF0 and 0x00296BA6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296B70: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_0027EDE0(); return; /* tail jmp 0x0027EDE0 */

}

/**
 * sub_00296B90
 * Original: 0x00296B90 - 0x00296B98 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296AF0 and 0x00296BA6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296B90: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296B98
 * Original: 0x00296B98 - 0x00296BA6 (14 bytes, 4 insns)
 * Folder: compiler (between: 0x00296AF0 and 0x00296BA6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296B98(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00296B98: ;
    eax = MEM32(0x654200);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x654200) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00296BA6
 * Original: 0x00296BA6 - 0x00296BB0 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296BA6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296BA6: ;
    eax = 0x335344;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296BB0
 * Original: 0x00296BB0 - 0x00296BBB (11 bytes, 2 insns)
 * Folder: compiler (between: 0x00296BA6 and 0x00296BF6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296BB0: ;
    eax = ebp + -5152;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296BBB
 * Original: 0x00296BBB - 0x00296BC6 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x00296BA6 and 0x00296BF6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296BBB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296BBB: ;
    eax = ebp + -5148;
    g_seh_ebp = ebp; sub_000BE070(); return; /* tail jmp 0x000BE070 */

}

/**
 * sub_00296BC6
 * Original: 0x00296BC6 - 0x00296BE0 (26 bytes, 9 insns)
 * Folder: compiler (between: 0x00296BA6 and 0x00296BF6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296BC6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296BC6: ;
    eax = ebp + -5156;
    g_seh_ebp = ebp; sub_000BE250(); return; /* tail jmp 0x000BE250 */

    eax = 0x335378;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00296BE0
 * Original: 0x00296BE0 - 0x00296BE8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296BA6 and 0x00296BF6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296BE0: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296BE8
 * Original: 0x00296BE8 - 0x00296BF6 (14 bytes, 4 insns)
 * Folder: compiler (between: 0x00296BA6 and 0x00296BF6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296BE8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00296BE8: ;
    eax = MEM32(0x654288);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x654288) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00296BF6
 * Original: 0x00296BF6 - 0x00296C00 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296BF6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296BF6: ;
    eax = 0x3353A4;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296C00
 * Original: 0x00296C00 - 0x00296C0B (11 bytes, 5 insns)
 * Folder: compiler (between: 0x00296BF6 and 0x00296C0B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296C00: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00296C09u); RECOMP_ABI_CALL(0x00272C40u, sub_00272C40); /* call 0x00272C40 */

loc_00296C09: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296C0B
 * Original: 0x00296C0B - 0x00296C15 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296C0B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296C0B: ;
    eax = 0x3353C8;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296C20
 * Original: 0x00296C20 - 0x00296C28 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296C0B and 0x00296C36)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296C20: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296C28
 * Original: 0x00296C28 - 0x00296C36 (14 bytes, 4 insns)
 * Folder: compiler (between: 0x00296C0B and 0x00296C36)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296C28(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00296C28: ;
    eax = MEM32(0x6542C0);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x6542C0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00296C36
 * Original: 0x00296C36 - 0x00296C40 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296C36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296C36: ;
    eax = 0x3353F4;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296C40
 * Original: 0x00296C40 - 0x00296C60 (32 bytes, 18 insns)
 * Folder: compiler (between: 0x00296C36 and 0x00296C8B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296C40: ;
    eax = ebp + 0x10;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

    eax = 0x335418;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

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
 * sub_00296C60
 * Original: 0x00296C60 - 0x00296C68 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296C36 and 0x00296C8B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296C60: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_00277040(); return; /* tail jmp 0x00277040 */

}

/**
 * sub_00296C80
 * Original: 0x00296C80 - 0x00296C8B (11 bytes, 5 insns)
 * Folder: compiler (between: 0x00296C36 and 0x00296C8B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296C80: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00296C89u); RECOMP_ABI_CALL(0x00272C40u, sub_00272C40); /* call 0x00272C40 */

loc_00296C89: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296C8B
 * Original: 0x00296C8B - 0x00296C95 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296C8B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296C8B: ;
    eax = 0x335460;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296CA0
 * Original: 0x00296CA0 - 0x00296CA8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296C8B and 0x00296CB6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296CA0: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296CA8
 * Original: 0x00296CA8 - 0x00296CB6 (14 bytes, 4 insns)
 * Folder: compiler (between: 0x00296C8B and 0x00296CB6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296CA8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00296CA8: ;
    eax = MEM32(0x6542F0);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x6542F0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00296CB6
 * Original: 0x00296CB6 - 0x00296CC0 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296CB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296CB6: ;
    eax = 0x33548C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296CC0
 * Original: 0x00296CC0 - 0x00296CC8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296CB6 and 0x00296CD6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296CC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296CC0: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296CC8
 * Original: 0x00296CC8 - 0x00296CD6 (14 bytes, 4 insns)
 * Folder: compiler (between: 0x00296CB6 and 0x00296CD6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296CC8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00296CC8: ;
    eax = MEM32(0x6542F8);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x6542F8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00296CD6
 * Original: 0x00296CD6 - 0x00296CE0 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296CD6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296CD6: ;
    eax = 0x3354B8;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296CE0
 * Original: 0x00296CE0 - 0x00296CE8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296CD6 and 0x00296CF6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296CE0: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296CE8
 * Original: 0x00296CE8 - 0x00296CF6 (14 bytes, 4 insns)
 * Folder: compiler (between: 0x00296CD6 and 0x00296CF6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296CE8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00296CE8: ;
    eax = MEM32(0x654300);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x654300) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00296CF6
 * Original: 0x00296CF6 - 0x00296D00 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296CF6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296CF6: ;
    eax = 0x3354E4;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296D00
 * Original: 0x00296D00 - 0x00296D20 (32 bytes, 18 insns)
 * Folder: compiler (between: 0x00296CF6 and 0x00296E10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296D00: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0005FEB0(); return; /* tail jmp 0x0005FEB0 */

    eax = 0x335508;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

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
 * sub_00296D20
 * Original: 0x00296D20 - 0x00296D28 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296CF6 and 0x00296E10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296D20: ;
    eax = ebp + -32;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296D40
 * Original: 0x00296D40 - 0x00296D4B (11 bytes, 2 insns)
 * Folder: compiler (between: 0x00296CF6 and 0x00296E10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296D40: ;
    eax = ebp + -276;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296D60
 * Original: 0x00296D60 - 0x00296D68 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296CF6 and 0x00296E10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296D60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296D60: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_0005F7C0(); return; /* tail jmp 0x0005F7C0 */

}

/**
 * sub_00296D68
 * Original: 0x00296D68 - 0x00296D80 (24 bytes, 8 insns)
 * Folder: compiler (between: 0x00296CF6 and 0x00296E10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296D68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296D68: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00016A20(); return; /* tail jmp 0x00016A20 */

    eax = 0x3357B0;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00296D80
 * Original: 0x00296D80 - 0x00296D88 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296CF6 and 0x00296E10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296D80: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0005F7C0(); return; /* tail jmp 0x0005F7C0 */

}

/**
 * sub_00296DA0
 * Original: 0x00296DA0 - 0x00296DA8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296CF6 and 0x00296E10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296DA0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0005F7C0(); return; /* tail jmp 0x0005F7C0 */

}

/**
 * sub_00296DA8
 * Original: 0x00296DA8 - 0x00296DB3 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296CF6 and 0x00296E10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296DA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296DA8: ;
    esi = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00016A20(); return; /* tail jmp 0x00016A20 */

}

/**
 * sub_00296DB3
 * Original: 0x00296DB3 - 0x00296DD0 (29 bytes, 13 insns)
 * Folder: compiler (between: 0x00296CF6 and 0x00296E10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296DB3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296DB3: ;
    esi = MEM32(ebp + -16);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00016A20(); return; /* tail jmp 0x00016A20 */

    eax = 0x335584;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

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
 * sub_00296DD0
 * Original: 0x00296DD0 - 0x00296DDB (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296CF6 and 0x00296E10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296DD0: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00016A20(); return; /* tail jmp 0x00016A20 */

}

/**
 * sub_00296DF0
 * Original: 0x00296DF0 - 0x00296DF8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296CF6 and 0x00296E10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296DF0: ;
    eax = ebp + -24;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296E10
 * Original: 0x00296E10 - 0x00296E1A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296E10: ;
    eax = 0x33562C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296E20
 * Original: 0x00296E20 - 0x00296E28 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296E10 and 0x00296E60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296E20: ;
    eax = ebp + 0x14;
    g_seh_ebp = ebp; sub_00012600(); return; /* tail jmp 0x00012600 */

}

/**
 * sub_00296E40
 * Original: 0x00296E40 - 0x00296E48 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296E10 and 0x00296E60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296E40: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00273440(); return; /* tail jmp 0x00273440 */

}

/**
 * sub_00296E60
 * Original: 0x00296E60 - 0x00296E6A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296E60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296E60: ;
    eax = 0x335B9C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296E70
 * Original: 0x00296E70 - 0x00296E78 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296E60 and 0x00296E90)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296E70: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_00060FC0(); return; /* tail jmp 0x00060FC0 */

}

/**
 * sub_00296E90
 * Original: 0x00296E90 - 0x00296E9A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296E90: ;
    eax = 0x335784;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296EA0
 * Original: 0x00296EA0 - 0x00296EA8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296E90 and 0x00296EE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296EA0: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_0005FEB0(); return; /* tail jmp 0x0005FEB0 */

}

/**
 * sub_00296EC0
 * Original: 0x00296EC0 - 0x00296EC8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296E90 and 0x00296EE0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296EC0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0005E1F0(); return; /* tail jmp 0x0005E1F0 */

}

/**
 * sub_00296EE0
 * Original: 0x00296EE0 - 0x00296EEA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296EE0: ;
    eax = 0x335848;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296EF0
 * Original: 0x00296EF0 - 0x00296EF8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296EE0 and 0x00296F5B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296EF0: ;
    esi = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_00016A20(); return; /* tail jmp 0x00016A20 */

}

/**
 * sub_00296EF8
 * Original: 0x00296EF8 - 0x00296F03 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296EE0 and 0x00296F5B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296EF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296EF8: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00016A20(); return; /* tail jmp 0x00016A20 */

}

/**
 * sub_00296F03
 * Original: 0x00296F03 - 0x00296F0E (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296EE0 and 0x00296F5B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296F03(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296F03: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00016A20(); return; /* tail jmp 0x00016A20 */

}

/**
 * sub_00296F0E
 * Original: 0x00296F0E - 0x00296F19 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296EE0 and 0x00296F5B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296F0E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296F0E: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00016A20(); return; /* tail jmp 0x00016A20 */

}

/**
 * sub_00296F19
 * Original: 0x00296F19 - 0x00296F24 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296EE0 and 0x00296F5B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296F19(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296F19: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00016A20(); return; /* tail jmp 0x00016A20 */

}

/**
 * sub_00296F24
 * Original: 0x00296F24 - 0x00296F2F (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296EE0 and 0x00296F5B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296F24(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296F24: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00016A20(); return; /* tail jmp 0x00016A20 */

}

/**
 * sub_00296F2F
 * Original: 0x00296F2F - 0x00296F50 (33 bytes, 17 insns)
 * Folder: compiler (between: 0x00296EE0 and 0x00296F5B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296F2F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296F2F: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00016A20(); return; /* tail jmp 0x00016A20 */

    eax = 0x33589C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

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
 * sub_00296F50
 * Original: 0x00296F50 - 0x00296F5B (11 bytes, 5 insns)
 * Folder: compiler (between: 0x00296EE0 and 0x00296F5B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296F50: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00296F59u); RECOMP_ABI_CALL(0x0027EE20u, sub_0027EE20); /* call 0x0027EE20 */

loc_00296F59: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296F5B
 * Original: 0x00296F5B - 0x00296F65 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296F5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296F5B: ;
    eax = 0x3358C0;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296F66
 * Original: 0x00296F66 - 0x00296F70 (10 bytes, 10 insns)
 * Folder: compiler (between: 0x00296F5B and 0x00296F86)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296F66(void)
{

loc_00296F66: ;
    (void)0;
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
 * sub_00296F70
 * Original: 0x00296F70 - 0x00296F78 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296F5B and 0x00296F86)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296F70: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296F78
 * Original: 0x00296F78 - 0x00296F86 (14 bytes, 4 insns)
 * Folder: compiler (between: 0x00296F5B and 0x00296F86)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296F78(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00296F78: ;
    eax = MEM32(0x654350);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x654350) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00296F86
 * Original: 0x00296F86 - 0x00296F90 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296F86(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296F86: ;
    eax = 0x3358EC;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296F90
 * Original: 0x00296F90 - 0x00296FB0 (32 bytes, 16 insns)
 * Folder: compiler (between: 0x00296F86 and 0x00296FB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296F90: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000F8880(); return; /* tail jmp 0x000F8880 */

    eax = 0x335910;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

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
 * sub_00296FB0
 * Original: 0x00296FB0 - 0x00296FBB (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296FB0: ;
    ecx = ebp + -336;
    g_seh_ebp = ebp; sub_0027AA60(); return; /* tail jmp 0x0027AA60 */

}

/**
 * sub_00296FBB
 * Original: 0x00296FBB - 0x00296FD1 (22 bytes, 7 insns)
 * Folder: compiler (between: 0x00296FB0 and 0x00296FD1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296FBB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296FBB: ;
    PUSH32(esp, 0x27AA60);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0xC);
    eax = ebp + -324;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00296FD0u); RECOMP_ABI_CALL(0x0028B4E6u, sub_0028B4E6); /* call 0x0028B4E6 */

loc_00296FD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296FD1
 * Original: 0x00296FD1 - 0x00296FDB (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296FD1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296FD1: ;
    eax = 0x33593C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296FE0
 * Original: 0x00296FE0 - 0x00296FEB (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296FD1 and 0x00297140)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296FE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296FE0: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000F8880(); return; /* tail jmp 0x000F8880 */

}

/**
 * sub_00296FEB
 * Original: 0x00296FEB - 0x00297000 (21 bytes, 5 insns)
 * Folder: compiler (between: 0x00296FD1 and 0x00297140)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296FEB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296FEB: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00279EC0(); return; /* tail jmp 0x00279EC0 */

    eax = 0x335968;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00297000
 * Original: 0x00297000 - 0x00297008 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296FD1 and 0x00297140)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297000: ;
    eax = ebp + -20;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00297008
 * Original: 0x00297008 - 0x00297020 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x00296FD1 and 0x00297140)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297008(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297008: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

    eax = 0x335994;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00297020
 * Original: 0x00297020 - 0x00297028 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296FD1 and 0x00297140)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297020: ;
    eax = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000F8880(); return; /* tail jmp 0x000F8880 */

}

/**
 * sub_00297040
 * Original: 0x00297040 - 0x00297048 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296FD1 and 0x00297140)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297040: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_002734F0(); return; /* tail jmp 0x002734F0 */

}

/**
 * sub_00297048
 * Original: 0x00297048 - 0x00297053 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296FD1 and 0x00297140)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297048(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297048: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00275980(); return; /* tail jmp 0x00275980 */

}

/**
 * sub_00297053
 * Original: 0x00297053 - 0x00297070 (29 bytes, 13 insns)
 * Folder: compiler (between: 0x00296FD1 and 0x00297140)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297053(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297053: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00275980(); return; /* tail jmp 0x00275980 */

    eax = 0x3359EC;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

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
 * sub_00297070
 * Original: 0x00297070 - 0x00297078 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296FD1 and 0x00297140)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297070: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_002734F0(); return; /* tail jmp 0x002734F0 */

}

/**
 * sub_00297090
 * Original: 0x00297090 - 0x00297098 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296FD1 and 0x00297140)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297090: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_0005F7C0(); return; /* tail jmp 0x0005F7C0 */

}
