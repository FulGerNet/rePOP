/**
 * PoP Warrior Within Xbox retail - compiler, chunk 1
 * Compiler-generated C++ exception unwinding and global set-up (.text$x, .text$yc/yd)
 * Functions: 250 (0x0048AF30 - 0x0048BE1D)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_0048AF30
 * Original: 0x0048AF30 - 0x0048AF38 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048AF10 and 0x0048AF5B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AF30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AF30: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0045F3F0(); return; /* tail jmp 0x0045F3F0 */

}

/**
 * sub_0048AF38
 * Original: 0x0048AF38 - 0x0048AF50 (24 bytes, 8 insns)
 * Folder: compiler (between: 0x0048AF10 and 0x0048AF5B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AF38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AF38: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x588634;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048AF50
 * Original: 0x0048AF50 - 0x0048AF5B (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048AF10 and 0x0048AF5B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AF50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AF50: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048AF59u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048AF59: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048AF5B
 * Original: 0x0048AF5B - 0x0048AF65 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AF5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AF5B: ;
    eax = 0x588658;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048AF70
 * Original: 0x0048AF70 - 0x0048AF7B (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048AF5B and 0x0048AF7B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AF70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AF70: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048AF79u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048AF79: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048AF7B
 * Original: 0x0048AF7B - 0x0048AF85 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AF7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AF7B: ;
    eax = 0x58867C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048AF90
 * Original: 0x0048AF90 - 0x0048AFA6 (22 bytes, 8 insns)
 * Folder: compiler (between: 0x0048AF7B and 0x0048AFA6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AF90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AF90: ;
    PUSH32(esp, 0x45F3F0);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x10);
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048AFA5u); RECOMP_ABI_CALL(0x004801C5u, sub_004801C5); /* call 0x004801C5 */

loc_0048AFA5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048AFA6
 * Original: 0x0048AFA6 - 0x0048AFB0 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AFA6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AFA6: ;
    eax = 0x5886A0;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048AFB0
 * Original: 0x0048AFB0 - 0x0048AFC6 (22 bytes, 8 insns)
 * Folder: compiler (between: 0x0048AFA6 and 0x0048AFC6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AFB0: ;
    PUSH32(esp, 0x45F3F0);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x10);
    eax = MEM32(ebp + -32);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048AFC5u); RECOMP_ABI_CALL(0x004801C5u, sub_004801C5); /* call 0x004801C5 */

loc_0048AFC5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048AFC6
 * Original: 0x0048AFC6 - 0x0048AFD0 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AFC6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AFC6: ;
    eax = 0x5886C4;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048AFD0
 * Original: 0x0048AFD0 - 0x0048AFDB (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048AFC6 and 0x0048AFDB)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AFD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AFD0: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048AFD9u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048AFD9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048AFDB
 * Original: 0x0048AFDB - 0x0048AFE5 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AFDB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AFDB: ;
    eax = 0x5886E8;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048AFF0
 * Original: 0x0048AFF0 - 0x0048AFF8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048AFDB and 0x0048B010)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AFF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AFF0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00471070(); return; /* tail jmp 0x00471070 */

}

/**
 * sub_0048AFF8
 * Original: 0x0048AFF8 - 0x0048B010 (24 bytes, 8 insns)
 * Folder: compiler (between: 0x0048AFDB and 0x0048B010)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AFF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AFF8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x588714;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048B010
 * Original: 0x0048B010 - 0x0048B018 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B010: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B030
 * Original: 0x0048B030 - 0x0048B03A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B030: ;
    eax = 0x5887BC;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048B040
 * Original: 0x0048B040 - 0x0048B04B (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B030 and 0x0048B04B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B040: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B049u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B049: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B04B
 * Original: 0x0048B04B - 0x0048B055 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B04B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B04B: ;
    eax = 0x5887E0;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048B060
 * Original: 0x0048B060 - 0x0048B06B (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B04B and 0x0048B076)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B060: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B069u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B069: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B06B
 * Original: 0x0048B06B - 0x0048B076 (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B04B and 0x0048B076)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B06B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B06B: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B074u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B074: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B076
 * Original: 0x0048B076 - 0x0048B080 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B076(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B076: ;
    eax = 0x58880C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048B080
 * Original: 0x0048B080 - 0x0048B08B (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B076 and 0x0048B08B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B080: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B089u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B089: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B08B
 * Original: 0x0048B08B - 0x0048B095 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B08B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B08B: ;
    eax = 0x588830;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048B0A0
 * Original: 0x0048B0A0 - 0x0048B0AB (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B08B and 0x0048B0AB)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B0A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B0A0: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B0A9u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B0A9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B0AB
 * Original: 0x0048B0AB - 0x0048B0B5 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B0AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B0AB: ;
    eax = 0x588854;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048B0C0
 * Original: 0x0048B0C0 - 0x0048B0CB (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B0AB and 0x0048B0F7)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B0C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B0C0: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B0C9u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B0C9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B0CB
 * Original: 0x0048B0CB - 0x0048B0D6 (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B0AB and 0x0048B0F7)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B0CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B0CB: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B0D4u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B0D4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B0D6
 * Original: 0x0048B0D6 - 0x0048B0E1 (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B0AB and 0x0048B0F7)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B0D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B0D6: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B0DFu); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B0DF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B0E1
 * Original: 0x0048B0E1 - 0x0048B0EC (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B0AB and 0x0048B0F7)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B0E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B0E1: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B0EAu); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B0EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B0EC
 * Original: 0x0048B0EC - 0x0048B0F7 (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B0AB and 0x0048B0F7)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B0EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B0EC: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B0F5u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B0F5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B0F7
 * Original: 0x0048B0F7 - 0x0048B101 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B0F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B0F7: ;
    eax = 0x588898;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048B110
 * Original: 0x0048B110 - 0x0048B11B (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B0F7 and 0x0048B134)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B110: ;
    eax = MEM32(ebp + -44);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B119u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B119: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B11B
 * Original: 0x0048B11B - 0x0048B134 (25 bytes, 7 insns)
 * Folder: compiler (between: 0x0048B0F7 and 0x0048B134)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B11B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B11B: ;
    eax = MEM32(ebp + -48);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0048B133; /* je: equal / zero */

loc_0048B127: ;
    MEM32(ebp + -48) = MEM32(ebp + -48) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

loc_0048B133: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048B134
 * Original: 0x0048B134 - 0x0048B13E (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B134(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B134: ;
    eax = 0x5888CC;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048B140
 * Original: 0x0048B140 - 0x0048B14B (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B134 and 0x0048B18D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B140: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B149u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B149: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B14B
 * Original: 0x0048B14B - 0x0048B156 (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B134 and 0x0048B18D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B14B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B14B: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B154u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B154: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B156
 * Original: 0x0048B156 - 0x0048B161 (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B134 and 0x0048B18D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B156(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B156: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B15Fu); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B15F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B161
 * Original: 0x0048B161 - 0x0048B16C (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B134 and 0x0048B18D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B161(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B161: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B16Au); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B16A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B16C
 * Original: 0x0048B16C - 0x0048B177 (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B134 and 0x0048B18D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B16C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B16C: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B175u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B175: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B177
 * Original: 0x0048B177 - 0x0048B182 (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B134 and 0x0048B18D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B177(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B177: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B180u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B180: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B182
 * Original: 0x0048B182 - 0x0048B18D (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B134 and 0x0048B18D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B182(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B182: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B18Bu); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B18B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B18D
 * Original: 0x0048B18D - 0x0048B197 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B18D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B18D: ;
    eax = 0x588920;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048B1A0
 * Original: 0x0048B1A0 - 0x0048B1AB (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B18D and 0x0048B1CC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B1A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B1A0: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B1A9u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B1A9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B1AB
 * Original: 0x0048B1AB - 0x0048B1B6 (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B18D and 0x0048B1CC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B1AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B1AB: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B1B4u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B1B4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B1B6
 * Original: 0x0048B1B6 - 0x0048B1C1 (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B18D and 0x0048B1CC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B1B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B1B6: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B1BFu); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B1BF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B1C1
 * Original: 0x0048B1C1 - 0x0048B1CC (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B18D and 0x0048B1CC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B1C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B1C1: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B1CAu); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B1CA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B1CC
 * Original: 0x0048B1CC - 0x0048B1D6 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B1CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B1CC: ;
    eax = 0x58895C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048B1E0
 * Original: 0x0048B1E0 - 0x0048B1E8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048B1CC and 0x0048B213)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B1E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B1E0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0045F3F0(); return; /* tail jmp 0x0045F3F0 */

}

/**
 * sub_0048B200
 * Original: 0x0048B200 - 0x0048B208 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048B1CC and 0x0048B213)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B200: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_0046A7B0(); return; /* tail jmp 0x0046A7B0 */

}

/**
 * sub_0048B208
 * Original: 0x0048B208 - 0x0048B213 (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B1CC and 0x0048B213)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B208(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B208: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B211u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B211: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B213
 * Original: 0x0048B213 - 0x0048B21D (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B213(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B213: ;
    eax = 0x5889AC;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048B220
 * Original: 0x0048B220 - 0x0048B228 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B220: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B240
 * Original: 0x0048B240 - 0x0048B248 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B240: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B260
 * Original: 0x0048B260 - 0x0048B271 (17 bytes, 7 insns)
 * Folder: compiler (between: 0x0048B240 and 0x0048B271)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B260: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0048B26Du); RECOMP_ABI_CALL(0x0008CE90u, sub_0008CE90); /* call 0x0008CE90 */

loc_0048B26D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0048B271
 * Original: 0x0048B271 - 0x0048B27B (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B271(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B271: ;
    eax = 0x588A4C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048B280
 * Original: 0x0048B280 - 0x0048B288 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B280: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B288
 * Original: 0x0048B288 - 0x0048B2A0 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x0048B280 and 0x0048B330)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B288(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B288: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x588A78;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048B2A0
 * Original: 0x0048B2A0 - 0x0048B2A8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048B280 and 0x0048B330)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B2A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B2A0: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_0045F3F0(); return; /* tail jmp 0x0045F3F0 */

}

/**
 * sub_0048B2A8
 * Original: 0x0048B2A8 - 0x0048B2B3 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048B280 and 0x0048B330)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B2A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B2A8: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00471070(); return; /* tail jmp 0x00471070 */

}

/**
 * sub_0048B2B3
 * Original: 0x0048B2B3 - 0x0048B2BE (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048B280 and 0x0048B330)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B2B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B2B3: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00471070(); return; /* tail jmp 0x00471070 */

}

/**
 * sub_0048B2BE
 * Original: 0x0048B2BE - 0x0048B2C9 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048B280 and 0x0048B330)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B2BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B2BE: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00471070(); return; /* tail jmp 0x00471070 */

}

/**
 * sub_0048B2C9
 * Original: 0x0048B2C9 - 0x0048B2D4 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048B280 and 0x0048B330)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B2C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B2C9: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0046BAC0(); return; /* tail jmp 0x0046BAC0 */

}

/**
 * sub_0048B2D4
 * Original: 0x0048B2D4 - 0x0048B2F0 (28 bytes, 12 insns)
 * Folder: compiler (between: 0x0048B280 and 0x0048B330)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B2D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B2D4: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x588AC4;
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
 * sub_0048B2F0
 * Original: 0x0048B2F0 - 0x0048B2F8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048B280 and 0x0048B330)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B2F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B2F0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0045F3F0(); return; /* tail jmp 0x0045F3F0 */

}

/**
 * sub_0048B2F8
 * Original: 0x0048B2F8 - 0x0048B303 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048B280 and 0x0048B330)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B2F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B2F8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00471070(); return; /* tail jmp 0x00471070 */

}

/**
 * sub_0048B303
 * Original: 0x0048B303 - 0x0048B30E (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048B280 and 0x0048B330)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B303(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B303: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00471070(); return; /* tail jmp 0x00471070 */

}

/**
 * sub_0048B30E
 * Original: 0x0048B30E - 0x0048B319 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048B280 and 0x0048B330)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B30E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B30E: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00471070(); return; /* tail jmp 0x00471070 */

}

/**
 * sub_0048B319
 * Original: 0x0048B319 - 0x0048B330 (23 bytes, 7 insns)
 * Folder: compiler (between: 0x0048B280 and 0x0048B330)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B319(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B319: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0046BAC0(); return; /* tail jmp 0x0046BAC0 */

    eax = 0x588B08;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048B330
 * Original: 0x0048B330 - 0x0048B338 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B330: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B350
 * Original: 0x0048B350 - 0x0048B358 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B350: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B370
 * Original: 0x0048B370 - 0x0048B378 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B370: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B378
 * Original: 0x0048B378 - 0x0048B390 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x0048B370 and 0x0048B390)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B378(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B378: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x588BA8;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048B390
 * Original: 0x0048B390 - 0x0048B398 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B390: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B398
 * Original: 0x0048B398 - 0x0048B3B0 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x0048B390 and 0x0048B3D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B398(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B398: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x588B34;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048B3B0
 * Original: 0x0048B3B0 - 0x0048B3B8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048B390 and 0x0048B3D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B3B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B3B0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0046BEB0(); return; /* tail jmp 0x0046BEB0 */

}

/**
 * sub_0048B3D0
 * Original: 0x0048B3D0 - 0x0048B3D8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B3D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B3D0: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B3F0
 * Original: 0x0048B3F0 - 0x0048B3F8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B3F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B3F0: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B3F8
 * Original: 0x0048B3F8 - 0x0048B400 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B3F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B3F8: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B400
 * Original: 0x0048B400 - 0x0048B408 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B400: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B408
 * Original: 0x0048B408 - 0x0048B420 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x0048B400 and 0x0048B420)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B408(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B408: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

    eax = 0x588C2C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048B420
 * Original: 0x0048B420 - 0x0048B428 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B420: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B428
 * Original: 0x0048B428 - 0x0048B430 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B428(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B428: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048B430
 * Original: 0x0048B430 - 0x0048B450 (32 bytes, 18 insns)
 * Folder: compiler (between: 0x0048B428 and 0x0048B450)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B430: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x588C60;
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
 * sub_0048B450
 * Original: 0x0048B450 - 0x0048B458 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B450: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B470
 * Original: 0x0048B470 - 0x0048B47A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B470: ;
    eax = 0x588D00;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048B480
 * Original: 0x0048B480 - 0x0048B48B (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B480: ;
    ecx = ebp + -148;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B48B
 * Original: 0x0048B48B - 0x0048B493 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B48B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B48B: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B493
 * Original: 0x0048B493 - 0x0048B49B (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B493(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B493: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B49B
 * Original: 0x0048B49B - 0x0048B4A3 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B49B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B49B: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B4A3
 * Original: 0x0048B4A3 - 0x0048B4AB (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B4A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B4A3: ;
    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B4AB
 * Original: 0x0048B4AB - 0x0048B4B6 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B4AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B4AB: ;
    ecx = ebp + -148;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B4B6
 * Original: 0x0048B4B6 - 0x0048B4C1 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B4B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B4B6: ;
    ecx = ebp + -148;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B4C1
 * Original: 0x0048B4C1 - 0x0048B4CC (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B4C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B4C1: ;
    ecx = ebp + -148;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B4CC
 * Original: 0x0048B4CC - 0x0048B4D4 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B4CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B4CC: ;
    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B4D4
 * Original: 0x0048B4D4 - 0x0048B4DC (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B4D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B4D4: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B4DC
 * Original: 0x0048B4DC - 0x0048B4E7 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B4DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B4DC: ;
    ecx = ebp + -148;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B4E7
 * Original: 0x0048B4E7 - 0x0048B4F2 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B4E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B4E7: ;
    ecx = ebp + -148;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B4F2
 * Original: 0x0048B4F2 - 0x0048B4FA (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B4F2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B4F2: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B4FA
 * Original: 0x0048B4FA - 0x0048B502 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B4FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B4FA: ;
    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B502
 * Original: 0x0048B502 - 0x0048B520 (30 bytes, 16 insns)
 * Folder: compiler (between: 0x0048B4FA and 0x0048B520)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B502(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B502: ;
    ecx = ebp + -88;
    g_seh_ebp = ebp; sub_0046BEB0(); return; /* tail jmp 0x0046BEB0 */

    eax = 0x588D9C;
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

}

/**
 * sub_0048B520
 * Original: 0x0048B520 - 0x0048B528 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B520: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B528
 * Original: 0x0048B528 - 0x0048B530 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B528(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B528: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B530
 * Original: 0x0048B530 - 0x0048B550 (32 bytes, 18 insns)
 * Folder: compiler (between: 0x0048B528 and 0x0048B550)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B530: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x588DD0;
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
 * sub_0048B550
 * Original: 0x0048B550 - 0x0048B558 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B550: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B558
 * Original: 0x0048B558 - 0x0048B570 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x0048B550 and 0x0048B570)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B558(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B558: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x588C8C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048B570
 * Original: 0x0048B570 - 0x0048B57A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B570: ;
    eax = 0x588E20;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048B580
 * Original: 0x0048B580 - 0x0048B58B (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048B570 and 0x0048B600)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B580: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B58B
 * Original: 0x0048B58B - 0x0048B596 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048B570 and 0x0048B600)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B58B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B58B: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B596
 * Original: 0x0048B596 - 0x0048B5A1 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048B570 and 0x0048B600)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B596(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B596: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00471070(); return; /* tail jmp 0x00471070 */

}

/**
 * sub_0048B5A1
 * Original: 0x0048B5A1 - 0x0048B5C0 (31 bytes, 15 insns)
 * Folder: compiler (between: 0x0048B570 and 0x0048B600)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B5A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B5A1: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0046FFF0(); return; /* tail jmp 0x0046FFF0 */

    eax = 0x588E5C;
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
 * sub_0048B5C0
 * Original: 0x0048B5C0 - 0x0048B5C8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048B570 and 0x0048B600)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B5C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B5C0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0046BEB0(); return; /* tail jmp 0x0046BEB0 */

}

/**
 * sub_0048B5C8
 * Original: 0x0048B5C8 - 0x0048B5D3 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048B570 and 0x0048B600)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B5C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B5C8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004773C0(); return; /* tail jmp 0x004773C0 */

}

/**
 * sub_0048B5D3
 * Original: 0x0048B5D3 - 0x0048B5E1 (14 bytes, 3 insns)
 * Folder: compiler (between: 0x0048B570 and 0x0048B600)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B5D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B5D3: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B5E1
 * Original: 0x0048B5E1 - 0x0048B600 (31 bytes, 12 insns)
 * Folder: compiler (between: 0x0048B570 and 0x0048B600)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B5E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B5E1: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x9C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004647C0(); return; /* tail jmp 0x004647C0 */

    eax = 0x588E98;
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
 * sub_0048B600
 * Original: 0x0048B600 - 0x0048B608 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B600: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B620
 * Original: 0x0048B620 - 0x0048B628 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048B600 and 0x0048B660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B620: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0045F3F0(); return; /* tail jmp 0x0045F3F0 */

}

/**
 * sub_0048B628
 * Original: 0x0048B628 - 0x0048B633 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048B600 and 0x0048B660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B628(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B628: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B633
 * Original: 0x0048B633 - 0x0048B63E (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048B600 and 0x0048B660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B633(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B633: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00471070(); return; /* tail jmp 0x00471070 */

}

/**
 * sub_0048B63E
 * Original: 0x0048B63E - 0x0048B660 (34 bytes, 18 insns)
 * Folder: compiler (between: 0x0048B600 and 0x0048B660)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B63E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B63E: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00470810(); return; /* tail jmp 0x00470810 */

    eax = 0x588EF8;
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
 * sub_0048B660
 * Original: 0x0048B660 - 0x0048B668 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B660: ;
    ecx = ebp + 0x10;
    g_seh_ebp = ebp; sub_00018CC0(); return; /* tail jmp 0x00018CC0 */

}

/**
 * sub_0048B680
 * Original: 0x0048B680 - 0x0048B688 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048B660 and 0x0048B6B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B680: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0045F3F0(); return; /* tail jmp 0x0045F3F0 */

}

/**
 * sub_0048B688
 * Original: 0x0048B688 - 0x0048B693 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048B660 and 0x0048B6B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B688(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B688: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B693
 * Original: 0x0048B693 - 0x0048B6B0 (29 bytes, 13 insns)
 * Folder: compiler (between: 0x0048B660 and 0x0048B6B0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B693(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B693: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00471070(); return; /* tail jmp 0x00471070 */

    eax = 0x588FB8;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

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
 * sub_0048B6B0
 * Original: 0x0048B6B0 - 0x0048B6B8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B6B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B6B0: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00018CC0(); return; /* tail jmp 0x00018CC0 */

}

/**
 * sub_0048B6D0
 * Original: 0x0048B6D0 - 0x0048B6D8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B6D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B6D0: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B6F0
 * Original: 0x0048B6F0 - 0x0048B6F8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048B6D0 and 0x0048B710)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B6F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B6F0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00468910(); return; /* tail jmp 0x00468910 */

}

/**
 * sub_0048B6F8
 * Original: 0x0048B6F8 - 0x0048B710 (24 bytes, 8 insns)
 * Folder: compiler (between: 0x0048B6D0 and 0x0048B710)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B6F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B6F8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00471070(); return; /* tail jmp 0x00471070 */

    eax = 0x58902C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048B710
 * Original: 0x0048B710 - 0x0048B718 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B710: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_0045F3F0(); return; /* tail jmp 0x0045F3F0 */

}

/**
 * sub_0048B730
 * Original: 0x0048B730 - 0x0048B738 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048B710 and 0x0048B750)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B730: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0046A7B0(); return; /* tail jmp 0x0046A7B0 */

}

/**
 * sub_0048B738
 * Original: 0x0048B738 - 0x0048B750 (24 bytes, 8 insns)
 * Folder: compiler (between: 0x0048B710 and 0x0048B750)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B738(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B738: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00462EA0(); return; /* tail jmp 0x00462EA0 */

    eax = 0x58907C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048B750
 * Original: 0x0048B750 - 0x0048B758 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B750: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048B770
 * Original: 0x0048B770 - 0x0048B778 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048B750 and 0x0048B78E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B770: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_0046A7B0(); return; /* tail jmp 0x0046A7B0 */

}

/**
 * sub_0048B778
 * Original: 0x0048B778 - 0x0048B783 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048B750 and 0x0048B78E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B778(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B778: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048B783
 * Original: 0x0048B783 - 0x0048B78E (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048B750 and 0x0048B78E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B783(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B783: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B78Cu); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048B78C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048B78E
 * Original: 0x0048B78E - 0x0048B798 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B78E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B78E: ;
    eax = 0x5890D4;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048B7A0
 * Original: 0x0048B7A0 - 0x0048B7A8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B7A0: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048B7C0
 * Original: 0x0048B7C0 - 0x0048B7C8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B7C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B7C0: ;
    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_0045F3F0(); return; /* tail jmp 0x0045F3F0 */

}

/**
 * sub_0048B7C8
 * Original: 0x0048B7C8 - 0x0048B7E0 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x0048B7C0 and 0x0048B800)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B7C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B7C8: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

    eax = 0x589124;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048B7E0
 * Original: 0x0048B7E0 - 0x0048B7E8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048B7C0 and 0x0048B800)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B7E0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0046A7B0(); return; /* tail jmp 0x0046A7B0 */

}

/**
 * sub_0048B800
 * Original: 0x0048B800 - 0x0048B808 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B800: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_0045F3F0(); return; /* tail jmp 0x0045F3F0 */

}

/**
 * sub_0048B808
 * Original: 0x0048B808 - 0x0048B820 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x0048B800 and 0x0048B87E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B808(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B808: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_0045F3F0(); return; /* tail jmp 0x0045F3F0 */

    eax = 0x589174;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048B820
 * Original: 0x0048B820 - 0x0048B828 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048B800 and 0x0048B87E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B820: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0045F3F0(); return; /* tail jmp 0x0045F3F0 */

}

/**
 * sub_0048B828
 * Original: 0x0048B828 - 0x0048B840 (24 bytes, 8 insns)
 * Folder: compiler (between: 0x0048B800 and 0x0048B87E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B828(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B828: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00471070(); return; /* tail jmp 0x00471070 */

    eax = 0x5891A0;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048B840
 * Original: 0x0048B840 - 0x0048B848 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048B800 and 0x0048B87E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B840: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0045F3F0(); return; /* tail jmp 0x0045F3F0 */

}

/**
 * sub_0048B860
 * Original: 0x0048B860 - 0x0048B868 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048B800 and 0x0048B87E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B860: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_000142F0(); return; /* tail jmp 0x000142F0 */

}

/**
 * sub_0048B868
 * Original: 0x0048B868 - 0x0048B87E (22 bytes, 8 insns)
 * Folder: compiler (between: 0x0048B800 and 0x0048B87E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B868(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B868: ;
    PUSH32(esp, 0x471070);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x10);
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048B87Du); RECOMP_ABI_CALL(0x004801C5u, sub_004801C5); /* call 0x004801C5 */

loc_0048B87D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048B87E
 * Original: 0x0048B87E - 0x0048B888 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B87E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B87E: ;
    eax = 0x5891F0;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048B890
 * Original: 0x0048B890 - 0x0048B898 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048B87E and 0x0048B8D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B890: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_000142F0(); return; /* tail jmp 0x000142F0 */

}

/**
 * sub_0048B8B0
 * Original: 0x0048B8B0 - 0x0048B8B8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048B87E and 0x0048B8D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B8B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B8B0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00474330(); return; /* tail jmp 0x00474330 */

}

/**
 * sub_0048B8D0
 * Original: 0x0048B8D0 - 0x0048B8D8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B8D0: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_0045F3F0(); return; /* tail jmp 0x0045F3F0 */

}

/**
 * sub_0048B8F0
 * Original: 0x0048B8F0 - 0x0048B8F8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048B8D0 and 0x0048B970)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B8F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B8F0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0046A7B0(); return; /* tail jmp 0x0046A7B0 */

}

/**
 * sub_0048B8F8
 * Original: 0x0048B8F8 - 0x0048B903 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048B8D0 and 0x0048B970)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B8F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B8F8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00462EA0(); return; /* tail jmp 0x00462EA0 */

}

/**
 * sub_0048B903
 * Original: 0x0048B903 - 0x0048B90E (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048B8D0 and 0x0048B970)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B903(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B903: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00462EA0(); return; /* tail jmp 0x00462EA0 */

}

/**
 * sub_0048B90E
 * Original: 0x0048B90E - 0x0048B919 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048B8D0 and 0x0048B970)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B90E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B90E: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00462EA0(); return; /* tail jmp 0x00462EA0 */

}

/**
 * sub_0048B919
 * Original: 0x0048B919 - 0x0048B930 (23 bytes, 7 insns)
 * Folder: compiler (between: 0x0048B8D0 and 0x0048B970)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B919(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B919: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x38;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00462EA0(); return; /* tail jmp 0x00462EA0 */

    eax = 0x5892A0;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048B930
 * Original: 0x0048B930 - 0x0048B938 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048B8D0 and 0x0048B970)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B930: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0046A7B0(); return; /* tail jmp 0x0046A7B0 */

}

/**
 * sub_0048B938
 * Original: 0x0048B938 - 0x0048B943 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048B8D0 and 0x0048B970)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B938(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B938: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00462EA0(); return; /* tail jmp 0x00462EA0 */

}

/**
 * sub_0048B943
 * Original: 0x0048B943 - 0x0048B94E (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048B8D0 and 0x0048B970)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B943(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B943: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00462EA0(); return; /* tail jmp 0x00462EA0 */

}

/**
 * sub_0048B94E
 * Original: 0x0048B94E - 0x0048B959 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048B8D0 and 0x0048B970)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B94E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B94E: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048B959
 * Original: 0x0048B959 - 0x0048B970 (23 bytes, 7 insns)
 * Folder: compiler (between: 0x0048B8D0 and 0x0048B970)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B959(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B959: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

    eax = 0x5892E4;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048B970
 * Original: 0x0048B970 - 0x0048B978 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B970: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_0045F3F0(); return; /* tail jmp 0x0045F3F0 */

}

/**
 * sub_0048B978
 * Original: 0x0048B978 - 0x0048B990 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x0048B970 and 0x0048B990)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B978(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B978: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

    eax = 0x589310;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048B990
 * Original: 0x0048B990 - 0x0048B998 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B990: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048B9B0
 * Original: 0x0048B9B0 - 0x0048B9B8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B9B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B9B0: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00471070(); return; /* tail jmp 0x00471070 */

}

/**
 * sub_0048B9D0
 * Original: 0x0048B9D0 - 0x0048B9DE (14 bytes, 4 insns)
 * Folder: compiler (between: 0x0048B9B0 and 0x0048B9EC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B9D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048B9D0: ;
    eax = MEM32(0x5B3644);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x5B3644) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0048B9DE
 * Original: 0x0048B9DE - 0x0048B9EC (14 bytes, 4 insns)
 * Folder: compiler (between: 0x0048B9B0 and 0x0048B9EC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B9DE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0048B9DE: ;
    eax = MEM32(0x5B3644);
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x5B3644) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0048B9EC
 * Original: 0x0048B9EC - 0x0048B9F6 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048B9EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048B9EC: ;
    eax = 0x589384;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BA00
 * Original: 0x0048BA00 - 0x0048BA08 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BA00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BA00: ;
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048BA20
 * Original: 0x0048BA20 - 0x0048BA2A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BA20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BA20: ;
    eax = 0x589460;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BA30
 * Original: 0x0048BA30 - 0x0048BA3B (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048BA20 and 0x0048BA60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BA30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BA30: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048BA3B
 * Original: 0x0048BA3B - 0x0048BA46 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048BA20 and 0x0048BA60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BA3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BA3B: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048BA46
 * Original: 0x0048BA46 - 0x0048BA60 (26 bytes, 10 insns)
 * Folder: compiler (between: 0x0048BA20 and 0x0048BA60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BA46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BA46: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00471070(); return; /* tail jmp 0x00471070 */

    eax = 0x589494;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048BA60
 * Original: 0x0048BA60 - 0x0048BA68 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BA60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BA60: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048BA68
 * Original: 0x0048BA68 - 0x0048BA80 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x0048BA60 and 0x0048BA80)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BA68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BA68: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x5894C0;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048BA80
 * Original: 0x0048BA80 - 0x0048BA88 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BA80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BA80: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00018CC0(); return; /* tail jmp 0x00018CC0 */

}

/**
 * sub_0048BA92
 * Original: 0x0048BA92 - 0x0048BAA4 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BA80 and 0x0048BAA4)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BA92(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BA92: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x589508;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BAA4
 * Original: 0x0048BAA4 - 0x0048BAAC (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BAA4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BAA4: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_004FC7EB(); return; /* tail jmp 0x004FC7EB */

}

/**
 * sub_0048BAAC
 * Original: 0x0048BAAC - 0x0048BAC1 (21 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BAA4 and 0x0048BAC1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BAAC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BAAC: ;
    ecx = ebp + -1048;
    g_seh_ebp = ebp; sub_0050B7DC(); return; /* tail jmp 0x0050B7DC */

    eax = 0x58956C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BAC1
 * Original: 0x0048BAC1 - 0x0048BAC9 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BAC1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BAC1: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

}

/**
 * sub_0048BAC9
 * Original: 0x0048BAC9 - 0x0048BAD1 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BAC9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BAC9: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

}

/**
 * sub_0048BAD1
 * Original: 0x0048BAD1 - 0x0048BAE3 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BAC9 and 0x0048BB07)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BAD1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BAD1: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

    eax = 0x5895D4;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BAE3
 * Original: 0x0048BAE3 - 0x0048BAF5 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BAC9 and 0x0048BB07)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BAE3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BAE3: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

    eax = 0x5895F8;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BAF5
 * Original: 0x0048BAF5 - 0x0048BB07 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BAC9 and 0x0048BB07)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BAF5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BAF5: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

    eax = 0x58961C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BB07
 * Original: 0x0048BB07 - 0x0048BB0F (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BB07(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BB07: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_004FE301(); return; /* tail jmp 0x004FE301 */

}

/**
 * sub_0048BB0F
 * Original: 0x0048BB0F - 0x0048BB17 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BB0F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BB0F: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_004FE301(); return; /* tail jmp 0x004FE301 */

}

/**
 * sub_0048BB17
 * Original: 0x0048BB17 - 0x0048BB29 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BB0F and 0x0048BB4D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BB17(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BB17: ;
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_004FE301(); return; /* tail jmp 0x004FE301 */

    eax = 0x589650;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BB29
 * Original: 0x0048BB29 - 0x0048BB3B (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BB0F and 0x0048BB4D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BB29(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BB29: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

    eax = 0x589674;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BB3B
 * Original: 0x0048BB3B - 0x0048BB4D (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BB0F and 0x0048BB4D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BB3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BB3B: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

    eax = 0x589698;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BB4D
 * Original: 0x0048BB4D - 0x0048BB55 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BB4D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BB4D: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

}

/**
 * sub_0048BB55
 * Original: 0x0048BB55 - 0x0048BB67 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BB4D and 0x0048BB84)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BB55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BB55: ;
    ecx = ebp + 0x10;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

    eax = 0x589A6C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BB67
 * Original: 0x0048BB67 - 0x0048BB6F (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048BB4D and 0x0048BB84)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BB67(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BB67: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00502625(); return; /* tail jmp 0x00502625 */

}

/**
 * sub_0048BB6F
 * Original: 0x0048BB6F - 0x0048BB84 (21 bytes, 5 insns)
 * Folder: compiler (between: 0x0048BB4D and 0x0048BB84)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BB6F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BB6F: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004FE301(); return; /* tail jmp 0x004FE301 */

    eax = 0x589900;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BB84
 * Original: 0x0048BB84 - 0x0048BB8C (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BB84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BB84: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

}

/**
 * sub_0048BB8C
 * Original: 0x0048BB8C - 0x0048BB94 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048BB84 and 0x0048BBA9)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BB8C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BB8C: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00502625(); return; /* tail jmp 0x00502625 */

}

/**
 * sub_0048BB94
 * Original: 0x0048BB94 - 0x0048BB9F (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048BB84 and 0x0048BBA9)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BB94(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BB94: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005006B6(); return; /* tail jmp 0x005006B6 */

}

/**
 * sub_0048BB9F
 * Original: 0x0048BB9F - 0x0048BBA9 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BB84 and 0x0048BBA9)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BB9F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BB9F: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x0048BBA7u); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BBA7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BBA9
 * Original: 0x0048BBA9 - 0x0048BBB3 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BBA9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BBA9: ;
    eax = 0x5896D4;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BBB3
 * Original: 0x0048BBB3 - 0x0048BBBD (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BBA9 and 0x0048BBBD)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BBB3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BBB3: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x0048BBBBu); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BBBB: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BBBD
 * Original: 0x0048BBBD - 0x0048BBC7 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BBBD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BBBD: ;
    eax = 0x5896F8;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BBC7
 * Original: 0x0048BBC7 - 0x0048BBD9 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BBBD and 0x0048BC34)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BBC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BBC7: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_005006DE(); return; /* tail jmp 0x005006DE */

    eax = 0x58971C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BBD9
 * Original: 0x0048BBD9 - 0x0048BBE1 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048BBBD and 0x0048BC34)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BBD9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BBD9: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_00502625(); return; /* tail jmp 0x00502625 */

}

/**
 * sub_0048BBE1
 * Original: 0x0048BBE1 - 0x0048BBEC (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048BBBD and 0x0048BC34)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BBE1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BBE1: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

}

/**
 * sub_0048BBEC
 * Original: 0x0048BBEC - 0x0048BBF7 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048BBBD and 0x0048BC34)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BBEC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BBEC: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

}

/**
 * sub_0048BBF7
 * Original: 0x0048BBF7 - 0x0048BC0C (21 bytes, 5 insns)
 * Folder: compiler (between: 0x0048BBBD and 0x0048BC34)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BBF7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BBF7: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

    eax = 0x589758;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BC0C
 * Original: 0x0048BC0C - 0x0048BC16 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BBBD and 0x0048BC34)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BC0C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BC0C: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x0048BC14u); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BC14: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BC16
 * Original: 0x0048BC16 - 0x0048BC20 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BBBD and 0x0048BC34)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BC16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BC16: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x0048BC1Eu); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BC1E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BC20
 * Original: 0x0048BC20 - 0x0048BC2A (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BBBD and 0x0048BC34)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BC20: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x0048BC28u); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BC28: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BC2A
 * Original: 0x0048BC2A - 0x0048BC34 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BBBD and 0x0048BC34)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BC2A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BC2A: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x0048BC32u); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BC32: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BC34
 * Original: 0x0048BC34 - 0x0048BC3E (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BC34(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BC34: ;
    eax = 0x589794;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BC3E
 * Original: 0x0048BC3E - 0x0048BC48 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BC34 and 0x0048BC84)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BC3E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BC3E: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x0048BC46u); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BC46: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BC48
 * Original: 0x0048BC48 - 0x0048BC52 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BC34 and 0x0048BC84)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BC48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BC48: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x0048BC50u); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BC50: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BC52
 * Original: 0x0048BC52 - 0x0048BC5C (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BC34 and 0x0048BC84)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BC52(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BC52: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x0048BC5Au); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BC5A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BC5C
 * Original: 0x0048BC5C - 0x0048BC66 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BC34 and 0x0048BC84)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BC5C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BC5C: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x0048BC64u); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BC64: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BC66
 * Original: 0x0048BC66 - 0x0048BC70 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BC34 and 0x0048BC84)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BC66(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BC66: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x0048BC6Eu); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BC6E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BC70
 * Original: 0x0048BC70 - 0x0048BC7A (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BC34 and 0x0048BC84)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BC70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BC70: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x0048BC78u); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BC78: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BC7A
 * Original: 0x0048BC7A - 0x0048BC84 (10 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BC34 and 0x0048BC84)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BC7A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BC7A: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x0048BC82u); RECOMP_ABI_CALL(0x0050EC0Bu, sub_0050EC0B); /* call 0x0050EC0B */

loc_0048BC82: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048BC84
 * Original: 0x0048BC84 - 0x0048BC8E (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BC84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BC84: ;
    eax = 0x5897E8;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BC8E
 * Original: 0x0048BC8E - 0x0048BC96 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BC8E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BC8E: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_004FE301(); return; /* tail jmp 0x004FE301 */

}

/**
 * sub_0048BC96
 * Original: 0x0048BC96 - 0x0048BC9E (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BC96(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BC96: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

}

/**
 * sub_0048BC9E
 * Original: 0x0048BC9E - 0x0048BCB0 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BC96 and 0x0048BD65)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BC9E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BC9E: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

    eax = 0x58981C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BCB0
 * Original: 0x0048BCB0 - 0x0048BCB8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048BC96 and 0x0048BD65)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BCB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BCB0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00502625(); return; /* tail jmp 0x00502625 */

}

/**
 * sub_0048BCB8
 * Original: 0x0048BCB8 - 0x0048BCC3 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048BC96 and 0x0048BD65)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BCB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BCB8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005006C1(); return; /* tail jmp 0x005006C1 */

}

/**
 * sub_0048BCC3
 * Original: 0x0048BCC3 - 0x0048BCCE (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048BC96 and 0x0048BD65)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BCC3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BCC3: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005011C9(); return; /* tail jmp 0x005011C9 */

}

/**
 * sub_0048BCCE
 * Original: 0x0048BCCE - 0x0048BCD9 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048BC96 and 0x0048BD65)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BCCE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BCCE: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005011C9(); return; /* tail jmp 0x005011C9 */

}

/**
 * sub_0048BCD9
 * Original: 0x0048BCD9 - 0x0048BCEE (21 bytes, 5 insns)
 * Folder: compiler (between: 0x0048BC96 and 0x0048BD65)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BCD9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BCD9: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005011C9(); return; /* tail jmp 0x005011C9 */

    eax = 0x589860;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BCEE
 * Original: 0x0048BCEE - 0x0048BD00 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BC96 and 0x0048BD65)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BCEE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BCEE: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_005031D4(); return; /* tail jmp 0x005031D4 */

    eax = 0x589884;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BD00
 * Original: 0x0048BD00 - 0x0048BD08 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048BC96 and 0x0048BD65)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BD00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BD00: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_00502625(); return; /* tail jmp 0x00502625 */

}

/**
 * sub_0048BD08
 * Original: 0x0048BD08 - 0x0048BD1D (21 bytes, 5 insns)
 * Folder: compiler (between: 0x0048BC96 and 0x0048BD65)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BD08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BD08: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_005006B6(); return; /* tail jmp 0x005006B6 */

    eax = 0x5898B0;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BD1D
 * Original: 0x0048BD1D - 0x0048BD2F (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BC96 and 0x0048BD65)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BD1D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BD1D: ;
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

    eax = 0x5898D4;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BD2F
 * Original: 0x0048BD2F - 0x0048BD41 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BC96 and 0x0048BD65)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BD2F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BD2F: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_004FE301(); return; /* tail jmp 0x004FE301 */

    eax = 0x589934;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BD41
 * Original: 0x0048BD41 - 0x0048BD53 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BC96 and 0x0048BD65)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BD41(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BD41: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

    eax = 0x589958;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BD53
 * Original: 0x0048BD53 - 0x0048BD65 (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BC96 and 0x0048BD65)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BD53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BD53: ;
    ecx = ebp + 0x1C;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

    eax = 0x58997C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BD65
 * Original: 0x0048BD65 - 0x0048BD70 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BD65(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BD65: ;
    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_004FE301(); return; /* tail jmp 0x004FE301 */

}

/**
 * sub_0048BD70
 * Original: 0x0048BD70 - 0x0048BD7B (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BD70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BD70: ;
    ecx = ebp + -200;
    g_seh_ebp = ebp; sub_004FE301(); return; /* tail jmp 0x004FE301 */

}

/**
 * sub_0048BD7B
 * Original: 0x0048BD7B - 0x0048BD83 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BD7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BD7B: ;
    ecx = ebp + -76;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

}

/**
 * sub_0048BD83
 * Original: 0x0048BD83 - 0x0048BD8B (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BD83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BD83: ;
    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

}

/**
 * sub_0048BD8B
 * Original: 0x0048BD8B - 0x0048BD93 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BD8B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BD8B: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

}

/**
 * sub_0048BD93
 * Original: 0x0048BD93 - 0x0048BD9B (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BD93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BD93: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_004FE301(); return; /* tail jmp 0x004FE301 */

}

/**
 * sub_0048BD9B
 * Original: 0x0048BD9B - 0x0048BDA3 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BD9B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BD9B: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

}

/**
 * sub_0048BDA3
 * Original: 0x0048BDA3 - 0x0048BDAB (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BDA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BDA3: ;
    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

}

/**
 * sub_0048BDAB
 * Original: 0x0048BDAB - 0x0048BDBD (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BDA3 and 0x0048BDD6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BDAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BDAB: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_004FE301(); return; /* tail jmp 0x004FE301 */

    eax = 0x5899E0;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BDBD
 * Original: 0x0048BDBD - 0x0048BDD6 (25 bytes, 7 insns)
 * Folder: compiler (between: 0x0048BDA3 and 0x0048BDD6)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BDBD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BDBD: ;
    eax = MEM32(ebp + -16);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0048BDD5; /* je: equal / zero */

loc_0048BDC9: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_004FE301(); return; /* tail jmp 0x004FE301 */

loc_0048BDD5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048BDD6
 * Original: 0x0048BDD6 - 0x0048BDE0 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BDD6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BDD6: ;
    eax = 0x589A04;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BDE0
 * Original: 0x0048BDE0 - 0x0048BDE8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BDE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BDE0: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

}

/**
 * sub_0048BDE8
 * Original: 0x0048BDE8 - 0x0048BDF0 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BDE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BDE8: ;
    ecx = ebp + 0x10;
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

}

/**
 * sub_0048BDF0
 * Original: 0x0048BDF0 - 0x0048BDF8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BDF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BDF0: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_005006DE(); return; /* tail jmp 0x005006DE */

}

/**
 * sub_0048BDF8
 * Original: 0x0048BDF8 - 0x0048BE0A (18 bytes, 4 insns)
 * Folder: compiler (between: 0x0048BDF0 and 0x0048BE79)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BDF8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BDF8: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_004FE301(); return; /* tail jmp 0x004FE301 */

    eax = 0x589A40;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048BE0A
 * Original: 0x0048BE0A - 0x0048BE12 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048BDF0 and 0x0048BE79)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BE0A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BE0A: ;
    ecx = MEM32(ebp + -24);
    g_seh_ebp = ebp; sub_00502625(); return; /* tail jmp 0x00502625 */

}

/**
 * sub_0048BE12
 * Original: 0x0048BE12 - 0x0048BE1D (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048BDF0 and 0x0048BE79)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BE12(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BE12: ;
    ecx = MEM32(ebp + -24);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

}

/**
 * sub_0048BE1D
 * Original: 0x0048BE1D - 0x0048BE28 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048BDF0 and 0x0048BE79)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048BE1D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048BE1D: ;
    ecx = MEM32(ebp + -24);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004FE180(); return; /* tail jmp 0x004FE180 */

}
