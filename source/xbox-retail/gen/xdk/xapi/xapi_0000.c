/**
 * PoP SoT xbox-retail - xdk/xapi, chunk 0
 * Xbox API (XAPILIB): start-up, disc and save storage
 * Functions: 115 (0x003315DC - 0x00351663)
 */

#define RECOMP_GENERATED_CODE
#include "../../recomp_funcs.h"
#include <math.h>

/**
 * sub_003315DC
 * Original: 0x003315DC - 0x00331621 (69 bytes, 30 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x002803D3, between)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003315DC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003315DC: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 1);
    PUSH32(esp, 0x003315F1u); RECOMP_ABI_CALL(0x003357C5u, sub_003357C5); /* call 0x003357C5 */

loc_003315F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0033161A; /* jne: not equal / not zero */

loc_003315F5: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00331612; /* je: equal / zero */

loc_003315FB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0033160D; /* je: equal / zero */

loc_003315FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00331609u); RECOMP_ABI_CALL(0x0034761Du, sub_0034761D); /* call 0x0034761D */

loc_00331609: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0033161D;

loc_0033160D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0033161D;

loc_00331612: ;
    eax = esi;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    goto loc_0033161D;

loc_0033161A: ;
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFEu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033161D: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00331621
 * Original: 0x00331621 - 0x0033165F (62 bytes, 23 insns)
 * Folder: xdk/xapi (between: 0x003315DC and 0x0033165F)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331621(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00331621: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x418300);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033162Du); RECOMP_ABI_CALL(0x00347864u, sub_00347864); /* call 0x00347864 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0033162D: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);

loc_00331637: ;
    SET_LO8(eax, MEM8(ecx));
    MEM8(edx) = LO8(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00331637; /* jne: not equal / not zero */

loc_00331641: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + 8);
    goto loc_00331657;

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00331657: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033165Cu); RECOMP_ABI_CALL(0x0034789Fu, sub_0034789F); /* call 0x0034789F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0033165C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033164A
 * Original: 0x0033164A - 0x0033165F (21 bytes, 8 insns)
 * Folder: xdk/xapi (between: 0x003315DC and 0x0033165F)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033164A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033164A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033164E
 * Original: 0x0033164E - 0x0033165F (17 bytes, 5 insns)
 * Folder: xdk/xapi (between: 0x003315DC and 0x0033165F)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033164E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033164E: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0033165Cu); RECOMP_ABI_CALL(0x0034789Fu, sub_0034789F); /* call 0x0034789F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0033165C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033165F
 * Original: 0x0033165F - 0x003316C4 (101 bytes, 39 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00280418, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033165F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033165F: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x418310);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033166Bu); RECOMP_ABI_CALL(0x00347864u, sub_00347864); /* call 0x00347864 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0033166B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = ebx;
    ecx = MEM32(ebp + 0xC);
    MEM32(ebp + -32) = ecx;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003316A6; /* je: equal / zero */

loc_00331681: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003316A0; /* je: equal / zero */

loc_00331686: ;
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033169B; /* je: equal / zero */

loc_0033168C: ;
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -28) = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = ecx;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00331681;

loc_0033169B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003316A4; /* jne: not equal / not zero */

loc_003316A0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -28) = eax;

loc_003316A4: ;
    MEM8(eax) = LO8(ebx);

loc_003316A6: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + 8);
    goto loc_003316BC;

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_003316BC: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003316C1u); RECOMP_ABI_CALL(0x0034789Fu, sub_0034789F); /* call 0x0034789F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003316C1: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003316AF
 * Original: 0x003316AF - 0x003316C4 (21 bytes, 8 insns)
 * Folder: xdk/xapi (between: 0x0033165F and 0x0033175C)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003316AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003316AF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    esp += 16; return; /* ret 12 */

}

/**
 * sub_003316B3
 * Original: 0x003316B3 - 0x003316C4 (17 bytes, 5 insns)
 * Folder: xdk/xapi (between: 0x0033165F and 0x0033175C)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003316B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003316B3: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x003316C1u); RECOMP_ABI_CALL(0x0034789Fu, sub_0034789F); /* call 0x0034789F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003316C1: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003316C4
 * Original: 0x003316C4 - 0x0033171E (90 bytes, 36 insns)
 * Folder: xdk/xapi (between: 0x0033165F and 0x0033175C)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003316C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003316C4: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x418320);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003316D0u); RECOMP_ABI_CALL(0x00347864u, sub_00347864); /* call 0x00347864 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003316D0: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 0xC);
    edx = eax;

loc_003316D9: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003316D9; /* jne: not equal / not zero */

loc_003316E0: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edx;
    edx = eax;
    edi = MEM32(ebp + 8);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edi + 1;

loc_003316ED: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003316ED; /* jne: not equal / not zero */

loc_003316F5: ;
    ecx = edx;
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
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00331716;

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00331716: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033171Bu); RECOMP_ABI_CALL(0x0034789Fu, sub_0034789F); /* call 0x0034789F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0033171B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00331709
 * Original: 0x00331709 - 0x0033171E (21 bytes, 8 insns)
 * Folder: xdk/xapi (between: 0x0033165F and 0x0033175C)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331709(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00331709: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033170D
 * Original: 0x0033170D - 0x0033171E (17 bytes, 5 insns)
 * Folder: xdk/xapi (between: 0x0033165F and 0x0033175C)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033170D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033170D: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0033171Bu); RECOMP_ABI_CALL(0x0034789Fu, sub_0034789F); /* call 0x0034789F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0033171B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033171E
 * Original: 0x0033171E - 0x0033175C (62 bytes, 23 insns)
 * Folder: xdk/xapi (between: 0x0033165F and 0x0033175C)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033171E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033171E: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x418330);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033172Au); RECOMP_ABI_CALL(0x00347864u, sub_00347864); /* call 0x00347864 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0033172A: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00331752; /* je: equal / zero */

loc_00331731: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax + 1;

loc_00331738: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00331738; /* jne: not equal / not zero */

loc_0033173F: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00331754;

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00331752: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00331754: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00331759u); RECOMP_ABI_CALL(0x0034789Fu, sub_0034789F); /* call 0x0034789F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00331759: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00331747
 * Original: 0x00331747 - 0x0033175C (21 bytes, 8 insns)
 * Folder: xdk/xapi (between: 0x0033165F and 0x0033175C)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331747(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00331747: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033174B
 * Original: 0x0033174B - 0x0033175C (17 bytes, 5 insns)
 * Folder: xdk/xapi (between: 0x0033165F and 0x0033175C)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033174B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0033174B: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x00331759u); RECOMP_ABI_CALL(0x0034789Fu, sub_0034789F); /* call 0x0034789F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00331759: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033175C
 * Original: 0x0033175C - 0x003318E7 (395 bytes, 136 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x002804EA, between)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033175C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033175C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x18);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, 1);
    POP32(esp, ebx);
    if ((_fa == 0)) goto loc_003317B1; /* je: equal / zero */

loc_00331770: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003317A8; /* je: equal / zero */

loc_00331773: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003317A3; /* je: equal / zero */

loc_00331776: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0033179A; /* je: equal / zero */

loc_00331779: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0033178B; /* jne: not equal / not zero */

loc_0033177C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x40000000 (32-bit) */
    MEM32(ebp + 0xC) = 4;
    if (TEST_NZ(_fa, _fb)) goto loc_003317B8; /* jne: not equal / not zero */

loc_0033178B: ;
    PUSH32(esp, 0xC000000Du);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00331795u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00331795: ;
    goto loc_003318B4;

loc_0033179A: ;
    MEM32(ebp + 0xC) = 3;
    goto loc_003317B8;

loc_003317A3: ;
    MEM32(ebp + 0xC) = ebx;
    goto loc_003317B8;

loc_003317A8: ;
    MEM32(ebp + 0xC) = 5;
    goto loc_003317B8;

loc_003317B1: ;
    MEM32(ebp + 0xC) = 2;

loc_003317B8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x41808C); PUSH32(esp, 0x003317C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003317C1u); } /* indirect call */
    }

loc_003317C7: ;
    _fa = (uint32_t)(MEM16(ebp + -12)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -12), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003317DD; /* jbe: below or equal (unsigned <=) */

loc_003317CD: ;
    eax = ZX16(MEM16(ebp + -12));
    _fa = (uint32_t)(MEM8(eax + edi + -1)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edi + -1), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003317DD; /* jne: not equal / not zero */

loc_003317D8: ;
    MEM32(ebp + 8) = ebx;
    goto loc_003317E1;

loc_003317DD: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003317E1: ;
    ecx = MEM32(ebp + 0x1C);
    eax = ebp + -12;
    MEM32(ebp + -28) = eax;
    eax = ecx;
    eax = eax >> 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0x8000000;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ecx;
    ebx = ebx & 0x20000000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ecx;
    ebx = ebx & edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    edx = edx & 0x10000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx;
    edx = ecx;
    edx = edx >> 0x19;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 0x2000000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ~edx;
    eax = eax >> 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x4000000 (32-bit) */
    MEM32(ebp + -32) = 0xFFFFFFFDu;
    MEM32(ebp + -24) = 0x40;
    if (TEST_Z(_fa, _fb)) goto loc_00331852; /* je: equal / zero */

loc_00331847: ;
    eax = eax | 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi | 0x10000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00331852: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0033185C; /* jne: not equal / not zero */

loc_00331859: ;
    eax = eax | 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0033185C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ecx & 0x7FA7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -20;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    esi = esi | 0x100080;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x418090); PUSH32(esp, 0x00331884u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033187Eu); } /* indirect call */
    }

loc_00331884: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003318B9; /* jge: greater or equal (signed >=) */

loc_0033188A: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00331890u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00331890: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000035u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC0000035u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033189C; /* jne: not equal / not zero */

loc_00331898: ;
    PUSH32(esp, 0x50);
    goto loc_003318AF;

loc_0033189C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC00000BAu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC00000BAu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003318B4; /* jne: not equal / not zero */

loc_003318A4: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003318AD; /* je: equal / zero */

loc_003318A9: ;
    PUSH32(esp, 3);
    goto loc_003318AF;

loc_003318AD: ;
    PUSH32(esp, 5);

loc_003318AF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003318B4u); RECOMP_ABI_CALL(0x00332D9Eu, sub_00332D9E); /* call 0x00332D9E */

loc_003318B4: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_003318E1;

loc_003318B9: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003318C5; /* jne: not equal / not zero */

loc_003318BF: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003318D1; /* je: equal / zero */

loc_003318C5: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003318D8; /* jne: not equal / not zero */

loc_003318CB: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003318D8; /* jne: not equal / not zero */

loc_003318D1: ;
    PUSH32(esp, 0xB7);
    goto loc_003318D9;

loc_003318D8: ;
    PUSH32(esp, ebx);

loc_003318D9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003318DEu); RECOMP_ABI_CALL(0x00332D9Eu, sub_00332D9E); /* call 0x00332D9E */

loc_003318DE: ;
    eax = MEM32(ebp + -4);

loc_003318E1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_003318E7
 * Original: 0x003318E7 - 0x00331BC9 (738 bytes, 264 insns)
 * Folder: xdk/xapi (between: 0x0033175C and 0x00331C06)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003318E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003318E7: ;
    PUSH32(esp, ebp);
    ebp = esp + -96;
    _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x9C));
    esp = esp - 0x9C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    eax = ebp + -20;
    ebx = 0x10000;
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = 0xFFFFFFFDu;
    MEM32(ebp + 4) = 0x40;
    MEM32(ebp) = eax;
    { uint32_t _icall_target = MEM32(0x4180A8); PUSH32(esp, 0x00331916u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331910u); } /* indirect call */
    }

loc_00331916: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x48) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0033192D; /* jne: not equal / not zero */

loc_0033191F: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x00331926u); RECOMP_ABI_CALL(0x00332D9Eu, sub_00332D9E); /* call 0x00332D9E */

loc_00331926: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00331BC0;

loc_0033192D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x68));
    esi = MEM32(0x41808C);
    eax = ebp + -20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x0033193Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033193Bu); } /* indirect call */
    }

loc_0033193D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x60);
    PUSH32(esp, 1);
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80100000u);
    eax = ebp + 0x50;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x418088); PUSH32(esp, 0x00331958u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331952u); } /* indirect call */
    }

loc_00331958: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x68) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00331978; /* jge: greater or equal (signed >=) */

loc_0033195F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x48));
    { uint32_t _icall_target = MEM32(0x4180A4); PUSH32(esp, 0x00331969u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331963u); } /* indirect call */
    }

loc_00331969: ;
    PUSH32(esp, MEM32(ebp + 0x68));

loc_0033196C: ;
    PUSH32(esp, 0x00331971u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00331971: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00331BBF;

loc_00331978: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x50));
    { uint32_t _icall_target = MEM32(0x4180A0); PUSH32(esp, 0x0033198Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331987u); } /* indirect call */
    }

loc_0033198D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x68) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0033199F; /* jge: greater or equal (signed >=) */

loc_00331994: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x50));
    { uint32_t _icall_target = MEM32(0x418080); PUSH32(esp, 0x0033199Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331997u); } /* indirect call */
    }

loc_0033199D: ;
    goto loc_0033195F;

loc_0033199F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x6C));
    eax = ebp + -20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x003319A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003319A6u); } /* indirect call */
    }

loc_003319A8: ;
    eax = MEM32(ebp + 0x7C);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x64);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(5)) >> 32) & 1);
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x80);
    eax = ebp + 0x30;
    PUSH32(esp, eax);
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40100000);
    eax = ebp + 0x54;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x418090); PUSH32(esp, 0x003319DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003319D5u); } /* indirect call */
    }

loc_003319DB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003319FA; /* jge: greater or equal (signed >=) */

loc_003319E1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x50));
    { uint32_t _icall_target = MEM32(0x418080); PUSH32(esp, 0x003319EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003319E4u); } /* indirect call */
    }

loc_003319EA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x48));
    { uint32_t _icall_target = MEM32(0x4180A4); PUSH32(esp, 0x003319F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003319EEu); } /* indirect call */
    }

loc_003319F4: ;
    PUSH32(esp, esi);
    goto loc_0033196C;

loc_003319FA: ;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x58) = edi;
    MEM32(ebp + 0x5C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00331A31; /* je: equal / zero */

loc_00331A05: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x74));
    PUSH32(esp, MEM32(ebp + 0x54));
    PUSH32(esp, MEM32(ebp + 0x50));
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x34));
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x34));
    PUSH32(esp, MEM32(ebp + 0x30));
    { uint32_t _icall_target = MEM32(ebp + 0x70); PUSH32(esp, 0x00331A25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331A22u); } /* indirect call */
    }

loc_00331A25: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00331AF6; /* jne: not equal / not zero */

loc_00331A2E: ;
    MEM32(ebp + 0x70) = edi;

loc_00331A31: ;
    eax = MEM32(ebp + 0x30);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x14);
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 8);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x54));
    { uint32_t _icall_target = MEM32(0x418094); PUSH32(esp, 0x00331A52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331A4Cu); } /* indirect call */
    }

loc_00331A52: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00331B7B; /* jl: less (signed <) */

loc_00331A5C: ;
    eax = MEM32(ebp + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x34) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00331B2A; /* jg: greater (signed >) */

loc_00331A68: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00331B17; /* jge: greater or equal (signed >=) */

loc_00331A6E: ;
    eax = ebp + 0x58;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x48));
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x50));
    { uint32_t _icall_target = MEM32(0x41809C); PUSH32(esp, 0x00331A86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331A80u); } /* indirect call */
    }

loc_00331A86: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00331B7B; /* jl: less (signed <) */

loc_00331A90: ;
    eax = MEM32(ebp + 0x44);
    ecx = ebp + 0x58;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x48));
    MEM32(ebp + 0x68) = eax;
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x54));
    { uint32_t _icall_target = MEM32(0x418098); PUSH32(esp, 0x00331AAEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331AA8u); } /* indirect call */
    }

loc_00331AAE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00331B7B; /* jl: less (signed <) */

loc_00331AB8: ;
    eax = MEM32(ebp + 0x58);
    _fb = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + 0x68))) >> 32) & 1);
    eax = eax + MEM32(ebp + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(ebp + 0x5C)) + (uint64_t)(edi) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + 0x5C) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebp + 0x5C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0x58) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00331B09; /* je: equal / zero */

loc_00331AC9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x74));
    PUSH32(esp, MEM32(ebp + 0x54));
    PUSH32(esp, MEM32(ebp + 0x50));
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x5C));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x34));
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, MEM32(ebp + 0x5C));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x34));
    PUSH32(esp, MEM32(ebp + 0x30));
    { uint32_t _icall_target = MEM32(ebp + 0x70); PUSH32(esp, 0x00331AECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331AE9u); } /* indirect call */
    }

loc_00331AEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00331B05; /* jne: not equal / not zero */

loc_00331AF1: ;
    MEM32(ebp + 0x70) = edi;
    goto loc_00331B09;

loc_00331AF6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00331A31; /* je: equal / zero */

loc_00331AFE: ;
    esi = 0xC0000240u;
    goto loc_00331B7B;

loc_00331B05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00331B25; /* jne: not equal / not zero */

loc_00331B09: ;
    eax = MEM32(ebp + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x34) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00331A6E; /* jl: less (signed <) */

loc_00331B15: ;
    if (CMP_G(_fas, _fbs)) goto loc_00331B2A; /* jg: greater (signed >) */

loc_00331B17: ;
    eax = MEM32(ebp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x30) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00331A6E; /* jb: below (unsigned <) */

loc_00331B23: ;
    goto loc_00331B2A;

loc_00331B25: ;
    esi = 0xC0000240u;

loc_00331B2A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00331B7B; /* jl: less (signed <) */

loc_00331B2E: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -60) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -56) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -52) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(ebp + -40) = eax;
    eax = MEM32(ebp + 0x20);
    MEM32(ebp + -36) = eax;
    eax = MEM32(ebp + 0x24);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 0x38);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 0x28);
    eax = ebp + -60;
    PUSH32(esp, eax);
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x54));
    { uint32_t _icall_target = MEM32(0x418094); PUSH32(esp, 0x00331B79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331B73u); } /* indirect call */
    }

loc_00331B79: ;
    esi = eax;

loc_00331B7B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x48));
    { uint32_t _icall_target = MEM32(0x4180A4); PUSH32(esp, 0x00331B85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331B7Fu); } /* indirect call */
    }

loc_00331B85: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x50));
    ebx = MEM32(0x418080);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00331B90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331B8Eu); } /* indirect call */
    }

loc_00331B90: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00331BB5; /* jge: greater or equal (signed >=) */

loc_00331B94: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, 1);
    eax = ebp + 0x4F;
    PUSH32(esp, eax);
    eax = ebp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x54));
    MEM8(ebp + 0x4F) = 1;
    { uint32_t _icall_target = MEM32(0x418094); PUSH32(esp, 0x00331BADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331BA7u); } /* indirect call */
    }

loc_00331BAD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00331BB3u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00331BB3: ;
    goto loc_00331BB8;

loc_00331BB5: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00331BB8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x54));
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00331BBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331BBBu); } /* indirect call */
    }

loc_00331BBD: ;
    eax = edi;

loc_00331BBF: ;
    POP32(esp, esi);

loc_00331BC0: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x60)) >> 32) & 1);
    ebp = ebp + 0x60;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00331BC9
 * Original: 0x00331BC9 - 0x00331BE8 (31 bytes, 12 insns)
 * Folder: xdk/xapi (between: 0x0033175C and 0x00331C06)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331BC9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331BC9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), eax (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x00331BE5u); RECOMP_ABI_CALL(0x003318E7u, sub_003318E7); /* call 0x003318E7 */

loc_00331BE5: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00331BE8
 * Original: 0x00331BE8 - 0x00331C06 (30 bytes, 11 insns)
 * Folder: xdk/xapi (between: 0x0033175C and 0x00331C06)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00331BE8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331BE8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x418080); PUSH32(esp, 0x00331BF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331BECu); } /* indirect call */
    }

loc_00331BF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00331BFB; /* jl: less (signed <) */

loc_00331BF6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00331C03;

loc_00331BFB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00331C01u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00331C01: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00331C03: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00331C06
 * Original: 0x00331C06 - 0x00331C3E (56 bytes, 21 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x0027F936, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331C06(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331C06: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0x42C330;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00331C15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331C0Fu); } /* indirect call */
    }

loc_00331C15: ;
    esi = MEM32(0x42C34C);
    edi = 0x42C34C;
    goto loc_00331C2D;

loc_00331C22: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = esi;
    esi = MEM32(esi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00331C2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331C2Au); } /* indirect call */
    }

loc_00331C2D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00331C22; /* jne: not equal / not zero */

loc_00331C31: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00331C38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331C32u); } /* indirect call */
    }

loc_00331C38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00331C3E
 * Original: 0x00331C3E - 0x00331C90 (82 bytes, 31 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x0027F96E, between)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00331C3E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331C3E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ebp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x4180E0));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x4180DC); PUSH32(esp, 0x00331C54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331C4Eu); } /* indirect call */
    }

loc_00331C54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00331C84; /* jl: less (signed <) */

loc_00331C58: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00331C64; /* jne: not equal / not zero */

loc_00331C60: ;
    PUSH32(esp, 0x10);
    goto loc_00331C6B;

loc_00331C64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFF1u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00331C6C; /* jne: not equal / not zero */

loc_00331C69: ;
    PUSH32(esp, 0xFFFFFFF0u);

loc_00331C6B: ;
    POP32(esp, eax);

loc_00331C6C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x4180D8); PUSH32(esp, 0x00331C76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331C70u); } /* indirect call */
    }

loc_00331C76: ;
    ecx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x4180D4); PUSH32(esp, 0x00331C7Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331C79u); } /* indirect call */
    }

loc_00331C7F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00331C8C;

loc_00331C84: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00331C8Au); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00331C8A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00331C8C: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00331C90
 * Original: 0x00331C90 - 0x00331CB6 (38 bytes, 15 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x0027F9C0, between)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00331C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331C90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ebp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x4180E4); PUSH32(esp, 0x00331CA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331C9Au); } /* indirect call */
    }

loc_00331CA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00331CAF; /* jge: greater or equal (signed >=) */

loc_00331CA4: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00331CAAu); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00331CAA: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00331CB2;

loc_00331CAF: ;
    eax = MEM32(ebp + 8);

loc_00331CB2: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00331CB6
 * Original: 0x00331CB6 - 0x00331D0C (86 bytes, 34 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x0027F9E6, between)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00331CB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331CB6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    MEM32(ebp + -72) = MEM32(ebp + -72) & 0;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -80) = eax;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + -76) = eax;
    MEM32(ebp + -68) = 0x331CB6;
    if (CMP_EQ(_fa, _fb)) goto loc_00331CF9; /* je: equal / zero */

loc_00331CDE: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00331CE9; /* jbe: below or equal (unsigned <=) */

loc_00331CE6: ;
    PUSH32(esp, 0xF);
    POP32(esp, ecx);

loc_00331CE9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -64) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00331CFD; /* je: equal / zero */

loc_00331CF0: ;
    PUSH32(esp, edi);
    edi = ebp + -60;
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
    goto loc_00331CFD;

loc_00331CF9: ;
    MEM32(ebp + -64) = MEM32(ebp + -64) & 0;
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00331CFD: ;
    eax = ebp + -80;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x4180E8); PUSH32(esp, 0x00331D07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331D01u); } /* indirect call */
    }

loc_00331D07: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00331D0C
 * Original: 0x00331D0C - 0x00331D1E (18 bytes, 5 insns)
 * Folder: xdk/xapi (between: 0x00331CB6 and 0x00331D7C)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331D0C(void)
{

loc_00331D0C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00331D13u); RECOMP_ABI_CALL(0x00331C06u, sub_00331C06); /* call 0x00331C06 */

loc_00331D13: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x4180EC); PUSH32(esp, 0x00331D1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331D17u); } /* indirect call */
    }

loc_00331D1D: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00331D1E
 * Original: 0x00331D1E - 0x00331D6A (76 bytes, 26 insns)
 * Folder: xdk/xapi (between: 0x00331CB6 and 0x00331D7C)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00331D1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331D1E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ebp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x4180E0));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x4180DC); PUSH32(esp, 0x00331D34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331D2Eu); } /* indirect call */
    }

loc_00331D34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00331D5E; /* jl: less (signed <) */

loc_00331D38: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00331D49; /* je: equal / zero */

loc_00331D41: ;
    eax = MEM32(ecx + 0x120);
    goto loc_00331D4E;

loc_00331D49: ;
    eax = 0x103;

loc_00331D4E: ;
    edx = MEM32(ebp + 0xC);
    MEM32(edx) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x4180D4); PUSH32(esp, 0x00331D59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331D53u); } /* indirect call */
    }

loc_00331D59: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00331D66;

loc_00331D5E: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00331D64u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00331D64: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00331D66: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00331D6A
 * Original: 0x00331D6A - 0x00331D7C (18 bytes, 4 insns)
 * Folder: xdk/xapi (between: 0x00331CB6 and 0x00331D7C)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331D6A(void)
{

loc_00331D6A: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(0x76C1A4);
    MEM32(0x76C1A4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00331D7C
 * Original: 0x00331D7C - 0x00331DC5 (73 bytes, 22 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x0027FA60, between)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331D7C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331D7C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = 0x42C330;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180D0); PUSH32(esp, 0x00331D89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331D83u); } /* indirect call */
    }

loc_00331D89: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00331DAC; /* je: equal / zero */

loc_00331D90: ;
    ecx = MEM32(0x42C350);
    eax = MEM32(esp + 8);
    MEM32(eax) = 0x42C34C;
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    MEM32(0x42C350) = eax;
    goto loc_00331DBA;

loc_00331DAC: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;

loc_00331DBA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180CC); PUSH32(esp, 0x00331DC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331DBBu); } /* indirect call */
    }

loc_00331DC1: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00331DC5
 * Original: 0x00331DC5 - 0x00331E01 (60 bytes, 22 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x0027FAA9, between)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00331DC5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331DC5: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00331DDE; /* je: equal / zero */

loc_00331DD5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00331DDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331DD9u); } /* indirect call */
    }

loc_00331DDC: ;
    goto loc_00331DE0;

loc_00331DDE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00331DE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00331DFC; /* jne: not equal / not zero */

loc_00331DE4: ;
    eax = MEM32(0x76C1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00331DFC; /* je: equal / zero */

loc_00331DED: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00331DF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331DF1u); } /* indirect call */
    }

loc_00331DF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00331DFC; /* jne: not equal / not zero */

loc_00331DF8: ;
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00331DFE;

loc_00331DFC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00331DFE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00331E01
 * Original: 0x00331E01 - 0x00331E99 (152 bytes, 49 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x0027FAE5, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331E01(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00331E01: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x418340);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00331E0Du); RECOMP_ABI_CALL(0x00347864u, sub_00347864); /* call 0x00347864 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00331E0D: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(XBOX_FS_BASE + 0x28);
    MEM32(ebp + -32) = eax;
    edx = MEM32(eax + 0x28);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -36) = edx;
    MEM32(edx + -4) = edx;
    ebx = MEM32(0x4185D8);
    esi = MEM32(0x4185D4);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -40) = ebx;
    ecx = ebx;
    edi = edx;
    eax = ecx;
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
    ecx = MEM32(0x4185E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00331E66; /* je: equal / zero */

loc_00331E53: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + edx;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_00331E66: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00331E6Du); RECOMP_ABI_CALL(0x00331C06u, sub_00331C06); /* call 0x00331C06 */

loc_00331E6D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(ebp + 8); PUSH32(esp, 0x00331E73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331E70u); } /* indirect call */
    }

loc_00331E73: ;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00331E7Du); RECOMP_ABI_CALL(0x00331C06u, sub_00331C06); /* call 0x00331C06 */

loc_00331E7D: ;
    goto loc_00331E8B;

    PUSH32(esp, MEM32(ebp + -20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00331E87u); RECOMP_ABI_CALL(0x00331DC5u, sub_00331DC5); /* call 0x00331DC5 */

loc_00331E87: ;
    esp += 4; return; /* ret */

loc_00331E8B: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -28));
    { uint32_t _icall_target = MEM32(0x4180EC); PUSH32(esp, 0x00331E98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331E92u); } /* indirect call */
    }

loc_00331E98: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00331E7F
 * Original: 0x00331E7F - 0x00331E99 (26 bytes, 8 insns)
 * Folder: xdk/xapi (between: 0x00331E01 and 0x00331E99)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331E7F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00331E7F: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x00331E87u); RECOMP_ABI_CALL(0x00331DC5u, sub_00331DC5); /* call 0x00331DC5 */

loc_00331E87: ;
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00331E88
 * Original: 0x00331E88 - 0x00331E99 (17 bytes, 5 insns)
 * Folder: xdk/xapi (between: 0x00331E01 and 0x00331E99)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331E88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00331E88: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -28));
    { uint32_t _icall_target = MEM32(0x4180EC); PUSH32(esp, 0x00331E98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331E92u); } /* indirect call */
    }

loc_00331E98: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00331E99
 * Original: 0x00331E99 - 0x00331F07 (110 bytes, 37 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x0027FB7D, between)
 * Category: game_vtable
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00331E99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331E99: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00331EA8; /* jne: not equal / not zero */

loc_00331EA3: ;
    eax = MEM32(0x10130);

loc_00331EA8: ;
    ecx = MEM32(ebp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x331E01);
    PUSH32(esp, 0);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFFFFFF01u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(0x76C1A8));
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x4180F0); PUSH32(esp, 0x00331ED8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331ED2u); } /* indirect call */
    }

loc_00331ED8: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00331F00; /* jge: greater or equal (signed >=) */

loc_00331EDE: ;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00331F00; /* jae: above or equal (unsigned >=) */

loc_00331EEA: ;
    eax = MEM32(XBOX_FS_BASE + 0x28);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00331F00; /* je: equal / zero */

loc_00331EF6: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00331EFCu); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00331EFC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00331F03;

loc_00331F00: ;
    eax = MEM32(ebp + 0xC);

loc_00331F03: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00331F07
 * Original: 0x00331F07 - 0x00331F14 (13 bytes, 3 insns)
 * Folder: xdk/xapi (between: 0x00331E99 and 0x00331F14)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00331F07(void)
{

loc_00331F07: ;
    eax = MEM32(XBOX_FS_BASE + 0x28);
    eax = MEM32(eax + 0x12C);
    esp += 4; return; /* ret */

}

/**
 * sub_00331F14
 * Original: 0x00331F14 - 0x00331FBA (166 bytes, 61 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x0027F7B7, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00331F14(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331F14: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x41808C); PUSH32(esp, 0x00331F27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331F21u); } /* indirect call */
    }

loc_00331F27: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4020);
    eax = ebp + -8;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, 7);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100100);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = 0xFFFFFFFDu;
    MEM32(ebp + -20) = 0x40;
    { uint32_t _icall_target = MEM32(0x418088); PUSH32(esp, 0x00331F59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331F53u); } /* indirect call */
    }

loc_00331F59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00331F67; /* jge: greater or equal (signed >=) */

loc_00331F5D: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00331F63u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00331F63: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00331FB6;

loc_00331F67: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -68;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0xC);
    eax = eax & 0x3127;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(ebp + -36) = eax;
    PUSH32(esp, 0x28);
    eax = ebp + -68;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x418094); PUSH32(esp, 0x00331F98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331F92u); } /* indirect call */
    }

loc_00331F98: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    { uint32_t _icall_target = MEM32(0x418080); PUSH32(esp, 0x00331FA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331F9Du); } /* indirect call */
    }

loc_00331FA3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00331FAC; /* jl: less (signed <) */

loc_00331FA7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00331FB4;

loc_00331FAC: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00331FB2u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00331FB2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00331FB4: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00331FB6: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00331FBA
 * Original: 0x00331FBA - 0x00332005 (75 bytes, 25 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x0027F85D, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00331FBA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00331FBA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x41808C); PUSH32(esp, 0x00331FCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331FC7u); } /* indirect call */
    }

loc_00331FCD: ;
    eax = ebp + -8;
    MEM32(ebp + -16) = eax;
    eax = ebp + -76;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0xFFFFFFFDu;
    MEM32(ebp + -12) = 0x40;
    { uint32_t _icall_target = MEM32(0x4180F4); PUSH32(esp, 0x00331FEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00331FE9u); } /* indirect call */
    }

loc_00331FEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00331FF8; /* jl: less (signed <) */

loc_00331FF3: ;
    eax = MEM32(ebp + -28);
    goto loc_00332001;

loc_00331FF8: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00331FFEu); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00331FFE: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00332001: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00332005
 * Original: 0x00332005 - 0x00332093 (142 bytes, 51 insns)
 * Folder: xdk/xapi (between: 0x00331FBA and 0x003320D5)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00332005(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00332005: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -12;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x41808C); PUSH32(esp, 0x00332018u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332012u); } /* indirect call */
    }

loc_00332018: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4040);
    eax = ebp + -12;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 7);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10000);
    eax = ebp + -4;
    PUSH32(esp, eax);
    MEM32(ebp + -32) = 0xFFFFFFFDu;
    MEM32(ebp + -24) = 0x40;
    { uint32_t _icall_target = MEM32(0x418088); PUSH32(esp, 0x0033204Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332044u); } /* indirect call */
    }

loc_0033204A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00332058; /* jge: greater or equal (signed >=) */

loc_0033204E: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00332054u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00332054: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033208F;

loc_00332058: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0xD);
    PUSH32(esp, 1);
    eax = ebp + 0xB;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    MEM8(ebp + 0xB) = 1;
    { uint32_t _icall_target = MEM32(0x418094); PUSH32(esp, 0x00332072u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033206Cu); } /* indirect call */
    }

loc_00332072: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    esi = eax;
    { uint32_t _icall_target = MEM32(0x418080); PUSH32(esp, 0x0033207Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332077u); } /* indirect call */
    }

loc_0033207D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00332086; /* jl: less (signed <) */

loc_00332081: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0033208E;

loc_00332086: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033208Cu); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_0033208C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033208E: ;
    POP32(esp, esi);

loc_0033208F: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00332093
 * Original: 0x00332093 - 0x003320D5 (66 bytes, 26 insns)
 * Folder: xdk/xapi (between: 0x00331FBA and 0x003320D5)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332093(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00332093: ;
    eax = 0x42C320;
    PUSH32(esp, esi);
    esi = eax;
    ecx = eax;
    eax = 0x42C328;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003320B4; /* jae: above or equal (unsigned >=) */

loc_003320A9: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003320C6; /* jne: not equal / not zero */

loc_003320AD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003320A9; /* jb: below (unsigned <) */

loc_003320B4: ;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x003320C3u); RECOMP_ABI_CALL(0x00335F0Cu, sub_00335F0C); /* call 0x00335F0C */

loc_003320C3: ;
    esp += 12; return; /* ret 8 */

loc_003320C6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    { uint32_t _icall_target = MEM32(ecx); PUSH32(esp, 0x003320D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003320D1u); } /* indirect call */
    }

loc_003320D3: ;
    goto loc_003320C3;

}

/**
 * sub_003320D5
 * Original: 0x003320D5 - 0x003321B6 (225 bytes, 83 insns)
 * Folder: xdk/xapi (string: \Device\Cdrom0)
 * Category: game_io
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003320D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003320D5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0x418100);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = 0x1000;
    if (CMP_NE(_fa, _fb)) goto loc_003320F7; /* jne: not equal / not zero */

loc_003320E8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4180FC); PUSH32(esp, 0x003320EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003320E9u); } /* indirect call */
    }

loc_003320EF: ;
    ecx = MEM32(0x418100);
    MEM32(ecx) = eax;

loc_003320F7: ;
    eax = MEM32(0x418100);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033210C; /* jne: not equal / not zero */

loc_00332102: ;
    eax = 0xC0000017u;
    goto loc_003321B1;

loc_0033210C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x4180F8); PUSH32(esp, 0x00332116u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332110u); } /* indirect call */
    }

loc_00332116: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00332122; /* jne: not equal / not zero */

loc_0033211D: ;
    edx = 0x418354;

loc_00332122: ;
    eax = MEM32(0x418100);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x400;
    ebx = edi + 8;
    ecx = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(0x418100);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    edi = MEM32(ebp + 0x18);
    MEM32(ecx) = eax;
    ecx = MEM32(0x418100);
    ecx = MEM32(ecx);
    MEM32(ecx + 4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0033216B; /* je: equal / zero */

loc_00332158: ;
    eax = MEM32(0x418100);
    edi = MEM32(eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ebp + 0x1C);
    ecx = 0x300;
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

loc_0033216B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003321AD; /* je: equal / zero */

loc_00332172: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033219A; /* je: equal / zero */

loc_00332176: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033219A; /* je: equal / zero */

loc_0033217B: ;
    PUSH32(esp, 0x207);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00332187u); RECOMP_ABI_CALL(0x0033165Fu, sub_0033165F); /* call 0x0033165F */

loc_00332187: ;
    eax = ebx;
    esi = eax + 1;

loc_0033218C: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033218C; /* jne: not equal / not zero */

loc_00332193: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(eax + ebx) = 0x3B;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033219A: ;
    ecx = 0x208;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003321ADu); RECOMP_ABI_CALL(0x0033165Fu, sub_0033165F); /* call 0x0033165F */

loc_003321AD: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

loc_003321B1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003321B6
 * Original: 0x003321B6 - 0x0033221A (100 bytes, 34 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x0027F6DA, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003321B6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003321B6: ;
    eax = MEM32(0x418100);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00332212; /* je: equal / zero */

loc_003321C1: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003321DB; /* je: equal / zero */

loc_003321C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003321DB; /* je: equal / zero */

loc_003321CD: ;
    edx = MEM32(0x10118);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00332212; /* jne: not equal / not zero */

loc_003321DB: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = MEM32(0x418100);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x400;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x300;
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
    eax = MEM32(0x418100);
    ecx = MEM32(eax);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x418104); PUSH32(esp, 0x0033220Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332206u); } /* indirect call */
    }

loc_0033220C: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    goto loc_00332217;

loc_00332212: ;
    eax = 0x490;

loc_00332217: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033221A
 * Original: 0x0033221A - 0x00332261 (71 bytes, 24 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x0027F73E, between)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033221A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033221A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00332233u); RECOMP_ABI_CALL(0x003320D5u, sub_003320D5); /* call 0x003320D5 */

loc_00332233: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00332256; /* jl: less (signed <) */

loc_00332237: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033224E; /* je: equal / zero */

loc_00332247: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0033224Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033224Bu); } /* indirect call */
    }

loc_0033224E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(0x41810C); PUSH32(esp, 0x00332256u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332250u); } /* indirect call */
    }

loc_00332256: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x418108); PUSH32(esp, 0x0033225Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332257u); } /* indirect call */
    }

loc_0033225D: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00332261
 * Original: 0x00332261 - 0x0033229F (62 bytes, 29 insns)
 * Folder: xdk/xapi (between: 0x0033221A and 0x003322BE)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332261(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00332261: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, edi);
    esi = eax + 1;

loc_0033226C: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033226C; /* jne: not equal / not zero */

loc_00332273: ;
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0033227D: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033227D; /* jne: not equal / not zero */

loc_00332287: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x4184DC;
    POP32(esp, edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);

loc_00332292: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00332292; /* jne: not equal / not zero */

loc_0033229C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033229F
 * Original: 0x0033229F - 0x003322BE (31 bytes, 10 insns)
 * Folder: xdk/xapi (between: 0x0033221A and 0x003322BE)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033229F(void)
{

loc_0033229F: ;
    PUSH32(esp, MEM32(esp + 8));
    eax = esp + 8;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(0x418114));
    PUSH32(esp, 0x003322BBu); RECOMP_ABI_CALL(0x0033A2E0u, sub_0033A2E0); /* call 0x0033A2E0 */

loc_003322BB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003322BE
 * Original: 0x003322BE - 0x003323A3 (229 bytes, 94 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00281660, between)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003322BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003322BE: ;
    PUSH32(esp, ebp);
    ebp = esp + -104;
    _fb = (uint32_t)(0x290) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x290;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x78);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003322D9; /* jne: not equal / not zero */

loc_003322D6: ;
    eax = MEM32(esi + 0x24);

loc_003322D9: ;
    ecx = ebp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003322E3u); RECOMP_ABI_CALL(0x0033229Fu, sub_0033229F); /* call 0x0033229F */

loc_003322E3: ;
    eax = MEM32(esi + 0x18);
    edi = 0x88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    ebx = edi;
    if (CMP_AE(_fa, _fb)) goto loc_003322F3; /* jae: above or equal (unsigned >=) */

loc_003322F1: ;
    ebx = eax;

loc_003322F3: ;
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    eax = ebp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00332302u); RECOMP_ABI_CALL(0x00336B1Au, sub_00336B1A); /* call 0x00336B1A */

loc_00332302: ;
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFFFFECu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00332313u); RECOMP_ABI_CALL(0x00336B7Cu, sub_00336B7C); /* call 0x00336B7C */

loc_00332313: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x70), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00332373; /* je: equal / zero */

loc_0033231A: ;
    esi = MEM32(esi + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00332373; /* jbe: below or equal (unsigned <=) */

loc_00332321: ;
    edi = esi + -136;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00332373; /* je: equal / zero */

loc_0033232B: ;
    ebx = 0x200;
    goto loc_00332334;

loc_00332332: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00332334: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    esi = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_0033233C; /* jae: above or equal (unsigned >=) */

loc_0033233A: ;
    esi = edi;

loc_0033233C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebp + -552;
    PUSH32(esp, ecx);
    ecx = ebp + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x70));
    { uint32_t _icall_target = MEM32(0x41809C); PUSH32(esp, 0x00332355u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033234Fu); } /* indirect call */
    }

loc_00332355: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00332392; /* jl: less (signed <) */

loc_00332359: ;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x64), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00332395; /* jne: not equal / not zero */

loc_0033235E: ;
    PUSH32(esp, esi);
    eax = ebp + -552;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033236Fu); RECOMP_ABI_CALL(0x00336B7Cu, sub_00336B7C); /* call 0x00336B7C */

loc_0033236F: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00332332; /* jne: not equal / not zero */

loc_00332373: ;
    PUSH32(esp, MEM32(ebp + 0x7C));
    eax = ebp + 0x4C;
    PUSH32(esp, 0x14);
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00332385u); RECOMP_ABI_CALL(0x00336B81u, sub_00336B81); /* call 0x00336B81 */

loc_00332385: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00332388: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x68;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

loc_00332392: ;
    PUSH32(esp, eax);
    goto loc_0033239A;

loc_00332395: ;
    PUSH32(esp, 0xC0000011u);

loc_0033239A: ;
    PUSH32(esp, 0x0033239Fu); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_0033239F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00332388;

}

/**
 * sub_003323A3
 * Original: 0x003323A3 - 0x00332484 (225 bytes, 98 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00281745, between)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003323A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003323A3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(0x41809C);
    eax = ebp + -16;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -12) = ebx;
    { uint32_t _icall_target = edi; PUSH32(esp, 0x003323D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003323CEu); } /* indirect call */
    }

loc_003323D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00332411; /* jl: less (signed <) */

loc_003323D4: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033240C; /* jne: not equal / not zero */

loc_003323DA: ;
    esi = MEM32(esi + 0x18);
    eax = 0x88;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003323E8; /* jbe: below or equal (unsigned <=) */

loc_003323E6: ;
    esi = eax;

loc_003323E8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = esi + -28;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x14);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = edi; PUSH32(esp, 0x00332400u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003323FEu); } /* indirect call */
    }

loc_00332400: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00332411; /* jl: less (signed <) */

loc_00332404: ;
    eax = esi + -28;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033241B; /* je: equal / zero */

loc_0033240C: ;
    eax = 0xC0000010u;

loc_00332411: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00332417u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00332417: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033247D;

loc_0033241B: ;
    edx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46534358) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x14), 0x46534358 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00332430; /* je: equal / zero */

loc_00332427: ;
    PUSH32(esp, 0xD);

loc_00332429: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033242Eu); RECOMP_ABI_CALL(0x00332D9Eu, sub_00332D9E); /* call 0x00332D9E */

loc_0033242E: ;
    goto loc_00332417;

loc_00332430: ;
    ecx = 0x88;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0033244E; /* jae: above or equal (unsigned >=) */

loc_00332439: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esi + edx;
    esi = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_0033244E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033247A; /* je: equal / zero */

loc_00332453: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00332463u); RECOMP_ABI_CALL(0x003322BEu, sub_003322BE); /* call 0x003322BE */

loc_00332463: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00332417; /* je: equal / zero */

loc_00332467: ;
    edi = MEM32(ebp + 0x14);
    PUSH32(esp, 5);
    POP32(esp, ecx);
    esi = ebp + -36;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_0033247A; /* je: equal / zero */

loc_00332476: ;
    PUSH32(esp, 5);
    goto loc_00332429;

loc_0033247A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033247D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00332484
 * Original: 0x00332484 - 0x00332545 (193 bytes, 76 insns)
 * Folder: xdk/xapi (between: 0x003323A3 and 0x003328CD)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00332484(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00332484: ;
    PUSH32(esp, ebp);
    ebp = esp + -108;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x7C);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x78);
    _fa = (uint32_t)(MEM8(esi + 0x23)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x23), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00332527; /* je: equal / zero */

loc_003324A4: ;
    ecx = MEM32(esi + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00332533; /* je: equal / zero */

loc_003324AF: ;
    _fa = (uint32_t)(MEM32(esi + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x70), 0x70 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00332533; /* jne: not equal / not zero */

loc_003324B5: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + 0x58;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = ebp + 0x58;
    PUSH32(esp, eax);
    eax = ebp + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0x70);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x74));
    MEM32(ebp + 0x60) = ecx;
    PUSH32(esp, 0x003324D6u); RECOMP_ABI_CALL(0x003328CDu, sub_003328CD); /* call 0x003328CD */

loc_003324D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00332533; /* je: equal / zero */

loc_003324DB: ;
    _fa = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x78), 0x70 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00332533; /* jne: not equal / not zero */

loc_003324E1: ;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx), 0x70 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00332533; /* jne: not equal / not zero */

loc_003324E7: ;
    _fa = (uint32_t)(MEM16(ebx + 2)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 2), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00332533; /* jne: not equal / not zero */

loc_003324EE: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003324F7u); RECOMP_ABI_CALL(0x0033A2F2u, sub_0033A2F2); /* call 0x0033A2F2 */

loc_003324F7: ;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033250Bu); RECOMP_ABI_CALL(0x0033A2ECu, sub_0033A2EC); /* call 0x0033A2EC */

loc_0033250B: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, ebx);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00332517u); RECOMP_ABI_CALL(0x0033A2ECu, sub_0033A2EC); /* call 0x0033A2EC */

loc_00332517: ;
    eax = MEM32(ebp + 0x7C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00332527u); RECOMP_ABI_CALL(0x0033A2E6u, sub_0033A2E6); /* call 0x0033A2E6 */

loc_00332527: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033252A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x6C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_00332533: ;
    eax = MEM32(ebp + 0x7C);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00332541u); RECOMP_ABI_CALL(0x00332D9Eu, sub_00332D9E); /* call 0x00332D9E */

loc_00332541: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033252A;

}

/**
 * sub_00332545
 * Original: 0x00332545 - 0x003326AD (360 bytes, 132 insns)
 * Folder: xdk/xapi (between: 0x003323A3 and 0x003328CD)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00332545(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00332545: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, MEM32(ebp + 0x7C));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0033256Bu); RECOMP_ABI_CALL(0x0033175Cu, sub_0033175C); /* call 0x0033175C */

loc_0033256B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003326A1; /* je: equal / zero */

loc_00332576: ;
    eax = MEM32(ebp + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00332585; /* jne: not equal / not zero */

loc_0033257D: ;
    eax = MEM32(0x10118);
    eax = MEM32(eax + 8);

loc_00332585: ;
    ecx = ebp + -64;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00332592u); RECOMP_ABI_CALL(0x003323A3u, sub_003323A3); /* call 0x003323A3 */

loc_00332592: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033268C; /* je: equal / zero */

loc_0033259A: ;
    _fa = (uint32_t)(MEM8(ebp + -32)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -32), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00332685; /* je: equal / zero */

loc_003325A4: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00332685; /* je: equal / zero */

loc_003325AF: ;
    PUSH32(esp, 0x24830000);
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x98;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003325BFu); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003325BF: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003325CC; /* jne: not equal / not zero */

loc_003325C5: ;
    PUSH32(esp, 8);
    goto loc_00332687;

loc_003325CC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + 0x28;
    MEM32(ebx + 0x10) = edi;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    edi = ebx + 0x14;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebx + 0x10);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xC) = eax;
    PUSH32(esp, ebx);
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003325EDu); RECOMP_ABI_CALL(0x00332484u, sub_00332484); /* call 0x00332484 */

loc_003325ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033268C; /* je: equal / zero */

loc_003325F5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + 0x5C;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + 0x64) = eax;
    eax = ebp + 0x5C;
    PUSH32(esp, eax);
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebx + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0x00332619u); RECOMP_ABI_CALL(0x003328CDu, sub_003328CD); /* call 0x003328CD */

loc_00332619: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033268C; /* je: equal / zero */

loc_0033261D: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x7C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033268C; /* jne: not equal / not zero */

loc_00332625: ;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 4) = ecx;
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(ebx + 8) = ecx;
    PUSH32(esp, 0x0033263Eu); RECOMP_ABI_CALL(0x00331BE8u, sub_00331BE8); /* call 0x00331BE8 */

loc_0033263E: ;
    eax = ebp + -180;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033264Au); RECOMP_ABI_CALL(0x0033A2F2u, sub_0033A2F2); /* call 0x0033A2F2 */

loc_0033264A: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -180;
    PUSH32(esp, MEM32(ebx + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033265Cu); RECOMP_ABI_CALL(0x0033A2ECu, sub_0033A2EC); /* call 0x0033A2EC */

loc_0033265C: ;
    eax = ebp + 0x48;
    PUSH32(esp, eax);
    eax = ebp + -180;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033266Cu); RECOMP_ABI_CALL(0x0033A2E6u, sub_0033A2E6); /* call 0x0033A2E6 */

loc_0033266C: ;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    edi = ebp + 0x18;
    esi = ebp + 0x48;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_00332692; /* jne: not equal / not zero */

loc_0033267B: ;
    MEM32(ebx) = 0x66736378;
    eax = ebx;
    goto loc_003326A3;

loc_00332685: ;
    PUSH32(esp, 2);

loc_00332687: ;
    PUSH32(esp, 0x0033268Cu); RECOMP_ABI_CALL(0x00332D9Eu, sub_00332D9E); /* call 0x00332D9E */

loc_0033268C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00332692u); RECOMP_ABI_CALL(0x00331BE8u, sub_00331BE8); /* call 0x00331BE8 */

loc_00332692: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003326A1; /* je: equal / zero */

loc_00332696: ;
    PUSH32(esp, 0x24830000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003326A1u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003326A1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003326A3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x70;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003326AD
 * Original: 0x003326AD - 0x003326D8 (43 bytes, 13 insns)
 * Folder: xdk/xapi (between: 0x003323A3 and 0x003328CD)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003326AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003326AD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003326C5u); RECOMP_ABI_CALL(0x00332261u, sub_00332261); /* call 0x00332261 */

loc_003326C5: ;
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003326D4u); RECOMP_ABI_CALL(0x00332545u, sub_00332545); /* call 0x00332545 */

loc_003326D4: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003326D8
 * Original: 0x003326D8 - 0x0033274C (116 bytes, 44 insns)
 * Folder: xdk/xapi (between: 0x003323A3 and 0x003328CD)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003326D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003326D8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(eax + 4);
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_00332719; /* jae: above or equal (unsigned >=) */

loc_003326EC: ;
    ecx = MEM32(eax);
    ecx = ecx + ecx * 4;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ecx + edx * 8 + 0x10;
    esi = MEM32(esi + eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + eax + 0xC;
    esi = MEM32(ebp + 0x10);
    MEM32(esi) = ecx;
    ecx = MEM32(eax);
    ecx = ecx + ecx * 4;
    eax = eax + edx * 8;
    eax = MEM32(eax + ecx * 4 + 0xC);
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx) = eax;
    goto loc_00332736;

loc_00332719: ;
    esi = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0033273B; /* jae: above or equal (unsigned >=) */

loc_00332721: ;
    ecx = edx + edx * 4;
    eax = eax + ecx * 4 + 0xC;
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = 0x14;

loc_00332736: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00332747;

loc_0033273B: ;
    PUSH32(esp, 0x490);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00332745u); RECOMP_ABI_CALL(0x00332D9Eu, sub_00332D9E); /* call 0x00332D9E */

loc_00332745: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00332747: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0033274C
 * Original: 0x0033274C - 0x00332847 (251 bytes, 99 insns)
 * Folder: xdk/xapi (between: 0x003323A3 and 0x003328CD)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033274C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033274C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -12) = eax;
    edx = eax + 1;

loc_0033275B: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033275B; /* jne: not equal / not zero */

loc_00332762: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(ebp + -16) = LO16(eax);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = esi;
    if ((_fa == 0)) goto loc_003327C4; /* je: equal / zero */

loc_00332779: ;
    SET_LO16(eax, MEM16(esi + 6));
    MEM16(ebp + -8) = LO16(eax);
    eax = ZX16(MEM16(esi + 4));
    eax = eax + eax * 4;
    eax = esi + eax * 2 + 0xC;
    MEM32(ebp + -4) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x41812C); PUSH32(esp, 0x0033279Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332799u); } /* indirect call */
    }

loc_0033279F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003327C0; /* je: equal / zero */

loc_003327A5: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003327AC; /* jge: greater or equal (signed >=) */

loc_003327A7: ;
    SET_LO16(esi, MEM16(esi));
    goto loc_003327B0;

loc_003327AC: ;
    SET_LO16(esi, MEM16(esi + 2));

loc_003327B0: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(ecx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003327C4; /* je: equal / zero */

loc_003327B5: ;
    esi = ZX16(LO16(esi));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00332779; /* jne: not equal / not zero */

loc_003327BE: ;
    goto loc_003327C4;

loc_003327C0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003327CF; /* jne: not equal / not zero */

loc_003327C4: ;
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003327CBu); RECOMP_ABI_CALL(0x00332D9Eu, sub_00332D9E); /* call 0x00332D9E */

loc_003327CB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00332841;

loc_003327CF: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003327DF; /* jne: not equal / not zero */

loc_003327D7: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebx) = eax;

loc_003327DF: ;
    edi = ZX16(MEM16(esi + 4));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00332817; /* jbe: below or equal (unsigned <=) */

loc_003327E7: ;
    goto loc_003327EC;

loc_003327E9: ;
    ebx = MEM32(ebp + 0x14);

loc_003327EC: ;
    eax = edi + ecx;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(esi + eax * 8 + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003327FF; /* jae: above or equal (unsigned >=) */

loc_003327FA: ;
    ecx = eax + 1;
    goto loc_0033280F;

loc_003327FF: ;
    if (CMP_A(_fa, _fb)) goto loc_0033280D; /* ja: above (unsigned >) */

loc_00332801: ;
    edx = MEM32(esi + eax * 8 + 0x10);
    ebx = MEM32(ebx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003327FA; /* jb: below (unsigned <) */

loc_0033280B: ;
    if (CMP_BE(_fa, _fb)) goto loc_00332813; /* jbe: below or equal (unsigned <=) */

loc_0033280D: ;
    edi = eax;

loc_0033280F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003327E9; /* jb: below (unsigned <) */

loc_00332813: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00332825; /* jb: below (unsigned <) */

loc_00332817: ;
    PUSH32(esp, 0x490);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00332821u); RECOMP_ABI_CALL(0x00332D9Eu, sub_00332D9E); /* call 0x00332D9E */

loc_00332821: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00332840;

loc_00332825: ;
    ecx = ZX16(MEM16(esi + 4));
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = eax + ecx * 4;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = ZX16(MEM16(esi + eax * 2 + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00332840u); RECOMP_ABI_CALL(0x003326D8u, sub_003326D8); /* call 0x003326D8 */

loc_00332840: ;
    POP32(esp, ebx);

loc_00332841: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00332847
 * Original: 0x00332847 - 0x00332866 (31 bytes, 12 insns)
 * Folder: xdk/xapi (between: 0x003323A3 and 0x003328CD)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00332847(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00332847: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = ebp + 0x14;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00332862u); RECOMP_ABI_CALL(0x0033274Cu, sub_0033274C); /* call 0x0033274C */

loc_00332862: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00332866
 * Original: 0x00332866 - 0x003328B8 (82 bytes, 31 insns)
 * Folder: xdk/xapi (between: 0x003323A3 and 0x003328CD)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00332866(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00332866: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_003328AA; /* je: equal / zero */

loc_00332876: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x14 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00332886; /* jae: above or equal (unsigned >=) */

loc_0033287B: ;
    PUSH32(esp, 0x7A);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00332882u); RECOMP_ABI_CALL(0x00332D9Eu, sub_00332D9E); /* call 0x00332D9E */

loc_00332882: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003328B3;

loc_00332886: ;
    eax = ebp + -116;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033288Fu); RECOMP_ABI_CALL(0x0033A2F2u, sub_0033A2F2); /* call 0x0033A2F2 */

loc_0033288F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -116;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033289Eu); RECOMP_ABI_CALL(0x0033A2ECu, sub_0033A2EC); /* call 0x0033A2EC */

loc_0033289E: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -116;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003328AAu); RECOMP_ABI_CALL(0x0033A2E6u, sub_0033A2E6); /* call 0x0033A2E6 */

loc_003328AA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x14;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003328B3: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003328B8
 * Original: 0x003328B8 - 0x003328CD (21 bytes, 6 insns)
 * Folder: xdk/xapi (between: 0x003323A3 and 0x003328CD)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003328B8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003328B8: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x24830000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003328CAu); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003328CA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003328CD
 * Original: 0x003328CD - 0x003329BA (237 bytes, 100 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00281198, between)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003328CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003328CD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003328E1; /* je: equal / zero */

loc_003328DF: ;
    MEM32(edi) = ebx;

loc_003328E1: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00332950; /* je: equal / zero */

loc_003328E8: ;
    eax = MEM32(esi + 8);
    MEM32(ebp + -16) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x10);
    ecx = ebp + -16;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    PUSH32(esp, esi);
    edi = 0x103;
    MEM32(esi) = edi;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = ~ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x41809C); PUSH32(esp, 0x00332922u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033291Cu); } /* indirect call */
    }

loc_00332922: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0033293B; /* jl: less (signed <) */

loc_00332926: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0033293B; /* je: equal / zero */

loc_0033292A: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00332936; /* je: equal / zero */

loc_00332931: ;
    ecx = MEM32(esi + 4);
    MEM32(eax) = ecx;

loc_00332936: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003329B3;

loc_0033293B: ;
    ecx = 0xC0000011u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003329AB; /* jne: not equal / not zero */

loc_00332944: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0033294D; /* je: equal / zero */

loc_0033294B: ;
    MEM32(eax) = ebx;

loc_0033294D: ;
    PUSH32(esp, ecx);
    goto loc_003329AC;

loc_00332950: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -8;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x41809C); PUSH32(esp, 0x00332967u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332961u); } /* indirect call */
    }

loc_00332967: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x103 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00332980; /* jne: not equal / not zero */

loc_0033296E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x418130); PUSH32(esp, 0x00332979u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332973u); } /* indirect call */
    }

loc_00332979: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0033298B; /* jl: less (signed <) */

loc_0033297D: ;
    eax = MEM32(ebp + -8);

loc_00332980: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0033298B; /* jl: less (signed <) */

loc_00332984: ;
    eax = MEM32(ebp + -4);
    MEM32(edi) = eax;
    goto loc_00332936;

loc_0033298B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000011u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000011u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00332996; /* jne: not equal / not zero */

loc_00332992: ;
    MEM32(edi) = ebx;
    goto loc_00332936;

loc_00332996: ;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xC0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000000u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003329AB; /* jne: not equal / not zero */

loc_003329A6: ;
    ecx = MEM32(ebp + -4);
    MEM32(edi) = ecx;

loc_003329AB: ;
    PUSH32(esp, eax);

loc_003329AC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003329B1u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_003329B1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003329B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003329BA
 * Original: 0x003329BA - 0x00332A90 (214 bytes, 90 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00281285, between)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003329BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003329BA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003329CE; /* je: equal / zero */

loc_003329CC: ;
    MEM32(edi) = ebx;

loc_003329CE: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00332A31; /* je: equal / zero */

loc_003329D5: ;
    eax = MEM32(esi + 8);
    MEM32(ebp + -16) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x10);
    ecx = ebp + -16;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    PUSH32(esp, esi);
    edi = 0x103;
    MEM32(esi) = edi;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = ~ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x418098); PUSH32(esp, 0x00332A0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332A09u); } /* indirect call */
    }

loc_00332A0F: ;
    ecx = 0xC0000000u;
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00332A81; /* je: equal / zero */

loc_00332A1C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00332A81; /* je: equal / zero */

loc_00332A20: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00332A2C; /* je: equal / zero */

loc_00332A27: ;
    ecx = MEM32(esi + 4);
    MEM32(eax) = ecx;

loc_00332A2C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00332A89;

loc_00332A31: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -8;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x418098); PUSH32(esp, 0x00332A48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332A42u); } /* indirect call */
    }

loc_00332A48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x103 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00332A61; /* jne: not equal / not zero */

loc_00332A4F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x418130); PUSH32(esp, 0x00332A5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332A54u); } /* indirect call */
    }

loc_00332A5A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00332A6C; /* jl: less (signed <) */

loc_00332A5E: ;
    eax = MEM32(ebp + -8);

loc_00332A61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00332A6C; /* jl: less (signed <) */

loc_00332A65: ;
    eax = MEM32(ebp + -4);
    MEM32(edi) = eax;
    goto loc_00332A2C;

loc_00332A6C: ;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xC0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000000u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00332A81; /* jne: not equal / not zero */

loc_00332A7C: ;
    ecx = MEM32(ebp + -4);
    MEM32(edi) = ecx;

loc_00332A81: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00332A87u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00332A87: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00332A89: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00332A90
 * Original: 0x00332A90 - 0x00332B14 (132 bytes, 56 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x0028135B, between)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00332A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00332A90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x4180A0); PUSH32(esp, 0x00332AABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332AA5u); } /* indirect call */
    }

loc_00332AAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00332AB9; /* jge: greater or equal (signed >=) */

loc_00332AAF: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00332AB5u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00332AB5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00332B10;

loc_00332AB9: ;
    eax = MEM32(ebp + -8);
    PUSH32(esp, esi);
    esi = MEM32(0x418094);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x14);
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 8);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00332ADDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332ADBu); } /* indirect call */
    }

loc_00332ADD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00332B07; /* jl: less (signed <) */

loc_00332AE1: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    MEM32(ebp + -20) = eax;
    PUSH32(esp, 8);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00332AFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332AFCu); } /* indirect call */
    }

loc_00332AFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00332B07; /* jl: less (signed <) */

loc_00332B02: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00332B0F;

loc_00332B07: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00332B0Du); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00332B0D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00332B0F: ;
    POP32(esp, esi);

loc_00332B10: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00332B14
 * Original: 0x00332B14 - 0x00332C0E (250 bytes, 104 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x002813DF, between)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00332B14(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00332B14: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x48));
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00332B2B; /* je: equal / zero */

loc_00332B24: ;
    edi = MEM32(ebx);
    esi = MEM32(ebp + 0xC);
    goto loc_00332B33;

loc_00332B2B: ;
    eax = MEM32(ebp + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = eax;
    edi = edx;

loc_00332B33: ;
    eax = MEM32(ebp + 0x14);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00332B95; /* je: equal / zero */

loc_00332B3B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00332B67; /* je: equal / zero */

loc_00332B3E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00332B67; /* jne: not equal / not zero */

loc_00332B41: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -72;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x4180A0); PUSH32(esp, 0x00332B56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332B50u); } /* indirect call */
    }

loc_00332B56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00332B80; /* jl: less (signed <) */

loc_00332B5A: ;
    eax = MEM32(ebp + -32);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -28);
    goto loc_00332B91;

loc_00332B67: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x4180A0); PUSH32(esp, 0x00332B7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332B76u); } /* indirect call */
    }

loc_00332B7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00332B8B; /* jge: greater or equal (signed >=) */

loc_00332B80: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00332B86u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00332B86: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00332C07;

loc_00332B8B: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -8)) + (uint64_t)(esi)) >> 32) & 1);
    MEM32(ebp + -8) = MEM32(ebp + -8) + esi;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -4);

loc_00332B91: ;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edi) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    goto loc_00332B9A;

loc_00332B95: ;
    MEM32(ebp + -8) = esi;
    eax = edi;

loc_00332B9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -4) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_00332BB0; /* jg: greater (signed >) */

loc_00332BA1: ;
    if (CMP_L(_fas, _fbs)) goto loc_00332BA9; /* jl: less (signed <) */

loc_00332BA3: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_AE(_fa, _fb)) goto loc_00332BB0; /* jae: above or equal (unsigned >=) */

loc_00332BA9: ;
    PUSH32(esp, 0x83);
    goto loc_00332BBD;

loc_00332BB0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00332BC4; /* jne: not equal / not zero */

loc_00332BB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFFFF (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00332BC4; /* je: equal / zero */

loc_00332BBB: ;
    PUSH32(esp, 0x57);

loc_00332BBD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00332BC2u); RECOMP_ABI_CALL(0x00332D9Eu, sub_00332D9E); /* call 0x00332D9E */

loc_00332BC2: ;
    goto loc_00332B86;

loc_00332BC4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x418094); PUSH32(esp, 0x00332BD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332BD3u); } /* indirect call */
    }

loc_00332BD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00332BF8; /* jl: less (signed <) */

loc_00332BDD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00332BE6; /* je: equal / zero */

loc_00332BE1: ;
    eax = MEM32(ebp + -4);
    MEM32(ebx) = eax;

loc_00332BE6: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00332BF3; /* jne: not equal / not zero */

loc_00332BEC: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00332BF3u); RECOMP_ABI_CALL(0x00332D9Eu, sub_00332D9E); /* call 0x00332D9E */

loc_00332BF3: ;
    eax = MEM32(ebp + -8);
    goto loc_00332C07;

loc_00332BF8: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00332BFEu); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00332BFE: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00332C07; /* je: equal / zero */

loc_00332C05: ;
    MEM32(ebx) = eax;

loc_00332C07: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00332C0E
 * Original: 0x00332C0E - 0x00332CD6 (200 bytes, 79 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x002814D9, between)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00332C0E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00332C0E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x48));
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x18);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00332C78; /* je: equal / zero */

loc_00332C1C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00332C4D; /* je: equal / zero */

loc_00332C1F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00332C4D; /* jne: not equal / not zero */

loc_00332C22: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -72;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x4180A0); PUSH32(esp, 0x00332C37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332C31u); } /* indirect call */
    }

loc_00332C37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00332CCA; /* jl: less (signed <) */

loc_00332C3F: ;
    ecx = MEM32(ebp + -32);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + 0xC))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -28);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    goto loc_00332C7E;

loc_00332C4D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x4180A0); PUSH32(esp, 0x00332C62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332C5Cu); } /* indirect call */
    }

loc_00332C62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00332CCA; /* jl: less (signed <) */

loc_00332C66: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    edx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -4);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    goto loc_00332C7E;

loc_00332C78: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);

loc_00332C7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_00332C9A; /* jg: greater (signed >) */

loc_00332C88: ;
    if (CMP_L(_fas, _fbs)) goto loc_00332C8E; /* jl: less (signed <) */

loc_00332C8A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_AE(_fa, _fb)) goto loc_00332C9A; /* jae: above or equal (unsigned >=) */

loc_00332C8E: ;
    PUSH32(esp, 0x83);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00332C98u); RECOMP_ABI_CALL(0x00332D9Eu, sub_00332D9E); /* call 0x00332D9E */

loc_00332C98: ;
    goto loc_00332CD0;

loc_00332C9A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x418094); PUSH32(esp, 0x00332CAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332CA9u); } /* indirect call */
    }

loc_00332CAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00332CCA; /* jl: less (signed <) */

loc_00332CB3: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00332CC5; /* je: equal / zero */

loc_00332CBA: ;
    ecx = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(eax + 4) = ecx;

loc_00332CC5: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00332CD2;

loc_00332CCA: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00332CD0u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00332CD0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00332CD2: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00332CD6
 * Original: 0x00332CD6 - 0x00332CFD (39 bytes, 18 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x002815A1, between)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00332CD6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00332CD6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x418138); PUSH32(esp, 0x00332CE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332CE2u); } /* indirect call */
    }

loc_00332CE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00332CF1; /* jl: less (signed <) */

loc_00332CEC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00332CF9;

loc_00332CF1: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00332CF7u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00332CF7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00332CF9: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00332CFD
 * Original: 0x00332CFD - 0x00332D3B (62 bytes, 26 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x002815C8, between)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00332CFD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00332CFD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -64;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x4180A0); PUSH32(esp, 0x00332D18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00332D12u); } /* indirect call */
    }

loc_00332D18: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00332D26; /* jge: greater or equal (signed >=) */

loc_00332D1C: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00332D22u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00332D22: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00332D37;

loc_00332D26: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -24);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -20);
    MEM32(eax + 4) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00332D37: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00332D3B
 * Original: 0x00332D3B - 0x00332D76 (59 bytes, 24 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00281606, between)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00332D3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00332D3B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00332D4Cu); RECOMP_ABI_CALL(0x00332CFDu, sub_00332CFD); /* call 0x00332CFD */

loc_00332D4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00332D6B; /* je: equal / zero */

loc_00332D50: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00332D5C; /* je: equal / zero */

loc_00332D57: ;
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ecx;

loc_00332D5C: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00332D6F; /* jne: not equal / not zero */

loc_00332D62: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00332D69u); RECOMP_ABI_CALL(0x00332D9Eu, sub_00332D9E); /* call 0x00332D9E */

loc_00332D69: ;
    goto loc_00332D6F;

loc_00332D6B: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00332D6F: ;
    eax = MEM32(ebp + -8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00332D76
 * Original: 0x00332D76 - 0x00332D9E (40 bytes, 9 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x0028047D, between)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332D76(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00332D76: ;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00332D88; /* jae: above or equal (unsigned >=) */

loc_00332D82: ;
    eax = MEM32(XBOX_FS_BASE + 0x28);

loc_00332D88: ;
    eax = MEM32(0x44575C);
    ecx = MEM32(XBOX_FS_BASE + 4);
    eax = MEM32(ecx + eax * 4);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00332D9E
 * Original: 0x00332D9E - 0x00332DCC (46 bytes, 10 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x002804A5, between)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00332D9E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00332D9E: ;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00332DB0; /* jae: above or equal (unsigned >=) */

loc_00332DAA: ;
    eax = MEM32(XBOX_FS_BASE + 0x28);

loc_00332DB0: ;
    ecx = MEM32(XBOX_FS_BASE + 4);
    eax = MEM32(0x44575C);
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(esp + 4);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003356DF
 * Original: 0x003356DF - 0x00335753 (116 bytes, 34 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x0027FBF8, between)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003356DF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003356DF: ;
    PUSH32(esp, 0x003356E4u); RECOMP_ABI_CALL(0x00337E54u, sub_00337E54); /* call 0x00337E54 */

loc_003356E4: ;
    PUSH32(esp, 0x003356E9u); RECOMP_ABI_CALL(0x00337BF2u, sub_00337BF2); /* call 0x00337BF2 */

loc_003356E9: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003356FE; /* je: equal / zero */

loc_003356F9: ;
    ecx = MEM32(eax + 0x24);
    goto loc_00335700;

loc_003356FE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00335700: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033572B; /* je: equal / zero */

loc_00335704: ;
    PUSH32(esp, edi);
    eax = MEM32(XBOX_FS_BASE + 0x28);
    edi = MEM32(XBOX_FS_BASE + 4);
    edx = MEM32(0x44575C);
    edx = MEM32(edi + edx * 4);
    _fb = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(ecx) = 1;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = edx;
    POP32(esp, edi);

loc_0033572B: ;
    PUSH32(esp, 0x00335730u); RECOMP_ABI_CALL(0x00337DC7u, sub_00337DC7); /* call 0x00337DC7 */

loc_00335730: ;
    PUSH32(esp, 0x00335735u); RECOMP_ABI_CALL(0x00337D6Fu, sub_00337D6F); /* call 0x00337D6F */

loc_00335735: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00335740u); RECOMP_ABI_CALL(0x000110E0u, sub_000110E0); /* call 0x000110E0 */

loc_00335740: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0033574Eu); RECOMP_ABI_CALL(0x003378FCu, sub_003378FC); /* call 0x003378FC */

loc_0033574E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * xbe_entry_point
 * Original: 0x00335753 - 0x003357C5 (114 bytes, 42 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x0027FC6C, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xbe_entry_point(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00335753: ;
    ecx = MEM32(0x10118);
    eax = MEM32(0x10108);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0033576B; /* jae: above or equal (unsigned >=) */

loc_00335769: ;
    MEM32(ecx) = eax;

loc_0033576B: ;
    eax = MEM32(0x4185E4);
    _fb = (uint32_t)(MEM32(0x4185D4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x4185D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x4185D8);
    PUSH32(esp, esi);
    eax = eax + ecx + 0xF;
    PUSH32(esp, edi);
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFCu);
    POP32(esp, ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x76C1A8) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(0x4185DC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3356DF);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    MEM32(ecx) = eax;
    PUSH32(esp, 0x003357ACu); RECOMP_ABI_CALL(0x00331E99u, sub_00331E99); /* call 0x00331E99 */

loc_003357AC: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003357BC; /* jne: not equal / not zero */

loc_003357B2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x003357BCu); RECOMP_ABI_CALL(0x003378FCu, sub_003378FC); /* call 0x003378FC */

loc_003357BC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003357C2u); RECOMP_ABI_CALL(0x00331BE8u, sub_00331BE8); /* call 0x00331BE8 */

loc_003357C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003357C5
 * Original: 0x003357C5 - 0x0033594E (393 bytes, 130 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00281826, between)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003357C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003357C5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    eax = ecx;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ~eax;
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), esi (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -8) = edx;
    MEM32(ebp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0033593E; /* je: equal / zero */

loc_003357F6: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033593E; /* je: equal / zero */

loc_003357FF: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xFFFFFFFFu (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033593E; /* jl: less (signed <) */

loc_00335809: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0xFFFFFFFFu (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033593E; /* jl: less (signed <) */

loc_00335813: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), esi (32-bit) */

loc_00335816: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0033591F; /* je: equal / zero */

loc_0033581C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), esi (32-bit) */
    ecx = 0x10000;
    if (CMP_EQ(_fa, _fb)) goto loc_0033591A; /* je: equal / zero */

loc_0033582A: ;
    edx = MEM32(ebp + 0xC);
    SET_LO8(edx, MEM8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335908; /* je: equal / zero */

loc_00335837: ;
    esi = MEM32(ebp + 0x14);
    SET_LO8(ebx, MEM8(esi));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335915; /* je: equal / zero */

loc_00335844: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO16(edx, ZX8(LO8(edx)));
    SET_LO16(ebx, ZX8(LO8(ebx)));
    edi = ZX16(LO16(edx));
    esi = MEM32(edi * 4 + 0x42C380);
    ebx = ZX16(LO16(ebx));
    edx = MEM32(ebx * 4 + 0x42C380);
    if (CMP_EQ(_fa, _fb)) goto loc_003358B4; /* je: equal / zero */

loc_00335864: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0033589D; /* je: equal / zero */

loc_00335868: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00335884; /* je: equal / zero */

loc_0033586C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00335879; /* jae: above or equal (unsigned >=) */

loc_00335870: ;
    MEM32(ebp + -4) = 7;
    goto loc_003358F2;

loc_00335879: ;
    if (CMP_BE(_fa, _fb)) goto loc_003358F2; /* jbe: below or equal (unsigned <=) */

loc_0033587B: ;
    MEM32(ebp + -4) = 0xB;
    goto loc_003358F2;

loc_00335884: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335891; /* jne: not equal / not zero */

loc_0033588A: ;
    MEM32(ebp + -4) = 4;

loc_00335891: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00335895: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_003358FE;

loc_0033589D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003358B4; /* je: equal / zero */

loc_003358A1: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003358AE; /* jne: not equal / not zero */

loc_003358A7: ;
    MEM32(ebp + -4) = 8;

loc_003358AE: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 2;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_003358F8;

loc_003358B4: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003358C7; /* je: equal / zero */

loc_003358BA: ;
    ecx = 0x20000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00335895; /* jne: not equal / not zero */

loc_003358C3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003358F8; /* jne: not equal / not zero */

loc_003358C7: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003358EC; /* je: equal / zero */

loc_003358CD: ;
    ecx = 0x100000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003358DF; /* je: equal / zero */

loc_003358D6: ;
    esi = edi + 0x20;
    esi = esi | 0x80000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003358DF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003358EC; /* je: equal / zero */

loc_003358E3: ;
    edx = ebx + 0x20;
    edx = edx | 0x80000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003358EC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00335910; /* jb: below (unsigned <) */

loc_003358F0: ;
    if (CMP_A(_fa, _fb)) goto loc_00335915; /* ja: above (unsigned >) */

loc_003358F2: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003358F8: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003358FE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), esi (32-bit) */
    goto loc_00335816;

loc_00335908: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335924; /* je: equal / zero */

loc_00335910: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00335947;

loc_00335915: ;
    PUSH32(esp, 3);
    POP32(esp, eax);
    goto loc_00335947;

loc_0033591A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335930; /* jne: not equal / not zero */

loc_0033591F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335930; /* jne: not equal / not zero */

loc_00335924: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax * 4 + 0x42C780);
    goto loc_00335947;

loc_00335930: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), esi (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax + eax + 1;
    goto loc_00335947;

loc_0033593E: ;
    PUSH32(esp, 0x57);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00335945u); RECOMP_ABI_CALL(0x00332D9Eu, sub_00332D9E); /* call 0x00332D9E */

loc_00335945: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00335947: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0033594E
 * Original: 0x0033594E - 0x00335998 (74 bytes, 29 insns)
 * Folder: xdk/xapi (string: t:\$u\%s)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0033594E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033594E: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0x4185F4);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x00335967u); RECOMP_ABI_CALL(0x00347B74u, sub_00347B74); /* call 0x00347B74 */

loc_00335967: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033598E; /* jge: greater or equal (signed >=) */

loc_0033596E: ;
    eax = MEM32(esp + 8);
    edx = eax + 1;

loc_00335975: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335975; /* jne: not equal / not zero */

loc_0033597C: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7A);
    MEM32(esi) = eax;
    PUSH32(esp, 0x0033598Au); RECOMP_ABI_CALL(0x00332D9Eu, sub_00332D9E); /* call 0x00332D9E */

loc_0033598A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00335994;

loc_0033598E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00335994: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00335998
 * Original: 0x00335998 - 0x00335A17 (127 bytes, 53 insns)
 * Folder: xdk/xapi (between: 0x0033594E and 0x00335A17)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00335998(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00335998: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(0x41808C);
    PUSH32(esp, edi);
    edi = 0x42C7B0;
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = esi; PUSH32(esp, 0x003359B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003359B3u); } /* indirect call */
    }

loc_003359B5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x003359BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003359BAu); } /* indirect call */
    }

loc_003359BC: ;
    MEM16(ebp + -8) = MEM16(ebp + -8) - 1;
    _fa = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003359C9u); RECOMP_ABI_CALL(0x00337BE1u, sub_00337BE1); /* call 0x00337BE1 */

loc_003359C9: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003359EC; /* jl: less (signed <) */

loc_003359CF: ;
    esi = 0x42C800;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4181A0); PUSH32(esp, 0x003359DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003359D5u); } /* indirect call */
    }

loc_003359DB: ;
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x41819C); PUSH32(esp, 0x003359E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003359E0u); } /* indirect call */
    }

loc_003359E6: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00335A10; /* jge: greater or equal (signed >=) */

loc_003359EC: ;
    esi = MEM32(0x418108);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x003359F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003359F3u); } /* indirect call */
    }

loc_003359F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_G(_fas, _fbs)) goto loc_00335A00; /* jg: greater (signed >) */

loc_003359FA: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x003359FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003359FAu); } /* indirect call */
    }

loc_003359FC: ;
    ebx = eax;
    goto loc_00335A10;

loc_00335A00: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00335A02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00335A00u); } /* indirect call */
    }

loc_00335A02: ;
    ebx = eax;
    ebx = ebx & 0xFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | 0x80070000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00335A10: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00335A17
 * Original: 0x00335A17 - 0x00335AE3 (204 bytes, 77 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x0027FD28, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00335A17(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00335A17: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x188) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x188;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x8000080);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00335A3Fu); RECOMP_ABI_CALL(0x0033175Cu, sub_0033175C); /* call 0x0033175C */

loc_00335A3F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335AAC; /* je: equal / zero */

loc_00335A46: ;
    PUSH32(esp, esi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    ebx = 0x178;
    PUSH32(esp, ebx);
    eax = ebp + -392;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00335A5Eu); RECOMP_ABI_CALL(0x003328CDu, sub_003328CD); /* call 0x003328CD */

loc_00335A5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335AAC; /* je: equal / zero */

loc_00335A62: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335AA5; /* jne: not equal / not zero */

loc_00335A67: ;
    eax = MEM32(ebp + -112);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -132)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -132) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00335AA5; /* jb: below (unsigned <) */

loc_00335A72: ;
    _fb = (uint32_t)(MEM32(ebp + -132)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -132);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00335A84u); RECOMP_ABI_CALL(0x00332B14u, sub_00332B14); /* call 0x00332B14 */

loc_00335A84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335AAC; /* je: equal / zero */

loc_00335A88: ;
    PUSH32(esp, esi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    esi = 0x1D0;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00335A9Cu); RECOMP_ABI_CALL(0x003328CDu, sub_003328CD); /* call 0x003328CD */

loc_00335A9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335AAC; /* je: equal / zero */

loc_00335AA0: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335ACE; /* je: equal / zero */

loc_00335AA5: ;
    PUSH32(esp, 0xD);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00335AACu); RECOMP_ABI_CALL(0x00332D9Eu, sub_00332D9E); /* call 0x00332D9E */

loc_00335AAC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00335AB1u); RECOMP_ABI_CALL(0x00332D76u, sub_00332D76); /* call 0x00332D76 */

loc_00335AB1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00335ABC; /* jg: greater (signed >) */

loc_00335AB5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00335ABAu); RECOMP_ABI_CALL(0x00332D76u, sub_00332D76); /* call 0x00332D76 */

loc_00335ABA: ;
    goto loc_00335ACB;

loc_00335ABC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00335AC1u); RECOMP_ABI_CALL(0x00332D76u, sub_00332D76); /* call 0x00332D76 */

loc_00335AC1: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00335ACB: ;
    MEM32(ebp + -4) = eax;

loc_00335ACE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335AD9; /* je: equal / zero */

loc_00335AD3: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00335AD9u); RECOMP_ABI_CALL(0x00331BE8u, sub_00331BE8); /* call 0x00331BE8 */

loc_00335AD9: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00335AE3
 * Original: 0x00335AE3 - 0x00335B9C (185 bytes, 59 insns)
 * Folder: xdk/xapi (string: \Device\Cdrom0)
 * Category: game_io
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00335AE3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00335AE3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x428) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x428;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    MEM8(ebp + -544) = 0;
    MEM32(ebp + -16) = 0x40;
    MEM32(ebp + -20) = 0x42C808;
    { uint32_t _icall_target = MEM32(0x418128); PUSH32(esp, 0x00335B14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00335B0Eu); } /* indirect call */
    }

loc_00335B14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = 0x208;
    if (CMP_L(_fas, _fbs)) goto loc_00335B64; /* jl: less (signed <) */

loc_00335B1D: ;
    MEM16(ebp + -12) = MEM16(ebp + -12) & 0;
    _fa = (uint32_t)(MEM16(ebp + -12)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, edi);
    eax = ebp + -1064;
    MEM32(ebp + -8) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    MEM16(ebp + -10) = LO16(esi);
    { uint32_t _icall_target = MEM32(0x418124); PUSH32(esp, 0x00335B3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00335B39u); } /* indirect call */
    }

loc_00335B3F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    edi = eax;
    { uint32_t _icall_target = MEM32(0x418080); PUSH32(esp, 0x00335B4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00335B44u); } /* indirect call */
    }

loc_00335B4A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_00335B64; /* jl: less (signed <) */

loc_00335B4F: ;
    eax = ZX16(MEM16(ebp + -12));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00335B5A; /* jbe: below or equal (unsigned <=) */

loc_00335B58: ;
    eax = esi;

loc_00335B5A: ;
    PUSH32(esp, eax);
    eax = ebp + -1064;
    PUSH32(esp, eax);
    goto loc_00335B6A;

loc_00335B64: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x418600);

loc_00335B6A: ;
    eax = ebp + -544;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00335B76u); RECOMP_ABI_CALL(0x0033165Fu, sub_0033165F); /* call 0x0033165F */

loc_00335B76: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(0x10118);
    PUSH32(esp, MEM32(eax + 8));
    eax = ebp + -544;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00335B97u); RECOMP_ABI_CALL(0x0033221Au, sub_0033221A); /* call 0x0033221A */

loc_00335B97: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00335B9C
 * Original: 0x00335B9C - 0x00335C00 (100 bytes, 41 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x0027FDF4, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00335B9C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00335B9C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 0xC);
    MEM32(edx) = MEM32(edx) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    ecx = MEM32(0x418100);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00335BE2; /* je: equal / zero */

loc_00335BB8: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335BE2; /* je: equal / zero */

loc_00335BBE: ;
    edi = ecx;
    ecx = edi + 0x214;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00335BDC; /* je: equal / zero */

loc_00335BCB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    MEM32(edx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00335BE5;

loc_00335BDC: ;
    ecx = MEM32(edi);
    MEM32(edx) = ecx;
    goto loc_00335BE5;

loc_00335BE2: ;
    edi = MEM32(ebp + 0xC);

loc_00335BE5: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335BFA; /* je: equal / zero */

loc_00335BEA: ;
    esi = edi + 0x400;
    edi = MEM32(ebp + 0x10);
    ecx = 0x300;
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

loc_00335BFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00335C00
 * Original: 0x00335C00 - 0x00335C92 (146 bytes, 48 insns)
 * Folder: xdk/xapi (string: \Device\Cdrom0)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00335C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00335C00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x21C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x21C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM8(edi) = 0;
    MEM32(ebp + -12) = 0x40;
    MEM32(ebp + -16) = 0x42C808;
    { uint32_t _icall_target = MEM32(0x418128); PUSH32(esp, 0x00335C30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00335C2Au); } /* indirect call */
    }

loc_00335C30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00335C7F; /* jl: less (signed <) */

loc_00335C34: ;
    MEM16(ebp + -8) = MEM16(ebp + -8) & 0;
    _fa = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, esi);
    eax = ebp + -540;
    MEM32(ebp + -4) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    MEM16(ebp + -6) = 0x208;
    { uint32_t _icall_target = MEM32(0x418124); PUSH32(esp, 0x00335C58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00335C52u); } /* indirect call */
    }

loc_00335C58: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    { uint32_t _icall_target = MEM32(0x418080); PUSH32(esp, 0x00335C63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00335C5Du); } /* indirect call */
    }

loc_00335C63: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_00335C7F; /* jl: less (signed <) */

loc_00335C68: ;
    eax = ZX16(MEM16(ebp + -8));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00335C75; /* jae: above or equal (unsigned >=) */

loc_00335C72: ;
    eax = MEM32(ebp + 0xC);

loc_00335C75: ;
    PUSH32(esp, eax);
    eax = ebp + -540;
    PUSH32(esp, eax);
    goto loc_00335C87;

loc_00335C7F: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x418600);

loc_00335C87: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00335C8Du); RECOMP_ABI_CALL(0x0033165Fu, sub_0033165F); /* call 0x0033165F */

loc_00335C8D: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00335C92
 * Original: 0x00335C92 - 0x00335D13 (129 bytes, 57 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x0027FEEA, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00335C92(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00335C92: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(0x418100);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ecx = eax + 1;

loc_00335CA4: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335CA4; /* jne: not equal / not zero */

loc_00335CAB: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax + 1;
    eax = MEM32(ebp + 0xC);
    edi = eax + 1;

loc_00335CB6: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335CB6; /* jne: not equal / not zero */

loc_00335CBD: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + ecx + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1EC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1EC (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00335D0D; /* jae: above or equal (unsigned >=) */

loc_00335CCA: ;
    eax = esi + 0x214;
    MEM16(eax) = 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax) = LO16(ecx);
    edx = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335CEB; /* jne: not equal / not zero */

loc_00335CE8: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00335CEB: ;
    esi = MEM32(ebp + 8);
    edi = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00335CF2: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(edi + esi) = LO8(edx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335CF2; /* jne: not equal / not zero */

loc_00335CFC: ;
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00335D03: ;
    SET_LO8(ecx, MEM8(edx));
    MEM8(eax + edx) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335D03; /* jne: not equal / not zero */

loc_00335D0D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00335D13
 * Original: 0x00335D13 - 0x00335E95 (386 bytes, 134 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x0027FF6B, between)
 * Category: game_io
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00335D13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00335D13: ;
    PUSH32(esp, ebp);
    ebp = esp + -104;
    _fb = (uint32_t)(0x45C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x45C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    eax = ebp + -520;
    PUSH32(esp, eax);
    PUSH32(esp, 0x41F3CC);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x64) = 0x104;
    PUSH32(esp, 0x00335D40u); RECOMP_ABI_CALL(0x0033594Eu, sub_0033594E); /* call 0x0033594E */

loc_00335D40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335E79; /* je: equal / zero */

loc_00335D48: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    eax = ebp + -520;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00335D62u); RECOMP_ABI_CALL(0x0033175Cu, sub_0033175C); /* call 0x0033175C */

loc_00335D62: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335E79; /* je: equal / zero */

loc_00335D6D: ;
    eax = ebp + -144;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x74));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00335D7Fu); RECOMP_ABI_CALL(0x003323A3u, sub_003323A3); /* call 0x003323A3 */

loc_00335D7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335E79; /* je: equal / zero */

loc_00335D87: ;
    _fa = (uint32_t)(MEM8(ebp + -112)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -112), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00335E79; /* je: equal / zero */

loc_00335D91: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + 0x50;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, 0x44);
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebp + -92);
    POP32(esp, esi);
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -88), esi (32-bit) */
    MEM32(ebp + 0x58) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00335E79; /* jne: not equal / not zero */

loc_00335DAD: ;
    eax = ebp + 0x50;
    PUSH32(esp, eax);
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00335DC0u); RECOMP_ABI_CALL(0x003328CDu, sub_003328CD); /* call 0x003328CD */

loc_00335DC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335E79; /* je: equal / zero */

loc_00335DC8: ;
    _fa = (uint32_t)(MEM32(ebp + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x64), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335E79; /* jne: not equal / not zero */

loc_00335DD1: ;
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00335DDDu); RECOMP_ABI_CALL(0x0033A2F2u, sub_0033A2F2); /* call 0x0033A2F2 */

loc_00335DDD: ;
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00335DEEu); RECOMP_ABI_CALL(0x0033A2ECu, sub_0033A2EC); /* call 0x0033A2EC */

loc_00335DEE: ;
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    eax = ebp + -260;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00335DFEu); RECOMP_ABI_CALL(0x0033A2E6u, sub_0033A2E6); /* call 0x0033A2E6 */

loc_00335DFE: ;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    edi = ebp + -84;
    esi = ebp + 0x3C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_00335E79; /* jne: not equal / not zero */

loc_00335E0D: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00335E79; /* ja: above (unsigned >) */

loc_00335E15: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00335E27; /* jbe: below or equal (unsigned <=) */

loc_00335E19: ;
    edx = MEM32(ebp + eax * 4 + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x78) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335E27; /* je: equal / zero */

loc_00335E22: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00335E19; /* jb: below (unsigned <) */

loc_00335E27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335E79; /* je: equal / zero */

loc_00335E2B: ;
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    eax = ebp + -520;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x70));
    MEM32(ebp + 0x64) = 0x104;
    PUSH32(esp, 0x00335E45u); RECOMP_ABI_CALL(0x0033594Eu, sub_0033594E); /* call 0x0033594E */

loc_00335E45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335E55; /* jne: not equal / not zero */

loc_00335E49: ;
    PUSH32(esp, 0x00335E4Eu); RECOMP_ABI_CALL(0x00332D76u, sub_00332D76); /* call 0x00332D76 */

loc_00335E4E: ;
    PUSH32(esp, 0x00335E53u); RECOMP_ABI_CALL(0x00332D76u, sub_00332D76); /* call 0x00332D76 */

loc_00335E53: ;
    goto loc_00335E79;

loc_00335E55: ;
    eax = ebp + -1012;
    PUSH32(esp, eax);
    eax = ebp + -520;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00335E68u); RECOMP_ABI_CALL(0x00335A17u, sub_00335A17); /* call 0x00335A17 */

loc_00335E68: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00335E79; /* jl: less (signed <) */

loc_00335E6E: ;
    eax = MEM32(ebp + 0x74);
    _fa = (uint32_t)(MEM32(ebp + -1004)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -1004), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335E7E; /* je: equal / zero */

loc_00335E79: ;
    esi = 0x8007000Du;

loc_00335E7E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335E89; /* je: equal / zero */

loc_00335E83: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00335E89u); RECOMP_ABI_CALL(0x00331BE8u, sub_00331BE8); /* call 0x00331BE8 */

loc_00335E89: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x68;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00335E95
 * Original: 0x00335E95 - 0x00335F0C (119 bytes, 38 insns)
 * Folder: xdk/xapi (between: 0x00335D13 and 0x00335F0C)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00335E95(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00335E95: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1EC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1EC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00335EA4u); RECOMP_ABI_CALL(0x00335998u, sub_00335998); /* call 0x00335998 */

loc_00335EA4: ;
    eax = ebp + -492;
    PUSH32(esp, eax);
    edi = 0x41863C;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00335EB6u); RECOMP_ABI_CALL(0x00335A17u, sub_00335A17); /* call 0x00335A17 */

loc_00335EB6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00335F07; /* jl: less (signed <) */

loc_00335EBA: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + -320);
    eax = ebp + -492;
    PUSH32(esp, eax);
    PUSH32(esp, 0x41862C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00335ED2u); RECOMP_ABI_CALL(0x00335A17u, sub_00335A17); /* call 0x00335A17 */

loc_00335ED2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00335EFB; /* jl: less (signed <) */

loc_00335ED6: ;
    _fa = (uint32_t)(MEM32(ebp + -320)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -320), esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00335EFB; /* jb: below (unsigned <) */

loc_00335EDE: ;
    eax = ebp + -492;
    PUSH32(esp, eax);
    PUSH32(esp, 0x418610);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00335EEFu); RECOMP_ABI_CALL(0x00335A17u, sub_00335A17); /* call 0x00335A17 */

loc_00335EEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00335EFB; /* jl: less (signed <) */

loc_00335EF3: ;
    _fa = (uint32_t)(MEM32(ebp + -320)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -320), esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00335F06; /* jae: above or equal (unsigned >=) */

loc_00335EFB: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00335F06u); RECOMP_ABI_CALL(0x00335AE3u, sub_00335AE3); /* call 0x00335AE3 */

loc_00335F06: ;
    POP32(esp, esi);

loc_00335F07: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00335F0C
 * Original: 0x00335F0C - 0x0033608D (385 bytes, 136 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x002800ED, between)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00335F0C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00335F0C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2D4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2D4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x10118);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335F44; /* jne: not equal / not zero */

loc_00335F25: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ecx + 8));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx + ecx + -1;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00335F3Fu); RECOMP_ABI_CALL(0x0033221Au, sub_0033221A); /* call 0x0033221A */

loc_00335F3F: ;
    goto loc_00336088;

loc_00335F44: ;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    edi = 0x168;
    PUSH32(esp, edi);
    eax = ebp + -724;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(ebp + 8) = ecx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00335F64u); RECOMP_ABI_CALL(0x00335C00u, sub_00335C00); /* call 0x00335C00 */

loc_00335F64: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x44 (8-bit) */
    SET_LO8(edx, 0x5C);
    if (CMP_EQ(_fa, _fb)) goto loc_00335F70; /* je: equal / zero */

loc_00335F6C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x64) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x64 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335F92; /* jne: not equal / not zero */

loc_00335F70: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335F92; /* jne: not equal / not zero */

loc_00335F76: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335F92; /* jne: not equal / not zero */

loc_00335F7B: ;
    eax = esi + 3;
    esi = eax;
    ecx = ebp + -724;
    MEM32(ebp + -4) = 1;
    goto loc_00336020;

loc_00335F92: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x54) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x54 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335F9A; /* je: equal / zero */

loc_00335F96: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x74) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x74 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335FCB; /* jne: not equal / not zero */

loc_00335F9A: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335FCB; /* jne: not equal / not zero */

loc_00335FA0: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335FCB; /* jne: not equal / not zero */

loc_00335FA5: ;
    _fa = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fb = (uint32_t)(0x24) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 3), 0x24 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335FCB; /* jne: not equal / not zero */

loc_00335FAB: ;
    SET_LO8(ecx, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x55) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x55 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335FB8; /* je: equal / zero */

loc_00335FB3: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x75) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x75 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335FCB; /* jne: not equal / not zero */

loc_00335FB8: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 5), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00335FCB; /* jne: not equal / not zero */

loc_00335FBD: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x42C7D0);
    goto loc_00336002;

loc_00335FCB: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00336083; /* je: equal / zero */

loc_00335FD5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x59) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x59 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00335FE1; /* je: equal / zero */

loc_00335FD9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x79) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x79 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00336083; /* jne: not equal / not zero */

loc_00335FE1: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00336083; /* jne: not equal / not zero */

loc_00335FEB: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00336083; /* jne: not equal / not zero */

loc_00335FF4: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x42C7B0);
    PUSH32(esp, 0x41F44C);

loc_00336002: ;
    eax = ebp + -364;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033600Fu); RECOMP_ABI_CALL(0x00347B74u, sub_00347B74); /* call 0x00347B74 */

loc_0033600F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00336083; /* jl: less (signed <) */

loc_00336016: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp + -364;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00336020: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033602B; /* je: equal / zero */

loc_00336026: ;
    edx = MEM32(ebp + 0x14);
    goto loc_0033602E;

loc_0033602B: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0033602E: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033603Du); RECOMP_ABI_CALL(0x003320D5u, sub_003320D5); /* call 0x003320D5 */

loc_0033603D: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0033604B; /* je: equal / zero */

loc_00336046: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00336058; /* je: equal / zero */

loc_0033604B: ;
    PUSH32(esp, esi);
    eax = ebp + -724;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00336058u); RECOMP_ABI_CALL(0x00335C92u, sub_00335C92); /* call 0x00335C92 */

loc_00336058: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033607A; /* jl: less (signed <) */

loc_0033605C: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00336072; /* je: equal / zero */

loc_0033606C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00336072u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033606Fu); } /* indirect call */
    }

loc_00336072: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(0x41810C); PUSH32(esp, 0x0033607Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00336074u); } /* indirect call */
    }

loc_0033607A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x418108); PUSH32(esp, 0x00336081u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033607Bu); } /* indirect call */
    }

loc_00336081: ;
    goto loc_00336086;

loc_00336083: ;
    PUSH32(esp, 0x57);
    POP32(esp, eax);

loc_00336086: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00336088: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0033608D
 * Original: 0x0033608D - 0x003361F2 (357 bytes, 121 insns)
 * Folder: xdk/xapi (string: t:\$u\)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033608D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0033608D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0x1050;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033609Au); RECOMP_ABI_CALL(0x00347D50u, sub_00347D50); /* call 0x00347D50 */

loc_0033609A: ;
    eax = MEM32(0x10118);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFE0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFE0000u (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003361EE; /* je: equal / zero */

loc_003360B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = ebp + -4176;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003360C6u); RECOMP_ABI_CALL(0x00335B9Cu, sub_00335B9C); /* call 0x00335B9C */

loc_003360C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -16) = eax;
    ebx = 0x168;
    if (CMP_NE(_fa, _fb)) goto loc_003360E7; /* jne: not equal / not zero */

loc_003360D2: ;
    PUSH32(esp, ebx);
    eax = ebp + -1104;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003360DFu); RECOMP_ABI_CALL(0x00335C00u, sub_00335C00); /* call 0x00335C00 */

loc_003360DF: ;
    edi = ebp + -1104;
    goto loc_003360EA;

loc_003360E7: ;
    edi = MEM32(ebp + -12);

loc_003360EA: ;
    eax = edi;
    edx = eax + 1;

loc_003360EF: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003360EF; /* jne: not equal / not zero */

loc_003360F6: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x4181A4);
    ecx = ZX16(MEM16(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003361B5; /* jbe: below or equal (unsigned <=) */

loc_0033610B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(eax + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00336115u); RECOMP_ABI_CALL(0x00347CF4u, sub_00347CF4); /* call 0x00347CF4 */

loc_00336115: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003361B5; /* jne: not equal / not zero */

loc_00336120: ;
    eax = MEM32(0x4181A4);
    ecx = ZX16(MEM16(eax));
    eax = MEM32(eax + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = ebp + -384;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033613Eu); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_0033613E: ;
    eax = MEM32(0x4181A4);
    eax = ZX16(MEM16(eax));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(ebp + eax + -384) = 0;
    eax = ebp + -384;
    PUSH32(esp, eax);
    PUSH32(esp, 0x418650);
    PUSH32(esp, 0x41F44C);
    eax = ebp + -744;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033616Eu); RECOMP_ABI_CALL(0x00347B74u, sub_00347B74); /* call 0x00347B74 */

loc_0033616E: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_003361EB; /* jl: less (signed <) */

loc_00336175: ;
    eax = MEM32(0x10118);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 0xAC));
    eax = ebp + -384;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00336191u); RECOMP_ABI_CALL(0x00335D13u, sub_00335D13); /* call 0x00335D13 */

loc_00336191: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_003361B5; /* jl: less (signed <) */

loc_00336195: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx = ebp + -4176;
    PUSH32(esp, 0);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = ebp + -744;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003361B5u); RECOMP_ABI_CALL(0x00335F0Cu, sub_00335F0C); /* call 0x00335F0C */

loc_003361B5: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003361EB; /* je: equal / zero */

loc_003361BB: ;
    eax = edi;
    edx = eax + 1;

loc_003361C0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003361C0; /* jne: not equal / not zero */

loc_003361C7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = 0x42C808;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM16(ebp + -8) = LO16(eax);
    MEM16(ebp + -6) = LO16(eax);
    MEM32(ebp + -4) = edi;
    { uint32_t _icall_target = MEM32(0x4181A0); PUSH32(esp, 0x003361E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003361DAu); } /* indirect call */
    }

loc_003361E0: ;
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x41819C); PUSH32(esp, 0x003361EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003361E5u); } /* indirect call */
    }

loc_003361EB: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);

loc_003361EE: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003370BA
 * Original: 0x003370BA - 0x003370E2 (40 bytes, 11 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x002819AF, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003370BA(void)
{

loc_003370BA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x41808C); PUSH32(esp, 0x003370CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003370C4u); } /* indirect call */
    }

loc_003370CA: ;
    eax = MEM32(esp + 8);
    MEM32(eax + 4) = esi;
    MEM32(eax) = 0xFFFFFFFCu;
    MEM32(eax + 8) = 0x80;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003370E2
 * Original: 0x003370E2 - 0x00337110 (46 bytes, 17 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x002819D7, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003370E2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003370E2: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003370EF; /* jne: not equal / not zero */

loc_003370EB: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033710D;

loc_003370EF: ;
    ecx = 0x2710;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ecx + 4) = edx;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    eax = ecx;

loc_0033710D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00337110
 * Original: 0x00337110 - 0x00337171 (97 bytes, 37 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00281A05, between)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00337110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337110: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033712E; /* je: equal / zero */

loc_0033711C: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033712Cu); RECOMP_ABI_CALL(0x003370BAu, sub_003370BA); /* call 0x003370BA */

loc_0033712C: ;
    goto loc_00337130;

loc_0033712E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00337130: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x4181B0); PUSH32(esp, 0x00337147u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337141u); } /* indirect call */
    }

loc_00337147: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00337165; /* jl: less (signed <) */

loc_0033714B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00337159; /* jne: not equal / not zero */

loc_00337152: ;
    PUSH32(esp, 0xB7);
    goto loc_0033715B;

loc_00337159: ;
    PUSH32(esp, 0);

loc_0033715B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337160u); RECOMP_ABI_CALL(0x00332D9Eu, sub_00332D9E); /* call 0x00332D9E */

loc_00337160: ;
    eax = MEM32(ebp + 0x14);
    goto loc_0033716D;

loc_00337165: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033716Bu); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_0033716B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033716D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00337171
 * Original: 0x00337171 - 0x00337191 (32 bytes, 12 insns)
 * Folder: xdk/xapi (between: 0x00337110 and 0x00337191)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00337171(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337171: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 8));
    { uint32_t _icall_target = MEM32(0x4181B4); PUSH32(esp, 0x0033717Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337177u); } /* indirect call */
    }

loc_0033717D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00337186; /* jl: less (signed <) */

loc_00337181: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0033718E;

loc_00337186: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033718Cu); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_0033718C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033718E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337191
 * Original: 0x00337191 - 0x003371EC (91 bytes, 34 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00281A86, between)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00337191(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337191: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003371AF; /* je: equal / zero */

loc_0033719D: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003371ADu); RECOMP_ABI_CALL(0x003370BAu, sub_003370BA); /* call 0x003370BA */

loc_003371AD: ;
    goto loc_003371B1;

loc_003371AF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003371B1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x4181B8); PUSH32(esp, 0x003371C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003371BCu); } /* indirect call */
    }

loc_003371C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003371E0; /* jl: less (signed <) */

loc_003371C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003371D4; /* jne: not equal / not zero */

loc_003371CD: ;
    PUSH32(esp, 0xB7);
    goto loc_003371D6;

loc_003371D4: ;
    PUSH32(esp, 0);

loc_003371D6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003371DBu); RECOMP_ABI_CALL(0x00332D9Eu, sub_00332D9E); /* call 0x00332D9E */

loc_003371DB: ;
    eax = MEM32(ebp + 0x14);
    goto loc_003371E8;

loc_003371E0: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003371E6u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_003371E6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003371E8: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003371EC
 * Original: 0x003371EC - 0x00337212 (38 bytes, 13 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00281AE1, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003371EC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003371EC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    { uint32_t _icall_target = MEM32(0x4181BC); PUSH32(esp, 0x003371FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003371F8u); } /* indirect call */
    }

loc_003371FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00337207; /* jl: less (signed <) */

loc_00337202: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0033720F;

loc_00337207: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0033720Du); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_0033720D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033720F: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00337212
 * Original: 0x00337212 - 0x0033726A (88 bytes, 33 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00281B07, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00337212(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337212: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337230; /* je: equal / zero */

loc_0033721E: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033722Eu); RECOMP_ABI_CALL(0x003370BAu, sub_003370BA); /* call 0x003370BA */

loc_0033722E: ;
    goto loc_00337232;

loc_00337230: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00337232: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x4181C0); PUSH32(esp, 0x00337240u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033723Au); } /* indirect call */
    }

loc_00337240: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033725E; /* jl: less (signed <) */

loc_00337244: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40000000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00337252; /* jne: not equal / not zero */

loc_0033724B: ;
    PUSH32(esp, 0xB7);
    goto loc_00337254;

loc_00337252: ;
    PUSH32(esp, 0);

loc_00337254: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337259u); RECOMP_ABI_CALL(0x00332D9Eu, sub_00332D9E); /* call 0x00332D9E */

loc_00337259: ;
    eax = MEM32(ebp + 0x10);
    goto loc_00337266;

loc_0033725E: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337264u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00337264: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00337266: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0033726A
 * Original: 0x0033726A - 0x0033728A (32 bytes, 12 insns)
 * Folder: xdk/xapi (between: 0x00337212 and 0x0033728A)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0033726A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033726A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 8));
    { uint32_t _icall_target = MEM32(0x4181C4); PUSH32(esp, 0x00337276u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337270u); } /* indirect call */
    }

loc_00337276: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033727F; /* jl: less (signed <) */

loc_0033727A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00337287;

loc_0033727F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00337285u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00337285: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00337287: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033728A
 * Original: 0x0033728A - 0x003372CE (68 bytes, 28 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00281B7F, between)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033728A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033728A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033729Cu); RECOMP_ABI_CALL(0x003370E2u, sub_003370E2); /* call 0x003370E2 */

loc_0033729C: ;
    esi = eax;

loc_0033729E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x4181C8); PUSH32(esp, 0x003372ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003372A7u); } /* indirect call */
    }

loc_003372AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003372C0; /* jl: less (signed <) */

loc_003372B1: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003372C9; /* je: equal / zero */

loc_003372B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x101 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033729E; /* je: equal / zero */

loc_003372BE: ;
    goto loc_003372C9;

loc_003372C0: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003372C6u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_003372C6: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003372C9: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003372CE
 * Original: 0x003372CE - 0x0033734E (128 bytes, 48 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00281BC3, between)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003372CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003372CE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003372EE; /* jbe: below or equal (unsigned <=) */

loc_003372DF: ;
    PUSH32(esp, 0xC000000Du);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003372E9u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_003372E9: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0033734A;

loc_003372EE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -8;
    edi = ebp + -264;
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
    PUSH32(esp, 0x00337308u); RECOMP_ABI_CALL(0x003370E2u, sub_003370E2); /* call 0x003370E2 */

loc_00337308: ;
    esi = (uint32_t)(int32_t)SMEM8(ebp + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ebx (32-bit) */
    edi = eax;
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */

loc_00337316: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = ebp + -264;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x4181CC); PUSH32(esp, 0x0033732Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337325u); } /* indirect call */
    }

loc_0033732B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033733E; /* jl: less (signed <) */

loc_0033732F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337347; /* je: equal / zero */

loc_00337335: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x101 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337316; /* je: equal / zero */

loc_0033733C: ;
    goto loc_00337347;

loc_0033733E: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337344u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00337344: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00337347: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0033734A: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0033734E
 * Original: 0x0033734E - 0x003373A0 (82 bytes, 32 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00281C43, between)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033734E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033734E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337360u); RECOMP_ABI_CALL(0x003370E2u, sub_003370E2); /* call 0x003370E2 */

loc_00337360: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00337373; /* jne: not equal / not zero */

loc_00337366: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = 0x80000000u;
    esi = ebp + -8;

loc_00337373: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(0x4181D0); PUSH32(esp, 0x0033737Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337379u); } /* indirect call */
    }

loc_0033737F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033738C; /* je: equal / zero */

loc_00337385: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x101 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337373; /* je: equal / zero */

loc_0033738C: ;
    ecx = 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0033739A; /* jne: not equal / not zero */

loc_00337396: ;
    eax = ecx;
    goto loc_0033739C;

loc_0033739A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033739C: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003373A0
 * Original: 0x003373A0 - 0x003373B2 (18 bytes, 5 insns)
 * Folder: xdk/xapi (between: 0x0033734E and 0x00337414)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003373A0(void)
{

loc_003373A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x003373AFu); RECOMP_ABI_CALL(0x0033728Au, sub_0033728A); /* call 0x0033728A */

loc_003373AF: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003373B2
 * Original: 0x003373B2 - 0x003373CC (26 bytes, 7 insns)
 * Folder: xdk/xapi (between: 0x0033734E and 0x00337414)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003373B2(void)
{

loc_003373B2: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x003373C9u); RECOMP_ABI_CALL(0x003372CEu, sub_003372CE); /* call 0x003372CE */

loc_003373C9: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003373CC
 * Original: 0x003373CC - 0x003373DA (14 bytes, 4 insns)
 * Folder: xdk/xapi (between: 0x0033734E and 0x00337414)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003373CC(void)
{

loc_003373CC: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x003373D7u); RECOMP_ABI_CALL(0x0033734Eu, sub_0033734E); /* call 0x0033734E */

loc_003373D7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003373DA
 * Original: 0x003373DA - 0x00337402 (40 bytes, 20 insns)
 * Folder: xdk/xapi (between: 0x0033734E and 0x00337414)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003373DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003373DA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x104);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003373F5u); RECOMP_ABI_CALL(0x0033A2F8u, sub_0033A2F8); /* call 0x0033A2F8 */

loc_003373F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003373FE; /* jl: less (signed <) */

loc_003373F9: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_003373FE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00337410
 * Original: 0x00337410 - 0x00337414 (4 bytes, 2 insns)
 * Folder: xdk/xapi (between: 0x0033734E and 0x00337414)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337410: ;
    { uint32_t _bs_v = (uint32_t)(ecx); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsf: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 0; _bs_i < 32; _bs_i++)
          if (_bs_v & (1u << _bs_i)) break;
        eax = (uint32_t)_bs_i;;
      } else { (void)(eax); } }
    esp += 4; return; /* ret */

}

/**
 * sub_00337414
 * Original: 0x00337414 - 0x0033748C (120 bytes, 43 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00280675, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00337414(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337414: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800021);
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 3);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -12) = 0x40;
    { uint32_t _icall_target = MEM32(0x418088); PUSH32(esp, 0x0033744Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337444u); } /* indirect call */
    }

loc_0033744A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00337485; /* jl: less (signed <) */

loc_00337450: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, 0x18);
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x418134); PUSH32(esp, 0x00337465u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033745Fu); } /* indirect call */
    }

loc_00337465: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    { uint32_t _icall_target = MEM32(0x418080); PUSH32(esp, 0x00337470u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033746Au); } /* indirect call */
    }

loc_00337470: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00337485; /* jl: less (signed <) */

loc_00337474: ;
    eax = MEM32(ebp + -28);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -24));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337485; /* je: equal / zero */

loc_00337480: ;
    esi = 0xC000014Fu;

loc_00337485: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0033748C
 * Original: 0x0033748C - 0x00337573 (231 bytes, 94 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x002806ED, between)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033748C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033748C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = edi;
    esi = eax + 1;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033749F: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033749F; /* jne: not equal / not zero */

loc_003374A6: ;
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    esi = eax + edi;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003374BAu); RECOMP_ABI_CALL(0x0033165Fu, sub_0033165F); /* call 0x0033165F */

loc_003374BA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x41808C); PUSH32(esp, 0x003374C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003374BFu); } /* indirect call */
    }

loc_003374C5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    eax = ebp + -16;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, ebx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40100000);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = ebx;
    MEM32(ebp + -20) = 0x40;
    { uint32_t _icall_target = MEM32(0x418090); PUSH32(esp, 0x003374F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003374EFu); } /* indirect call */
    }

loc_003374F5: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM8(esi) = LO8(ebx);
    if (CMP_L(_fas, _fbs)) goto loc_00337560; /* jl: less (signed <) */

loc_003374FD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -84;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(0x4180A0); PUSH32(esp, 0x00337512u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033750Cu); } /* indirect call */
    }

loc_00337512: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00337555; /* jl: less (signed <) */

loc_00337518: ;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00337555; /* jne: not equal / not zero */

loc_0033751D: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00337555; /* jne: not equal / not zero */

loc_00337522: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033752Au); RECOMP_ABI_CALL(0x00338043u, sub_00338043); /* call 0x00338043 */

loc_0033752A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337555; /* je: equal / zero */

loc_00337530: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337539u); RECOMP_ABI_CALL(0x00338082u, sub_00338082); /* call 0x00338082 */

loc_00337539: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(0x418098); PUSH32(esp, 0x0033754Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337545u); } /* indirect call */
    }

loc_0033754B: ;
    PUSH32(esp, MEM32(ebp + 8));
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337555u); RECOMP_ABI_CALL(0x00338064u, sub_00338064); /* call 0x00338064 */

loc_00337555: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(0x418080); PUSH32(esp, 0x0033755Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337558u); } /* indirect call */
    }

loc_0033755E: ;
    goto loc_0033756A;

loc_00337560: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000035u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC0000035u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033756A; /* jne: not equal / not zero */

loc_00337568: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0033756A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00337573
 * Original: 0x00337573 - 0x003378A7 (820 bytes, 271 insns)
 * Folder: xdk/xapi (string: \TitleMeta.xbx)
 * Category: game_io
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00337573(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337573: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x284) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x284;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x4021);
    PUSH32(esp, 3);
    PUSH32(esp, 3);
    edi = 0x80;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + -4;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -8) = 0x40;
    MEM32(ebp + -12) = esi;
    { uint32_t _icall_target = MEM32(0x418090); PUSH32(esp, 0x003375B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003375B2u); } /* indirect call */
    }

loc_003375B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003375CA; /* jl: less (signed <) */

loc_003375BF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x418080); PUSH32(esp, 0x003375C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003375C2u); } /* indirect call */
    }

loc_003375C8: ;
    goto loc_003375D4;

loc_003375CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000103u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000103u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003375D4; /* jne: not equal / not zero */

loc_003375D1: ;
    MEM32(ebp + 0xC) = ebx;

loc_003375D4: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033789D; /* jl: less (signed <) */

loc_003375DD: ;
    eax = MEM32(esi + 4);
    edx = ebp + -360;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003375E8: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003375E8; /* jne: not equal / not zero */

loc_003375F2: ;
    SET_LO16(ecx, MEM16(esi));
    eax = ZX16(LO16(ecx));
    eax = ebp + eax + -360;
    _fa = (uint32_t)(MEM8(eax + -1)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -1), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033760A; /* je: equal / zero */

loc_00337605: ;
    MEM8(eax) = 0x5C;
    goto loc_0033760E;

loc_0033760A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi) = LO16(ecx);

loc_0033760E: ;
    eax = ZX16(MEM16(esi));
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + eax + -359;

loc_0033761D: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033761D; /* jne: not equal / not zero */

loc_00337627: ;
    eax = ebp + -360;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x41808C); PUSH32(esp, 0x00337638u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337632u); } /* indirect call */
    }

loc_00337638: ;
    eax = ebp + -36;
    MEM32(ebp + -12) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), ebx (32-bit) */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4021);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -8) = 0x40;
    eax = eax + eax + 1;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x120117);
    eax = ebp + -4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x418090); PUSH32(esp, 0x00337675u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033766Fu); } /* indirect call */
    }

loc_00337675: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0033789D; /* jl: less (signed <) */

loc_00337680: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003376AE; /* je: equal / zero */

loc_00337685: ;
    PUSH32(esp, 0xA);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -84;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + -68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x418194); PUSH32(esp, 0x00337699u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337693u); } /* indirect call */
    }

loc_00337699: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x28);
    eax = ebp + -84;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x418094); PUSH32(esp, 0x003376AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003376A8u); } /* indirect call */
    }

loc_003376AE: ;
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033787F; /* je: equal / zero */

loc_003376B9: ;
    PUSH32(esp, 0x418908);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003376C3u); RECOMP_ABI_CALL(0x00337FDCu, sub_00337FDC); /* call 0x00337FDC */

loc_003376C3: ;
    PUSH32(esp, 0x4188FC);
    MEM32(ebp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003376D0u); RECOMP_ABI_CALL(0x00337FDCu, sub_00337FDC); /* call 0x00337FDC */

loc_003376D0: ;
    PUSH32(esp, 0x4188F0);
    MEM32(ebp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003376DDu); RECOMP_ABI_CALL(0x00337FDCu, sub_00337FDC); /* call 0x00337FDC */

loc_003376DD: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xFFFFFFFFu (32-bit) */
    MEM32(ebp + -28) = eax;
    edi = 0x104;
    if (CMP_NE(_fa, _fb)) goto loc_003376F4; /* jne: not equal / not zero */

loc_003376EB: ;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337839; /* je: equal / zero */

loc_003376F4: ;
    eax = ebp + -360;
    esi = eax + 1;

loc_003376FD: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003376FD; /* jne: not equal / not zero */

loc_00337704: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    esi = ebp + eax + -360;
    PUSH32(esp, 0x418824);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033771Du); RECOMP_ABI_CALL(0x0033165Fu, sub_0033165F); /* call 0x0033165F */

loc_0033771D: ;
    eax = ebp + -360;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x41808C); PUSH32(esp, 0x0033772Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337728u); } /* indirect call */
    }

loc_0033772E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    eax = ebp + -44;
    MEM32(ebp + -12) = eax;
    PUSH32(esp, ebx);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40100000);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -8) = 0x40;
    { uint32_t _icall_target = MEM32(0x418090); PUSH32(esp, 0x0033775Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337758u); } /* indirect call */
    }

loc_0033775E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0xC) = eax;
    MEM8(esi) = LO8(ebx);
    if (CMP_L(_fas, _fbs)) goto loc_0033782F; /* jl: less (signed <) */

loc_0033776B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x38);
    eax = ebp + -100;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    { uint32_t _icall_target = MEM32(0x4180A0); PUSH32(esp, 0x00337780u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033777Au); } /* indirect call */
    }

loc_00337780: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00337824; /* jl: less (signed <) */

loc_0033778B: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00337824; /* jne: not equal / not zero */

loc_00337794: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00337824; /* jne: not equal / not zero */

loc_0033779D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003377D9; /* je: equal / zero */

loc_003377A3: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003377ABu); RECOMP_ABI_CALL(0x00338043u, sub_00338043); /* call 0x00338043 */

loc_003377AB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003377D9; /* je: equal / zero */

loc_003377B1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003377BAu); RECOMP_ABI_CALL(0x00338082u, sub_00338082); /* call 0x00338082 */

loc_003377BA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    { uint32_t _icall_target = MEM32(0x418098); PUSH32(esp, 0x003377CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003377C6u); } /* indirect call */
    }

loc_003377CC: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003377D7u); RECOMP_ABI_CALL(0x00338064u, sub_00338064); /* call 0x00338064 */

loc_003377D7: ;
    goto loc_00337824;

loc_003377D9: ;
    PUSH32(esp, 0x4188C8);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = ebp + -644;
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0x418884);
    PUSH32(esp, 0xFEFF);
    PUSH32(esp, 0x418738);
    PUSH32(esp, 0x8E);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337803u); RECOMP_ABI_CALL(0x00347EC5u, sub_00347EC5); /* call 0x00347EC5 */

loc_00337803: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = ebp + -644;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    { uint32_t _icall_target = MEM32(0x418098); PUSH32(esp, 0x00337821u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033781Bu); } /* indirect call */
    }

loc_00337821: ;
    MEM32(ebp + 0xC) = eax;

loc_00337824: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    { uint32_t _icall_target = MEM32(0x418080); PUSH32(esp, 0x0033782Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337827u); } /* indirect call */
    }

loc_0033782D: ;
    goto loc_00337839;

loc_0033782F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000035u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000035u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00337839; /* jne: not equal / not zero */

loc_00337836: ;
    MEM32(ebp + 0xC) = ebx;

loc_00337839: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033787F; /* jl: less (signed <) */

loc_0033783E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033785C; /* je: equal / zero */

loc_00337844: ;
    PUSH32(esp, 0x418838);
    PUSH32(esp, edi);
    eax = ebp + -360;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337859u); RECOMP_ABI_CALL(0x0033748Cu, sub_0033748C); /* call 0x0033748C */

loc_00337859: ;
    MEM32(ebp + 0xC) = eax;

loc_0033785C: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033787F; /* jl: less (signed <) */

loc_00337861: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033787F; /* je: equal / zero */

loc_00337867: ;
    PUSH32(esp, 0x41884C);
    PUSH32(esp, edi);
    eax = ebp + -360;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033787Cu); RECOMP_ABI_CALL(0x0033748Cu, sub_0033748C); /* call 0x0033748C */

loc_0033787C: ;
    MEM32(ebp + 0xC) = eax;

loc_0033787F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -4));
    { uint32_t _icall_target = MEM32(0x418080); PUSH32(esp, 0x00337888u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337882u); } /* indirect call */
    }

loc_00337888: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0033789D; /* jl: less (signed <) */

loc_0033788D: ;
    eax = ebp + -36;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x41819C); PUSH32(esp, 0x0033789Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337894u); } /* indirect call */
    }

loc_0033789A: ;
    MEM32(ebp + 0xC) = eax;

loc_0033789D: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003378A7
 * Original: 0x003378A7 - 0x003378FC (85 bytes, 29 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00280B08, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003378A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003378A7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -12;
    PUSH32(esp, 0x418914);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003378BEu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_003378BE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x42C828);
    PUSH32(esp, 0x42C820);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003378DAu); RECOMP_ABI_CALL(0x00337573u, sub_00337573); /* call 0x00337573 */

loc_003378DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003378F8; /* jl: less (signed <) */

loc_003378DE: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -12;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x42C838);
    PUSH32(esp, 0x42C830);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003378F8u); RECOMP_ABI_CALL(0x00337573u, sub_00337573); /* call 0x00337573 */

loc_003378F8: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003378FC
 * Original: 0x003378FC - 0x00337961 (101 bytes, 28 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00280B5D, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003378FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003378FC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC00;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x10118);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFE0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0xFFFE0000u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337958; /* je: equal / zero */

loc_00337913: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x300;
    edi = ebp + -3072;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 8);
    MEM32(ebp + -3068) = MEM32(ebp + -3068) & 0;
    _fa = (uint32_t)(MEM32(ebp + -3068)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -3072) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -3064) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -3060) = eax;
    eax = ebp + -3072;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337953u); RECOMP_ABI_CALL(0x00332093u, sub_00332093); /* call 0x00332093 */

loc_00337953: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_00337958: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(0x41810C); PUSH32(esp, 0x00337960u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033795Au); } /* indirect call */
    }

loc_00337960: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00337961
 * Original: 0x00337961 - 0x00337A18 (183 bytes, 63 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00280BC2, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00337961(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00337961: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x88));
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x10118);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x7C);
    ecx = MEM32(ebx + 0x4AB);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0033798A; /* je: equal / zero */

loc_00337980: ;
    eax = 0xC0000156u;
    goto loc_00337A10;

loc_0033798A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -20;
    PUSH32(esp, eax);
    MEM32(ebp + 0x7C) = 0x4CB;
    PUSH32(esp, 0x0033799Cu); RECOMP_ABI_CALL(0x0033A2F2u, sub_0033A2F2); /* call 0x0033A2F2 */

loc_0033799C: ;
    PUSH32(esp, 4);
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003379ABu); RECOMP_ABI_CALL(0x0033A2ECu, sub_0033A2EC); /* call 0x0033A2EC */

loc_003379AB: ;
    PUSH32(esp, MEM32(ebp + 0x7C));
    eax = ebx + 4;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003379BBu); RECOMP_ABI_CALL(0x0033A2ECu, sub_0033A2EC); /* call 0x0033A2EC */

loc_003379BB: ;
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003379C8u); RECOMP_ABI_CALL(0x0033A2E6u, sub_0033A2E6); /* call 0x0033A2E6 */

loc_003379C8: ;
    PUSH32(esp, 0x14);
    POP32(esp, ecx);
    edi = ebx + 0x4CF;
    esi = ebp + 0x60;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_flags != 0)) goto loc_003379E1; /* je: equal / zero */

loc_003379DC: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_003379E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003379EC; /* je: equal / zero */

loc_003379E5: ;
    eax = 0xC0000190u;
    goto loc_00337A10;

loc_003379EC: ;
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x4181D8));
    _fb = (uint32_t)(0x4E3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x4E3)) >> 32) & 1);
    ebx = ebx + 0x4E3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00337A02u); RECOMP_ABI_CALL(0x0033A2FEu, sub_0033A2FE); /* call 0x0033A2FE */

loc_00337A02: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x3FFFFE70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC0000190u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC0000190u)) >> 32) & 1);
    eax = eax + 0xC0000190u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00337A10: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x74)) >> 32) & 1);
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337A18
 * Original: 0x00337A18 - 0x00337BE1 (457 bytes, 159 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00280C79, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00337A18(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337A18: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x6CC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x6CC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x10118);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x1D8 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00337A39; /* jbe: below or equal (unsigned <=) */

loc_00337A31: ;
    ecx = MEM32(eax + 0x1D8);
    goto loc_00337A3B;

loc_00337A39: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00337A3B: ;
    eax = MEM32(0x10118);
    eax = MEM32(eax + 0x9C);
    MEM32(ebp + -8) = ecx;
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00337A57; /* je: equal / zero */

loc_00337A54: ;
    PUSH32(esp, 2);
    POP32(esp, eax);

loc_00337A57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337A63; /* je: equal / zero */

loc_00337A5C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00337BDE;

loc_00337A63: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, 1);
    eax = ebp + -64;
    PUSH32(esp, eax);
    eax = ebp + -76;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80100000u);
    eax = ebp + -12;
    PUSH32(esp, eax);
    MEM32(ebp + -76) = ebx;
    MEM32(ebp + -68) = 0x40;
    MEM32(ebp + -72) = 0x42C810;
    { uint32_t _icall_target = MEM32(0x418088); PUSH32(esp, 0x00337A8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337A89u); } /* indirect call */
    }

loc_00337A8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00337BDE; /* jl: less (signed <) */

loc_00337A97: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xB);
    POP32(esp, ecx);
    esi = MEM32(0x418140);
    edi = ebp + -56;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + -104;
    MEM32(ebp + -36) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ebp + -56) = 0x2C;
    MEM8(ebp + -48) = 1;
    MEM32(ebp + -44) = 0x1C;
    edi = ebp + -28;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    SET_LO8(eax, MEM8(ebp + -26));
    SET_LO8(eax, LO8(eax) & 0xFE);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) | 0x3E);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 7);
    MEM8(ebp + -26) = LO8(eax);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -104;
    MEM8(ebp + -28) = 0x5A;
    MEM16(ebp + -21) = 0x1C00;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(ebp + -4) = ebx;

loc_00337AEA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2C);
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4D014);
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -12));
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00337B03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337B01u); } /* indirect call */
    }

loc_00337B03: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00337BD1; /* jl: less (signed <) */

loc_00337B0D: ;
    _fa = (uint32_t)(MEM8(ebp + -93)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -93), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337B1A; /* je: equal / zero */

loc_00337B13: ;
    edi = 0xC0000014u;
    goto loc_00337B29;

loc_00337B1A: ;
    _fa = (uint32_t)(MEM8(ebp + -94)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -94), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337B24; /* je: equal / zero */

loc_00337B1F: ;
    _fa = (uint32_t)(MEM8(ebp + -92)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -92), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00337B34; /* jne: not equal / not zero */

loc_00337B24: ;
    edi = 0xC0000001u;

loc_00337B29: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00337AEA; /* jl: less (signed <) */

loc_00337B32: ;
    goto loc_00337B36;

loc_00337B34: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00337B36: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00337BD1; /* jl: less (signed <) */

loc_00337B3E: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337BD1; /* je: equal / zero */

loc_00337B47: ;
    MEM32(ebp + -4) = ebx;

loc_00337B4A: ;
    PUSH32(esp, 0xB);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -56;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + -1740;
    MEM32(ebp + -36) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ebp + -56) = 0x2C;
    MEM8(ebp + -48) = 1;
    MEM32(ebp + -44) = 0x664;
    edi = ebp + -28;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, 0x2C);
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4D014);
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -12));
    MEM8(ebp + -28) = 0xAD;
    MEM16(ebp + -20) = 0x6406;
    MEM32(ebp + -26) = 0xFFFD02FFu;
    MEM8(ebp + -22) = 0xFE;
    MEM8(ebp + -21) = LO8(ebx);
    MEM8(ebp + -17) = 0xC0;
    { uint32_t _icall_target = esi; PUSH32(esp, 0x00337BACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337BAAu); } /* indirect call */
    }

loc_00337BAC: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00337BD1; /* jl: less (signed <) */

loc_00337BB2: ;
    eax = ebp + -1740;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337BBEu); RECOMP_ABI_CALL(0x00337961u, sub_00337961); /* call 0x00337961 */

loc_00337BBE: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00337BD1; /* jge: greater or equal (signed >=) */

loc_00337BC4: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00337B4A; /* jl: less (signed <) */

loc_00337BD1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -12));
    { uint32_t _icall_target = MEM32(0x418080); PUSH32(esp, 0x00337BDAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337BD4u); } /* indirect call */
    }

loc_00337BDA: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00337BDE: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00337BE1
 * Original: 0x00337BE1 - 0x00337BF2 (17 bytes, 4 insns)
 * Folder: xdk/xapi (between: 0x00337A18 and 0x00337BF2)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337BE1(void)
{

loc_00337BE1: ;
    PUSH32(esp, 0x4000);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00337BEFu); RECOMP_ABI_CALL(0x00337414u, sub_00337414); /* call 0x00337414 */

loc_00337BEF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00337BF2
 * Original: 0x00337BF2 - 0x00337D6F (381 bytes, 133 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00280E53, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00337BF2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337BF2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x42C850);
    MEM32(ebp + -4) = esi;
    { uint32_t _icall_target = MEM32(0x4181DC); PUSH32(esp, 0x00337C0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337C09u); } /* indirect call */
    }

loc_00337C0F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337C14u); RECOMP_ABI_CALL(0x00337F46u, sub_00337F46); /* call 0x00337F46 */

loc_00337C14: ;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -52;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + -52;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(ebp + -52) = 0x30;
    PUSH32(esp, MEM32(0x10138));
    PUSH32(esp, MEM32(0x10134));
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337C40u); RECOMP_ABI_CALL(0x00334192u, sub_00334192); /* call 0x00334192 */

loc_00337C40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(0x76C1A0) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00337CA7; /* je: equal / zero */

loc_00337C49: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337C4Eu); RECOMP_ABI_CALL(0x00337A18u, sub_00337A18); /* call 0x00337A18 */

loc_00337C4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    goto loc_00337C57;

    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    goto loc_00337C78;

loc_00337C57: ;
    _fa = (uint32_t)(MEM8(0x10124)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x10124), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00337C82; /* jne: not equal / not zero */

loc_00337C60: ;
    PUSH32(esp, 0x42C818);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337C6Au); RECOMP_ABI_CALL(0x00337BE1u, sub_00337BE1); /* call 0x00337BE1 */

loc_00337C6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00337C82; /* jge: greater or equal (signed >=) */

loc_00337C6E: ;
    PUSH32(esp, 2);

loc_00337C70: ;
    eax = ebx;
    POP32(esp, ecx);

loc_00337C73: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);

loc_00337C78: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337C7Du); RECOMP_ABI_CALL(0x003378FCu, sub_003378FC); /* call 0x003378FC */

loc_00337C7D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00337C82: ;
    eax = MEM32(0x418198);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00337CAD; /* jne: not equal / not zero */

loc_00337C8C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x42C810);
    PUSH32(esp, 0x42C808);
    { uint32_t _icall_target = MEM32(0x41819C); PUSH32(esp, 0x00337C9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337C96u); } /* indirect call */
    }

loc_00337C9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00337CAD; /* jge: greater or equal (signed >=) */

loc_00337CA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000035u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000035u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337CAD; /* je: equal / zero */

loc_00337CA7: ;
    eax = ebx;
    ecx = ebx;
    goto loc_00337C73;

loc_00337CAD: ;
    _fa = (uint32_t)(MEM8(0x10124)) & 0xFFu; _fb = (uint32_t)(0x18) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x10124), 0x18 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00337CE1; /* jne: not equal / not zero */

loc_00337CB6: ;
    eax = MEM32(0x10118);
    ecx = eax + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337CC7u); RECOMP_ABI_CALL(0x003378A7u, sub_003378A7); /* call 0x003378A7 */

loc_00337CC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00337CE1; /* jge: greater or equal (signed >=) */

loc_00337CCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000007Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC000007Fu (32-bit) */
    PUSH32(esp, 2);
    if (CMP_NE(_fa, _fb)) goto loc_00337C70; /* jne: not equal / not zero */

loc_00337CD4: ;
    POP32(esp, eax);
    PUSH32(esp, 0x54);
    POP32(esp, ecx);
    MEM32(ebp + -4) = 0x10;
    goto loc_00337C73;

loc_00337CE1: ;
    eax = MEM32(0x10124);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00337D04; /* jne: not equal / not zero */

loc_00337CEA: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00337D04; /* je: equal / zero */

loc_00337CEE: ;
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337CF7u); RECOMP_ABI_CALL(0x003383D0u, sub_003383D0); /* call 0x003383D0 */

loc_00337CF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00337D04; /* jne: not equal / not zero */

loc_00337CFB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337D04u); RECOMP_ABI_CALL(0x003378FCu, sub_003378FC); /* call 0x003378FC */

loc_00337D04: ;
    eax = MEM32(0x10118);
    edi = MEM32(eax + 0xA4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337D14u); RECOMP_ABI_CALL(0x0033808Cu, sub_0033808C); /* call 0x0033808C */

loc_00337D14: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00337D25; /* jae: above or equal (unsigned >=) */

loc_00337D18: ;
    PUSH32(esp, 4);
    eax = ebx;
    POP32(esp, ecx);
    MEM32(ebp + -4) = edi;
    goto loc_00337C73;

loc_00337D25: ;
    eax = MEM32(0x418100);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337D45; /* je: equal / zero */

loc_00337D2E: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337D45; /* je: equal / zero */

loc_00337D34: ;
    esi = eax;
    eax = esi + 0x214;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00337D45; /* je: equal / zero */

loc_00337D40: ;
    eax = MEM32(eax + 4);
    MEM32(esi) = eax;

loc_00337D45: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337D4Au); RECOMP_ABI_CALL(0x0033608Du, sub_0033608D); /* call 0x0033608D */

loc_00337D4A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337C7D; /* je: equal / zero */

loc_00337D52: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00337C7D; /* jne: not equal / not zero */

loc_00337D5B: ;
    eax = MEM32(0x418100);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x418104); PUSH32(esp, 0x00337D6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337D64u); } /* indirect call */
    }

loc_00337D6A: ;
    goto loc_00337C7D;

}

/**
 * sub_00337D6F
 * Original: 0x00337D6F - 0x00337DC7 (88 bytes, 37 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00280FD0, between)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337D6F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337D6F: ;
    eax = MEM32(0x42CFF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337D7A; /* je: equal / zero */

loc_00337D78: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00337D7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337D78u); } /* indirect call */
    }

loc_00337D7A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x42C2EC;
    edi = 0x42C304;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00337DA0; /* jae: above or equal (unsigned >=) */

loc_00337D8C: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337D99; /* je: equal / zero */

loc_00337D92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337D99; /* je: equal / zero */

loc_00337D97: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00337D99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337D97u); } /* indirect call */
    }

loc_00337D99: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00337D8C; /* jb: below (unsigned <) */

loc_00337DA0: ;
    esi = 0x42C1F0;
    eax = esi;
    edi = 0x42C2E8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00337DC4; /* jae: above or equal (unsigned >=) */

loc_00337DB0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337DBD; /* je: equal / zero */

loc_00337DB6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337DBD; /* je: equal / zero */

loc_00337DBB: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00337DBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337DBBu); } /* indirect call */
    }

loc_00337DBD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00337DB0; /* jb: below (unsigned <) */

loc_00337DC4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00337DC7
 * Original: 0x00337DC7 - 0x00337DF0 (41 bytes, 19 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00281028, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337DC7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337DC7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x42C1E0;
    edi = 0x42C1EC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00337DED; /* jae: above or equal (unsigned >=) */

loc_00337DD9: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337DE6; /* je: equal / zero */

loc_00337DDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337DE6; /* je: equal / zero */

loc_00337DE4: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00337DE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337DE4u); } /* indirect call */
    }

loc_00337DE6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00337DD9; /* jb: below (unsigned <) */

loc_00337DED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00337DF0
 * Original: 0x00337DF0 - 0x00337E54 (100 bytes, 33 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00281051, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00337DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337DF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(0x8001003Cu);
    edx = 0x7FFF0000;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ZX16(MEM16(eax + 6));
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 0x14));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ecx * 4;
    eax = esi + ecx * 8 + -16;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x54494E49) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x54494E49 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00337E52; /* jne: not equal / not zero */

loc_00337E1C: ;
    eax = MEM32(eax + 0xC);
    MEM16(ebp + -6) = MEM16(ebp + -6) & 0;
    _fa = (uint32_t)(MEM16(ebp + -6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | 0xC09B00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    MEM16(ebp + -8) = LO16(eax);
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337E47u); RECOMP_ABI_CALL(0x003385E8u, sub_003385E8); /* call 0x003385E8 */

loc_00337E47: ;
    MEM32(0x76C190) = eax;
    MEM32(0x76C194) = edx;

loc_00337E52: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00337E54
 * Original: 0x00337E54 - 0x00337F19 (197 bytes, 66 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x002810B5, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337E54(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00337E54: ;
    eax = MEM32(0x418198);
    eax = MEM32(eax);
    ecx = MEM32(0x4181E0);
    ecx = ZX16(MEM16(ecx + 4));
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, ~LO8(eax));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF68 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00337EBF; /* je: equal / zero */

loc_00337E74: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFC2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFC2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00337EB4; /* je: equal / zero */

loc_00337E7C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFC7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFC7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00337EA4; /* je: equal / zero */

loc_00337E84: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12D0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12D0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00337F03; /* jle: less or equal (signed <=) */

loc_00337E8C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12D2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12D2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00337F03; /* jg: greater (signed >) */

loc_00337E94: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF1611u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8003838Fu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8003838Fu)) >> 32) & 1);
    eax = eax + 0x8003838Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00337ECD;

loc_00337EA4: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF12CBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x800398CDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x800398CDu)) >> 32) & 1);
    eax = eax + 0x800398CDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00337ECD;

loc_00337EB4: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x8002AB88u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00337ECD;

loc_00337EBF: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF1471u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x80039749u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80039749u)) >> 32) & 1);
    eax = eax + 0x80039749u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00337ECD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00337F03; /* je: equal / zero */

loc_00337ED3: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20C5048D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x20C5048D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00337F03; /* jne: not equal / not zero */

loc_00337EDB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x418168); PUSH32(esp, 0x00337EE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337EDEu); } /* indirect call */
    }

loc_00337EE4: ;
    edi = MEM32(0x418164);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    ebx = eax;
    { uint32_t _icall_target = edi; PUSH32(esp, 0x00337EF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337EF1u); } /* indirect call */
    }

loc_00337EF3: ;
    RECOMP_UNIMPL("cli", 0x00337EF3u); /* TODO: cli */
    MEM32(esi) = 0x28C5048D;
    RECOMP_UNIMPL("sti", 0x00337EFAu); /* TODO: sti */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x00337F01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337EFFu); } /* indirect call */
    }

loc_00337F01: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00337F03: ;
    eax = MEM32(XBOX_FS_BASE + 0x20);
    _fa = (uint32_t)(MEM32(eax + 0x250)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x250), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00337F18; /* jne: not equal / not zero */

loc_00337F13: ;
    g_seh_ebp = ebp; sub_00337DF0(); return; /* tail jmp 0x00337DF0 */

loc_00337F18: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00337F19
 * Original: 0x00337F19 - 0x00337F34 (27 bytes, 9 insns)
 * Folder: xdk/xapi (between: 0x00337E54 and 0x00337F46)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337F19(void)
{

loc_00337F19: ;
    PUSH32(esp, 0xFFFFFFCDu);
    POP32(esp, ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x76C140);
    PUSH32(esp, ecx);
    eax = 0xB5659000u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x76C160);
    { uint32_t _icall_target = MEM32(0x41816C); PUSH32(esp, 0x00337F33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337F2Du); } /* indirect call */
    }

loc_00337F33: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00337F34
 * Original: 0x00337F34 - 0x00337F46 (18 bytes, 4 insns)
 * Folder: xdk/xapi (between: 0x00337E54 and 0x00337F46)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00337F34(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337F34: ;
    _fa = (uint32_t)(MEM32(0x76C188)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x76C188), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00337F43; /* je: equal / zero */

loc_00337F3D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x4181E4); PUSH32(esp, 0x00337F43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337F3Du); } /* indirect call */
    }

loc_00337F43: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00337F46
 * Original: 0x00337F46 - 0x00337FBA (116 bytes, 34 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00281CFC, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00337F46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337F46: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x337F34);
    PUSH32(esp, 0x76C140);
    { uint32_t _icall_target = MEM32(0x4180C4); PUSH32(esp, 0x00337F5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337F58u); } /* indirect call */
    }

loc_00337F5E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x76C160);
    { uint32_t _icall_target = MEM32(0x4180C0); PUSH32(esp, 0x00337F6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337F65u); } /* indirect call */
    }

loc_00337F6B: ;
    eax = MEM32(0x418198);
    MEM32(0x76C188) = MEM32(0x76C188) & 0;
    _fa = (uint32_t)(MEM32(0x76C188)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x76C18C) = MEM32(0x76C18C) & 0;
    _fa = (uint32_t)(MEM32(0x76C18C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00337FB3; /* jne: not equal / not zero */

loc_00337F83: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337F98u); RECOMP_ABI_CALL(0x00337FBAu, sub_00337FBA); /* call 0x00337FBA */

loc_00337F98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00337FA9; /* jne: not equal / not zero */

loc_00337F9C: ;
    eax = MEM32(ebp + -4);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x76C188) = eax;
    goto loc_00337FB3;

loc_00337FA9: ;
    MEM32(0x76C18C) = 1;

loc_00337FB3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00337FB8u); RECOMP_ABI_CALL(0x00337F19u, sub_00337F19); /* call 0x00337F19 */

loc_00337FB8: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00337FDC
 * Original: 0x00337FDC - 0x00338043 (103 bytes, 41 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00281D70, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00337FDC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00337FDC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x41808C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -16;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00337FF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00337FF2u); } /* indirect call */
    }

loc_00337FF4: ;
    esi = MEM32(0x1011C);
    edi = MEM32(0x10120);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00338027;

loc_00338007: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edi + 0x14));
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00338010u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033800Eu); } /* indirect call */
    }

loc_00338010: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x4181FC); PUSH32(esp, 0x00338020u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0033801Au); } /* indirect call */
    }

loc_00338020: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033803F; /* jne: not equal / not zero */

loc_00338024: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x38;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00338027: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00338007; /* jb: below (unsigned <) */

loc_0033802B: ;
    PUSH32(esp, 0x490);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00338035u); RECOMP_ABI_CALL(0x00332D9Eu, sub_00332D9E); /* call 0x00332D9E */

loc_00338035: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00338038: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_0033803F: ;
    eax = edi;
    goto loc_00338038;

}

/**
 * sub_00338043
 * Original: 0x00338043 - 0x00338064 (33 bytes, 13 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00281DD7, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338043(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00338043: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x418200); PUSH32(esp, 0x0033804Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00338049u); } /* indirect call */
    }

loc_0033804F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033805D; /* jge: greater or equal (signed >=) */

loc_00338053: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00338059u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00338059: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00338060;

loc_0033805D: ;
    eax = MEM32(esi + 4);

loc_00338060: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00338064
 * Original: 0x00338064 - 0x00338082 (30 bytes, 11 insns)
 * Folder: xdk/xapi (between: 0x00338043 and 0x0033808C)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338064(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00338064: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x418204); PUSH32(esp, 0x0033806Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00338068u); } /* indirect call */
    }

loc_0033806E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0033807C; /* jge: greater or equal (signed >=) */

loc_00338072: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00338078u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00338078: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0033807F;

loc_0033807C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0033807F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00338082
 * Original: 0x00338082 - 0x0033808C (10 bytes, 3 insns)
 * Folder: xdk/xapi (between: 0x00338043 and 0x0033808C)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00338082(void)
{

loc_00338082: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 8);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0033808C
 * Original: 0x0033808C - 0x003380B1 (37 bytes, 20 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00281E20, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0033808C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0033808C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003380A4u); RECOMP_ABI_CALL(0x0033A2F8u, sub_0033A2F8); /* call 0x0033A2F8 */

loc_003380A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003380AD; /* jl: less (signed <) */

loc_003380A8: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_003380AD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003380B1
 * Original: 0x003380B1 - 0x003381A5 (244 bytes, 91 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00281E45, between)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003380B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003380B1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x41808C); PUSH32(esp, 0x003380C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003380BEu); } /* indirect call */
    }

loc_003380C4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800021);
    eax = ebp + -8;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, 3);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = 0xFFFFFFFDu;
    MEM32(ebp + -20) = 0x40;
    { uint32_t _icall_target = MEM32(0x418088); PUSH32(esp, 0x003380F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003380F0u); } /* indirect call */
    }

loc_003380F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00338118; /* jge: greater or equal (signed >=) */

loc_003380FA: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00338100u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00338100: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00338105u); RECOMP_ABI_CALL(0x00332D76u, sub_00332D76); /* call 0x00332D76 */

loc_00338105: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00338111; /* jne: not equal / not zero */

loc_0033810A: ;
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00338111u); RECOMP_ABI_CALL(0x00332D9Eu, sub_00332D9E); /* call 0x00332D9E */

loc_00338111: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003381A1;

loc_00338118: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x18);
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x418134); PUSH32(esp, 0x0033812Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00338128u); } /* indirect call */
    }

loc_0033812E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    { uint32_t _icall_target = MEM32(0x418080); PUSH32(esp, 0x00338139u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00338133u); } /* indirect call */
    }

loc_00338139: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00338147; /* jge: greater or equal (signed >=) */

loc_0033813D: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00338143u); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_00338143: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003381A0;

loc_00338147: ;
    esi = MEM32(ebp + -36);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + -32));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -40));
    PUSH32(esp, MEM32(ebp + -44));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033815Fu); RECOMP_ABI_CALL(0x00347B40u, sub_00347B40); /* call 0x00347B40 */

loc_0033815F: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -48));
    ebx = eax;
    PUSH32(esp, MEM32(ebp + -52));
    MEM32(ebp + -4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00338171u); RECOMP_ABI_CALL(0x00347B40u, sub_00347B40); /* call 0x00347B40 */

loc_00338171: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00338180; /* je: equal / zero */

loc_00338178: ;
    esi = MEM32(ebp + -4);
    MEM32(ecx) = ebx;
    MEM32(ecx + 4) = esi;

loc_00338180: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033818C; /* je: equal / zero */

loc_00338187: ;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;

loc_0033818C: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033819B; /* je: equal / zero */

loc_00338193: ;
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ecx;

loc_0033819B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);

loc_003381A0: ;
    POP32(esp, esi);

loc_003381A1: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003381A5
 * Original: 0x003381A5 - 0x003383D0 (555 bytes, 184 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x00281F39, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003381A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003381A5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x22C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x22C));
    esp = esp - 0x22C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x10118);
    eax = MEM32(eax + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 3);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC0100000u);
    eax = ebp + -8;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(ebp + -44) = edi;
    MEM32(ebp + -36) = 0x40;
    MEM32(ebp + -40) = 0x418A24;
    { uint32_t _icall_target = MEM32(0x418088); PUSH32(esp, 0x003381E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003381E2u); } /* indirect call */
    }

loc_003381E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003383C8; /* jl: less (signed <) */

loc_003381F3: ;
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x200);
    eax = ebp + -556;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(ebp + -24) = 0x800;
    MEM32(ebp + -20) = edi;
    { uint32_t _icall_target = MEM32(0x41809C); PUSH32(esp, 0x0033821Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00338217u); } /* indirect call */
    }

loc_0033821D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003383BF; /* jl: less (signed <) */

loc_00338228: ;
    eax = MEM32(0x418208);
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = 0x97315286u;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -556)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -556), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    esi = 0xAA550000u;
    if (CMP_NE(_fa, _fb)) goto loc_00338252; /* jne: not equal / not zero */

loc_00338244: ;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00338252; /* jne: not equal / not zero */

loc_00338249: ;
    _fa = (uint32_t)(MEM32(ebp + -552)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -552), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00338276; /* je: equal / zero */

loc_00338252: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x80;
    edi = ebp + -556;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(ebp + -556) = ebx;
    MEM32(ebp + -552) = 2;
    MEM32(ebp + -52) = esi;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00338276: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 1;
    eax = MEM32(0x418208);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x29 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0033828E; /* jbe: below or equal (unsigned <=) */

loc_0033828B: ;
    PUSH32(esp, 0x29);
    POP32(esp, ecx);

loc_0033828E: ;
    ebx = ecx + -1;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -4) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_003382D4; /* jbe: below or equal (unsigned <=) */

loc_0033829A: ;
    ebx = ebp + -548;

loc_003382A0: ;
    esi = MEM32(ebp + -16);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003382AD; /* jne: not equal / not zero */

loc_003382A7: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003382B7; /* jne: not equal / not zero */

loc_003382AD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xC)) >> 32) & 1);
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003382A0; /* jb: below (unsigned <) */

loc_003382B5: ;
    goto loc_003382D1;

loc_003382B7: ;
    edx = eax + eax * 2;
    edi = MEM32(ebp + edx * 4 + -544);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(3)) >> 32) & 1);
    edi = edi + 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0;
    if ((_fa != 0)) goto loc_00338324; /* jne: not equal / not zero */

loc_003382D1: ;
    ebx = MEM32(ebp + -4);

loc_003382D4: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00338315; /* jbe: below or equal (unsigned <=) */

loc_003382DC: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -544;

loc_003382E6: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003382F3; /* je: equal / zero */

loc_003382EC: ;
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003382FE; /* je: equal / zero */

loc_003382F3: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003382E6; /* jb: below (unsigned <) */

loc_003382FE: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00338309; /* jne: not equal / not zero */

loc_00338303: ;
    edi = MEM32(ebp + 0x10);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(3)) >> 32) & 1);
    edi = edi + 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00338309: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003382DC; /* jb: below (unsigned <) */

loc_00338311: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00338327; /* jne: not equal / not zero */

loc_00338315: ;
    eax = ebx + ebx * 2;
    edi = MEM32(ebp + eax * 4 + -544);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(3)) >> 32) & 1);
    edi = edi + 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00338327;

loc_00338324: ;
    ebx = MEM32(ebp + -4);

loc_00338327: ;
    eax = ecx + 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00338331; /* jb: below (unsigned <) */

loc_0033832E: ;
    edi = ecx + 2;

loc_00338331: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(eax) = edi;
    if (CMP_AE(_fa, _fb)) goto loc_00338359; /* jae: above or equal (unsigned >=) */

loc_00338343: ;
    eax = edx + edx * 2;
    if (2) _cf = (int)(((eax) >> (32 - (2))) & 1);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = ebp + -548;
    PUSH32(esp, eax);
    eax = ebp + -536;
    goto loc_00338372;

loc_00338359: ;
    if (CMP_BE(_fa, _fb)) goto loc_0033837B; /* jbe: below or equal (unsigned <=) */

loc_0033835B: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edx));
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebx + ebx * 2;
    eax = edx + edx * 2;
    if (2) _cf = (int)(((ecx) >> (32 - (2))) & 1);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebp + eax * 4 + -548;
    PUSH32(esp, ecx);
    ecx = eax + 0xC;
    PUSH32(esp, ecx);

loc_00338372: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00338378u); RECOMP_ABI_CALL(0x00346EA0u, sub_00346EA0); /* call 0x00346EA0 */

loc_00338378: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0033837B: ;
    ecx = MEM32(ebp + -16);
    eax = esi + esi * 2;
    eax = ebp + eax * 4 + -548;
    MEM32(eax) = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xFFFFFFFDu)) >> 32) & 1);
    edi = edi + 0xFFFFFFFDu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(eax + 4) = edi;
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(eax + 8) = edx;
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x200);
    eax = ebp + -556;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -8));
    { uint32_t _icall_target = MEM32(0x418098); PUSH32(esp, 0x003383BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003383B7u); } /* indirect call */
    }

loc_003383BD: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003383BF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -8));
    { uint32_t _icall_target = MEM32(0x418080); PUSH32(esp, 0x003383C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003383C2u); } /* indirect call */
    }

loc_003383C8: ;
    eax = MEM32(ebp + -12);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003383D0
 * Original: 0x003383D0 - 0x003384D5 (261 bytes, 97 insns)
 * Folder: xdk/xapi (string: \Device\Harddisk0\Partition%d\)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003383D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003383D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003383ECu); RECOMP_ABI_CALL(0x003381A5u, sub_003381A5); /* call 0x003381A5 */

loc_003383EC: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003384C4; /* jl: less (signed <) */

loc_003383F6: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00338403; /* jne: not equal / not zero */

loc_003383FB: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), ebx (32-bit) */
    MEM32(ebp + 8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0033840A; /* je: equal / zero */

loc_00338403: ;
    MEM32(ebp + 8) = 1;

loc_0033840A: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(0x10124);
    PUSH32(esp, 0x418A04);
    eax = ebp + -276;
    ecx = ecx >> 0x1E;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x104);
    esi = 0x4000;
    PUSH32(esp, eax);
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00338433u); RECOMP_ABI_CALL(0x00347B74u, sub_00347B74); /* call 0x00347B74 */

loc_00338433: ;
    edi = MEM32(0x41808C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -276;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x00338449u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00338447u); } /* indirect call */
    }

loc_00338449: ;
    eax = ebp + -276;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x00338456u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00338454u); } /* indirect call */
    }

loc_00338456: ;
    MEM16(ebp + -8) = MEM16(ebp + -8) - 1;
    _fa = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033846F; /* je: equal / zero */

loc_0033845F: ;
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00338469u); RECOMP_ABI_CALL(0x0033860Du, sub_0033860D); /* call 0x0033860D */

loc_00338469: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003384CC; /* je: equal / zero */

loc_0033846F: ;
    PUSH32(esp, esi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00338479u); RECOMP_ABI_CALL(0x00337414u, sub_00337414); /* call 0x00337414 */

loc_00338479: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003384A3; /* jge: greater or equal (signed >=) */

loc_0033847F: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0033849F; /* jne: not equal / not zero */

loc_00338485: ;
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033848Fu); RECOMP_ABI_CALL(0x0033860Du, sub_0033860D); /* call 0x0033860D */

loc_0033848F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0033849F; /* je: equal / zero */

loc_00338493: ;
    PUSH32(esp, esi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0033849Du); RECOMP_ABI_CALL(0x00337414u, sub_00337414); /* call 0x00337414 */

loc_0033849D: ;
    ebx = eax;

loc_0033849F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003384B4; /* jl: less (signed <) */

loc_003384A3: ;
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4189FC);
    { uint32_t _icall_target = MEM32(0x41819C); PUSH32(esp, 0x003384B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003384ACu); } /* indirect call */
    }

loc_003384B2: ;
    ebx = eax;

loc_003384B4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003384CC; /* jne: not equal / not zero */

loc_003384C1: ;
    PUSH32(esp, ebx);
    goto loc_003384C7;

loc_003384C4: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);

loc_003384C7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003384CCu); RECOMP_ABI_CALL(0x00332DCCu, sub_00332DCC); /* call 0x00332DCC */

loc_003384CC: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00351663
 * Original: 0x00351663 - 0x00351695 (50 bytes, 22 insns)
 * Folder: xdk/xapi (match: xbox-demo 0x0027F785, between)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00351663(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00351663: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    ecx = eax + 1;

loc_00351671: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00351671; /* jne: not equal / not zero */

loc_00351678: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(ebp + -8) = LO16(eax);
    eax = MEM32(ebp + -8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ebp + -6) = LO16(eax);
    ecx = ebp + -8;
    eax = 1;
    recomp_debug_service(eax, ecx); /* int 0x2d */
    /* int3: debug-trap slide byte, stepped over */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}
