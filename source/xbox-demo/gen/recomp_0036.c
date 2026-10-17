/**
 * PoP SoT xbox-demo - Recompiled code chunk 36
 * Functions: 250 (0x00296CA0 - 0x0029B350)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00296CA0
 * Original: 0x00296CA0 - 0x00296CA8 (8 bytes, 2 insns)
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

/**
 * sub_00297098
 * Original: 0x00297098 - 0x002970B0 (24 bytes, 10 insns)
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

/**
 * sub_00297960
 * Original: 0x00297960 - 0x00297A78 (280 bytes, 83 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297960(void)
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

loc_00297960: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(0x2A8498);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = ecx + ebx + 0xC50;
    ecx = 0x10;
    esi = edx;
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
    esi = MEM32(0x2A7FF8);
    ecx = MEM32(eax * 4 + 0x2A6084);
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(0x2A7FF8) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00297A72; /* jne: not equal / not zero */

loc_002979A4: ;
    fp_push(MEMF(edx + 0x2C)); /* fld float */
    esi = 0x3F800000;
    fp_push(MEMF(edx + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002979F8; /* jnp: not parity */

loc_002979B8: ;
    fp_push(MEMF(0x3337C0)); /* fld float */
    fp_push(MEMF(edx + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002979F8; /* jnp: not parity */

loc_002979CA: ;
    fp_push(MEMF(edx + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(edx + 0x28)); /* fdiv dword ptr [edx + 0x28] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x2C)); /* fmul dword ptr [edx + 0x2c] */
    fp_top() = RECOMP_FP_PC(MEMF(edx + 0x3C) - fp_top()); /* fsubr dword ptr [edx + 0x3c] */
    MEMF(ebx + 0x938) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x38)); /* fsub dword ptr [edx + 0x38] */
    fp_push(MEMF(edx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x2C)); /* fsub dword ptr [edx + 0x2c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x2C)); /* fmul dword ptr [edx + 0x2c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x3C)); /* fadd dword ptr [edx + 0x3c] */
    MEMF(ebx + 0x93C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00297A08;

loc_002979F8: ;
    MEM32(ebx + 0x938) = 0;
    MEM32(ebx + 0x93C) = esi;

loc_00297A08: ;
    fp_push(MEMF(0x3337A0)); /* fld float */
    eax = MEM32(ebx + 8);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebx + 0x93C)); /* fdiv dword ptr [ebx + 0x93c] */
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 8) = eax;
    ecx = eax;
    MEMF(ebx + 0x940) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3337C0)); /* fld float */
    fp_push(MEMF(edx + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00297A66; /* jp: parity */

loc_00297A37: ;
    fp_push(MEMF(0x3337C0)); /* fld float */
    fp_push(MEMF(edx + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00297A66; /* jp: parity */

loc_00297A49: ;
    fp_push(MEMF(0x3337C0)); /* fld float */
    fp_push(MEMF(edx + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00297A66; /* jp: parity */

loc_00297A5B: ;
    _fa = (uint32_t)(MEM32(edx + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x3C), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00297A66; /* jne: not equal / not zero */

loc_00297A60: ;
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 8) = ecx;

loc_00297A66: ;
    PUSH32(esp, 0x00297A6Bu); RECOMP_ABI_CALL(0x0029AFF0u, sub_0029AFF0); /* call 0x0029AFF0 */

loc_00297A6B: ;
    ecx = ebx;
    PUSH32(esp, 0x00297A72u); RECOMP_ABI_CALL(0x0029A9F0u, sub_0029A9F0); /* call 0x0029A9F0 */

loc_00297A72: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00297A80
 * Original: 0x00297A80 - 0x00297AB7 (55 bytes, 17 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00297A80: ;
    PUSH32(esp, edi);
    edi = MEM32(0x2A8498);
    eax = MEM32(edi + 0x934);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00297AAE; /* jne: not equal / not zero */

loc_00297A92: ;
    ecx = edi;
    PUSH32(esp, 0x00297A99u); RECOMP_ABI_CALL(0x0029E4F0u, sub_0029E4F0); /* call 0x0029E4F0 */

loc_00297A99: ;
    ecx = 0x924;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x2A8498) = 0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00297AAE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 0x934) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00297AC0
 * Original: 0x00297AC0 - 0x00297AC5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297AC0: ;
    g_seh_ebp = ebp; sub_0029D5A0(); return; /* tail jmp 0x0029D5A0 */

}

/**
 * sub_00297AD0
 * Original: 0x00297AD0 - 0x00297AF4 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297AD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00297AD0: ;
    eax = MEM32(0x2A8498);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    MEM32(eax + 0x1DB0) = 0;
    PUSH32(esp, 6);
    _fb = (uint32_t)(0x1DAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1DAC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C798); PUSH32(esp, 0x00297AF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00297AEDu); } /* indirect call */
    }

loc_00297AF3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00297B00
 * Original: 0x00297B00 - 0x00297B42 (66 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00297B00: ;
    ecx = MEM32(0x2A73D0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x2A8498);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_00297B1C; /* je: equal / zero */

loc_00297B14: ;
    _fa = (uint32_t)(MEM32(0x2A73C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2A73C8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00297B3E; /* je: equal / zero */

loc_00297B1C: ;
    eax = MEM32(eax + 0x1C18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xB);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C8F0); PUSH32(esp, 0x00297B2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00297B28u); } /* indirect call */
    }

loc_00297B2E: ;
    MEM32(0x2A73D0) = 1;
    MEM32(0x2A73C8) = esi;

loc_00297B3E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00297B50
 * Original: 0x00297B50 - 0x00297BA1 (81 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00297B50: ;
    ecx = MEM32(0x2A73CC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(0x2A8498);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_00297B75; /* je: equal / zero */

loc_00297B64: ;
    edx = MEM32(0x2A73C4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00297B9D; /* je: equal / zero */

loc_00297B75: ;
    edx = MEM32(eax + 0x1C18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xE);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x31C8F0); PUSH32(esp, 0x00297B87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00297B81u); } /* indirect call */
    }

loc_00297B87: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(0x2A73CC) = 1;
    MEM32(0x2A73C4) = eax;

loc_00297B9D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00297BB0
 * Original: 0x00297BB0 - 0x00297C15 (101 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00297BB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00297C09; /* jne: not equal / not zero */

loc_00297BBC: ;
    ecx = MEM32(esi + 0xC);
    eax = ZX8(MEM8(esi + 0xD));
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00297C02; /* je: equal / zero */

loc_00297BD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00297BEA; /* jle: less or equal (signed <=) */

loc_00297BDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00297BEA; /* jg: greater (signed >) */

loc_00297BDF: ;
    eax = edx * 4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00297BEA: ;
    eax = ZX8(MEM8(esi + 0xD));
    eax = ZX8(MEM8(eax + 0x2A6040));
    eax = eax & 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00297C02: ;
    eax = edx + edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00297C09: ;
    eax = ZX8(MEM8(esi + 0x13));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00297C20
 * Original: 0x00297C20 - 0x00297E94 (628 bytes, 188 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00297C20: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x2A8498);
    if (CMP_NE(_fa, _fb)) goto loc_00297C43; /* jne: not equal / not zero */

loc_00297C37: ;
    eax = MEM32(edi + 0x19F4);
    MEM32(esp + 0x20) = eax;
    ebp = eax;

loc_00297C43: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00297C49u); RECOMP_ABI_CALL(0x00298F70u, sub_00298F70); /* call 0x00298F70 */

loc_00297C49: ;
    eax = MEM32(edi + 0x19F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00297C6E; /* je: equal / zero */

loc_00297C53: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00297C5C; /* je: equal / zero */

loc_00297C5A: ;
    eax = ecx;

loc_00297C5C: ;
    ecx = MEM32(edi + 0x2C);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edi + 0x19F4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00297C6Eu); RECOMP_ABI_CALL(0x002990D0u, sub_002990D0); /* call 0x002990D0 */

loc_00297C6E: ;
    eax = MEM32(edi + 0x19F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(edi + 0x19F4) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00297C99; /* je: equal / zero */

loc_00297C7E: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00297C87; /* je: equal / zero */

loc_00297C85: ;
    eax = ecx;

loc_00297C87: ;
    ecx = MEM32(edi + 0x2C);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edi + 0x19F8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00297C99u); RECOMP_ABI_CALL(0x002990D0u, sub_002990D0); /* call 0x002990D0 */

loc_00297C99: ;
    ebx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    MEM32(edi + 0x19F8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00297CC6; /* je: equal / zero */

loc_00297CA7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00297CADu); RECOMP_ABI_CALL(0x00298F70u, sub_00298F70); /* call 0x00298F70 */

loc_00297CAD: ;
    eax = edi + 0x944;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00297CBAu); RECOMP_ABI_CALL(0x0029EAB0u, sub_0029EAB0); /* call 0x0029EAB0 */

loc_00297CBA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00297CC0u); RECOMP_ABI_CALL(0x00297BB0u, sub_00297BB0); /* call 0x00297BB0 */

loc_00297CC0: ;
    MEM32(edi + 0x948) = eax;

loc_00297CC6: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00297CD2; /* jb: below (unsigned <) */

loc_00297CCD: ;
    PUSH32(esp, 0x00297CD2u); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_00297CD2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    ecx = MEM32(ebp + 4);
    edx = eax;
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00297CE8; /* je: equal / zero */

loc_00297CDF: ;
    eax = MEM32(ebx + 4);
    MEM32(esp + 0x10) = eax;
    goto loc_00297CEC;

loc_00297CE8: ;
    MEM32(esp + 0x10) = esi;

loc_00297CEC: ;
    MEM32(esp + 0x14) = 2;
    ebp = 0x40100;
    ebx = 0x40110;
    edi = edi;

loc_00297D00: ;
    eax = MEM32(esp + 0x20);
    MEM32(edx) = ebp;
    MEM32(edx + 4) = esi;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00297D5D; /* jne: not equal / not zero */

loc_00297D0E: ;
    ecx = MEM32(eax + 0xC);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x20);
    ecx = ZX8(MEM8(ecx + 0xD));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00297D58; /* je: equal / zero */

loc_00297D2B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00297D3E; /* jle: less or equal (signed <=) */

loc_00297D30: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00297D3E; /* jg: greater (signed >) */

loc_00297D35: ;
    ecx = eax * 4;
    goto loc_00297D65;

loc_00297D3E: ;
    ecx = MEM32(esp + 0x20);
    ecx = ZX8(MEM8(ecx + 0xD));
    ecx = ZX8(MEM8(ecx + 0x2A6040));
    ecx = ecx & 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx >> 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00297D65;

loc_00297D58: ;
    ecx = eax + eax;
    goto loc_00297D65;

loc_00297D5D: ;
    ecx = ZX8(MEM8(eax + 0x13));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00297D65: ;
    eax = MEM32(edi + 0x948);
    MEM32(edx + 8) = 0x4020C;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx + 0xC) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edx + 0x10) = ebp;
    MEM32(edx + 0x14) = esi;
    MEM32(edx + 0x18) = ebx;
    MEM32(edx + 0x1C) = esi;
    ecx = MEM32(esp + 0x10);
    MEM32(edx + 0x20) = ebp;
    MEM32(edx + 0x24) = esi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 8) = 0x40210;
    MEM32(edx + 0xC) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(edx + 0x10) = ebp;
    MEM32(edx + 0x14) = esi;
    MEM32(edx + 0x18) = ebx;
    MEM32(edx + 0x1C) = esi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ebp;
    MEM32(edx + 4) = esi;
    MEM32(edx + 8) = 0x40214;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ebp;
    MEM32(edx + 0x14) = esi;
    MEM32(edx + 0x18) = ebx;
    MEM32(edx + 0x1C) = esi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_00297D00; /* jne: not equal / not zero */

loc_00297DE3: ;
    ecx = edi;
    PUSH32(esp, 0x00297DEAu); RECOMP_ABI_CALL(0x0029BBF0u, sub_0029BBF0); /* call 0x0029BBF0 */

loc_00297DEA: ;
    _fa = (uint32_t)(MEM32(0x2A843C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2A843C), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00297E01; /* je: equal / zero */

loc_00297DF2: ;
    _fa = (uint32_t)(MEM32(edi + 0x19F8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x19F8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00297E01; /* je: equal / zero */

loc_00297DFA: ;
    ecx = 1;
    goto loc_00297E03;

loc_00297E01: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00297E03: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = ecx;
    _fa = (uint32_t)(MEM32(0x2A8440)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2A8440), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00297E23; /* je: equal / zero */

loc_00297E14: ;
    _fa = (uint32_t)(MEM32(edi + 0x19F8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x19F8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00297E23; /* je: equal / zero */

loc_00297E1C: ;
    ecx = 1;
    goto loc_00297E25;

loc_00297E23: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00297E25: ;
    MEM32(eax + 8) = 0x4032C;
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(edi + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00297E5B; /* je: equal / zero */

loc_00297E3A: ;
    edx = MEM32(esp + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x1A04)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0x1A04) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00297E5B; /* jne: not equal / not zero */

loc_00297E46: ;
    ecx = ecx & 0xFFFFFEFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + 8) = ecx;
    MEM32(eax) = 0x40130;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00297E5B: ;
    ecx = MEM32(esp + 0x20);
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00297E6Cu); RECOMP_ABI_CALL(0x0029E990u, sub_0029E990); /* call 0x0029E990 */

loc_00297E6C: ;
    edx = 0x2A5FA8;
    ecx = edi;
    MEM32(edi + 0x19FC) = eax;
    PUSH32(esp, 0x00297E7Eu); RECOMP_ABI_CALL(0x0029BD20u, sub_0029BD20); /* call 0x0029BD20 */

loc_00297E7E: ;
    edx = MEM32(0x2A847C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00297E8Au); RECOMP_ABI_CALL(0x0029B3C0u, sub_0029B3C0); /* call 0x0029B3C0 */

loc_00297E8A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00297EA0
 * Original: 0x00297EA0 - 0x00297EE3 (67 bytes, 22 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00297EA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(0x2A8498);
    if (CMP_NE(_fa, _fb)) goto loc_00297EC8; /* jne: not equal / not zero */

loc_00297EAF: ;
    eax = 1;
    PUSH32(esp, esi);
    esi = MEM32(ecx + eax * 4 + 0x1A04);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00297EC2u); RECOMP_ABI_CALL(0x00298FB0u, sub_00298FB0); /* call 0x00298FB0 */

loc_00297EC2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00297EC8: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = MEM32(ecx + eax * 4 + 0x1A04);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00297EDDu); RECOMP_ABI_CALL(0x00298FB0u, sub_00298FB0); /* call 0x00298FB0 */

loc_00297EDD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00297EF0
 * Original: 0x00297EF0 - 0x00297F0A (26 bytes, 10 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00297EF0: ;
    eax = MEM32(0x2A8498);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x19F4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00297F06; /* je: equal / zero */

loc_00297F00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00297F06u); RECOMP_ABI_CALL(0x00298FB0u, sub_00298FB0); /* call 0x00298FB0 */

loc_00297F06: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00297F10
 * Original: 0x00297F10 - 0x00297F2E (30 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00297F10: ;
    eax = MEM32(0x2A8498);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x19F8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00297F24; /* jne: not equal / not zero */

loc_00297F20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00297F24: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00297F2Au); RECOMP_ABI_CALL(0x00298FB0u, sub_00298FB0); /* call 0x00298FB0 */

loc_00297F2A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00297F30
 * Original: 0x00297F30 - 0x00298152 (546 bytes, 171 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00297F30(void)
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

loc_00297F30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    esi = MEM32(0x2A8498);
    if (CMP_EQ(_fa, _fb)) goto loc_00298123; /* je: equal / zero */

loc_00297F47: ;
    eax = MEM32(esi + 0x19F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1A04)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1A04) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00297F61; /* jne: not equal / not zero */

loc_00297F55: ;
    ecx = MEM32(esi + 0x1A08);
    MEM32(esp + 8) = ecx;
    goto loc_00297F67;

loc_00297F61: ;
    MEM32(esp + 8) = eax;
    ecx = eax;

loc_00297F67: ;
    edx = MEM32(ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0xC) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00297FA4; /* jne: not equal / not zero */

loc_00297F8E: ;
    ecx = MEM32(ecx + 0xC);
    if (0x14) _cf = (int)(((ecx) >> ((0x14) - 1)) & 1);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 1;
    if (LO8(ecx)) _cf = (int)(((edi) >> (32 - (LO8(ecx)))) & 1);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esp + 0x10);
    goto loc_00297FAD;

loc_00297FA4: ;
    edi = eax;
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00297FAD: ;
    ebp = MEM32(ebp + 8);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebp)) >> 32) & 1);
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00297FD5; /* jb: below (unsigned <) */

loc_00297FB6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00297FCC; /* jne: not equal / not zero */

loc_00297FBA: ;
    ecx = MEM32(ecx + 0xC);
    if (0x14) _cf = (int)(((ecx) >> ((0x14) - 1)) & 1);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 1;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00297FD5;

loc_00297FCC: ;
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00297FD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebp = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00297FEF; /* jne: not equal / not zero */

loc_00297FDB: ;
    ecx = MEM32(esp + 0x10);
    ecx = ZX8(MEM8(ecx + 0xF));
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 1;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00297FFB;

loc_00297FEF: ;
    edx = eax;
    if (0xC) _cf = (int)(((edx) >> ((0xC) - 1)) & 1);
    edx = edx >> 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00297FFB: ;
    ecx = MEM32(esp + 0x20);
    ecx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(ecx)) >> 32) & 1);
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0029800C; /* jae: above or equal (unsigned >=) */

loc_00298008: ;
    eax = ebx;
    goto loc_0029802E;

loc_0029800C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00298025; /* jne: not equal / not zero */

loc_00298010: ;
    edx = MEM32(esp + 0x10);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx + 0xF));
    eax = 1;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0029802E;

loc_00298025: ;
    if (0xC) _cf = (int)(((eax) >> ((0xC) - 1)) & 1);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0029802E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = ebp;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    edi = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00298042; /* jge: greater or equal (signed >=) */

loc_0029803C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_00298042: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x958)); /* fmul dword ptr [esi + 0x958] */
    ebx = MEM32(esi + 0x950);
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337D8)); /* fadd dword ptr [0x3337d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0029805Du); RECOMP_ABI_CALL(0x0029E7D0u, sub_0029E7D0); /* call 0x0029E7D0 */

loc_0029805D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00298084; /* jbe: below or equal (unsigned <=) */

loc_00298061: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = ebx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00298073; /* jge: greater or equal (signed >=) */

loc_0029806D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_00298073: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x958)); /* fdiv dword ptr [esi + 0x958] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00298082u); RECOMP_ABI_CALL(0x0029E7D0u, sub_0029E7D0); /* call 0x0029E7D0 */

loc_00298082: ;
    ebp = eax;

loc_00298084: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = edi;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00298096; /* jge: greater or equal (signed >=) */

loc_00298090: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_00298096: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x95C)); /* fmul dword ptr [esi + 0x95c] */
    ebx = MEM32(esi + 0x954);
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337D8)); /* fadd dword ptr [0x3337d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x002980B1u); RECOMP_ABI_CALL(0x0029E7D0u, sub_0029E7D0); /* call 0x0029E7D0 */

loc_002980B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_002980D8; /* jbe: below or equal (unsigned <=) */

loc_002980B5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = ebx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_002980C7; /* jge: greater or equal (signed >=) */

loc_002980C1: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_002980C7: ;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esi + 0x95C)); /* fdiv dword ptr [esi + 0x95c] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x002980D6u); RECOMP_ABI_CALL(0x0029E7D0u, sub_0029E7D0); /* call 0x0029E7D0 */

loc_002980D6: ;
    edi = eax;

loc_002980D8: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 0xED0) = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(eax));
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(ecx));
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0xEDC) = edi;
    MEM32(esi + 0xED4) = ecx;
    MEM32(esi + 0xED8) = ebp;
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0xEE0) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esi + 0xEE4) = edx;
    eax = MEM32(0x2A7FF8);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(0x2A7FF8) = eax;
    POP32(esp, ebx);

loc_00298123: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029812Eu); RECOMP_ABI_CALL(0x002984B0u, sub_002984B0); /* call 0x002984B0 */

loc_0029812E: ;
    PUSH32(esp, 0x00298133u); RECOMP_ABI_CALL(0x0029AFF0u, sub_0029AFF0); /* call 0x0029AFF0 */

loc_00298133: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0029813F; /* jb: below (unsigned <) */

loc_0029813A: ;
    PUSH32(esp, 0x0029813Fu); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_0029813F: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x00298148u); RECOMP_ABI_CALL(0x0029BA00u, sub_0029BA00); /* call 0x0029BA00 */

loc_00298148: ;
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00298160
 * Original: 0x00298160 - 0x00298304 (420 bytes, 124 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00298160: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x2A8498);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(ebp + esi * 4 + 0xF78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = ebp;
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002981A3; /* je: equal / zero */

loc_00298183: ;
    ecx = MEM32(ebp + 0x2C);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = ecx;
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002981A3; /* jne: not equal / not zero */

loc_0029819D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002981A3u); RECOMP_ABI_CALL(0x00298E90u, sub_00298E90); /* call 0x00298E90 */

loc_002981A3: ;
    ebx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + esi * 4 + 0xF78) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_002981F9; /* jne: not equal / not zero */

loc_002981B2: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002981BF; /* jb: below (unsigned <) */

loc_002981BA: ;
    PUSH32(esp, 0x002981BFu); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_002981BF: ;
    edx = esi;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x41B0C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x41B0C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    MEM32(eax + 4) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    MEM32(ebp + esi * 4 + 0xC) = 0x80000000u;
    eax = MEM32(0x2A7FF8);
    POP32(esp, esi);
    eax = eax | 0x4800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    MEM32(0x2A7FF8) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_002981F9: ;
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx) = MEM32(ebx) + 0x80000;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029820C; /* jb: below (unsigned <) */

loc_00298207: ;
    PUSH32(esp, 0x0029820Cu); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_0029820C: ;
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = esi + 0x206C;
    edi = edi << 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax) = edi;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = eax + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_0029827B; /* je: equal / zero */

loc_0029822E: ;
    edx = ZX8(MEM8(ebx + 0x13));
    eax = ecx;
    ecx = ecx >> 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ecx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = ecx + 0x41B10;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi) = ebp;
    ebp = MEM32(esp + 0x10);
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x41B1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x41B1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = ecx;
    ecx = MEM32(esp + 0x1C);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0xC) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0029827B: ;
    ebx = MEM32(ebx + 0xC);
    ecx = MEM32(ebp + esi * 4 + 0xC);
    eax = ebx;
    eax = eax & 0x20F4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002982F7; /* je: equal / zero */

loc_0029828D: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002982B2; /* je: equal / zero */

loc_00298292: ;
    ebx = ebx & 0xFF00;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xFFFFDFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2A00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2A00 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002982B2; /* jb: below (unsigned <) */

loc_002982A5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3100 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002982B2; /* ja: above (unsigned >) */

loc_002982AD: ;
    eax = eax | 0x40000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002982B2: ;
    MEM32(ebp + esi * 4 + 0xC) = eax;
    ecx = MEM32(0x2A7FF8);
    eax = MEM32(esp + 0x14);
    ecx = ecx | 0x4000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x2A7FF8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002982F7; /* jne: not equal / not zero */

loc_002982D0: ;
    eax = MEM32(ebp + esi * 4 + 0x770);
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x41B0C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x41B0C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = esi;
    MEM32(edi + 4) = eax;
    eax = MEM32(0x2A7FF8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2A7FF8) = eax;

loc_002982F7: ;
    MEM32(ebp) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00298310
 * Original: 0x00298310 - 0x0029839D (141 bytes, 48 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00298310: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x2A8498);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(esi + edi * 4 + 0xF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029834F; /* je: equal / zero */

loc_00298328: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi + edi * 4 + 0xF88);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029834F; /* jne: not equal / not zero */

loc_00298349: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029834Fu); RECOMP_ABI_CALL(0x00298E90u, sub_00298E90); /* call 0x00298E90 */

loc_0029834F: ;
    ebx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi + edi * 4 + 0xF88) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00298397; /* je: equal / zero */

loc_0029835E: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx);
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x80000;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp;
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebx) = ebp;
    ecx = MEM32(esi + 4);
    ebp = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029837E; /* jb: below (unsigned <) */

loc_00298379: ;
    PUSH32(esp, 0x0029837Eu); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_0029837E: ;
    ebx = MEM32(ebx + 4);
    edi = edi << 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x41B20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x41B20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    MEM32(eax + 4) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, ebp);

loc_00298397: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002983A0
 * Original: 0x002983A0 - 0x002983CF (47 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002983A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002983A0: ;
    eax = MEM32(0x2A8498);
    eax = MEM32(eax + 0x930);
    ecx = MEM32(eax + 0x3240);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x3244)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x3244) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002983BF; /* je: equal / zero */

loc_002983B9: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_002983BF: ;
    eax = MEM32(eax + 0x400700);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002983D0
 * Original: 0x002983D0 - 0x002984A1 (209 bytes, 74 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002983D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002983D0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(0x2A8498);
    PUSH32(esp, esi);
    MEM32(esp + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00298462; /* je: equal / zero */

loc_002983E7: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00298462; /* je: equal / zero */

loc_002983EE: ;
    esi = MEM32(eax + 8);
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x14) = esi;
    esi = MEM32(eax + 0xC);
    MEM32(esp + 0x18) = esi;
    esi = MEM32(eax + 0x10);
    eax = MEM32(eax + 0x14);
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0029840C; /* js: sign (negative) */

loc_00298408: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0029840C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    ebp = edi + edi * 2;
    ebx = ebx + ebp * 8 + 0x1AB0;
    ebp = ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(ebp) = edx;
    MEM32(ebp + 4) = ecx;
    PUSH32(esp, eax);
    MEM32(ebp + 8) = ebx;
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    MEM32(ebp + 0xC) = ebx;
    PUSH32(esp, edx);
    MEM32(ebp + 0x10) = esi;
    PUSH32(esp, ebx);
    MEM32(ebp + 0x14) = eax;
    eax = MEM32(esp + 0x2C);
    ecx = ecx & 0xFFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x1C18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00298458u); RECOMP_ABI_CALL(0x002A06F6u, sub_002A06F6); /* call 0x002A06F6 */

loc_00298458: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00298462: ;
    eax = MEM32(esp + 0x28);
    ecx = eax + eax * 2;
    edx = MEM32(ebx + ecx * 8 + 0x1AC4);
    esi = ebx + ecx * 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebx + 0x1C18;
    PUSH32(esp, 0x00298480u); RECOMP_ABI_CALL(0x002A08E4u, sub_002A08E4); /* call 0x002A08E4 */

loc_00298480: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1AB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1AB0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002984B0
 * Original: 0x002984B0 - 0x002987B0 (768 bytes, 210 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002984B0(void)
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

loc_002984B0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x2A8498);
    eax = MEM32(ebp + 0x958);
    ecx = MEM32(ebp + 0x95C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp);
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 4) (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_002984E0; /* jb: below (unsigned <) */

loc_002984D9: ;
    PUSH32(esp, 0x002984DEu); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_002984DE: ;
    edi = eax;

loc_002984E0: ;
    edx = MEM32(esp + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029859D; /* jne: not equal / not zero */

loc_002984EC: ;
    edx = MEM32(ebp + 0xED0);
    fp_push((double)SMEM32(ebp + 0xED0)); /* fild */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00298502; /* jge: greater or equal (signed >=) */

loc_002984FC: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_00298502: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337D8)); /* fadd dword ptr [0x3337d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00298515u); RECOMP_ABI_CALL(0x0029E7D0u, sub_0029E7D0); /* call 0x0029E7D0 */

loc_00298515: ;
    fp_push((double)SMEM32(ebp + 0xED4)); /* fild */
    esi = eax;
    eax = MEM32(ebp + 0xED4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0029852D; /* jge: greater or equal (signed >=) */

loc_00298527: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_0029852D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337D8)); /* fadd dword ptr [0x3337d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00298540u); RECOMP_ABI_CALL(0x0029E7D0u, sub_0029E7D0); /* call 0x0029E7D0 */

loc_00298540: ;
    ecx = MEM32(ebp + 0xED8);
    fp_push((double)SMEM32(ebp + 0xED8)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0029855A; /* jge: greater or equal (signed >=) */

loc_00298554: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_0029855A: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337D8)); /* fadd dword ptr [0x3337d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0029856Du); RECOMP_ABI_CALL(0x0029E7D0u, sub_0029E7D0); /* call 0x0029E7D0 */

loc_0029856D: ;
    edx = MEM32(ebp + 0xEDC);
    fp_push((double)SMEM32(ebp + 0xEDC)); /* fild */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ebx = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00298585; /* jge: greater or equal (signed >=) */

loc_0029857F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_00298585: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337D8)); /* fadd dword ptr [0x3337d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00298598u); RECOMP_ABI_CALL(0x0029E7D0u, sub_0029E7D0); /* call 0x0029E7D0 */

loc_00298598: ;
    goto loc_0029861F;

loc_0029859D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00298675; /* jne: not equal / not zero */

loc_002985A6: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00298675; /* jne: not equal / not zero */

loc_002985B2: ;
    ebx = MEM32(esp + 0x30);
    fp_push((double)SMEM32(ebx)); /* fild */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337D8)); /* fadd dword ptr [0x3337d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x002985CBu); RECOMP_ABI_CALL(0x0029E7D0u, sub_0029E7D0); /* call 0x0029E7D0 */

loc_002985CB: ;
    fp_push((double)SMEM32(ebx + 4)); /* fild */
    PUSH32(esp, ecx);
    esi = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337D8)); /* fadd dword ptr [0x3337d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x002985E3u); RECOMP_ABI_CALL(0x0029E7D0u, sub_0029E7D0); /* call 0x0029E7D0 */

loc_002985E3: ;
    fp_push((double)SMEM32(ebx + 8)); /* fild */
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337D8)); /* fadd dword ptr [0x3337d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x002985FDu); RECOMP_ABI_CALL(0x0029E7D0u, sub_0029E7D0); /* call 0x0029E7D0 */

loc_002985FD: ;
    ebx = eax;
    eax = MEM32(esp + 0x30);
    fp_push((double)SMEM32(eax + 0xC)); /* fild */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337D8)); /* fadd dword ptr [0x3337d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0029861Bu); RECOMP_ABI_CALL(0x0029E7D0u, sub_0029E7D0); /* call 0x0029E7D0 */

loc_0029861B: ;
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0029861F: ;
    MEM32(edi) = 0x80200;
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(esp + 0x18);
    MEM32(edi + 4) = ebx;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 8) = eax;
    MEM32(edi + 0xC) = 0x402B4;
    MEM32(edi + 0x10) = 0;
    eax = MEM32(ebp + 0x950);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + 0x14) = 0x402C0;
    MEM32(edi + 0x18) = eax;
    eax = MEM32(ebp + 0x954);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + 0x1C) = 0x402E0;
    MEM32(edi + 0x20) = eax;
    ebx = edi + 0x24;
    goto loc_0029876E;

loc_00298675: ;
    ecx = MEM32(ebp + 0x950);
    eax = MEM32(ebp + 0x954);
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi) = 0x80200;
    MEM32(edi + 4) = ecx;
    ecx = MEM32(esp + 0x2C);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(edi + 8) = eax;
    MEM32(edi + 0xC) = 0x402B4;
    MEM32(edi + 0x10) = ecx;
    ebx = edi + 0x14;
    if (CMP_BE(_fa, _fb)) goto loc_00298772; /* jbe: below or equal (unsigned <=) */

loc_002986AC: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x28);
    edx = ebx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = 0x402E0;
    edi = edx + eax + -16;
    MEM32(esp + 0x18) = ecx;

loc_002986C5: ;
    fp_push((double)SMEM32(edi + -4)); /* fild */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(edi + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337D8)); /* fadd dword ptr [0x3337d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x002986E6u); RECOMP_ABI_CALL(0x0029E7D0u, sub_0029E7D0); /* call 0x0029E7D0 */

loc_002986E6: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337D8)); /* fadd dword ptr [0x3337d8] */
    MEM32(esp + 0x24) = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x002986FDu); RECOMP_ABI_CALL(0x0029E7D0u, sub_0029E7D0); /* call 0x0029E7D0 */

loc_002986FD: ;
    edx = MEM32(esp + 0x20);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esi + -32;
    MEM32(ebx) = ecx;
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 4) = eax;
    fp_push((double)SMEM32(edi)); /* fild */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(edi + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337D8)); /* fadd dword ptr [0x3337d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0029872Fu); RECOMP_ABI_CALL(0x0029E7D0u, sub_0029E7D0); /* call 0x0029E7D0 */

loc_0029872F: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337D8)); /* fadd dword ptr [0x3337d8] */
    MEM32(esp + 0x20) = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00298746u); RECOMP_ABI_CALL(0x0029E7D0u, sub_0029E7D0); /* call 0x0029E7D0 */

loc_00298746: ;
    edx = MEM32(esp + 0x1C);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 8) = esi;
    MEM32(ebx + 0xC) = eax;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_002986C5; /* jne: not equal / not zero */

loc_0029876E: ;
    edx = MEM32(esp + 0x28);

loc_00298772: ;
    esi = MEM32(esp + 0x30);
    ecx = edx;
    edx = MEM32(esp + 0x2C);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp) = ebx;
    edi = ebp + 0x1B70;
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
    ecx = eax;
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
    ecx = MEM32(esp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x1BF0) = ecx;
    MEM32(ebp + 0x1BF4) = edx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002987B0
 * Original: 0x002987B0 - 0x002987F9 (73 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002987B0(void)
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

loc_002987B0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2A5FC0)); /* fadd dword ptr [0x2a5fc0] */
    esi = MEM32(0x2A8498);
    ecx = esi;
    MEMF(esi + 0xEE8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2A5FC0)); /* fadd dword ptr [0x2a5fc0] */
    MEMF(esi + 0xEEC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x002987DEu); RECOMP_ABI_CALL(0x0029A9F0u, sub_0029A9F0); /* call 0x0029A9F0 */

loc_002987DE: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002987EA; /* jb: below (unsigned <) */

loc_002987E5: ;
    PUSH32(esp, 0x002987EAu); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_002987EA: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x002987F3u); RECOMP_ABI_CALL(0x0029BA00u, sub_0029BA00); /* call 0x0029BA00 */

loc_002987F3: ;
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00298800
 * Original: 0x00298800 - 0x002989CF (463 bytes, 147 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00298800: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x2A8498);
    edx = eax;
    edx = edx & 0xFF000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x89000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029882F; /* jne: not equal / not zero */

loc_0029881A: ;
    ecx = MEM32(esp + 8);
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax * 4 + 0x2A8200);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0029882F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x8A000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029886C; /* jne: not equal / not zero */

loc_00298837: ;
    ecx = eax;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00298866; /* jae: above or equal (unsigned >=) */

loc_0029884C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00298866; /* jae: above or equal (unsigned >=) */

loc_00298851: ;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax * 4 + 0x2A8000);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00298866: ;
    eax = 0x80070057u;
    esp += 4; return; /* ret */

loc_0029886C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x8B000000u (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_002988DE; /* jne: not equal / not zero */

loc_00298876: ;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_00298A21(); return; } /* jae: above or equal (unsigned >=) */

loc_00298884: ;
    esi = MEM32(ecx + eax * 4 + 0xF88);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00298A21(); return; } /* je: equal / zero */

loc_00298893: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00298899u); RECOMP_ABI_CALL(0x0029E7C0u, sub_0029E7C0); /* call 0x0029E7C0 */

loc_00298899: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00298A21(); return; } /* jg: greater (signed >) */

loc_002988A2: ;
    edi = MEM32(esp + 0x10);
    ecx = 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x80);
    PUSH32(esp, esi);
    MEM32(edi) = edx;
    PUSH32(esp, 0x002988C1u); RECOMP_ABI_CALL(0x0029E7A0u, sub_0029E7A0); /* call 0x0029E7A0 */

loc_002988C1: ;
    ecx = MEM32(edi);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
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
    ecx = eax;
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
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002988DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88000008u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x88000008u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0029897D; /* ja: above (unsigned >) */

loc_002988E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88000005u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x88000005u (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0029896B; /* jae: above or equal (unsigned >=) */

loc_002988F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88000002u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x88000002u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00298937; /* ja: above (unsigned >) */

loc_002988F7: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00298926; /* je: equal / zero */

loc_002988F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x87000001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x87000001u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029891C; /* je: equal / zero */

loc_00298900: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88000001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x88000001u (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00298A21(); return; } /* jne: not equal / not zero */

loc_0029890B: ;
    ecx = MEM32(ecx + 0x1A08);
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(edx) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0029891C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x00298921u); RECOMP_ICALL_SAFE(0x0029D170u, _icall_esp); /* manual call 0x0029D170 */
    }

loc_00298921: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00298926: ;
    eax = MEM32(ecx + 0x1A04);
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00298937: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88000003u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x88000003u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029895A; /* je: equal / zero */

loc_0029893E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88000004u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x88000004u (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00298A21(); return; } /* jne: not equal / not zero */

loc_00298949: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx + 0x19F8);
    POP32(esp, edi);
    MEM32(eax) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0029895A: ;
    ecx = MEM32(ecx + 0x1A0C);
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(edx) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0029896B: ;
    eax = MEM32(ecx + eax * 4 + -536866972);
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0029897D: ;
    edx = eax + 0x77FFFFF7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_00298A21(); return; } /* ja: above (unsigned >) */

loc_0029898C: ;
    edx = ZX8(MEM8(edx + 0x298A40));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x298A2C)); return; /* indirect tail jmp */

    edx = MEM32(esp + 0x10);
    eax = eax + eax * 2;
    ecx = ecx + eax * 8 + 0x400019D8;
    eax = MEM32(ecx);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ecx + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = eax;
    eax = MEM32(ecx + 0x10);
    MEM32(edx + 0x10) = eax;
    ecx = MEM32(ecx + 0x14);
    POP32(esp, edi);
    MEM32(edx + 0x14) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0029899A
 * Original: 0x0029899A - 0x002989CF (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029899A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029899A: ;
    edx = MEM32(esp + 0x10);
    eax = eax + eax * 2;
    ecx = ecx + eax * 8 + 0x400019D8;
    eax = MEM32(ecx);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ecx + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = eax;
    eax = MEM32(ecx + 0x10);
    MEM32(edx + 0x10) = eax;
    ecx = MEM32(ecx + 0x14);
    POP32(esp, edi);
    MEM32(edx + 0x14) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002989CF
 * Original: 0x002989CF - 0x002989F2 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002989CF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002989CF: ;
    eax = MEM32(ecx + 0x23FC);
    edi = MEM32(esp + 0x10);
    edx = eax + eax * 2;
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edx + ecx + 0x1DF4;
    ecx = 0xC0;
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
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002989F2
 * Original: 0x002989F2 - 0x002989FF (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002989F2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002989F2: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002989FF
 * Original: 0x002989FF - 0x00298A10 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002989FF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002989FF: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx + 0x19F4);
    POP32(esp, edi);
    MEM32(eax) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00298A10
 * Original: 0x00298A10 - 0x00298A21 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00298A10: ;
    ecx = MEM32(ecx + 0x1C0C);
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(edx) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00298A21
 * Original: 0x00298A21 - 0x00298A50 (47 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298A21(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00298A21: ;
    POP32(esp, edi);
    eax = 0x80070057u;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00298A50
 * Original: 0x00298A50 - 0x00298DEF (927 bytes, 264 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298A50(void)
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

loc_00298A50: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x2A8498);
    ebx = MEM32(ebp + 0x19F8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x19F4);
    eax = ZX8(MEM8(edi + 0xD));
    SET_LO8(ecx, MEM8(eax + 0x2A6040));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x20) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00298ABB; /* je: equal / zero */

loc_00298A82: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00298A89u); RECOMP_ABI_CALL(0x0029E990u, sub_0029E990); /* call 0x0029E990 */

loc_00298A89: ;
    ecx = MEM32(ebp + 4);
    esi = eax;
    esi = esi & 0xFFFFFDFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ebp);
    esi = esi | 0x100;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00298AAA; /* jb: below (unsigned <) */

loc_00298AA5: ;
    PUSH32(esp, 0x00298AAAu); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_00298AAA: ;
    MEM32(eax) = 0x40208;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00298ABB: ;
    edx = MEM32(esp + 0x54);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF0 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00298B25; /* je: equal / zero */

loc_00298AC4: ;
    eax = ZX8(MEM8(edi + 0xD));
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00298B25; /* ja: above (unsigned >) */

loc_00298AD0: ;
    ecx = ZX8(MEM8(eax + 0x298DFC));
    { uint32_t _jt = MEM32(ecx * 4 + 0x298DF0); /* switch: 3 entries, 3 targets */
    if (_jt == 0x00298ADEu) goto loc_00298ADE;
    if (_jt == 0x00298AFBu) goto loc_00298AFB;
    if (_jt == 0x00298B25u) goto loc_00298B25;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00298ADE: ;
    ecx = MEM32(esp + 0x58);
    eax = ecx;
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx;
    eax = eax & 0x1F0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & 0xFC00;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00298B16;

loc_00298AFB: ;
    ecx = MEM32(esp + 0x58);
    eax = ecx;
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx;
    eax = eax & 0x1F0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & 0xF800;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00298B16: ;
    ecx = ecx & 0xF8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x58) = eax;

loc_00298B25: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00298B36; /* jne: not equal / not zero */

loc_00298B29: ;
    edx = edx & 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x54) = edx;
    if ((_fa == 0)) goto loc_00298DE5; /* je: equal / zero */

loc_00298B36: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00298C23; /* je: equal / zero */

loc_00298B3F: ;
    edx = ZX8(MEM8(ebx + 0xD));
    _fb = (uint32_t)(0x2A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x2A;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _jt = MEM32(edx * 4 + 0x298E18); /* switch: 8 entries, 4 targets */
    if (_jt == 0x00298B4Du) goto loc_00298B4D;
    if (_jt == 0x00298B7Fu) goto loc_00298B7F;
    if (_jt == 0x00298BB1u) goto loc_00298BB1;
    if (_jt == 0x00298BE9u) goto loc_00298BE9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00298B4D: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x31CE4C)); /* fmul dword ptr [0x31ce4c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00298B60u); RECOMP_ABI_CALL(0x0029E7D0u, sub_0029E7D0); /* call 0x0029E7D0 */

loc_00298B60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00298B6C; /* jle: less or equal (signed <=) */

loc_00298B67: ;
    eax = 0xFFFF;

loc_00298B6C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = ecx;
    goto loc_00298C23;

loc_00298B7F: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x31CE48)); /* fmul dword ptr [0x31ce48] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00298B92u); RECOMP_ABI_CALL(0x0029E7D0u, sub_0029E7D0); /* call 0x0029E7D0 */

loc_00298B92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00298B9E; /* jle: less or equal (signed <=) */

loc_00298B99: ;
    eax = 0xFFFFFF;

loc_00298B9E: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x10) = edx;
    goto loc_00298C23;

loc_00298BB1: ;
    fp_push(MEMF(0x3337C0)); /* fld float */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00298C1F; /* jnp: not parity */

loc_00298BC4: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x31CE40)); /* fmul qword ptr [0x31ce40] */
    MEMD(esp + 0x30) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x34);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = eax;
    goto loc_00298C23;

loc_00298BE9: ;
    fp_push(MEMF(0x3337C0)); /* fld float */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00298C1F; /* jnp: not parity */

loc_00298BFC: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x31CE38)); /* fmul qword ptr [0x31ce38] */
    MEMD(esp + 0x30) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0xF8000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF8000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x10) = eax;
    goto loc_00298C23;

loc_00298C1F: ;
    MEM32(esp + 0x10) = esi;

loc_00298C23: ;
    ebx = MEM32(ebp + 0xED0);
    edi = MEM32(ebp + 0xED4);
    edx = MEM32(ebp + 0xED8);
    esi = MEM32(ebp + 0xEDC);
    eax = MEM32(esp + 0x4C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x2C) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00298C79; /* jne: not equal / not zero */

loc_00298C57: ;
    ecx = esp + 0x38;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = edi;
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = esi;
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x4C) = 1;
    goto loc_00298C83;

loc_00298C79: ;
    ecx = MEM32(esp + 0x50);
    goto loc_00298C83;

loc_00298C7F: ;
    edi = MEM32(esp + 0x24);

loc_00298C83: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_00298C91; /* jg: greater (signed >) */

loc_00298C8D: ;
    MEM32(esp + 0x14) = ebx;

loc_00298C91: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x5C) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_00298CA0; /* jg: greater (signed >) */

loc_00298C9C: ;
    MEM32(esp + 0x5C) = edi;

loc_00298CA0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    edi = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00298CAB; /* jl: less (signed <) */

loc_00298CA9: ;
    edi = edx;

loc_00298CAB: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00298CB8; /* jl: less (signed <) */

loc_00298CB6: ;
    eax = esi;

loc_00298CB8: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), edi (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00298DAB; /* jge: greater or equal (signed >=) */

loc_00298CC6: ;
    _fa = (uint32_t)(MEM32(esp + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x5C), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00298DAB; /* jge: greater or equal (signed >=) */

loc_00298CD0: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x958)); /* fmul dword ptr [ebp + 0x958] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337D8)); /* fadd dword ptr [0x3337d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00298CE9u); RECOMP_ABI_CALL(0x0029E7D0u, sub_0029E7D0); /* call 0x0029E7D0 */

loc_00298CE9: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    PUSH32(esp, ecx);
    ebx = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x958)); /* fmul dword ptr [ebp + 0x958] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337D8)); /* fadd dword ptr [0x3337d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00298D04u); RECOMP_ABI_CALL(0x0029E7D0u, sub_0029E7D0); /* call 0x0029E7D0 */

loc_00298D04: ;
    fp_push((double)SMEM32(esp + 0x5C)); /* fild */
    PUSH32(esp, ecx);
    esi = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x95C)); /* fmul dword ptr [ebp + 0x95c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337D8)); /* fadd dword ptr [0x3337d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00298D1Fu); RECOMP_ABI_CALL(0x0029E7D0u, sub_0029E7D0); /* call 0x0029E7D0 */

loc_00298D1F: ;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    PUSH32(esp, ecx);
    MEM32(esp + 0x60) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0x95C)); /* fmul dword ptr [ebp + 0x95c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337D8)); /* fadd dword ptr [0x3337d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00298D3Cu); RECOMP_ABI_CALL(0x0029E7D0u, sub_0029E7D0); /* call 0x0029E7D0 */

loc_00298D3C: ;
    ecx = MEM32(ebp + 4);
    edi = eax;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00298D4D; /* jb: below (unsigned <) */

loc_00298D48: ;
    PUSH32(esp, 0x00298D4Du); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_00298D4D: ;
    edx = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x10);
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x10000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esi | ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = MEM32(esp + 0x28);
    MEM32(eax) = 0x81D98;
    MEM32(eax + 4) = esi;
    esi = MEM32(esp + 0x5C);
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x10000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x58);
    edi = edi | esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(esp + 0x2C);
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = 0xC1D8C;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x50);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;

loc_00298DAB: ;
    eax = MEM32(esp + 0x4C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x4C) = eax;
    if ((_fa != 0)) goto loc_00298C7F; /* jne: not equal / not zero */

loc_00298DC1: ;
    esi = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00298DE5; /* je: equal / zero */

loc_00298DC9: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00298DD6; /* jb: below (unsigned <) */

loc_00298DD1: ;
    PUSH32(esp, 0x00298DD6u); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_00298DD6: ;
    MEM32(eax) = 0x40208;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;

loc_00298DE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00298E40
 * Original: 0x00298E40 - 0x00298E8B (75 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00298E40: ;
    PUSH32(esp, esi);
    esi = MEM32(0x2A73D4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = 0x2A73D4;
    if (CMP_EQ(_fa, _fb)) goto loc_00298E86; /* je: equal / zero */

loc_00298E51: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);

loc_00298E56: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00298E7D; /* jne: not equal / not zero */

loc_00298E5B: ;
    eax = MEM32(esi);
    MEM32(edi) = eax;
    _fa = (uint32_t)(MEM8(esi + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00298E6E; /* je: equal / zero */

loc_00298E65: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x00298E6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00298E6Bu); } /* indirect call */
    }

loc_00298E6E: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00298E79u); RECOMP_ABI_CALL(0x00284A3Eu, sub_00284A3E); /* call 0x00284A3E */

loc_00298E79: ;
    esi = MEM32(edi);
    goto loc_00298E81;

loc_00298E7D: ;
    edi = esi;
    esi = MEM32(esi);

loc_00298E81: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00298E56; /* jne: not equal / not zero */

loc_00298E85: ;
    POP32(esp, ebp);

loc_00298E86: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00298E90
 * Original: 0x00298E90 - 0x00298F21 (145 bytes, 46 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00298E90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    esi = eax;
    esi = esi & 0x70000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00298EAC; /* jne: not equal / not zero */

loc_00298EA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00298EB2; /* jns: not sign (positive) */

loc_00298EAC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00298EB2u); RECOMP_ABI_CALL(0x0029D5C0u, sub_0029D5C0); /* call 0x0029D5C0 */

loc_00298EB2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00298EB8u); RECOMP_ABI_CALL(0x00298E40u, sub_00298E40); /* call 0x00298E40 */

loc_00298EB8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00298ED5; /* jne: not equal / not zero */

loc_00298EC0: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00298F11; /* jns: not sign (positive) */

loc_00298EC5: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, 0xA1800000u);
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    goto loc_00298F0C;

loc_00298ED5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00298EED; /* jne: not equal / not zero */

loc_00298EDD: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00298F11; /* js: sign (negative) */

loc_00298EE2: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, ecx);
    goto loc_00298F0C;

loc_00298EED: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00298F11; /* je: equal / zero */

loc_00298EF5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x60000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00298F11; /* je: equal / zero */

loc_00298EFD: ;
    edx = MEM32(edi + 4);
    PUSH32(esp, 0xA1800000u);
    edx = edx | 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);

loc_00298F0C: ;
    PUSH32(esp, 0x00298F11u); RECOMP_ABI_CALL(0x00284A3Eu, sub_00284A3E); /* call 0x00284A3E */

loc_00298F11: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00298F1Cu); RECOMP_ABI_CALL(0x00284A3Eu, sub_00284A3E); /* call 0x00284A3E */

loc_00298F1C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00298F30
 * Original: 0x00298F30 - 0x00298F65 (53 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00298F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00298F30: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x780000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00298F58; /* jne: not equal / not zero */

loc_00298F3D: ;
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00298F60; /* jne: not equal / not zero */

loc_00298F49: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00298F60; /* je: equal / zero */

loc_00298F50: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x780000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00298F60; /* je: equal / zero */

loc_00298F58: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_00298F60: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00298F70
 * Original: 0x00298F70 - 0x00298FA2 (50 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00298F70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x780000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00298F99; /* jne: not equal / not zero */

loc_00298F7E: ;
    ecx = ecx & 0x70000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00298F99; /* jne: not equal / not zero */

loc_00298F8C: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00298F99; /* je: equal / zero */

loc_00298F93: ;
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + 0x80000;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00298F99: ;
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + 0x80000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00298FB0
 * Original: 0x00298FB0 - 0x00298FE7 (55 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00298FB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00298FD7; /* jne: not equal / not zero */

loc_00298FBE: ;
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00298FD7; /* jne: not equal / not zero */

loc_00298FCA: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00298FD7; /* je: equal / zero */

loc_00298FD1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00298FD7u); RECOMP_ABI_CALL(0x00298FB0u, sub_00298FB0); /* call 0x00298FB0 */

loc_00298FD7: ;
    edx = MEM32(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    MEM32(esi) = edx;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00298FF0
 * Original: 0x00298FF0 - 0x0029903E (78 bytes, 28 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00298FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00298FF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = eax;
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00299032; /* jne: not equal / not zero */

loc_00299004: ;
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029901D; /* jne: not equal / not zero */

loc_00299010: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029901D; /* je: equal / zero */

loc_00299017: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029901Du); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_0029901D: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x780000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x780000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299032; /* jne: not equal / not zero */

loc_00299026: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0029902Cu); RECOMP_ABI_CALL(0x00298E90u, sub_00298E90); /* call 0x00298E90 */

loc_0029902C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00299032: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00299040
 * Original: 0x00299040 - 0x002990CA (138 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00299040: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0029907A; /* ja: above (unsigned >) */

loc_00299052: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00299072; /* je: equal / zero */

loc_00299054: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0029906A; /* je: equal / zero */

loc_00299058: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10000 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(7)) >> 32) & 1);
    ecx = ecx + 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    esp += 8; return; /* ret 4 */

loc_0029906A: ;
    eax = 6;
    esp += 8; return; /* ret 4 */

loc_00299072: ;
    eax = 9;
    esp += 8; return; /* ret 4 */

loc_0029907A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002990A5; /* je: equal / zero */

loc_00299081: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00299090; /* je: equal / zero */

loc_00299088: ;
    eax = 0xA;
    esp += 8; return; /* ret 4 */

loc_00299090: ;
    edx = MEM32(ecx + 0xC);
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xF0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_A(_fa, _fb)) ? 1 : 0); /* seta */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_002990A5: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_002990B4; /* je: equal / zero */

loc_002990AC: ;
    eax = 5;
    esp += 8; return; /* ret 4 */

loc_002990B4: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002990D0
 * Original: 0x002990D0 - 0x00299132 (98 bytes, 32 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002990D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002990D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = eax;
    ecx = ecx & 0x780000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00299127; /* jne: not equal / not zero */

loc_002990E7: ;
    eax = eax & 0x70000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00299114; /* jne: not equal / not zero */

loc_002990F3: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00299114; /* je: equal / zero */

loc_002990FA: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00299114; /* jne: not equal / not zero */

loc_0029910E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00299114u); RECOMP_ABI_CALL(0x00298E90u, sub_00298E90); /* call 0x00298E90 */

loc_00299114: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299127; /* jne: not equal / not zero */

loc_0029911D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00299123u); RECOMP_ABI_CALL(0x00298E90u, sub_00298E90); /* call 0x00298E90 */

loc_00299123: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00299127: ;
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFF80000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00299140
 * Original: 0x00299140 - 0x0029921F (223 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299140: ;
    eax = MEM32(0x2A8498);
    ecx = MEM32(eax + 0x780);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 0x794);
    MEM32(edx + 4) = eax;
    ecx = MEM32(0x2A80B0);
    MEM32(edx + 8) = ecx;
    ecx = edx + 0x14;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    goto loc_00299170;

    /* nop */
    edi = edi;

loc_00299170: ;
    esi = MEM32(eax + 0x2A6108);
    esi = MEM32(esi * 4 + 0x2A8200);
    MEM32(ecx + -4) = esi;
    esi = MEM32(eax + 0x2A6110);
    esi = MEM32(esi * 4 + 0x2A8200);
    MEM32(ecx) = esi;
    esi = MEM32(eax + 0x2A6118);
    esi = MEM32(esi * 4 + 0x2A8200);
    MEM32(ecx + 4) = esi;
    esi = MEM32(eax + 0x2A6120);
    esi = MEM32(esi * 4 + 0x2A8200);
    MEM32(ecx + 8) = esi;
    esi = MEM32(eax + 0x2A6128);
    esi = MEM32(esi * 4 + 0x2A8200);
    MEM32(ecx + 0xC) = esi;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00299170; /* jb: below (unsigned <) */

loc_002991CC: ;
    ecx = edx + 0x60;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002991D1: ;
    esi = MEM32(eax + 0x2A60B0);
    esi = MEM32(esi * 4 + 0x2A8000);
    MEM32(ecx) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x58 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002991D1; /* jb: below (unsigned <) */

loc_002991EB: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029921D; /* je: equal / zero */

loc_002991F0: ;
    ecx = edx + 0x8C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00299200;

    /* nop */

loc_00299200: ;
    esi = MEM32(eax + 0x2A8200);
    MEM32(ecx) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00299200; /* jb: below (unsigned <) */

loc_00299215: ;
    eax = MEM32(0x2A8420);
    MEM32(edx + 0xC) = eax;

loc_0029921D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00299220
 * Original: 0x00299220 - 0x0029933E (286 bytes, 92 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00299220: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x1C24);
    ecx = MEM32(edi + 0x1C18);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x1C1C);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0x1C20);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0x0029924Bu); RECOMP_ABI_CALL(0x0029D5A0u, sub_0029D5A0); /* call 0x0029D5A0 */

loc_0029924B: ;
    _fa = (uint32_t)(MEM32(edi + 0x1DCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x1DCC), 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299259; /* je: equal / zero */

loc_00299257: ;
    ebx = ebx >> 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00299259: ;
    edx = MEM32(edi + 0x1A08);
    eax = MEM32(edx + 4);
    MEM32(esp + 0x10) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00299268: ;
    PUSH32(esp, 0x0029926Du); RECOMP_ABI_CALL(0x00297AD0u, sub_00297AD0); /* call 0x00297AD0 */

loc_0029926D: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C8F4); PUSH32(esp, 0x00299285u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0029927Fu); } /* indirect call */
    }

loc_00299285: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00299268; /* jne: not equal / not zero */

loc_0029928B: ;
    _fa = (uint32_t)(MEM32(edi + 0x1DCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x1DCC), 0x1000000 (32-bit) */
    ebx = MEM32(0x31C8F0);
    if (TEST_Z(_fa, _fb)) goto loc_002992AE; /* je: equal / zero */

loc_0029929D: ;
    ecx = MEM32(edi + 0x1C18);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xB);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x002992ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002992AAu); } /* indirect call */
    }

loc_002992AC: ;
    goto loc_002992B0;

loc_002992AE: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002992B0: ;
    eax = MEM32(edi + 0x1C18);
    edx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    esi = edi + 0x1C18;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x002992C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002992C5u); } /* indirect call */
    }

loc_002992C7: ;
    eax = MEM32(edi + 0x1DD8);
    edx = MEM32(esp + 0x18);
    ecx = eax;
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002992E1; /* jne: not equal / not zero */

loc_002992DA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x1DD8) = eax;

loc_002992E1: ;
    ecx = esi;
    MEM32(0x2A73D0) = ebp;
    MEM32(0x2A73CC) = ebp;
    PUSH32(esp, 0x002992F4u); RECOMP_ABI_CALL(0x002A054Du, sub_002A054D); /* call 0x002A054D */

loc_002992F4: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C8EC); PUSH32(esp, 0x002992FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002992F4u); } /* indirect call */
    }

loc_002992FA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00299326; /* je: equal / zero */

loc_00299300: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0029930Bu); RECOMP_ABI_CALL(0x00284A58u, sub_00284A58); /* call 0x00284A58 */

loc_0029930B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C760); PUSH32(esp, 0x00299314u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0029930Eu); } /* indirect call */
    }

loc_00299314: ;
    PUSH32(esp, 0xA1800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0029931Fu); RECOMP_ABI_CALL(0x00284A3Eu, sub_00284A3E); /* call 0x00284A3E */

loc_0029931F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(0x31C8F8); PUSH32(esp, 0x00299326u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00299320u); } /* indirect call */
    }

loc_00299326: ;
    edx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 9);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00299331u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0029932Fu); } /* indirect call */
    }

loc_00299331: ;
    POP32(esp, esi);
    MEM32(edi + 0x1DD0) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00299340
 * Original: 0x00299340 - 0x00299457 (279 bytes, 75 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299340: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x2A8498);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00299350: ;
    eax = MEM32(esi + 0x2A6108);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C (32-bit) */
    ecx = MEM32(esi + 0x2A610C);
    if (CMP_GE(_fas, _fbs)) goto loc_0029936D; /* jge: greater or equal (signed >=) */

loc_00299361: ;
    edx = MEM32(0x2A8498);
    _fa = (uint32_t)(MEM8(edx + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 8), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299376; /* jne: not equal / not zero */

loc_0029936D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 4 + 0x2A8200)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax * 4 + 0x2A8200) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029937D; /* je: equal / zero */

loc_00299376: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029937Du); RECOMP_ABI_CALL(0x0029AE60u, sub_0029AE60); /* call 0x0029AE60 */

loc_0029937D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00299350; /* jb: below (unsigned <) */

loc_00299388: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00299390: ;
    ecx = MEM32(esi + 0x2A60B0);
    eax = MEM32(esi + 0x2A60B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 4 + 0x2A8000)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx * 4 + 0x2A8000) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002993AE; /* je: equal / zero */

loc_002993A5: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002993AEu); RECOMP_ABI_CALL(0x0029B8A0u, sub_0029B8A0); /* call 0x0029B8A0 */

loc_002993AE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x58 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00299390; /* jb: below (unsigned <) */

loc_002993B6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x002993BDu); RECOMP_ABI_CALL(0x002A2580u, sub_002A2580); /* call 0x002A2580 */

loc_002993BD: ;
    esi = MEM32(0x2A83F8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2A8010)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x2A8010) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002993D5; /* je: equal / zero */

loc_002993CB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002993D5u); RECOMP_ABI_CALL(0x0029B8A0u, sub_0029B8A0); /* call 0x0029B8A0 */

loc_002993D5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2A800C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x2A800C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002993E7; /* je: equal / zero */

loc_002993DD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002993E7u); RECOMP_ABI_CALL(0x0029B8A0u, sub_0029B8A0); /* call 0x0029B8A0 */

loc_002993E7: ;
    _fa = (uint32_t)(MEM32(0x2A80B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2A80B0), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002993FB; /* je: equal / zero */

loc_002993F0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x002993FBu); RECOMP_ABI_CALL(0x0029B8A0u, sub_0029B8A0); /* call 0x0029B8A0 */

loc_002993FB: ;
    PUSH32(esp, 0x00299400u); RECOMP_ABI_CALL(0x002A21D0u, sub_002A21D0); /* call 0x002A21D0 */

loc_00299400: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x2A61A8);
    PUSH32(esp, 0x0029940Cu); RECOMP_ABI_CALL(0x0029A990u, sub_0029A990); /* call 0x0029A990 */

loc_0029940C: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00299418; /* jb: below (unsigned <) */

loc_00299413: ;
    PUSH32(esp, 0x00299418u); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_00299418: ;
    MEM32(eax) = 0x81E94;
    MEM32(eax + 4) = 6;
    MEM32(eax + 8) = 0;
    MEM32(eax + 0xC) = 0x41EA0;
    MEM32(eax + 0x10) = 0;
    MEM32(eax + 0x14) = 0x80394;
    MEM32(eax + 0x18) = 0;
    MEM32(eax + 0x1C) = 0x4B7FFFFF;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00299460
 * Original: 0x00299460 - 0x002995DD (381 bytes, 126 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00299460: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x2A8498);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x0029947Bu); RECOMP_ABI_CALL(0x002A2580u, sub_002A2580); /* call 0x002A2580 */

loc_0029947B: ;
    ebx = MEM32(esi + 8);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x2A80B0);
    ebx = ebx & 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00299498; /* je: equal / zero */

loc_0029948E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00299498u); RECOMP_ABI_CALL(0x0029B8A0u, sub_0029B8A0); /* call 0x0029B8A0 */

loc_00299498: ;
    edi = ebp + 0x10;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_002994A0: ;
    eax = MEM32(esi + 0x2A6108);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5C (32-bit) */
    ecx = MEM32(edi);
    if (CMP_GE(_fas, _fbs)) goto loc_002994B9; /* jge: greater or equal (signed >=) */

loc_002994AD: ;
    edx = MEM32(0x2A8498);
    _fa = (uint32_t)(MEM8(edx + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 8), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002994C9; /* jne: not equal / not zero */

loc_002994B9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 4 + 0x2A8200)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax * 4 + 0x2A8200) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002994C9; /* je: equal / zero */

loc_002994C2: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002994C9u); RECOMP_ABI_CALL(0x0029AE60u, sub_0029AE60); /* call 0x0029AE60 */

loc_002994C9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002994A0; /* jb: below (unsigned <) */

loc_002994D7: ;
    edi = ebp + 0x60;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_002994E0: ;
    ecx = MEM32(esi + 0x2A60B0);
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx * 4 + 0x2A8000)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx * 4 + 0x2A8000) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002994FA; /* je: equal / zero */

loc_002994F1: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002994FAu); RECOMP_ABI_CALL(0x0029B8A0u, sub_0029B8A0); /* call 0x0029B8A0 */

loc_002994FA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x58 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002994E0; /* jb: below (unsigned <) */

loc_00299505: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00299569; /* jne: not equal / not zero */

loc_00299509: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00299555; /* je: equal / zero */

loc_0029950F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + 0x8C;

loc_00299517: ;
    eax = MEM32(ebp);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00299535; /* jne: not equal / not zero */

loc_00299524: ;
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00299535; /* jne: not equal / not zero */

loc_0029952B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00299535; /* jb: below (unsigned <) */

loc_00299530: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 9 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0029953E; /* jbe: below or equal (unsigned <=) */

loc_00299535: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0029953Eu); RECOMP_ABI_CALL(0x0029AE60u, sub_0029AE60); /* call 0x0029AE60 */

loc_0029953E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x39 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00299517; /* jb: below (unsigned <) */

loc_00299547: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x88);
    PUSH32(esp, 0x00299555u); RECOMP_ABI_CALL(0x0029AE60u, sub_0029AE60); /* call 0x0029AE60 */

loc_00299555: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 8);
    eax = esi + 0x1098;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00299567u); RECOMP_ABI_CALL(0x0029A990u, sub_0029A990); /* call 0x0029A990 */

loc_00299567: ;
    goto loc_0029956D;

loc_00299569: ;
    esi = MEM32(esp + 0x14);

loc_0029956D: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00299579; /* jb: below (unsigned <) */

loc_00299574: ;
    PUSH32(esp, 0x00299579u); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_00299579: ;
    ecx = MEM32(esi + 0x790);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x12 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002995A7; /* jne: not equal / not zero */

loc_00299587: ;
    MEM32(eax) = 0x41E94;
    edx = eax + 8;
    ecx = esi;
    MEM32(eax + 4) = 4;
    PUSH32(esp, 0x0029959Eu); RECOMP_ABI_CALL(0x0029BA00u, sub_0029BA00); /* call 0x0029BA00 */

loc_0029959E: ;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_002995A7: ;
    MEM32(eax) = 0x81E94;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = 6;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esi + 0x798);
    MEM32(eax + 0xC) = 0x41EA0;
    MEM32(eax + 0x10) = ecx;
    edx = eax + 0x14;
    ecx = esi;
    PUSH32(esp, 0x002995D4u); RECOMP_ABI_CALL(0x0029BA00u, sub_0029BA00); /* call 0x0029BA00 */

loc_002995D4: ;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002995E0
 * Original: 0x002995E0 - 0x0029966A (138 bytes, 45 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002995E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002995E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x19F4);
    PUSH32(esp, eax);
    MEM32(edi + 0x1A80) = eax;
    PUSH32(esp, 0x002995F7u); RECOMP_ABI_CALL(0x00298FB0u, sub_00298FB0); /* call 0x00298FB0 */

loc_002995F7: ;
    eax = MEM32(edi + 0x19F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x1A84) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0029960D; /* je: equal / zero */

loc_00299607: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029960Du); RECOMP_ABI_CALL(0x00298FB0u, sub_00298FB0); /* call 0x00298FB0 */

loc_0029960D: ;
    esi = edi + 0x1A88;
    ebx = 4;
    goto loc_00299620;

    /* nop */

loc_00299620: ;
    eax = MEM32(esi + -2832);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00299632; /* je: equal / zero */

loc_0029962C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00299632u); RECOMP_ABI_CALL(0x00298FB0u, sub_00298FB0); /* call 0x00298FB0 */

loc_00299632: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00299620; /* jne: not equal / not zero */

loc_00299638: ;
    eax = edi + 0xED0;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(0x1A98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1A98;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edi + 4) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(edi + 8) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(edi + 0xC) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x14) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00299670
 * Original: 0x00299670 - 0x002996D8 (104 bytes, 37 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299670: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x1A84);
    ecx = MEM32(esi + 0x1A80);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00299687u); RECOMP_ABI_CALL(0x00297C20u, sub_00297C20); /* call 0x00297C20 */

loc_00299687: ;
    edx = esi + 0x1A98;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00299693u); RECOMP_ABI_CALL(0x00297F30u, sub_00297F30); /* call 0x00297F30 */

loc_00299693: ;
    eax = MEM32(esi + 0x1A80);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029969Fu); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_0029969F: ;
    eax = MEM32(esi + 0x1A84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002996AF; /* je: equal / zero */

loc_002996A9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002996AFu); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_002996AF: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1A88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1A88;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002996B7: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002996C0u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_002996C0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002996CC; /* je: equal / zero */

loc_002996C6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002996CCu); RECOMP_ABI_CALL(0x00298FF0u, sub_00298FF0); /* call 0x00298FF0 */

loc_002996CC: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002996B7; /* jb: below (unsigned <) */

loc_002996D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002996E0
 * Original: 0x002996E0 - 0x0029985B (379 bytes, 117 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002996E0(void)
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

loc_002996E0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(eax + 0x96C);
    ecx = MEM32(eax + 0x968);
    PUSH32(esp, ebx);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x19F4);
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0029971A; /* jne: not equal / not zero */

loc_00299708: ;
    ecx = MEM32(edx + 0xC);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00299722;

loc_0029971A: ;
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = eax;

loc_00299722: ;
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029973A; /* jne: not equal / not zero */

loc_00299729: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx + 0xF));
    esi = 1;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00299745;

loc_0029973A: ;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = eax;

loc_00299745: ;
    eax = MEM32(0x2A8010);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00299764; /* je: equal / zero */

loc_0029975F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029979A; /* jne: not equal / not zero */

loc_00299764: ;
    fp_push(MEMF(0x333884)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0029977F; /* jp: parity */

loc_00299777: ;
    MEM32(esp + 0x10) = 0x3F000000;

loc_0029977F: ;
    fp_push(MEMF(0x333884)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0029979A; /* jp: parity */

loc_00299792: ;
    MEM32(esp + 0x14) = 0x3F000000;

loc_0029979A: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x002997A1u); RECOMP_ABI_CALL(0x002A2D70u, sub_002A2D70); /* call 0x002A2D70 */

loc_002997A1: ;
    ebx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 9);
    PUSH32(esp, 0x002997B2u); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_002997B2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002997BDu); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_002997BD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x1C) = edi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_002997CF; /* jge: greater or equal (signed >=) */

loc_002997C9: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_002997CF: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3337CC)); /* fmul dword ptr [0x3337cc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 9);
    PUSH32(esp, 0x002997F1u); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_002997F1: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3337CC)); /* fmul dword ptr [0x3337cc] */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, 0x00299808u); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_00299808: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x1C) = esi;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0029981A; /* jge: greater or equal (signed >=) */

loc_00299814: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_0029981A: ;
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3337CC)); /* fmul dword ptr [0x3337cc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x18)); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    PUSH32(esp, 9);
    PUSH32(esp, 0x00299838u); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_00299838: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3337CC)); /* fmul dword ptr [0x3337cc] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029984Fu); RECOMP_ABI_CALL(0x002A2C80u, sub_002A2C80); /* call 0x002A2C80 */

loc_0029984F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002A2DB0(); return; /* tail jmp 0x002A2DB0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00299860
 * Original: 0x00299860 - 0x00299A45 (485 bytes, 144 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00299860: ;
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x170;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x178));
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    PUSH32(esp, edi);
    edi = 0x40100;
    if (TEST_Z(_fa, _fb)) goto loc_002999B1; /* je: equal / zero */

loc_00299880: ;
    _fa = (uint32_t)(MEM32(esi + 0x1A00)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A00), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002998B9; /* jne: not equal / not zero */

loc_00299889: ;
    eax = MEM32(esi + 0x1A08);
    ecx = MEM32(esi + 0x1A0C);
    ebx = MEM32(eax + 4);
    edx = MEM32(ecx + 4);
    edi = MEM32(ecx + 8);
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(eax + 8);
    MEM32(ecx + 8) = ebx;
    SET_LO8(ebx, MEM8(esp + 0x180));
    MEM32(eax + 8) = edi;
    MEM32(eax + 4) = edx;
    edi = 0x40100;

loc_002998B9: ;
    eax = esi;
    PUSH32(esp, 0x002998C0u); RECOMP_ABI_CALL(0x002995E0u, sub_002995E0); /* call 0x002995E0 */

loc_002998C0: ;
    eax = MEM32(esi + 0x1A08);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002998CDu); RECOMP_ABI_CALL(0x00297C20u, sub_00297C20); /* call 0x00297C20 */

loc_002998CD: ;
    ecx = MEM32(esi + 0x1A04);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002998DAu); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_002998DA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, 0x002998E2u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_002998E2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 2);
    PUSH32(esp, 0x002998EAu); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_002998EA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 3);
    PUSH32(esp, 0x002998F2u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_002998F2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299905; /* je: equal / zero */

loc_002998F7: ;
    edx = esp + 0xC;
    PUSH32(esp, 0x00299900u); RECOMP_ABI_CALL(0x00299140u, sub_00299140); /* call 0x00299140 */

loc_00299900: ;
    PUSH32(esp, 0x00299905u); RECOMP_ABI_CALL(0x00299340u, sub_00299340); /* call 0x00299340 */

loc_00299905: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00299911; /* jb: below (unsigned <) */

loc_0029990C: ;
    PUSH32(esp, 0x00299911u); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_00299911: ;
    _fa = (uint32_t)(MEM32(esi + 0x1A00)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A00), 3 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00299993; /* jae: above or equal (unsigned >=) */

loc_0029991A: ;
    _fa = (uint32_t)(MEM32(0x2A83FC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2A83FC), 0x80000000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00299932; /* je: equal / zero */

loc_00299926: ;
    MEM32(eax) = 0x40110;
    MEM32(eax + 4) = ebp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00299932: ;
    edx = MEM32(esi + 0x1A08);
    ecx = MEM32(edx + 4);
    edx = MEM32(0x2A83FC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029994A; /* jne: not equal / not zero */

loc_00299945: ;
    edx = 1;

loc_0029994A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299952; /* je: equal / zero */

loc_0029994F: ;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00299952: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029995A; /* je: equal / zero */

loc_00299957: ;
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0029995A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299962; /* je: equal / zero */

loc_0029995F: ;
    ecx = ecx | 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00299962: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00299969; /* jns: not sign (positive) */

loc_00299966: ;
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00299969: ;
    MEM32(eax) = edi;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = 0x4012C;
    MEM32(eax + 0xC) = ebp;
    MEM32(eax + 0x10) = edi;
    MEM32(eax + 0x14) = ebp;
    MEM32(eax + 0x18) = 0x40130;
    MEM32(eax + 0x1C) = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002999AF;

loc_00299993: ;
    MEM32(eax) = 0x4012C;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = ebp;
    MEM32(eax + 0x10) = 0x40130;
    MEM32(eax + 0x14) = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002999AF: ;
    MEM32(esi) = eax;

loc_002999B1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002999C7; /* je: equal / zero */

loc_002999B6: ;
    eax = esi;
    PUSH32(esp, 0x002999BDu); RECOMP_ABI_CALL(0x002996E0u, sub_002996E0); /* call 0x002996E0 */

loc_002999BD: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002999C7u); RECOMP_ABI_CALL(0x00299460u, sub_00299460); /* call 0x00299460 */

loc_002999C7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299A39; /* je: equal / zero */

loc_002999CC: ;
    eax = esi;
    PUSH32(esp, 0x002999D3u); RECOMP_ABI_CALL(0x00299670u, sub_00299670); /* call 0x00299670 */

loc_002999D3: ;
    _fa = (uint32_t)(MEM32(esi + 0x1A00)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1A00), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00299A39; /* jne: not equal / not zero */

loc_002999DC: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002999E8; /* jb: below (unsigned <) */

loc_002999E3: ;
    PUSH32(esp, 0x002999E8u); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_002999E8: ;
    MEM32(eax) = 0x40110;
    MEM32(eax + 4) = ebp;
    edx = MEM32(0x2A83FC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    ecx = MEM32(esi + 0x1A08);
    ecx = MEM32(ecx + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00299A09; /* jne: not equal / not zero */

loc_00299A04: ;
    edx = 1;

loc_00299A09: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299A11; /* je: equal / zero */

loc_00299A0E: ;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00299A11: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299A19; /* je: equal / zero */

loc_00299A16: ;
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00299A19: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299A21; /* je: equal / zero */

loc_00299A1E: ;
    ecx = ecx | 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00299A21: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00299A28; /* jns: not sign (positive) */

loc_00299A25: ;
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00299A28: ;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 8) = edi;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xC) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;

loc_00299A39: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x170;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00299A50
 * Original: 0x00299A50 - 0x00299B54 (260 bytes, 81 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00299A50: ;
    PUSH32(esp, ecx);
    edx = MEM32(esi + 0x1A00);
    ecx = MEM32(esi + edx * 4 + 0x1A00);
    eax = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = eax;
    edi = esi + edx * 4 + 0x1A00;

loc_00299A73: ;
    eax = MEM32(edi);
    ebp = MEM32(eax + 4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(eax + 8);
    MEM32(ecx + 8) = ebp;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    ecx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00299A73; /* jne: not equal / not zero */

loc_00299A8D: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00299AA3; /* jb: below (unsigned <) */

loc_00299A9E: ;
    PUSH32(esp, 0x00299AA3u); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_00299AA3: ;
    edx = MEM32(esi + 0x1A08);
    ecx = MEM32(edx + 4);
    MEM32(eax) = 0x40110;
    MEM32(eax + 4) = ebp;
    edx = MEM32(0x2A83FC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00299AC4; /* jne: not equal / not zero */

loc_00299ABF: ;
    edx = 1;

loc_00299AC4: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299ACC; /* je: equal / zero */

loc_00299AC9: ;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00299ACC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299AD4; /* je: equal / zero */

loc_00299AD1: ;
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00299AD4: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299ADC; /* je: equal / zero */

loc_00299AD9: ;
    ecx = ecx | 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00299ADC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_00299AE3; /* jns: not sign (positive) */

loc_00299AE0: ;
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00299AE3: ;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0x40100;
    MEM32(eax + 8) = edx;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = 0x4012C;
    MEM32(eax + 0x14) = ebp;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = ebp;
    ecx = MEM32(esi + 0x19F4);
    edx = MEM32(esi + 0x1A04);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00299B2C; /* je: equal / zero */

loc_00299B17: ;
    _fa = (uint32_t)(MEM32(0x2A83FC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2A83FC), 0x80000000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00299B2C; /* je: equal / zero */

loc_00299B23: ;
    MEM32(esi + 8) = MEM32(esi + 8) | 0x100;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00299B38;

loc_00299B2C: ;
    MEM32(eax) = 0x40130;
    MEM32(eax + 4) = ebp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00299B38: ;
    edx = MEM32(esi + 0x1A04);
    ecx = MEM32(edx + 4);
    MEM32(eax) = 0x40210;
    POP32(esp, edi);
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(esi) = eax;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00299B60
 * Original: 0x00299B60 - 0x00299BA0 (64 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299B60: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x1A08);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00299B72; /* je: equal / zero */

loc_00299B70: ;
    eax = ecx;

loc_00299B72: ;
    ecx = MEM32(edi + 0x2C);
    PUSH32(esp, 0);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0x00299B7Fu); RECOMP_ABI_CALL(0x0029D1E0u, sub_0029D1E0); /* call 0x0029D1E0 */

loc_00299B7F: ;
    edx = MEM32(edi + 0x2468);
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + edx * 4 + 0x1964) = eax;
    eax = MEM32(edi + 0x1DD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00299B9E; /* je: equal / zero */

loc_00299B99: ;
    PUSH32(esp, 0x00299B9Eu); RECOMP_ABI_CALL(0x00299220u, sub_00299220); /* call 0x00299220 */

loc_00299B9E: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00299BA0
 * Original: 0x00299BA0 - 0x00299C85 (229 bytes, 71 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299BA0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x2A8498);
    eax = MEM32(esi + 0x8D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00299BBB; /* jne: not equal / not zero */

loc_00299BB1: ;
    eax = MEM32(esi + 0x8D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00299BC0; /* je: equal / zero */

loc_00299BBB: ;
    PUSH32(esp, 0x00299BC0u); RECOMP_ABI_CALL(0x002A2E50u, sub_002A2E50); /* call 0x002A2E50 */

loc_00299BC0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00299BCF; /* jne: not equal / not zero */

loc_00299BCA: ;
    ebx = 5;

loc_00299BCF: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299C15; /* je: equal / zero */

loc_00299BD7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299C06; /* je: equal / zero */

loc_00299BDC: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00299BE3u); RECOMP_ABI_CALL(0x0029D1E0u, sub_0029D1E0); /* call 0x0029D1E0 */

loc_00299BE3: ;
    eax = MEM32(esi + 0x2468);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + eax * 4 + 0x1964);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00299C00; /* je: equal / zero */

loc_00299BF8: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00299C00u); RECOMP_ABI_CALL(0x0029D290u, sub_0029D290); /* call 0x0029D290 */

loc_00299C00: ;
    MEM32(esi + 0x2468) = MEM32(esi + 0x2468) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x2468)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00299C06: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00299C0Cu); RECOMP_ABI_CALL(0x00299860u, sub_00299860); /* call 0x00299860 */

loc_00299C0C: ;
    edi = ebx;
    edi = edi & 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00299C52; /* je: equal / zero */

loc_00299C13: ;
    goto loc_00299C4B;

loc_00299C15: ;
    edi = ebx;
    edi = edi & 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00299C52; /* je: equal / zero */

loc_00299C1C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00299C23u); RECOMP_ABI_CALL(0x0029D1E0u, sub_0029D1E0); /* call 0x0029D1E0 */

loc_00299C23: ;
    ecx = MEM32(esi + 0x2468);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + ecx * 4 + 0x1964);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00299C40; /* je: equal / zero */

loc_00299C38: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00299C40u); RECOMP_ABI_CALL(0x0029D290u, sub_0029D290); /* call 0x0029D290 */

loc_00299C40: ;
    MEM32(esi + 0x2468) = MEM32(esi + 0x2468) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x2468)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00299C4Bu); RECOMP_ABI_CALL(0x00299A50u, sub_00299A50); /* call 0x00299A50 */

loc_00299C4B: ;
    eax = esi;
    PUSH32(esp, 0x00299C52u); RECOMP_ABI_CALL(0x00299B60u, sub_00299B60); /* call 0x00299B60 */

loc_00299C52: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00299C7B; /* je: equal / zero */

loc_00299C58: ;
    MEM32(0x2A7FF8) = MEM32(0x2A7FF8) | 0xFF1000;
    _fa = (uint32_t)(MEM32(0x2A7FF8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x8D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00299C76; /* jne: not equal / not zero */

loc_00299C6C: ;
    eax = MEM32(esi + 0x8D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00299C7B; /* je: equal / zero */

loc_00299C76: ;
    PUSH32(esp, 0x00299C7Bu); RECOMP_ABI_CALL(0x002A3280u, sub_002A3280); /* call 0x002A3280 */

loc_00299C7B: ;
    eax = MEM32(esi + 0x2468);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00299C90
 * Original: 0x00299C90 - 0x00299D47 (183 bytes, 43 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299C90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299C90: ;
    _fb = (uint32_t)(0x178) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x178;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x2A8498);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x00299CA5u); RECOMP_ABI_CALL(0x002995E0u, sub_002995E0); /* call 0x002995E0 */

loc_00299CA5: ;
    eax = MEM32(esp + 0x184);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00299CB4u); RECOMP_ABI_CALL(0x00297C20u, sub_00297C20); /* call 0x00297C20 */

loc_00299CB4: ;
    ecx = MEM32(esp + 0x188);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00299CC3u); RECOMP_ABI_CALL(0x00298160u, sub_00298160); /* call 0x00298160 */

loc_00299CC3: ;
    edx = esp + 0x10;
    PUSH32(esp, 0x00299CCCu); RECOMP_ABI_CALL(0x00299140u, sub_00299140); /* call 0x00299140 */

loc_00299CCC: ;
    PUSH32(esp, 0x00299CD1u); RECOMP_ABI_CALL(0x00299340u, sub_00299340); /* call 0x00299340 */

loc_00299CD1: ;
    edx = MEM32(esi + 0x968);
    eax = MEM32(esi + 0x96C);
    ecx = MEM32(esp + 0x18C);
    edi = MEM32(0x2A8010);
    MEM32(esp + 0xC) = edx;
    edx = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esi + 0x968) = ecx;
    MEM32(esi + 0x96C) = edx;
    eax = esi;
    MEM32(0x2A8010) = 5;
    PUSH32(esp, 0x00299D11u); RECOMP_ABI_CALL(0x002996E0u, sub_002996E0); /* call 0x002996E0 */

loc_00299D11: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = esp + 0x10;
    MEM32(esi + 0x968) = eax;
    MEM32(esi + 0x96C) = ecx;
    PUSH32(esp, edx);
    MEM32(0x2A8010) = edi;
    PUSH32(esp, 0x00299D35u); RECOMP_ABI_CALL(0x00299460u, sub_00299460); /* call 0x00299460 */

loc_00299D35: ;
    eax = esi;
    PUSH32(esp, 0x00299D3Cu); RECOMP_ABI_CALL(0x00299670u, sub_00299670); /* call 0x00299670 */

loc_00299D3C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x178) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x178;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00299D47
 * Original: 0x00299D47 - 0x00299DC9 (130 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00299D47(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299D47: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x1D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1D0), eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(MEM32(ecx + 0x1B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1B8), 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00299DC4; /* jne: not equal / not zero */

loc_00299D65: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1B4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x1000000 (32-bit) */
    edx = 0xC0000000u;
    eax = 0x80000000u;
    if (TEST_Z(_fa, _fb)) goto loc_00299D9A; /* je: equal / zero */

loc_00299D7F: ;
    ebx = MEM32(ecx + 8);
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00299D9A; /* je: equal / zero */

loc_00299D88: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00299D9A; /* je: equal / zero */

loc_00299D8E: ;
    ecx = MEM32(ecx + 4);
    eax = MEM32(ebp + 8);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00299DBC;

loc_00299D9A: ;
    ebx = MEM32(ecx + 8);
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00299DB9; /* jne: not equal / not zero */

loc_00299DA3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299DB9; /* je: equal / zero */

loc_00299DAB: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00299DB9; /* je: equal / zero */

loc_00299DB1: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00299DBC;

loc_00299DB9: ;
    eax = MEM32(ebp + 8);

loc_00299DBC: ;
    POP32(esp, esi);
    MEM32(edi + 0x600800) = eax;
    POP32(esp, ebx);

loc_00299DC4: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00299DC9
 * Original: 0x00299DC9 - 0x00299E22 (89 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299DC9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00299DC9: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = 0xFFFFFF00u;
    MEM8(ecx + 0x6813C8) = 0;
    eax = edx + 0x100;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00299DE4: ;
    edx = esi + eax;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 7 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00299DF2; /* jne: not equal / not zero */

loc_00299DEC: ;
    edx = MEM32(ecx + 0x3240);

loc_00299DF2: ;
    SET_LO8(edx, MEM8(eax + -256));
    MEM8(ecx + 0x6813C9) = LO8(edx);
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + 0x6813C9) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x100));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx + 0x6813C9) = LO8(edx);
    edx = esi + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00299DE4; /* jb: below (unsigned <) */

loc_00299E1E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00299E30
 * Original: 0x00299E30 - 0x00299F69 (313 bytes, 100 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00299E30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + 0x1C;
    MEM32(eax + 4) = 0;
    MEM32(eax + 0x10) = 0;
    edx = edi;
    esi = 0x10;
    /* nop */

loc_00299E50: ;
    MEM32(edx) = 2;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00299E50; /* jne: not equal / not zero */

loc_00299E5C: ;
    ebx = MEM32(esp + 0x14);
    esi = ebx;
    esi = esi & 0xE;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00299E7D; /* jne: not equal / not zero */

loc_00299E6C: ;
    MEM32(eax + 4) = MEM32(eax + 4) | 2;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = 0x42;
    edx = 0x10;
    goto loc_00299EB0;

loc_00299E7D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00299EB0; /* je: equal / zero */

loc_00299E81: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    MEM32(edi) = 0x32;
    edx = 0xC;
    if (CMP_B(_fa, _fb)) goto loc_00299EB0; /* jb: below (unsigned <) */

loc_00299E91: ;
    edx = esi + -6;
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x28) = 0xC;
    MEM32(eax + 0x2C) = ecx;
    edx = edx * 4 + 0xC;

loc_00299EB0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299EC2; /* je: equal / zero */

loc_00299EB5: ;
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x3C) = 0x32;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00299EC2: ;
    ecx = 0x40;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00299EE0; /* je: equal / zero */

loc_00299ECB: ;
    edi = MEM32(eax + 4);
    edi = edi | 0x400;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x48) = edx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 4) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00299EE0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00299EF9; /* jns: not sign (positive) */

loc_00299EE4: ;
    esi = MEM32(eax + 4);
    esi = esi | 0x800;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x58) = edx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 4) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00299EF9: ;
    esi = ebx;
    esi = esi >> 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00299F63; /* jbe: below or equal (unsigned <=) */

loc_00299F0C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = eax + 0xAC;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, ebp);
    /* nop */

loc_00299F20: ;
    ebx = ebx & 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebx * 4 + 0x2A6490);
    ebx = esi;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = ebx;
    ebx = esi;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + -4) = edx;
    ebp = MEM32(eax + 0x10);
    edx = edx + esi * 4;
    esi = MEM32(esp + 0x18);
    ebp = ebp | ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = MEM32(esp + 0x14);
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0x10) = ebp;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = esi;
    if ((_fa != 0)) goto loc_00299F20; /* jne: not equal / not zero */

loc_00299F62: ;
    POP32(esp, ebp);

loc_00299F63: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00299F70
 * Original: 0x00299F70 - 0x0029A01E (174 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00299F70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00299F70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(0x2A8498);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x114;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    ecx = ecx + edx + 0x1098;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = ecx;
    /* nop */

loc_00299FA0: ;
    ecx = MEM32(eax);
    edx = ecx;
    edx = edx >> 0x12;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00299FBC; /* jne: not equal / not zero */

loc_00299FAF: ;
    edi = MEM32(eax);
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x2A73E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2A73E0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0029A009;

loc_00299FBC: ;
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = edx * 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xB00 (32-bit) */
    ecx = ebx;
    esi = eax;
    ebp = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00299FF7; /* jne: not equal / not zero */

loc_00299FD7: ;
    edi = MEM32(esp + 0x18);
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
    ecx = ebp;
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
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = ecx;
    goto loc_0029A00D;

loc_00299FF7: ;
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
    ecx = ebp;
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
    edi = MEM32(esp + 0x14);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0029A009: ;
    MEM32(esp + 0x14) = edi;

loc_0029A00D: ;
    ecx = MEM32(eax + edx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = eax + edx * 4;
    if (CMP_NE(_fa, _fb)) goto loc_00299FA0; /* jne: not equal / not zero */

loc_0029A017: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0029A020
 * Original: 0x0029A020 - 0x0029A088 (104 bytes, 38 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029A020: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_0029A030: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    ebx = ecx;
    if (CMP_B(_fa, _fb)) goto loc_0029A03C; /* jb: below (unsigned <) */

loc_0029A037: ;
    ebx = 0x20;

loc_0029A03C: ;
    esi = MEM32(esp + 0x18);
    ecx = ebx;
    ecx = ecx << 0x12;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xB00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    edx = ebx * 4;
    ecx = edx;
    ebp = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + 4;
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
    ecx = ebp;
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
    esi = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = esi;
    eax = eax + edx + 4;
    MEM32(esp + 0x1C) = ecx;
    if ((_fa != 0)) goto loc_0029A030; /* jne: not equal / not zero */

loc_0029A081: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0029A090
 * Original: 0x0029A090 - 0x0029A229 (409 bytes, 130 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029A090: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = ebp;

loc_0029A0A3: ;
    eax = MEM32(ebx);
    ecx = eax;
    ecx = ecx & 0xE0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x60000000 (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_A(_fa, _fb)) goto loc_0029A209; /* ja: above (unsigned >) */

loc_0029A0C0: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0029A1C3; /* je: equal / zero */

loc_0029A0C6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029A0A3; /* je: equal / zero */

loc_0029A0CA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20000000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029A1B5; /* je: equal / zero */

loc_0029A0D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A0F3; /* je: equal / zero */

loc_0029A0DD: ;
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x8000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A0EF; /* jne: not equal / not zero */

loc_0029A0EC: ;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0029A0EF: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0029A0A3;

loc_0029A0F3: ;
    esi = ZX8(MEM8(esp + 0x1A));
    edx = MEM32(esp + 0x10);
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = ebp;
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx + 0x1C) = esi;
    ecx = eax + 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ecx + edi) = 0;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029A192; /* je: equal / zero */

loc_0029A121: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029A155; /* jb: below (unsigned <) */

loc_0029A126: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0029A155; /* ja: above (unsigned >) */

loc_0029A12B: ;
    edx = esi;
    edx = edx >> 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029A13F; /* jne: not equal / not zero */

loc_0029A138: ;
    edx = 4;
    goto loc_0029A149;

loc_0029A13F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x16 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029A149; /* jne: not equal / not zero */

loc_0029A144: ;
    edx = 3;

loc_0029A149: ;
    ecx = eax * 8 + -72;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + 0x10) = MEM32(edi + 0x10) | edx;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0029A155: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029A164; /* jne: not equal / not zero */

loc_0029A15A: ;
    eax = MEM32(edi + 4);
    eax = eax | 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0029A18F;

loc_0029A164: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029A173; /* jne: not equal / not zero */

loc_0029A169: ;
    eax = MEM32(edi + 4);
    eax = eax | 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0029A18F;

loc_0029A173: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029A182; /* jne: not equal / not zero */

loc_0029A178: ;
    eax = MEM32(edi + 4);
    eax = eax | 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0029A18F;

loc_0029A182: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029A192; /* jne: not equal / not zero */

loc_0029A187: ;
    eax = MEM32(edi + 4);
    eax = eax | 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0029A18F: ;
    MEM32(edi + 4) = eax;

loc_0029A192: ;
    edx = esi;
    edx = edx >> 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ZX8(MEM8(edx + 0x2A61E8));
    esi = esi & 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ZX8(MEM8(esi + 0x2A61E0));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0029A0A3;

loc_0029A1B5: ;
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0029A0A3;

loc_0029A1C3: ;
    esi = eax;
    esi = esi & 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = esi;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx + edi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x18) = edx;
    MEM32(ecx + 0x14) = edx;
    edx = eax;
    edx = edx >> 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, LO8(edx) & 0xF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000000 (32-bit) */
    MEM32(ecx + 0x1C) = 2;
    MEM8(ecx + 0x21) = LO8(edx);
    if (TEST_Z(_fa, _fb)) goto loc_0029A200; /* je: equal / zero */

loc_0029A1F7: ;
    MEM8(esi + edi) = 2;
    goto loc_0029A0A3;

loc_0029A200: ;
    MEM8(esi + edi) = 1;
    goto loc_0029A0A3;

loc_0029A209: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029A221; /* jne: not equal / not zero */

loc_0029A211: ;
    eax = eax >> 0x19;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0029A0A3;

loc_0029A221: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0029A230
 * Original: 0x0029A230 - 0x0029A327 (247 bytes, 82 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029A230: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    edi = 0xDEADBEEFu;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0029A31E; /* je: equal / zero */

loc_0029A25B: ;
    PUSH32(esp, ebx);
    /* nop */

loc_0029A260: ;
    edx = ecx;
    edx = edx & 0xE0000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029A30B; /* jne: not equal / not zero */

loc_0029A274: ;
    edx = ecx;
    edx = edx >> 0x19;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0029A2A3; /* je: equal / zero */

loc_0029A28B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029A29C; /* je: equal / zero */

loc_0029A28F: ;
    MEM32(ebp) = 0x41EA4;
    MEM32(ebp + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0029A29C: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = eax;

loc_0029A2A3: ;
    MEM32(esp + 0x14) = ecx;

loc_0029A2A7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    ebx = edx;
    if (CMP_B(_fa, _fb)) goto loc_0029A2B3; /* jb: below (unsigned <) */

loc_0029A2AE: ;
    ebx = 8;

loc_0029A2B3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029A2EC; /* je: equal / zero */

loc_0029A2B7: ;
    eax = ebx;
    eax = eax << 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xB80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    edx = ebx;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    ecx = eax;
    eax = MEM32(esp + 0x20);
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
    esi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x10);

loc_0029A2EC: ;
    ecx = ebx;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + ebx * 4 + 1;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x10) = edx;
    if ((_fa != 0)) goto loc_0029A2A7; /* jne: not equal / not zero */

loc_0029A307: ;
    edi = MEM32(esp + 0x14);

loc_0029A30B: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0029A260; /* jne: not equal / not zero */

loc_0029A31D: ;
    POP32(esp, ebx);

loc_0029A31E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0029A330
 * Original: 0x0029A330 - 0x0029A46E (318 bytes, 113 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029A330: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0029A34C; /* je: equal / zero */

loc_0029A33C: ;
    eax = ZX16(MEM16(ebp));
    ecx = ZX16(MEM16(ebp + 2));
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x18) = ecx;

loc_0029A34C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029A362; /* je: equal / zero */

loc_0029A352: ;
    eax = MEM32(esp + 0x18);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + 0x7F;
    edx = edx >> 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax + edx * 4;

loc_0029A362: ;
    ecx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029A376; /* je: equal / zero */

loc_0029A36C: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0029A373u); RECOMP_ABI_CALL(0x0029A230u, sub_0029A230); /* call 0x0029A230 */

loc_0029A373: ;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0029A376: ;
    ebx = eax + esi;
    PUSH32(esp, 0x24800000);
    eax = ebx + 0x118;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029A38Au); RECOMP_ABI_CALL(0x0028499Eu, sub_0028499E); /* call 0x0028499E */

loc_0029A38A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029A39C; /* jne: not equal / not zero */

loc_0029A390: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x8007000Eu;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_0029A39C: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x46;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0x24);
    MEM32(esi + 4) = ecx;
    MEM32(esi) = 1;
    eax = esi + 0x1C;
    ecx = 0x10;
    /* nop */

loc_0029A3C0: ;
    MEM32(eax) = 2;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0029A3C0; /* jne: not equal / not zero */

loc_0029A3CC: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029A3E3; /* je: equal / zero */

loc_0029A3D4: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0029A3E3u); RECOMP_ABI_CALL(0x0029A090u, sub_0029A090); /* call 0x0029A090 */

loc_0029A3E3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029A436; /* je: equal / zero */

loc_0029A3E9: ;
    edi = MEM32(esi + 4);
    ecx = MEM32(esp + 0x10);
    edi = edi | 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2078) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2078 (32-bit) */
    MEM32(esi + 4) = edi;
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0029A406; /* je: equal / zero */

loc_0029A400: ;
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = eax;

loc_0029A406: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7378) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7378 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029A412; /* jne: not equal / not zero */

loc_0029A40E: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 8;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0029A412: ;
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 8) = eax;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    edi = esi + 0x114;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0029A42Du); RECOMP_ABI_CALL(0x0029A020u, sub_0029A020); /* call 0x0029A020 */

loc_0029A42D: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(esp + 0x18);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_0029A436: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029A448; /* je: equal / zero */

loc_0029A43A: ;
    ecx = esi + eax * 4 + 0x114;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0029A448u); RECOMP_ABI_CALL(0x0029A230u, sub_0029A230); /* call 0x0029A230 */

loc_0029A448: ;
    edx = MEM32(esp + 0x20);
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + eax * 4 + 0x114) = 0;
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(edx) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0029A470
 * Original: 0x0029A470 - 0x0029A4CF (95 bytes, 31 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A470: ;
    PUSH32(esp, ebx);

loc_0029A471: ;
    eax = MEM32(0x2A84A0);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2A84A4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x2A84A4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0029A4C4; /* jae: above or equal (unsigned >=) */

loc_0029A481: ;
    MEM32(0x2A84A0) = eax;
    MEM32(eax + -28) = 0x41EA4;
    MEM32(eax + -24) = ecx;
    MEM32(eax + -20) = 0x100B80;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + 0x2A73E0;
    ebx = MEM32(edx);
    MEM32(eax + -16) = ebx;
    MEM32(ecx) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(eax + -12) = ebx;
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(edx + 8);
    MEM32(eax + -8) = ebx;
    MEM32(ecx + 8) = ebx;
    ebx = MEM32(edx + 0xC);
    MEM32(eax + -4) = ebx;
    MEM32(ecx + 0xC) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0029A4C4: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0029A4CBu); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_0029A4CB: ;
    POP32(esp, ecx);
    POP32(esp, edx);
    goto loc_0029A471;

}

/**
 * sub_0029A4D0
 * Original: 0x0029A4D0 - 0x0029A572 (162 bytes, 42 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A4D0: ;
    eax = MEM32(0x2A84A0);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2A84A4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x2A84A4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0029A564; /* jae: above or equal (unsigned >=) */

loc_0029A4E4: ;
    MEM32(0x2A84A0) = eax;
    mm0 = MMX_MEM(edx); /* movq */
    mm1 = MMX_MEM(edx + 8); /* movq */
    mm2 = MMX_MEM(edx + 0x10); /* movq */
    mm3 = MMX_MEM(edx + 0x18); /* movq */
    mm4 = MMX_MEM(edx + 0x20); /* movq */
    mm5 = MMX_MEM(edx + 0x28); /* movq */
    mm6 = MMX_MEM(edx + 0x30); /* movq */
    mm7 = MMX_MEM(edx + 0x38); /* movq */
    MEM32(eax + -76) = 0x41EA4;
    MEM32(eax + -72) = ecx;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx + 0x2A73E0;
    MEM32(eax + -68) = 0x400B80;
    MMX_STORE(eax + -64, mm0); /* movq */
    MMX_STORE(ecx, mm0); /* movq */
    MMX_STORE(eax + -56, mm1); /* movq */
    MMX_STORE(ecx + 8, mm1); /* movq */
    MMX_STORE(eax + -48, mm2); /* movq */
    MMX_STORE(ecx + 0x10, mm2); /* movq */
    MMX_STORE(eax + -40, mm3); /* movq */
    MMX_STORE(ecx + 0x18, mm3); /* movq */
    MMX_STORE(eax + -32, mm4); /* movq */
    MMX_STORE(ecx + 0x20, mm4); /* movq */
    MMX_STORE(eax + -24, mm5); /* movq */
    MMX_STORE(ecx + 0x28, mm5); /* movq */
    MMX_STORE(eax + -16, mm6); /* movq */
    MMX_STORE(ecx + 0x30, mm6); /* movq */
    MMX_STORE(eax + -8, mm7); /* movq */
    MMX_STORE(ecx + 0x38, mm7); /* movq */
    (void)0; /* emms - empty MMX state */
    esp += 4; return; /* ret */

loc_0029A564: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0029A56Bu); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_0029A56B: ;
    POP32(esp, ecx);
    POP32(esp, edx);
    goto loc_0029A4D0;

}

/**
 * sub_0029A580
 * Original: 0x0029A580 - 0x0029A650 (208 bytes, 63 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A580: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x2A84A0);
    esi = edx;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2A84A4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x2A84A4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0029A640; /* jae: above or equal (unsigned >=) */

loc_0029A59A: ;
    MEM32(edi) = 0x41EA4;
    MEM32(edi + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0029A5CA; /* jae: above or equal (unsigned >=) */

loc_0029A5AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    eax = eax << 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0xB80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + -4) = eax;
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

loc_0029A5BD: ;
    MEM32(0x2A84A0) = edi;
    (void)0; /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0029A5CA: ;
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    (void)0; /* prefetchnta: cache/ordering hint, nothing to model */
    mm0 = MMX_MEM(esi); /* movq */
    mm1 = MMX_MEM(esi + 8); /* movq */
    mm2 = MMX_MEM(esi + 0x10); /* movq */
    mm3 = MMX_MEM(esi + 0x18); /* movq */
    mm4 = MMX_MEM(esi + 0x20); /* movq */
    mm5 = MMX_MEM(esi + 0x28); /* movq */
    mm6 = MMX_MEM(esi + 0x30); /* movq */
    mm7 = MMX_MEM(esi + 0x38); /* movq */
    MEM32(edi) = 0x400B80;
    MMX_STORE(edi + 4, mm0); /* movq */
    MMX_STORE(edi + 0xC, mm1); /* movq */
    MMX_STORE(edi + 0x14, mm2); /* movq */
    MMX_STORE(edi + 0x1C, mm3); /* movq */
    MMX_STORE(edi + 0x24, mm4); /* movq */
    MMX_STORE(edi + 0x2C, mm5); /* movq */
    MMX_STORE(edi + 0x34, mm6); /* movq */
    MMX_STORE(edi + 0x3C, mm7); /* movq */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x44;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0029A5BD; /* je: equal / zero */

loc_0029A61F: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029A5AB; /* jb: below (unsigned <) */

loc_0029A627: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2A84A4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x2A84A4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029A5CA; /* jb: below (unsigned <) */

loc_0029A62F: ;
    PUSH32(esp, eax);
    MEM32(0x2A84A0) = edi;
    PUSH32(esp, 0x0029A63Bu); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_0029A63B: ;
    edi = eax;
    POP32(esp, eax);
    goto loc_0029A5CA;

loc_0029A640: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0029A647u); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_0029A647: ;
    edi = eax;
    POP32(esp, ecx);
    POP32(esp, eax);
    goto loc_0029A59A;

}

/**
 * sub_0029A660
 * Original: 0x0029A660 - 0x0029A691 (49 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A660: ;
    eax = ecx;
    _fa = (uint32_t)(MEM8(0x2A84A8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x2A84A8), 0x10 (8-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (TEST_NZ(_fa, _fb)) goto loc_0029A685; /* jne: not equal / not zero */

loc_0029A670: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x2A73E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2A73E0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    esi = edx;
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
    POP32(esp, edi);
    POP32(esp, esi);

loc_0029A685: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x0029A68Du); RECOMP_ABI_CALL(0x0029A580u, sub_0029A580); /* call 0x0029A580 */

loc_0029A68D: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029A6A0
 * Original: 0x0029A6A0 - 0x0029A6D7 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029A6A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029A6C9; /* je: equal / zero */

loc_0029A6A9: ;
    PUSH32(esp, edi);
    ecx = 0x40;
    edi = 0x2AAA04;
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
    POP32(esp, edi);
    POP32(esp, esi);
    edx = 0x2AA9F0;
    edx = edx | 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0029AC50(); return; /* tail jmp 0x0029AC50 */

loc_0029A6C9: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_0029AC50(); return; /* tail jmp 0x0029AC50 */

}

/**
 * sub_0029A6E0
 * Original: 0x0029A6E0 - 0x0029A76C (140 bytes, 41 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A6E0: ;
    ecx = MEM32(0x2A8498);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029A6F6; /* je: equal / zero */

loc_0029A6F0: ;
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + 0x80000;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0029A6F6: ;
    eax = MEM32(esp + 0xC);
    esi = eax + eax * 2;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(esi + 0x2AA938);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029A730; /* je: equal / zero */

loc_0029A70A: ;
    ecx = MEM32(ecx + 0x2C);
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi + 0x2AA938);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029A730; /* jne: not equal / not zero */

loc_0029A72A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029A730u); RECOMP_ABI_CALL(0x00298E90u, sub_00298E90); /* call 0x00298E90 */

loc_0029A730: ;
    ecx = MEM32(esi + 0x2AA930);
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    ecx = MEM32(0x2A7FF8);
    MEM32(esi + 0x2AA930) = eax;
    MEM32(esi + 0x2AA938) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0029A75E; /* jne: not equal / not zero */

loc_0029A750: ;
    ecx = ecx | 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(0x2A7FF8) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0029A75E: ;
    ecx = ecx | 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(0x2A7FF8) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0029A770
 * Original: 0x0029A770 - 0x0029A7C4 (84 bytes, 32 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029A770: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x2A8498);
    SET_LO8(eax, MEM8(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029A791; /* jne: not equal / not zero */

loc_0029A786: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0029A791u); RECOMP_ABI_CALL(0x00299F70u, sub_00299F70); /* call 0x00299F70 */

loc_0029A791: ;
    esi = MEM32(edi + 0xC);
    ebx = esi + 2;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0029A79Du); RECOMP_ABI_CALL(0x0029D550u, sub_0029D550); /* call 0x0029D550 */

loc_0029A79D: ;
    ecx = MEM32(esp + 0x18);
    MEM32(eax) = 0x41E9C;
    MEM32(eax + 4) = ecx;
    ecx = esi;
    esi = edi + 0x114;
    edi = eax + 8;
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
    POP32(esp, edi);
    edx = eax + ebx * 4;
    POP32(esp, esi);
    MEM32(ebp) = edx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0029A7D0
 * Original: 0x0029A7D0 - 0x0029A86C (156 bytes, 44 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A7D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(0x2A8498);
    if (CMP_EQ(_fa, _fb)) goto loc_0029A844; /* je: equal / zero */

loc_0029A7DF: ;
    ecx = MEM32(esi + 0x790);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, edi);
    edi = eax + -1;
    MEM32(esi + 0x790) = edi;
    MEM32(esi + 0x794) = eax;
    MEM32(0x2A7FF8) = MEM32(0x2A7FF8) | 0x70;
    _fa = (uint32_t)(MEM32(0x2A7FF8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(edi + 4);
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x13) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x13 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029A843; /* je: equal / zero */

loc_0029A809: ;
    MEM32(0x2A7FF8) = MEM32(0x2A7FF8) | 0x1000;
    _fa = (uint32_t)(MEM32(0x2A7FF8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029A81F; /* jb: below (unsigned <) */

loc_0029A81A: ;
    PUSH32(esp, 0x0029A81Fu); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_0029A81F: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x0029A828u); RECOMP_ABI_CALL(0x0029BA00u, sub_0029BA00); /* call 0x0029BA00 */

loc_0029A828: ;
    ecx = MEM32(edi + 4);
    MEM32(eax) = 0x81E94;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = 6;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;

loc_0029A843: ;
    POP32(esp, edi);

loc_0029A844: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029A850; /* jb: below (unsigned <) */

loc_0029A84B: ;
    PUSH32(esp, 0x0029A850u); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_0029A850: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0x41EA0;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(esi + 0x798) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0029A870
 * Original: 0x0029A870 - 0x0029A988 (280 bytes, 65 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A870: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(0x2A8498);
    ecx = MEM32(ebx + 8);
    if (TEST_Z(_fa, _fb)) goto loc_0029A88A; /* je: equal / zero */

loc_0029A882: ;
    ecx = ecx | 0x200;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0029A890;

loc_0029A88A: ;
    ecx = ecx & 0xFFFFFDFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0029A890: ;
    eax = eax & 0xFFFFFFEFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 8) = ecx;
    MEM32(ebx + 0x1918) = eax;
    if ((_fa != 0)) goto loc_0029A984; /* jne: not equal / not zero */

loc_0029A8A2: ;
    MEM32(0x2A7FF8) = MEM32(0x2A7FF8) | 0x1600;
    _fa = (uint32_t)(MEM32(0x2A7FF8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029A8B8; /* jb: below (unsigned <) */

loc_0029A8B3: ;
    PUSH32(esp, 0x0029A8B8u); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_0029A8B8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(eax) = 0x41EA4;
    MEM32(eax + 4) = 0x3C;
    MEM32(eax + 8) = 0x300B80;
    edi = eax + 0xC;
    PUSH32(esp, 0x2A61F0);
    ecx = 0xC;
    esi = 0x2A6230;
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
    esi = eax + 0x3C;
    PUSH32(esp, 0x400840);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0029A8F0u); RECOMP_ABI_CALL(0x0029CD80u, sub_0029CD80); /* call 0x0029CD80 */

loc_0029A8F0: ;
    PUSH32(esp, 0x2A61F0);
    PUSH32(esp, 0x400880);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029A903u); RECOMP_ABI_CALL(0x0029CD80u, sub_0029CD80); /* call 0x0029CD80 */

loc_0029A903: ;
    PUSH32(esp, 0x2A61F0);
    PUSH32(esp, 0x4008C0);
    ecx = esi + 0x88;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0029A919u); RECOMP_ABI_CALL(0x0029CD80u, sub_0029CD80); /* call 0x0029CD80 */

loc_0029A919: ;
    PUSH32(esp, 0x2A61F0);
    PUSH32(esp, 0x400900);
    edx = esi + 0xCC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0029A92Fu); RECOMP_ABI_CALL(0x0029CD80u, sub_0029CD80); /* call 0x0029CD80 */

loc_0029A92F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x110) = 0x1009D0;
    MEM32(esi + 0x114) = eax;
    MEM32(esi + 0x118) = eax;
    MEM32(esi + 0x120) = eax;
    ecx = 0x3F800000;
    MEM32(esi + 0x11C) = ecx;
    MEM32(esi + 0x124) = 0x100A50;
    MEM32(esi + 0x128) = eax;
    MEM32(esi + 0x12C) = eax;
    MEM32(esi + 0x130) = eax;
    MEM32(esi + 0x134) = ecx;
    _fb = (uint32_t)(0x138) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x138;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ebx) = esi;
    POP32(esp, esi);

loc_0029A984: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029A990
 * Original: 0x0029A990 - 0x0029A9C9 (57 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A990: ;
    PUSH32(esp, esi);
    esi = MEM32(0x2A8498);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029A9A3; /* jb: below (unsigned <) */

loc_0029A99E: ;
    PUSH32(esp, 0x0029A9A3u); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_0029A9A3: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    MEM32(eax) = 0x41E9C;
    PUSH32(esp, ecx);
    MEM32(eax + 4) = 0;
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029A9C3u); RECOMP_ABI_CALL(0x0029A020u, sub_0029A020); /* call 0x0029A020 */

loc_0029A9C3: ;
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0029A9D0
 * Original: 0x0029A9D0 - 0x0029A9EB (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029A9D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + -1);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    if ((_fa != 0)) goto loc_0029A9E8; /* jne: not equal / not zero */

loc_0029A9DD: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029A9E8u); RECOMP_ABI_CALL(0x00284A3Eu, sub_00284A3E); /* call 0x00284A3E */

loc_0029A9E8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029A9F0
 * Original: 0x0029A9F0 - 0x0029AADF (239 bytes, 70 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029A9F0(void)
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

loc_0029A9F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x790);
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029AADD; /* je: equal / zero */

loc_0029AA03: ;
    eax = MEM32(0x2A8374);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0029AA18; /* jne: not equal / not zero */

loc_0029AA11: ;
    ebp = 0x2A63D0;
    goto loc_0029AA2F;

loc_0029AA18: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029AA2A; /* je: equal / zero */

loc_0029AA1E: ;
    edi = 0x2C;
    ebp = 0x2A6320;
    goto loc_0029AA34;

loc_0029AA2A: ;
    ebp = 0x2A6260;

loc_0029AA2F: ;
    edi = 0x30;

loc_0029AA34: ;
    ecx = edi + 0x1E;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0029AA3Du); RECOMP_ABI_CALL(0x0029D550u, sub_0029D550); /* call 0x0029D550 */

loc_0029AA3D: ;
    MEM32(eax) = 0x41EA4;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = 0x200B80;
    _fa = (uint32_t)(MEM32(0x2A843C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2A843C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029AA64; /* jne: not equal / not zero */

loc_0029AA56: ;
    fp_push(MEMF(esi + 0x944)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x940)); /* fmul dword ptr [esi + 0x940] */
    goto loc_0029AA6A;

loc_0029AA64: ;
    fp_push(MEMF(0x3337A0)); /* fld float */

loc_0029AA6A: ;
    edx = MEM32(esi + 0x958);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(esi + 0x95C);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0x944);
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3337C0)); /* fld float */
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0029AAA5; /* jns: not sign (positive) */

loc_0029AA95: ;
    _fa = (uint32_t)(MEM32(0x2A8460)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2A8460), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029AAA5; /* je: equal / zero */

loc_0029AA9D: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3337D8)); /* fld float */

loc_0029AAA5: ;
    fp_push(MEMF(esi + 0xEE8)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEMF(eax + -24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xEEC)); /* fld float */
    MEM32(eax + -16) = ebx;
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEM32(eax + -12) = ebx;
    MEMF(eax + -20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + -8) = 0x41E9C;
    MEM32(eax + -4) = ebx;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0029AAD8u); RECOMP_ABI_CALL(0x0029A020u, sub_0029A020); /* call 0x0029A020 */

loc_0029AAD8: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi) = eax;
    POP32(esp, ebx);

loc_0029AADD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0029AAE0
 * Original: 0x0029AAE0 - 0x0029AC43 (355 bytes, 116 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AAE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029AAE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x2A8498);
    eax = MEM32(esi + 0x790);
    ecx = MEM32(eax + 4);
    ebp = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0029AB26; /* je: equal / zero */

loc_0029AB04: ;
    SET_LO8(eax, MEM8(ebx + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    edi = ebx + -1;
    if (TEST_Z(_fa, _fb)) goto loc_0029AB32; /* je: equal / zero */

loc_0029AB0E: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0029AB17u); RECOMP_ABI_CALL(0x0029A770u, sub_0029A770); /* call 0x0029A770 */

loc_0029AB17: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0029AB1Eu); RECOMP_ABI_CALL(0x0029A7D0u, sub_0029A7D0); /* call 0x0029A7D0 */

loc_0029AB1E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0029AB26: ;
    PUSH32(esp, ebx);
    edi = 0x2AAB08;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0029AB32u); RECOMP_ABI_CALL(0x00299E30u, sub_00299E30); /* call 0x00299E30 */

loc_0029AB32: ;
    ecx = MEM32(0x2A7FF8);
    ecx = ecx | 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2A7FF8) = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029AB52; /* je: equal / zero */

loc_0029AB46: ;
    eax = ecx;
    eax = eax | 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2A7FF8) = eax;

loc_0029AB52: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029AB65; /* je: equal / zero */

loc_0029AB5B: ;
    MEM32(0x2A7FF8) = MEM32(0x2A7FF8) | 0x1600;
    _fa = (uint32_t)(MEM32(0x2A7FF8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0029AB65: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x790) = edi;
    MEM32(esi + 0x794) = ebx;
    MEM32(esi + 0x798) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_0029AB87; /* jb: below (unsigned <) */

loc_0029AB82: ;
    PUSH32(esp, 0x0029AB87u); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_0029AB87: ;
    edx = MEM32(edi + 4);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029AB9E; /* jne: not equal / not zero */

loc_0029AB92: ;
    MEM32(eax) = 0x4194C;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0029AB9E: ;
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029ABB2; /* jne: not equal / not zero */

loc_0029ABA6: ;
    MEM32(eax) = 0x41950;
    MEM32(eax + 4) = ebp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0029ABB2: ;
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029ABC6; /* jne: not equal / not zero */

loc_0029ABBA: ;
    MEM32(eax) = 0x4195C;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0029ABC6: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029ABDA; /* jne: not equal / not zero */

loc_0029ABCE: ;
    MEM32(eax) = 0x41960;
    MEM32(eax + 4) = ebp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0029ABDA: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029AC19; /* je: equal / zero */

loc_0029ABE2: ;
    edx = eax;
    ecx = esi;
    PUSH32(esp, 0x0029ABEBu); RECOMP_ABI_CALL(0x0029BA00u, sub_0029BA00); /* call 0x0029BA00 */

loc_0029ABEB: ;
    MEM32(eax) = 0x41EA0;
    MEM32(eax + 4) = ebp;
    MEM32(eax + 8) = 0x81E94;
    MEM32(eax + 0xC) = 6;
    MEM32(eax + 0x10) = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi) = eax;
    PUSH32(esp, 0x0029AC11u); RECOMP_ABI_CALL(0x0029A9F0u, sub_0029A9F0); /* call 0x0029A9F0 */

loc_0029AC11: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0029AC19: ;
    ecx = ecx ^ MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x12) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x12 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029AC39; /* je: equal / zero */

loc_0029AC22: ;
    MEM32(eax) = 0x41E94;
    edx = eax + 8;
    ecx = esi;
    MEM32(eax + 4) = 4;
    PUSH32(esp, 0x0029AC39u); RECOMP_ABI_CALL(0x0029BA00u, sub_0029BA00); /* call 0x0029BA00 */

loc_0029AC39: ;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029AC50
 * Original: 0x0029AC50 - 0x0029ADFE (430 bytes, 137 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AC50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029AC50: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(0x2A8498);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0029ACCB; /* jne: not equal / not zero */

loc_0029AC64: ;
    eax = MEM32(0x2A7FF8);
    eax = eax & 0xBFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2A7FF8) = eax;
    eax = MEM32(ebx + 0xAF4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0029ACB8; /* jbe: below or equal (unsigned <=) */

loc_0029AC82: ;
    esi = ebx + 0xAF8;

loc_0029AC88: ;
    eax = MEM32(esi);
    ecx = MEM32(ebx + 0x2C);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = ecx;
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029ACAA; /* jne: not equal / not zero */

loc_0029ACA4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029ACAAu); RECOMP_ABI_CALL(0x00298E90u, sub_00298E90); /* call 0x00298E90 */

loc_0029ACAA: ;
    eax = MEM32(ebx + 0xAF4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029AC88; /* jb: below (unsigned <) */

loc_0029ACB8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xAF4) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0029ACCB: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x58);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0029ACF2; /* jbe: below or equal (unsigned <=) */

loc_0029ACD4: ;
    ecx = MEM32(esp + 0x5C);
    edx = ebp;
    /* nop */

loc_0029ACE0: ;
    eax = MEM32(ecx);
    edi = MEM32(eax);
    _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x80000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = edi;
    if ((_fa != 0)) goto loc_0029ACE0; /* jne: not equal / not zero */

loc_0029ACF2: ;
    eax = MEM32(ebx + 0xAF4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0029AD34; /* jbe: below or equal (unsigned <=) */

loc_0029ACFE: ;
    esi = ebx + 0xAF8;

loc_0029AD04: ;
    eax = MEM32(esi);
    edx = MEM32(ebx + 0x2C);
    MEM32(eax + 8) = edx;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFF80000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFF80000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x78FFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029AD26; /* jne: not equal / not zero */

loc_0029AD20: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029AD26u); RECOMP_ABI_CALL(0x00298E90u, sub_00298E90); /* call 0x00298E90 */

loc_0029AD26: ;
    eax = MEM32(ebx + 0xAF4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029AD04; /* jb: below (unsigned <) */

loc_0029AD34: ;
    eax = MEM32(0x2A7FF8);
    ecx = MEM32(esp + 0x54);
    esi = MEM32(esp + 0x5C);
    eax = eax & 0xFFFFFF8Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x40000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2A7FF8) = eax;
    MEM32(ebx + 0xAF0) = ecx;
    ecx = ebp + ebp * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebx + 0xAF4) = ebp;
    edi = ebx + 0xAF8;
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
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    MEM32(esp + 0x58) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0029AD89; /* jb: below (unsigned <) */

loc_0029AD80: ;
    PUSH32(esp, 0x0029AD85u); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_0029AD85: ;
    MEM32(esp + 0x58) = eax;

loc_0029AD89: ;
    ecx = MEM32(esp + 0x54);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x401720;
    edi = eax + 4;
    _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1B;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0029ADA0;

    /* nop */

loc_0029ADA0: ;
    edx = MEM32(ecx + -8);
    ebp = MEM32(ecx + -4);
    eax = edx + edx * 2;
    edx = MEM32(esp + 0x5C);
    edx = edx + eax * 4;
    eax = MEM32(edx);
    _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(eax + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(edx + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebp;
    edx = MEM32(edx + 4);
    ebp = MEM32(ecx);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + esi * 4 + 0x10) = edx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029ADA0; /* jb: below (unsigned <) */

loc_0029ADD4: ;
    eax = MEM32(esp + 0x58);
    MEM32(eax + 0x44) = 0x401760;
    edi = eax + 0x48;
    POP32(esp, ebp);
    ecx = 0x10;
    esi = esp + 0xC;
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
    POP32(esp, edi);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0029AE00
 * Original: 0x0029AE00 - 0x0029AE22 (34 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AE00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029AE00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x2A8498);
    MEM32(ecx + 0x78C) = eax;
    MEM32(0x2A7FF8) = MEM32(0x2A7FF8) | 0x4000;
    _fa = (uint32_t)(MEM32(0x2A7FF8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2A8420) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029AE30
 * Original: 0x0029AE30 - 0x0029AE57 (39 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029AE30: ;
    eax = MEM32(0x2A84A0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x2A84A4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x2A84A4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0029AE4C; /* jae: above or equal (unsigned >=) */

loc_0029AE40: ;
    MEM32(0x2A84A0) = eax;
    MEM32(eax + -8) = ecx;
    MEM32(eax + -4) = edx;
    esp += 4; return; /* ret */

loc_0029AE4C: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0029AE53u); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_0029AE53: ;
    POP32(esp, ecx);
    POP32(esp, edx);
    goto loc_0029AE30;

}

/**
 * sub_0029AE60
 * Original: 0x0029AE60 - 0x0029AEBD (93 bytes, 26 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029AE60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0029AE89; /* jge: greater or equal (signed >=) */

loc_0029AE6A: ;
    ecx = MEM32(esi * 4 + 0x322DE8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = edi;
    PUSH32(esp, 0x0029AE7Du); RECOMP_ABI_CALL(0x0029AE30u, sub_0029AE30); /* call 0x0029AE30 */

loc_0029AE7D: ;
    MEM32(esi * 4 + 0x2A8200) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0029AE89: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x88 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0029AEAD; /* jge: greater or equal (signed >=) */

loc_0029AE91: ;
    eax = MEM32(esi * 4 + 0x322BC8);
    MEM32(0x2A7FF8) = MEM32(0x2A7FF8) | eax;
    _fa = (uint32_t)(MEM32(0x2A7FF8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0xC);
    MEM32(esi * 4 + 0x2A8200) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0029AEAD: ;
    edx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi * 4 + 0x2A62A0); PUSH32(esp, 0x0029AEB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0029AEB2u); } /* indirect call */
    }

loc_0029AEB9: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0029AEC0
 * Original: 0x0029AEC0 - 0x0029AFE2 (290 bytes, 72 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0029AEC0(void)
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

loc_0029AEC0: ;
    eax = MEM32(0x2A8498);
    ecx = MEM32(eax + 0xED0);
    fp_push((double)SMEM32(eax + 0xED0)); /* fild */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0029AEDE; /* jge: greater or equal (signed >=) */

loc_0029AED8: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_0029AEDE: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x958)); /* fmul dword ptr [eax + 0x958] */
    edx = MEM32(eax + 0xED4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xEE8)); /* fadd dword ptr [eax + 0xee8] */
    fp_push((double)SMEM32(eax + 0xED4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0029AF00; /* jge: greater or equal (signed >=) */

loc_0029AEFA: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_0029AF00: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x95C)); /* fmul dword ptr [eax + 0x95c] */
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(edx), 0 (8-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xEEC)); /* fadd dword ptr [eax + 0xeec] */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0029AF2D; /* jns: not sign (positive) */

loc_0029AF15: ;
    _fa = (uint32_t)(MEM32(0x2A8460)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2A8460), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029AF2D; /* je: equal / zero */

loc_0029AF1D: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x3337D8)); /* fsub dword ptr [0x3337d8] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x3337D8)); /* fsub dword ptr [0x3337d8] */

loc_0029AF2D: ;
    edx = MEM32(eax + 0xED8);
    fp_push((double)SMEM32(eax + 0xED8)); /* fild */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0029AF43; /* jge: greater or equal (signed >=) */

loc_0029AF3D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_0029AF43: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x958)); /* fmul dword ptr [eax + 0x958] */
    edx = MEM32(eax + 0xEDC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3337D8)); /* fmul dword ptr [0x3337d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(eax + 0xEDC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0029AF68; /* jge: greater or equal (signed >=) */

loc_0029AF62: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_0029AF68: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x95C)); /* fmul dword ptr [eax + 0x95c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333900)); /* fmul dword ptr [0x333900] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xEE4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0xEE0)); /* fsub dword ptr [eax + 0xee0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x944)); /* fmul dword ptr [eax + 0x944] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xEE0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x944)); /* fmul dword ptr [eax + 0x944] */
    eax = MEM32(esp + 0x14);
    MEM32(eax + 0xC) = ecx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    edx = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 4);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEM32(eax + 8) = edx;
    fp_push(MEMF(esp)); /* fld float */
    MEM32(eax + 0xC) = ecx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0029AFF0
 * Original: 0x0029AFF0 - 0x0029B130 (320 bytes, 84 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0029AFF0(void)
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

loc_0029AFF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x2A8498);
    eax = MEM32(edx + 0xED8);
    fp_push((double)SMEM32(edx + 0xED8)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0029B016; /* jge: greater or equal (signed >=) */

loc_0029B010: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_0029B016: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x958)); /* fmul dword ptr [edx + 0x958] */
    ecx = MEM32(edx + 0xEDC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3337D8)); /* fmul dword ptr [0x3337d8] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_push((double)SMEM32(edx + 0xEDC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0029B03C; /* jge: greater or equal (signed >=) */

loc_0029B036: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_0029B03C: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x95C)); /* fmul dword ptr [edx + 0x95c] */
    eax = MEM32(0x2A843C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333900)); /* fmul dword ptr [0x333900] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0xEE4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0xEE0)); /* fsub dword ptr [edx + 0xee0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x944)); /* fmul dword ptr [edx + 0x944] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x944)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xEE0)); /* fmul dword ptr [edx + 0xee0] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_0029B0C2; /* jne: not equal / not zero */

loc_0029B082: ;
    fp_push(MEMF(edx + 0x940)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0x944)); /* fmul dword ptr [edx + 0x944] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] * fp_top()); fp_pop(); /* fmulp st(2) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0029B0CC;

loc_0029B0C2: ;
    fp_push(MEMF(0x3337A0)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_0029B0CC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    ecx = 0x10;
    edi = esp + 0x20;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x54) = eax;
    eax = esp + 0x20;
    MEM32(esp + 0x58) = ecx;
    PUSH32(esp, eax);
    ecx = edx + 0xC90;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x970) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x970;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0029B121u); RECOMP_ABI_CALL(0x0029C560u, sub_0029C560); /* call 0x0029C560 */

loc_0029B121: ;
    MEM32(0x2A7FF8) = MEM32(0x2A7FF8) | 0x200;
    _fa = (uint32_t)(MEM32(0x2A7FF8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
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
 * sub_0029B130
 * Original: 0x0029B130 - 0x0029B162 (50 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029B130: ;
    PUSH32(esp, esi);
    esi = MEM32(0x2A8498);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029B143; /* jb: below (unsigned <) */

loc_0029B13E: ;
    PUSH32(esp, 0x0029B143u); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_0029B143: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x80320;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x2A845C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029B170
 * Original: 0x0029B170 - 0x0029B1A5 (53 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029B170: ;
    PUSH32(esp, esi);
    esi = MEM32(0x2A8498);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029B183; /* jb: below (unsigned <) */

loc_0029B17E: ;
    PUSH32(esp, 0x0029B183u); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_0029B183: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x41E6C;
    edx = ecx + -512;
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x2A8470) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029B1B0
 * Original: 0x0029B1B0 - 0x0029B1FD (77 bytes, 24 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029B1B0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x2A8498);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_B(_fa, _fb)) goto loc_0029B1C4; /* jb: below (unsigned <) */

loc_0029B1BF: ;
    PUSH32(esp, 0x0029B1C4u); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_0029B1C4: ;
    ecx = MEM32(esp + 0xC);
    edx = ZX8(MEM8(esp + 0xE));
    edi = ecx;
    edi = edi & 0xFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ecx;
    edi = edi & 0xFF00FF00u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x402A8;
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, edi);
    MEM32(0x2A8428) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029B200
 * Original: 0x0029B200 - 0x0029B268 (104 bytes, 31 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029B200: ;
    PUSH32(esp, esi);
    esi = MEM32(0x2A8498);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029B213; /* jb: below (unsigned <) */

loc_0029B20E: ;
    PUSH32(esp, 0x0029B213u); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_0029B213: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax) = 0x40308;
    if (CMP_NE(_fa, _fb)) goto loc_0029B233; /* jne: not equal / not zero */

loc_0029B221: ;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x2A844C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0029B233: ;
    MEM32(eax + 4) = 1;
    PUSH32(esp, edi);
    edi = MEM32(0x2A8448);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(eax + 8) = 0x4039C;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x404;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -4) = edx;
    MEM32(esi) = eax;
    MEM32(0x2A844C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029B270
 * Original: 0x0029B270 - 0x0029B2AA (58 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029B270: ;
    PUSH32(esp, esi);
    esi = MEM32(0x2A8498);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029B283; /* jb: below (unsigned <) */

loc_0029B27E: ;
    PUSH32(esp, 0x0029B283u); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_0029B283: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x403A0;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = MEM32(0x2A844C);
    MEM32(0x2A8448) = ecx;
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0029B200(); return; /* tail jmp 0x0029B200 */

}

/**
 * sub_0029B2B0
 * Original: 0x0029B2B0 - 0x0029B2E9 (57 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029B2B0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x2A8498);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029B2C3; /* jb: below (unsigned <) */

loc_0029B2BE: ;
    PUSH32(esp, 0x0029B2C3u); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_0029B2C3: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x403A4;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(0x2A7FF8) = MEM32(0x2A7FF8) | 0x200;
    _fa = (uint32_t)(MEM32(0x2A7FF8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x2A8438) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029B2F0
 * Original: 0x0029B2F0 - 0x0029B341 (81 bytes, 26 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0029B2F0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x2A8498);
    eax = MEM32(esi + 0x780);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029B334; /* jne: not equal / not zero */

loc_0029B301: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029B30D; /* jb: below (unsigned <) */

loc_0029B308: ;
    PUSH32(esp, 0x0029B30Du); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_0029B30D: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x400A60;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0x10;
    /* nop */

loc_0029B320: ;
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0029B320; /* jne: not equal / not zero */

loc_0029B328: ;
    MEM32(esi) = eax;
    MEM32(0x2A8450) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0029B334: ;
    eax = MEM32(esp + 8);
    MEM32(0x2A8450) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029B350
 * Original: 0x0029B350 - 0x0029B3B5 (101 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B350(void)
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

loc_0029B350: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x2A8498);
    MEM32(esp + 0xC) = ebx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x960)); /* fmul dword ptr [esi + 0x960] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333928)); /* fmul dword ptr [0x333928] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337D8)); /* fadd dword ptr [0x3337d8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0029B380u); RECOMP_ABI_CALL(0x0029E7D0u, sub_0029E7D0); /* call 0x0029E7D0 */

loc_0029B380: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x1FF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0029B38F; /* jbe: below or equal (unsigned <=) */

loc_0029B38A: ;
    edi = 0x1FF;

loc_0029B38F: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0029B39B; /* jb: below (unsigned <) */

loc_0029B396: ;
    PUSH32(esp, 0x0029B39Bu); RECOMP_ABI_CALL(0x0029D540u, sub_0029D540); /* call 0x0029D540 */

loc_0029B39B: ;
    MEM32(eax) = 0x40380;
    MEM32(eax + 4) = edi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    MEM32(0x2A8474) = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
