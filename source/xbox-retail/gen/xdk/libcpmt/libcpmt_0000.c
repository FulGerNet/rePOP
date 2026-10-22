/**
 * PoP Warrior Within Xbox retail - xdk/libcpmt, chunk 0
 * Microsoft C++ library (LIBCPMT)
 * Functions: 10 (0x0047D6C0 - 0x0047E34F)
 */

#define RECOMP_GENERATED_CODE
#include "../../recomp_funcs.h"
#include <math.h>

/**
 * sub_0047D6C0
 * Original: 0x0047D6C0 - 0x0047D700 (64 bytes, 17 insns)
 * Folder: xdk/libcpmt (string: invalid string position)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047D6C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047D6C0: ;
    eax = 0x48BA9A;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047D6CAu); RECOMP_ABI_CALL(0x004817BCu, sub_004817BC); /* call 0x004817BC */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0047D6CA: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x57C308);
    ecx = ebp + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047D6DAu); RECOMP_ABI_CALL(0x000191C0u, sub_000191C0); /* call 0x000191C0 */

loc_0047D6DA: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -40;
    PUSH32(esp, eax);
    ecx = ebp + -80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047D6EAu); RECOMP_ABI_CALL(0x00018D10u, sub_00018D10); /* call 0x00018D10 */

loc_0047D6EA: ;
    PUSH32(esp, 0x589F50);
    eax = ebp + -80;
    PUSH32(esp, eax);
    MEM32(ebp + -80) = 0x57FA70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047D6FFu); RECOMP_ABI_CALL(0x004816B1u, sub_004816B1); /* call 0x004816B1 */

loc_0047D6FF: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0047D700
 * Original: 0x0047D700 - 0x0047D740 (64 bytes, 17 insns)
 * Folder: xdk/libcpmt (string: string too long)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047D700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047D700: ;
    eax = 0x48BA9A;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047D70Au); RECOMP_ABI_CALL(0x004817BCu, sub_004817BC); /* call 0x004817BC */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0047D70A: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x57C320);
    ecx = ebp + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047D71Au); RECOMP_ABI_CALL(0x000191C0u, sub_000191C0); /* call 0x000191C0 */

loc_0047D71A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -40;
    PUSH32(esp, eax);
    ecx = ebp + -80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047D72Au); RECOMP_ABI_CALL(0x00018D10u, sub_00018D10); /* call 0x00018D10 */

loc_0047D72A: ;
    PUSH32(esp, 0x589F8C);
    eax = ebp + -80;
    PUSH32(esp, eax);
    MEM32(ebp + -80) = 0x57FA70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047D73Fu); RECOMP_ABI_CALL(0x004816B1u, sub_004816B1); /* call 0x004816B1 */

loc_0047D73F: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0047D7A8
 * Original: 0x0047D7A8 - 0x0047D809 (97 bytes, 26 insns)
 * Folder: xdk/libcpmt (string: bad allocation)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0047D7A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0047D7A8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(0x5B58CC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x5B58CC), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = 0x57C330;
    if (TEST_NZ(_fa, _fb)) goto loc_0047D7EA; /* jne: not equal / not zero */

loc_0047D7BD: ;
    MEM32(0x5B58CC) = MEM32(0x5B58CC) | 1;
    _fa = (uint32_t)(MEM32(0x5B58CC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = 0x5B58C0;
    MEM32(ebp + -4) = 0x57C338;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047D7D9u); RECOMP_ABI_CALL(0x0047E036u, sub_0047E036); /* call 0x0047E036 */

loc_0047D7D9: ;
    PUSH32(esp, 0x48F43E);
    MEM32(0x5B58C0) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047D7E9u); RECOMP_ABI_CALL(0x0047E387u, sub_0047E387); /* call 0x0047E387 */

loc_0047D7E9: ;
    POP32(esp, ecx);

loc_0047D7EA: ;
    PUSH32(esp, 0x5B58C0);
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047D7F7u); RECOMP_ABI_CALL(0x0047E07Bu, sub_0047E07B); /* call 0x0047E07B */

loc_0047D7F7: ;
    PUSH32(esp, 0x58954C);
    eax = ebp + -16;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047D808u); RECOMP_ABI_CALL(0x004816B1u, sub_004816B1); /* call 0x004816B1 */

loc_0047D808: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0047E036
 * Original: 0x0047E036 - 0x0047E07B (69 bytes, 31 insns)
 * Folder: xdk/libcpmt (match: xbox-retail 0x003472E0, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047E036(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0047E036: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(esi) = 0x57C364;
    eax = MEM32(edi);
    ecx = eax + 1;

loc_0047E049: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E049; /* jne: not equal / not zero */

loc_0047E050: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0047E059u); RECOMP_ABI_CALL(0x0047D85Cu, sub_0047D85C); /* call 0x0047D85C */

loc_0047E059: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0047E06D; /* je: equal / zero */

loc_0047E061: ;
    edx = MEM32(edi);

loc_0047E063: ;
    SET_LO8(ecx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E063; /* jne: not equal / not zero */

loc_0047E06D: ;
    POP32(esp, edi);
    MEM32(esi + 8) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0047E07B
 * Original: 0x0047E07B - 0x0047E0CA (79 bytes, 36 insns)
 * Folder: xdk/libcpmt (match: xbox-retail 0x00347325, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047E07B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0047E07B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(esi) = 0x57C364;
    eax = MEM32(edi + 8);
    MEM32(esi + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(edi + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0047E0C0; /* je: equal / zero */

loc_0047E096: ;
    ecx = eax + 1;

loc_0047E099: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E099; /* jne: not equal / not zero */

loc_0047E0A0: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0047E0A9u); RECOMP_ABI_CALL(0x0047D85Cu, sub_0047D85C); /* call 0x0047D85C */

loc_0047E0A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0047E0C3; /* je: equal / zero */

loc_0047E0B1: ;
    edi = MEM32(edi + 4);

loc_0047E0B4: ;
    SET_LO8(ecx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E0B4; /* jne: not equal / not zero */

loc_0047E0BE: ;
    goto loc_0047E0C3;

loc_0047E0C0: ;
    MEM32(esi + 4) = eax;

loc_0047E0C3: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0047E0CA
 * Original: 0x0047E0CA - 0x0047E0E0 (22 bytes, 7 insns)
 * Folder: xdk/libcpmt (between: 0x0047E07B and 0x0047E0E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047E0CA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0047E0CA: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0 (32-bit) */
    MEM32(ecx) = 0x57C364;
    if (CMP_EQ(_fa, _fb)) goto loc_0047E0DF; /* je: equal / zero */

loc_0047E0D6: ;
    PUSH32(esp, MEM32(ecx + 4));
    PUSH32(esp, 0x0047E0DEu); RECOMP_ABI_CALL(0x0047D86Eu, sub_0047D86E); /* call 0x0047D86E */

loc_0047E0DE: ;
    POP32(esp, ecx);

loc_0047E0DF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0047E0E0
 * Original: 0x0047E0E0 - 0x0047E0ED (13 bytes, 5 insns)
 * Folder: xdk/libcpmt (string: Unknown exception)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047E0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0047E0E0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0047E0EC; /* jne: not equal / not zero */

loc_0047E0E7: ;
    eax = 0x57C36C;

loc_0047E0EC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0047E2A7
 * Original: 0x0047E2A7 - 0x0047E327 (128 bytes, 45 insns)
 * Folder: xdk/libcpmt (match: xbox-retail 0x003471DD, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047E2A7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0047E2A7: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x95A8CC));
    PUSH32(esp, 0x0047E2B3u); RECOMP_ABI_CALL(0x00482317u, sub_00482317); /* call 0x00482317 */

loc_0047E2B3: ;
    POP32(esp, ecx);
    ecx = MEM32(0x95A8C8);
    esi = eax;
    eax = MEM32(0x95A8CC);
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0047E31A; /* jae: above or equal (unsigned >=) */

loc_0047E2CC: ;
    ecx = 0x800;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0047E2D7; /* jae: above or equal (unsigned >=) */

loc_0047E2D5: ;
    ecx = esi;

loc_0047E2D7: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0047E2E0u); RECOMP_ABI_CALL(0x0047FDA2u, sub_0047FDA2); /* call 0x0047FDA2 */

loc_0047E2E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0047E2FD; /* jne: not equal / not zero */

loc_0047E2E6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x95A8CC));
    PUSH32(esp, 0x0047E2F5u); RECOMP_ABI_CALL(0x0047FDA2u, sub_0047FDA2); /* call 0x0047FDA2 */

loc_0047E2F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0047E2FD; /* jne: not equal / not zero */

loc_0047E2FB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0047E2FD: ;
    ecx = MEM32(0x95A8C8);
    _fb = (uint32_t)(MEM32(0x95A8CC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(0x95A8CC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x95A8CC) = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = eax + ecx * 4;
    MEM32(0x95A8C8) = ecx;

loc_0047E31A: ;
    MEM32(ecx) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x95A8C8) = MEM32(0x95A8C8) + 4;
    _fa = (uint32_t)(MEM32(0x95A8C8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0047E327
 * Original: 0x0047E327 - 0x0047E34F (40 bytes, 14 insns)
 * Folder: xdk/libcpmt (match: xbox-retail 0x0034725D, between)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0047E327(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0047E327: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x0047E331u); RECOMP_ABI_CALL(0x0047D85Cu, sub_0047D85C); /* call 0x0047D85C */

loc_0047E331: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    MEM32(0x95A8CC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0047E33F; /* jne: not equal / not zero */

loc_0047E33B: ;
    PUSH32(esp, 0x18);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_0047E33F: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x95A8CC);
    MEM32(0x95A8C8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0047E34F
 * Original: 0x0047E34F - 0x0047E381 (50 bytes, 13 insns)
 * Folder: xdk/libcpmt (match: xbox-retail 0x00347285, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047E34F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047E34F: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x57C380);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E35Bu); RECOMP_ABI_CALL(0x0047ED34u, sub_0047ED34); /* call 0x0047ED34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0047E35B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E360u); RECOMP_ABI_CALL(0x0048083Fu, sub_0048083F); /* call 0x0048083F */

loc_0047E360: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E36Cu); RECOMP_ABI_CALL(0x0047E2A7u, sub_0047E2A7); /* call 0x0047E2A7 */

loc_0047E36C: ;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E378u); RECOMP_ABI_CALL(0x0047E381u, sub_0047E381); /* call 0x0047E381 */

loc_0047E378: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0047E380u); RECOMP_ABI_CALL(0x0047ED6Fu, sub_0047ED6F); /* call 0x0047ED6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0047E380: ;
    esp += 4; return; /* ret */

}
