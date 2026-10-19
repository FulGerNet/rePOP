/**
 * PoP SoT xbox-demo - compiler, chunk 1
 * Compiler-generated C++ exception unwinding and global set-up (.text$x, .text$yc/yd)
 * Functions: 113 (0x00297098 - 0x0029793B)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_00297098
 * Original: 0x00297098 - 0x002970B0 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x00296FD1 and 0x00297140)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297098(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297098: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_00060FC0(); return; /* tail jmp 0x00060FC0 */

    eax = 0x335A3C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_002970B0
 * Original: 0x002970B0 - 0x002970B8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296FD1 and 0x00297140)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002970B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002970B0: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_0005F7C0(); return; /* tail jmp 0x0005F7C0 */

}

/**
 * sub_002970D0
 * Original: 0x002970D0 - 0x002970D8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296FD1 and 0x00297140)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002970D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002970D0: ;
    esi = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_00016A20(); return; /* tail jmp 0x00016A20 */

}

/**
 * sub_002970D8
 * Original: 0x002970D8 - 0x002970E3 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296FD1 and 0x00297140)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002970D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002970D8: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00016A20(); return; /* tail jmp 0x00016A20 */

}

/**
 * sub_002970E3
 * Original: 0x002970E3 - 0x002970EE (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00296FD1 and 0x00297140)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002970E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002970E3: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00016A20(); return; /* tail jmp 0x00016A20 */

}

/**
 * sub_002970EE
 * Original: 0x002970EE - 0x00297110 (34 bytes, 18 insns)
 * Folder: compiler (between: 0x00296FD1 and 0x00297140)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002970EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002970EE: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00016A20(); return; /* tail jmp 0x00016A20 */

    eax = 0x335A9C;
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

}

/**
 * sub_00297110
 * Original: 0x00297110 - 0x00297118 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296FD1 and 0x00297140)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297110: ;
    eax = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_00016F20(); return; /* tail jmp 0x00016F20 */

}

/**
 * sub_00297118
 * Original: 0x00297118 - 0x00297120 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00296FD1 and 0x00297140)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297118(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297118: ;
    eax = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_00016F20(); return; /* tail jmp 0x00016F20 */

}

/**
 * sub_00297120
 * Original: 0x00297120 - 0x00297140 (32 bytes, 18 insns)
 * Folder: compiler (between: 0x00296FD1 and 0x00297140)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297120: ;
    eax = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_00016F20(); return; /* tail jmp 0x00016F20 */

    eax = 0x335AD0;
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
 * sub_00297140
 * Original: 0x00297140 - 0x00297148 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297140: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_000172D0(); return; /* tail jmp 0x000172D0 */

}

/**
 * sub_00297160
 * Original: 0x00297160 - 0x00297168 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00297140 and 0x00297276)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297160: ;
    eax = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00016F20(); return; /* tail jmp 0x00016F20 */

}

/**
 * sub_00297180
 * Original: 0x00297180 - 0x00297188 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00297140 and 0x00297276)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297180: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_002971A0
 * Original: 0x002971A0 - 0x002971AB (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00297140 and 0x00297276)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002971A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002971A0: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000F8880(); return; /* tail jmp 0x000F8880 */

}

/**
 * sub_002971C0
 * Original: 0x002971C0 - 0x002971C8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00297140 and 0x00297276)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002971C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002971C0: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_002971C8
 * Original: 0x002971C8 - 0x002971E0 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x00297140 and 0x00297276)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002971C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002971C8: ;
    eax = ebp + -20;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

    eax = 0x335C10;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_002971E0
 * Original: 0x002971E0 - 0x002971E8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00297140 and 0x00297276)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002971E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002971E0: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_00273440(); return; /* tail jmp 0x00273440 */

}

/**
 * sub_00297200
 * Original: 0x00297200 - 0x00297208 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00297140 and 0x00297276)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297200: ;
    eax = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_0027D860(); return; /* tail jmp 0x0027D860 */

}

/**
 * sub_00297208
 * Original: 0x00297208 - 0x00297213 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00297140 and 0x00297276)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297208(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297208: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0027EDD0(); return; /* tail jmp 0x0027EDD0 */

}

/**
 * sub_00297213
 * Original: 0x00297213 - 0x0029721E (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00297140 and 0x00297276)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297213(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297213: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0027EDD0(); return; /* tail jmp 0x0027EDD0 */

}

/**
 * sub_0029721E
 * Original: 0x0029721E - 0x00297240 (34 bytes, 18 insns)
 * Folder: compiler (between: 0x00297140 and 0x00297276)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029721E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029721E: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0027EC80(); return; /* tail jmp 0x0027EC80 */

    eax = 0x335C70;
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

}

/**
 * sub_00297240
 * Original: 0x00297240 - 0x00297248 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00297140 and 0x00297276)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297240: ;
    eax = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_00016F20(); return; /* tail jmp 0x00016F20 */

}

/**
 * sub_00297260
 * Original: 0x00297260 - 0x00297268 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00297140 and 0x00297276)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297260: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00297268
 * Original: 0x00297268 - 0x00297276 (14 bytes, 4 insns)
 * Folder: compiler (between: 0x00297140 and 0x00297276)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297268(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00297268: ;
    eax = MEM32(0x65436C);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x65436C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00297276
 * Original: 0x00297276 - 0x00297280 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297276(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297276: ;
    eax = 0x335CC0;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00297280
 * Original: 0x00297280 - 0x00297288 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297280: ;
    eax = ebp + 0xC;
    g_seh_ebp = ebp; sub_00012600(); return; /* tail jmp 0x00012600 */

}

/**
 * sub_00297288
 * Original: 0x00297288 - 0x00297290 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297288(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297288: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_002734F0(); return; /* tail jmp 0x002734F0 */

}

/**
 * sub_00297290
 * Original: 0x00297290 - 0x002972B0 (32 bytes, 16 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297290: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00275980(); return; /* tail jmp 0x00275980 */

    eax = 0x335CF4;
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
 * sub_002972B0
 * Original: 0x002972B0 - 0x002972B8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002972B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002972B0: ;
    eax = ebp + 4;
    g_seh_ebp = ebp; sub_000BE250(); return; /* tail jmp 0x000BE250 */

}

/**
 * sub_002972D0
 * Original: 0x002972D0 - 0x002972DD (13 bytes, 3 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002972D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002972D0: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x4014) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4014;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00019B40(); return; /* tail jmp 0x00019B40 */

}

/**
 * sub_002972DD
 * Original: 0x002972DD - 0x00297300 (35 bytes, 17 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002972DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002972DD: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x4044) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4044;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002CF70(); return; /* tail jmp 0x0002CF70 */

    eax = 0x335D44;
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
 * sub_00297300
 * Original: 0x00297300 - 0x0029730B (11 bytes, 2 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297300: ;
    eax = ebp + -568;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_0029730B
 * Original: 0x0029730B - 0x00297316 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029730B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029730B: ;
    esi = ebp + -564;
    g_seh_ebp = ebp; sub_00275980(); return; /* tail jmp 0x00275980 */

}

/**
 * sub_00297316
 * Original: 0x00297316 - 0x00297321 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297316(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297316: ;
    eax = ebp + -580;
    g_seh_ebp = ebp; sub_00012600(); return; /* tail jmp 0x00012600 */

}

/**
 * sub_00297321
 * Original: 0x00297321 - 0x0029732C (11 bytes, 2 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297321(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297321: ;
    eax = ebp + -576;
    g_seh_ebp = ebp; sub_00012600(); return; /* tail jmp 0x00012600 */

}

/**
 * sub_0029732C
 * Original: 0x0029732C - 0x00297337 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029732C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029732C: ;
    eax = MEM32(ebp + -576);
    g_seh_ebp = ebp; sub_00016F20(); return; /* tail jmp 0x00016F20 */

}

/**
 * sub_00297337
 * Original: 0x00297337 - 0x00297350 (25 bytes, 8 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297337(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297337: ;
    eax = ebp + -576;
    g_seh_ebp = ebp; sub_00012600(); return; /* tail jmp 0x00012600 */

    eax = 0x335D90;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00297350
 * Original: 0x00297350 - 0x00297358 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297350: ;
    eax = ebp + 8;
    g_seh_ebp = ebp; sub_000BE250(); return; /* tail jmp 0x000BE250 */

}

/**
 * sub_00297358
 * Original: 0x00297358 - 0x00297363 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297358(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297358: ;
    eax = ebp + -280;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00297363
 * Original: 0x00297363 - 0x0029736E (11 bytes, 2 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297363(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297363: ;
    eax = MEM32(ebp + -288);
    g_seh_ebp = ebp; sub_00016F20(); return; /* tail jmp 0x00016F20 */

}

/**
 * sub_0029736E
 * Original: 0x0029736E - 0x00297390 (34 bytes, 17 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029736E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029736E: ;
    eax = ebp + -288;
    g_seh_ebp = ebp; sub_00012600(); return; /* tail jmp 0x00012600 */

    eax = 0x335DCC;
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

}

/**
 * sub_00297374
 * Original: 0x00297374 - 0x00297390 (28 bytes, 16 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297374(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297374: ;
    g_seh_ebp = ebp; sub_00012600(); return; /* tail jmp 0x00012600 */

    eax = 0x335DCC;
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

}

/**
 * sub_00297390
 * Original: 0x00297390 - 0x00297398 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297390: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_0027B450(); return; /* tail jmp 0x0027B450 */

}

/**
 * sub_002973B0
 * Original: 0x002973B0 - 0x002973BB (11 bytes, 2 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002973B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002973B0: ;
    eax = ebp + -280;
    g_seh_ebp = ebp; sub_00012600(); return; /* tail jmp 0x00012600 */

}

/**
 * sub_002973BB
 * Original: 0x002973BB - 0x002973C6 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002973BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002973BB: ;
    eax = MEM32(ebp + -276);
    g_seh_ebp = ebp; sub_00016F20(); return; /* tail jmp 0x00016F20 */

}

/**
 * sub_002973C6
 * Original: 0x002973C6 - 0x002973D1 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002973C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002973C6: ;
    eax = MEM32(ebp + -276);
    g_seh_ebp = ebp; sub_00016F20(); return; /* tail jmp 0x00016F20 */

}

/**
 * sub_002973D1
 * Original: 0x002973D1 - 0x002973F0 (31 bytes, 14 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002973D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002973D1: ;
    eax = ebp + -276;
    g_seh_ebp = ebp; sub_00012600(); return; /* tail jmp 0x00012600 */

    eax = 0x335E2C;
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

}

/**
 * sub_002973F0
 * Original: 0x002973F0 - 0x002973FE (14 bytes, 3 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002973F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002973F0: ;
    ebx = MEM32(ebp + 4);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x100;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00011870(); return; /* tail jmp 0x00011870 */

}

/**
 * sub_00297410
 * Original: 0x00297410 - 0x00297418 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297410: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00297418
 * Original: 0x00297418 - 0x00297426 (14 bytes, 4 insns)
 * Folder: compiler (between: 0x00297276 and 0x00297426)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297418(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00297418: ;
    eax = MEM32(0x6543EC);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x6543EC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00297426
 * Original: 0x00297426 - 0x00297430 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297426(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297426: ;
    eax = 0x335EA0;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00297430
 * Original: 0x00297430 - 0x0029743B (11 bytes, 2 insns)
 * Folder: compiler (between: 0x00297426 and 0x002974AE)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297430: ;
    eax = ebp + -5408;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_0029743B
 * Original: 0x0029743B - 0x00297446 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x00297426 and 0x002974AE)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029743B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029743B: ;
    eax = ebp + -5148;
    g_seh_ebp = ebp; sub_000BE070(); return; /* tail jmp 0x000BE070 */

}

/**
 * sub_00297446
 * Original: 0x00297446 - 0x00297460 (26 bytes, 9 insns)
 * Folder: compiler (between: 0x00297426 and 0x002974AE)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297446(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297446: ;
    eax = ebp + -5412;
    g_seh_ebp = ebp; sub_000BE250(); return; /* tail jmp 0x000BE250 */

    eax = 0x335ED4;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00297460
 * Original: 0x00297460 - 0x00297468 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00297426 and 0x002974AE)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297460: ;
    eax = ebp + -20;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00297480
 * Original: 0x00297480 - 0x00297488 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x00297426 and 0x002974AE)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297480: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_0027B450(); return; /* tail jmp 0x0027B450 */

}

/**
 * sub_00297488
 * Original: 0x00297488 - 0x002974A0 (24 bytes, 8 insns)
 * Folder: compiler (between: 0x00297426 and 0x002974AE)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297488(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297488: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000F8880(); return; /* tail jmp 0x000F8880 */

    eax = 0x335F24;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_002974A0
 * Original: 0x002974A0 - 0x002974AE (14 bytes, 5 insns)
 * Folder: compiler (between: 0x00297426 and 0x002974AE)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002974A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002974A0: ;
    eax = MEM32(ebp + -12308);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002974ACu); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_002974AC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002974AE
 * Original: 0x002974AE - 0x002974B8 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002974AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002974AE: ;
    eax = 0x335F48;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002974C0
 * Original: 0x002974C0 - 0x002974C8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x002974AE and 0x00297650)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002974C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002974C0: ;
    eax = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_0027DA00(); return; /* tail jmp 0x0027DA00 */

}

/**
 * sub_002974E0
 * Original: 0x002974E0 - 0x002974ED (13 bytes, 3 insns)
 * Folder: compiler (between: 0x002974AE and 0x00297650)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002974E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002974E0: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x4014) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4014;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00019B40(); return; /* tail jmp 0x00019B40 */

}

/**
 * sub_002974ED
 * Original: 0x002974ED - 0x002974FA (13 bytes, 3 insns)
 * Folder: compiler (between: 0x002974AE and 0x00297650)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002974ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002974ED: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x4044) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4044;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0002CF70(); return; /* tail jmp 0x0002CF70 */

}

/**
 * sub_002974FA
 * Original: 0x002974FA - 0x00297502 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x002974AE and 0x00297650)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002974FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002974FA: ;
    eax = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_00016F20(); return; /* tail jmp 0x00016F20 */

}

/**
 * sub_00297502
 * Original: 0x00297502 - 0x00297520 (30 bytes, 16 insns)
 * Folder: compiler (between: 0x002974AE and 0x00297650)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297502(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297502: ;
    eax = MEM32(ebp + 8);
    g_seh_ebp = ebp; sub_00016F20(); return; /* tail jmp 0x00016F20 */

    eax = 0x335FA8;
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
 * sub_00297520
 * Original: 0x00297520 - 0x0029752C (12 bytes, 4 insns)
 * Folder: compiler (between: 0x002974AE and 0x00297650)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297520(void)
{

loc_00297520: ;
    PUSH32(esp, 0x297760);
    PUSH32(esp, 0x0029752Au); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_0029752A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00297530
 * Original: 0x00297530 - 0x0029754A (26 bytes, 8 insns)
 * Folder: compiler (between: 0x002974AE and 0x00297650)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00297530: ;
    PUSH32(esp, esi);
    esi = 0x64D964;
    PUSH32(esp, 0x0029753Bu); RECOMP_ABI_CALL(0x00019C70u, sub_00019C70); /* call 0x00019C70 */

loc_0029753B: ;
    PUSH32(esp, 0x2977A0);
    PUSH32(esp, 0x00297545u); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_00297545: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00297550
 * Original: 0x00297550 - 0x00297566 (22 bytes, 6 insns)
 * Folder: compiler (between: 0x002974AE and 0x00297650)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297550(void)
{

loc_00297550: ;
    eax = 0x64D970;
    PUSH32(esp, 0x0029755Au); RECOMP_ABI_CALL(0x000188D0u, sub_000188D0); /* call 0x000188D0 */

loc_0029755A: ;
    PUSH32(esp, 0x2977B0);
    PUSH32(esp, 0x00297564u); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_00297564: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00297570
 * Original: 0x00297570 - 0x00297586 (22 bytes, 6 insns)
 * Folder: compiler (between: 0x002974AE and 0x00297650)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297570(void)
{

loc_00297570: ;
    eax = 0x64D980;
    PUSH32(esp, 0x0029757Au); RECOMP_ABI_CALL(0x000188D0u, sub_000188D0); /* call 0x000188D0 */

loc_0029757A: ;
    PUSH32(esp, 0x2977C0);
    PUSH32(esp, 0x00297584u); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_00297584: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00297590
 * Original: 0x00297590 - 0x002975A7 (23 bytes, 6 insns)
 * Folder: compiler (between: 0x002974AE and 0x00297650)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297590(void)
{

loc_00297590: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64D9C0);
    { uint32_t _icall_target = MEM32(0x31C8C8); PUSH32(esp, 0x0029759Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00297595u); } /* indirect call */
    }

loc_0029759B: ;
    PUSH32(esp, 0x2977D0);
    PUSH32(esp, 0x002975A5u); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_002975A5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002975B0
 * Original: 0x002975B0 - 0x002975C6 (22 bytes, 6 insns)
 * Folder: compiler (between: 0x002974AE and 0x00297650)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002975B0(void)
{

loc_002975B0: ;
    eax = 0x64DA18;
    PUSH32(esp, 0x002975BAu); RECOMP_ABI_CALL(0x000E09C0u, sub_000E09C0); /* call 0x000E09C0 */

loc_002975BA: ;
    PUSH32(esp, 0x2977E0);
    PUSH32(esp, 0x002975C4u); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_002975C4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002975D0
 * Original: 0x002975D0 - 0x002975E6 (22 bytes, 6 insns)
 * Folder: compiler (between: 0x002974AE and 0x00297650)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002975D0(void)
{

loc_002975D0: ;
    eax = 0x64DA24;
    PUSH32(esp, 0x002975DAu); RECOMP_ABI_CALL(0x000E09C0u, sub_000E09C0); /* call 0x000E09C0 */

loc_002975DA: ;
    PUSH32(esp, 0x2977F0);
    PUSH32(esp, 0x002975E4u); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_002975E4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002975F0
 * Original: 0x002975F0 - 0x00297606 (22 bytes, 6 insns)
 * Folder: compiler (between: 0x002974AE and 0x00297650)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002975F0(void)
{

loc_002975F0: ;
    eax = 0x64DA3C;
    PUSH32(esp, 0x002975FAu); RECOMP_ABI_CALL(0x000E09C0u, sub_000E09C0); /* call 0x000E09C0 */

loc_002975FA: ;
    PUSH32(esp, 0x297800);
    PUSH32(esp, 0x00297604u); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_00297604: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00297610
 * Original: 0x00297610 - 0x00297626 (22 bytes, 6 insns)
 * Folder: compiler (between: 0x002974AE and 0x00297650)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297610(void)
{

loc_00297610: ;
    eax = 0x64DA30;
    PUSH32(esp, 0x0029761Au); RECOMP_ABI_CALL(0x000E09C0u, sub_000E09C0); /* call 0x000E09C0 */

loc_0029761A: ;
    PUSH32(esp, 0x297810);
    PUSH32(esp, 0x00297624u); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_00297624: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00297630
 * Original: 0x00297630 - 0x00297646 (22 bytes, 6 insns)
 * Folder: compiler (between: 0x002974AE and 0x00297650)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297630(void)
{

loc_00297630: ;
    eax = 0x64DA48;
    PUSH32(esp, 0x0029763Au); RECOMP_ABI_CALL(0x000E09C0u, sub_000E09C0); /* call 0x000E09C0 */

loc_0029763A: ;
    PUSH32(esp, 0x297820);
    PUSH32(esp, 0x00297644u); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_00297644: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00297650
 * Original: 0x00297650 - 0x0029765A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297650: ;
    eax = 0x64DA60;
    g_seh_ebp = ebp; sub_000EEAB0(); return; /* tail jmp 0x000EEAB0 */

}

/**
 * sub_00297660
 * Original: 0x00297660 - 0x0029766D (13 bytes, 5 insns)
 * Folder: compiler (between: 0x00297650 and 0x00297690)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297660(void)
{

loc_00297660: ;
    PUSH32(esp, esi);
    esi = 0x64E710;
    PUSH32(esp, 0x0029766Bu); RECOMP_ABI_CALL(0x000F3FA0u, sub_000F3FA0); /* call 0x000F3FA0 */

loc_0029766B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00297670
 * Original: 0x00297670 - 0x00297686 (22 bytes, 6 insns)
 * Folder: compiler (between: 0x00297650 and 0x00297690)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297670(void)
{

loc_00297670: ;
    PUSH32(esp, 0x64E780);
    PUSH32(esp, 0x0029767Au); RECOMP_ABI_CALL(0x000F4270u, sub_000F4270); /* call 0x000F4270 */

loc_0029767A: ;
    PUSH32(esp, 0x297830);
    PUSH32(esp, 0x00297684u); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_00297684: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00297690
 * Original: 0x00297690 - 0x0029769A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297690: ;
    eax = 0x64E7C0;
    g_seh_ebp = ebp; sub_000F0F20(); return; /* tail jmp 0x000F0F20 */

}

/**
 * sub_002976A0
 * Original: 0x002976A0 - 0x002976AC (12 bytes, 4 insns)
 * Folder: compiler (between: 0x00297690 and 0x002976D0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002976A0(void)
{

loc_002976A0: ;
    PUSH32(esp, 0x297840);
    PUSH32(esp, 0x002976AAu); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_002976AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002976B0
 * Original: 0x002976B0 - 0x002976CA (26 bytes, 8 insns)
 * Folder: compiler (between: 0x00297690 and 0x002976D0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002976B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002976B0: ;
    PUSH32(esp, esi);
    esi = 0x64ED98;
    PUSH32(esp, 0x002976BBu); RECOMP_ABI_CALL(0x000F34E0u, sub_000F34E0); /* call 0x000F34E0 */

loc_002976BB: ;
    PUSH32(esp, 0x297850);
    PUSH32(esp, 0x002976C5u); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_002976C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002976D0
 * Original: 0x002976D0 - 0x002976DA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002976D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002976D0: ;
    eax = 0x64EDA4;
    g_seh_ebp = ebp; sub_000F4E20(); return; /* tail jmp 0x000F4E20 */

}

/**
 * sub_002976E0
 * Original: 0x002976E0 - 0x002976FA (26 bytes, 8 insns)
 * Folder: compiler (between: 0x002976D0 and 0x002977A0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002976E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002976E0: ;
    PUSH32(esp, esi);
    esi = 0x64EDC8;
    PUSH32(esp, 0x002976EBu); RECOMP_ABI_CALL(0x001086D0u, sub_001086D0); /* call 0x001086D0 */

loc_002976EB: ;
    PUSH32(esp, 0x297860);
    PUSH32(esp, 0x002976F5u); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_002976F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00297700
 * Original: 0x00297700 - 0x0029771A (26 bytes, 8 insns)
 * Folder: compiler (between: 0x002976D0 and 0x002977A0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00297700: ;
    PUSH32(esp, esi);
    esi = 0x64EDD4;
    PUSH32(esp, 0x0029770Bu); RECOMP_ABI_CALL(0x000F93D0u, sub_000F93D0); /* call 0x000F93D0 */

loc_0029770B: ;
    PUSH32(esp, 0x297870);
    PUSH32(esp, 0x00297715u); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_00297715: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00297720
 * Original: 0x00297720 - 0x0029773A (26 bytes, 8 insns)
 * Folder: compiler (between: 0x002976D0 and 0x002977A0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00297720: ;
    PUSH32(esp, esi);
    esi = 0x64EDE0;
    PUSH32(esp, 0x0029772Bu); RECOMP_ABI_CALL(0x001086D0u, sub_001086D0); /* call 0x001086D0 */

loc_0029772B: ;
    PUSH32(esp, 0x297880);
    PUSH32(esp, 0x00297735u); RECOMP_ABI_CALL(0x0028B123u, sub_0028B123); /* call 0x0028B123 */

loc_00297735: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00297740
 * Original: 0x00297740 - 0x0029774B (11 bytes, 3 insns)
 * Folder: compiler (between: 0x002976D0 and 0x002977A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297740(void)
{

loc_00297740: ;
    PUSH32(esp, 0x653AF8);
    PUSH32(esp, 0x0029774Au); RECOMP_ABI_CALL(0x00011530u, sub_00011530); /* call 0x00011530 */

loc_0029774A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297750
 * Original: 0x00297750 - 0x0029775B (11 bytes, 3 insns)
 * Folder: compiler (between: 0x002976D0 and 0x002977A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297750(void)
{

loc_00297750: ;
    PUSH32(esp, 0x650C70);
    PUSH32(esp, 0x0029775Au); RECOMP_ABI_CALL(0x00011530u, sub_00011530); /* call 0x00011530 */

loc_0029775A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297760
 * Original: 0x00297760 - 0x00297791 (49 bytes, 10 insns)
 * Folder: compiler (between: 0x002976D0 and 0x002977A0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00297760: ;
    eax = MEM32(0x64D958);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00297772; /* je: equal / zero */

loc_00297769: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029776Fu); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_0029776F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00297772: ;
    MEM32(0x64D958) = 0;
    MEM32(0x64D95C) = 0;
    MEM32(0x64D960) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_002977A0
 * Original: 0x002977A0 - 0x002977AA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002977A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002977A0: ;
    eax = 0x64D964;
    g_seh_ebp = ebp; sub_00019B10(); return; /* tail jmp 0x00019B10 */

}

/**
 * sub_002977B0
 * Original: 0x002977B0 - 0x002977BD (13 bytes, 5 insns)
 * Folder: compiler (between: 0x002977A0 and 0x002977E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002977B0(void)
{

loc_002977B0: ;
    PUSH32(esp, esi);
    esi = 0x64D970;
    PUSH32(esp, 0x002977BBu); RECOMP_ABI_CALL(0x00016A20u, sub_00016A20); /* call 0x00016A20 */

loc_002977BB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002977C0
 * Original: 0x002977C0 - 0x002977CD (13 bytes, 5 insns)
 * Folder: compiler (between: 0x002977A0 and 0x002977E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002977C0(void)
{

loc_002977C0: ;
    PUSH32(esp, esi);
    esi = 0x64D980;
    PUSH32(esp, 0x002977CBu); RECOMP_ABI_CALL(0x00016A20u, sub_00016A20); /* call 0x00016A20 */

loc_002977CB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002977D0
 * Original: 0x002977D0 - 0x002977D1 (1 bytes, 1 insns)
 * Folder: compiler (between: 0x002977A0 and 0x002977E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002977D0(void)
{

loc_002977D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002977E0
 * Original: 0x002977E0 - 0x002977EA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002977E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002977E0: ;
    eax = 0x64DA18;
    g_seh_ebp = ebp; sub_000C7A90(); return; /* tail jmp 0x000C7A90 */

}

/**
 * sub_002977F0
 * Original: 0x002977F0 - 0x002977FA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002977F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002977F0: ;
    eax = 0x64DA24;
    g_seh_ebp = ebp; sub_000C7A90(); return; /* tail jmp 0x000C7A90 */

}

/**
 * sub_00297800
 * Original: 0x00297800 - 0x0029780A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297800: ;
    eax = 0x64DA3C;
    g_seh_ebp = ebp; sub_000D9F10(); return; /* tail jmp 0x000D9F10 */

}

/**
 * sub_00297810
 * Original: 0x00297810 - 0x0029781A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297810: ;
    eax = 0x64DA30;
    g_seh_ebp = ebp; sub_000D9F10(); return; /* tail jmp 0x000D9F10 */

}

/**
 * sub_00297820
 * Original: 0x00297820 - 0x0029782A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297820: ;
    eax = 0x64DA48;
    g_seh_ebp = ebp; sub_000D9F10(); return; /* tail jmp 0x000D9F10 */

}

/**
 * sub_00297830
 * Original: 0x00297830 - 0x0029783D (13 bytes, 5 insns)
 * Folder: compiler (between: 0x00297820 and 0x00297850)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297830(void)
{

loc_00297830: ;
    PUSH32(esp, esi);
    esi = 0x64E780;
    PUSH32(esp, 0x0029783Bu); RECOMP_ABI_CALL(0x000EF1F0u, sub_000EF1F0); /* call 0x000EF1F0 */

loc_0029783B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00297840
 * Original: 0x00297840 - 0x0029784D (13 bytes, 5 insns)
 * Folder: compiler (between: 0x00297820 and 0x00297850)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297840(void)
{

loc_00297840: ;
    PUSH32(esp, esi);
    esi = 0x64ECE0;
    PUSH32(esp, 0x0029784Bu); RECOMP_ABI_CALL(0x000F21B0u, sub_000F21B0); /* call 0x000F21B0 */

loc_0029784B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00297850
 * Original: 0x00297850 - 0x0029785A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297850: ;
    eax = 0x64ED98;
    g_seh_ebp = ebp; sub_000F3510(); return; /* tail jmp 0x000F3510 */

}

/**
 * sub_00297860
 * Original: 0x00297860 - 0x0029786A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297860: ;
    eax = 0x64EDC8;
    g_seh_ebp = ebp; sub_000F8020(); return; /* tail jmp 0x000F8020 */

}

/**
 * sub_00297870
 * Original: 0x00297870 - 0x0029787A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297870: ;
    eax = 0x64EDD4;
    g_seh_ebp = ebp; sub_000F8880(); return; /* tail jmp 0x000F8880 */

}

/**
 * sub_00297880
 * Original: 0x00297880 - 0x0029788A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297880: ;
    eax = 0x64EDE0;
    g_seh_ebp = ebp; sub_00108120(); return; /* tail jmp 0x00108120 */

}

/**
 * sub_00297890
 * Original: 0x00297890 - 0x0029789B (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00297880 and 0x002978F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297890(void)
{

loc_00297890: ;
    PUSH32(esp, 0x6542FC);
    PUSH32(esp, 0x0029789Au); RECOMP_ABI_CALL(0x00273290u, sub_00273290); /* call 0x00273290 */

loc_0029789A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002978A0
 * Original: 0x002978A0 - 0x002978AB (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00297880 and 0x002978F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002978A0(void)
{

loc_002978A0: ;
    PUSH32(esp, 0x6542F4);
    PUSH32(esp, 0x002978AAu); RECOMP_ABI_CALL(0x00273290u, sub_00273290); /* call 0x00273290 */

loc_002978AA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002978B0
 * Original: 0x002978B0 - 0x002978BB (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00297880 and 0x002978F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002978B0(void)
{

loc_002978B0: ;
    PUSH32(esp, 0x6542EC);
    PUSH32(esp, 0x002978BAu); RECOMP_ABI_CALL(0x00273290u, sub_00273290); /* call 0x00273290 */

loc_002978BA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002978C0
 * Original: 0x002978C0 - 0x002978CD (13 bytes, 5 insns)
 * Folder: compiler (between: 0x00297880 and 0x002978F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002978C0(void)
{

loc_002978C0: ;
    PUSH32(esp, edi);
    edi = 0x654264;
    PUSH32(esp, 0x002978CBu); RECOMP_ABI_CALL(0x00273350u, sub_00273350); /* call 0x00273350 */

loc_002978CB: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002978D0
 * Original: 0x002978D0 - 0x002978DB (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00297880 and 0x002978F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002978D0(void)
{

loc_002978D0: ;
    PUSH32(esp, 0x6543E8);
    PUSH32(esp, 0x002978DAu); RECOMP_ABI_CALL(0x00274E20u, sub_00274E20); /* call 0x00274E20 */

loc_002978DA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002978E0
 * Original: 0x002978E0 - 0x002978EB (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00297880 and 0x002978F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002978E0(void)
{

loc_002978E0: ;
    PUSH32(esp, 0x6542BC);
    PUSH32(esp, 0x002978EAu); RECOMP_ABI_CALL(0x00276490u, sub_00276490); /* call 0x00276490 */

loc_002978EA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002978F0
 * Original: 0x002978F0 - 0x002978FA (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002978F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002978F0: ;
    eax = 0x653CA8;
    g_seh_ebp = ebp; sub_00276780(); return; /* tail jmp 0x00276780 */

}

/**
 * sub_00297900
 * Original: 0x00297900 - 0x0029790A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297900: ;
    eax = 0x650C98;
    g_seh_ebp = ebp; sub_00276E00(); return; /* tail jmp 0x00276E00 */

}

/**
 * sub_00297910
 * Original: 0x00297910 - 0x0029791B (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00297900 and 0x0029793B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297910(void)
{

loc_00297910: ;
    PUSH32(esp, 0x654368);
    PUSH32(esp, 0x0029791Au); RECOMP_ABI_CALL(0x0027AD40u, sub_0027AD40); /* call 0x0027AD40 */

loc_0029791A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297920
 * Original: 0x00297920 - 0x0029792B (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00297900 and 0x0029793B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297920(void)
{

loc_00297920: ;
    PUSH32(esp, 0x6541FC);
    PUSH32(esp, 0x0029792Au); RECOMP_ABI_CALL(0x0027CE50u, sub_0027CE50); /* call 0x0027CE50 */

loc_0029792A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297930
 * Original: 0x00297930 - 0x0029793B (11 bytes, 3 insns)
 * Folder: compiler (between: 0x00297900 and 0x0029793B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297930(void)
{

loc_00297930: ;
    PUSH32(esp, 0x65434C);
    PUSH32(esp, 0x0029793Au); RECOMP_ABI_CALL(0x00273290u, sub_00273290); /* call 0x00273290 */

loc_0029793A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029793B
 * Original: 0x0029793B - 0x00297945 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029793B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029793B: ;
    ecx = 0x349EE8;
    g_seh_ebp = ebp; sub_0028A429(); return; /* tail jmp 0x0028A429 */

}
