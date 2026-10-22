/**
 * PoP Warrior Within Xbox retail - compiler, chunk 0
 * Compiler-generated C++ exception unwinding and global set-up (.text$x, .text$yc/yd)
 * Functions: 250 (0x0048A07B - 0x0048AF10)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_0048A07B
 * Original: 0x0048A07B - 0x0048A085 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A07B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A07B: ;
    eax = 0x587410;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048A090
 * Original: 0x0048A090 - 0x0048A098 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A07B and 0x0048A0A3)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A090: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_00464810(); return; /* tail jmp 0x00464810 */

}

/**
 * sub_0048A098
 * Original: 0x0048A098 - 0x0048A0A3 (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048A07B and 0x0048A0A3)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A098(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A098: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048A0A1u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048A0A1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048A0A3
 * Original: 0x0048A0A3 - 0x0048A0AD (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A0A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A0A3: ;
    eax = 0x58743C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048A0B0
 * Original: 0x0048A0B0 - 0x0048A0B8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A0A3 and 0x0048A0D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A0B0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00464810(); return; /* tail jmp 0x00464810 */

}

/**
 * sub_0048A0D0
 * Original: 0x0048A0D0 - 0x0048A0D8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A0D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A0D0: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A0F0
 * Original: 0x0048A0F0 - 0x0048A0F8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A0F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A0F0: ;
    ecx = ebp + 0x60;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A0F8
 * Original: 0x0048A0F8 - 0x0048A100 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A0F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A0F8: ;
    ecx = ebp + 0x44;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A100
 * Original: 0x0048A100 - 0x0048A108 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A100: ;
    ecx = ebp + 0x28;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A108
 * Original: 0x0048A108 - 0x0048A120 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A108(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A108: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x5874C0;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048A120
 * Original: 0x0048A120 - 0x0048A12B (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A120: ;
    ecx = MEM32(ebp + -536);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A12B
 * Original: 0x0048A12B - 0x0048A136 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A12B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A12B: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A136
 * Original: 0x0048A136 - 0x0048A141 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A136(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A136: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A141
 * Original: 0x0048A141 - 0x0048A14C (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A141(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A141: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A14C
 * Original: 0x0048A14C - 0x0048A157 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A14C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A14C: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A157
 * Original: 0x0048A157 - 0x0048A162 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A157(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A157: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A162
 * Original: 0x0048A162 - 0x0048A16D (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A162(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A162: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A16D
 * Original: 0x0048A16D - 0x0048A178 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A16D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A16D: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A178
 * Original: 0x0048A178 - 0x0048A183 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A178(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A178: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A183
 * Original: 0x0048A183 - 0x0048A18E (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A183(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A183: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A18E
 * Original: 0x0048A18E - 0x0048A199 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A18E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A18E: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A199
 * Original: 0x0048A199 - 0x0048A1A4 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A199(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A199: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A1A4
 * Original: 0x0048A1A4 - 0x0048A1AF (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A1A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A1A4: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A1AF
 * Original: 0x0048A1AF - 0x0048A1BA (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A1AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A1AF: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A1BA
 * Original: 0x0048A1BA - 0x0048A1C5 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A1BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A1BA: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A1C5
 * Original: 0x0048A1C5 - 0x0048A1D0 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A1C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A1C5: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A1D0
 * Original: 0x0048A1D0 - 0x0048A1DB (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A1D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A1D0: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A1DB
 * Original: 0x0048A1DB - 0x0048A1E6 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A1DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A1DB: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A1E6
 * Original: 0x0048A1E6 - 0x0048A1F1 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A1E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A1E6: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A1F1
 * Original: 0x0048A1F1 - 0x0048A1FC (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A1F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A1F1: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A1FC
 * Original: 0x0048A1FC - 0x0048A207 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A1FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A1FC: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A207
 * Original: 0x0048A207 - 0x0048A212 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A207(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A207: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A212
 * Original: 0x0048A212 - 0x0048A21D (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A212(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A212: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A21D
 * Original: 0x0048A21D - 0x0048A228 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A21D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A21D: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A228
 * Original: 0x0048A228 - 0x0048A233 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A228(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A228: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A233
 * Original: 0x0048A233 - 0x0048A23E (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A233(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A233: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A23E
 * Original: 0x0048A23E - 0x0048A249 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A23E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A23E: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A249
 * Original: 0x0048A249 - 0x0048A254 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A249(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A249: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A254
 * Original: 0x0048A254 - 0x0048A25F (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A254(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A254: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A25F
 * Original: 0x0048A25F - 0x0048A26A (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A25F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A25F: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A26A
 * Original: 0x0048A26A - 0x0048A275 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A26A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A26A: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A275
 * Original: 0x0048A275 - 0x0048A280 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A275(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A275: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A280
 * Original: 0x0048A280 - 0x0048A28B (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A280: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A28B
 * Original: 0x0048A28B - 0x0048A296 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A28B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A28B: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A296
 * Original: 0x0048A296 - 0x0048A2A1 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A296(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A296: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A2A1
 * Original: 0x0048A2A1 - 0x0048A2AC (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A2A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A2A1: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A2AC
 * Original: 0x0048A2AC - 0x0048A2B7 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A2AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A2AC: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A2B7
 * Original: 0x0048A2B7 - 0x0048A2C2 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A2B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A2B7: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A2C2
 * Original: 0x0048A2C2 - 0x0048A2CD (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A2C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A2C2: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A2CD
 * Original: 0x0048A2CD - 0x0048A2D8 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A2CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A2CD: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A2D8
 * Original: 0x0048A2D8 - 0x0048A2E3 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A2D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A2D8: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A2E3
 * Original: 0x0048A2E3 - 0x0048A2EE (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A2E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A2E3: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A2EE
 * Original: 0x0048A2EE - 0x0048A2F9 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A2EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A2EE: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A2F9
 * Original: 0x0048A2F9 - 0x0048A304 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A2F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A2F9: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A304
 * Original: 0x0048A304 - 0x0048A30F (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A304(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A304: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A30F
 * Original: 0x0048A30F - 0x0048A31A (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A30F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A30F: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A31A
 * Original: 0x0048A31A - 0x0048A325 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A31A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A31A: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A325
 * Original: 0x0048A325 - 0x0048A330 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A325(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A325: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A330
 * Original: 0x0048A330 - 0x0048A33B (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A330: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A33B
 * Original: 0x0048A33B - 0x0048A346 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A33B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A33B: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A346
 * Original: 0x0048A346 - 0x0048A351 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A346(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A346: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A351
 * Original: 0x0048A351 - 0x0048A35C (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A351(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A351: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A35C
 * Original: 0x0048A35C - 0x0048A367 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A35C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A35C: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A367
 * Original: 0x0048A367 - 0x0048A372 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A367(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A367: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A372
 * Original: 0x0048A372 - 0x0048A37D (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A372(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A372: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A37D
 * Original: 0x0048A37D - 0x0048A388 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A37D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A37D: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A388
 * Original: 0x0048A388 - 0x0048A393 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A388(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A388: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A393
 * Original: 0x0048A393 - 0x0048A39E (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A393(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A393: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A39E
 * Original: 0x0048A39E - 0x0048A3A9 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A39E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A39E: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A3A9
 * Original: 0x0048A3A9 - 0x0048A3B4 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A3A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A3A9: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A3B4
 * Original: 0x0048A3B4 - 0x0048A3BF (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A3B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A3B4: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A3BF
 * Original: 0x0048A3BF - 0x0048A3CA (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A3BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A3BF: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A3CA
 * Original: 0x0048A3CA - 0x0048A3D5 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A3CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A3CA: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A3D5
 * Original: 0x0048A3D5 - 0x0048A3E0 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A3D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A3D5: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A3E0
 * Original: 0x0048A3E0 - 0x0048A3EB (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A3E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A3E0: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A3EB
 * Original: 0x0048A3EB - 0x0048A3F6 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A3EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A3EB: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A3F6
 * Original: 0x0048A3F6 - 0x0048A401 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A3F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A3F6: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A401
 * Original: 0x0048A401 - 0x0048A40C (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A401(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A401: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A40C
 * Original: 0x0048A40C - 0x0048A417 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A40C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A40C: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A417
 * Original: 0x0048A417 - 0x0048A422 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A417(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A417: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A422
 * Original: 0x0048A422 - 0x0048A42D (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A422(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A422: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A42D
 * Original: 0x0048A42D - 0x0048A438 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A42D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A42D: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A438
 * Original: 0x0048A438 - 0x0048A443 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A438(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A438: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A443
 * Original: 0x0048A443 - 0x0048A44E (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A443(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A443: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A44E
 * Original: 0x0048A44E - 0x0048A459 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A44E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A44E: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A459
 * Original: 0x0048A459 - 0x0048A464 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A459(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A459: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A464
 * Original: 0x0048A464 - 0x0048A46F (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A464(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A464: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A46F
 * Original: 0x0048A46F - 0x0048A47A (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A46F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A46F: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A47A
 * Original: 0x0048A47A - 0x0048A485 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A47A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A47A: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A485
 * Original: 0x0048A485 - 0x0048A490 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A485(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A485: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A490
 * Original: 0x0048A490 - 0x0048A49B (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A490: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A49B
 * Original: 0x0048A49B - 0x0048A4A6 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A49B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A49B: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A4A6
 * Original: 0x0048A4A6 - 0x0048A4B1 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A4A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A4A6: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A4B1
 * Original: 0x0048A4B1 - 0x0048A4BC (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A4B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A4B1: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A4BC
 * Original: 0x0048A4BC - 0x0048A4C7 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A4BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A4BC: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A4C7
 * Original: 0x0048A4C7 - 0x0048A4D2 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A4C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A4C7: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A4D2
 * Original: 0x0048A4D2 - 0x0048A4DD (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A4D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A4D2: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A4DD
 * Original: 0x0048A4DD - 0x0048A4E8 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A4DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A4DD: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A4E8
 * Original: 0x0048A4E8 - 0x0048A4F3 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A4E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A4E8: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A4F3
 * Original: 0x0048A4F3 - 0x0048A4FE (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A4F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A4F3: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A4FE
 * Original: 0x0048A4FE - 0x0048A509 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A4FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A4FE: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A509
 * Original: 0x0048A509 - 0x0048A514 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A509(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A509: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A514
 * Original: 0x0048A514 - 0x0048A51F (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A514(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A514: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A51F
 * Original: 0x0048A51F - 0x0048A52A (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A51F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A51F: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A52A
 * Original: 0x0048A52A - 0x0048A535 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A52A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A52A: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A535
 * Original: 0x0048A535 - 0x0048A540 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A535(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A535: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A540
 * Original: 0x0048A540 - 0x0048A54B (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A540: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A54B
 * Original: 0x0048A54B - 0x0048A556 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A54B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A54B: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A556
 * Original: 0x0048A556 - 0x0048A561 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A556(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A556: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A561
 * Original: 0x0048A561 - 0x0048A56C (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A561(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A561: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A56C
 * Original: 0x0048A56C - 0x0048A577 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A56C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A56C: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A577
 * Original: 0x0048A577 - 0x0048A582 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A577(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A577: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A582
 * Original: 0x0048A582 - 0x0048A58D (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A582(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A582: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A58D
 * Original: 0x0048A58D - 0x0048A598 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A58D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A58D: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A598
 * Original: 0x0048A598 - 0x0048A5A3 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A598(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A598: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A5A3
 * Original: 0x0048A5A3 - 0x0048A5AE (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A5A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A5A3: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A5AE
 * Original: 0x0048A5AE - 0x0048A5B9 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A5AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A5AE: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A5B9
 * Original: 0x0048A5B9 - 0x0048A5C4 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A5B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A5B9: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A5C4
 * Original: 0x0048A5C4 - 0x0048A5CF (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A5C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A5C4: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A5CF
 * Original: 0x0048A5CF - 0x0048A5DA (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A5CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A5CF: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A5DA
 * Original: 0x0048A5DA - 0x0048A5E5 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A5DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A5DA: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A5E5
 * Original: 0x0048A5E5 - 0x0048A5F0 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A5E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A5E5: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A5F0
 * Original: 0x0048A5F0 - 0x0048A5FB (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A5F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A5F0: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A5FB
 * Original: 0x0048A5FB - 0x0048A606 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A5FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A5FB: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A606
 * Original: 0x0048A606 - 0x0048A611 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A606(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A606: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A611
 * Original: 0x0048A611 - 0x0048A61C (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A611(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A611: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A61C
 * Original: 0x0048A61C - 0x0048A627 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A61C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A61C: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A627
 * Original: 0x0048A627 - 0x0048A632 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A627(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A627: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A632
 * Original: 0x0048A632 - 0x0048A63D (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A632(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A632: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A63D
 * Original: 0x0048A63D - 0x0048A648 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A63D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A63D: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A648
 * Original: 0x0048A648 - 0x0048A653 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A648(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A648: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A653
 * Original: 0x0048A653 - 0x0048A65E (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A653(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A653: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A65E
 * Original: 0x0048A65E - 0x0048A669 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A65E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A65E: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A669
 * Original: 0x0048A669 - 0x0048A674 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A669(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A669: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A674
 * Original: 0x0048A674 - 0x0048A67F (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A674(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A674: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A67F
 * Original: 0x0048A67F - 0x0048A68A (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A67F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A67F: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A68A
 * Original: 0x0048A68A - 0x0048A695 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A68A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A68A: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A695
 * Original: 0x0048A695 - 0x0048A6A0 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A695(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A695: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A6A0
 * Original: 0x0048A6A0 - 0x0048A6AB (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A6A0: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A6AB
 * Original: 0x0048A6AB - 0x0048A6B6 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A6AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A6AB: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A6B6
 * Original: 0x0048A6B6 - 0x0048A6C1 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A6B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A6B6: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A6C1
 * Original: 0x0048A6C1 - 0x0048A6CC (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A6C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A6C1: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A6CC
 * Original: 0x0048A6CC - 0x0048A6D7 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A6CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A6CC: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A6D7
 * Original: 0x0048A6D7 - 0x0048A6E2 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A6D7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A6D7: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A6E2
 * Original: 0x0048A6E2 - 0x0048A6ED (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A6E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A6E2: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A6ED
 * Original: 0x0048A6ED - 0x0048A6F8 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A6ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A6ED: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A6F8
 * Original: 0x0048A6F8 - 0x0048A703 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A6F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A6F8: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A703
 * Original: 0x0048A703 - 0x0048A70E (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A703(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A703: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A70E
 * Original: 0x0048A70E - 0x0048A719 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A70E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A70E: ;
    ecx = MEM32(ebp + -544);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A719
 * Original: 0x0048A719 - 0x0048A724 (11 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A719(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A719: ;
    ecx = MEM32(ebp + -548);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A724
 * Original: 0x0048A724 - 0x0048A740 (28 bytes, 11 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A724(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A724: ;
    ecx = MEM32(ebp + -540);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x587944;
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
 * sub_0048A740
 * Original: 0x0048A740 - 0x0048A74B (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A740: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048A749u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048A749: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048A74B
 * Original: 0x0048A74B - 0x0048A760 (21 bytes, 7 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A74B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A74B: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_0045B310(); return; /* tail jmp 0x0045B310 */

    eax = 0x587970;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048A760
 * Original: 0x0048A760 - 0x0048A76B (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048A100 and 0x0048A76B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A760: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048A769u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048A769: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048A76B
 * Original: 0x0048A76B - 0x0048A775 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A76B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A76B: ;
    eax = 0x587994;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048A780
 * Original: 0x0048A780 - 0x0048A78B (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048A76B and 0x0048A78B)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A780: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048A789u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048A789: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048A78B
 * Original: 0x0048A78B - 0x0048A795 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A78B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A78B: ;
    eax = 0x5879B8;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048A7A0
 * Original: 0x0048A7A0 - 0x0048A7AB (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048A78B and 0x0048A7AB)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A7A0: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048A7A9u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048A7A9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048A7AB
 * Original: 0x0048A7AB - 0x0048A7B5 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A7AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A7AB: ;
    eax = 0x5879DC;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048A7C0
 * Original: 0x0048A7C0 - 0x0048A7CB (11 bytes, 5 insns)
 * Folder: compiler (between: 0x0048A7AB and 0x0048A7CB)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A7C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A7C0: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048A7C9u); RECOMP_ABI_CALL(0x0047D8C6u, sub_0047D8C6); /* call 0x0047D8C6 */

loc_0048A7C9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0048A7CB
 * Original: 0x0048A7CB - 0x0048A7D5 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A7CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A7CB: ;
    eax = 0x587A00;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048A7E0
 * Original: 0x0048A7E0 - 0x0048A7E8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A7E0: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_0045F3F0(); return; /* tail jmp 0x0045F3F0 */

}

/**
 * sub_0048A800
 * Original: 0x0048A800 - 0x0048A808 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A800: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A820
 * Original: 0x0048A820 - 0x0048A828 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A820: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A840
 * Original: 0x0048A840 - 0x0048A848 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A840: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A848
 * Original: 0x0048A848 - 0x0048A850 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A848(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A848: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A850
 * Original: 0x0048A850 - 0x0048A870 (32 bytes, 18 insns)
 * Folder: compiler (between: 0x0048A848 and 0x0048A870)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A850: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x587AA0;
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
 * sub_0048A870
 * Original: 0x0048A870 - 0x0048A878 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A870: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A890
 * Original: 0x0048A890 - 0x0048A8A1 (17 bytes, 7 insns)
 * Folder: compiler (between: 0x0048A870 and 0x0048A8A1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A890: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0048A89Du); RECOMP_ABI_CALL(0x0008CE90u, sub_0008CE90); /* call 0x0008CE90 */

loc_0048A89D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0048A8A1
 * Original: 0x0048A8A1 - 0x0048A8AB (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A8A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A8A1: ;
    eax = 0x587B1C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048A8B0
 * Original: 0x0048A8B0 - 0x0048A8B8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A8B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A8B0: ;
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_0045F940(); return; /* tail jmp 0x0045F940 */

}

/**
 * sub_0048A8B8
 * Original: 0x0048A8B8 - 0x0048A8D0 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x0048A8B0 and 0x0048A8F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A8B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A8B8: ;
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_0045F940(); return; /* tail jmp 0x0045F940 */

    eax = 0x587B48;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048A8D0
 * Original: 0x0048A8D0 - 0x0048A8D8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A8B0 and 0x0048A8F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A8D0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0046D840(); return; /* tail jmp 0x0046D840 */

}

/**
 * sub_0048A8D8
 * Original: 0x0048A8D8 - 0x0048A8F0 (24 bytes, 5 insns)
 * Folder: compiler (between: 0x0048A8B0 and 0x0048A8F0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A8D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A8D8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0045FF80(); return; /* tail jmp 0x0045FF80 */

    eax = 0x587B74;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048A8F0
 * Original: 0x0048A8F0 - 0x0048A8F8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A8F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A8F0: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_0045F3F0(); return; /* tail jmp 0x0045F3F0 */

}

/**
 * sub_0048A8F8
 * Original: 0x0048A8F8 - 0x0048A910 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x0048A8F0 and 0x0048A910)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A8F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A8F8: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_0045F3F0(); return; /* tail jmp 0x0045F3F0 */

    eax = 0x587BC4;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048A910
 * Original: 0x0048A910 - 0x0048A918 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A910: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A930
 * Original: 0x0048A930 - 0x0048A938 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A930: ;
    ecx = ebp + 0x10;
    g_seh_ebp = ebp; sub_00018CC0(); return; /* tail jmp 0x00018CC0 */

}

/**
 * sub_0048A950
 * Original: 0x0048A950 - 0x0048A958 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A930 and 0x0048A990)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A950: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00468910(); return; /* tail jmp 0x00468910 */

}

/**
 * sub_0048A958
 * Original: 0x0048A958 - 0x0048A970 (24 bytes, 8 insns)
 * Folder: compiler (between: 0x0048A930 and 0x0048A990)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A958(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A958: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00470810(); return; /* tail jmp 0x00470810 */

    eax = 0x587CA0;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048A970
 * Original: 0x0048A970 - 0x0048A978 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A930 and 0x0048A990)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A970: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00468910(); return; /* tail jmp 0x00468910 */

}

/**
 * sub_0048A990
 * Original: 0x0048A990 - 0x0048A998 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A990: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00018CC0(); return; /* tail jmp 0x00018CC0 */

}

/**
 * sub_0048A9B0
 * Original: 0x0048A9B0 - 0x0048A9B8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A9B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A9B0: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048A9D0
 * Original: 0x0048A9D0 - 0x0048A9D8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048A9B0 and 0x0048AA10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A9D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A9D0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00470850(); return; /* tail jmp 0x00470850 */

}

/**
 * sub_0048A9D8
 * Original: 0x0048A9D8 - 0x0048A9EE (22 bytes, 8 insns)
 * Folder: compiler (between: 0x0048A9B0 and 0x0048AA10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A9D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A9D8: ;
    PUSH32(esp, 0x192F0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x1C);
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048A9EDu); RECOMP_ABI_CALL(0x004801C5u, sub_004801C5); /* call 0x004801C5 */

loc_0048A9ED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048A9EE
 * Original: 0x0048A9EE - 0x0048AA10 (34 bytes, 15 insns)
 * Folder: compiler (between: 0x0048A9B0 and 0x0048AA10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048A9EE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048A9EE: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xD4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00470810(); return; /* tail jmp 0x00470810 */

    eax = 0x587D1C;
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
 * sub_0048AA10
 * Original: 0x0048AA10 - 0x0048AA18 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AA10: ;
    ecx = ebp + 0x10;
    g_seh_ebp = ebp; sub_00018CC0(); return; /* tail jmp 0x00018CC0 */

}

/**
 * sub_0048AA30
 * Original: 0x0048AA30 - 0x0048AA38 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048AA10 and 0x0048AA4E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AA30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AA30: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00470850(); return; /* tail jmp 0x00470850 */

}

/**
 * sub_0048AA38
 * Original: 0x0048AA38 - 0x0048AA4E (22 bytes, 8 insns)
 * Folder: compiler (between: 0x0048AA10 and 0x0048AA4E)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AA38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AA38: ;
    PUSH32(esp, 0x192F0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x1C);
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0048AA4Du); RECOMP_ABI_CALL(0x004801C5u, sub_004801C5); /* call 0x004801C5 */

loc_0048AA4D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0048AA4E
 * Original: 0x0048AA4E - 0x0048AA58 (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AA4E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AA4E: ;
    eax = 0x587DD4;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048AA60
 * Original: 0x0048AA60 - 0x0048AA68 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AA60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AA60: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00018CC0(); return; /* tail jmp 0x00018CC0 */

}

/**
 * sub_0048AA80
 * Original: 0x0048AA80 - 0x0048AA88 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048AA60 and 0x0048AAA0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AA80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AA80: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048AAA0
 * Original: 0x0048AAA0 - 0x0048AAA8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AAA0: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048AAC0
 * Original: 0x0048AAC0 - 0x0048AAD1 (17 bytes, 7 insns)
 * Folder: compiler (between: 0x0048AAA0 and 0x0048AAD1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AAC0: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0048AACDu); RECOMP_ABI_CALL(0x0008CE90u, sub_0008CE90); /* call 0x0008CE90 */

loc_0048AACD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0048AAD1
 * Original: 0x0048AAD1 - 0x0048AADB (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AAD1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AAD1: ;
    eax = 0x587E98;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048AAE0
 * Original: 0x0048AAE0 - 0x0048AAF1 (17 bytes, 7 insns)
 * Folder: compiler (between: 0x0048AAD1 and 0x0048AAF1)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AAE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AAE0: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0048AAEDu); RECOMP_ABI_CALL(0x0008CE90u, sub_0008CE90); /* call 0x0008CE90 */

loc_0048AAED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0048AAF1
 * Original: 0x0048AAF1 - 0x0048AAFB (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AAF1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AAF1: ;
    eax = 0x587EF0;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048AB00
 * Original: 0x0048AB00 - 0x0048AB08 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AB00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AB00: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048AB20
 * Original: 0x0048AB20 - 0x0048AB2B (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AB20: ;
    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048AB2B
 * Original: 0x0048AB2B - 0x0048AB36 (11 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AB2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AB2B: ;
    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048AB36
 * Original: 0x0048AB36 - 0x0048AB3E (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AB36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AB36: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048AB3E
 * Original: 0x0048AB3E - 0x0048AB46 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AB3E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AB3E: ;
    ecx = ebp + -124;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048AB46
 * Original: 0x0048AB46 - 0x0048AB60 (26 bytes, 12 insns)
 * Folder: compiler (between: 0x0048AB3E and 0x0048AB60)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AB46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AB46: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_00462B90(); return; /* tail jmp 0x00462B90 */

    eax = 0x587F58;
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
 * sub_0048AB60
 * Original: 0x0048AB60 - 0x0048AB68 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AB60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AB60: ;
    ecx = ebp + -100;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048AB68
 * Original: 0x0048AB68 - 0x0048AB70 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AB68(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AB68: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048AB70
 * Original: 0x0048AB70 - 0x0048AB90 (32 bytes, 18 insns)
 * Folder: compiler (between: 0x0048AB68 and 0x0048AC10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AB70: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

    eax = 0x587F8C;
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
 * sub_0048AB90
 * Original: 0x0048AB90 - 0x0048AB98 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048AB68 and 0x0048AC10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AB90: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00462F10(); return; /* tail jmp 0x00462F10 */

}

/**
 * sub_0048AB98
 * Original: 0x0048AB98 - 0x0048ABB0 (24 bytes, 8 insns)
 * Folder: compiler (between: 0x0048AB68 and 0x0048AC10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AB98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AB98: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004645C0(); return; /* tail jmp 0x004645C0 */

    eax = 0x587FB8;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048ABB0
 * Original: 0x0048ABB0 - 0x0048ABB8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048AB68 and 0x0048AC10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048ABB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048ABB0: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_00462F10(); return; /* tail jmp 0x00462F10 */

}

/**
 * sub_0048ABB8
 * Original: 0x0048ABB8 - 0x0048ABD0 (24 bytes, 8 insns)
 * Folder: compiler (between: 0x0048AB68 and 0x0048AC10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048ABB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048ABB8: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004645C0(); return; /* tail jmp 0x004645C0 */

    eax = 0x587FE4;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048ABD0
 * Original: 0x0048ABD0 - 0x0048ABDB (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048AB68 and 0x0048AC10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048ABD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048ABD0: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004647C0(); return; /* tail jmp 0x004647C0 */

}

/**
 * sub_0048ABDB
 * Original: 0x0048ABDB - 0x0048ABF0 (21 bytes, 5 insns)
 * Folder: compiler (between: 0x0048AB68 and 0x0048AC10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048ABDB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048ABDB: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00471070(); return; /* tail jmp 0x00471070 */

    eax = 0x588010;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048ABF0
 * Original: 0x0048ABF0 - 0x0048AC10 (32 bytes, 18 insns)
 * Folder: compiler (between: 0x0048AB68 and 0x0048AC10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048ABF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048ABF0: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_0045B310(); return; /* tail jmp 0x0045B310 */

    eax = 0x588034;
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
 * sub_0048AC10
 * Original: 0x0048AC10 - 0x0048AC18 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AC10: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048AC30
 * Original: 0x0048AC30 - 0x0048AC3A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AC30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AC30: ;
    eax = 0x5880DC;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048AC40
 * Original: 0x0048AC40 - 0x0048AC48 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AC40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AC40: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048AC60
 * Original: 0x0048AC60 - 0x0048AC68 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AC60: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048AC80
 * Original: 0x0048AC80 - 0x0048AC88 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AC80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AC80: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048AC88
 * Original: 0x0048AC88 - 0x0048ACA0 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x0048AC80 and 0x0048ACC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AC88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AC88: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

    eax = 0x588150;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048ACA0
 * Original: 0x0048ACA0 - 0x0048ACA8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048AC80 and 0x0048ACC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048ACA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048ACA0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0045F3F0(); return; /* tail jmp 0x0045F3F0 */

}

/**
 * sub_0048ACC0
 * Original: 0x0048ACC0 - 0x0048ACC8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048ACC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048ACC0: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_0045F3F0(); return; /* tail jmp 0x0045F3F0 */

}

/**
 * sub_0048ACE0
 * Original: 0x0048ACE0 - 0x0048ACE8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048ACE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048ACE0: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048AD00
 * Original: 0x0048AD00 - 0x0048AD11 (17 bytes, 7 insns)
 * Folder: compiler (between: 0x0048ACE0 and 0x0048AD11)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AD00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AD00: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0048AD0Du); RECOMP_ABI_CALL(0x0008CE90u, sub_0008CE90); /* call 0x0008CE90 */

loc_0048AD0D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0048AD11
 * Original: 0x0048AD11 - 0x0048AD1B (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AD11(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AD11: ;
    eax = 0x588214;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048AD20
 * Original: 0x0048AD20 - 0x0048AD31 (17 bytes, 7 insns)
 * Folder: compiler (between: 0x0048AD11 and 0x0048AD31)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AD20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AD20: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0048AD2Du); RECOMP_ABI_CALL(0x0008CE90u, sub_0008CE90); /* call 0x0008CE90 */

loc_0048AD2D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0048AD31
 * Original: 0x0048AD31 - 0x0048AD3B (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AD31(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AD31: ;
    eax = 0x58826C;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048AD40
 * Original: 0x0048AD40 - 0x0048AD4A (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AD40: ;
    eax = 0x5882BC;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048AD50
 * Original: 0x0048AD50 - 0x0048AD58 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AD50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AD50: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048AD70
 * Original: 0x0048AD70 - 0x0048AD78 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AD70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AD70: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048AD90
 * Original: 0x0048AD90 - 0x0048AD98 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048AD70 and 0x0048ADB0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AD90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AD90: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048ADB0
 * Original: 0x0048ADB0 - 0x0048ADB8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048ADB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048ADB0: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048ADB8
 * Original: 0x0048ADB8 - 0x0048ADD0 (24 bytes, 10 insns)
 * Folder: compiler (between: 0x0048ADB0 and 0x0048ADD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048ADB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048ADB8: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

    eax = 0x5883BC;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0048ADD0
 * Original: 0x0048ADD0 - 0x0048ADD8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048ADD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048ADD0: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048ADF0
 * Original: 0x0048ADF0 - 0x0048AE01 (17 bytes, 7 insns)
 * Folder: compiler (between: 0x0048ADD0 and 0x0048AE01)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048ADF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048ADF0: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0048ADFDu); RECOMP_ABI_CALL(0x0008CE90u, sub_0008CE90); /* call 0x0008CE90 */

loc_0048ADFD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0048AE01
 * Original: 0x0048AE01 - 0x0048AE0B (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AE01(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AE01: ;
    eax = 0x588438;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048AE10
 * Original: 0x0048AE10 - 0x0048AE18 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AE10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AE10: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_00014A00(); return; /* tail jmp 0x00014A00 */

}

/**
 * sub_0048AE30
 * Original: 0x0048AE30 - 0x0048AE41 (17 bytes, 7 insns)
 * Folder: compiler (between: 0x0048AE10 and 0x0048AE41)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AE30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AE30: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0048AE3Du); RECOMP_ABI_CALL(0x0008CE90u, sub_0008CE90); /* call 0x0008CE90 */

loc_0048AE3D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0048AE41
 * Original: 0x0048AE41 - 0x0048AE4B (10 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AE41(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AE41: ;
    eax = 0x5884B4;
    g_seh_ebp = ebp; sub_0048135F(); return; /* tail jmp 0x0048135F */

}

/**
 * sub_0048AE50
 * Original: 0x0048AE50 - 0x0048AE58 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AE50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AE50: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_00467630(); return; /* tail jmp 0x00467630 */

}

/**
 * sub_0048AE70
 * Original: 0x0048AE70 - 0x0048AE78 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048AE50 and 0x0048AEC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AE70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AE70: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0046A7B0(); return; /* tail jmp 0x0046A7B0 */

}

/**
 * sub_0048AE78
 * Original: 0x0048AE78 - 0x0048AE83 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048AE50 and 0x0048AEC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AE78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AE78: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00462EA0(); return; /* tail jmp 0x00462EA0 */

}

/**
 * sub_0048AE83
 * Original: 0x0048AE83 - 0x0048AE8E (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048AE50 and 0x0048AEC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AE83(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AE83: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00462EA0(); return; /* tail jmp 0x00462EA0 */

}

/**
 * sub_0048AE8E
 * Original: 0x0048AE8E - 0x0048AE99 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048AE50 and 0x0048AEC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AE8E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AE8E: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00462EA0(); return; /* tail jmp 0x00462EA0 */

}

/**
 * sub_0048AE99
 * Original: 0x0048AE99 - 0x0048AEA4 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048AE50 and 0x0048AEC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AE99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AE99: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004681C0(); return; /* tail jmp 0x004681C0 */

}

/**
 * sub_0048AEA4
 * Original: 0x0048AEA4 - 0x0048AEC0 (28 bytes, 12 insns)
 * Folder: compiler (between: 0x0048AE50 and 0x0048AEC0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AEA4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AEA4: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_004675F0(); return; /* tail jmp 0x004675F0 */

    eax = 0x58858C;
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
 * sub_0048AEC0
 * Original: 0x0048AEC0 - 0x0048AEC8 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AEC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AEC0: ;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00467630(); return; /* tail jmp 0x00467630 */

}

/**
 * sub_0048AEE0
 * Original: 0x0048AEE0 - 0x0048AEE8 (8 bytes, 2 insns)
 * Folder: compiler (between: 0x0048AEC0 and 0x0048AF10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AEE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AEE0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0045F3F0(); return; /* tail jmp 0x0045F3F0 */

}

/**
 * sub_0048AEE8
 * Original: 0x0048AEE8 - 0x0048AEF3 (11 bytes, 3 insns)
 * Folder: compiler (between: 0x0048AEC0 and 0x0048AF10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AEE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AEE8: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}

/**
 * sub_0048AEF3
 * Original: 0x0048AEF3 - 0x0048AF10 (29 bytes, 13 insns)
 * Folder: compiler (between: 0x0048AEC0 and 0x0048AF10)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AEF3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AEF3: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00471070(); return; /* tail jmp 0x00471070 */

    eax = 0x5885E4;
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
 * sub_0048AF10
 * Original: 0x0048AF10 - 0x0048AF18 (8 bytes, 2 insns)
 * Folder: compiler (funclet: unwind funclet or frame handler)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0048AF10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0048AF10: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_000192F0(); return; /* tail jmp 0x000192F0 */

}
