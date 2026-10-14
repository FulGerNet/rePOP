/**
 * PoP SoT xbox-demo - Recompiled code chunk 43
 * Functions: 250 (0x002EDA9E - 0x00315E56)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002EDA9E
 * Original: 0x002EDA9E - 0x002EDB2F (145 bytes, 55 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EDA9E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDA9E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = ebp + -8;
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDAB5u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EDAB5: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x84) = MEM32(esi + 0x84) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x70);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x200010 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EDAD0; /* je: equal / zero */

loc_002EDACB: ;
    edx = MEM32(esi + 0x5C);
    goto loc_002EDAD6;

loc_002EDAD0: ;
    edx = MEM32(esi + 0x58);
    PUSH32(esp, 0x40);
    POP32(esp, ebx);

loc_002EDAD6: ;
    edi = ZX8(MEM8(ecx + 0x64));
    eax = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002EDB12; /* ja: above (unsigned >) */

loc_002EDAE0: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx) = eax;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 0x64)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x64), LO8(edx) (8-bit) */
    edi = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_002EDB0E; /* jbe: below or equal (unsigned <=) */

loc_002EDAED: ;
    eax = ZX16(LO16(edi));
    eax = esi + eax * 4 + 0x88;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EDB08; /* jne: not equal / not zero */

loc_002EDAFC: ;
    ebx = ZX8(LO8(edx));
    MEM16(ecx + ebx * 2 + 0xC) = LO16(edi);
    MEM32(eax) = ecx;
    SET_LO8(edx, LO8(edx) + 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_002EDB08: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x64)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ecx + 0x64) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EDAED; /* jb: below (unsigned <) */

loc_002EDB0E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002EDB17;

loc_002EDB12: ;
    edi = 0x88780032u;

loc_002EDB17: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDB26u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EDB26: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EDB2F
 * Original: 0x002EDB2F - 0x002EDB9C (109 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EDB2F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDB2F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDB44u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EDB44: ;
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x84) = MEM32(esi + 0x84) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(edx + 0x64)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x64), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EDB87; /* jbe: below or equal (unsigned <=) */

loc_002EDB56: ;
    eax = ZX16(LO16(edi));
    eax = edx + eax * 2 + 0xC;
    ecx = ZX16(MEM16(eax));
    MEM16(eax) = MEM16(eax) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM32(esi + ecx * 4 + 0x88) = MEM32(esi + ecx * 4 + 0x88) & 0;
    _fa = (uint32_t)(MEM32(esi + ecx * 4 + 0x88)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002EDB77; /* jae: above or equal (unsigned >=) */

loc_002EDB72: ;
    eax = MEM32(esi + 0x5C);
    goto loc_002EDB7A;

loc_002EDB77: ;
    eax = MEM32(esi + 0x58);

loc_002EDB7A: ;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, ZX8(MEM8(edx + 0x64)));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(eax) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EDB56; /* jb: below (unsigned <) */

loc_002EDB87: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDB96u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EDB96: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EDB9C
 * Original: 0x002EDB9C - 0x002EDBFF (99 bytes, 36 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EDB9C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDB9C: ;
    eax = MEM32(0x306A1C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x306BA0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x64);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    MEM32(0x306A1C) = eax;
    edi = ecx + 8;
    eax = ~eax;
    MEM32(esi) = eax;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x002EDBC3u); RECOMP_ABI_CALL(0x002F2704u, sub_002F2704); /* call 0x002F2704 */

loc_002EDBC3: ;
    eax = MEM32(0x306BA4);
    MEM32(0xFE801324u) = eax;
    eax = MEM32(0x306A1C);
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(0xFE801334u) = eax;
    PUSH32(esp, 0x002EDBE0u); RECOMP_ABI_CALL(0x002F2704u, sub_002F2704); /* call 0x002F2704 */

loc_002EDBE0: ;
    goto loc_002EDBF1;

loc_002EDBE2: ;
    eax = ebx;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EDBFB; /* je: equal / zero */

loc_002EDBE9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(0x31C8A4); PUSH32(esp, 0x002EDBF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDBEBu); } /* indirect call */
    }

loc_002EDBF1: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x306A1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x306A1C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EDBE2; /* jne: not equal / not zero */

loc_002EDBFB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EDBFF
 * Original: 0x002EDBFF - 0x002EDC78 (121 bytes, 43 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EDBFF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDBFF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDC0Du); RECOMP_ABI_CALL(0x002EDB9Cu, sub_002EDB9C); /* call 0x002EDB9C */

loc_002EDC0D: ;
    ebx = esi + 0x488;
    MEM32(ebp + -4) = 3;

loc_002EDC1A: ;
    edi = MEM32(ebx);
    goto loc_002EDC3E;

loc_002EDC1E: ;
    ecx = edi + -76;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002EDC26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDC23u); } /* indirect call */
    }

loc_002EDC26: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x84) = MEM32(esi + 0x84) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002EDC37; /* jne: not equal / not zero */

loc_002EDC35: ;
    edi = MEM32(ebx);

loc_002EDC37: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002EDC3E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EDC1E; /* jne: not equal / not zero */

loc_002EDC42: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002EDC1A; /* jne: not equal / not zero */

loc_002EDC4A: ;
    edi = esi + 0x4A0;

loc_002EDC50: ;
    PUSH32(esp, MEM32(edi));
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x84) = MEM32(esi + 0x84) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDC5Eu); RECOMP_ABI_CALL(0x002E9F00u, sub_002E9F00); /* call 0x002E9F00 */

loc_002EDC5E: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EDC73; /* je: equal / zero */

loc_002EDC69: ;
    ecx = eax + -84;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002EDC71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDC6Eu); } /* indirect call */
    }

loc_002EDC71: ;
    goto loc_002EDC50;

loc_002EDC73: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002EDC78
 * Original: 0x002EDC78 - 0x002EDCA4 (44 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EDC78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDC78: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = esi + 0x4B8;
    MEM32(ebp + 8) = eax;
    edx = 0;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);

loc_002EDC92: ;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    if ((_fa != _fb)) goto loc_002EDC92; /* jne: not equal / not zero */

loc_002EDC97: ;
    MEM32(esi + 0x4C0) = MEM32(esi + 0x4C0) | eax;
    _fa = (uint32_t)(MEM32(esi + 0x4C0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EDCA4
 * Original: 0x002EDCA4 - 0x002EDD12 (110 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EDCA4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDCA4: ;
    MEM32(0x306414) = MEM32(0x306414) + 1;
    _fa = (uint32_t)(MEM32(0x306414)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x002EDCBAu); RECOMP_ABI_CALL(0x002F2796u, sub_002F2796); /* call 0x002F2796 */

loc_002EDCBA: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EDCC6; /* je: equal / zero */

loc_002EDCC1: ;
    PUSH32(esp, 0x002EDCC6u); RECOMP_ABI_CALL(0x002F317Au, sub_002F317A); /* call 0x002F317A */

loc_002EDCC6: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EDCD2; /* je: equal / zero */

loc_002EDCCD: ;
    PUSH32(esp, 0x002EDCD2u); RECOMP_ABI_CALL(0x002F317Au, sub_002F317A); /* call 0x002F317A */

loc_002EDCD2: ;
    ecx = edi;
    PUSH32(esp, 0x002EDCD9u); RECOMP_ABI_CALL(0x002F28EBu, sub_002F28EB); /* call 0x002F28EB */

loc_002EDCD9: ;
    ecx = edi;
    MEM32(-24772612) = 1;
    PUSH32(esp, 0x002EDCEAu); RECOMP_ABI_CALL(0x002F2470u, sub_002F2470); /* call 0x002F2470 */

loc_002EDCEA: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EDCF8; /* je: equal / zero */

loc_002EDCF1: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x002EDCF8u); RECOMP_ABI_CALL(0x002F323Au, sub_002F323A); /* call 0x002F323A */

loc_002EDCF8: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EDD06; /* je: equal / zero */

loc_002EDCFF: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x002EDD06u); RECOMP_ABI_CALL(0x002F323Au, sub_002F323A); /* call 0x002F323A */

loc_002EDD06: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x002EDD0Fu); RECOMP_ABI_CALL(0x002F2796u, sub_002F2796); /* call 0x002F2796 */

loc_002EDD0F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EDD12
 * Original: 0x002EDD12 - 0x002EDD62 (80 bytes, 23 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EDD12(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDD12: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002EDD5F; /* jae: above or equal (unsigned >=) */

loc_002EDD1D: ;
    _fa = (uint32_t)(MEM32(ecx + 0x84)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x84), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EDD5F; /* jne: not equal / not zero */

loc_002EDD26: ;
    PUSH32(esp, esi);
    esi = MEM32(0x306BB0);
    edx = eax;
    edx = edx << 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(edx + esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + esi + 4), 0x800000 (32-bit) */
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_002EDD5F; /* jne: not equal / not zero */

loc_002EDD3D: ;
    ecx = MEM32(ecx + eax * 4 + 0x88);
    edx = ZX8(MEM8(ecx + 0x64));
    edx = ZX16(MEM16(ecx + edx * 2 + 0xA));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EDD5F; /* jne: not equal / not zero */

loc_002EDD51: ;
    eax = ecx + 0x4C;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EDD5F; /* je: equal / zero */

loc_002EDD58: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x002EDD5Fu); RECOMP_ABI_CALL(0x002EF6CDu, sub_002EF6CD); /* call 0x002EF6CD */

loc_002EDD5F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EDD62
 * Original: 0x002EDD62 - 0x002EDD87 (37 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EDD62(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDD62: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EDD81; /* jne: not equal / not zero */

loc_002EDD6C: ;
    _fb = (uint32_t)(0x4B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4B0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;

loc_002EDD81: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EDD87
 * Original: 0x002EDD87 - 0x002EDDE9 (98 bytes, 34 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EDD87(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDD87: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x4A8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    PUSH32(esp, eax);
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x002EDDA3u); RECOMP_ABI_CALL(0x002E9F00u, sub_002E9F00); /* call 0x002E9F00 */

loc_002EDDA3: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EDDC5; /* jne: not equal / not zero */

loc_002EDDA9: ;
    eax = edi + 0x4E8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x002EDDB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDDB0u); } /* indirect call */
    }

loc_002EDDB6: ;
    _fb = (uint32_t)(0x510) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x510;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C934); PUSH32(esp, 0x002EDDC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDDBDu); } /* indirect call */
    }

loc_002EDDC3: ;
    goto loc_002EDDE3;

loc_002EDDC5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EDDE3; /* je: equal / zero */

loc_002EDDC9: ;
    ecx = edi + 0x510;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 0x1C));
    _fb = (uint32_t)(0x4E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4E8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(eax + 0x18));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C808); PUSH32(esp, 0x002EDDE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDDDDu); } /* indirect call */
    }

loc_002EDDE3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EDDE9
 * Original: 0x002EDDE9 - 0x002EDE6B (130 bytes, 48 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EDDE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDDE9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDE00u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EDE00: ;
    edi = ebx + 0x4A8;
    goto loc_002EDE3C;

loc_002EDE08: ;
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C838); PUSH32(esp, 0x002EDE12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDE0Cu); } /* indirect call */
    }

loc_002EDE12: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002EDE44; /* jg: greater (signed >) */

loc_002EDE1A: ;
    if (CMP_L(_fas, _fbs)) goto loc_002EDE24; /* jl: less (signed <) */

loc_002EDE1C: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002EDE44; /* ja: above (unsigned >) */

loc_002EDE24: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDE2Eu); RECOMP_ABI_CALL(0x002E9F00u, sub_002E9F00); /* call 0x002E9F00 */

loc_002EDE2E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x14));
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(esi + 0x10));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x002EDE3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDE39u); } /* indirect call */
    }

loc_002EDE3C: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EDE08; /* jne: not equal / not zero */

loc_002EDE42: ;
    goto loc_002EDE5E;

loc_002EDE44: ;
    eax = ebx + 0x510;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x1C));
    _fb = (uint32_t)(0x4E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x4E8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x31C808); PUSH32(esp, 0x002EDE5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDE58u); } /* indirect call */
    }

loc_002EDE5E: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDE66u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EDE66: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002EDE6B
 * Original: 0x002EDE6B - 0x002EDEFD (146 bytes, 55 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EDE6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDE6B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    eax = ebp + -8;
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -16;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDE8Au); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EDE8A: ;
    edi = esi + 0x4B0;
    goto loc_002EDE9C;

loc_002EDE92: ;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDE9Cu); RECOMP_ABI_CALL(0x002ED979u, sub_002ED979); /* call 0x002ED979 */

loc_002EDE9C: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EDE92; /* jne: not equal / not zero */

loc_002EDEA2: ;
    goto loc_002EDEE0;

loc_002EDEA4: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EDEBC; /* je: equal / zero */

loc_002EDEAB: ;
    MEM32(esi) = edi;
    eax = MEM32(edi + 4);
    MEM32(esi + 4) = eax;
    MEM32(eax) = esi;
    eax = MEM32(esi);
    MEM32(eax + 4) = esi;
    goto loc_002EDEC2;

loc_002EDEBC: ;
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = eax;

loc_002EDEC2: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDECAu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EDECA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x14));
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(esi + 0x10));
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x002EDED8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EDED5u); } /* indirect call */
    }

loc_002EDED8: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDEE0u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EDEE0: ;
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDEE8u); RECOMP_ABI_CALL(0x002E9F00u, sub_002E9F00); /* call 0x002E9F00 */

loc_002EDEE8: ;
    esi = eax;
    eax = ebp + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EDEA4; /* jne: not equal / not zero */

loc_002EDEF1: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDEF9u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EDEF9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002EDEFD
 * Original: 0x002EDEFD - 0x002EDF34 (55 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EDEFD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDEFD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDF0Eu); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EDF0E: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EDF0E; /* jb: below (unsigned <) */

loc_002EDF1B: ;
    eax = MEM32(ebp + 8);
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -8;
    MEM32(0xFE820280u) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDF2Eu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EDF2E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EDF34
 * Original: 0x002EDF34 - 0x002EDF79 (69 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EDF34(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDF34: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDF48u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EDF48: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EDF48; /* jb: below (unsigned <) */

loc_002EDF55: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ebp + 8);
    ecx = ZX8(MEM8(ecx + eax + 0x10));
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax * 4 + -25034240) = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDF72u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EDF72: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EDF79
 * Original: 0x002EDF79 - 0x002EDFD2 (89 bytes, 36 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EDF79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDF79: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EDFCD; /* je: equal / zero */

loc_002EDF8D: ;
    PUSH32(esp, 0x34);
    ecx = ebp + -52;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDF9Eu); RECOMP_ABI_CALL(0x002ED93Fu, sub_002ED93F); /* call 0x002ED93F */

loc_002EDF9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002EDFCD; /* jl: less (signed <) */

loc_002EDFA2: ;
    _fa = (uint32_t)(MEM8(0x30641F)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x30641F), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EDFB1; /* je: equal / zero */

loc_002EDFAB: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_002EDFB5;

loc_002EDFB1: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) | 2;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002EDFB5: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EDFCDu); RECOMP_ABI_CALL(0x002ED896u, sub_002ED896); /* call 0x002ED896 */

loc_002EDFCD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002EDFD2
 * Original: 0x002EDFD2 - 0x002EDFF9 (39 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EDFD2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDFD2: ;
    edx = MEM32(esp + 4);
    edx = ZX8(MEM8(edx + 0x64));
    _fb = (uint32_t)(0x53C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x53C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1D (32-bit) */
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_002EDFF4; /* jbe: below or equal (unsigned <=) */

loc_002EDFED: ;
    eax = 0x88780032u;
    goto loc_002EDFF6;

loc_002EDFF4: ;
    MEM32(ecx) = edx;

loc_002EDFF6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EDFF9
 * Original: 0x002EDFF9 - 0x002EE00A (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EDFF9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EDFF9: ;
    eax = MEM32(esp + 4);
    eax = ZX8(MEM8(eax + 0x64));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ecx + 0x53C) = MEM32(ecx + 0x53C) - eax;
    _fa = (uint32_t)(MEM32(ecx + 0x53C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EE00A
 * Original: 0x002EE00A - 0x002EE0C1 (183 bytes, 59 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EE00A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE00A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x224) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x224;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE01Eu); RECOMP_ABI_CALL(0x002E9F69u, sub_002E9F69); /* call 0x002E9F69 */

loc_002EE01E: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM16(eax + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0xFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(eax + 0x80), 0xFFF (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EE0B6; /* je: equal / zero */

loc_002EE030: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EE0B6; /* je: equal / zero */

loc_002EE038: ;
    PUSH32(esp, edi);
    edi = 0x118;
    PUSH32(esp, edi);
    ecx = ebp + -548;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE051u); RECOMP_ABI_CALL(0x002ED93Fu, sub_002ED93F); /* call 0x002ED93F */

loc_002EE051: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002EE0B5; /* jl: less (signed <) */

loc_002EE055: ;
    eax = ebp + -548;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE06Au); RECOMP_ABI_CALL(0x002EAE39u, sub_002EAE39); /* call 0x002EAE39 */

loc_002EE06A: ;
    MEM32(ebp + -532) = MEM32(ebp + -532) | 4;
    _fa = (uint32_t)(MEM32(ebp + -532)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    eax = ebp + -532;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE08Cu); RECOMP_ABI_CALL(0x002ED896u, sub_002ED896); /* call 0x002ED896 */

loc_002EE08C: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 0x108);
    eax = ebp + -268;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(eax + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE0A9u); RECOMP_ABI_CALL(0x002ED896u, sub_002ED896); /* call 0x002ED896 */

loc_002EE0A9: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE0B5u); RECOMP_ABI_CALL(0x002ED72Cu, sub_002ED72C); /* call 0x002ED72C */

loc_002EE0B5: ;
    POP32(esp, edi);

loc_002EE0B6: ;
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE0BEu); RECOMP_ABI_CALL(0x002E9F8Eu, sub_002E9F8E); /* call 0x002E9F8E */

loc_002EE0BE: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002EE0C1
 * Original: 0x002EE0C1 - 0x002EE0CD (12 bytes, 3 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE0C1(void)
{

loc_002EE0C1: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x002EE0CAu); RECOMP_ABI_CALL(0x002EDDE9u, sub_002EDDE9); /* call 0x002EDDE9 */

loc_002EE0CA: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002EE0CD
 * Original: 0x002EE0CD - 0x002EE0E9 (28 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE0CD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE0CD: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xFFFFFAD4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFAD4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x306424) = 1;
    PUSH32(esp, 0x002EE0E6u); RECOMP_ABI_CALL(0x002EDA3Bu, sub_002EDA3B); /* call 0x002EDA3B */

loc_002EE0E6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EE0E9
 * Original: 0x002EE0E9 - 0x002EE194 (171 bytes, 53 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE0E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EE0E9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x322A94;
    MEM32(esi + 8) = 0x322A90;
    PUSH32(esp, 0x002EE101u); RECOMP_ABI_CALL(0x002EDA3Bu, sub_002EDA3B); /* call 0x002EDA3B */

loc_002EE101: ;
    _fa = (uint32_t)(MEM32(0x306B00)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306B00), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EE11C; /* je: equal / zero */

loc_002EE10A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306B00);
    { uint32_t _icall_target = MEM32(0x31C900); PUSH32(esp, 0x002EE115u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE10Fu); } /* indirect call */
    }

loc_002EE115: ;
    MEM32(0x306B00) = MEM32(0x306B00) & 0;
    _fa = (uint32_t)(MEM32(0x306B00)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EE11C: ;
    eax = esi + 0x4E8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C80C); PUSH32(esp, 0x002EE129u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE123u); } /* indirect call */
    }

loc_002EE129: ;
    ebp = MEM32(0x31C934);
    edi = esi + 0x4C8;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi), 0x13 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE141; /* jne: not equal / not zero */

loc_002EE13B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x002EE13Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE13Cu); } /* indirect call */
    }

loc_002EE13E: ;
    MEM16(edi) = ~MEM16(edi);

loc_002EE141: ;
    ebx = esi + 0x510;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx), 0x13 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE159; /* jne: not equal / not zero */

loc_002EE14D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x002EE150u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE14Eu); } /* indirect call */
    }

loc_002EE150: ;
    SET_LO16(eax, MEM16(edi));
    SET_LO16(eax, ~LO16(eax));
    MEM16(ebx) = LO16(eax);

loc_002EE159: ;
    edi = esi + 0x52C;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EE16F; /* je: equal / zero */

loc_002EE165: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C850); PUSH32(esp, 0x002EE16Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE167u); } /* indirect call */
    }

loc_002EE16D: ;
    MEM32(edi) = ebx;

loc_002EE16F: ;
    eax = MEM32(esi + 0x58);
    MEM32(eax) = ebx;
    eax = MEM32(esi + 0x5C);
    ecx = esi + 0x60;
    MEM32(eax) = ebx;
    PUSH32(esp, 0x002EE181u); RECOMP_ABI_CALL(0x002EEA62u, sub_002EEA62); /* call 0x002EEA62 */

loc_002EE181: ;
    ecx = esi + 8;
    PUSH32(esp, 0x002EE189u); RECOMP_ABI_CALL(0x002F29B4u, sub_002F29B4); /* call 0x002F29B4 */

loc_002EE189: ;
    POP32(esp, edi);
    MEM32(esi) = 0x322A18;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EE194
 * Original: 0x002EE194 - 0x002EE1D6 (66 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE194(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EE194: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x31C938);
    esi = ecx;
    ebp = 0x2EDC78;
    ebx = 0x306B00;
    goto loc_002EE1C3;

loc_002EE1AC: ;
    _fa = (uint32_t)(MEM8(esi + 0x4C0)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x4C0), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EE1BC; /* je: equal / zero */

loc_002EE1B5: ;
    ecx = esi;
    PUSH32(esp, 0x002EE1BCu); RECOMP_ABI_CALL(0x002EDBFFu, sub_002EDBFF); /* call 0x002EDBFF */

loc_002EE1BC: ;
    MEM32(esi + 0x4C0) = MEM32(esi + 0x4C0) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x4C0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EE1C3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x002EE1C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE1C6u); } /* indirect call */
    }

loc_002EE1C8: ;
    _fa = (uint32_t)(MEM8(esi + 0x4C0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x4C0), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EE1AC; /* jne: not equal / not zero */

loc_002EE1D1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EE1D6
 * Original: 0x002EE1D6 - 0x002EE1EC (22 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE1D6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE1D6: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x8000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE1E9; /* jne: not equal / not zero */

loc_002EE1E0: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x002EE1E9u); RECOMP_ABI_CALL(0x002EDD12u, sub_002EDD12); /* call 0x002EDD12 */

loc_002EE1E9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EE1EC
 * Original: 0x002EE1EC - 0x002EE230 (68 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EE1EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE1EC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE201u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EE201: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EE21E; /* je: equal / zero */

loc_002EE20B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_002EE217; /* je: equal / zero */

loc_002EE210: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE215u); RECOMP_ABI_CALL(0x002E9F00u, sub_002E9F00); /* call 0x002E9F00 */

loc_002EE215: ;
    goto loc_002EE21E;

loc_002EE217: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE21Eu); RECOMP_ABI_CALL(0x002EDD87u, sub_002EDD87); /* call 0x002EDD87 */

loc_002EE21E: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE22Au); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EE22A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EE230
 * Original: 0x002EE230 - 0x002EE23C (12 bytes, 3 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE230(void)
{

loc_002EE230: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x002EE239u); RECOMP_ABI_CALL(0x002EE194u, sub_002EE194); /* call 0x002EE194 */

loc_002EE239: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002EE23C
 * Original: 0x002EE23C - 0x002EE257 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE23C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE23C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002EE244u); RECOMP_ABI_CALL(0x002EE0E9u, sub_002EE0E9); /* call 0x002EE0E9 */

loc_002EE244: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EE251; /* je: equal / zero */

loc_002EE24B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EE251u); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002EE251: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EE257
 * Original: 0x002EE257 - 0x002EE29E (71 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE257(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE257: ;
    eax = MEM32(0xFE801100u);
    PUSH32(esp, esi);
    edx = 0xF00;
    PUSH32(esp, edi);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    edi = ecx;
    ecx = MEM32(-25160960);
    esi = MEM32(-25160956);
    if (CMP_NE(_fa, _fb)) goto loc_002EE286; /* jne: not equal / not zero */

loc_002EE277: ;
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x002EE286u); RECOMP_ABI_CALL(0x002EE1D6u, sub_002EE1D6); /* call 0x002EE1D6 */

loc_002EE286: ;
    esi = edi + 8;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x002EE292u); RECOMP_ABI_CALL(0x002F273Bu, sub_002F273B); /* call 0x002F273B */

loc_002EE292: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x002EE29Bu); RECOMP_ABI_CALL(0x002F273Bu, sub_002F273B); /* call 0x002F273B */

loc_002EE29B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EE29E
 * Original: 0x002EE29E - 0x002EE374 (214 bytes, 81 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EE29E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EE29E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x18);
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -4) = edi;
    if ((_fa == 0)) goto loc_002EE367; /* je: equal / zero */

loc_002EE2BA: ;
    eax = ebp + -12;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C838); PUSH32(esp, 0x002EE2C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE2BEu); } /* indirect call */
    }

loc_002EE2C4: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(esi + 0x18);
    if (CMP_G(_fas, _fbs)) goto loc_002EE2E4; /* jg: greater (signed >) */

loc_002EE2CE: ;
    if (CMP_L(_fas, _fbs)) goto loc_002EE2D4; /* jl: less (signed <) */

loc_002EE2D0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_A(_fa, _fb)) goto loc_002EE2E4; /* ja: above (unsigned >) */

loc_002EE2D4: ;
    edx = MEM32(ebp + -12);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + -8);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0x1C) = ecx;

loc_002EE2E4: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_002EE367; /* jl: less (signed <) */

loc_002EE2EC: ;
    if (CMP_G(_fas, _fbs)) goto loc_002EE2F6; /* jg: greater (signed >) */

loc_002EE2EE: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -12) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_002EE367; /* jbe: below or equal (unsigned <=) */

loc_002EE2F6: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + 8) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_002EE30B; /* je: equal / zero */

loc_002EE303: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE30Bu); RECOMP_ABI_CALL(0x002EE1ECu, sub_002EE1EC); /* call 0x002EE1EC */

loc_002EE30B: ;
    ecx = edi + 0x4A8;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002EE338; /* je: equal / zero */

loc_002EE317: ;
    edx = MEM32(esi + 0x18);
    edi = MEM32(esi + 0x1C);
    PUSH32(esp, ebx);

loc_002EE31E: ;
    ebx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_002EE334; /* jg: greater (signed >) */

loc_002EE325: ;
    if (CMP_L(_fas, _fbs)) goto loc_002EE32E; /* jl: less (signed <) */

loc_002EE327: ;
    ebx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_002EE334; /* ja: above (unsigned >) */

loc_002EE32E: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002EE31E; /* jne: not equal / not zero */

loc_002EE334: ;
    edi = MEM32(ebp + -4);
    POP32(esp, ebx);

loc_002EE338: ;
    MEM32(esi) = eax;
    eax = MEM32(eax + 4);
    MEM32(esi + 4) = eax;
    MEM32(eax) = esi;
    eax = MEM32(esi);
    MEM32(eax + 4) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002EE36B; /* jne: not equal / not zero */

loc_002EE34B: ;
    eax = edi + 0x510;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x1C));
    _fb = (uint32_t)(0x4E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x4E8)) >> 32) & 1);
    edi = edi + 0x4E8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C808); PUSH32(esp, 0x002EE365u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE35Fu); } /* indirect call */
    }

loc_002EE365: ;
    goto loc_002EE36B;

loc_002EE367: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EE36B: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EE374
 * Original: 0x002EE374 - 0x002EE3C9 (85 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE374(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE374: ;
    PUSH32(esp, ebx);
    ebx = MEM32(-25161728);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx;
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ecx;
    if ((_fa == 0)) goto loc_002EE3C3; /* je: equal / zero */

loc_002EE386: ;
    MEM32(-25161728) = ebx;
    MEM32(esi + 0x4B8) = MEM32(esi + 0x4B8) | ebx;
    _fa = (uint32_t)(MEM32(esi + 0x4B8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EE39C; /* je: equal / zero */

loc_002EE397: ;
    PUSH32(esp, 0x002EE39Cu); RECOMP_ABI_CALL(0x002EE257u, sub_002EE257); /* call 0x002EE257 */

loc_002EE39C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EE3A8; /* je: equal / zero */

loc_002EE3A1: ;
    ecx = esi;
    PUSH32(esp, 0x002EE3A8u); RECOMP_ABI_CALL(0x002EDCA4u, sub_002EDCA4); /* call 0x002EDCA4 */

loc_002EE3A8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EE3BE; /* je: equal / zero */

loc_002EE3AD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x4C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C8DC); PUSH32(esp, 0x002EE3BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE3B8u); } /* indirect call */
    }

loc_002EE3BE: ;
    eax = MEM32(0xFE801000u);

loc_002EE3C3: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EE3C9
 * Original: 0x002EE3C9 - 0x002EE410 (71 bytes, 29 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EE3C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE3C9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE3DEu); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EE3DE: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 1 (8-bit) */
    ecx = edi;
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_002EE3F1; /* je: equal / zero */

loc_002EE3EA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE3EFu); RECOMP_ABI_CALL(0x002EDD62u, sub_002EDD62); /* call 0x002EDD62 */

loc_002EE3EF: ;
    goto loc_002EE3F6;

loc_002EE3F1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE3F6u); RECOMP_ABI_CALL(0x002EE29Eu, sub_002EE29E); /* call 0x002EE29E */

loc_002EE3F6: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EE400; /* je: equal / zero */

loc_002EE3FC: ;
    MEM32(esi + 8) = MEM32(esi + 8) | 2;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002EE400: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE408u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EE408: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EE410
 * Original: 0x002EE410 - 0x002EE41C (12 bytes, 3 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE410(void)
{

loc_002EE410: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x002EE419u); RECOMP_ABI_CALL(0x002EE374u, sub_002EE374); /* call 0x002EE374 */

loc_002EE419: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EE41C
 * Original: 0x002EE41C - 0x002EE50E (242 bytes, 83 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE41C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EE41C: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = esi + 8;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x002EE42Du); RECOMP_ABI_CALL(0x002F2E1Bu, sub_002F2E1B); /* call 0x002F2E1B */

loc_002EE42D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002EE4F0; /* jl: less (signed <) */

loc_002EE437: ;
    PUSH32(esp, 0x7FF);
    ecx = esi + 0x60;
    PUSH32(esp, 0x002EE444u); RECOMP_ABI_CALL(0x002EEA84u, sub_002EEA84); /* call 0x002EEA84 */

loc_002EE444: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002EE4F0; /* jl: less (signed <) */

loc_002EE44E: ;
    ebx = MEM32(0x31C7A8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2EE230);
    eax = esi + 0x4C8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x002EE463u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE461u); } /* indirect call */
    }

loc_002EE463: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esi + 0x4E8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C7A4); PUSH32(esp, 0x002EE472u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE46Cu); } /* indirect call */
    }

loc_002EE472: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2EE0C1);
    eax = esi + 0x510;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x002EE481u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE47Fu); } /* indirect call */
    }

loc_002EE481: ;
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(0x31C894); PUSH32(esp, 0x002EE48Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE488u); } /* indirect call */
    }

loc_002EE48E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x18));
    ebx = 0x306B00;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2EE410);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x31C8A0); PUSH32(esp, 0x002EE4A9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE4A3u); } /* indirect call */
    }

loc_002EE4A9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x31C89C); PUSH32(esp, 0x002EE4B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE4AAu); } /* indirect call */
    }

loc_002EE4B0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE4B9; /* jne: not equal / not zero */

loc_002EE4B4: ;
    edi = 0x80004005u;

loc_002EE4B9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002EE4F0; /* jl: less (signed <) */

loc_002EE4BD: ;
    PUSH32(esp, 1);
    ecx = ebp;
    MEM32(-25161728) = 0xFFFFFFFFu;
    PUSH32(esp, 0x002EE4D0u); RECOMP_ABI_CALL(0x002F26CDu, sub_002F26CD); /* call 0x002F26CD */

loc_002EE4D0: ;
    eax = esi + 0x52C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(eax) = 0x2EE0CD;
    { uint32_t _icall_target = MEM32(0x31C850); PUSH32(esp, 0x002EE4E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE4DFu); } /* indirect call */
    }

loc_002EE4E5: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x002EE4EEu); RECOMP_ABI_CALL(0x002EDEFDu, sub_002EDEFD); /* call 0x002EDEFD */

loc_002EE4EE: ;
    edi = eax;

loc_002EE4F0: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EE4F2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002EE506; /* jl: less (signed <) */

loc_002EE4F6: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x002EE4FEu); RECOMP_ABI_CALL(0x002EDF34u, sub_002EDF34); /* call 0x002EDF34 */

loc_002EE4FE: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20 (32-bit) */
    edi = eax;
    if (CMP_B(_fa, _fb)) goto loc_002EE4F2; /* jb: below (unsigned <) */

loc_002EE506: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002EE50E
 * Original: 0x002EE50E - 0x002EE552 (68 bytes, 28 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EE50E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE50E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EE520; /* je: equal / zero */

loc_002EE51B: ;
    edx = MEM32(ebp + 0xC);
    MEM32(ecx) = edx;

loc_002EE520: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(ebp + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_002EE52C; /* je: equal / zero */

loc_002EE52A: ;
    MEM32(ecx) = edx;

loc_002EE52C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EE53E; /* je: equal / zero */

loc_002EE532: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(eax + 0x10));
    PUSH32(esp, MEM32(ebp + 0x14));
    { uint32_t _icall_target = MEM32(ebp + 0x10); PUSH32(esp, 0x002EE53Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE539u); } /* indirect call */
    }

loc_002EE53C: ;
    goto loc_002EE54E;

loc_002EE53E: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EE54E; /* je: equal / zero */

loc_002EE545: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C870); PUSH32(esp, 0x002EE54Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE548u); } /* indirect call */
    }

loc_002EE54E: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002EE552
 * Original: 0x002EE552 - 0x002EE56D (27 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE552(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE552: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EE567; /* je: equal / zero */

loc_002EE55D: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x002EE567u); RECOMP_ABI_CALL(0x002ED979u, sub_002ED979); /* call 0x002ED979 */

loc_002EE567: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EE56D
 * Original: 0x002EE56D - 0x002EE58B (30 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE56D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE56D: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ZX8(MEM8(eax + ecx + 0xF));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002EE585; /* je: equal / zero */

loc_002EE57E: ;
    _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002EE588;

loc_002EE585: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002EE588: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EE58B
 * Original: 0x002EE58B - 0x002EE5A4 (25 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE58B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE58B: ;
    ecx = MEM32(ecx + 0x70);
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0x14));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0x14)); }
    _fa = (uint32_t)(MEM16(ecx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xC), 0x69 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE5A1; /* jne: not equal / not zero */

loc_002EE59E: ;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_002EE5A1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EE5A4
 * Original: 0x002EE5A4 - 0x002EE5C6 (34 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE5A4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE5A4: ;
    ecx = MEM32(ecx + 0x70);
    _fa = (uint32_t)(MEM16(ecx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xC), 0x69 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE5BB; /* jne: not equal / not zero */

loc_002EE5AE: ;
    eax = MEM32(esp + 4);
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0x14));
    goto loc_002EE5C3;

loc_002EE5BB: ;
    eax = MEM32(ecx + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 4));

loc_002EE5C3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EE5C6
 * Original: 0x002EE5C6 - 0x002EE638 (114 bytes, 46 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EE5C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE5C6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp + -8;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE5DCu); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EE5DC: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE628; /* jne: not equal / not zero */

loc_002EE5E5: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EE60E; /* je: equal / zero */

loc_002EE5EB: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EE5FF; /* je: equal / zero */

loc_002EE5F1: ;
    SET_LO16(eax, MEM16(esi + 0x12));
    SET_LO16(eax, LO16(eax) | 0x1000);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(esi + 0x12) = LO16(eax);
    goto loc_002EE605;

loc_002EE5FF: ;
    MEM16(esi + 0x12) = MEM16(esi + 0x12) & 0xEFFF;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

loc_002EE605: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE60Cu); RECOMP_ABI_CALL(0x002EF90Eu, sub_002EF90E); /* call 0x002EF90E */

loc_002EE60C: ;
    goto loc_002EE616;

loc_002EE60E: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE616u); RECOMP_ABI_CALL(0x002F0294u, sub_002F0294); /* call 0x002F0294 */

loc_002EE616: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EE628; /* jne: not equal / not zero */

loc_002EE61C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002EE628u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE625u); } /* indirect call */
    }

loc_002EE628: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE630u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EE630: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EE638
 * Original: 0x002EE638 - 0x002EE684 (76 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE638(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE638: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000Au) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000000Au (32-bit) */
    PUSH32(esp, edi);
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EE64F; /* je: equal / zero */

loc_002EE64B: ;
    MEM32(esp + 0x14) = eax;

loc_002EE64F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esi + 0xC));
    edi = esi + 8;
    PUSH32(esp, MEM32(edi));
    { uint32_t _icall_target = MEM32(0x31C8D8); PUSH32(esp, 0x002EE65Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE659u); } /* indirect call */
    }

loc_002EE65F: ;
    PUSH32(esp, MEM32(esp + 0x14));
    eax = MEM32(ebx + 0x80);
    PUSH32(esp, MEM32(eax + 0xC4));
    PUSH32(esp, MEM32(eax + 0xC0));
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0x002EE67Eu); RECOMP_ABI_CALL(0x002EE50Eu, sub_002EE50E); /* call 0x002EE50E */

loc_002EE67E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EE684
 * Original: 0x002EE684 - 0x002EE6C4 (64 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE684(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002EE684: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x002EE690u); RECOMP_ABI_CALL(0x002F0294u, sub_002F0294); /* call 0x002F0294 */

loc_002EE690: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0xD8;

loc_002EE698: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EE6A5; /* je: equal / zero */

loc_002EE69D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002EE6A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE6A2u); } /* indirect call */
    }

loc_002EE6A5: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EE698; /* jb: below (unsigned <) */

loc_002EE6AE: ;
    ecx = esi + 0x12;
    SET_LO16(edx, 0x3111);
    PUSH32(esp, 0x002EE6BAu); RECOMP_ABI_CALL(0x002EF0A6u, sub_002EF0A6); /* call 0x002EF0A6 */

loc_002EE6BA: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002EF24A(); return; /* tail jmp 0x002EF24A */

}

/**
 * sub_002EE6C4
 * Original: 0x002EE6C4 - 0x002EE6FD (57 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EE6C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE6C4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax | MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ecx;
    if ((_fa == 0)) goto loc_002EE6E9; /* je: equal / zero */

loc_002EE6D5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002EE6E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE6E2u); } /* indirect call */
    }

loc_002EE6E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE6F5; /* jne: not equal / not zero */

loc_002EE6E9: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE6F3u); RECOMP_ABI_CALL(0x002EE5C6u, sub_002EE5C6); /* call 0x002EE5C6 */

loc_002EE6F3: ;
    edi = eax;

loc_002EE6F5: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EE6FD
 * Original: 0x002EE6FD - 0x002EE773 (118 bytes, 47 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EE6FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE6FD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + -8;
    ebx = edi + 0xB8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE71Cu); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EE71C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_002EE75A; /* jne: not equal / not zero */

loc_002EE721: ;
    goto loc_002EE737;

loc_002EE723: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE72Eu); RECOMP_ABI_CALL(0x002EE638u, sub_002EE638); /* call 0x002EE638 */

loc_002EE72E: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE736u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EE736: ;
    PUSH32(esp, esi);

loc_002EE737: ;
    eax = edi + 0xB0;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE743u); RECOMP_ABI_CALL(0x002EE552u, sub_002EE552); /* call 0x002EE552 */

loc_002EE743: ;
    ecx = ebp + -8;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE74Du); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EE74D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE723; /* jne: not equal / not zero */

loc_002EE751: ;
    goto loc_002EE76C;

loc_002EE753: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 0x24) = ecx;
    PUSH32(esp, esi);

loc_002EE75A: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE760u); RECOMP_ABI_CALL(0x002EE552u, sub_002EE552); /* call 0x002EE552 */

loc_002EE760: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE753; /* jne: not equal / not zero */

loc_002EE764: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE76Cu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EE76C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EE773
 * Original: 0x002EE773 - 0x002EE79B (40 bytes, 16 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE773(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE773: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EE786; /* je: equal / zero */

loc_002EE77F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002EE786u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE783u); } /* indirect call */
    }

loc_002EE786: ;
    PUSH32(esp, 0x8000000Au);
    eax = esi + 0xB8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002EE799u); RECOMP_ABI_CALL(0x002EE6FDu, sub_002EE6FD); /* call 0x002EE6FD */

loc_002EE799: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EE79B
 * Original: 0x002EE79B - 0x002EE85E (195 bytes, 65 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EE79B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE79B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE7B0u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EE7B0: ;
    eax = MEM32(ebp + 8);
    ecx = eax + 9;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ecx + esi;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EE850; /* je: equal / zero */

loc_002EE7C5: ;
    ecx = ZX8(MEM8(esi + 0x64));
    edx = ecx + ecx;
    PUSH32(esp, edi);

loc_002EE7CD: ;
    edi = MEM32(-25034736);
    edi = edi >> 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EE7CD; /* jb: below (unsigned <) */

loc_002EE7DA: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EE81A; /* jbe: below or equal (unsigned <=) */

loc_002EE7E2: ;
    edi = esi + 0xC;

loc_002EE7E5: ;
    ecx = ZX16(MEM16(edi));
    edx = eax + ecx * 2;
    edx = edx << 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFFFF00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(-25033992) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002EE806; /* jne: not equal / not zero */

loc_002EE7FE: ;
    MEM32(-25033952) = edx;
    goto loc_002EE80C;

loc_002EE806: ;
    MEM32(-25033892) = edx;

loc_002EE80C: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX8(MEM8(esi + 0x64));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EE7E5; /* jb: below (unsigned <) */

loc_002EE81A: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + esi;
    eax = edi + 0x88;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE831u); RECOMP_ABI_CALL(0x002EE6FDu, sub_002EE6FD); /* call 0x002EE6FD */

loc_002EE831: ;
    MEM32(edi + 0x94) = MEM32(edi + 0x94) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x94)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x194) = MEM32(esi + 0x194) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x194)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = esi + 0x190;
    ecx = MEM32(eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    POP32(esp, edi);

loc_002EE850: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE858u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EE858: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EE85E
 * Original: 0x002EE85E - 0x002EE93E (224 bytes, 81 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EE85E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE85E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    MEM8(ebp + -1) = LO8(eax);
    MEM32(ebp + -12) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_002EE92C; /* je: equal / zero */

loc_002EE882: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE88Au); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EE88A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002EE892u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE88Fu); } /* indirect call */
    }

loc_002EE892: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EE88A; /* jb: below (unsigned <) */

loc_002EE898: ;
    edi = MEM32(esi + 0x190);
    PUSH32(esp, ebx);
    MEM32(ebp + -8) = 2;
    ebx = 0x80004004u;

loc_002EE8AB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE8B4u); RECOMP_ABI_CALL(0x002EE79Bu, sub_002EE79B); /* call 0x002EE79B */

loc_002EE8B4: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi & 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002EE8AB; /* jne: not equal / not zero */

loc_002EE8BD: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + 0x190) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE8CDu); RECOMP_ABI_CALL(0x002F0294u, sub_002F0294); /* call 0x002F0294 */

loc_002EE8CD: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE8D5u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EE8D5: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE8DCu); RECOMP_ABI_CALL(0x002F01AAu, sub_002F01AA); /* call 0x002F01AA */

loc_002EE8DC: ;
    PUSH32(esp, ebx);
    eax = esi + 0xA8;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE8EBu); RECOMP_ABI_CALL(0x002EE6FDu, sub_002EE6FD); /* call 0x002EE6FD */

loc_002EE8EB: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA), 4 (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_002EE911; /* je: equal / zero */

loc_002EE8F8: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_002EE907; /* jne: not equal / not zero */

loc_002EE900: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE905u); RECOMP_ABI_CALL(0x002EE684u, sub_002EE684); /* call 0x002EE684 */

loc_002EE905: ;
    goto loc_002EE917;

loc_002EE907: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002EE911u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE90Eu); } /* indirect call */
    }

loc_002EE911: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE920; /* jne: not equal / not zero */

loc_002EE917: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EE91Eu); RECOMP_ABI_CALL(0x002EE773u, sub_002EE773); /* call 0x002EE773 */

loc_002EE91E: ;
    goto loc_002EE92C;

loc_002EE920: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002EE92Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EE929u); } /* indirect call */
    }

loc_002EE92C: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EE938; /* jne: not equal / not zero */

loc_002EE932: ;
    MEM16(esi + 0x12) = MEM16(esi + 0x12) & 0xCFFF;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */

loc_002EE938: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EE93E
 * Original: 0x002EE93E - 0x002EE9C7 (137 bytes, 56 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_002EE93E(void)
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

loc_002EE93E: ;
    fp_push(MEMF(0x3337C0)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(esi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002EE972; /* jp: parity */

loc_002EE956: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(esi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002EE972; /* jp: parity */

loc_002EE964: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002EE9C3; /* jnp: not parity */

loc_002EE972: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x322820)); /* fld float */
    fp_push(MEMF(esi)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002EE9C3; /* jnp: not parity */

loc_002EE987: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002EE9C3; /* jnp: not parity */

loc_002EE995: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002EE9C3; /* jnp: not parity */

loc_002EE9A3: ;
    PUSH32(esp, esi);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x002EE9ABu); RECOMP_ABI_CALL(0x002ECC75u, sub_002ECC75); /* call 0x002ECC75 */

loc_002EE9AB: ;
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_002EE9C3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EE9C7
 * Original: 0x002EE9C7 - 0x002EE9E5 (30 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EE9C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002EE9C7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = 0x45800000;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_push(MEMF(ebp + 8)); /* fld float */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    SMEM32(ebp + -8) = (int32_t)recomp_fist(fp_top(), g_fp_control_word, 32); fp_pop(); /* fistp */
    eax = MEM32(ebp + -8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EE9E5
 * Original: 0x002EE9E5 - 0x002EEA1B (54 bytes, 16 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EE9E5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EE9E5: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    MEM32(eax + 4) = ecx;
    ecx = edx;
    MEM32(eax) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;
    SET_LO16(ecx, MEM16(esp + 8));
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(eax + 8) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM16(eax + 0xA) = LO16(ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002EEA1B
 * Original: 0x002EEA1B - 0x002EEA42 (39 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEA1B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEA1B: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    MEM32(eax + 4) = ecx;
    ecx = edx;
    MEM32(eax) = edx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EEA42
 * Original: 0x002EEA42 - 0x002EEA62 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEA42(void)
{

loc_002EEA42: ;
    eax = ecx;
    ecx = eax + 4;
    MEM32(eax + 8) = ecx;
    MEM32(ecx) = ecx;
    ecx = eax + 0xC;
    MEM32(eax) = 0x322AA4;
    MEM32(eax + 0x1C) = 0x306410;
    MEM32(eax + 0x10) = ecx;
    MEM32(ecx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002EEA62
 * Original: 0x002EEA62 - 0x002EEA84 (34 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEA62(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEA62: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x322AA4;
    if (CMP_EQ(_fa, _fb)) goto loc_002EEA7C; /* je: equal / zero */

loc_002EEA72: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EEA78u); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002EEA78: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EEA7C: ;
    eax = MEM32(esi + 0x1C);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002EEA84
 * Original: 0x002EEA84 - 0x002EEB0F (139 bytes, 53 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EEA84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EEA84: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(ebp + 8));
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    MEM32(eax) = edi;
    PUSH32(esp, 1);
    eax = edi + edi * 4 + 5;
    if (2) _cf = (int)(((eax) >> (32 - (2))) & 1);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x61645344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEAA9u); RECOMP_ABI_CALL(0x002ECADEu, sub_002ECADE); /* call 0x002ECADE */

loc_002EEAA9: ;
    ebx = eax;
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0x7FF8FFF2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    ebx = ebx + 0x8007000Eu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = eax;
    if ((_fas < 0)) goto loc_002EEB06; /* js: sign (negative) */

loc_002EEAC0: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEAD1u); RECOMP_ABI_CALL(0x002EE9E5u, sub_002EE9E5); /* call 0x002EE9E5 */

loc_002EEAD1: ;
    MEM32(esi + 0x18) = eax;
    eax = edi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_002EEB06; /* jbe: below or equal (unsigned <=) */

loc_002EEADC: ;
    ecx = esi + 0xC;
    MEM32(ebp + 8) = 0x14;
    edx = eax + -1;

loc_002EEAE9: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + 8))) >> 32) & 1);
    eax = eax + MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(0x14)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x14;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    edi = MEM32(ecx + 4);
    MEM32(eax + 4) = edi;
    MEM32(ecx + 4) = eax;
    edi = MEM32(eax + 4);
    MEM32(edi) = eax;
    if ((_fa != 0)) goto loc_002EEAE9; /* jne: not equal / not zero */

loc_002EEB06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EEB0F
 * Original: 0x002EEB0F - 0x002EEBE0 (209 bytes, 76 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEB0F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEB0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEBD9; /* je: equal / zero */

loc_002EEB20: ;
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(esp + 0x14));
    _fa = (uint32_t)(MEM16(eax + 0xA)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xA), LO16(ebx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EEBD8; /* jb: below (unsigned <) */

loc_002EEB30: ;
    edx = edi + 4;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEBD8; /* je: equal / zero */

loc_002EEB3D: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEB58; /* jne: not equal / not zero */

loc_002EEB43: ;
    SET_LO16(ecx, MEM16(eax + 0xA));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(ebx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EEB58; /* jb: below (unsigned <) */

loc_002EEB4C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEB56; /* je: equal / zero */

loc_002EEB50: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(esi + 0xA) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002EEB58; /* jae: above or equal (unsigned >=) */

loc_002EEB56: ;
    esi = eax;

loc_002EEB58: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEB3D; /* jne: not equal / not zero */

loc_002EEB5E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEBD8; /* je: equal / zero */

loc_002EEB62: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), MEM16(esi + 0xA) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002EEB91; /* jae: above or equal (unsigned >=) */

loc_002EEB68: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, 0x002EEB70u); RECOMP_ABI_CALL(0x002E9F00u, sub_002E9F00); /* call 0x002E9F00 */

loc_002EEB70: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0xA));
    _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(ecx, LO16(ecx) - LO16(ebx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 8));
    _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + LO16(ebx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002EEB8Du); RECOMP_ABI_CALL(0x002EE9E5u, sub_002EE9E5); /* call 0x002EE9E5 */

loc_002EEB8D: ;
    MEM16(esi + 0xA) = LO16(ebx);

loc_002EEB91: ;
    eax = MEM32(esp + 0x10);
    ecx = ZX16(MEM16(esi + 0xA));
    MEM32(esi + 0xC) = 1;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(edi + 0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax) = MEM32(eax) - ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEBD8; /* jne: not equal / not zero */

loc_002EEBAD: ;
    MEM32(edi + 0x18) = MEM32(edi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edi + 4;
    eax = MEM32(edx);
    goto loc_002EEBD4;

loc_002EEBB8: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEBD2; /* jne: not equal / not zero */

loc_002EEBBE: ;
    ecx = MEM32(edi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEBCF; /* je: equal / zero */

loc_002EEBC5: ;
    SET_LO16(ebx, MEM16(eax + 0xA));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), MEM16(ecx + 0xA) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EEBD2; /* jbe: below or equal (unsigned <=) */

loc_002EEBCF: ;
    MEM32(edi + 0x18) = eax;

loc_002EEBD2: ;
    eax = MEM32(eax);

loc_002EEBD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEBB8; /* jne: not equal / not zero */

loc_002EEBD8: ;
    POP32(esp, ebx);

loc_002EEBD9: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EEBE0
 * Original: 0x002EEBE0 - 0x002EEC01 (33 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEBE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEBE0: ;
    eax = MEM32(esp + 8);
    SET_LO16(edx, MEM16(eax + 0xA));
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(LO16(edx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(esi + 0xA) = MEM16(esi + 0xA) + LO16(edx);
    _fa = (uint32_t)(MEM16(esi + 0xA)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002EEBFBu); RECOMP_ABI_CALL(0x002ED979u, sub_002ED979); /* call 0x002ED979 */

loc_002EEBFB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EEC01
 * Original: 0x002EEC01 - 0x002EEC6E (109 bytes, 40 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EEC01(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEC01: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ebx;
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(0x31C8D8); PUSH32(esp, 0x002EEC1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EEC19u); } /* indirect call */
    }

loc_002EEC1F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEC69; /* je: equal / zero */

loc_002EEC23: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);

loc_002EEC28: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(0x31C8D4); PUSH32(esp, 0x002EEC31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EEC2Bu); } /* indirect call */
    }

loc_002EEC31: ;
    ecx = ebp + -8;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEC3Bu); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EEC3B: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EEC3B; /* jb: below (unsigned <) */

loc_002EEC48: ;
    MEM32(-25032700) = edi;
    ecx = ebp + -8;
    MEM32(-25032696) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEC5Cu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EEC5C: ;
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x1000;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002EEC28; /* jne: not equal / not zero */

loc_002EEC67: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002EEC69: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EEC6E
 * Original: 0x002EEC6E - 0x002EEC85 (23 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEC6E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEC6E: ;
    eax = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    { uint32_t _icall_target = MEM32(0x31C8D8); PUSH32(esp, 0x002EEC82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EEC7Cu); } /* indirect call */
    }

loc_002EEC82: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EEC85
 * Original: 0x002EEC85 - 0x002EECAA (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEC85(void)
{

loc_002EEC85: ;
    eax = ecx;
    ecx = eax + 8;
    MEM32(eax + 4) = 1;
    MEM32(eax) = 0x322AA8;
    MEM32(0x306A20) = eax;
    MEM32(eax + 0xC) = ecx;
    MEM32(ecx) = ecx;
    ecx = eax + 0x10;
    MEM32(eax + 0x14) = ecx;
    MEM32(ecx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002EECAA
 * Original: 0x002EECAA - 0x002EED0B (97 bytes, 34 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EECAA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EECAA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + -8;
    MEM32(edi) = 0x322AA8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EECC5u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EECC5: ;
    MEM32(0x306A20) = MEM32(0x306A20) & 0;
    _fa = (uint32_t)(MEM32(0x306A20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = edi + 8;
    goto loc_002EECDE;

loc_002EECD1: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EECDE; /* je: equal / zero */

loc_002EECD8: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EECDEu); RECOMP_ABI_CALL(0x002ECAC6u, sub_002ECAC6); /* call 0x002ECAC6 */

loc_002EECDE: ;
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EECE5u); RECOMP_ABI_CALL(0x002E9F00u, sub_002E9F00); /* call 0x002E9F00 */

loc_002EECE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EECD1; /* jne: not equal / not zero */

loc_002EECE9: ;
    eax = MEM32(0x306B74);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x306B70);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EED01u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EED01: ;
    MEM32(edi) = 0x322A18;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002EED0B
 * Original: 0x002EED0B - 0x002EED8F (132 bytes, 56 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EED0B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EED0B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EED20u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EED20: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0x5C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    if ((_fa == 0)) goto loc_002EED7F; /* je: equal / zero */

loc_002EED33: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = ecx;
    ecx = esi + 8;
    MEM32(eax) = ecx;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 4);
    MEM32(eax + 4) = ebx;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0xFFFFFFF4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFFFFFF4u)) >> 32) & 1);
    edx = edx + 0xFFFFFFF4u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EED62u); RECOMP_ABI_CALL(0x002EEA1Bu, sub_002EEA1B); /* call 0x002EEA1B */

loc_002EED62: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_002EED72; /* je: equal / zero */

loc_002EED6A: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_002EED75; /* jbe: below or equal (unsigned <=) */

loc_002EED72: ;
    MEM32(esi + 0x18) = eax;

loc_002EED75: ;
    eax = MEM32(0x306B74);
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002EED7F: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EED87u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EED87: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002EED8F
 * Original: 0x002EED8F - 0x002EEE70 (225 bytes, 89 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EED8F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EED8F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp + -8;
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEDA6u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EEDA6: ;
    esi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x18);
    _fb = (uint32_t)(0x17) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x17)) >> 32) & 1);
    esi = esi + 0x17;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (3) _cf = (int)(((esi) >> ((3) - 1)) & 1);
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (3) _cf = (int)(((esi) >> (32 - (3))) & 1);
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEE56; /* je: equal / zero */

loc_002EEDBD: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002EEE56; /* jb: below (unsigned <) */

loc_002EEDC6: ;
    edx = edi + 0x10;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002EEE56; /* je: equal / zero */

loc_002EEDD3: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002EEDEB; /* jne: not equal / not zero */

loc_002EEDD9: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002EEDEB; /* jb: below (unsigned <) */

loc_002EEDE0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEDE9; /* je: equal / zero */

loc_002EEDE4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_002EEDEB; /* jae: above or equal (unsigned >=) */

loc_002EEDE9: ;
    ebx = eax;

loc_002EEDEB: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002EEDD3; /* jne: not equal / not zero */

loc_002EEDF1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEE56; /* je: equal / zero */

loc_002EEDF5: ;
    eax = MEM32(ebx + 8);
    ecx = esi + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_002EEE11; /* jae: above or equal (unsigned >=) */

loc_002EEDFF: ;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = ebx + esi;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEE0Eu); RECOMP_ABI_CALL(0x002EEA1Bu, sub_002EEA1B); /* call 0x002EEA1B */

loc_002EEE0E: ;
    MEM32(ebx + 8) = esi;

loc_002EEE11: ;
    MEM32(ebx + 0xC) = 0x706F6C73;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002EEE46; /* jne: not equal / not zero */

loc_002EEE1D: ;
    _cf = 0; /* logical op clears CF */
    MEM32(edi + 0x18) = MEM32(edi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edi + 0x10;
    eax = MEM32(ecx);
    goto loc_002EEE42;

loc_002EEE28: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002EEE40; /* jne: not equal / not zero */

loc_002EEE2E: ;
    edx = MEM32(edi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEE3D; /* je: equal / zero */

loc_002EEE35: ;
    esi = MEM32(eax + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_002EEE40; /* jbe: below or equal (unsigned <=) */

loc_002EEE3D: ;
    MEM32(edi + 0x18) = eax;

loc_002EEE40: ;
    eax = MEM32(eax);

loc_002EEE42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002EEE28; /* jne: not equal / not zero */

loc_002EEE46: ;
    eax = MEM32(0x306B70);
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x002EEE56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EEE53u); } /* indirect call */
    }

loc_002EEE56: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEE5Eu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EEE5E: ;
    eax = ebx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x10)) >> 32) & 1);
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EEE70
 * Original: 0x002EEE70 - 0x002EEE8B (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEE70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEE70: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 8) = MEM32(esi + 8) + ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EEE85u); RECOMP_ABI_CALL(0x002E9F00u, sub_002E9F00); /* call 0x002E9F00 */

loc_002EEE85: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EEE8B
 * Original: 0x002EEE8B - 0x002EEEA6 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEE8B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEE8B: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002EEE93u); RECOMP_ABI_CALL(0x002EEA62u, sub_002EEA62); /* call 0x002EEA62 */

loc_002EEE93: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EEEA0; /* je: equal / zero */

loc_002EEE9A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EEEA0u); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002EEEA0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EEEA6
 * Original: 0x002EEEA6 - 0x002EEF35 (143 bytes, 56 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EEEA6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEEA6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(ebp + 0xC);
    eax = ebx;
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax + ecx + 0xFFF;
    ecx = ebp + -8;
    esi = esi >> 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 0xFFFFF000u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEED9u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EEED9: ;
    ecx = edi + 4;
    eax = MEM32(ecx);
    goto loc_002EEEF3;

loc_002EEEE0: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEEF1; /* je: equal / zero */

loc_002EEEE6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEEF1; /* jne: not equal / not zero */

loc_002EEEEB: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(eax + 0xA) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEF2E; /* je: equal / zero */

loc_002EEEF1: ;
    eax = MEM32(eax);

loc_002EEEF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEEE0; /* jne: not equal / not zero */

loc_002EEEF7: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEF00u); RECOMP_ABI_CALL(0x002EEB0Fu, sub_002EEB0F); /* call 0x002EEB0F */

loc_002EEF00: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEF1D; /* je: equal / zero */

loc_002EEF06: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEF0Eu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EEF0E: ;
    eax = ZX16(LO16(esi));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(edi + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEF1Du); RECOMP_ABI_CALL(0x002EEC01u, sub_002EEC01); /* call 0x002EEC01 */

loc_002EEF1D: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEF25u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EEF25: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_002EEF2E: ;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = eax;
    goto loc_002EEF1D;

}

/**
 * sub_002EEF35
 * Original: 0x002EEF35 - 0x002EEF91 (92 bytes, 38 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEF35(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEF35: ;
    eax = MEM32(esp + 4);
    edx = ZX16(MEM16(eax + 0xA));
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + edx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = esi + 4;
    goto loc_002EEF5A;

loc_002EEF4B: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEF71; /* jne: not equal / not zero */

loc_002EEF51: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002EEF5Au); RECOMP_ABI_CALL(0x002EEBE0u, sub_002EEBE0); /* call 0x002EEBE0 */

loc_002EEF5A: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEF4B; /* jne: not equal / not zero */

loc_002EEF60: ;
    goto loc_002EEF71;

loc_002EEF62: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEF78; /* jne: not equal / not zero */

loc_002EEF68: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002EEF71u); RECOMP_ABI_CALL(0x002EEBE0u, sub_002EEBE0); /* call 0x002EEBE0 */

loc_002EEF71: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEF62; /* jne: not equal / not zero */

loc_002EEF78: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EEF89; /* je: equal / zero */

loc_002EEF7F: ;
    SET_LO16(edx, MEM16(eax + 0xA));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0xA) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EEF8C; /* jbe: below or equal (unsigned <=) */

loc_002EEF89: ;
    MEM32(esi + 0x18) = eax;

loc_002EEF8C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EEF91
 * Original: 0x002EEF91 - 0x002EEFAC (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EEF91(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEF91: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002EEF99u); RECOMP_ABI_CALL(0x002EECAAu, sub_002EECAA); /* call 0x002EECAA */

loc_002EEF99: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EEFA6; /* je: equal / zero */

loc_002EEFA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002EEFA6u); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002EEFA6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EEFAC
 * Original: 0x002EEFAC - 0x002EF045 (153 bytes, 65 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EEFAC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EEFAC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp + -8;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFF0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEFC8u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EEFC8: ;
    eax = MEM32(0x306B70);
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax) = MEM32(eax) - ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = edi + 0x10;
    goto loc_002EEFF5;

loc_002EEFDB: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EF017; /* jne: not equal / not zero */

loc_002EEFE1: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EF017; /* jne: not equal / not zero */

loc_002EEFEA: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EEFF3u); RECOMP_ABI_CALL(0x002EEE70u, sub_002EEE70); /* call 0x002EEE70 */

loc_002EEFF3: ;
    esi = eax;

loc_002EEFF5: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEFDB; /* jne: not equal / not zero */

loc_002EEFFB: ;
    goto loc_002EF017;

loc_002EEFFD: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EF01E; /* jne: not equal / not zero */

loc_002EF003: ;
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EF01E; /* jne: not equal / not zero */

loc_002EF00C: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF015u); RECOMP_ABI_CALL(0x002EEE70u, sub_002EEE70); /* call 0x002EEE70 */

loc_002EF015: ;
    esi = eax;

loc_002EF017: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EEFFD; /* jne: not equal / not zero */

loc_002EF01E: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF02D; /* je: equal / zero */

loc_002EF025: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 8) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EF030; /* jbe: below or equal (unsigned <=) */

loc_002EF02D: ;
    MEM32(edi + 0x18) = esi;

loc_002EF030: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x002EF036u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EF033u); } /* indirect call */
    }

loc_002EF036: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF03Eu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EF03E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EF045
 * Original: 0x002EF045 - 0x002EF090 (75 bytes, 31 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EF045(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF045: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF059u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EF059: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) - 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002EF083; /* jne: not equal / not zero */

loc_002EF061: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(eax + 0xA));
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF072u); RECOMP_ABI_CALL(0x002EEF35u, sub_002EEF35); /* call 0x002EEF35 */

loc_002EF072: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF07Au); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EF07A: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF081u); RECOMP_ABI_CALL(0x002EEC6Eu, sub_002EEC6E); /* call 0x002EEC6E */

loc_002EF081: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002EF083: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF08Bu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EF08B: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EF090
 * Original: 0x002EF090 - 0x002EF09B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF090(void)
{

loc_002EF090: ;
    MEM32(0x306B74) = 0x306400;
    esp += 4; return; /* ret */

}

/**
 * sub_002EF09B
 * Original: 0x002EF09B - 0x002EF0A6 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF09B(void)
{

loc_002EF09B: ;
    MEM32(0x306B70) = 0x306404;
    esp += 4; return; /* ret */

}

/**
 * sub_002EF0A6
 * Original: 0x002EF0A6 - 0x002EF0AA (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF0A6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF0A6: ;
    MEM16(ecx) = MEM16(ecx) & LO16(edx);
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EF0AA
 * Original: 0x002EF0AA - 0x002EF0AE (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF0AA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF0AA: ;
    MEM16(ecx) = MEM16(ecx) | LO16(edx);
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_002EF0AE
 * Original: 0x002EF0AE - 0x002EF0D0 (34 bytes, 10 insns)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_002EF0AE(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002EF0AE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x10));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(0x306AF8); PUSH32(esp, 0x002EF0CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EF0C7u); } /* indirect call */
    }

loc_002EF0CD: ;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EF0D0
 * Original: 0x002EF0D0 - 0x002EF0EC (28 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF0D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF0D0: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EF0EB; /* jbe: below or equal (unsigned <=) */

loc_002EF0D9: ;
    PUSH32(esp, esi);

loc_002EF0DA: ;
    esi = MEM32(ecx);
    MEM8(edx + esi + 0xF) = 0x80;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EF0DA; /* jb: below (unsigned <) */

loc_002EF0EA: ;
    POP32(esp, esi);

loc_002EF0EB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002EF0EC
 * Original: 0x002EF0EC - 0x002EF137 (75 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF0EC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF0EC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF0F8; /* je: equal / zero */

loc_002EF0F4: ;
    MEM8(ecx + 0x17) = MEM8(ecx + 0x17) | 1;
    _fa = (uint32_t)(MEM8(ecx + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_002EF0F8: ;
    edx = MEM32(ecx + 0x70);
    PUSH32(esp, esi);
    esi = 0x2000;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 8), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EF10C; /* je: equal / zero */

loc_002EF106: ;
    MEM16(ecx + 0x16) = MEM16(ecx + 0x16) | 0x43F;
    _fa = (uint32_t)(MEM16(ecx + 0x16)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_002EF10C: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF116; /* je: equal / zero */

loc_002EF112: ;
    MEM8(ecx + 0x1A) = MEM8(ecx + 0x1A) | 0x80;
    _fa = (uint32_t)(MEM8(ecx + 0x1A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_002EF116: ;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 8), 0x182000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EF123; /* jne: not equal / not zero */

loc_002EF11F: ;
    MEM8(ecx + 0x15) = MEM8(ecx + 0x15) | 0xE0;
    _fa = (uint32_t)(MEM8(ecx + 0x15)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_002EF123: ;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 8), esi (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_002EF12F; /* je: equal / zero */

loc_002EF129: ;
    MEM8(ecx + 0x64) = 1;
    goto loc_002EF134;

loc_002EF12F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x002EF134u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EF131u); } /* indirect call */
    }

loc_002EF134: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EF137
 * Original: 0x002EF137 - 0x002EF24A (275 bytes, 98 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EF137(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF137: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp + -8;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF14Du); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EF14D: ;
    ecx = MEM32(esi + 0x70);
    eax = ZX8(MEM8(ecx + 0xE));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x64)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x64) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF171; /* je: equal / zero */

loc_002EF15E: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EF16E; /* je: equal / zero */

loc_002EF164: ;
    edi = 0x88780032u;
    goto loc_002EF23C;

loc_002EF16E: ;
    MEM8(esi + 0x64) = LO8(eax);

loc_002EF171: ;
    eax = ZX16(MEM16(ecx + 0xC));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002EF18F; /* je: equal / zero */

loc_002EF178: ;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x68;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_002EF1CA; /* jne: not equal / not zero */

loc_002EF17D: ;
    eax = MEM32(esi + 0x14);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0xA0000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002EF18A: ;
    MEM32(esi + 0x14) = eax;
    goto loc_002EF1CA;

loc_002EF18F: ;
    SET_LO8(eax, MEM8(ecx + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF1C6; /* je: equal / zero */

loc_002EF196: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x10 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF1B7; /* je: equal / zero */

loc_002EF19A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x18) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x18 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF1A8; /* je: equal / zero */

loc_002EF19E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EF1CA; /* jne: not equal / not zero */

loc_002EF1A2: ;
    MEM8(esi + 0x17) = MEM8(esi + 0x17) | 0xF0;
    _fa = (uint32_t)(MEM8(esi + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_002EF1CA;

loc_002EF1A8: ;
    eax = MEM32(esi + 0x14);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0xE0000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002EF18A;

loc_002EF1B7: ;
    eax = MEM32(esi + 0x14);
    eax = eax & 0xFFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x50000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002EF18A;

loc_002EF1C6: ;
    MEM8(esi + 0x17) = MEM8(esi + 0x17) & 0xF;
    _fa = (uint32_t)(MEM8(esi + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_002EF1CA: ;
    eax = ZX8(MEM8(ecx + 0xE));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x1F0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x14) = MEM32(esi + 0x14) ^ eax;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 0xE)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0xE), 1 (8-bit) */
    eax = MEM32(esi + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_002EF1ED; /* jne: not equal / not zero */

loc_002EF1E6: ;
    eax = eax & 0xF7FFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_002EF1F2;

loc_002EF1ED: ;
    eax = eax | 0x8000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002EF1F2: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    MEM32(esi + 0x14) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002EF23C; /* je: equal / zero */

loc_002EF1FB: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax + eax;

loc_002EF202: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EF202; /* jb: below (unsigned <) */

loc_002EF20F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EF23C; /* jbe: below or equal (unsigned <=) */

loc_002EF215: ;
    ecx = esi + 0xC;

loc_002EF218: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    eax = ZX16(MEM16(ecx));
    MEM32(0xFE8202F8u) = eax;
    eax = MEM32(esi + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_002EF22C; /* je: equal / zero */

loc_002EF227: ;
    eax = eax | 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002EF22C: ;
    MEM32(0xFE820304u) = eax;
    eax = ZX8(MEM8(esi + 0x64));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EF218; /* jb: below (unsigned <) */

loc_002EF23C: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF244u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EF244: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002EF24A
 * Original: 0x002EF24A - 0x002EF2D2 (136 bytes, 50 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EF24A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF24A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF260u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EF260: ;
    ebx = esi + 0x12;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EF2C6; /* je: equal / zero */

loc_002EF268: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(esi + 0x64)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x64), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EF2AA; /* jbe: below or equal (unsigned <=) */

loc_002EF272: ;
    edx = esi + 0xC;
    PUSH32(esp, edi);

loc_002EF276: ;
    edi = ZX16(MEM16(edx));
    edi = edi << 7;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x306BB0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(0x306BB0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ZX16(MEM16(edx));
    edi = MEM32(0x306BB0);
    ecx = eax;
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + edi + 0x7C) = eax;
    eax = ZX8(MEM8(esi + 0x64));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EF276; /* jb: below (unsigned <) */

loc_002EF2A9: ;
    POP32(esp, edi);

loc_002EF2AA: ;
    MEM32(esi + 0x68) = MEM32(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x6C) = MEM32(esi + 0x6C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esi + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF2BBu); RECOMP_ABI_CALL(0x002EDB2Fu, sub_002EDB2F); /* call 0x002EDB2F */

loc_002EF2BB: ;
    SET_LO16(edx, 0x10);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF2C6u); RECOMP_ABI_CALL(0x002EF0A6u, sub_002EF0A6); /* call 0x002EF0A6 */

loc_002EF2C6: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF2CEu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EF2CE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002EF2D2
 * Original: 0x002EF2D2 - 0x002EF383 (177 bytes, 77 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EF2D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF2D2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx + 0x70);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_002EF2F6; /* jbe: below or equal (unsigned <=) */

loc_002EF2E6: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002EF2E9: ;
    esi = ZX8(MEM8(ecx));
    MEM32(ebp + eax * 4 + -32) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EF2E9; /* jb: below (unsigned <) */

loc_002EF2F6: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002EF315;

loc_002EF2FA: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EF30F; /* jbe: below or equal (unsigned <=) */

loc_002EF300: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + ecx * 4 + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + ecx * 4 + -32) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF30B; /* je: equal / zero */

loc_002EF306: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EF300; /* jb: below (unsigned <) */

loc_002EF30B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EF314; /* jb: below (unsigned <) */

loc_002EF30F: ;
    MEM32(ebp + eax * 4 + -32) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002EF314: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002EF315: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EF2FA; /* jb: below (unsigned <) */

loc_002EF31A: ;
    esi = MEM32(ebp + 8);
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EF326: ;
    edi = MEM32(ebp + eax * 4 + -32);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EF326; /* jb: below (unsigned <) */

loc_002EF337: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    MEM32(esi) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_002EF355; /* jae: above or equal (unsigned >=) */

loc_002EF33E: ;
    ecx = eax + eax * 4 + 1;

loc_002EF342: ;
    edi = MEM32(ebp + eax * 4 + -32);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1F (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EF342; /* jb: below (unsigned <) */

loc_002EF353: ;
    MEM32(esi) = edx;

loc_002EF355: ;
    edx = MEM32(ebp + 0xC);
    MEM16(edx) = MEM16(edx) & 0xFC00;
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    ecx = MEM32(edx);
    if (CMP_AE(_fa, _fb)) goto loc_002EF37D; /* jae: above or equal (unsigned >=) */

loc_002EF364: ;
    esi = ecx;
    ecx = eax + eax * 4 + -30;

loc_002EF36A: ;
    edi = MEM32(ebp + eax * 4 + -32);
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EF36A; /* jb: below (unsigned <) */

loc_002EF37B: ;
    MEM32(edx) = esi;

loc_002EF37D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EF383
 * Original: 0x002EF383 - 0x002EF5D7 (596 bytes, 208 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EF383(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF383: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x70);
    _fa = (uint32_t)(MEM32(ebx + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xB8), 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -44) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002EF46F; /* je: equal / zero */

loc_002EF3A3: ;
    _fa = (uint32_t)(MEM8(ebx + 0xB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xB), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EF46F; /* je: equal / zero */

loc_002EF3AD: ;
    eax = ebx;
    eax = MEM32(eax + 0xB8);
    edi = MEM32(eax + 8);
    _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(eax + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFD8F0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(ebp + -16) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_002EF3CB; /* jge: greater or equal (signed >=) */

loc_002EF3C7: ;
    edi = eax;
    goto loc_002EF3D1;

loc_002EF3CB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002EF3D4; /* jle: less or equal (signed <=) */

loc_002EF3CF: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EF3D1: ;
    MEM32(ebp + -16) = edi;

loc_002EF3D4: ;
    edx = MEM32(ecx + 0x70);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edx + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(ebp + -12) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_002EF3F4; /* jge: greater or equal (signed >=) */

loc_002EF3EF: ;
    MEM32(ebp + -12) = eax;
    goto loc_002EF3FC;

loc_002EF3F4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002EF3FC; /* jle: less or equal (signed <=) */

loc_002EF3F8: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EF3FC: ;
    edx = MEM32(ecx + 0x70);
    esi = MEM32(edx + 0xB8);
    edx = MEM32(esi + 0x1C);
    _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esi + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(ebp + -8) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_002EF419; /* jge: greater or equal (signed >=) */

loc_002EF414: ;
    MEM32(ebp + -8) = eax;
    goto loc_002EF421;

loc_002EF419: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002EF421; /* jle: less or equal (signed <=) */

loc_002EF41D: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EF421: ;
    edx = MEM32(ecx + 0x70);
    edx = MEM32(edx + 0xB8);
    esi = MEM32(edx + 0x1C);
    _fb = (uint32_t)(MEM32(edx + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edx + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(ebp + -20) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_002EF441; /* jge: greater or equal (signed >=) */

loc_002EF43C: ;
    MEM32(ebp + -20) = eax;
    goto loc_002EF449;

loc_002EF441: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002EF449; /* jle: less or equal (signed <=) */

loc_002EF445: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EF449: ;
    edx = MEM32(ebx + 0xB8);
    edx = MEM32(edx + 0x20);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(ebp + -4) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_002EF460; /* jge: greater or equal (signed >=) */

loc_002EF45B: ;
    MEM32(ebp + -4) = eax;
    goto loc_002EF468;

loc_002EF460: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002EF468; /* jle: less or equal (signed <=) */

loc_002EF464: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EF468: ;
    MEM32(ebp + -36) = 1;

loc_002EF46F: ;
    edi = ZX8(MEM8(ecx + 0x64));
    eax = MEM32(ebx + 0x24);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -32) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_002EF5C7; /* jbe: below or equal (unsigned <=) */

loc_002EF48A: ;
    edi = 0xFFF;

loc_002EF48F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -32));
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -40) = eax;
    goto loc_002EF4A2;

loc_002EF49F: ;
    eax = MEM32(ebp + -40);

loc_002EF4A2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EF5CE; /* jb: below (unsigned <) */

loc_002EF4AA: ;
    eax = esi + 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -32));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002EF5CE; /* jae: above or equal (unsigned >=) */

loc_002EF4B9: ;
    edx = MEM32(ecx + 0x70);
    eax = ZX8(MEM8(edx + ebx + 0x28));
    eax = MEM32(edx + eax * 4 + 0x30);
    _fb = (uint32_t)(MEM32(edx + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebp + ebx * 4 + -76;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002EF50C; /* je: equal / zero */

loc_002EF4D6: ;
    SET_LO8(ebx, MEM8(ebx + edx + 0x28));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF507; /* je: equal / zero */

loc_002EF4DF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 5 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EF502; /* jbe: below or equal (unsigned <=) */

loc_002EF4E4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 7 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EF4FD; /* jbe: below or equal (unsigned <=) */

loc_002EF4E9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 9 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EF4F8; /* jbe: below or equal (unsigned <=) */

loc_002EF4EE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EF502; /* jne: not equal / not zero */

loc_002EF4F3: ;
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_002EF50A;

loc_002EF4F8: ;
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_002EF50A;

loc_002EF4FD: ;
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_002EF50A;

loc_002EF502: ;
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_002EF50A;

loc_002EF507: ;
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002EF50A: ;
    MEM32(esi) = eax;

loc_002EF50C: ;
    eax = MEM32(esi);
    PUSH32(esp, 0x64);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    ebx = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_002EF523; /* jbe: below or equal (unsigned <=) */

loc_002EF521: ;
    MEM32(esi) = edi;

loc_002EF523: ;
    esi = MEM32(ebp + -28);

loc_002EF526: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    MEM32(ebp + -24) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_002EF49F; /* jb: below (unsigned <) */

loc_002EF533: ;
    eax = MEM32(ebp + -48);
    edx = MEM32(ebp + -72);
    ecx = eax;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(ebp + -76);
    ecx = ecx << 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(ebp + -52);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = edx;
    ebx = ebx & 0xF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = MEM32(ebp + 8);
    MEM32(ebx + esi * 4) = ecx;
    ecx = MEM32(ebp + -64);
    ebx = eax;
    ebx = ebx & 0xF0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebp + -68);
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx;
    ecx = ecx >> 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebp + 8);
    MEM32(ecx + esi * 4 + 0xC) = ebx;
    ebx = MEM32(ebp + -56);
    eax = eax & 0xF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx << 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = MEM32(ebp + -60);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + esi * 4 + 0x18) = eax;
    ecx = MEM32(ebp + -44);
    eax = ZX8(MEM8(ecx + 0x64));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(ebp + -28) = esi;
    if (CMP_B(_fa, _fb)) goto loc_002EF48F; /* jb: below (unsigned <) */

loc_002EF5C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_002EF5CE: ;
    MEM32(ebp + ebx * 4 + -76) = edi;
    goto loc_002EF526;

}

/**
 * sub_002EF5D7
 * Original: 0x002EF5D7 - 0x002EF659 (130 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EF5D7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF5D7: ;
    edx = MEM32(ecx + 0x70);
    PUSH32(esp, esi);
    esi = MEM32(edx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x182000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EF5EA; /* je: equal / zero */

loc_002EF5E6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002EF64C;

loc_002EF5EA: ;
    ecx = MEM32(ecx + 0x70);
    _fa = (uint32_t)(MEM32(ecx + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xB8), 0 (32-bit) */
    eax = MEM32(ecx + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_002EF60A; /* je: equal / zero */

loc_002EF5F9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EF60A; /* je: equal / zero */

loc_002EF601: ;
    ecx = MEM32(edx + 0xB8);
    _fb = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002EF60A: ;
    edx = MEM32(edx + 0xB0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF638; /* je: equal / zero */

loc_002EF614: ;
    ecx = MEM32(edx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF638; /* je: equal / zero */

loc_002EF61B: ;
    edx = ecx + 0x80;
    ecx = MEM32(edx);
    _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ecx + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xB8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF638; /* je: equal / zero */

loc_002EF62F: ;
    ecx = MEM32(ecx + 0xB8);
    _fb = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002EF638: ;
    ecx = 0xFFFF8001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002EF64A; /* jl: less (signed <) */

loc_002EF641: ;
    ecx = 0x1FFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002EF64C; /* jle: less or equal (signed <=) */

loc_002EF64A: ;
    eax = ecx;

loc_002EF64C: ;
    ecx = MEM32(esp + 8);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EF659
 * Original: 0x002EF659 - 0x002EF6CD (116 bytes, 44 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EF659(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF659: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ecx + 0x70);
    edx = MEM32(eax + 0xB0);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF6A0; /* je: equal / zero */

loc_002EF66C: ;
    edx = MEM32(edx + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF6A0; /* je: equal / zero */

loc_002EF673: ;
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x70);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), 0x82000 (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_002EF6A0; /* je: equal / zero */

loc_002EF681: ;
    eax = MEM32(ebp + 8);
    MEM8(eax) = 2;
    eax = MEM32(ecx + 8);
    edx = MEM32(edx + 0x50);
    _fb = (uint32_t)(0x498) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x498;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    eax = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_002EF6C6; /* je: equal / zero */

loc_002EF699: ;
    _fb = (uint32_t)(0xFFFFFFB4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFB4u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    goto loc_002EF6C8;

loc_002EF6A0: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x182000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EF6B2; /* je: equal / zero */

loc_002EF6AA: ;
    eax = MEM32(ebp + 8);
    MEM8(eax) = 2;
    goto loc_002EF6C3;

loc_002EF6B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x200010 (32-bit) */
    eax = MEM32(ebp + 8);
    if (TEST_Z(_fa, _fb)) goto loc_002EF6C1; /* je: equal / zero */

loc_002EF6BC: ;
    MEM8(eax) = 1;
    goto loc_002EF6C3;

loc_002EF6C1: ;
    MEM8(eax) = LO8(ebx);

loc_002EF6C3: ;
    eax = MEM32(ebp + 0xC);

loc_002EF6C6: ;
    MEM32(eax) = ebx;

loc_002EF6C8: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EF6CD
 * Original: 0x002EF6CD - 0x002EF8A9 (476 bytes, 147 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EF6CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF6CD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ZX8(MEM8(esi + 0x65));
    eax = ecx + ecx * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + 0x3062A8);
    PUSH32(esp, edi);
    edi = MEM32(edx + -25165824);
    MEM32(ebp + -4) = edi;
    edi = MEM32(eax + 0x3062AC);
    eax = MEM32(eax + 0x3062B0);
    edi = MEM32(edi + -25165824);
    eax = MEM32(eax + -25165824);
    MEM32(ebp + -28) = eax;
    eax = MEM32(esi + 8);
    ecx = eax + ecx * 8 + 0x488;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(ebp + -24) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_002EF728; /* jne: not equal / not zero */

loc_002EF71F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0xFFFF;
    goto loc_002EF734;

loc_002EF728: ;
    edi = eax + -76;
    eax = ZX8(MEM8(edi + 0x64));
    eax = ZX16(MEM16(edi + eax * 2 + 0xA));

loc_002EF734: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EF747; /* jne: not equal / not zero */

loc_002EF73C: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0xFFFF;
    goto loc_002EF751;

loc_002EF747: ;
    _fb = (uint32_t)(0xFFFFFFB4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xFFFFFFB4u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = ebx;
    ebx = ZX16(MEM16(ebx + 0xC));

loc_002EF751: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF76F; /* je: equal / zero */

loc_002EF755: ;
    ecx = MEM32(0x306BB0);
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + ecx + 0x7C;
    eax = MEM32(ecx);
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = eax;
    goto loc_002EF778;

loc_002EF76F: ;
    MEM32(ebp + -4) = ebx;
    MEM32(edx + -25165824) = ebx;

loc_002EF778: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x64)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x64), LO8(eax) (8-bit) */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -20) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_002EF83C; /* jbe: below or equal (unsigned <=) */

loc_002EF78C: ;
    edx = esi + 0xC;

loc_002EF78F: ;
    eax = ZX16(MEM16(edx));
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EF79E; /* jne: not equal / not zero */

loc_002EF797: ;
    MEM32(ebp + -16) = 1;

loc_002EF79E: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EF7AA; /* jne: not equal / not zero */

loc_002EF7A3: ;
    MEM32(ebp + -20) = 1;

loc_002EF7AA: ;
    edi = ZX16(MEM16(edx));
    ecx = MEM32(0x306BB0);
    eax = edi;
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + ecx + 0x7C;
    eax = MEM32(ecx);
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    eax = ZX8(MEM8(esi + 0x64));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EF78F; /* jb: below (unsigned <) */

loc_002EF7D5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF81A; /* je: equal / zero */

loc_002EF7DC: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF7FC; /* je: equal / zero */

loc_002EF7E1: ;
    eax = MEM32(0x306BB0);
    ecx = ebx;
    ebx = ebx << 7;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(ebx + eax + 0x7C);
    eax = 0xFFFF;
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EF804; /* jne: not equal / not zero */

loc_002EF7FA: ;
    goto loc_002EF801;

loc_002EF7FC: ;
    ecx = 0xFFFF;

loc_002EF801: ;
    ebx = MEM32(ebp + -4);

loc_002EF804: ;
    eax = ZX8(MEM8(esi + 0x65));
    eax = eax + eax * 2;
    eax = MEM32(eax * 4 + 0x3062AC);
    MEM32(eax + -25165824) = ecx;
    goto loc_002EF828;

loc_002EF81A: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF83C; /* je: equal / zero */

loc_002EF81F: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EF828; /* jne: not equal / not zero */

loc_002EF825: ;
    ebx = MEM32(ebp + -4);

loc_002EF828: ;
    eax = ZX8(MEM8(esi + 0x65));
    eax = eax + eax * 2;
    eax = MEM32(eax * 4 + 0x3062B0);
    MEM32(eax + -25165824) = ebx;

loc_002EF83C: ;
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF845u); RECOMP_ABI_CALL(0x002E9F00u, sub_002E9F00); /* call 0x002E9F00 */

loc_002EF845: ;
    ecx = esi + 0x12;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ecx), 0x8000 (16-bit) */
    MEM8(esi + 0x65) = 0xFF;
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_002EF85F; /* je: equal / zero */

loc_002EF854: ;
    SET_LO16(edx, 0x7FFF);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF85Du); RECOMP_ABI_CALL(0x002EF0A6u, sub_002EF0A6); /* call 0x002EF0A6 */

loc_002EF85D: ;
    goto loc_002EF8A3;

loc_002EF85F: ;
    eax = MEM32(esi + 0x68);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    MEM8(eax + 0x3F) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_002EF8A3; /* je: equal / zero */

loc_002EF86D: ;
    ecx = MEM32(esi + 8);
    eax = esi + 0x54;
    _fb = (uint32_t)(0x4A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4A0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esi + 8);
    MEM32(eax + 0x4B8) = MEM32(eax + 0x4B8) | 0x40;
    _fa = (uint32_t)(MEM32(eax + 0x4B8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x4C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C8DC); PUSH32(esp, 0x002EF8A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EF89Du); } /* indirect call */
    }

loc_002EF8A3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EF8A9
 * Original: 0x002EF8A9 - 0x002EF90E (101 bytes, 38 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EF8A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF8A9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF8BEu); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EF8BE: ;
    MEM32(0x306A24) = MEM32(0x306A24) + 1;
    _fa = (uint32_t)(MEM32(0x306A24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 8);
    PUSH32(esp, 1);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF8D1u); RECOMP_ABI_CALL(0x002F2CA6u, sub_002F2CA6); /* call 0x002F2CA6 */

loc_002EF8D1: ;
    ebx = eax;
    SET_LO16(eax, MEM16(esi + 0x12));
    SET_LO16(eax, LO16(eax) & 0x8001);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x8001) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x8001 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EF8EA; /* jne: not equal / not zero */

loc_002EF8E1: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF8EAu); RECOMP_ABI_CALL(0x002EF6CDu, sub_002EF6CD); /* call 0x002EF6CD */

loc_002EF8EA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EF8FB; /* je: equal / zero */

loc_002EF8EE: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF8FBu); RECOMP_ABI_CALL(0x002F2CA6u, sub_002F2CA6); /* call 0x002F2CA6 */

loc_002EF8FB: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002EF902u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EF8FFu); } /* indirect call */
    }

loc_002EF902: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF90Au); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EF90A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002EF90E
 * Original: 0x002EF90E - 0x002EF992 (132 bytes, 47 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EF90E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EF90E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF922u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EF922: ;
    ecx = esi + 0x12;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EF987; /* jne: not equal / not zero */

loc_002EF92D: ;
    SET_LO16(edx, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF936u); RECOMP_ABI_CALL(0x002EF0AAu, sub_002EF0AA); /* call 0x002EF0AA */

loc_002EF936: ;
    eax = ZX8(MEM8(esi + 0x64));
    MEM8(esi + 0x16) = MEM8(esi + 0x16) & 0x7F;
    _fa = (uint32_t)(MEM8(esi + 0x16)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = eax + eax * 2;

loc_002EF941: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EF941; /* jb: below (unsigned <) */

loc_002EF94E: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EF987; /* jbe: below or equal (unsigned <=) */

loc_002EF954: ;
    eax = esi + 0xC;

loc_002EF957: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = ZX16(MEM16(eax));
    MEM32(-25033992) = ecx;
    ecx = MEM32(esi + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_002EF96D; /* je: equal / zero */

loc_002EF967: ;
    ecx = ecx | 0x400000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002EF96D: ;
    MEM32(-25033980) = ecx;
    ecx = ZX16(MEM16(eax));
    MEM32(-25034452) = ecx;
    ecx = ZX8(MEM8(esi + 0x64));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EF957; /* jb: below (unsigned <) */

loc_002EF987: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF98Fu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EF98F: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002EF992
 * Original: 0x002EF992 - 0x002EF9E6 (84 bytes, 34 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EF992(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EF992: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    esi = ecx;
    { uint32_t _icall_target = MEM32(0x31C838); PUSH32(esp, 0x002EF9A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EF99Eu); } /* indirect call */
    }

loc_002EF9A4: ;
    SET_LO16(eax, MEM16(esi + 0x12));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & 0x8001);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x8001) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x8001 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002EF9DA; /* jne: not equal / not zero */

loc_002EF9B2: ;
    ecx = MEM32(esi + 0x78);
    eax = MEM32(esi + 0x7C);
    edx = MEM32(ebp + -4);
    _fb = (uint32_t)(0x4C4B40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x4C4B40)) >> 32) & 1);
    ecx = ecx + 0x4C4B40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_002EF9E3; /* jl: less (signed <) */

loc_002EF9C8: ;
    if (CMP_G(_fas, _fbs)) goto loc_002EF9D1; /* jg: greater (signed >) */

loc_002EF9CA: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002EF9E3; /* jb: below (unsigned <) */

loc_002EF9D1: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EF9D8u); RECOMP_ABI_CALL(0x002EF8A9u, sub_002EF8A9); /* call 0x002EF8A9 */

loc_002EF9D8: ;
    goto loc_002EF9E3;

loc_002EF9DA: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002EF9E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002EF9E0u); } /* indirect call */
    }

loc_002EF9E3: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002EF9E6
 * Original: 0x002EF9E6 - 0x002EFACC (230 bytes, 84 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EF9E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002EF9E6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFA01u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EFA01: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x12;
    SET_LO16(eax, MEM16(edi));
    ebx = 0x444;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 8) = MEM32(ebp + 8) & ebx;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002EFABA; /* je: equal / zero */

loc_002EFA1C: ;
    eax = MEM32(ebp + 8);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edi));
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002EFA44; /* je: equal / zero */

loc_002EFA2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(esi + 8);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002EFA3F; /* je: equal / zero */

loc_002EFA35: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFA3Au); RECOMP_ABI_CALL(0x002EDFD2u, sub_002EDFD2); /* call 0x002EDFD2 */

loc_002EFA3A: ;
    MEM32(ebp + -4) = eax;
    goto loc_002EFA44;

loc_002EFA3F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFA44u); RECOMP_ABI_CALL(0x002EDFF9u, sub_002EDFF9); /* call 0x002EDFF9 */

loc_002EFA44: ;
    SET_LO16(ecx, MEM16(edi));
    eax = MEM32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    SET_LO16(ecx, LO16(ecx) & LO16(ebx));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _cf = (int)((LO16(ecx)) != 0);
    SET_LO16(ecx, (uint32_t)(-(int32_t)LO16(ecx)));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002EFAA7; /* je: equal / zero */

loc_002EFA5F: ;
    SET_LO8(ecx, MEM8(edi));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002EFAA7; /* jne: not equal / not zero */

loc_002EFA69: ;
    ecx = ZX8(MEM8(esi + 0x64));
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x40000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EFA76: ;
    edx = MEM32(-25034736);
    if (2) _cf = (int)(((edx) >> ((2) - 1)) & 1);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002EFA76; /* jb: below (unsigned <) */

loc_002EFA83: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_002EFAA7; /* jbe: below or equal (unsigned <=) */

loc_002EFA89: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + 0xC;

loc_002EFA91: ;
    ebx = ZX16(MEM16(ecx));
    _cf = 0; /* logical op clears CF */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(-25034432) = ebx;
    ebx = ZX8(MEM8(esi + 0x64));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002EFA91; /* jb: below (unsigned <) */

loc_002EFAA7: ;
    SET_LO16(edx, 0xFBBB);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFAB2u); RECOMP_ABI_CALL(0x002EF0A6u, sub_002EF0A6); /* call 0x002EF0A6 */

loc_002EFAB2: ;
    edx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFABAu); RECOMP_ABI_CALL(0x002EF0AAu, sub_002EF0AA); /* call 0x002EF0AA */

loc_002EFABA: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFAC2u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EFAC2: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EFACC
 * Original: 0x002EFACC - 0x002EFC3B (367 bytes, 130 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EFACC(void)
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

loc_002EFACC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -28;
    MEM32(ebp + -8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFAE6u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EFAE6: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EFAFC; /* jne: not equal / not zero */

loc_002EFAED: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EFAFC; /* je: equal / zero */

loc_002EFAFA: ;
    edx = eax;

loc_002EFAFC: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edi = 0xFFFF;
    if (CMP_NE(_fa, _fb)) goto loc_002EFB1A; /* jne: not equal / not zero */

loc_002EFB08: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EFB5B; /* je: equal / zero */

loc_002EFB15: ;
    ecx = eax;
    MEM32(ebp + 0xC) = ecx;

loc_002EFB1A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EFB24; /* je: equal / zero */

loc_002EFB1E: ;
    _fa = (uint32_t)(MEM32(edx + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x40), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EFB5B; /* je: equal / zero */

loc_002EFB24: ;
    eax = MEM32(0x30641C);
    edx = eax;
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EFB3D; /* je: equal / zero */

loc_002EFB32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EFB3D; /* jne: not equal / not zero */

loc_002EFB39: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002EFB40;

loc_002EFB3D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002EFB40: ;
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    edx = ebp + -20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFB59u); RECOMP_ABI_CALL(0x002EF0AEu, sub_002EF0AE); /* call 0x002EF0AE */

loc_002EFB59: ;
    goto loc_002EFB66;

loc_002EFB5B: ;
    eax = 0x3062CC;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -20) = eax;

loc_002EFB66: ;
    SET_LO8(ecx, MEM8(esi + 0x66));
    eax = ZX16(MEM16(esi + 0xC));
    edx = ZX8(LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = edx + eax * 2;
    MEM8(esi + 0x66) = LO8(ecx);

loc_002EFB7B: ;
    ecx = MEM32(-25034736);
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x4C (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EFB7B; /* jb: below (unsigned <) */

loc_002EFB89: ;
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0xFE820160u) = eax;
    edi = MEM32(ebp + -16);
    ecx = MEM32(ebp + -20);
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -12) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - ecx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 8) = 0xFE820400u;
    eax = ecx + 1;

loc_002EFBAB: ;
    ebx = MEM32(ebp + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(ebx + eax));
    ebx = ZX8(MEM8(edi + esi * 2));
    SET_LO8(edx, MEM8(eax));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ZX8(MEM8(eax + -1));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = MEM32(ebp + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 4;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFE82043Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFE82043Cu (32-bit) */
    MEM32(ebx) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_002EFBAB; /* jl: less (signed <) */

loc_002EFBDC: ;
    eax = esi + esi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax + edi));
    SET_LO8(edx, MEM8(eax + ecx));
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EFC0C; /* je: equal / zero */

loc_002EFBEE: ;
    fp_push(MEMF(eax + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3337C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3337c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EFC04; /* jne: not equal / not zero */

loc_002EFBFE: ;
    eax = ZX8(MEM8(ecx + 0x1F));
    goto loc_002EFC0E;

loc_002EFC04: ;
    eax = ZX8(MEM8(edi + 0x1F));
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    goto loc_002EFC0E;

loc_002EFC0C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002EFC0E: ;
    eax = eax << 0x19;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0xFE82043Cu) = eax;
    eax = MEM32(ebp + -8);
    eax = ZX16(MEM16(eax + 0xC));
    MEM32(0xFE8202F8u) = eax;
    eax = MEM32(ebp + -12);
    ecx = ebp + -28;
    MEM32(0xFE82031Cu) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFC34u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EFC34: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002EFC3B
 * Original: 0x002EFC3B - 0x002EFD85 (330 bytes, 116 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EFC3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EFC3B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFC52u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EFC52: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edx = 0xFFFF;
    if (CMP_EQ(_fa, _fb)) goto loc_002EFC71; /* je: equal / zero */

loc_002EFC5E: ;
    PUSH32(esp, 6);
    POP32(esp, ecx);
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
    esi = MEM32(ebp + -20);
    ecx = MEM32(ebp + -24);
    eax = MEM32(ebp + -28);
    goto loc_002EFC9D;

loc_002EFC71: ;
    ecx = MEM32(ebx + 0x38);
    edi = MEM32(ebx + 0x3C);
    esi = ZX16(MEM16(ebx + 0x3A));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebx + 0x1A));
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebx + 0x18);
    eax = eax >> 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -16) = edi;
    edi = ZX16(MEM16(ebx + 0x3E));
    MEM32(ebp + -12) = edi;

loc_002EFC9D: ;
    edi = MEM32(ebx + 0x70);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 8), 0x200010 (32-bit) */
    edi = MEM32(ebp + -32);
    if (TEST_Z(_fa, _fb)) goto loc_002EFCB3; /* je: equal / zero */

loc_002EFCAC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002EFCB3; /* jne: not equal / not zero */

loc_002EFCB0: ;
    PUSH32(esp, 3);
    POP32(esp, edi);

loc_002EFCB3: ;
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = MEM32(ebx + 0x18);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & 0xFFE0FFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi << 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebx + 0x70);
    MEM32(ebx + 0x18) = eax;
    eax = ecx + 0xB8;
    MEM32(ebx + 0x38) = esi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002EFCFE; /* je: equal / zero */

loc_002EFCE7: ;
    _fa = (uint32_t)(MEM8(ecx + 0xB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xB), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EFCFE; /* je: equal / zero */

loc_002EFCED: ;
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 0x30);
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x3C) = ecx;
    eax = MEM32(eax);
    eax = MEM32(eax + 0x34);
    goto loc_002EFD06;

loc_002EFCFE: ;
    ecx = MEM32(ebp + -16);
    eax = MEM32(ebp + -12);
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002EFD06: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebx + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x12), LO8(edx) (8-bit) */
    MEM32(ebx + 0x3C) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002EFD74; /* je: equal / zero */

loc_002EFD16: ;
    eax = ZX8(MEM8(ebx + 0x64));
    ecx = eax + eax * 2;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_002EFD1F: ;
    esi = MEM32(-25034736);
    esi = esi >> 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EFD1F; /* jb: below (unsigned <) */

loc_002EFD2C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EFD74; /* jbe: below or equal (unsigned <=) */

loc_002EFD32: ;
    eax = ebx + 0xC;

loc_002EFD35: ;
    esi = ZX16(MEM16(eax));
    MEM32(-25033992) = esi;
    MEM32(-25033988) = edx;
    esi = MEM32(ebx + 0x18);
    MEM32(-25033960) = esi;
    esi = MEM32(ebx + 0x38);
    MEM32(-25033868) = esi;
    esi = MEM32(ebx + 0x3C);
    MEM32(-25033864) = esi;
    MEM32(-25033988) = 0;
    esi = ZX8(MEM8(ebx + 0x64));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EFD35; /* jb: below (unsigned <) */

loc_002EFD74: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFD7Cu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EFD7C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EFD85
 * Original: 0x002EFD85 - 0x002EFE10 (139 bytes, 45 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EFD85(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EFD85: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp + -8;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFD9Bu); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EFD9B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002EFE02; /* je: equal / zero */

loc_002EFDA3: ;
    ecx = ZX8(MEM8(esi + 0x64));
    ecx = ZX16(MEM16(esi + ecx * 2 + 0xA));
    edx = MEM32(0x306BB0);
    ecx = ecx << 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ecx + edx + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + edx + 0x54), 0x100000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EFE02; /* jne: not equal / not zero */

loc_002EFDBF: ;
    ecx = MEM32(-25034736);
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EFDBF; /* jb: below (unsigned <) */

loc_002EFDCD: ;
    ecx = ZX16(MEM16(esi + 0xC));
    MEM32(-25033992) = ecx;
    MEM32(0xFE8202FCu) = eax;
    eax = ZX16(MEM16(esi + 0xC));
    ecx = MEM32(0x306BB0);
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + ecx + 0x58);
    eax = eax & 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(-25033988) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFE00u); RECOMP_ABI_CALL(0x002EE5A4u, sub_002EE5A4); /* call 0x002EE5A4 */

loc_002EFE00: ;
    edi = eax;

loc_002EFE02: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFE0Au); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EFE0A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002EFE10
 * Original: 0x002EFE10 - 0x002EFE2E (30 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EFE10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EFE10: ;
    eax = MEM32(esp + 4);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(0x306BC0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(0x306BC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    eax = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;
    PUSH32(esp, 0x002EFE2Bu); RECOMP_ABI_CALL(0x002EF0D0u, sub_002EF0D0); /* call 0x002EF0D0 */

loc_002EFE2B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002EFE2E
 * Original: 0x002EFE2E - 0x002EFE45 (23 bytes, 6 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002EFE2E(void)
{

loc_002EFE2E: ;
    eax = ZX16(MEM16(esp + 4));
    PUSH32(esp, 4);
    eax = eax * 4 + 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002EFE42u); RECOMP_ABI_CALL(0x002EFE10u, sub_002EFE10); /* call 0x002EFE10 */

loc_002EFE42: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002EFE45
 * Original: 0x002EFE45 - 0x002EFFBF (378 bytes, 109 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EFE45(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EFE45: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFE5Fu); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EFE5F: ;
    ebx = esi + 0x12;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002EFFB0; /* jne: not equal / not zero */

loc_002EFE6B: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFE74u); RECOMP_ABI_CALL(0x002EDA9Eu, sub_002EDA9E); /* call 0x002EDA9E */

loc_002EFE74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002EFFB0; /* jl: less (signed <) */

loc_002EFE7F: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0xC;
    SET_LO16(eax, MEM16(edi));
    ecx = esi + 0x68;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFE91u); RECOMP_ABI_CALL(0x002EFE2Eu, sub_002EFE2E); /* call 0x002EFE2E */

loc_002EFE91: ;
    SET_LO16(edx, 1);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFE9Cu); RECOMP_ABI_CALL(0x002EF0AAu, sub_002EF0AA); /* call 0x002EF0AA */

loc_002EFE9C: ;
    ebx = esi + 0x14;
    PUSH32(esp, ebx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFEABu); RECOMP_ABI_CALL(0x002EF2D2u, sub_002EF2D2); /* call 0x002EF2D2 */

loc_002EFEAB: ;
    eax = ebp + -56;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFEB6u); RECOMP_ABI_CALL(0x002EF383u, sub_002EF383); /* call 0x002EF383 */

loc_002EFEB6: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFEC1u); RECOMP_ABI_CALL(0x002EF5D7u, sub_002EF5D7); /* call 0x002EF5D7 */

loc_002EFEC1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0x64)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x64), LO8(eax) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002EFF98; /* jbe: below or equal (unsigned <=) */

loc_002EFECC: ;
    ecx = MEM32(-25034736);
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x48) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x48 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EFECC; /* jb: below (unsigned <) */

loc_002EFEDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = ZX16(MEM16(edi));
    MEM32(-25033992) = ecx;
    ecx = MEM32(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_002EFEEF; /* je: equal / zero */

loc_002EFEE9: ;
    ecx = ecx | 0x400000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002EFEEF: ;
    MEM32(-25033980) = ecx;
    ecx = MEM32(esi + 0x18);
    MEM32(-25033960) = ecx;
    ecx = MEM32(esi + 0x1C);
    MEM32(-25033976) = ecx;
    ecx = MEM32(esi + 0x20);
    MEM32(-25033972) = ecx;
    ecx = MEM32(esi + 0x24);
    MEM32(-25033968) = ecx;
    ecx = MEM32(esi + 0x28);
    MEM32(-25033964) = ecx;
    ecx = MEM32(esi + 0x2C);
    MEM32(-25033904) = ecx;
    ecx = MEM32(esi + 0x30);
    MEM32(-25033876) = ecx;
    ecx = MEM32(esi + 0x34);
    MEM32(-25033872) = ecx;
    ecx = MEM32(esi + 0x38);
    MEM32(-25033868) = ecx;
    ecx = MEM32(esi + 0x3C);
    MEM32(-25033864) = ecx;
    ecx = MEM32(ebp + -8);
    MEM32(-25033984) = ecx;
    ecx = MEM32(ebp + eax * 4 + -56);
    MEM32(-25033888) = ecx;
    ecx = MEM32(ebp + eax * 4 + -44);
    MEM32(-25033884) = ecx;
    ecx = MEM32(ebp + eax * 4 + -32);
    MEM32(-25033880) = ecx;
    ecx = MEM32(ebp + -12);
    MEM32(-25033860) = ecx;
    MEM32(-25033956) = 0xFFFF;
    ecx = ZX8(MEM8(esi + 0x64));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002EFECC; /* jb: below (unsigned <) */

loc_002EFF98: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x200010 (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_002EFFB0; /* je: equal / zero */

loc_002EFFA5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFFB0u); RECOMP_ABI_CALL(0x002EFACCu, sub_002EFACC); /* call 0x002EFACC */

loc_002EFFB0: ;
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFFB8u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002EFFB8: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002EFFBF
 * Original: 0x002EFFBF - 0x002F0080 (193 bytes, 62 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002EFFBF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002EFFBF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFFD4u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002EFFD4: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F0073; /* je: equal / zero */

loc_002EFFDE: ;
    PUSH32(esp, edi);
    edi = esi + 0x14;
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFFEEu); RECOMP_ABI_CALL(0x002EF2D2u, sub_002EF2D2); /* call 0x002EF2D2 */

loc_002EFFEE: ;
    eax = ebp + -48;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002EFFF9u); RECOMP_ABI_CALL(0x002EF383u, sub_002EF383); /* call 0x002EF383 */

loc_002EFFF9: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax;
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_002F0002: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F0002; /* jb: below (unsigned <) */

loc_002F000F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002F0072; /* jbe: below or equal (unsigned <=) */

loc_002F0015: ;
    edx = esi + 0xC;

loc_002F0018: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = ZX16(MEM16(edx));
    MEM32(0xFE8202F8u) = eax;
    eax = MEM32(ebp + -4);
    MEM32(-25033988) = 1;
    MEM32(0xFE820300u) = eax;
    eax = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002F003D; /* je: equal / zero */

loc_002F0038: ;
    eax = eax | 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002F003D: ;
    MEM32(0xFE820304u) = eax;
    eax = MEM32(ebp + ecx * 4 + -48);
    MEM32(0xFE820360u) = eax;
    eax = MEM32(ebp + ecx * 4 + -36);
    MEM32(0xFE820364u) = eax;
    eax = MEM32(ebp + ecx * 4 + -24);
    MEM32(0xFE820368u) = eax;
    MEM32(-25033988) = 0;
    eax = ZX8(MEM8(esi + 0x64));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F0018; /* jb: below (unsigned <) */

loc_002F0072: ;
    POP32(esp, edi);

loc_002F0073: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F007Bu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F007B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002F0080
 * Original: 0x002F0080 - 0x002F0118 (152 bytes, 47 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F0080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0080: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0095u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F0095: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F010B; /* je: equal / zero */

loc_002F009B: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F00A6u); RECOMP_ABI_CALL(0x002EF383u, sub_002EF383); /* call 0x002EF383 */

loc_002F00A6: ;
    ecx = ZX8(MEM8(esi + 0x64));
    eax = ecx + ecx * 2;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_002F00AF: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F00AF; /* jb: below (unsigned <) */

loc_002F00BC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002F010B; /* jbe: below or equal (unsigned <=) */

loc_002F00C2: ;
    ecx = esi + 0xC;

loc_002F00C5: ;
    edx = ZX16(MEM16(ecx));
    MEM32(-25033992) = edx;
    edx = MEM32(ebp + eax * 4 + -44);
    MEM32(-25033988) = 1;
    MEM32(-25033888) = edx;
    edx = MEM32(ebp + eax * 4 + -32);
    MEM32(-25033884) = edx;
    edx = MEM32(ebp + eax * 4 + -20);
    MEM32(-25033880) = edx;
    MEM32(-25033988) = 0;
    edx = ZX8(MEM8(esi + 0x64));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F00C5; /* jb: below (unsigned <) */

loc_002F010B: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0113u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F0113: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002F0118
 * Original: 0x002F0118 - 0x002F01AA (146 bytes, 54 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F0118(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0118: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F012Eu); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F012E: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x182000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F0151; /* je: equal / zero */

loc_002F013A: ;
    edi = esi + 0x44;
    esi = MEM32(edi);
    goto loc_002F014B;

loc_002F0141: ;
    ecx = esi + -92;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0149u); RECOMP_ABI_CALL(0x002F0118u, sub_002F0118); /* call 0x002F0118 */

loc_002F0149: ;
    esi = MEM32(esi);

loc_002F014B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F0141; /* jne: not equal / not zero */

loc_002F014F: ;
    goto loc_002F019C;

loc_002F0151: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F019C; /* je: equal / zero */

loc_002F0157: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0162u); RECOMP_ABI_CALL(0x002EF5D7u, sub_002EF5D7); /* call 0x002EF5D7 */

loc_002F0162: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax + eax;

loc_002F0169: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F0169; /* jb: below (unsigned <) */

loc_002F0176: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002F019C; /* jbe: below or equal (unsigned <=) */

loc_002F017C: ;
    eax = esi + 0xC;

loc_002F017F: ;
    edx = ZX16(MEM16(eax));
    MEM32(-25033992) = edx;
    edx = MEM32(ebp + -4);
    MEM32(-25033860) = edx;
    edx = ZX8(MEM8(esi + 0x64));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F017F; /* jb: below (unsigned <) */

loc_002F019C: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F01A4u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F01A4: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002F01AA
 * Original: 0x002F01AA - 0x002F01C6 (28 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F01AA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F01AA: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F01C4; /* je: equal / zero */

loc_002F01B3: ;
    goto loc_002F01BC;

loc_002F01B5: ;
    ecx = esi;
    PUSH32(esp, 0x002F01BCu); RECOMP_ABI_CALL(0x002EF992u, sub_002EF992); /* call 0x002EF992 */

loc_002F01BC: ;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0x12), 0x8000 (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F01B5; /* jne: not equal / not zero */

loc_002F01C4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F01C6
 * Original: 0x002F01C6 - 0x002F022F (105 bytes, 33 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F01C6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F01C6: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x1F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x1F (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F01DC; /* je: equal / zero */

loc_002F01D7: ;
    PUSH32(esp, 0x002F01DCu); RECOMP_ABI_CALL(0x002F0080u, sub_002F0080); /* call 0x002F0080 */

loc_002F01DC: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F01F1; /* je: equal / zero */

loc_002F01EA: ;
    ecx = esi;
    PUSH32(esp, 0x002F01F1u); RECOMP_ABI_CALL(0x002F0118u, sub_002F0118); /* call 0x002F0118 */

loc_002F01F1: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F020A; /* je: equal / zero */

loc_002F01FF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x002F020Au); RECOMP_ABI_CALL(0x002EFACCu, sub_002EFACC); /* call 0x002EFACC */

loc_002F020A: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F0221; /* je: equal / zero */

loc_002F0218: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x002F0221u); RECOMP_ABI_CALL(0x002EFC3Bu, sub_002EFC3B); /* call 0x002EFC3B */

loc_002F0221: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F022F
 * Original: 0x002F022F - 0x002F0294 (101 bytes, 34 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F022F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F022F: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi + 4) = 1;
    MEM32(esi) = 0x322AB8;
    MEM32(esi + 0x68) = MEM32(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x6C) = MEM32(esi + 0x6C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x002F0251u); RECOMP_ABI_CALL(0x002EAE70u, sub_002EAE70); /* call 0x002EAE70 */

loc_002F0251: ;
    PUSH32(esp, MEM32(esp + 0x10));
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x002F025Du); RECOMP_ABI_CALL(0x002EAE70u, sub_002EAE70); /* call 0x002EAE70 */

loc_002F025D: ;
    MEM32(esi + 0x70) = eax;
    eax = esi + 0x4C;
    MEM32(esi + 0x50) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x54;
    MEM32(esi + 0x58) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x5C;
    MEM32(esi + 0x60) = eax;
    MEM32(eax) = eax;
    eax = esi + 0x44;
    MEM32(esi + 0x48) = eax;
    MEM32(eax) = eax;
    MEM8(esi + 0x65) = 0xFF;
    edi = esi + 0xC;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002F0294
 * Original: 0x002F0294 - 0x002F03CE (314 bytes, 110 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F0294(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0294: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0x12;
    eax = ZX16(MEM16(edi));
    eax = eax & 0xFFFFFFBFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F02B2u); RECOMP_ABI_CALL(0x002EF9E6u, sub_002EF9E6); /* call 0x002EF9E6 */

loc_002F02B2: ;
    SET_LO8(eax, MEM8(edi));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F03AC; /* jne: not equal / not zero */

loc_002F02BE: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F02C6u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F02C6: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x84) = MEM32(eax + 0x84) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(edx, 0x3111);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F02DBu); RECOMP_ABI_CALL(0x002EF0A6u, sub_002EF0A6); /* call 0x002EF0A6 */

loc_002F02DB: ;
    MEM16(esi + 0x16) = MEM16(esi + 0x16) & 0xFD7F;
    _fa = (uint32_t)(MEM16(esi + 0x16)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(esi + 0x65)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x65), 3 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002F033D; /* jae: above or equal (unsigned >=) */

loc_002F02E7: ;
    SET_LO16(edx, 0x8000);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F02F0u); RECOMP_ABI_CALL(0x002EF0AAu, sub_002EF0AA); /* call 0x002EF0AA */

loc_002F02F0: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax + eax * 2;

loc_002F02F7: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F02F7; /* jb: below (unsigned <) */

loc_002F0304: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002F033D; /* jbe: below or equal (unsigned <=) */

loc_002F030A: ;
    eax = esi + 0xC;

loc_002F030D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    ecx = ZX16(MEM16(eax));
    MEM32(-25033992) = ecx;
    ecx = MEM32(esi + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_002F0323; /* je: equal / zero */

loc_002F031D: ;
    ecx = ecx | 0x400000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002F0323: ;
    MEM32(-25033980) = ecx;
    ecx = ZX16(MEM16(eax));
    MEM32(-25034456) = ecx;
    ecx = ZX8(MEM8(esi + 0x64));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F030D; /* jb: below (unsigned <) */

loc_002F033D: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax + 0x84) = MEM32(eax + 0x84) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + 0x78;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C838); PUSH32(esp, 0x002F0351u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F034Bu); } /* indirect call */
    }

loc_002F0351: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F0361; /* jne: not equal / not zero */

loc_002F0356: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002F0361u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F035Eu); } /* indirect call */
    }

loc_002F0361: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F03A2; /* je: equal / zero */

loc_002F036E: ;
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F03A2; /* je: equal / zero */

loc_002F0375: ;
    eax = MEM32(ecx + 0x80);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x82000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F03A2; /* je: equal / zero */

loc_002F0384: ;
    edi = ecx + 0x44;
    eax = MEM32(edi);
    goto loc_002F0398;

loc_002F038B: ;
    SET_LO8(edx, MEM8(eax + -74));
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F03A2; /* je: equal / zero */

loc_002F0396: ;
    eax = MEM32(eax);

loc_002F0398: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F038B; /* jne: not equal / not zero */

loc_002F039C: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F03A2u); RECOMP_ABI_CALL(0x002F107Bu, sub_002F107B); /* call 0x002F107B */

loc_002F03A2: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F03AAu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F03AA: ;
    goto loc_002F03BB;

loc_002F03AC: ;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(edi), 0x8000 (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F03BB; /* jne: not equal / not zero */

loc_002F03B3: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002F03BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F03B8u); } /* indirect call */
    }

loc_002F03BB: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F03C7; /* je: equal / zero */

loc_002F03C0: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F03C7u); RECOMP_ABI_CALL(0x002F01AAu, sub_002F01AA); /* call 0x002F01AA */

loc_002F03C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F03CE
 * Original: 0x002F03CE - 0x002F0453 (133 bytes, 44 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F03CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F03CE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F03DDu); RECOMP_ABI_CALL(0x002E9F69u, sub_002E9F69); /* call 0x002E9F69 */

loc_002F03DD: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F0448; /* jne: not equal / not zero */

loc_002F03E6: ;
    eax = MEM32(esi + 0x70);
    PUSH32(esp, MEM32(eax + 0xB4));
    eax = MEM32(esi + 8);
    eax = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F03FEu); RECOMP_ABI_CALL(0x002EBCCCu, sub_002EBCCC); /* call 0x002EBCCC */

loc_002F03FE: ;
    eax = MEM32(esi + 0x70);
    PUSH32(esp, MEM32(eax + 0xB8));
    edx = MEM32(eax + 0xB4);
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + 0xC);
    eax = edx + 0x7C;
    PUSH32(esp, eax);
    eax = ecx + 0x80;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0428u); RECOMP_ABI_CALL(0x002EAB58u, sub_002EAB58); /* call 0x002EAB58 */

loc_002F0428: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB4);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB4);
    MEM32(eax + 0x7C) = MEM32(eax + 0x7C) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x7C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0448u); RECOMP_ABI_CALL(0x002F01C6u, sub_002F01C6); /* call 0x002F01C6 */

loc_002F0448: ;
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0450u); RECOMP_ABI_CALL(0x002E9F8Eu, sub_002E9F8E); /* call 0x002E9F8E */

loc_002F0450: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002F0453
 * Original: 0x002F0453 - 0x002F055A (263 bytes, 84 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F0453(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0453: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp + -16;
    MEM32(ebp + -12) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F046Au); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F046A: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F054C; /* je: equal / zero */

loc_002F047B: ;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F054C; /* je: equal / zero */

loc_002F0484: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F0495; /* jne: not equal / not zero */

loc_002F048D: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0495u); RECOMP_ABI_CALL(0x002F0294u, sub_002F0294); /* call 0x002F0294 */

loc_002F0495: ;
    eax = esi + 0x5C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F049Eu); RECOMP_ABI_CALL(0x002E9F00u, sub_002E9F00); /* call 0x002E9F00 */

loc_002F049E: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F054C; /* je: equal / zero */

loc_002F04A8: ;
    edi = esi + 0x14;
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F04B7u); RECOMP_ABI_CALL(0x002EF2D2u, sub_002EF2D2); /* call 0x002EF2D2 */

loc_002F04B7: ;
    eax = ebp + -52;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F04C2u); RECOMP_ABI_CALL(0x002EF383u, sub_002EF383); /* call 0x002EF383 */

loc_002F04C2: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F04CDu); RECOMP_ABI_CALL(0x002EF5D7u, sub_002EF5D7); /* call 0x002EF5D7 */

loc_002F04CD: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax + eax * 8;

loc_002F04D4: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F04D4; /* jb: below (unsigned <) */

loc_002F04E1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002F054C; /* jbe: below or equal (unsigned <=) */

loc_002F04E7: ;
    edx = esi + 0xC;

loc_002F04EA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = ZX16(MEM16(edx));
    MEM32(0xFE8202F8u) = eax;
    eax = MEM32(ebp + -4);
    MEM32(-25033988) = 1;
    MEM32(0xFE820300u) = eax;
    eax = MEM32(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002F050F; /* je: equal / zero */

loc_002F050A: ;
    eax = eax | 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002F050F: ;
    MEM32(0xFE820304u) = eax;
    eax = MEM32(ebp + ecx * 4 + -52);
    MEM32(0xFE820360u) = eax;
    eax = MEM32(ebp + ecx * 4 + -40);
    MEM32(0xFE820364u) = eax;
    eax = MEM32(ebp + ecx * 4 + -28);
    MEM32(0xFE820368u) = eax;
    eax = MEM32(ebp + -8);
    MEM32(0xFE82037Cu) = eax;
    MEM32(-25033988) = 0;
    eax = ZX8(MEM8(esi + 0x64));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F04EA; /* jb: below (unsigned <) */

loc_002F054C: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0554u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F0554: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002F055A
 * Original: 0x002F055A - 0x002F0592 (56 bytes, 21 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F055A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F055A: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x322AB8;
    PUSH32(esp, 0x002F0568u); RECOMP_ABI_CALL(0x002F0453u, sub_002F0453); /* call 0x002F0453 */

loc_002F0568: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0579; /* je: equal / zero */

loc_002F056F: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x002F0575u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F0572u); } /* indirect call */
    }

loc_002F0575: ;
    MEM32(esi + 0x70) = MEM32(esi + 0x70) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002F0579: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F058A; /* je: equal / zero */

loc_002F0580: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x002F0586u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F0583u); } /* indirect call */
    }

loc_002F0586: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002F058A: ;
    MEM32(esi) = 0x322A18;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F0592
 * Original: 0x002F0592 - 0x002F075E (460 bytes, 140 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F0592(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002F0592: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x12;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -20) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_002F075A; /* jne: not equal / not zero */

loc_002F05AF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F05B4u); RECOMP_ABI_CALL(0x002F01AAu, sub_002F01AA); /* call 0x002F01AA */

loc_002F05B4: ;
    SET_LO16(edx, 2);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F05BFu); RECOMP_ABI_CALL(0x002EF0AAu, sub_002EF0AA); /* call 0x002EF0AA */

loc_002F05BF: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_002F05CF; /* je: equal / zero */

loc_002F05C8: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F05CFu); RECOMP_ABI_CALL(0x002F03CEu, sub_002F03CE); /* call 0x002F03CE */

loc_002F05CF: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(eax + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002F05FB; /* je: equal / zero */

loc_002F05DC: ;
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002F05FB; /* je: equal / zero */

loc_002F05E3: ;
    ecx = MEM32(eax + 0x80);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 8), 0x82000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_002F05FB; /* je: equal / zero */

loc_002F05F2: ;
    PUSH32(esp, 0);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F05FBu); RECOMP_ABI_CALL(0x002F0FADu, sub_002F0FAD); /* call 0x002F0FAD */

loc_002F05FB: ;
    ecx = ebp + -28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0603u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F0603: ;
    eax = MEM32(0xFE820010u);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002F0603; /* jb: below (unsigned <) */

loc_002F0612: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax + 0x84)) + (uint64_t)(1)) >> 32) & 1);
    MEM32(eax + 0x84) = MEM32(eax + 0x84) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + 0x68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0624u); RECOMP_ABI_CALL(0x002EF0D0u, sub_002EF0D0); /* call 0x002EF0D0 */

loc_002F0624: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_002F062F; /* je: equal / zero */

loc_002F0629: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x16) = MEM8(esi + 0x16) | 0x80;
    _fa = (uint32_t)(MEM8(esi + 0x16)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_002F0633;

loc_002F062F: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x16) = MEM8(esi + 0x16) & 0x7F;
    _fa = (uint32_t)(MEM8(esi + 0x16)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_002F0633: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -1;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0642u); RECOMP_ABI_CALL(0x002EF659u, sub_002EF659); /* call 0x002EF659 */

loc_002F0642: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0654; /* je: equal / zero */

loc_002F0649: ;
    ecx = ZX8(MEM8(eax + 0x64));
    eax = ZX16(MEM16(eax + ecx * 2 + 0xA));
    goto loc_002F0666;

loc_002F0654: ;
    eax = ZX8(MEM8(ebp + -1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (0x10) _cf = (int)(((eax) >> (32 - (0x10))) & 1);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x30000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002F0666: ;
    SET_LO16(ecx, MEM16(edi));
    edx = ZX8(MEM8(esi + 0x64));
    _cf = 0; /* logical op clears CF */
    SET_LO16(ecx, LO16(ecx) & 0x444);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _cf = (int)((LO16(ecx)) != 0);
    SET_LO16(ecx, (uint32_t)(-(int32_t)LO16(ecx)));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    MEM32(ebp + -12) = eax;
    eax = edx;
    PUSH32(esp, ebx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)7);

loc_002F0686: ;
    ebx = MEM32(-25034736);
    if (2) _cf = (int)(((ebx) >> ((2) - 1)) & 1);
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002F0686; /* jb: below (unsigned <) */

loc_002F0693: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = edx;
    if ((_fas < 0)) goto loc_002F0701; /* js: sign (negative) */

loc_002F0699: ;
    ebx = esi + edx * 2 + 0xC;
    edi = 0xFFFF0000u;

loc_002F06A2: ;
    edx = ZX16(MEM16(ebx));
    eax = MEM32(esi + 0x40);
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(-25033992) = edx;
    MEM32(-25033988) = 1;
    edx = MEM32(esi + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_002F06CF; /* je: equal / zero */

loc_002F06C9: ;
    _cf = 0; /* logical op clears CF */
    edx = edx | 0x400000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002F06CF: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(-25033980) = edx;
    edx = MEM32(ebp + -12);
    MEM32(-25034464) = edx;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0xFE820124u) = eax;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(-25034432) = ecx;
    MEM32(-25033988) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_002F06A2; /* jge: greater or equal (signed >=) */

loc_002F06FE: ;
    edi = MEM32(ebp + -20);

loc_002F0701: ;
    ecx = MEM32(ebp + -16);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    eax = esi + 0x4C;
    if (CMP_EQ(_fa, _fb)) goto loc_002F0711; /* je: equal / zero */

loc_002F070C: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x4C)) >> 32) & 1);
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002F071F;

loc_002F0711: ;
    ecx = ZX8(MEM8(ebp + -1));
    edx = MEM32(esi + 8);
    ecx = edx + ecx * 8 + 0x488;

loc_002F071F: ;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(eax);
    MEM32(ecx + 4) = eax;
    ecx = MEM32(eax + 4);
    MEM32(ecx) = eax;
    SET_LO8(eax, MEM8(ebp + -1));
    MEM8(esi + 0x65) = LO8(eax);

loc_002F0736: ;
    eax = MEM32(0xFE820010u);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002F0736; /* jb: below (unsigned <) */

loc_002F0745: ;
    esi = MEM32(esi + 8);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(esi + 0x84)) < (uint32_t)(1));
    MEM32(esi + 0x84) = MEM32(esi + 0x84) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebp + -28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0757u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F0757: ;
    SET_LO16(eax, MEM16(edi));

loc_002F075A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002F075E
 * Original: 0x002F075E - 0x002F0779 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F075E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F075E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002F0766u); RECOMP_ABI_CALL(0x002F055Au, sub_002F055A); /* call 0x002F055A */

loc_002F0766: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F0773; /* je: equal / zero */

loc_002F076D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002F0773u); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002F0773: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F0779
 * Original: 0x002F0779 - 0x002F07EB (114 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F0779(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0779: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F078Du); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F078D: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(0x18) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA), 0x18 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F07AC; /* je: equal / zero */

loc_002F0799: ;
    ecx = MEM32(eax + 0xBC);
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x7FF;
    goto loc_002F07D3;

loc_002F07AC: ;
    eax = MEM32(eax + 0xBC);
    ecx = MEM32(ebp + 8);
    edx = 0xFFF;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x84);
    eax = ZX16(MEM16(eax + 8));
    PUSH32(esp, edi);
    edi = ecx;
    edi = edi >> 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);

loc_002F07D3: ;
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ebp + -8;
    MEM32(esi + 0x154) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F07E6u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F07E6: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F07EB
 * Original: 0x002F07EB - 0x002F082E (67 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F07EB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F07EB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x002F07F5u); RECOMP_ABI_CALL(0x002F107Bu, sub_002F107B); /* call 0x002F107B */

loc_002F07F5: ;
    ecx = esi;
    PUSH32(esp, 0x002F07FCu); RECOMP_ABI_CALL(0x002F01AAu, sub_002F01AA); /* call 0x002F01AA */

loc_002F07FC: ;
    ecx = esi + 0x12;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ecx), 0x100 (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F082C; /* je: equal / zero */

loc_002F0806: ;
    PUSH32(esp, edi);
    SET_LO16(edx, 0xFEFF);
    PUSH32(esp, 0x002F0810u); RECOMP_ABI_CALL(0x002EF0A6u, sub_002EF0A6); /* call 0x002EF0A6 */

loc_002F0810: ;
    edi = esi + 0x84;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F082B; /* je: equal / zero */

loc_002F081C: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002F0828u); RECOMP_ABI_CALL(0x002EF045u, sub_002EF045); /* call 0x002EF045 */

loc_002F0828: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002F082B: ;
    POP32(esp, edi);

loc_002F082C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F082E
 * Original: 0x002F082E - 0x002F096F (321 bytes, 101 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F082E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F082E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0845u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F0845: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 1 (8-bit) */
    ecx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_002F0886; /* je: equal / zero */

loc_002F084D: ;
    MEM8(esi + 0x17) = MEM8(esi + 0x17) | 2;
    _fa = (uint32_t)(MEM8(esi + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi = MEM32(esi + 0x80);
    ebx = MEM32(edi + 0xCC);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0863u); RECOMP_ABI_CALL(0x002EE58Bu, sub_002EE58B); /* call 0x002EE58B */

loc_002F0863: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(edi + 0xD0);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0876u); RECOMP_ABI_CALL(0x002EE58Bu, sub_002EE58B); /* call 0x002EE58B */

loc_002F0876: ;
    ecx = esi + 0x12;
    SET_LO16(edx, 0x200);
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0884u); RECOMP_ABI_CALL(0x002EF0AAu, sub_002EF0AA); /* call 0x002EF0AA */

loc_002F0884: ;
    goto loc_002F08AD;

loc_002F0886: ;
    eax = MEM32(esi + 0x80);
    MEM8(esi + 0x17) = MEM8(esi + 0x17) & 0xFD;
    _fa = (uint32_t)(MEM8(esi + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, MEM32(eax + 0xC8));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F089Fu); RECOMP_ABI_CALL(0x002EE58Bu, sub_002EE58B); /* call 0x002EE58B */

loc_002F089F: ;
    ecx = esi + 0x12;
    SET_LO16(edx, 0xFDFF);
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F08ADu); RECOMP_ABI_CALL(0x002EF0A6u, sub_002EF0A6); /* call 0x002EF0A6 */

loc_002F08AD: ;
    eax = MEM32(esi + 0x80);
    eax = ZX8(MEM8(eax + 0xF));
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = ZX8(MEM8(esi + 0x64));
    edx = ecx;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx << 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -8) = eax;

loc_002F08CC: ;
    eax = MEM32(0xFE820010u);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F08CC; /* jb: below (unsigned <) */

loc_002F08D8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002F0950; /* jbe: below or equal (unsigned <=) */

loc_002F08DE: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 8) = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi + 0xC;

loc_002F08EC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = ZX16(MEM16(edx));
    MEM32(-25033992) = ecx;
    MEM32(-25033988) = 1;
    ecx = MEM32(esi + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_002F090C; /* je: equal / zero */

loc_002F0906: ;
    ecx = ecx | 0x400000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002F090C: ;
    MEM32(-25033980) = ecx;
    ecx = MEM32(esi + 0x154);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(-25033824) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(-25033764) = ebx;
    MEM32(-25033820) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F093C; /* je: equal / zero */

loc_002F0936: ;
    MEM32(-25033768) = ecx;

loc_002F093C: ;
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(-25033988) = ecx;
    ecx = ZX8(MEM8(esi + 0x64));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F08EC; /* jb: below (unsigned <) */

loc_002F0950: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0958u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F0958: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F095Fu); RECOMP_ABI_CALL(0x002F0592u, sub_002F0592); /* call 0x002F0592 */

loc_002F095F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002F0968u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F0965u); } /* indirect call */
    }

loc_002F0968: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F096F
 * Original: 0x002F096F - 0x002F0AEE (383 bytes, 113 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F096F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F096F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 9);
    POP32(esp, ecx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ebp + -44;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp + -8;
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0992u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F0992: ;
    ecx = ZX8(MEM8(esi + 0x64));
    MEM8(esi + 0x17) = MEM8(esi + 0x17) | 2;
    _fa = (uint32_t)(MEM8(esi + 0x17)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = ecx + ecx * 4;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_002F099F: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F099F; /* jb: below (unsigned <) */

loc_002F09AC: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002F0A25; /* jbe: below or equal (unsigned <=) */

loc_002F09B5: ;
    edx = esi + 0xC;

loc_002F09B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = ZX16(MEM16(edx));
    MEM32(-25033992) = ecx;
    MEM32(-25033988) = edi;
    ecx = MEM32(esi + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_002F09D4; /* je: equal / zero */

loc_002F09CE: ;
    ecx = ecx | 0x400000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002F09D4: ;
    MEM32(-25033980) = ecx;
    ecx = MEM32(ebp + eax * 4 + -44);
    MEM32(-25033888) = ecx;
    ecx = MEM32(ebp + eax * 4 + -32);
    MEM32(-25033884) = ecx;
    ecx = MEM32(ebp + eax * 4 + -20);
    MEM32(-25033880) = ecx;
    ecx = MEM32(esi + 0x154);
    MEM32(-25033824) = ecx;
    MEM32(-25033764) = 0x20;
    MEM32(-25033820) = ebx;
    MEM32(-25033988) = ebx;
    ecx = ZX8(MEM8(esi + 0x64));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F09B8; /* jb: below (unsigned <) */

loc_002F0A25: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0A2Du); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F0A2D: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0A34u); RECOMP_ABI_CALL(0x002F0592u, sub_002F0592); /* call 0x002F0592 */

loc_002F0A34: ;
    eax = ZX8(MEM8(esi + 0x64));
    eax = ZX16(MEM16(esi + eax * 2 + 0xA));
    ecx = MEM32(0x306BB0);
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x54;

loc_002F0A4A: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x100000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F0A4A; /* jne: not equal / not zero */

loc_002F0A52: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0A5Cu); RECOMP_ABI_CALL(0x002F082Eu, sub_002F082E); /* call 0x002F082E */

loc_002F0A5C: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0A64u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F0A64: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0A6Fu); RECOMP_ABI_CALL(0x002EF383u, sub_002EF383); /* call 0x002EF383 */

loc_002F0A6F: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0A79u); RECOMP_ABI_CALL(0x002EE58Bu, sub_002EE58B); /* call 0x002EE58B */

loc_002F0A79: ;
    edx = ZX8(MEM8(esi + 0x64));
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)7);

loc_002F0A82: ;
    ebx = MEM32(-25034736);
    ebx = ebx >> 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F0A82; /* jb: below (unsigned <) */

loc_002F0A8F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002F0ADF; /* jbe: below or equal (unsigned <=) */

loc_002F0A95: ;
    edx = esi + 0xC;

loc_002F0A98: ;
    ebx = ZX16(MEM16(edx));
    MEM32(-25033992) = ebx;
    MEM32(-25033988) = edi;
    ebx = MEM32(ebp + ecx * 4 + -44);
    MEM32(-25033888) = ebx;
    ebx = MEM32(ebp + ecx * 4 + -32);
    MEM32(-25033884) = ebx;
    ebx = MEM32(ebp + ecx * 4 + -20);
    MEM32(-25033880) = ebx;
    MEM32(0xFE8203D8u) = eax;
    MEM32(-25033988) = 0;
    ebx = ZX8(MEM8(esi + 0x64));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F0A98; /* jb: below (unsigned <) */

loc_002F0ADF: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0AE7u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F0AE7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002F0AEE
 * Original: 0x002F0AEE - 0x002F0B61 (115 bytes, 43 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F0AEE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0AEE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0B02u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F0B02: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F0B4F; /* jne: not equal / not zero */

loc_002F0B0B: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F0B24; /* jne: not equal / not zero */

loc_002F0B11: ;
    eax = ZX16(MEM16(esi + 0x12));
    eax = eax & 0xFFFFFFBBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002F0B18: ;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0B20u); RECOMP_ABI_CALL(0x002EF9E6u, sub_002EF9E6); /* call 0x002EF9E6 */

loc_002F0B20: ;
    esi = eax;
    goto loc_002F0B52;

loc_002F0B24: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F0B36; /* jne: not equal / not zero */

loc_002F0B2A: ;
    eax = ZX16(MEM16(esi + 0x12));
    eax = eax & 0xFFFFFFBFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002F0B18;

loc_002F0B36: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F0B48; /* jne: not equal / not zero */

loc_002F0B3C: ;
    eax = ZX16(MEM16(esi + 0x12));
    eax = eax & 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002F0B18;

loc_002F0B48: ;
    esi = 0x80004005u;
    goto loc_002F0B52;

loc_002F0B4F: ;
    esi = MEM32(ebp + 8);

loc_002F0B52: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0B5Au); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F0B5A: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F0B61
 * Original: 0x002F0B61 - 0x002F0BA3 (66 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002F0B61(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002F0B61: ;
    eax = ZX16(MEM16(ecx + 0x12));
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002F0B8A; /* jne: not equal / not zero */

loc_002F0B6F: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x444) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), 0x444 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, 0);
    POP32(esp, edx);
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ecx) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_002F0B9E; /* je: equal / zero */

loc_002F0B85: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) | 4;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002F0B9E;

loc_002F0B8A: ;
    ecx = 0x8001;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 4);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;

loc_002F0B9E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F0BA3
 * Original: 0x002F0BA3 - 0x002F0C82 (223 bytes, 75 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F0BA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0BA3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0BB9u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F0BB9: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F0C53; /* jne: not equal / not zero */

loc_002F0BC6: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0BCDu); RECOMP_ABI_CALL(0x002EFD85u, sub_002EFD85); /* call 0x002EFD85 */

loc_002F0BCD: ;
    ebx = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0BD8; /* je: equal / zero */

loc_002F0BD6: ;
    MEM32(eax) = ebx;

loc_002F0BD8: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0C71; /* je: equal / zero */

loc_002F0BE3: ;
    PUSH32(esp, 0x20);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0BECu); RECOMP_ABI_CALL(0x002EE5A4u, sub_002EE5A4); /* call 0x002EE5A4 */

loc_002F0BEC: ;
    ecx = MEM32(esi + 0x80);
    ecx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002F0BFB; /* jae: above or equal (unsigned >=) */

loc_002F0BF9: ;
    eax = ecx;

loc_002F0BFB: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0x12), 0x200 (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F0C41; /* je: equal / zero */

loc_002F0C07: ;
    ecx = MEM32(esi + 0x80);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xCC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0xCC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F0C41; /* jb: below (unsigned <) */

loc_002F0C15: ;
    edx = MEM32(ecx + 0xD0);
    _fb = (uint32_t)(MEM32(ecx + 0xCC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 0xCC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002F0C41; /* jae: above or equal (unsigned >=) */

loc_002F0C25: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0xD0));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0xD0)); }
    MEM32(edi) = edx;
    eax = MEM32(esi + 0x80);
    eax = MEM32(eax + 0xCC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    goto loc_002F0C71;

loc_002F0C41: ;
    ecx = MEM32(esi + 0x80);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ecx + 0xC0));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ecx + 0xC0)); }
    MEM32(edi) = edx;
    goto loc_002F0C71;

loc_002F0C53: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0C62; /* je: equal / zero */

loc_002F0C5A: ;
    ecx = MEM32(esi + 0x148);
    MEM32(eax) = ecx;

loc_002F0C62: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0C71; /* je: equal / zero */

loc_002F0C69: ;
    ecx = MEM32(esi + 0x148);
    MEM32(eax) = ecx;

loc_002F0C71: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0C79u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F0C79: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002F0C82
 * Original: 0x002F0C82 - 0x002F0CC9 (71 bytes, 31 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0C82(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0C82: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x68;
    PUSH32(esp, 3);
    ecx = edi;
    PUSH32(esp, 0x002F0C93u); RECOMP_ABI_CALL(0x002EE56Du, sub_002EE56D); /* call 0x002EE56D */

loc_002F0C93: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0CC3; /* je: equal / zero */

loc_002F0C99: ;
    eax = MEM32(edi);
    PUSH32(esp, 0);
    ecx = esi;
    MEM8(eax + 0x3F) = 0x80;
    PUSH32(esp, 0x002F0CA8u); RECOMP_ABI_CALL(0x002F0294u, sub_002F0294); /* call 0x002F0294 */

loc_002F0CA8: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F0CC3; /* je: equal / zero */

loc_002F0CB4: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002F0CC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F0CC0u); } /* indirect call */
    }

loc_002F0CC3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F0CC9
 * Original: 0x002F0CC9 - 0x002F0D2A (97 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0CC9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0CC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    goto loc_002F0D0B;

loc_002F0CD3: ;
    eax = MEM32(esi + 0x80);
    ecx = MEM32(esi + 0x150);
    eax = MEM32(eax + 0xD8);
    eax = eax + ecx * 8;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0D1F; /* je: equal / zero */

loc_002F0CEF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002F0D1F; /* jae: above or equal (unsigned >=) */

loc_002F0CF3: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0D05; /* je: equal / zero */

loc_002F0CFA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 4));
    { uint32_t _icall_target = MEM32(0x31C870); PUSH32(esp, 0x002F0D05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F0CFFu); } /* indirect call */
    }

loc_002F0D05: ;
    MEM32(esi + 0x150) = MEM32(esi + 0x150) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x150)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002F0D0B: ;
    eax = MEM32(esi + 0x80);
    ecx = MEM32(esi + 0x150);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xDC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xDC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F0CD3; /* jb: below (unsigned <) */

loc_002F0D1F: ;
    MEM32(esi + 0x14C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002F0D2A
 * Original: 0x002F0D2A - 0x002F0D64 (58 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0D2A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0D2A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x80);
    esi = MEM32(eax + 0xDC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002F0D61; /* jbe: below or equal (unsigned <=) */

loc_002F0D3E: ;
    eax = MEM32(edi + 0x80);
    eax = MEM32(eax + 0xD8);
    eax = eax + esi * 8;
    _fa = (uint32_t)(MEM32(eax + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F0D61; /* jne: not equal / not zero */

loc_002F0D53: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + -4));
    { uint32_t _icall_target = MEM32(0x31C870); PUSH32(esp, 0x002F0D5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F0D58u); } /* indirect call */
    }

loc_002F0D5E: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002F0D3E; /* jne: not equal / not zero */

loc_002F0D61: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F0D64
 * Original: 0x002F0D64 - 0x002F0D93 (47 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0D64(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0D64: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x88;
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F0D90u); RECOMP_ABI_CALL(0x002EE3C9u, sub_002EE3C9); /* call 0x002EE3C9 */

loc_002F0D90: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002F0D93
 * Original: 0x002F0D93 - 0x002F0DAD (26 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0D93(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0D93: ;
    eax = MEM32(esp + 4);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x88;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F0DAAu); RECOMP_ABI_CALL(0x002EE1ECu, sub_002EE1EC); /* call 0x002EE1EC */

loc_002F0DAA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F0DAD
 * Original: 0x002F0DAD - 0x002F0E09 (92 bytes, 25 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0DAD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0DAD: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x002F0DBDu); RECOMP_ABI_CALL(0x002F022Fu, sub_002F022F); /* call 0x002F022F */

loc_002F0DBD: ;
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi) = 0x322AE0;
    PUSH32(esp, 0x002F0DCCu); RECOMP_ABI_CALL(0x002EAE70u, sub_002EAE70); /* call 0x002EAE70 */

loc_002F0DCC: ;
    MEM32(esi + 0x80) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x88;

loc_002F0DDA: ;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    MEM32(eax + 0xC) = esi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F0DDA; /* jb: below (unsigned <) */

loc_002F0DEE: ;
    MEM32(esi + 0x90) = MEM32(esi + 0x90) | 5;
    _fa = (uint32_t)(MEM32(esi + 0x90)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xB0) = MEM32(esi + 0xB0) | 5;
    _fa = (uint32_t)(MEM32(esi + 0xB0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xD0) = MEM32(esi + 0xD0) | 5;
    _fa = (uint32_t)(MEM32(esi + 0xD0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002F0E09
 * Original: 0x002F0E09 - 0x002F0E6E (101 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0E09(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0E09: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x12;
    edx = 0x100;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ecx), LO16(edx) (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F0E54; /* jne: not equal / not zero */

loc_002F0E1C: ;
    PUSH32(esp, 0x002F0E21u); RECOMP_ABI_CALL(0x002EF0AAu, sub_002EF0AA); /* call 0x002EF0AA */

loc_002F0E21: ;
    eax = MEM32(esi + 0x80);
    PUSH32(esp, MEM32(eax + 0xC0));
    ecx = MEM32(esi + 8);
    PUSH32(esp, MEM32(eax + 0xBC));
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x60;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002F0E3Eu); RECOMP_ABI_CALL(0x002EEEA6u, sub_002EEEA6); /* call 0x002EEEA6 */

loc_002F0E3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x84) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002F0E59; /* jne: not equal / not zero */

loc_002F0E48: ;
    ecx = esi;
    edi = 0x8007000Eu;
    PUSH32(esp, 0x002F0E54u); RECOMP_ABI_CALL(0x002F07EBu, sub_002F07EB); /* call 0x002F07EB */

loc_002F0E54: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002F0E59: ;
    eax = MEM32(esi + 0x80);
    PUSH32(esp, MEM32(eax + 0xC4));
    ecx = esi;
    PUSH32(esp, 0x002F0E6Cu); RECOMP_ABI_CALL(0x002F0779u, sub_002F0779); /* call 0x002F0779 */

loc_002F0E6C: ;
    goto loc_002F0E54;

}

/**
 * sub_002F0E6E
 * Original: 0x002F0E6E - 0x002F0EC0 (82 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0E6E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0E6E: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = edi + 0x12;
    edx = 0x100;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ecx), LO16(edx) (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F0EBE; /* jne: not equal / not zero */

loc_002F0E7E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002F0E84u); RECOMP_ABI_CALL(0x002EF0AAu, sub_002EF0AA); /* call 0x002EF0AA */

loc_002F0E84: ;
    PUSH32(esp, 0x20);
    ecx = edi;
    PUSH32(esp, 0x002F0E8Du); RECOMP_ABI_CALL(0x002EE5A4u, sub_002EE5A4); /* call 0x002EE5A4 */

loc_002F0E8D: ;
    esi = edi + 0x80;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0xD4);
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    _fb = (uint32_t)(MEM32(0x306C30)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(0x306C30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002F0EAEu); RECOMP_ABI_CALL(0x002EBB92u, sub_002EBB92); /* call 0x002EBB92 */

loc_002F0EAE: ;
    eax = MEM32(esi);
    PUSH32(esp, MEM32(eax + 0xC4));
    ecx = edi;
    PUSH32(esp, 0x002F0EBDu); RECOMP_ABI_CALL(0x002F0779u, sub_002F0779); /* call 0x002F0779 */

loc_002F0EBD: ;
    POP32(esp, esi);

loc_002F0EBE: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F0EC0
 * Original: 0x002F0EC0 - 0x002F0F5F (159 bytes, 56 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F0EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0EC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM32(eax + 0xDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xDC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0F5C; /* je: equal / zero */

loc_002F0EDA: ;
    _fa = (uint32_t)(MEM8(esi + 0x17)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x17), 2 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_002F0EF2; /* je: equal / zero */

loc_002F0EE2: ;
    ebx = MEM32(eax + 0xCC);
    edi = MEM32(eax + 0xD0);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002F0EFA;

loc_002F0EF2: ;
    edi = MEM32(eax + 0xC8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F0EFA: ;
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0F07u); RECOMP_ABI_CALL(0x002F0BA3u, sub_002F0BA3); /* call 0x002F0BA3 */

loc_002F0F07: ;
    eax = MEM32(esi + 0x14C);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002F0F36; /* ja: above (unsigned >) */

loc_002F0F12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002F0F36; /* ja: above (unsigned >) */

loc_002F0F16: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002F0F42; /* jae: above or equal (unsigned >=) */

loc_002F0F1B: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0F25u); RECOMP_ABI_CALL(0x002F0CC9u, sub_002F0CC9); /* call 0x002F0CC9 */

loc_002F0F25: ;
    MEM32(esi + 0x150) = MEM32(esi + 0x150) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x150)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0F36u); RECOMP_ABI_CALL(0x002F0CC9u, sub_002F0CC9); /* call 0x002F0CC9 */

loc_002F0F36: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0F42u); RECOMP_ABI_CALL(0x002F0CC9u, sub_002F0CC9); /* call 0x002F0CC9 */

loc_002F0F42: ;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x8002) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0x12), 0x8002 (16-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_002F0F5C; /* jne: not equal / not zero */

loc_002F0F4C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002F0F55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F0F52u); } /* indirect call */
    }

loc_002F0F55: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F0F5Cu); RECOMP_ABI_CALL(0x002F0D2Au, sub_002F0D2A); /* call 0x002F0D2A */

loc_002F0F5C: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002F0F5F
 * Original: 0x002F0F5F - 0x002F0FAD (78 bytes, 27 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0F5F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F0F5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x002F0F68u); RECOMP_ABI_CALL(0x002EFE45u, sub_002EFE45); /* call 0x002EFE45 */

loc_002F0F68: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F0FA8; /* jl: less (signed <) */

loc_002F0F6E: ;
    eax = MEM32(esi + 0x80);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F0FA8; /* jne: not equal / not zero */

loc_002F0F7C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x180000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x180000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F0F8D; /* je: equal / zero */

loc_002F0F84: ;
    ecx = esi;
    PUSH32(esp, 0x002F0F8Bu); RECOMP_ABI_CALL(0x002F0E6Eu, sub_002F0E6E); /* call 0x002F0E6E */

loc_002F0F8B: ;
    goto loc_002F0FA8;

loc_002F0F8D: ;
    _fa = (uint32_t)(MEM32(eax + 0xBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xBC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0FA8; /* je: equal / zero */

loc_002F0F96: ;
    _fa = (uint32_t)(MEM32(eax + 0xC0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC0), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F0FA8; /* je: equal / zero */

loc_002F0F9F: ;
    ecx = esi;
    PUSH32(esp, 0x002F0FA6u); RECOMP_ABI_CALL(0x002F0E09u, sub_002F0E09); /* call 0x002F0E09 */

loc_002F0FA6: ;
    edi = eax;

loc_002F0FA8: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F0FAD
 * Original: 0x002F0FAD - 0x002F105D (176 bytes, 66 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F0FAD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F0FAD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x182000 (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_002F0FC7; /* je: equal / zero */

loc_002F0FC2: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002F0FCB;

loc_002F0FC7: ;
    ebx = MEM32(esp + 0x14);

loc_002F0FCB: ;
    ecx = esi;
    PUSH32(esp, 0x002F0FD2u); RECOMP_ABI_CALL(0x002F0F5Fu, sub_002F0F5F); /* call 0x002F0F5F */

loc_002F0FD2: ;
    ebp = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F1054; /* jl: less (signed <) */

loc_002F0FDA: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F0FF0; /* je: equal / zero */

loc_002F0FDF: ;
    _fa = (uint32_t)(MEM8(esi + 0x12)) & 0xFFu; _fb = (uint32_t)(0x42) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x12), 0x42 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F0FF0; /* jne: not equal / not zero */

loc_002F0FE5: ;
    PUSH32(esp, 0x40);
    ecx = esi;
    PUSH32(esp, 0x002F0FEEu); RECOMP_ABI_CALL(0x002EF9E6u, sub_002EF9E6); /* call 0x002EF9E6 */

loc_002F0FEE: ;
    ebp = eax;

loc_002F0FF0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F1054; /* jl: less (signed <) */

loc_002F0FF4: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(eax + 9)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 9), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F1009; /* je: equal / zero */

loc_002F1000: ;
    ecx = esi;
    PUSH32(esp, 0x002F1007u); RECOMP_ABI_CALL(0x002F0592u, sub_002F0592); /* call 0x002F0592 */

loc_002F1007: ;
    goto loc_002F1054;

loc_002F1009: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F101E; /* jne: not equal / not zero */

loc_002F100E: ;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x446) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0x12), 0x446 (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F101E; /* jne: not equal / not zero */

loc_002F1016: ;
    eax = MEM32(esi + 0x148);
    goto loc_002F1020;

loc_002F101E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F1020: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x148) = edi;
    ecx = esi;
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_002F1035; /* je: equal / zero */

loc_002F102D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F1033u); RECOMP_ABI_CALL(0x002F096Fu, sub_002F096F); /* call 0x002F096F */

loc_002F1033: ;
    goto loc_002F103A;

loc_002F1035: ;
    PUSH32(esp, 0x002F103Au); RECOMP_ABI_CALL(0x002F082Eu, sub_002F082E); /* call 0x002F082E */

loc_002F103A: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM32(eax + 0xDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xDC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1054; /* je: equal / zero */

loc_002F1048: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002F1054u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F1051u); } /* indirect call */
    }

loc_002F1054: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F105D
 * Original: 0x002F105D - 0x002F107B (30 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F105D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F105D: ;
    SET_LO8(edx, MEM8(ecx + 0x12));
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F107A; /* jne: not equal / not zero */

loc_002F106A: ;
    SET_LO16(eax, MEM16(ecx + 0x12));
    eax = eax >> 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F107Au); RECOMP_ABI_CALL(0x002F0FADu, sub_002F0FAD); /* call 0x002F0FAD */

loc_002F107A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002F107B
 * Original: 0x002F107B - 0x002F110B (144 bytes, 54 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F107B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F107B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x12));
    PUSH32(esp, edi);
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F1103; /* jne: not equal / not zero */

loc_002F108D: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F10BE; /* je: equal / zero */

loc_002F1094: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F10B5; /* je: equal / zero */

loc_002F109B: ;
    SET_LO16(eax, MEM16(esi + 0x12));
    SET_LO16(eax, LO16(eax) & 0x203);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x203) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x203 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F10B5; /* jne: not equal / not zero */

loc_002F10A9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002F10AFu); RECOMP_ABI_CALL(0x002F0FADu, sub_002F0FAD); /* call 0x002F0FAD */

loc_002F10AF: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F1103; /* jl: less (signed <) */

loc_002F10B5: ;
    ecx = esi;
    PUSH32(esp, 0x002F10BCu); RECOMP_ABI_CALL(0x002EF90Eu, sub_002EF90E); /* call 0x002EF90E */

loc_002F10BC: ;
    goto loc_002F1103;

loc_002F10BE: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x182000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 8), 0x182000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F10DC; /* jne: not equal / not zero */

loc_002F10CD: ;
    PUSH32(esp, edi);
    eax = esi + 0x148;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002F10DCu); RECOMP_ABI_CALL(0x002F0BA3u, sub_002F0BA3); /* call 0x002F0BA3 */

loc_002F10DC: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002F10E4u); RECOMP_ABI_CALL(0x002F0294u, sub_002F0294); /* call 0x002F0294 */

loc_002F10E4: ;
    ecx = esi;
    PUSH32(esp, 0x002F10EBu); RECOMP_ABI_CALL(0x002F0EC0u, sub_002F0EC0); /* call 0x002F0EC0 */

loc_002F10EB: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F1103; /* je: equal / zero */

loc_002F10F7: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002F1103u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F1100u); } /* indirect call */
    }

loc_002F1103: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F110B
 * Original: 0x002F110B - 0x002F1201 (246 bytes, 74 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F110B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F110B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x12));
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F11E9; /* jne: not equal / not zero */

loc_002F1129: ;
    eax = ZX8(MEM8(esi + 0x64));
    eax = ZX16(MEM16(esi + eax * 2 + 0xA));
    ecx = MEM32(0x306BB0);
    eax = eax << 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x54;

loc_002F113F: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x100000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F113F; /* jne: not equal / not zero */

loc_002F1147: ;
    SET_LO16(eax, MEM16(esi + 0x12));
    SET_LO16(eax, LO16(eax) & 0x203);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x203) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x203 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F117C; /* jne: not equal / not zero */

loc_002F1155: ;
    eax = MEM32(esi + 0x80);
    ecx = MEM32(eax + 0xD0);
    _fb = (uint32_t)(MEM32(eax + 0xCC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax + 0xCC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F117C; /* jb: below (unsigned <) */

loc_002F116C: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1175u); RECOMP_ABI_CALL(0x002F0FADu, sub_002F0FAD); /* call 0x002F0FAD */

loc_002F1175: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002F11F2; /* jl: less (signed <) */

loc_002F117C: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1187u); RECOMP_ABI_CALL(0x002EE58Bu, sub_002EE58B); /* call 0x002EE58B */

loc_002F1187: ;
    ecx = ebp + -12;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1191u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F1191: ;
    eax = ZX8(MEM8(esi + 0x64));
    ecx = eax;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_002F119A: ;
    edx = MEM32(-25034736);
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F119A; /* jb: below (unsigned <) */

loc_002F11A7: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002F11DE; /* jbe: below or equal (unsigned <=) */

loc_002F11AD: ;
    eax = esi + 0xC;

loc_002F11B0: ;
    edx = ZX16(MEM16(eax));
    MEM32(-25033992) = edx;
    MEM32(-25033988) = 1;
    MEM32(-25033768) = edi;
    MEM32(-25033988) = 0;
    edx = ZX8(MEM8(esi + 0x64));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F11B0; /* jb: below (unsigned <) */

loc_002F11DE: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F11E6u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F11E6: ;
    POP32(esp, edi);
    goto loc_002F11F2;

loc_002F11E9: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x148) = eax;

loc_002F11F2: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F11F9u); RECOMP_ABI_CALL(0x002F0EC0u, sub_002F0EC0); /* call 0x002F0EC0 */

loc_002F11F9: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F1201
 * Original: 0x002F1201 - 0x002F1225 (36 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1201(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F1201: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x002F120Bu); RECOMP_ABI_CALL(0x002EF0ECu, sub_002EF0EC); /* call 0x002EF0EC */

loc_002F120B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F1223; /* jl: less (signed <) */

loc_002F120F: ;
    ecx = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(ecx + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xA), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F1223; /* jne: not equal / not zero */

loc_002F121B: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002F0F5F(); return; /* tail jmp 0x002F0F5F */

loc_002F1223: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F1225
 * Original: 0x002F1225 - 0x002F123F (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1225(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F1225: ;
    edx = MEM32(ecx + 0x80);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x148) = eax;
    _fa = (uint32_t)(MEM8(edx + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0xA), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F123E; /* jne: not equal / not zero */

loc_002F1239: ;
    g_seh_ebp = ebp; sub_002F0F5F(); return; /* tail jmp 0x002F0F5F */

loc_002F123E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002F123F
 * Original: 0x002F123F - 0x002F128C (77 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F123F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F123F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x002F124Cu); RECOMP_ABI_CALL(0x002F107Bu, sub_002F107B); /* call 0x002F107B */

loc_002F124C: ;
    ecx = esi;
    PUSH32(esp, 0x002F1253u); RECOMP_ABI_CALL(0x002F01AAu, sub_002F01AA); /* call 0x002F01AA */

loc_002F1253: ;
    edi = esi + 0x90;

loc_002F1259: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F1266; /* je: equal / zero */

loc_002F125E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002F1266u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F1263u); } /* indirect call */
    }

loc_002F1266: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F1259; /* jb: below (unsigned <) */

loc_002F126F: ;
    ecx = esi;
    PUSH32(esp, 0x002F1276u); RECOMP_ABI_CALL(0x002F07EBu, sub_002F07EB); /* call 0x002F07EB */

loc_002F1276: ;
    ecx = esi + 0x12;
    SET_LO16(edx, 0x3111);
    PUSH32(esp, 0x002F1282u); RECOMP_ABI_CALL(0x002EF0A6u, sub_002EF0A6); /* call 0x002EF0A6 */

loc_002F1282: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002EF24A(); return; /* tail jmp 0x002EF24A */

}

/**
 * sub_002F128C
 * Original: 0x002F128C - 0x002F12E4 (88 bytes, 36 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F128C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F128C: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x12));
    PUSH32(esp, edi);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = eax;
    if ((_fa == 0)) goto loc_002F12C9; /* je: equal / zero */

loc_002F129C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x002F12A3u); RECOMP_ABI_CALL(0x002F107Bu, sub_002F107B); /* call 0x002F107B */

loc_002F12A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F12E1; /* jl: less (signed <) */

loc_002F12A7: ;
    ecx = esi;
    PUSH32(esp, 0x002F12AEu); RECOMP_ABI_CALL(0x002F01AAu, sub_002F01AA); /* call 0x002F01AA */

loc_002F12AE: ;
    eax = MEM32(esi + 0x80);
    eax = ZX8(MEM8(eax + 0xE));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x64)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x64) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F12C9; /* je: equal / zero */

loc_002F12C2: ;
    ecx = esi;
    PUSH32(esp, 0x002F12C9u); RECOMP_ABI_CALL(0x002F123Fu, sub_002F123F); /* call 0x002F123F */

loc_002F12C9: ;
    ecx = esi;
    PUSH32(esp, 0x002F12D0u); RECOMP_ABI_CALL(0x002EF137u, sub_002EF137); /* call 0x002EF137 */

loc_002F12D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F12E1; /* jl: less (signed <) */

loc_002F12D4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F12E1; /* je: equal / zero */

loc_002F12D8: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002F0F5F(); return; /* tail jmp 0x002F0F5F */

loc_002F12E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F12E4
 * Original: 0x002F12E4 - 0x002F12FF (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F12E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F12E4: ;
    _fa = (uint32_t)(MEM8(ecx + 0x12)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x12), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F12F7; /* je: equal / zero */

loc_002F12EA: ;
    _fa = (uint32_t)(MEM16(ecx + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0x8002) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ecx + 0x12), 0x8002 (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F12FE; /* jne: not equal / not zero */

loc_002F12F2: ;
    g_seh_ebp = ebp; sub_002F123F(); return; /* tail jmp 0x002F123F */

loc_002F12F7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002F12FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F12FBu); } /* indirect call */
    }

loc_002F12FE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002F12FF
 * Original: 0x002F12FF - 0x002F133C (61 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F12FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F12FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = 0x322AE0;
    PUSH32(esp, 0x002F130Eu); RECOMP_ABI_CALL(0x002F123Fu, sub_002F123F); /* call 0x002F123F */

loc_002F130E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F1310: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x002F1318u); RECOMP_ABI_CALL(0x002F0D93u, sub_002F0D93); /* call 0x002F0D93 */

loc_002F1318: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F1310; /* jb: below (unsigned <) */

loc_002F131E: ;
    esi = edi + 0x80;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1333; /* je: equal / zero */

loc_002F132A: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x002F1330u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F132Du); } /* indirect call */
    }

loc_002F1330: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002F1333: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002F055A(); return; /* tail jmp 0x002F055A */

}

/**
 * sub_002F133C
 * Original: 0x002F133C - 0x002F136D (49 bytes, 15 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F133C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F133C: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002F1359; /* jne: not equal / not zero */

loc_002F1346: ;
    eax = MEM32(esi + 0x80);
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xA), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F1359; /* je: equal / zero */

loc_002F1352: ;
    PUSH32(esp, 0x002F1357u); RECOMP_ABI_CALL(0x002F123Fu, sub_002F123F); /* call 0x002F123F */

loc_002F1357: ;
    goto loc_002F1360;

loc_002F1359: ;
    ecx = esi;
    PUSH32(esp, 0x002F1360u); RECOMP_ABI_CALL(0x002F07EBu, sub_002F07EB); /* call 0x002F07EB */

loc_002F1360: ;
    MEM32(esi + 0x148) = MEM32(esi + 0x148) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x148)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F136D
 * Original: 0x002F136D - 0x002F13BC (79 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F136D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F136D: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002F13B4; /* je: equal / zero */

loc_002F1376: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002F13AD; /* je: equal / zero */

loc_002F1379: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002F13A6; /* je: equal / zero */

loc_002F137C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002F139B; /* je: equal / zero */

loc_002F137F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002F1390; /* je: equal / zero */

loc_002F1382: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002F13B9; /* jne: not equal / not zero */

loc_002F1385: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x002F138Eu); RECOMP_ABI_CALL(0x002F0AEEu, sub_002F0AEE); /* call 0x002F0AEE */

loc_002F138E: ;
    goto loc_002F13B9;

loc_002F1390: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x002F1399u); RECOMP_ABI_CALL(0x002F107Bu, sub_002F107B); /* call 0x002F107B */

loc_002F1399: ;
    goto loc_002F13B9;

loc_002F139B: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x002F13A4u); RECOMP_ABI_CALL(0x002F0FADu, sub_002F0FAD); /* call 0x002F0FAD */

loc_002F13A4: ;
    goto loc_002F13B9;

loc_002F13A6: ;
    PUSH32(esp, 0x002F13ABu); RECOMP_ABI_CALL(0x002F0EC0u, sub_002F0EC0); /* call 0x002F0EC0 */

loc_002F13AB: ;
    goto loc_002F13B9;

loc_002F13AD: ;
    PUSH32(esp, 0x002F13B2u); RECOMP_ABI_CALL(0x002F12E4u, sub_002F12E4); /* call 0x002F12E4 */

loc_002F13B2: ;
    goto loc_002F13B9;

loc_002F13B4: ;
    PUSH32(esp, 0x002F13B9u); RECOMP_ABI_CALL(0x002EF992u, sub_002EF992); /* call 0x002EF992 */

loc_002F13B9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002F13BC
 * Original: 0x002F13BC - 0x002F13D7 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F13BC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F13BC: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002F13C4u); RECOMP_ABI_CALL(0x002F12FFu, sub_002F12FF); /* call 0x002F12FF */

loc_002F13C4: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F13D1; /* je: equal / zero */

loc_002F13CB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002F13D1u); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002F13D1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F13D7
 * Original: 0x002F13D7 - 0x002F1425 (78 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F13D7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002F13D7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    MEM32(ebp + -8) = 0x40549A78;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333A74)); /* fmul dword ptr [0x333a74] */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    MEMF(ebp + -12) = (float)fp_top(); /* fst */
    /* wait - FPU sync */
    fp_push(1.0); /* fld1 */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ebp + -20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + -4)); /* fmul dword ptr [ebp - 4] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + -12)); /* fsub dword ptr [ebp - 0xc] */
    fp_top() = exp2(fp_top()) - 1.0; /* f2xm1 */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 8)); /* fadd dword ptr [ebp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    MEMF(ebp + -16) = (float)fp_top(); fp_pop(); /* fstp */
    /* wait - FPU sync */
    fp_push(MEMF(ebp + -16)); /* fld float */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002F1425
 * Original: 0x002F1425 - 0x002F14B3 (142 bytes, 49 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F1425(void)
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

loc_002F1425: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3339F4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3339f4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002F144A; /* jp: parity */

loc_002F1439: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x333864)); /* fsub dword ptr [0x333864] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x322B0C)); /* fmul dword ptr [0x322b0c] */
    goto loc_002F144C;

loc_002F144A: ;
    fp_push(1.0); /* fld1 */

loc_002F144C: ;
    PUSH32(esp, ebx);
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    MEM32(ebp + 8) = 0x306378;
    edx = 0x130;
    PUSH32(esp, edi);

loc_002F145E: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, 2);
    POP32(esp, edi);

loc_002F1464: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x322B08)); /* fmul dword ptr [0x322b08] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1478u); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F1478: ;
    ebx = MEM32(ecx);
    MEM32(edx + ebx) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002F1464; /* jne: not equal / not zero */

loc_002F1486: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 4;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x150) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x150 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F145E; /* jl: less (signed <) */

loc_002F1492: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x322B08)); /* fmul dword ptr [0x322b08] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F14A4u); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F14A4: ;
    ecx = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x160) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002F14B3
 * Original: 0x002F14B3 - 0x002F14EC (57 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F14B3(void)
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

loc_002F14B3: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0x18C;
    esi = 0x3062F8;

loc_002F14BF: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3062F4)); /* fmul dword ptr [0x3062f4] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x002F14D4u); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F14D4: ;
    edi = MEM32(ecx);
    MEM32(edx + edi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x19C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F14BF; /* jl: less (signed <) */

loc_002F14E7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002F14EC
 * Original: 0x002F14EC - 0x002F150A (30 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F14EC(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002F14EC: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x322B08)); /* fmul dword ptr [0x322b08] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x002F14FFu); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F14FF: ;
    ecx = MEM32(ecx);
    MEM32(ecx + 0x118) = eax;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002F150A
 * Original: 0x002F150A - 0x002F1542 (56 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F150A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002F150A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(ebp + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3062F4)); /* fmul dword ptr [0x3062f4] */
    MEMF(ebp + 8) = (float)fp_top(); /* fst */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1522u); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F1522: ;
    edx = MEM32(ecx);
    fp_push(MEMF(ebp + 8)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edx + 0x19C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1536u); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F1536: ;
    ecx = MEM32(ecx);
    MEM32(ecx + 0x1A0) = eax;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002F1542
 * Original: 0x002F1542 - 0x002F15DC (154 bytes, 50 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F1542(void)
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

loc_002F1542: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    fp_push(MEMF(ebp + 8)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x322B08)); /* fmul dword ptr [0x322b08] */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F155Au); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F155A: ;
    edx = MEM32(ecx);
    MEM32(edx + 0x12C) = eax;
    edx = 0x11C;
    esi = 0x306300;

loc_002F156C: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x12C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    fp_push((double)SMEM32(ebp + -4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_002F1584; /* jge: greater or equal (signed >=) */

loc_002F157E: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_002F1584: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F158Fu); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F158F: ;
    edi = MEM32(ecx);
    MEM32(edx + edi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x12C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F156C; /* jl: less (signed <) */

loc_002F15A2: ;
    esi = 0x150;
    edx = 0x306304;

loc_002F15AC: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx)); /* fadd dword ptr [edx] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x322B08)); /* fmul dword ptr [0x322b08] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F15C3u); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F15C3: ;
    edi = MEM32(ecx);
    MEM32(esi + edi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x160) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x160 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F15AC; /* jl: less (signed <) */

loc_002F15D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002F15DC
 * Original: 0x002F15DC - 0x002F1659 (125 bytes, 42 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F15DC(void)
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

loc_002F15DC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0x306348;
    eax = 0x164;
    PUSH32(esp, edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002F15EB: ;
    PUSH32(esp, 2);
    edx = eax;
    POP32(esp, edi);

loc_002F15F0: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + edx)); /* fmul dword ptr [esi + edx] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3062F0)); /* fmul dword ptr [0x3062f0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x002F1606u); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F1606: ;
    ebx = MEM32(ecx);
    MEM32(edx + ebx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002F15F0; /* jne: not equal / not zero */

loc_002F1611: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x184) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x184 (32-bit) */
    eax = edx;
    if (CMP_L(_fas, _fbs)) goto loc_002F15EB; /* jl: less (signed <) */

loc_002F161B: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x322B10)); /* fmul dword ptr [0x322b10] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x002F162Eu); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F162E: ;
    edx = MEM32(ecx);
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    PUSH32(esp, ecx);
    MEM32(edx + 0x188) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3062F0)); /* fmul dword ptr [0x3062f0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x002F164Bu); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F164B: ;
    ecx = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x184) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002F1659
 * Original: 0x002F1659 - 0x002F16A6 (77 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1659(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1659: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F165B: ;
    edx = MEM32(ecx);
    edx = eax + edx + 0xAC;
    MEM32(edx) = MEM32(edx) - 1;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(ecx);
    edx = eax + edx + 0xAC;
    MEM32(edx) = MEM32(edx) >> 2;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(ecx);
    edx = eax + edx + 0xAC;
    MEM32(edx) = MEM32(edx) + 1;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F165B; /* jb: below (unsigned <) */

loc_002F1685: ;
    eax = MEM32(ecx);
    MEM32(eax + 0x1A4) = 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F1693: ;
    edx = MEM32(ecx);
    MEM32(eax + edx + 0x1A8) = MEM32(eax + edx + 0x1A8) & 0;
    _fa = (uint32_t)(MEM32(eax + edx + 0x1A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x78 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F1693; /* jb: below (unsigned <) */

loc_002F16A5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002F16A6
 * Original: 0x002F16A6 - 0x002F1763 (189 bytes, 74 insns)
 * Category: game_audio
 * CC: cdecl, 6 params, returns float_sse
 * Frame: standard_frame
 */
void sub_002F16A6(void)
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

loc_002F16A6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFD8F0u (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0x14)); /* fdiv dword ptr [ebp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333898)); /* fmul dword ptr [0x333898] */
    MEMD(ebp + -8) = fp_top(); fp_pop(); /* fstp */
    if (CMP_G(_fas, _fbs)) goto loc_002F16D8; /* jg: greater (signed >) */

loc_002F16C5: ;
    eax = MEM32(ebp + 0x18);
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */

loc_002F16CE: ;
    eax = MEM32(ebp + 0x1C);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_002F175F;

loc_002F16D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F16EC; /* jne: not equal / not zero */

loc_002F16DC: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F1701; /* jne: not equal / not zero */

loc_002F16E1: ;
    eax = MEM32(ebp + 0x18);
    fp_push(0.0); /* fldz */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    goto loc_002F16CE;

loc_002F16EC: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F1701; /* jne: not equal / not zero */

loc_002F16F2: ;
    ecx = MEM32(ebp + 0x18);
    fp_push(0.0); /* fldz */
    PUSH32(esp, eax);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F16FFu); RECOMP_ABI_CALL(0x002F13D7u, sub_002F13D7); /* call 0x002F13D7 */

loc_002F16FF: ;
    goto loc_002F16CE;

loc_002F1701: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1707u); RECOMP_ABI_CALL(0x002F13D7u, sub_002F13D7); /* call 0x002F13D7 */

loc_002F1707: ;
    MEMD(ebp + -16) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1715u); RECOMP_ABI_CALL(0x002F13D7u, sub_002F13D7); /* call 0x002F13D7 */

loc_002F1715: ;
    fp_push(MEMD(ebp + -8)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    eax = MEM32(ebp + 0x18);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = RECOMP_FP_PC(MEMD(0x3338B0) - fp_top()); /* fsubr qword ptr [0x3338b0] */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_top() = RECOMP_FP_PC(MEMD(0x3338B0) - fp_top()); /* fsubr qword ptr [0x3338b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(1.0); /* fld1 */
    eax = MEM32(ebp + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(ebp + -16)); /* fmul qword ptr [ebp - 0x10] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_002F175F: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002F1763
 * Original: 0x002F1763 - 0x002F17EF (140 bytes, 50 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns float_sse
 * Frame: standard_frame
 */
void sub_002F1763(void)
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

loc_002F1763: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFD8F0u (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002F17EB; /* jle: less or equal (signed <=) */

loc_002F1773: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F17EB; /* je: equal / zero */

loc_002F1778: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    eax = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0x14)); /* fdiv dword ptr [ebp + 0x14] */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333898)); /* fmul dword ptr [0x333898] */
    fp_top() = cos(fp_top()); /* fcos */
    MEMD(ebp + -8) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1794u); RECOMP_ABI_CALL(0x002F13D7u, sub_002F13D7); /* call 0x002F13D7 */

loc_002F1794: ;
    fp_push(MEMD(ebp + -8)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(MEMD(0x3338B0) - fp_top()); /* fsubr qword ptr [0x3338b0] */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMD(ebp + -8)); /* fsub qword ptr [ebp - 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMD(ebp + -8)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(ebp + -8)); /* fmul qword ptr [ebp - 8] */
    fp_top() = RECOMP_FP_PC(MEMD(0x3338B0) - fp_top()); /* fsubr qword ptr [0x3338b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3337A0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3337a0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F17DC; /* jne: not equal / not zero */

loc_002F17D3: ;
    fp_pop(); /* fstp st(0) */
    eax = 0xFFFF;
    goto loc_002F17EB;

loc_002F17DC: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3062F4)); /* fmul dword ptr [0x3062f4] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F17EBu); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F17EB: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002F17EF
 * Original: 0x002F17EF - 0x002F1850 (97 bytes, 32 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F17EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002F17EF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMF(0x322B14)); /* fld float */
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = ecx;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1818u); RECOMP_ABI_CALL(0x002F16A6u, sub_002F16A6); /* call 0x002F16A6 */

loc_002F1818: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3062F0)); /* fmul dword ptr [0x3062f0] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F182Au); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F182A: ;
    ecx = MEM32(edx);
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3062F0)); /* fmul dword ptr [0x3062f0] */
    PUSH32(esp, ecx);
    MEM32(ecx + 0x1AC) = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1844u); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F1844: ;
    ecx = MEM32(edx);
    MEM32(ecx + 0x1B0) = eax;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002F1850
 * Original: 0x002F1850 - 0x002F18FB (171 bytes, 58 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F1850(void)
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

loc_002F1850: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    fp_push((double)SMEM32(ebp + 0xC)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002F1863; /* jge: greater or equal (signed >=) */

loc_002F185D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_002F1863: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x322B1C)); /* fmul dword ptr [0x322b1c] */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0x10)); /* fdiv dword ptr [ebp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x322B18)); /* fmul dword ptr [0x322b18] */
    MEMF(ebp + 0xC) = (float)fp_top(); /* fst */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F187Eu); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F187E: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    edx = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3337A0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3337a0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002F1899; /* jp: parity */

loc_002F1890: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ebp + 0x14)); /* fdiv dword ptr [ebp + 0x14] */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_002F1899: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F18A6u); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F18A6: ;
    fp_push(MEMF(0x322B08)); /* fld float */
    esi = ebp + 0xC;
    PUSH32(esp, esi);
    esi = ebp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F18C9u); RECOMP_ABI_CALL(0x002F16A6u, sub_002F16A6); /* call 0x002F16A6 */

loc_002F18C9: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3062F0)); /* fmul dword ptr [0x3062f0] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F18DBu); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F18DB: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    ecx = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3062F0)); /* fmul dword ptr [0x3062f0] */
    PUSH32(esp, ecx);
    MEM32(ecx + 4) = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F18F3u); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F18F3: ;
    MEM32(ecx + 8) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002F18FB
 * Original: 0x002F18FB - 0x002F1A2A (303 bytes, 114 insns)
 * Category: game_audio
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F18FB(void)
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

loc_002F18FB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0x14);
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x14)); /* fmul dword ptr [ecx + 0x14] */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(ecx + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x1C)); /* fmul dword ptr [ecx + 0x1c] */
    fp_push((double)SMEM32(ecx + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x24)); /* fmul dword ptr [ecx + 0x24] */
    MEMF(ebp + 0x14) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F192Bu); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F192B: ;
    _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(1.0); /* fld1 */
    edx = MEM32(ebp + 0x18);
    MEM32(edx) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x1C)); /* fsub dword ptr [ecx + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(ecx + 0x18)); /* fimul dword ptr [ecx + 0x18] */
    PUSH32(esp, ecx);
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x24)); /* fsub dword ptr [ecx + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(ecx + 0x20)); /* fimul dword ptr [ecx + 0x20] */
    MEMF(ebp + 0xC) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1953u); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F1953: ;
    edi = eax;
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ecx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0xFFFFD8F0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002F1965; /* jge: greater or equal (signed >=) */

loc_002F1961: ;
    edi = edx;
    goto loc_002F196B;

loc_002F1965: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002F196B; /* jle: less or equal (signed <=) */

loc_002F1969: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F196B: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_push(MEMF(ebp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3337A0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3337a0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F19B6; /* jne: not equal / not zero */

loc_002F197E: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ebp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x33389C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x33389c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002F1995; /* jp: parity */

loc_002F1990: ;
    MEM32(ebp + 8) = edx;
    goto loc_002F19B0;

loc_002F1995: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333A70)); /* fmul dword ptr [0x333a70] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F19ADu); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F19AD: ;
    MEM32(ebp + 8) = eax;

loc_002F19B0: ;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + 0x14)); /* fadd dword ptr [ebp + 0x14] */

loc_002F19B6: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F19BFu); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F19BF: ;
    _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    esi = MEM32(ebp + 0x1C);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F19D3u); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F19D3: ;
    esi = eax;
    _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ecx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002F19E0; /* jge: greater or equal (signed >=) */

loc_002F19DC: ;
    esi = edx;
    goto loc_002F19E6;

loc_002F19E0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002F19E6; /* jle: less or equal (signed <=) */

loc_002F19E4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F19E6: ;
    fp_push(MEMF(0x322B14)); /* fld float */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1A00u); RECOMP_ABI_CALL(0x002F1763u, sub_002F1763); /* call 0x002F1763 */

loc_002F1A00: ;
    fp_push(MEMF(0x322B14)); /* fld float */
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx) = eax;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1A1Fu); RECOMP_ABI_CALL(0x002F1763u, sub_002F1763); /* call 0x002F1763 */

loc_002F1A1F: ;
    ecx = MEM32(ebp + 0x24);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002F1A2A
 * Original: 0x002F1A2A - 0x002F1B14 (234 bytes, 78 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F1A2A(void)
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

loc_002F1A2A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esi = ecx;
    eax = MEM32(esi);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    eax = MEM32(eax + 0x160);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1A61u); RECOMP_ABI_CALL(0x002F1850u, sub_002F1850); /* call 0x002F1850 */

loc_002F1A61: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F1A63: ;
    ecx = MEM32(esi);
    edx = MEM32(ebp + -8);
    MEM32(eax + ecx + 0x1B8) = edx;
    ecx = MEM32(esi);
    edx = MEM32(ebp + -4);
    MEM32(eax + ecx + 0x1BC) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F1A63; /* jl: less (signed <) */

loc_002F1A83: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(eax + 0x160));
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1AADu); RECOMP_ABI_CALL(0x002F1850u, sub_002F1850); /* call 0x002F1850 */

loc_002F1AAD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F1AAF: ;
    ecx = MEM32(esi);
    edx = MEM32(ebp + -8);
    MEM32(eax + ecx + 0x20C) = edx;
    ecx = MEM32(esi);
    edx = MEM32(ebp + -4);
    MEM32(eax + ecx + 0x210) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F1AAF; /* jl: less (signed <) */

loc_002F1ACF: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F1AD3: ;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(edi + eax + 0xEC));
    eax = ebx + eax + 0x1D8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1B02u); RECOMP_ABI_CALL(0x002F1850u, sub_002F1850); /* call 0x002F1850 */

loc_002F1B02: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F1AD3; /* jl: less (signed <) */

loc_002F1B0D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002F1B14
 * Original: 0x002F1B14 - 0x002F1E9C (904 bytes, 304 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F1B14(void)
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

loc_002F1B14: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = ecx;
    MEM32(esi) = eax;
    fp_push(MEMF(edi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333850)); /* fmul dword ptr [0x333850] */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x333850)); /* fmul dword ptr [0x333850] */
    fp_top() = RECOMP_FP_PC(MEMF(0x333884) - fp_top()); /* fsubr dword ptr [0x333884] */
    fp_push(MEMF(edi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x3337A0)); /* fsub dword ptr [0x3337a0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3337D0)); /* fmul dword ptr [0x3337d0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3337A0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3337a0] */
    MEMF(ebp + 0xC) = (float)fp_top(); /* fst */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002F1B68; /* jp: parity */

loc_002F1B61: ;
    fp_pop(); /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    MEMF(ebp + 0xC) = (float)fp_top(); /* fst */

loc_002F1B68: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3337F4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3337f4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F1B7C; /* jne: not equal / not zero */

loc_002F1B75: ;
    MEM32(ebp + 0xC) = 0x42700000;

loc_002F1B7C: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1B83u); RECOMP_ABI_CALL(0x002F1659u, sub_002F1659); /* call 0x002F1659 */

loc_002F1B83: ;
    fp_push(MEMF(edi + 0x30)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(edi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1B92u); RECOMP_ABI_CALL(0x002F17EFu, sub_002F17EF); /* call 0x002F17EF */

loc_002F1B92: ;
    eax = MEM32(edi + 0x18);
    _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1B9Eu); RECOMP_ABI_CALL(0x002F13D7u, sub_002F13D7); /* call 0x002F13D7 */

loc_002F1B9E: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1BA9u); RECOMP_ABI_CALL(0x002F14B3u, sub_002F14B3); /* call 0x002F14B3 */

loc_002F1BA9: ;
    fp_push(MEMF(edi + 0x1C)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1BB5u); RECOMP_ABI_CALL(0x002F14ECu, sub_002F14EC); /* call 0x002F14EC */

loc_002F1BB5: ;
    eax = MEM32(edi + 0x20);
    _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1BC1u); RECOMP_ABI_CALL(0x002F13D7u, sub_002F13D7); /* call 0x002F13D7 */

loc_002F1BC1: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1BCCu); RECOMP_ABI_CALL(0x002F150Au, sub_002F150A); /* call 0x002F150A */

loc_002F1BCC: ;
    fp_push(MEMF(edi + 0x24)); /* fld float */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1BDAu); RECOMP_ABI_CALL(0x002F1542u, sub_002F1542); /* call 0x002F1542 */

loc_002F1BDA: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1BE6u); RECOMP_ABI_CALL(0x002F1425u, sub_002F1425); /* call 0x002F1425 */

loc_002F1BE6: ;
    fp_push(MEMF(edi + 0x30)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    fp_push(MEMF(edi + 0x14)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x10)); /* fld float */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1C04u); RECOMP_ABI_CALL(0x002F1A2Au, sub_002F1A2A); /* call 0x002F1A2A */

loc_002F1C04: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1C12u); RECOMP_ABI_CALL(0x002F15DCu, sub_002F15DC); /* call 0x002F15DC */

loc_002F1C12: ;
    PUSH32(esp, 0xFFFFFFFCu);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);

loc_002F1C17: ;
    eax = MEM32(esi);
    eax = ecx + eax + 0xAC;
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x70 (32-bit) */
    MEM32(eax) = edx;
    if (CMP_B(_fa, _fb)) goto loc_002F1C17; /* jb: below (unsigned <) */

loc_002F1C2F: ;
    ecx = 0x118;

loc_002F1C34: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12C (32-bit) */
    MEM32(eax) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_002F1C34; /* jl: less (signed <) */

loc_002F1C4A: ;
    edx = 0x130;
    ecx = 0x150;
    PUSH32(esp, ebx);

loc_002F1C55: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx & edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(eax) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_002F1C55; /* jl: less (signed <) */

loc_002F1C67: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x12C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = edx;

loc_002F1C75: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x160) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x160 (32-bit) */
    MEM32(eax) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_002F1C75; /* jl: less (signed <) */

loc_002F1C8B: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x160;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F1C9B: ;
    eax = MEM32(esi);
    eax = ecx + eax + 0xAC;
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x70 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F1C9B; /* jb: below (unsigned <) */

loc_002F1CAE: ;
    edx = 0x11C;

loc_002F1CB3: ;
    eax = MEM32(esi);
    ecx = edx + eax;
    eax = MEM32(eax + 0x118);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x12C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F1CB3; /* jl: less (signed <) */

loc_002F1CCB: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x118);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x12C) = MEM32(eax + 0x12C) + ecx;
    _fa = (uint32_t)(MEM32(eax + 0x12C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F1CDF: ;
    eax = MEM32(esi);
    edx = ecx + eax;
    edi = edx + 0x134;
    ebx = MEM32(edi);
    MEM32(ebp + 8) = edx;
    edx = ecx + 0x130;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = eax;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -8) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_002F1D07; /* jbe: below or equal (unsigned <=) */

loc_002F1D03: ;
    edi = eax;
    goto loc_002F1D09;

loc_002F1D07: ;
    edi = MEM32(edi);

loc_002F1D09: ;
    ebx = edi;
    edi = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(edi + 0xAC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002F1DB0; /* jbe: below or equal (unsigned <=) */

loc_002F1D1F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + 8) = edi;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_002F1D2F; /* jge: greater or equal (signed >=) */

loc_002F1D29: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_002F1D2F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + 8) = ebx;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_002F1D3F; /* jge: greater or equal (signed >=) */

loc_002F1D39: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_002F1D3F: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(ebp + -4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_002F1D57; /* jge: greater or equal (signed >=) */

loc_002F1D51: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_002F1D57: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1D63u); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F1D63: ;
    edi = MEM32(esi);
    MEM32(edx + edi) = eax;
    eax = MEM32(esi);
    eax = MEM32(ecx + eax + 0x134);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0xC) = eax;
    fp_push((double)SMEM32(ebp + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_002F1D84; /* jge: greater or equal (signed >=) */

loc_002F1D7E: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x3337E8)); /* fadd dword ptr [0x3337e8] */

loc_002F1D84: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 8)); /* fmul dword ptr [ebp + 8] */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1D90u); RECOMP_ABI_CALL(0x002ECC6Cu, sub_002ECC6C); /* call 0x002ECC6C */

loc_002F1D90: ;
    edi = MEM32(esi);
    PUSH32(esp, 2);
    MEM32(ecx + edi + 0x134) = eax;
    POP32(esp, edi);

loc_002F1D9C: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = ebx;
    if ((_fa != 0)) goto loc_002F1D9C; /* jne: not equal / not zero */

loc_002F1DAE: ;
    goto loc_002F1DC3;

loc_002F1DB0: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax) = MEM32(eax) - edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi);
    eax = ecx + eax + 0x134;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax) = MEM32(eax) - edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002F1DC3: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002F1CDF; /* jl: less (signed <) */

loc_002F1DD5: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x150;

loc_002F1DDC: ;
    eax = MEM32(esi);
    ecx = eax + edx;
    eax = MEM32(eax + edi + 0xCC);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002F1DEE; /* jbe: below or equal (unsigned <=) */

loc_002F1DEC: ;
    MEM32(ecx) = eax;

loc_002F1DEE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x160) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x160 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F1DDC; /* jl: less (signed <) */

loc_002F1DFC: ;
    eax = MEM32(esi);
    ecx = eax + 0x160;
    eax = MEM32(eax + 0x10C);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002F1E10; /* jbe: below or equal (unsigned <=) */

loc_002F1E0E: ;
    MEM32(ecx) = eax;

loc_002F1E10: ;
    edi = 0x164;
    edx = 0x7FFFFF;
    ebx = 0xFF800001u;

loc_002F1E1F: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002F1E2D; /* jle: less or equal (signed <=) */

loc_002F1E29: ;
    MEM32(eax) = edx;
    goto loc_002F1E33;

loc_002F1E2D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002F1E33; /* jge: greater or equal (signed >=) */

loc_002F1E31: ;
    MEM32(eax) = ebx;

loc_002F1E33: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x184) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x184 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F1E1F; /* jl: less (signed <) */

loc_002F1E3E: ;
    ecx = 0x118;
    POP32(esp, ebx);

loc_002F1E44: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = MEM32(eax) << 2;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12C (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F1E44; /* jb: below (unsigned <) */

loc_002F1E56: ;
    eax = MEM32(esi);
    MEM32(eax + 0x12C) = MEM32(eax + 0x12C) << 2;
    _fa = (uint32_t)(MEM32(eax + 0x12C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = 0x130;

loc_002F1E64: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = MEM32(eax) << 2;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x150) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x150 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F1E64; /* jb: below (unsigned <) */

loc_002F1E76: ;
    ecx = 0x150;

loc_002F1E7B: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = MEM32(eax) << 2;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x160) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x160 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F1E7B; /* jb: below (unsigned <) */

loc_002F1E8D: ;
    esi = MEM32(esi);
    MEM32(esi + 0x160) = MEM32(esi + 0x160) << 2;
    _fa = (uint32_t)(MEM32(esi + 0x160)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002F1E9C
 * Original: 0x002F1E9C - 0x002F1EB6 (26 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1E9C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1E9C: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    MEM32(ecx + 8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx + 0x14;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = ecx;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F1EB6
 * Original: 0x002F1EB6 - 0x002F1EE4 (46 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1EB6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1EB6: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1EE2; /* je: equal / zero */

loc_002F1EC0: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1EE2; /* je: equal / zero */

loc_002F1EC7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x31C8D8); PUSH32(esp, 0x002F1ED1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F1ECBu); } /* indirect call */
    }

loc_002F1ED1: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F1EE2; /* je: equal / zero */

loc_002F1ED8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F1EDEu); RECOMP_ABI_CALL(0x002ECA5Fu, sub_002ECA5F); /* call 0x002ECA5F */

loc_002F1EDE: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002F1EE2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F1EE4
 * Original: 0x002F1EE4 - 0x002F1F97 (179 bytes, 66 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F1EE4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1EE4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 1 (32-bit) */
    PUSH32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax + 0xC;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    eax = ecx + 0x306B80;
    MEM32(esi + 0x10) = eax;
    ecx = ecx + 0x306B90;
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(ecx + 8);
    edx = edx >> 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ZX16(LO16(edx));
    MEM32(esi) = edx;
    MEM32(esi + 4) = ebx;
    edi = MEM32(ecx);
    ecx = MEM32(eax + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = ecx;
    eax = MEM32(eax);
    MEM32(ebp + -12) = eax;
    eax = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002F1F67; /* je: equal / zero */

loc_002F1F3F: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F1F50u); RECOMP_ABI_CALL(0x002F286Fu, sub_002F286F); /* call 0x002F286F */

loc_002F1F50: ;
    ecx = MEM32(ebp + 8);
    MEM32(edi + ecx * 8 + 4) = MEM32(edi + ecx * 8 + 4) & 0;
    _fa = (uint32_t)(MEM32(edi + ecx * 8 + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + ecx * 8) = eax;
    eax = MEM32(esi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_002F1F3F; /* jb: below (unsigned <) */

loc_002F1F67: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_002F1F84; /* je: equal / zero */

loc_002F1F73: ;
    MEM32(0xFE802040u) = eax;
    eax = MEM32(esi);
    _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0xFE8020D4u) = eax;
    goto loc_002F1F90;

loc_002F1F84: ;
    MEM32(0xFE802048u) = eax;
    eax = MEM32(esi);
    MEM32(0xFE8020DCu) = eax;

loc_002F1F90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F1F97
 * Original: 0x002F1F97 - 0x002F1FE9 (82 bytes, 32 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1F97(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1F97: ;
    edx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x306C50);
    if (CMP_BE(_fa, _fb)) goto loc_002F1FD1; /* jbe: below or equal (unsigned <=) */

loc_002F1FB2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    edx = edx + eax * 8;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002F1FBE: ;
    ebx = MEM32(esi);
    MEM32(edx + 4) = MEM32(edx + 4) & 0;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002F1FBE; /* jne: not equal / not zero */

loc_002F1FCF: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002F1FD1: ;
    edx = MEM32(ecx);
    _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x10);
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(-25157420) = edx;
    MEM32(ecx) = eax;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002F1FE9
 * Original: 0x002F1FE9 - 0x002F2011 (40 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F1FE9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F1FE9: ;
    eax = ecx;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002F2011
 * Original: 0x002F2011 - 0x002F20E9 (216 bytes, 80 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F2011(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2011: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    edx = MEM32(ebx + 4);
    eax = MEM32(ebx);
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = eax;
    eax = MEM32(0x306C50);
    MEM32(ebp + -4) = eax;
    eax = ecx;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;
    if (CMP_A(_fa, _fb)) goto loc_002F2067; /* ja: above (unsigned >) */

loc_002F203D: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1C), ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002F20E0; /* jae: above or equal (unsigned >=) */

loc_002F2046: ;
    esi = ebx + 0x14;
    edi = ebp + -28;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, 0x61645344);
    MEM32(ebx + 0x1C) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F2060u); RECOMP_ABI_CALL(0x002ECA18u, sub_002ECA18); /* call 0x002ECA18 */

loc_002F2060: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002F206E; /* jne: not equal / not zero */

loc_002F2067: ;
    eax = 0x8007000Eu;
    goto loc_002F20E2;

loc_002F206E: ;
    edi = MEM32(0x31C8D8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x002F207Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F207Au); } /* indirect call */
    }

loc_002F207C: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002F20B5; /* jbe: below or equal (unsigned <=) */

loc_002F2083: ;
    ecx = MEM32(ebp + -4);
    edx = MEM32(ebp + -12);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ecx + edx * 8;
    MEM32(ebp + -4) = eax;

loc_002F2093: ;
    eax = MEM32(ebx + 0x14);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C8D4); PUSH32(esp, 0x002F20A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F209Au); } /* indirect call */
    }

loc_002F20A0: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x1000;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002F2093; /* jne: not equal / not zero */

loc_002F20B5: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    MEM32(0xFE8020D4u) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002F20E0; /* je: equal / zero */

loc_002F20C8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -28));
    { uint32_t _icall_target = edi; PUSH32(esp, 0x002F20D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F20D0u); } /* indirect call */
    }

loc_002F20D2: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F20E0; /* je: equal / zero */

loc_002F20D8: ;
    PUSH32(esp, MEM32(ebp + -28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F20E0u); RECOMP_ABI_CALL(0x002ECA5Fu, sub_002ECA5F); /* call 0x002ECA5F */

loc_002F20E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F20E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F20E9
 * Original: 0x002F20E9 - 0x002F2162 (121 bytes, 42 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F20E9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F20E9: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    edx = ecx;
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_002F2102; /* jne: not equal / not zero */

loc_002F20F7: ;
    eax = MEM32(0x306B7C);
    ecx = MEM32(0x306B78);

loc_002F2102: ;
    PUSH32(esp, esi);
    edx = ecx;
    esi = eax;
    { uint32_t _c = (uint32_t)(2) & 31u; if (_c && _c < 32u) { esi = (esi << _c) | (edx >> (32 - _c)); _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi ^ eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _c = (uint32_t)(1) & 31u; if (_c && _c < 32u) { esi = (esi << _c) | (edx >> (32 - _c)); _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx << 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _c = (uint32_t)(1) & 31u; if (_c && _c < 32u) { ecx = (ecx >> _c) | (eax << (32 - _c)); _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shrd result */ } }  /* shrd */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(0x306B78) = esi;
    MEM32(0x306B7C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002F215D; /* je: equal / zero */

loc_002F2146: ;
    ecx = MEM32(esp + 0x18);
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = 0x306B78;
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

loc_002F215D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002F2162
 * Original: 0x002F2162 - 0x002F218F (45 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2162(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2162: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7FA49BCA);
    PUSH32(esp, 0x49DE12BA);
    PUSH32(esp, 0x002F2176u); RECOMP_ABI_CALL(0x002F20E9u, sub_002F20E9); /* call 0x002F20E9 */

loc_002F2176: ;
    PUSH32(esp, 0x50);
    POP32(esp, esi);

loc_002F2179: ;
    PUSH32(esp, 8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002F2188u); RECOMP_ABI_CALL(0x002F20E9u, sub_002F20E9); /* call 0x002F20E9 */

loc_002F2188: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002F2179; /* jne: not equal / not zero */

loc_002F218B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F218F
 * Original: 0x002F218F - 0x002F225E (207 bytes, 83 insns)
 * Category: game_audio
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F218F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F218F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F21A0u); RECOMP_ABI_CALL(0x002F2162u, sub_002F2162); /* call 0x002F2162 */

loc_002F21A0: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F21D8; /* je: equal / zero */

loc_002F21A7: ;
    esi = MEM32(ebp + 0xC);
    eax = ebp + -8;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002F21B1: ;
    eax = ebp + ecx + -8;
    SET_LO8(edx, MEM8(esi + eax));
    SET_LO8(edx, LO8(edx) ^ MEM8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    MEM8(ebp + ecx + -17) = LO8(edx);
    if (CMP_B(_fa, _fb)) goto loc_002F21B1; /* jb: below (unsigned <) */

loc_002F21C4: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F21EF; /* je: equal / zero */

loc_002F21CB: ;
    ecx = MEM32(ebp + -16);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -12);
    MEM32(eax + 4) = ecx;
    goto loc_002F21EF;

loc_002F21D8: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F21E4; /* jne: not equal / not zero */

loc_002F21DF: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002F2258;

loc_002F21E4: ;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -12) = eax;

loc_002F21EF: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F21FCu); RECOMP_ABI_CALL(0x002F20E9u, sub_002F20E9); /* call 0x002F20E9 */

loc_002F21FC: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2209; /* je: equal / zero */

loc_002F2201: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 8;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 8;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002F2209: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002F2256; /* jbe: below or equal (unsigned <=) */

loc_002F220E: ;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    MEM32(ebp + 0x18) = eax;

loc_002F2218: ;
    ecx = MEM32(ebp + 0x14);
    eax = edi;
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ebx, MEM8(ebp + eax + -8));
    SET_LO8(eax, MEM8(ebp + eax + -16));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ebx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    esi = edi + ecx;
    ecx = MEM32(ebp + 0x18);
    SET_LO8(ecx, MEM8(ecx + esi));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    PUSH32(esp, 1);
    eax = ebp + 0xF;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM8(ebp + 0xB) = LO8(ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F2247u); RECOMP_ABI_CALL(0x002F20E9u, sub_002F20E9); /* call 0x002F20E9 */

loc_002F2247: ;
    SET_LO8(ebx, LO8(ebx) ^ MEM8(ebp + 0xF));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ebx, LO8(ebx) ^ MEM8(ebp + 0xB));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x10) (32-bit) */
    MEM8(esi) = LO8(ebx);
    if (CMP_B(_fa, _fb)) goto loc_002F2218; /* jb: below (unsigned <) */

loc_002F2255: ;
    POP32(esp, ebx);

loc_002F2256: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F2258: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002F225E
 * Original: 0x002F225E - 0x002F2331 (211 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F225E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F225E: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F225E; /* jb: below (unsigned <) */

loc_002F226B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);

loc_002F2270: ;
    esi = MEM32(0x306BB0);
    edx = ecx;
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + esi + 0x7C) = edx;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F2270; /* jb: below (unsigned <) */

loc_002F228F: ;
    eax = MEM32(0x306BB4);
    MEM32(0xFE80202Cu) = eax;
    eax = MEM32(0x306BF4);
    MEM32(0xFE802038u) = eax;
    eax = MEM32(0x306C04);
    MEM32(0xFE80203Cu) = eax;
    eax = MEM32(0x306BD4);
    MEM32(0xFE802030u) = eax;
    eax = MEM32(0x306BE4);
    MEM32(0xFE802034u) = eax;
    eax = MEM32(0x306BC4);
    MEM32(0xFE80115Cu) = eax;
    eax = 0xFFF;
    MEM32(0xFE8202A4u) = eax;
    MEM32(0xFE8202B0u) = eax;
    MEM32(0xFE8202A0u) = eax;
    MEM32(0xFE8202A8u) = eax;
    MEM32(0xFE8202ACu) = eax;
    MEM32(-25032700) = 0x7FF;
    eax = MEM32(0x306C34);
    MEM32(0xFE820808u) = eax;
    eax = MEM32(0x3061E0);
    edx = MEM32(eax + 0x18);
    esi = MEM32(eax + 0x10);
    PUSH32(esp, 0x1F);
    POP32(esp, ecx);
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(eax + 8);
    eax = MEM32(eax);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(-25034048) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2331
 * Original: 0x002F2331 - 0x002F2470 (319 bytes, 91 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F2331(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002F2331: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(0x306C14);
    MEM32(0xFE802044u) = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(-24903936) = esi;
    MEM32(-24903932) = esi;
    eax = MEM32(0x306B88);
    if (0xC) _cf = (int)(((eax) >> ((0xC) - 1)) & 1);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0xFE8020D8u) = eax;
    MEM32(0xFE801148u) = eax;
    PUSH32(esp, edi);
    MEM32(-25153500) = esi;
    edi = 0x2000;
    MEM32(-25153496) = edi;
    eax = MEM32(0x306C10);
    MEM32(ebp + -8) = ecx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = esi;

loc_002F2382: ;
    ecx = MEM32(0x306B84);
    ebx = MEM32(ebp + -4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002F238D: ;
    ebx = MEM32(-25034736);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002F238D; /* jb: below (unsigned <) */

loc_002F239B: ;
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -4)) + (uint64_t)(0x1000)) >> 32) & 1);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0x1000;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(-25028608) = edx;
    MEM32(-25028600) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = esi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002F2382; /* jb: below (unsigned <) */

loc_002F23BC: ;
    eax = MEM32(0xFE820010u);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002F23BC; /* jb: below (unsigned <) */

loc_002F23C9: ;
    ebx = MEM32(ebp + -8);
    MEM32(-25030656) = esi;
    MEM32(-25030652) = edi;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002F241A; /* jne: not equal / not zero */

loc_002F23E0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x626F5344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F23EDu); RECOMP_ABI_CALL(0x002ECADEu, sub_002ECADE); /* call 0x002ECADE */

loc_002F23ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002F23FA; /* je: equal / zero */

loc_002F23F1: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F23F8u); RECOMP_ABI_CALL(0x002ED4FCu, sub_002ED4FC); /* call 0x002ED4FC */

loc_002F23F8: ;
    goto loc_002F23FC;

loc_002F23FA: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F23FC: ;
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    esi = esi + 0x8007000Eu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xC) = eax;
    if ((_fas < 0)) goto loc_002F241A; /* js: sign (negative) */

loc_002F2413: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F241Au); RECOMP_ABI_CALL(0x002ED51Bu, sub_002ED51B); /* call 0x002ED51B */

loc_002F241A: ;
    eax = MEM32(ebp + -8);
    MEM32(-24903684) = edi;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0xFE83FF10u) = eax;
    MEM32(-24903916) = 0xFF;
    eax = MEM32(0xFE803024u);
    MEM32(0xFE80302Cu) = eax;
    eax = MEM32(0xFE803034u);
    MEM32(0xFE80303Cu) = eax;
    eax = MEM32(0xFE803044u);
    MEM32(0xFE80304Cu) = eax;
    eax = MEM32(0xFE803054u);
    MEM32(0xFE80305Cu) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(-24903684) = 3;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002F2470
 * Original: 0x002F2470 - 0x002F2614 (420 bytes, 130 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F2470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002F2470: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = ecx;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0xFE85FFFCu) = eax;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(ebp + -12) = ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -20) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002F24D7; /* je: equal / zero */

loc_002F2497: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x626F5344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F24A4u); RECOMP_ABI_CALL(0x002ECADEu, sub_002ECADE); /* call 0x002ECADE */

loc_002F24A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002F24B1; /* je: equal / zero */

loc_002F24A8: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F24AFu); RECOMP_ABI_CALL(0x002F3772u, sub_002F3772); /* call 0x002F3772 */

loc_002F24AF: ;
    goto loc_002F24B3;

loc_002F24B1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F24B3: ;
    edx = eax;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x7FF8FFF2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    edx = edx + 0x8007000Eu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = eax;
    MEM32(ebp + -12) = edx;
    if ((_fas < 0)) goto loc_002F24D7; /* js: sign (negative) */

loc_002F24CD: ;
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F24D7u); RECOMP_ABI_CALL(0x002F3884u, sub_002F3884); /* call 0x002F3884 */

loc_002F24D7: ;
    eax = MEM32(0x306C24);
    MEM32(0xFE80204Cu) = eax;
    MEM32(-24772864) = ebx;
    MEM32(-24772860) = ebx;
    eax = MEM32(0x306B98);
    if (0xC) _cf = (int)(((eax) >> ((0xC) - 1)) & 1);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0xFE8020E0u) = eax;
    eax = MEM32(0x306C20);
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -8) = ebx;
    edi = 0xFE804028u;
    ecx = 0x3063A0;
    MEM32(ebp + -16) = 2;

loc_002F2517: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), 0xFFFFF000u (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -4) = ebx;
    if (CMP_BE(_fa & _fb, 0)) goto loc_002F2556; /* jbe: below or equal (unsigned <=) */

loc_002F2522: ;
    eax = MEM32(ebp + -8);
    ebx = MEM32(ebp + -24);
    edx = eax;
    if (0xC) _cf = (int)(((edx) >> (32 - (0xC))) & 1);
    edx = edx << 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx + eax * 8;

loc_002F2530: ;
    ebx = MEM32(0x306B94);
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edx)) >> 32) & 1);
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = ebx;
    ebx = MEM32(ecx);
    if (0xC) _cf = (int)(((ebx) >> ((0xC) - 1)) & 1);
    ebx = ebx >> 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x1000)) >> 32) & 1);
    edx = edx + 0x1000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002F2530; /* jb: below (unsigned <) */

loc_002F2554: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F2556: ;
    eax = MEM32(ebp + -8);
    if (0xC) _cf = (int)(((eax) >> (32 - (0xC))) & 1);
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + -4) = eax;
    edx = MEM32(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -8)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x10)) >> 32) & 1);
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002F2517; /* jne: not equal / not zero */

loc_002F2576: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_002F25E8; /* jl: less (signed <) */

loc_002F257B: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002F25E8; /* je: equal / zero */

loc_002F2580: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x2000);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F258Eu); RECOMP_ABI_CALL(0x002F37FAu, sub_002F37FA); /* call 0x002F37FA */

loc_002F258E: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x4000);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F259Du); RECOMP_ABI_CALL(0x002F3822u, sub_002F3822); /* call 0x002F3822 */

loc_002F259D: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x306C30);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F25ACu); RECOMP_ABI_CALL(0x002ED7A5u, sub_002ED7A5); /* call 0x002ED7A5 */

loc_002F25AC: ;
    eax = MEM32(0x30641C);
    ecx = eax;
    edi = 0xFFFF;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002F25E8; /* je: equal / zero */

loc_002F25BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_002F25E8; /* jne: not equal / not zero */

loc_002F25C6: ;
    ecx = MEM32(esi + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F25CEu); RECOMP_ABI_CALL(0x002F377Fu, sub_002F377F); /* call 0x002F377F */

loc_002F25CE: ;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    ecx = MEM32(0x30641C);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = edx;

loc_002F25E8: ;
    eax = MEM32(ebp + -12);
    MEM32(-24772772) = ebx;
    POP32(esp, edi);
    MEM32(-24772848) = 1;
    POP32(esp, esi);
    MEM32(-24772844) = 0xFFFFFFFFu;
    MEM32(-24772612) = 3;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002F2614
 * Original: 0x002F2614 - 0x002F26CD (185 bytes, 70 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2614(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F2614: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x306B94);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = ebx + 0x14;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x002F262Cu); RECOMP_ABI_CALL(0x002F35EFu, sub_002F35EF); /* call 0x002F35EF */

loc_002F262C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F26C6; /* jl: less (signed <) */

loc_002F2636: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x002F2641u); RECOMP_ABI_CALL(0x002F3081u, sub_002F3081); /* call 0x002F3081 */

loc_002F2641: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F26C6; /* jl: less (signed <) */

loc_002F2649: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F2653u); RECOMP_ABI_CALL(0x002F3294u, sub_002F3294); /* call 0x002F3294 */

loc_002F2653: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F26C6; /* jl: less (signed <) */

loc_002F2659: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x2000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002F2666u); RECOMP_ABI_CALL(0x002F30E9u, sub_002F30E9); /* call 0x002F30E9 */

loc_002F2666: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x002F2671u); RECOMP_ABI_CALL(0x002F3081u, sub_002F3081); /* call 0x002F3081 */

loc_002F2671: ;
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F26C6; /* jl: less (signed <) */

loc_002F2679: ;
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002F2684u); RECOMP_ABI_CALL(0x002F3294u, sub_002F3294); /* call 0x002F3294 */

loc_002F2684: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F26C6; /* jl: less (signed <) */

loc_002F268A: ;
    _fa = (uint32_t)(MEM8(0x30641E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x30641E), 1 (8-bit) */
    ecx = MEM32(ebx + 0x18);
    if (TEST_Z(_fa, _fb)) goto loc_002F26AE; /* je: equal / zero */

loc_002F2696: ;
    PUSH32(esp, 0x4000);
    _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x2000;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002F26A7u); RECOMP_ABI_CALL(0x002F30E9u, sub_002F30E9); /* call 0x002F30E9 */

loc_002F26A7: ;
    PUSH32(esp, 0x2000002);
    goto loc_002F26BE;

loc_002F26AE: ;
    PUSH32(esp, 0x2000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002F26B9u); RECOMP_ABI_CALL(0x002F30E9u, sub_002F30E9); /* call 0x002F30E9 */

loc_002F26B9: ;
    PUSH32(esp, 0x2000000);

loc_002F26BE: ;
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, 0x002F26C6u); RECOMP_ABI_CALL(0x002F3014u, sub_002F3014); /* call 0x002F3014 */

loc_002F26C6: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F26CD
 * Original: 0x002F26CD - 0x002F2704 (55 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F26CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F26CD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F26DEu); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F26DE: ;
    eax = MEM32(0xFE801004u);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(-25161724) = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F2700u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F2700: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F2704
 * Original: 0x002F2704 - 0x002F273B (55 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F2704(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2704: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F2715u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F2715: ;
    eax = MEM32(0xFE801510u);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(-25160432) = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F2737u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F2737: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F273B
 * Original: 0x002F273B - 0x002F2796 (91 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F273B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F273B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F274Cu); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F274C: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(-25161472);
    if ((_fa == 0)) goto loc_002F277B; /* je: equal / zero */

loc_002F275A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002F2773; /* je: equal / zero */

loc_002F275D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002F276B; /* je: equal / zero */

loc_002F2760: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002F2784; /* jne: not equal / not zero */

loc_002F2763: ;
    ecx = ecx & 0xFFFFEFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_002F2784;

loc_002F276B: ;
    ecx = ecx | 0x1007;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002F2784;

loc_002F2773: ;
    ecx = ecx & 0xFFFFFF1Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_002F2784;

loc_002F277B: ;
    ecx = ecx & 0xFFFFFF9Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002F2784: ;
    MEM32(-25161472) = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F2792u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F2792: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F2796
 * Original: 0x002F2796 - 0x002F27F8 (98 bytes, 39 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F2796(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2796: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F27A7u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F27A7: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(-25157632);
    if ((_fa == 0)) goto loc_002F27E3; /* je: equal / zero */

loc_002F27B5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002F27DB; /* je: equal / zero */

loc_002F27B8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002F27D3; /* je: equal / zero */

loc_002F27BB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002F27CE; /* je: equal / zero */

loc_002F27BE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002F27C9; /* je: equal / zero */

loc_002F27C1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002F27E6; /* jne: not equal / not zero */

loc_002F27C4: ;
    ecx = ecx & 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_002F27E6;

loc_002F27C9: ;
    ecx = ecx | 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002F27E6;

loc_002F27CE: ;
    ecx = ecx | 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002F27E6;

loc_002F27D3: ;
    ecx = ecx & 0xFFFFFFF7u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002F27E6;

loc_002F27DB: ;
    ecx = ecx & 0xFFFFFFEFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002F27E6;

loc_002F27E3: ;
    ecx = ecx & 0xFFFFFFE7u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002F27E6: ;
    MEM32(-25157632) = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F27F4u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F27F4: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F27F8
 * Original: 0x002F27F8 - 0x002F286F (119 bytes, 49 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F27F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F27F8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x31C8D4); PUSH32(esp, 0x002F2805u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F27FFu); } /* indirect call */
    }

loc_002F2805: ;
    ecx = MEM32(ebp + 0x10);
    edx = eax;
    eax = MEM32(ebp + 8);
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002F281B; /* je: equal / zero */

loc_002F2819: ;
    MEM32(ecx) = eax;

loc_002F281B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2868; /* je: equal / zero */

loc_002F2821: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x1000;
    esi = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002F285E; /* jae: above or equal (unsigned >=) */

loc_002F2831: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = esi + edx;
    MEM32(ebp + 8) = eax;
    goto loc_002F2842;

loc_002F283F: ;
    eax = MEM32(ebp + 8);

loc_002F2842: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C8D4); PUSH32(esp, 0x002F284Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F2845u); } /* indirect call */
    }

loc_002F284B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F2858; /* jne: not equal / not zero */

loc_002F284F: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F283F; /* jb: below (unsigned <) */

loc_002F2858: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0xC) (32-bit) */
    POP32(esp, ebx);
    if (CMP_B(_fa, _fb)) goto loc_002F2861; /* jb: below (unsigned <) */

loc_002F285E: ;
    esi = MEM32(ebp + 0xC);

loc_002F2861: ;
    eax = MEM32(ebp + 0x14);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);

loc_002F2868: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002F286F
 * Original: 0x002F286F - 0x002F28AC (61 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F286F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F286F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, 0);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F2889u); RECOMP_ABI_CALL(0x002F27F8u, sub_002F27F8); /* call 0x002F27F8 */

loc_002F2889: ;
    edx = MEM32(esi);
    ecx = 0x1000;
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F2899; /* jb: below (unsigned <) */

loc_002F2897: ;
    ecx = edx;

loc_002F2899: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + ecx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi) = MEM32(esi) - ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002F28A8; /* je: equal / zero */

loc_002F28A6: ;
    MEM32(edx) = ecx;

loc_002F28A8: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002F28A9
 * Original: 0x002F28A9 - 0x002F28AC (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F28A9(void)
{

loc_002F28A9: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002F28AC
 * Original: 0x002F28AC - 0x002F28EB (63 bytes, 22 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F28AC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002F28AC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, 0x002F28C4u); RECOMP_ABI_CALL(0x002ECA77u, sub_002ECA77); /* call 0x002ECA77 */

loc_002F28C4: ;
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    esi = esi + 0x8007000Eu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    if ((_fas < 0)) goto loc_002F28E4; /* js: sign (negative) */

loc_002F28DA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C8D4); PUSH32(esp, 0x002F28E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F28DBu); } /* indirect call */
    }

loc_002F28E1: ;
    MEM32(edi + 4) = eax;

loc_002F28E4: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002F28EB
 * Original: 0x002F28EB - 0x002F2965 (122 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F28EB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F28EB: ;
    _fa = (uint32_t)(MEM8(0x306C80)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x306C80), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F2907; /* jne: not equal / not zero */

loc_002F28F4: ;
    MEM32(0x306C80) = MEM32(0x306C80) | 1;
    _fa = (uint32_t)(MEM32(0x306C80)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0x800;
    MEM32(0x3063A8) = eax;
    goto loc_002F290C;

loc_002F2907: ;
    eax = MEM32(0x3063A8);

loc_002F290C: ;
    MEM32(0xFE802008u) = eax;
    MEM32(-25157620) = 0;
    MEM32(0xFE802010u) = eax;
    ecx = eax;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(-25157612) = ecx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0xFE802018u) = eax;
    MEM32(-25157604) = 0;
    ecx = 0x600;
    MEM32(-25157600) = ecx;
    eax = 0x100;
    MEM32(0xFE802024u) = eax;
    MEM32(0xFE802028u) = eax;
    MEM32(-25149396) = ecx;
    MEM32(-25149380) = 0x3800;
    esp += 4; return; /* ret */

}

/**
 * sub_002F2965
 * Original: 0x002F2965 - 0x002F2991 (44 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2965(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2965: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x002F296Eu); RECOMP_ABI_CALL(0x002F2331u, sub_002F2331); /* call 0x002F2331 */

loc_002F296E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F298C; /* jl: less (signed <) */

loc_002F2974: ;
    ecx = edi;
    PUSH32(esp, 0x002F297Bu); RECOMP_ABI_CALL(0x002F2470u, sub_002F2470); /* call 0x002F2470 */

loc_002F297B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F298C; /* jl: less (signed <) */

loc_002F2981: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2710);
    { uint32_t _icall_target = MEM32(0x31C8A4); PUSH32(esp, 0x002F298Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F2986u); } /* indirect call */
    }

loc_002F298C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2991
 * Original: 0x002F2991 - 0x002F29B4 (35 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2991(void)
{

loc_002F2991: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x14;
    MEM32(esi) = 0x322B20;
    PUSH32(esp, 0x002F29A2u); RECOMP_ABI_CALL(0x002F2E87u, sub_002F2E87); /* call 0x002F2E87 */

loc_002F29A2: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x002F29ABu); RECOMP_ABI_CALL(0x002EAE70u, sub_002EAE70); /* call 0x002EAE70 */

loc_002F29AB: ;
    MEM32(esi + 4) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F29B4
 * Original: 0x002F29B4 - 0x002F2A59 (165 bytes, 60 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F29B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F29B4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esi) = 0x322B20;
    if (CMP_EQ(_fa, _fb)) goto loc_002F29D8; /* je: equal / zero */

loc_002F29C8: ;
    ecx = edi;
    PUSH32(esp, 0x002F29CFu); RECOMP_ABI_CALL(0x002ED7BCu, sub_002ED7BC); /* call 0x002ED7BC */

loc_002F29CF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002F29D5u); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002F29D5: ;
    MEM32(esi + 0xC) = ebp;

loc_002F29D8: ;
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F29EF; /* je: equal / zero */

loc_002F29DF: ;
    ecx = edi;
    PUSH32(esp, 0x002F29E6u); RECOMP_ABI_CALL(0x002F3867u, sub_002F3867); /* call 0x002F3867 */

loc_002F29E6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002F29ECu); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002F29EC: ;
    MEM32(esi + 0x10) = ebp;

loc_002F29EF: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);

loc_002F29F2: ;
    _fa = (uint32_t)(MEM32(edi + 0x306B8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x306B8C), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2A10; /* je: equal / zero */

loc_002F29FA: ;
    ebx = edi + 0x306B80;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2A16; /* je: equal / zero */

loc_002F2A06: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F2A0Cu); RECOMP_ABI_CALL(0x002ECAC6u, sub_002ECAC6); /* call 0x002ECAC6 */

loc_002F2A0C: ;
    MEM32(ebx) = ebp;
    goto loc_002F2A16;

loc_002F2A10: ;
    MEM32(edi + 0x306B80) = ebp;

loc_002F2A16: ;
    MEM32(edi + 0x306B84) = ebp;
    MEM32(edi + 0x306B88) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x100 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F29F2; /* jb: below (unsigned <) */

loc_002F2A2D: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_002F2A3E; /* je: equal / zero */

loc_002F2A35: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x002F2A3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F2A38u); } /* indirect call */
    }

loc_002F2A3B: ;
    MEM32(esi + 4) = ebp;

loc_002F2A3E: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2A4E; /* je: equal / zero */

loc_002F2A45: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x002F2A4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F2A48u); } /* indirect call */
    }

loc_002F2A4B: ;
    MEM32(esi + 8) = ebp;

loc_002F2A4E: ;
    POP32(esp, edi);
    ecx = esi + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_002F35E2(); return; /* tail jmp 0x002F35E2 */

}

/**
 * sub_002F2A59
 * Original: 0x002F2A59 - 0x002F2B26 (205 bytes, 39 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2A59(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2A59: ;
    MEM32(-25161724) = 0xD8;
    MEM32(-25161472) = 0x88;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(-25157632) = edx;
    MEM32(-25160448) = edx;
    MEM32(-25160444) = 0x8000;
    PUSH32(esp, esi);
    MEM32(-25160440) = 0x800040;
    MEM32(-25160436) = edx;
    esi = ecx;
    PUSH32(esp, 0x002F2A9Du); RECOMP_ABI_CALL(0x002F28EBu, sub_002F28EB); /* call 0x002F28EB */

loc_002F2A9D: ;
    MEM32(-25161468) = 0xFF;
    MEM32(-25161464) = 0x3F;
    MEM32(-25161444) = 0x7F;
    MEM32(-25161436) = 0x1FFF;
    MEM32(-25161416) = 0x7FF;
    MEM32(-25161384) = 0x20;
    MEM32(-25161428) = edx;
    eax = 0x8000000;
    MEM32(0xFE801130u) = eax;
    MEM32(-25161408) = edx;
    MEM32(0xFE801144u) = eax;
    MEM32(-25161392) = edx;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(0xFE801154u) = eax;
    PUSH32(esp, 0x002F2B07u); RECOMP_ABI_CALL(0x002F2704u, sub_002F2704); /* call 0x002F2704 */

loc_002F2B07: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x002F2B10u); RECOMP_ABI_CALL(0x002F273Bu, sub_002F273B); /* call 0x002F273B */

loc_002F2B10: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x002F2B19u); RECOMP_ABI_CALL(0x002F273Bu, sub_002F273B); /* call 0x002F273B */

loc_002F2B19: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x002F2B22u); RECOMP_ABI_CALL(0x002F2796u, sub_002F2796); /* call 0x002F2796 */

loc_002F2B22: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2B26
 * Original: 0x002F2B26 - 0x002F2CA6 (384 bytes, 123 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F2B26(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002F2B26: ;
    PUSH32(esp, ebp);
    ebp = esp + -120;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x88));
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x2000;
    ecx = 0x1000;
    PUSH32(esp, edi);
    MEM32(ebp + 0x70) = ebx;
    MEM32(ebp + 0x74) = esi;
    MEM32(ebp + -16) = edx;
    MEM32(ebp + -12) = ecx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F2B50: ;
    _fb = (uint32_t)(MEM32(esi + 0x3063A0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(esi + 0x3063A0))) >> 32) & 1);
    eax = eax + MEM32(esi + 0x3063A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002F2B50; /* jb: below (unsigned <) */

loc_002F2B5E: ;
    MEM32(ebp + -8) = eax;
    esi = 0x8000;
    PUSH32(esp, 4);
    if (0xC) _cf = (int)(((eax) >> ((0xC) - 1)) & 1);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = esi;
    esi = 0x4000;
    if (3) _cf = (int)(((eax) >> (32 - (3))) & 1);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -4) = ecx;
    MEM32(ebp) = edi;
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 0x10) = 0x4020;
    MEM32(ebp + 0x14) = esi;
    MEM32(ebp + 0x18) = esi;
    MEM32(ebp + 0x1C) = esi;
    MEM32(ebp + 0x20) = 0x10000;
    MEM32(ebp + 0x24) = esi;
    MEM32(ebp + 0x28) = edx;
    MEM32(ebp + 0x2C) = esi;
    MEM32(ebp + 0x30) = edx;
    MEM32(ebp + 0x34) = esi;
    MEM32(ebp + 0x38) = 0x10;
    MEM32(ebp + 0x3C) = esi;
    MEM32(ebp + 0x40) = eax;
    MEM32(ebp + 0x44) = esi;
    MEM32(ebp + 0x48) = ecx;
    MEM32(ebp + 0x4C) = esi;
    MEM32(ebp + 0x50) = 0xC000;
    MEM32(ebp + 0x54) = esi;
    MEM32(ebp + 0x58) = 0x1060;
    MEM32(ebp + 0x5C) = esi;
    PUSH32(esp, 0x002F2BD8u); RECOMP_ABI_CALL(0x002F36CEu, sub_002F36CE); /* call 0x002F36CE */

loc_002F2BD8: ;
    if (0xC) _cf = (int)(((eax) >> ((0xC) - 1)) & 1);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (0xC) _cf = (int)(((eax) >> (32 - (0xC))) & 1);
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x60) = eax;
    if (0xC) _cf = (int)(((eax) >> ((0xC) - 1)) & 1);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (3) _cf = (int)(((eax) >> (32 - (3))) & 1);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x68) = eax;
    eax = MEM32(0x306A20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + 0x64) = esi;
    MEM32(ebp + 0x6C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_002F2C06; /* je: equal / zero */

loc_002F2BFB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F2C01u); RECOMP_ABI_CALL(0x002EAE70u, sub_002EAE70); /* call 0x002EAE70 */

loc_002F2C01: ;
    MEM32(ebx + 8) = eax;
    goto loc_002F2C37;

loc_002F2C06: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x626F5344);
    PUSH32(esp, 0x002F2C14u); RECOMP_ABI_CALL(0x002ECADEu, sub_002ECADE); /* call 0x002ECADE */

loc_002F2C14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2C21; /* je: equal / zero */

loc_002F2C18: ;
    ecx = eax;
    PUSH32(esp, 0x002F2C1Fu); RECOMP_ABI_CALL(0x002EEC85u, sub_002EEC85); /* call 0x002EEC85 */

loc_002F2C1F: ;
    goto loc_002F2C23;

loc_002F2C21: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F2C23: ;
    MEM32(ebx + 8) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    eax = eax + 0x8007000Eu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x74) = eax;

loc_002F2C37: ;
    edi = ebp + -12;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F2C3C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x74), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_002F2C9B; /* jl: less (signed <) */

loc_002F2C42: ;
    eax = MEM32(edi + -4);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(edi));
    ebx = esi + 0x306B80;
    PUSH32(esp, ebx);
    MEM32(esi + 0x306B88) = eax;
    PUSH32(esp, 0x002F2C5Bu); RECOMP_ABI_CALL(0x002F28ACu, sub_002F28AC); /* call 0x002F28AC */

loc_002F2C5B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + 0x74) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002F2C8D; /* jl: less (signed <) */

loc_002F2C62: ;
    eax = MEM32(esi + 0x306B88);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFF)) >> 32) & 1);
    eax = eax + 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (0xC) _cf = (int)(((eax) >> ((0xC) - 1)) & 1);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0xC) _cf = (int)(((eax) >> (32 - (0xC))) & 1);
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x70);
    PUSH32(esp, MEM32(ebx));
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x002F2C82u); RECOMP_ABI_CALL(0x002EED0Bu, sub_002EED0B); /* call 0x002EED0B */

loc_002F2C82: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x306B8C) = eax;

loc_002F2C8D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(8)) >> 32) & 1);
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x100 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002F2C3C; /* jb: below (unsigned <) */

loc_002F2C9B: ;
    eax = MEM32(ebp + 0x74);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x78)) >> 32) & 1);
    ebp = ebp + 0x78;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002F2CA6
 * Original: 0x002F2CA6 - 0x002F2D83 (221 bytes, 67 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F2CA6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2CA6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = ebp + -16;
    ebx = 0x29B;
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -12) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F2CC7u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F2CC7: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2D5A; /* je: equal / zero */

loc_002F2CD0: ;
    _fa = (uint32_t)(MEM8(-25161472)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(-25161472), 0xE0 (8-bit) */
    MEM32(ebp + 8) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_002F2D71; /* jne: not equal / not zero */

loc_002F2CE0: ;
    _fa = (uint32_t)(MEM32(-25157632)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(-25157632), 0x18 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F2D71; /* je: equal / zero */

loc_002F2CF0: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = edi;

loc_002F2CF6: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F2CF6; /* jb: below (unsigned <) */

loc_002F2D03: ;
    MEM32(-25034484) = esi;
    eax = MEM32(0x306BC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2D51; /* je: equal / zero */

loc_002F2D12: ;
    ecx = ebp + -8;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F2D20u); RECOMP_ABI_CALL(0x002EF0D0u, sub_002EF0D0); /* call 0x002EF0D0 */

loc_002F2D20: ;
    MEM32(-25034492) = 2;
    goto loc_002F2D3A;

loc_002F2D2C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C8A4); PUSH32(esp, 0x002F2D33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F2D2Du); } /* indirect call */
    }

loc_002F2D33: ;
    eax = ebx;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2D47; /* je: equal / zero */

loc_002F2D3A: ;
    ecx = ebp + -8;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F2D43u); RECOMP_ABI_CALL(0x002EE56Du, sub_002EE56D); /* call 0x002EE56D */

loc_002F2D43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2D2C; /* je: equal / zero */

loc_002F2D47: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F2D4Fu); RECOMP_ABI_CALL(0x002EF0D0u, sub_002EF0D0); /* call 0x002EF0D0 */

loc_002F2D4F: ;
    goto loc_002F2D71;

loc_002F2D51: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x31C8A4); PUSH32(esp, 0x002F2D58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F2D52u); } /* indirect call */
    }

loc_002F2D58: ;
    goto loc_002F2D71;

loc_002F2D5A: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F2D5A; /* jb: below (unsigned <) */

loc_002F2D67: ;
    MEM32(-25034484) = 1;

loc_002F2D71: ;
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F2D79u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F2D79: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F2D83
 * Original: 0x002F2D83 - 0x002F2D9E (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2D83(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2D83: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002F2D8Bu); RECOMP_ABI_CALL(0x002F29B4u, sub_002F29B4); /* call 0x002F29B4 */

loc_002F2D8B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F2D98; /* je: equal / zero */

loc_002F2D92: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002F2D98u); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002F2D98: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F2D9E
 * Original: 0x002F2D9E - 0x002F2E1B (125 bytes, 31 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2D9E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F2D9E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x002F2DA8u); RECOMP_ABI_CALL(0x002F2CA6u, sub_002F2CA6); /* call 0x002F2CA6 */

loc_002F2DA8: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x002F2DB1u); RECOMP_ABI_CALL(0x002F26CDu, sub_002F26CD); /* call 0x002F26CD */

loc_002F2DB1: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x002F2DBAu); RECOMP_ABI_CALL(0x002F2704u, sub_002F2704); /* call 0x002F2704 */

loc_002F2DBA: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x002F2DC3u); RECOMP_ABI_CALL(0x002F273Bu, sub_002F273B); /* call 0x002F273B */

loc_002F2DC3: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x002F2DCCu); RECOMP_ABI_CALL(0x002F2796u, sub_002F2796); /* call 0x002F2796 */

loc_002F2DCC: ;
    eax = 0xFFFF;
    MEM32(0xFE802054u) = eax;
    MEM32(0xFE802060u) = eax;
    MEM32(0xFE80206Cu) = eax;
    MEM32(0xFE802058u) = eax;
    MEM32(0xFE802064u) = eax;
    MEM32(0xFE802070u) = eax;
    MEM32(0xFE80205Cu) = eax;
    MEM32(0xFE802068u) = eax;
    MEM32(0xFE802074u) = eax;
    MEM32(-24903684) = 0;
    ecx = esi + 0x14;
    MEM32(-24772612) = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002F3564(); return; /* tail jmp 0x002F3564 */

}

/**
 * sub_002F2E1B
 * Original: 0x002F2E1B - 0x002F2E87 (108 bytes, 42 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2E1B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2E1B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x002F2E24u); RECOMP_ABI_CALL(0x002F2D9Eu, sub_002F2D9E); /* call 0x002F2D9E */

loc_002F2E24: ;
    ecx = esi;
    PUSH32(esp, 0x002F2E2Bu); RECOMP_ABI_CALL(0x002F2B26u, sub_002F2B26); /* call 0x002F2B26 */

loc_002F2E2B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F2E82; /* jl: less (signed <) */

loc_002F2E31: ;
    ecx = esi;
    PUSH32(esp, 0x002F2E38u); RECOMP_ABI_CALL(0x002F2A59u, sub_002F2A59); /* call 0x002F2A59 */

loc_002F2E38: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F2E82; /* jl: less (signed <) */

loc_002F2E3E: ;
    ecx = esi;
    PUSH32(esp, 0x002F2E45u); RECOMP_ABI_CALL(0x002F225Eu, sub_002F225E); /* call 0x002F225E */

loc_002F2E45: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F2E82; /* jl: less (signed <) */

loc_002F2E4B: ;
    ecx = esi;
    PUSH32(esp, 0x002F2E52u); RECOMP_ABI_CALL(0x002F2614u, sub_002F2614); /* call 0x002F2614 */

loc_002F2E52: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F2E82; /* jl: less (signed <) */

loc_002F2E58: ;
    ecx = esi;
    PUSH32(esp, 0x002F2E5Fu); RECOMP_ABI_CALL(0x002F2965u, sub_002F2965); /* call 0x002F2965 */

loc_002F2E5F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F2E82; /* jl: less (signed <) */

loc_002F2E65: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x002F2E6Eu); RECOMP_ABI_CALL(0x002F2796u, sub_002F2796); /* call 0x002F2796 */

loc_002F2E6E: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x002F2E78u); RECOMP_ABI_CALL(0x002F323Au, sub_002F323A); /* call 0x002F323A */

loc_002F2E78: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x002F2E82u); RECOMP_ABI_CALL(0x002F323Au, sub_002F323A); /* call 0x002F323A */

loc_002F2E82: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2E87
 * Original: 0x002F2E87 - 0x002F2E8F (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2E87(void)
{

loc_002F2E87: ;
    eax = ecx;
    MEM32(0x306A30) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002F2E8F
 * Original: 0x002F2E8F - 0x002F2EBC (45 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2E8F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2E8F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x3E8;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002F2EAA;

loc_002F2E9B: ;
    eax = esi;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2EB5; /* je: equal / zero */

loc_002F2EA2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x14);
    { uint32_t _icall_target = MEM32(0x31C8A4); PUSH32(esp, 0x002F2EAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F2EA4u); } /* indirect call */
    }

loc_002F2EAA: ;
    _fa = (uint32_t)(MEM8(-20971212)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(-20971212), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F2E9B; /* jne: not equal / not zero */

loc_002F2EB3: ;
    goto loc_002F2EB7;

loc_002F2EB5: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F2EB7: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2EBC
 * Original: 0x002F2EBC - 0x002F2F0C (80 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2EBC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2EBC: ;
    eax = MEM32(0xFEC0012Cu);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = 0x3E8;
    if (TEST_NZ(_fa, _fb)) goto loc_002F2ED8; /* jne: not equal / not zero */

loc_002F2ED0: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0xFEC0012Cu) = eax;

loc_002F2ED8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F2EE4; /* je: equal / zero */

loc_002F2EDC: ;
    eax = eax & 0xFFFFFFF3u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0xFEC0012Cu) = eax;

loc_002F2EE4: ;
    esi = 0x100;
    goto loc_002F2EFA;

loc_002F2EEB: ;
    eax = edi;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2F04; /* je: equal / zero */

loc_002F2EF2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x14);
    { uint32_t _icall_target = MEM32(0x31C8A4); PUSH32(esp, 0x002F2EFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F2EF4u); } /* indirect call */
    }

loc_002F2EFA: ;
    _fa = (uint32_t)(MEM32(-20971216)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(-20971216), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F2EEB; /* je: equal / zero */

loc_002F2F02: ;
    goto loc_002F2F06;

loc_002F2F04: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F2F06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2F0C
 * Original: 0x002F2F0C - 0x002F2F20 (20 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2F0C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2F0C: ;
    PUSH32(esp, 2);
    eax = ecx + 0x38;
    POP32(esp, ecx);

loc_002F2F12: ;
    SET_LO8(edx, MEM8(eax));
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + 1) = MEM8(eax + 1) + LO8(edx);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(eax) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002F2F12; /* jne: not equal / not zero */

loc_002F2F1F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002F2F20
 * Original: 0x002F2F20 - 0x002F2F3D (29 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2F20: ;
    PUSH32(esp, 0x002F2F25u); RECOMP_ABI_CALL(0x002F2E8Fu, sub_002F2E8F); /* call 0x002F2E8F */

loc_002F2F25: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2F3A; /* je: equal / zero */

loc_002F2F29: ;
    SET_LO16(ecx, MEM16(esp + 8));
    edx = MEM32(esp + 4);
    MEM16(edx * 2 + -20971520) = LO16(ecx);

loc_002F2F3A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002F2F3D
 * Original: 0x002F2F3D - 0x002F2F55 (24 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F2F3D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2F3D: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0x002F2F48u); RECOMP_ABI_CALL(0x002F2F20u, sub_002F2F20); /* call 0x002F2F20 */

loc_002F2F48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F2F51; /* jne: not equal / not zero */

loc_002F2F4C: ;
    esi = 0x80004005u;

loc_002F2F51: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F2F55
 * Original: 0x002F2F55 - 0x002F2F84 (47 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F2F55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2F55: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F2F69u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F2F69: ;
    eax = MEM32(esi);
    eax = MEM32(eax * 4 + 0x3063C8);
    ecx = ebp + -8;
    MEM8(eax + -20971253) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F2F81u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F2F81: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002F2F84
 * Original: 0x002F2F84 - 0x002F3014 (144 bytes, 54 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F2F84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F2F84: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F2F99u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F2F99: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2FCF; /* je: equal / zero */

loc_002F2F9F: ;
    SET_LO8(ebx, MEM8(ebp + 8));
    SET_LO8(ecx, LO8(ebx));
    _fb = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + MEM8(ebp + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F2FB7; /* je: equal / zero */

loc_002F2FAF: ;
    SET_LO8(ebx, LO8(ebx) & 0x1F);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_002F2FD3;

loc_002F2FB7: ;
    eax = ZX8(LO8(ebx));
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ebp + 0xC));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = ZX8(LO8(ecx));
    SET_LO8(ebx, LO8(edx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    POP32(esp, edi);
    SET_LO8(ecx, LO8(edx));
    goto loc_002F2FD3;

loc_002F2FCF: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_002F2FD3: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2FE8; /* je: equal / zero */

loc_002F2FD9: ;
    eax = MEM32(esi);
    eax = MEM32(eax * 4 + 0x3063C8);
    MEM8(eax + -20971260) = LO8(ebx);

loc_002F2FE8: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F2FFD; /* je: equal / zero */

loc_002F2FEE: ;
    eax = MEM32(esi);
    eax = MEM32(eax * 4 + 0x3063C8);
    MEM8(eax + -20971259) = LO8(ecx);

loc_002F2FFD: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    ecx = ebp + -8;
    MEM8(esi + 0x25) = LO8(ebx);
    MEM8(esi + 0x24) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F300Eu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F300E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002F3014
 * Original: 0x002F3014 - 0x002F3045 (49 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F3014(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F3014: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F3028u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F3028: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F3038; /* jne: not equal / not zero */

loc_002F302D: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x28) = eax;
    MEM32(0xFEC0017Cu) = eax;

loc_002F3038: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F3040u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F3040: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F3045
 * Original: 0x002F3045 - 0x002F3073 (46 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F3045(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F3045: ;
    eax = ZX8(MEM8(ecx + 0x25));
    edx = MEM32(ecx + 0x18);
    SET_LO16(eax, MEM16(edx + eax * 8 + 4));
    edx = MEM32(ecx);
    edx = MEM32(edx * 4 + 0x3063C8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = esi >> 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO16(esi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(eax, LO16(eax) - LO16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    MEM16(edx + -20971256) = LO16(eax);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F3073
 * Original: 0x002F3073 - 0x002F3081 (14 bytes, 4 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F3073(void)
{

loc_002F3073: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x002F307Cu); RECOMP_ABI_CALL(0x002F2F0Cu, sub_002F2F0C); /* call 0x002F2F0C */

loc_002F307C: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F3081
 * Original: 0x002F3081 - 0x002F30E9 (104 bytes, 38 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F3081(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002F3081: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F3095u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F3095: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x626F5344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F30A3u); RECOMP_ABI_CALL(0x002ECADEu, sub_002ECADE); /* call 0x002ECADE */

loc_002F30A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(ebp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_002F30B8; /* je: equal / zero */

loc_002F30AA: ;
    MEM32(eax) = ecx;
    MEM32(eax + 0x28) = 0x2000000;
    MEM32(eax + 8) = esi;
    goto loc_002F30BA;

loc_002F30B8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F30BA: ;
    MEM32(esi + ecx * 4) = eax;
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x7FF8FFF2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x8007000Eu)) >> 32) & 1);
    esi = esi + 0x8007000Eu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas < 0)) goto loc_002F30DA; /* js: sign (negative) */

loc_002F30D1: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002F30DA; /* je: equal / zero */

loc_002F30D8: ;
    MEM32(ecx) = eax;

loc_002F30DA: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F30E2u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F30E2: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002F30E9
 * Original: 0x002F30E9 - 0x002F317A (145 bytes, 52 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F30E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F30E9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F30FDu); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F30FD: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F310D; /* je: equal / zero */

loc_002F3104: ;
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0x24) = MEM8(esi + 0x24) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x24)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;

loc_002F310D: ;
    SET_LO8(eax, MEM8(esi + 0x25));
    _fb = (uint32_t)(MEM8(esi + 0x24)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ebp + 8);
    SET_LO8(eax, LO8(eax) & 0x1F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = ZX8(LO8(eax));
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + ecx) = edx;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(ebp + 0xC);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(edx + eax + 4) = LO16(ecx);
    ecx = MEM32(esi + 0x18);
    ecx = ecx + eax + 4;
    MEM16(ecx + 2) = MEM16(ecx + 2) & 0xC000;
    _fa = (uint32_t)(MEM16(ecx + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ecx = MEM32(esi + 0x18);
    ecx = ecx + eax + 4;
    MEM8(ecx + 3) = MEM8(ecx + 3) | 0x40;
    _fa = (uint32_t)(MEM8(ecx + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(esi + 0x18);
    eax = ecx + eax + 4;
    MEM8(eax + 3) = MEM8(eax + 3) | 0x80;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x24));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x25));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F316Du); RECOMP_ABI_CALL(0x002F2F84u, sub_002F2F84); /* call 0x002F2F84 */

loc_002F316D: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F3175u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F3175: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002F317A
 * Original: 0x002F317A - 0x002F31EC (114 bytes, 39 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F317A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F317A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F318Eu); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F318E: ;
    eax = MEM32(esi);
    eax = MEM32(eax * 4 + 0x3063C8);
    MEM8(eax + -20971253) = 2;
    eax = MEM32(esi);
    eax = MEM32(eax * 4 + 0x3063C8);
    SET_LO8(ecx, MEM8(eax + -20971253));
    SET_LO8(ecx, LO8(ecx) & 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_002F31B0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F31B0; /* jne: not equal / not zero */

loc_002F31B4: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(eax + -20971264) = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F31CA; /* jne: not equal / not zero */

loc_002F31C2: ;
    eax = MEM32(esi + 0x28);
    MEM32(0xFEC0017Cu) = eax;

loc_002F31CA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x24));
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x25));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F31E1u); RECOMP_ABI_CALL(0x002F2F84u, sub_002F2F84); /* call 0x002F2F84 */

loc_002F31E1: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F31E9u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F31E9: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002F31EC
 * Original: 0x002F31EC - 0x002F323A (78 bytes, 32 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F31EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F31EC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp + -8;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F3202u); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F3202: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F3209u); RECOMP_ABI_CALL(0x002F2F55u, sub_002F2F55); /* call 0x002F2F55 */

loc_002F3209: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F3210u); RECOMP_ABI_CALL(0x002F317Au, sub_002F317A); /* call 0x002F317A */

loc_002F3210: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F321Du); RECOMP_ABI_CALL(0x002F2F84u, sub_002F2F84); /* call 0x002F2F84 */

loc_002F321D: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F322C; /* je: equal / zero */

loc_002F3226: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 0x2C) = edi;

loc_002F322C: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F3234u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F3234: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F323A
 * Original: 0x002F323A - 0x002F3294 (90 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F323A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F323A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F324Eu); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F324E: ;
    eax = MEM32(esi);
    eax = MEM32(eax * 4 + 0x3063C8);
    _fa = (uint32_t)(MEM8(eax + -20971258)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + -20971258), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F3267; /* je: equal / zero */

loc_002F3260: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F3267u); RECOMP_ABI_CALL(0x002F317Au, sub_002F317A); /* call 0x002F317A */

loc_002F3267: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3277; /* je: equal / zero */

loc_002F326D: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F3277u); RECOMP_ABI_CALL(0x002F3045u, sub_002F3045); /* call 0x002F3045 */

loc_002F3277: ;
    eax = MEM32(esi);
    eax = MEM32(eax * 4 + 0x3063C8);
    ecx = ebp + -8;
    MEM8(eax + -20971253) = 0x1D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F328Fu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F328F: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F3294
 * Original: 0x002F3294 - 0x002F3336 (162 bytes, 58 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F3294(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002F3294: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F32AAu); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F32AA: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 1);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 4);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0x100);
    MEM32(esi + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F32CFu); RECOMP_ABI_CALL(0x002ECA77u, sub_002ECA77); /* call 0x002ECA77 */

loc_002F32CF: ;
    edi = eax;
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0x7FF8FFF2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0x8007000Eu;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ebx)) >> 32) & 1);
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    if ((_fas < 0)) goto loc_002F3325; /* js: sign (negative) */

loc_002F32E7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C8D4); PUSH32(esp, 0x002F32EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F32E8u); } /* indirect call */
    }

loc_002F32EE: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x1C) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002F331A; /* je: equal / zero */

loc_002F32F7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0x2000);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F330Au); RECOMP_ABI_CALL(0x002ECA77u, sub_002ECA77); /* call 0x002ECA77 */

loc_002F330A: ;
    MEM32(esi + 0x20) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_002F331A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_002F3325; /* jl: less (signed <) */

loc_002F331E: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F3325u); RECOMP_ABI_CALL(0x002F317Au, sub_002F317A); /* call 0x002F317A */

loc_002F3325: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F332Du); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F332D: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002F3318
 * Original: 0x002F3318 - 0x002F3336 (30 bytes, 13 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F3318(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F3318: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F3325; /* jl: less (signed <) */

loc_002F331E: ;
    ecx = esi;
    PUSH32(esp, 0x002F3325u); RECOMP_ABI_CALL(0x002F317Au, sub_002F317A); /* call 0x002F317A */

loc_002F3325: ;
    ecx = ebp + -8;
    PUSH32(esp, 0x002F332Du); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F332D: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002F3336
 * Original: 0x002F3336 - 0x002F3384 (78 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F3336(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F3336: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F334Au); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F334A: ;
    PUSH32(esp, 1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F3353u); RECOMP_ABI_CALL(0x002F31ECu, sub_002F31EC); /* call 0x002F31EC */

loc_002F3353: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3364; /* je: equal / zero */

loc_002F335A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F3360u); RECOMP_ABI_CALL(0x002ECAC6u, sub_002ECAC6); /* call 0x002ECAC6 */

loc_002F3360: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002F3364: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3375; /* je: equal / zero */

loc_002F336B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F3371u); RECOMP_ABI_CALL(0x002ECAC6u, sub_002ECAC6); /* call 0x002ECAC6 */

loc_002F3371: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002F3375: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F3381u); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F3381: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002F3384
 * Original: 0x002F3384 - 0x002F33DB (87 bytes, 38 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F3384(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F3384: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(esi + 0x24));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F33CF; /* je: equal / zero */

loc_002F3391: ;
    SET_LO8(eax, MEM8(esi + 0x25));
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    edx = ZX8(LO8(eax));
    edx = MEM32(edi + edx * 8 + 4);
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 4) = MEM32(esi + 4) + edx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 1 (8-bit) */
    POP32(esp, edi);
    PUSH32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_002F33B7; /* je: equal / zero */

loc_002F33B0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002F33D2; /* jbe: below or equal (unsigned <=) */

loc_002F33B5: ;
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */

loc_002F33B7: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F33C3u); RECOMP_ABI_CALL(0x002F2F84u, sub_002F2F84); /* call 0x002F2F84 */

loc_002F33C3: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F33CF; /* je: equal / zero */

loc_002F33CA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x14));
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002F33CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F33CDu); } /* indirect call */
    }

loc_002F33CF: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002F33D2: ;
    ecx = esi;
    PUSH32(esp, 0x002F33D9u); RECOMP_ABI_CALL(0x002F31ECu, sub_002F31EC); /* call 0x002F31EC */

loc_002F33D9: ;
    goto loc_002F33C3;

}

/**
 * sub_002F33DB
 * Original: 0x002F33DB - 0x002F34AF (212 bytes, 72 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F33DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F33DB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(-20971216);
    ecx = ecx & 0x51;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -16) = ecx;
    if ((_fa == 0)) goto loc_002F34A5; /* je: equal / zero */

loc_002F33F6: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    MEM32(ebp + -12) = 0x3063D4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) - esi;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = 0x80000000u;
    edi = esi;
    ebx = esi + 0x38;

loc_002F3412: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax + edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edi), ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F346D; /* je: equal / zero */

loc_002F341A: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F346D; /* je: equal / zero */

loc_002F3420: ;
    edx = MEM32(eax);
    edx = MEM32(edx * 4 + 0x3063C8);
    edx = ZX16(MEM16(edx + -20971258));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    MEM32(ebp + -20) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_002F3457; /* je: equal / zero */

loc_002F3438: ;
    ecx = MEM32(ebp + -8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -4) = MEM32(ebp + -4) | edx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F3452; /* je: equal / zero */

loc_002F3449: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F3450u); RECOMP_ABI_CALL(0x002F3384u, sub_002F3384); /* call 0x002F3384 */

loc_002F3450: ;
    goto loc_002F3454;

loc_002F3452: ;
    MEM8(ebx) = MEM8(ebx) + 1;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_002F3454: ;
    ecx = MEM32(ebp + -16);

loc_002F3457: ;
    eax = MEM32(edi);
    eax = MEM32(eax);
    eax = MEM32(eax * 4 + 0x3063C8);
    SET_LO16(edx, MEM16(ebp + -20));
    MEM16(eax + -20971258) = LO16(edx);

loc_002F346D: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F3412; /* jb: below (unsigned <) */

loc_002F347B: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 1 (8-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_002F349A; /* jne: not equal / not zero */

loc_002F3483: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002F349A; /* je: equal / zero */

loc_002F3489: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C8DC); PUSH32(esp, 0x002F3497u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F3491u); } /* indirect call */
    }

loc_002F3497: ;
    ecx = MEM32(ebp + -16);

loc_002F349A: ;
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(-20971216) = ecx;
    goto loc_002F34A9;

loc_002F34A5: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002F34A9: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002F34AF
 * Original: 0x002F34AF - 0x002F3508 (89 bytes, 39 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F34AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F34AF: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;

loc_002F34B6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x2F3073);
    PUSH32(esp, 0x306A38);
    { uint32_t _icall_target = MEM32(0x31C938); PUSH32(esp, 0x002F34C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F34C1u); } /* indirect call */
    }

loc_002F34C7: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp;
    esi = ebp + 0x39;
    MEM32(esp + 0x10) = 2;

loc_002F34D6: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F34F3; /* je: equal / zero */

loc_002F34DB: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F34F0; /* je: equal / zero */

loc_002F34E3: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0x002F34EAu); RECOMP_ABI_CALL(0x002F3384u, sub_002F3384); /* call 0x002F3384 */

loc_002F34EA: ;
    MEM8(esi) = MEM8(esi) - 1;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002F34E3; /* jne: not equal / not zero */

loc_002F34EE: ;
    goto loc_002F34F3;

loc_002F34F0: ;
    MEM8(esi) = 0;

loc_002F34F3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002F34D6; /* jne: not equal / not zero */

loc_002F34FE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F34B6; /* jne: not equal / not zero */

loc_002F3502: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002F3508
 * Original: 0x002F3508 - 0x002F3519 (17 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F3508(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F3508: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x002F3511u); RECOMP_ABI_CALL(0x002F33DBu, sub_002F33DB); /* call 0x002F33DB */

loc_002F3511: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002F3519
 * Original: 0x002F3519 - 0x002F3525 (12 bytes, 3 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F3519(void)
{

loc_002F3519: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x002F3522u); RECOMP_ABI_CALL(0x002F34AFu, sub_002F34AF); /* call 0x002F34AF */

loc_002F3522: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002F3525
 * Original: 0x002F3525 - 0x002F3564 (63 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F3525(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F3525: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F353Au); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F353A: ;
    eax = MEM32(ebp + 8);
    esi = esi + eax * 4;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3556; /* je: equal / zero */

loc_002F3546: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F354Du); RECOMP_ABI_CALL(0x002F3336u, sub_002F3336); /* call 0x002F3336 */

loc_002F354D: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F3553u); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002F3553: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002F3556: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F355Eu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F355E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F3564
 * Original: 0x002F3564 - 0x002F35D3 (111 bytes, 43 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F3564(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F3564: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp + -8;
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F357Au); RECOMP_ABI_CALL(0x002E9F30u, sub_002E9F30); /* call 0x002E9F30 */

loc_002F357A: ;
    _fa = (uint32_t)(MEM32(0x306A38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x306A38), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3593; /* je: equal / zero */

loc_002F3582: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x306A38);
    { uint32_t _icall_target = MEM32(0x31C900); PUSH32(esp, 0x002F358Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F3587u); } /* indirect call */
    }

loc_002F358D: ;
    MEM32(0x306A38) = ebx;

loc_002F3593: ;
    PUSH32(esp, esi);
    esi = edi + 0x1C;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0x13 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F35A7; /* jne: not equal / not zero */

loc_002F359D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C934); PUSH32(esp, 0x002F35A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F359Eu); } /* indirect call */
    }

loc_002F35A4: ;
    MEM16(esi) = ~MEM16(esi);

loc_002F35A7: ;
    esi = edi + 0xC;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F35B8; /* je: equal / zero */

loc_002F35AE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C850); PUSH32(esp, 0x002F35B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F35B0u); } /* indirect call */
    }

loc_002F35B6: ;
    MEM32(esi) = ebx;

loc_002F35B8: ;
    POP32(esp, esi);

loc_002F35B9: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F35C1u); RECOMP_ABI_CALL(0x002F3525u, sub_002F3525); /* call 0x002F3525 */

loc_002F35C1: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F35B9; /* jb: below (unsigned <) */

loc_002F35C7: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F35CFu); RECOMP_ABI_CALL(0x002E9F52u, sub_002E9F52); /* call 0x002E9F52 */

loc_002F35CF: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_002F35D3
 * Original: 0x002F35D3 - 0x002F35E2 (15 bytes, 4 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F35D3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F35D3: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xFFFFFFF4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002F35DFu); RECOMP_ABI_CALL(0x002F3564u, sub_002F3564); /* call 0x002F3564 */

loc_002F35DF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F35E2
 * Original: 0x002F35E2 - 0x002F35EF (13 bytes, 3 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F35E2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F35E2: ;
    PUSH32(esp, 0x002F35E7u); RECOMP_ABI_CALL(0x002F3564u, sub_002F3564); /* call 0x002F3564 */

loc_002F35E7: ;
    MEM32(0x306A30) = MEM32(0x306A30) & 0;
    _fa = (uint32_t)(MEM32(0x306A30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_002F35EF
 * Original: 0x002F35EF - 0x002F36CE (223 bytes, 79 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F35EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F35EF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F3601u); RECOMP_ABI_CALL(0x002F2EBCu, sub_002F2EBC); /* call 0x002F2EBC */

loc_002F3601: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F360F; /* jne: not equal / not zero */

loc_002F3605: ;
    ebx = 0x88780078u;
    goto loc_002F36C6;

loc_002F360F: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F3616u); RECOMP_ABI_CALL(0x002F2F3Du, sub_002F2F3D); /* call 0x002F2F3D */

loc_002F3616: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F36C6; /* jl: less (signed <) */

loc_002F3620: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F3622: ;
    ecx = MEM32(eax + 0x3063C8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM8(ecx + -20971253) = 2;
    if (CMP_B(_fa, _fb)) goto loc_002F3622; /* jb: below (unsigned <) */

loc_002F3637: ;
    _fa = (uint32_t)(MEM8(edi + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 8), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002F364D; /* jne: not equal / not zero */

loc_002F363D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2F3519);
    eax = edi + 0x1C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C7A8); PUSH32(esp, 0x002F364Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F3647u); } /* indirect call */
    }

loc_002F364D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    { uint32_t _icall_target = MEM32(0x31C894); PUSH32(esp, 0x002F365Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F3654u); } /* indirect call */
    }

loc_002F365A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    esi = 0x306A38;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2F3508);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C8A0); PUSH32(esp, 0x002F3674u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F366Eu); } /* indirect call */
    }

loc_002F3674: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C89C); PUSH32(esp, 0x002F367Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F3675u); } /* indirect call */
    }

loc_002F367B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = 0x80004005u;
    if (CMP_NE(_fa, _fb)) goto loc_002F3686; /* jne: not equal / not zero */

loc_002F3684: ;
    ebx = esi;

loc_002F3686: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F36C5; /* jl: less (signed <) */

loc_002F368A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F3693u); RECOMP_ABI_CALL(0x002F2F20u, sub_002F2F20); /* call 0x002F2F20 */

loc_002F3693: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F3699; /* jne: not equal / not zero */

loc_002F3697: ;
    ebx = esi;

loc_002F3699: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F36C5; /* jl: less (signed <) */

loc_002F369D: ;
    PUSH32(esp, 0x808);
    PUSH32(esp, 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F36A9u); RECOMP_ABI_CALL(0x002F2F20u, sub_002F2F20); /* call 0x002F2F20 */

loc_002F36A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002F36AF; /* jne: not equal / not zero */

loc_002F36AD: ;
    ebx = esi;

loc_002F36AF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002F36C5; /* jl: less (signed <) */

loc_002F36B3: ;
    eax = edi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(eax) = 0x2F35D3;
    { uint32_t _icall_target = MEM32(0x31C850); PUSH32(esp, 0x002F36C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002F36BFu); } /* indirect call */
    }

loc_002F36C5: ;
    POP32(esp, esi);

loc_002F36C6: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F36CE
 * Original: 0x002F36CE - 0x002F36D4 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F36CE(void)
{

loc_002F36CE: ;
    eax = 0xF458;
    esp += 4; return; /* ret */

}

/**
 * sub_002F36D4
 * Original: 0x002F36D4 - 0x002F3772 (158 bytes, 51 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F36D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F36D4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002F375C; /* je: equal / zero */

loc_002F36E0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002F3748; /* je: equal / zero */

loc_002F36E3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002F3734; /* je: equal / zero */

loc_002F36E6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002F3720; /* je: equal / zero */

loc_002F36E9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002F370C; /* je: equal / zero */

loc_002F36EC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0xC);
    if ((_fa == 0)) goto loc_002F36FB; /* je: equal / zero */

loc_002F36F2: ;
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    goto loc_002F376E;

loc_002F36FB: ;
    MEM32(eax) = 0x66AD98;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0xC9;
    goto loc_002F376E;

loc_002F370C: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0x66AAA8;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0xBC;
    goto loc_002F376E;

loc_002F3720: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0x668F58;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x6D3;
    goto loc_002F376E;

loc_002F3734: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0x667610;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x652;
    goto loc_002F376E;

loc_002F3748: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0x665488;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x862;
    goto loc_002F376E;

loc_002F375C: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0x6648C0;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x2F2;

loc_002F376E: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002F3772
 * Original: 0x002F3772 - 0x002F377F (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F3772(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F3772: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002F377F
 * Original: 0x002F377F - 0x002F3783 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F377F(void)
{

loc_002F377F: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_002F3783
 * Original: 0x002F3783 - 0x002F37FA (119 bytes, 41 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F3783(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F3783: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx);
    edx = MEM32(edx + 0x10);
    edx = MEM32(edx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = edi;
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + 0x438) = eax;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax);
    MEM32(eax + 0x43C) = 0x600;
    edx = MEM32(ecx);
    eax = ebp + -44;
    MEM32(ebp + 8) = 3;

loc_002F37BD: ;
    ebx = MEM32(edx + 0x10);
    ebx = MEM32(ebx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -4) = ebx;
    ebx = MEM32(edx + 0x10);
    ebx = MEM32(ebx + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = 0x1000;
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002F37BD; /* jne: not equal / not zero */

loc_002F37E6: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 3);
    eax = ebp + -48;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002F37F4u); RECOMP_ABI_CALL(0x002ED791u, sub_002ED791); /* call 0x002ED791 */

loc_002F37F4: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F37FA
 * Original: 0x002F37FA - 0x002F3822 (40 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F37FA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F37FA: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax);
    edx = MEM32(esp + 4);
    MEM32(eax + 0x440) = edx;
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 8);
    ecx = MEM32(ecx);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + 0x444) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002F3822
 * Original: 0x002F3822 - 0x002F3867 (69 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F3822(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F3822: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax);
    edx = MEM32(esp + 4);
    MEM32(eax + 0x448) = edx;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x10);
    edx = MEM32(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x460) = eax;
    edx = MEM32(ecx);
    edx = MEM32(edx + 0x10);
    edx = MEM32(edx);
    MEM32(edx + 0x468) = eax;
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 8);
    ecx = MEM32(ecx);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + 0x44C) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002F3867
 * Original: 0x002F3867 - 0x002F3884 (29 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F3867(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F3867: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F3881; /* je: equal / zero */

loc_002F3871: ;
    ecx = edi;
    PUSH32(esp, 0x002F3878u); RECOMP_ABI_CALL(0x002F1EB6u, sub_002F1EB6); /* call 0x002F1EB6 */

loc_002F3878: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002F387Eu); RECOMP_ABI_CALL(0x002ECB46u, sub_002ECB46); /* call 0x002ECB46 */

loc_002F387E: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002F3881: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002F3884
 * Original: 0x002F3884 - 0x002F39B6 (306 bytes, 101 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002F3884(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002F3884: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x7C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x28);
    esi = ecx;
    PUSH32(esp, 0x626F5344);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x002F38A8u); RECOMP_ABI_CALL(0x002ECADEu, sub_002ECADE); /* call 0x002ECADE */

loc_002F38A8: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002F38B8; /* je: equal / zero */

loc_002F38AE: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x002F38B6u); RECOMP_ABI_CALL(0x002F1E9Cu, sub_002F1E9C); /* call 0x002F1E9C */

loc_002F38B6: ;
    goto loc_002F38BA;

loc_002F38B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002F38BA: ;
    PUSH32(esp, ebx);
    ecx = eax;
    MEM32(esi) = eax;
    PUSH32(esp, 0x002F38C4u); RECOMP_ABI_CALL(0x002F1EE4u, sub_002F1EE4); /* call 0x002F1EE4 */

loc_002F38C4: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x320);
    PUSH32(esp, 0x663FA0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002F38D6u); RECOMP_ABI_CALL(0x002F1FE9u, sub_002F1FE9); /* call 0x002F1FE9 */

loc_002F38D6: ;
    ecx = MEM32(esi);
    eax = 0x6642C0;
    PUSH32(esp, 0x5FC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x600);
    MEM32(ebp + 0x70) = eax;
    MEM32(ebp + 0x7C) = 0x17F;
    PUSH32(esp, 0x002F38F7u); RECOMP_ABI_CALL(0x002F1FE9u, sub_002F1FE9); /* call 0x002F1FE9 */

loc_002F38F7: ;
    MEM32(ebp + -32) = 0x24;
    MEM32(ebp + -28) = 6;
    edi = 0x300;

loc_002F390A: ;
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002F3918u); RECOMP_ABI_CALL(0x002F36D4u, sub_002F36D4); /* call 0x002F36D4 */

loc_002F3918: ;
    eax = MEM32(ebp + 0x7C);
    ecx = MEM32(esi);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x70));
    eax = edi;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002F392Fu); RECOMP_ABI_CALL(0x002F1FE9u, sub_002F1FE9); /* call 0x002F1FE9 */

loc_002F392F: ;
    eax = MEM32(ebp + 0x7C);
    MEM32(ebp + ebx * 8 + -24) = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + ebx * 8 + -20) = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002F390A; /* jb: below (unsigned <) */

loc_002F3942: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x60);
    ebx = edi;
    PUSH32(esp, 0x66B0C0);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    MEM32(ebp + 0x30) = edi;
    MEM32(ebp + 0x34) = 0x18;
    PUSH32(esp, 0x002F3960u); RECOMP_ABI_CALL(0x002F1FE9u, sub_002F1FE9); /* call 0x002F1FE9 */

loc_002F3960: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x38) = eax;
    MEM32(ebp + 0x3C) = eax;
    MEM32(ebp + 0x44) = eax;
    MEM32(ebp + 0x4C) = eax;
    PUSH32(esp, 0x90);
    eax = ebp + -32;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x400);
    MEM32(ebp + 0x68) = edi;
    MEM32(ebp + 0x6C) = 0x2000;
    PUSH32(esp, 0x002F399Au); RECOMP_ABI_CALL(0x002F1FE9u, sub_002F1FE9); /* call 0x002F1FE9 */

loc_002F399A: ;
    eax = MEM32(0x306C68);
    _fb = (uint32_t)(0xFFFFD000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFD000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002F39ACu); RECOMP_ABI_CALL(0x002F3783u, sub_002F3783); /* call 0x002F3783 */

loc_002F39AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002F39B8
 * Original: 0x002F39B8 - 0x002F39F9 (65 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002F39B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002F39B8: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebx + -301989888)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + -301989888), 2 (8-bit) */
    _cf = (int)(_fa < _fb);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax + eax) = MEM8(eax + eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM8(eax)) - (uint64_t)(LO8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(eax) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("hlt", 0x002F39CCu); /* TODO: hlt */
    POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); esp += 4; POP32(esp, ebx); POP32(esp, edx); POP32(esp, ecx); POP32(esp, eax); /* popal */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    RECOMP_UNIMPL("hlt", 0x002F39D0u); /* TODO: hlt */
    POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); esp += 4; POP32(esp, ebx); POP32(esp, edx); POP32(esp, ecx); POP32(esp, eax); /* popal */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    RECOMP_UNIMPL("in al, dx", 0x002F39D4u); /* TODO: in al, dx */
    POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); esp += 4; POP32(esp, ebx); POP32(esp, edx); POP32(esp, ecx); POP32(esp, eax); /* popal */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    RECOMP_UNIMPL("in al, 0x61", 0x002F39D8u); /* TODO: in al, 0x61 */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebx + 0x77000000)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x77000000), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ebx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

}

/**
 * sub_00300425
 * Original: 0x00300425 - 0x00305F4C (23335 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00300425(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00300425: ;
    _fb = (uint32_t)(0x60611C03) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x60611C03)) >> 32) & 1);
    eax = eax + 0x60611C03;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    esp += 17703; return; /* ret 17699 */

    g_seh_ebp = ebp; sub_00305F4C(); return; /* fallthrough 0x00305F4C */

}

/**
 * sub_00305F4C
 * Original: 0x00305F4C - 0x00306A1C (2768 bytes, 72 insns)
 * CC: cdecl, 3840 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305F4C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305F4C: ;
    SET_HI8(edx, 7);
    RECOMP_UNIMPL("hlt", 0x00305F4Eu); /* TODO: hlt */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    MEM8(esi + 8) = MEM8(esi + 8) | LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    RECOMP_UNIMPL("outsb dx, byte ptr [esi]", 0x00305F54u); /* TODO: outsb dx, byte ptr [esi] */
    MEM8(esi + 0x8AC08) = MEM8(esi + 0x8AC08) | LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + 0x8AC08)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + eax) = MEM8(eax + eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) & 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + eax + -122) = MEM8(eax + eax + -122) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + eax + -122)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + LO8(eax));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 1) = MEM32(eax + 1) + eax;
    _fa = (uint32_t)(MEM32(eax + 1)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas <= 0)) (void)0; /* goto loc_00305F6F - dead code, label not in function */ /* jle: less or equal (signed <=) */

loc_00305F6E: ;
    esp += 15365; return; /* ret 15361 */

    SET_HI8(eax, 7);
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    MEM8(esi + 8) = MEM8(esi + 8) | LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    RECOMP_UNIMPL("outsb dx, byte ptr [esi]", 0x00305F92u); /* TODO: outsb dx, byte ptr [esi] */
    MEM8(esi + 0x8AC08) = MEM8(esi + 0x8AC08) | LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + 0x8AC08)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + eax) = MEM8(eax + eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) & 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + eax + -122) = MEM8(eax + eax + -122) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + eax + -122)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + LO8(eax));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 1) = MEM32(eax + 1) + eax;
    _fa = (uint32_t)(MEM32(eax + 1)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fas <= 0)) (void)0; /* goto loc_00305FAD - dead code, label not in function */ /* jle: less or equal (signed <=) */

loc_00305FAC: ;
    MEM8(ecx) = ROL8(MEM8(ecx), 0x3A);
    _fb = (uint32_t)(MEM8(edx + eax + 0x3A8032E)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(edx, HI8(edx) + MEM8(edx + eax + 0x3A8032E));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) & MEM8(esp + ebx * 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x16) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x16);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0x60A0590) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60A0590;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), LO8(eax) (8-bit) */
    RECOMP_UNIMPL("cli", 0x00305FC2u); /* TODO: cli */
    PUSH32(esp, 0 /* seg:es */);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), LO8(eax) (8-bit) */
    if (CMP_BE(_fa, _fb)) (void)0; /* goto loc_00305FCF - dead code, label not in function */ /* jbe: below or equal (unsigned <=) */

loc_00305FC8: ;
    SET_HI8(eax, 7);
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    MEM8(esi + 8) = MEM8(esi + 8) | LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    RECOMP_UNIMPL("outsb dx, byte ptr [esi]", 0x00305FD0u); /* TODO: outsb dx, byte ptr [esi] */
    MEM8(esi + 0x8AC08) = MEM8(esi + 0x8AC08) | LO8(ecx);
    _fa = (uint32_t)(MEM8(esi + 0x8AC08)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + eax) = MEM8(eax + eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) & 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + eax + -124) = MEM8(eax + eax + -124) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + eax + -124)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + edi;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + eax + -66) = MEM32(ecx + eax + -66) + edi;
    _fa = (uint32_t)(MEM32(ecx + eax + -66)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + edi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(edx + -1509741566)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(edx, HI8(edx) + MEM8(edx + -1509741566));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + MEM32(eax);
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x9A) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x9A);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x14);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0x608058E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x608058E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xF8) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi) = MEM8(esi) + 0xF8;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:es */);
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    if ((_fa == 0)) (void)0; /* goto loc_0030600D - dead code, label not in function */ /* je: equal / zero */

loc_00306006: ;
    SET_LO8(edx, 7);

}

/**
 * sub_00307BC4
 * Original: 0x00307BC4 - 0x00307BCA (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307BC4(void)
{

loc_00307BC4: ;
    ebx = 0x7E04AD04;
    esp += 4; return; /* ret */

}

/**
 * sub_00307E26
 * Original: 0x00307E26 - 0x00307E38 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307E26(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00307E26: ;
    PUSH32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x4000200) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(edx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esp += 52224; return; /* ret 52220 */

}

/**
 * sub_00308026
 * Original: 0x00308026 - 0x00308029 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308026(void)
{

loc_00308026: ;
    SET_LO8(ecx, 0xCA);
    esp += 4; return; /* ret */

}

/**
 * sub_00308193
 * Original: 0x00308193 - 0x0030848D (762 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308193(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00308193: ;
    RECOMP_UNIMPL("int 0x25", 0x00308193u); /* TODO: int 0x25 */
    RECOMP_UNIMPL("into", 0x00308195u); /* TODO: into */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xCE);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    g_df = 0; /* cld */
    RECOMP_UNIMPL("iretd", 0x00308199u); /* TODO: iretd */

    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ MEM8(0xA0002));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFDCFFD00u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFDCFFD00u)) >> 32) & 1);
    eax = eax + 0xFDCFFD00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    RECOMP_UNIMPL("iretd", 0x003081A7u); /* TODO: iretd */

    esp += 56840; return; /* ret 56836 */

    _cf = 0; /* logical op clears CF */
    eax = eax | 0x3000205;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ecx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    SET_HI8(ecx, HI8(ecx) + LO8(edx));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("into", 0x003081B7u); /* TODO: into */
    esp--;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = (uint32_t)((int32_t)ebp * (int32_t)0x2CED6);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(MEM8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edi = ROR32(edi, 1);
    g_df = 0; /* cld */
    RECOMP_UNIMPL("iretd", 0x003081C9u); /* TODO: iretd */

    ecx -= 1; /* loope: count down */
    if ((ecx != 0) && (_flags)) goto loc_003081D0; /* loope: ecx is non-zero and zero flag set */

loc_003081CC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("iretd", 0x003081CDu); /* TODO: iretd */

    RECOMP_UNIMPL("aam 0xcf", 0x003081CEu); /* TODO: aam 0xcf */

loc_003081D0: ;
    _fb = (uint32_t)(MEM8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    g_df = 1; /* std */
    RECOMP_UNIMPL("iretd", 0x003081D5u); /* TODO: iretd */

    /* sahf - store AH to flags */
    RECOMP_UNIMPL("int 0xf2", 0x003081D7u); /* TODO: int 0xf2 */
    _fb = (uint32_t)(0xFD) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0xFD)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0xFD);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("iretd", 0x003081DBu); /* TODO: iretd */

    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x51DCD) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + eax + 0x4B01F00)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(edx + eax + 0x4B01F00) = MEM8(edx + eax + 0x4B01F00) + HI8(ecx);
    _fa = (uint32_t)(MEM8(edx + eax + 0x4B01F00)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + HI8(ecx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + 0x4B5B6B5)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(esi + 0x4B5B6B5) = MEM8(esi + 0x4B5B6B5) + HI8(edx);
    _fa = (uint32_t)(MEM8(esi + 0x4B5B6B5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(edx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(ebx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + LO8(ebx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(-322007347)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(-322007347) = MEM8(-322007347) + LO8(ebx);
    _fa = (uint32_t)(MEM8(-322007347)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("int 0xfc", 0x00308205u); /* TODO: int 0xfc */
    RECOMP_UNIMPL("iretd", 0x00308207u); /* TODO: iretd */

    RECOMP_UNIMPL("into", 0x00308208u); /* TODO: into */
    _fb = (uint32_t)(3) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(3)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + HI8(ebx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xCF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(edx + eax) = ROL32(MEM32(edx + eax), LO8(ecx));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + -55)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(ebx + -55) = MEM8(ebx + -55) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ebx + -55)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("int 0xc9", 0x0030821Cu); /* TODO: int 0xc9 */

    g_seh_ebp = ebp; sub_0030848D(); return; /* fallthrough 0x0030848D */

}

/**
 * sub_0030848D
 * Original: 0x0030848D - 0x0030849D (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030848D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030848D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    RECOMP_UNIMPL("iretd", 0x0030848Eu); /* TODO: iretd */

    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx) = MEM8(edx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(0x2000F00) = MEM8(0x2000F00) + LO8(ecx);
    _fa = (uint32_t)(MEM8(0x2000F00)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + eax) = MEM8(eax + eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00308748
 * Original: 0x00308748 - 0x0030874E (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308748(void)
{

loc_00308748: ;
    edi = 0xFD040004u;
    esp += 4; return; /* ret */

}

/**
 * sub_00309B40
 * Original: 0x00309B40 - 0x00309B45 (5 bytes, 3 insns)
 * CC: cdecl, 3122 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309B40: ;
    PUSH32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12493; return; /* ret 12489 */

}

/**
 * sub_0030E269
 * Original: 0x0030E269 - 0x0030E27B (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E269(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030E269: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + 0x3F) = MEM32(edi + 0x3F) + eax;
    _fa = (uint32_t)(MEM32(edi + 0x3F)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    RECOMP_UNIMPL("cli", 0x0030E26Cu); /* TODO: cli */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("aas", 0x0030E26Fu); /* TODO: aas */
    MEM8(eax + -1090961593) = MEM8(eax + -1090961593) | LO8(eax);
    _fa = (uint32_t)(MEM8(eax + -1090961593)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("aas", 0x0030E277u); /* TODO: aas */
    esp += 18433; return; /* ret 18429 */

}

/**
 * sub_00314F80
 * Original: 0x00314F80 - 0x0031508C (268 bytes, 95 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00314F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00314F80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xC04;
    edi = 0x3449E0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 0x3449E4;
    PUSH32(esp, 0x5F5F554D);
    PUSH32(esp, 0x60);
    MEM32(0x3449E8) = eax;
    MEM32(0x3449E4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00314FB2u); RECOMP_ABI_CALL(0x00317B0Cu, sub_00317B0C); /* call 0x00317B0C */

loc_00314FB2: ;
    edi = eax;
    PUSH32(esp, 0x18);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x3479EC) = edi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00314FC9u); RECOMP_ABI_CALL(0x003152CEu, sub_003152CE); /* call 0x003152CE */

loc_00314FC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00314FE2; /* jne: not equal / not zero */

loc_00314FCD: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x314EA0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00314FDAu); RECOMP_ABI_CALL(0x00315297u, sub_00315297); /* call 0x00315297 */

loc_00314FDA: ;
    ebx = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00314FE5; /* jbe: below or equal (unsigned <=) */

loc_00314FE2: ;
    PUSH32(esp, 8);
    POP32(esp, ebx);

loc_00314FE5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x31C730);
    eax = ebp + -12;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C784); PUSH32(esp, 0x00314FF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00314FEEu); } /* indirect call */
    }

loc_00314FF4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00315067; /* jbe: below or equal (unsigned <=) */

loc_00314FFA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 9 (32-bit) */
    eax = esi + 0x41;
    if (CMP_A(_fa, _fb)) goto loc_00315005; /* ja: above (unsigned >) */

loc_00315002: ;
    eax = esi + 0x30;

loc_00315005: ;
    ecx = MEM32(ebp + -8);
    MEM8(ecx + 0xB) = LO8(eax);
    eax = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3A);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x170);
    PUSH32(esp, 0x314ED8);
    { uint32_t _icall_target = MEM32(0x31C790); PUSH32(esp, 0x00315027u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315021u); } /* indirect call */
    }

loc_00315027: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00315067; /* jl: less (signed <) */

loc_0031502B: ;
    eax = MEM32(ebp + -4);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, 0x5C);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + -4);
    MEM32(edx) = eax;
    MEM32(edx + 4) = esi;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    MEM32(edx + 0xC) = ecx;
    eax = MEM32(ebp + -4);
    MEM8(eax + 0x1E) = 1;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) | ecx;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0xFFFFFFEFu;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00315062u); RECOMP_ABI_CALL(0x00315D98u, sub_00315D98); /* call 0x00315D98 */

loc_00315062: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00314FFA; /* jb: below (unsigned <) */

loc_00315067: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x314EC9) = LO8(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_0031507B; /* jbe: below or equal (unsigned <=) */

loc_00315075: ;
    MEM8(0x314ECF) = MEM8(0x314ECF) << 1;
    _fa = (uint32_t)(MEM8(0x314ECF)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */

loc_0031507B: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x314EC8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00315088u); RECOMP_ABI_CALL(0x003152DAu, sub_003152DA); /* call 0x003152DA */

loc_00315088: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031508C
 * Original: 0x0031508C - 0x00315297 (523 bytes, 165 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031508C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031508C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x314F5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x314F5C), esi (32-bit) */
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -12) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00315292; /* jne: not equal / not zero */

loc_003150AA: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(0x314F5C) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003150BEu); RECOMP_ABI_CALL(0x003152CEu, sub_003152CE); /* call 0x003152CE */

loc_003150BE: ;
    MEM32(ebp + -16) = eax;
    eax = 0x314DC4;
    ebx = 0x314DCC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00315145; /* jae: above or equal (unsigned >=) */

loc_003150D1: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031511E; /* je: equal / zero */

loc_003150D7: ;
    eax = MEM32(eax + 4);
    MEM32(ebp + esi * 4 + -96) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003150F3; /* jne: not equal / not zero */

loc_003150E5: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003150EEu); RECOMP_ABI_CALL(0x00315297u, sub_00315297); /* call 0x00315297 */

loc_003150EE: ;
    ecx = MEM32(edi);
    MEM8(ecx + 1) = LO8(eax);

loc_003150F3: ;
    eax = MEM32(edi);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003150FE; /* je: equal / zero */

loc_003150FC: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003150FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003150FCu); } /* indirect call */
    }

loc_003150FE: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    eax = ZX8(MEM8(eax + 1));
    if (TEST_Z(_fa, _fb)) goto loc_00315111; /* je: equal / zero */

loc_0031510C: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0031511E;

loc_00315111: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031511B; /* je: equal / zero */

loc_00315116: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) + eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0031511E;

loc_0031511B: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031511E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003150D1; /* jb: below (unsigned <) */

loc_00315125: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315136; /* je: equal / zero */

loc_0031512B: ;
    MEM16(0x3479F0) = 0xC;
    goto loc_0031514E;

loc_00315136: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    MEM16(0x3479F0) = 8;
    if (CMP_NE(_fa, _fb)) goto loc_0031514E; /* jne: not equal / not zero */

loc_00315145: ;
    MEM16(0x3479F0) = 4;

loc_0031514E: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00315159; /* jbe: below or equal (unsigned <=) */

loc_00315156: ;
    MEM32(ebp + -8) = eax;

loc_00315159: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00315161; /* jbe: below or equal (unsigned <=) */

loc_0031515E: ;
    MEM32(ebp + -4) = eax;

loc_00315161: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00315176; /* jbe: below or equal (unsigned <=) */

loc_00315173: ;
    MEM32(ebp + -16) = ecx;

loc_00315176: ;
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX16(MEM16(0x3479F0));
    MEM32(ebp + -16) = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x16);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xAB);
    ebx = esi;
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x5F444958);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003151A3u); RECOMP_ABI_CALL(0x00317B0Cu, sub_00317B0C); /* call 0x00317B0C */

loc_003151A3: ;
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x314F30) = esi;
    MEM32(0x314F48) = esi;
    MEM32(0x314F34) = eax;
    MEM32(0x314F4C) = eax;
    edi = eax;
    esi = ebp + -96;
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
    edx = MEM32(ebp + -16);
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
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    MEM32(0x3479F8) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_003151F7; /* jbe: below or equal (unsigned <=) */

loc_003151E1: ;
    MEM32(eax + 0xA7) = ecx;
    ecx = eax;
    _fb = (uint32_t)(0xAB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xAB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003151E1; /* jne: not equal / not zero */

loc_003151F1: ;
    MEM32(0x3479F8) = ecx;

loc_003151F7: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(0x3479F0)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x3479F0), LO16(edi) (16-bit) */
    MEM32(0x3479F4) = eax;
    MEM16(0x3479F2) = LO16(edi);
    if (CMP_BE(_fa, _fb)) goto loc_0031522B; /* jbe: below or equal (unsigned <=) */

loc_0031520E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00315210: ;
    eax = MEM32(0x3479F4);
    eax = ecx + eax + 4;
    MEM8(eax) = MEM8(eax) & 0xFE;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = ZX16(MEM16(0x3479F0));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x16) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x16;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00315210; /* jb: below (unsigned <) */

loc_0031522B: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = 0x314F50;
    if (CMP_EQ(_fa, _fb)) goto loc_0031524C; /* je: equal / zero */

loc_00315237: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    MEM8(0x314F50) = 0;
    MEM8(0x314F51) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031524Cu); RECOMP_ABI_CALL(0x003152DAu, sub_003152DA); /* call 0x003152DA */

loc_0031524C: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315268; /* je: equal / zero */

loc_00315253: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    MEM8(0x314F50) = 2;
    MEM8(0x314F51) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00315268u); RECOMP_ABI_CALL(0x003152DAu, sub_003152DA); /* call 0x003152DA */

loc_00315268: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315284; /* je: equal / zero */

loc_0031526F: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    MEM8(0x314F50) = 1;
    MEM8(0x314F51) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00315284u); RECOMP_ABI_CALL(0x003152DAu, sub_003152DA); /* call 0x003152DA */

loc_00315284: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x347A48);
    { uint32_t _icall_target = MEM32(0x31C7A4); PUSH32(esp, 0x00315290u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031528Au); } /* indirect call */
    }

loc_00315290: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00315292: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00315297
 * Original: 0x00315297 - 0x003152CE (55 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315297(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315297: ;
    edx = MEM32(ecx + 0x9C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003152C5; /* je: equal / zero */

loc_003152A3: ;
    ecx = MEM32(ecx + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_003152C1; /* jbe: below or equal (unsigned <=) */

loc_003152AF: ;
    esi = edx;

loc_003152B1: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003152C8; /* je: equal / zero */

loc_003152B9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003152B1; /* jb: below (unsigned <) */

loc_003152C1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003152C3: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003152C5: ;
    esp += 8; return; /* ret 4 */

loc_003152C8: ;
    eax = MEM32(edx + eax * 8 + 4);
    goto loc_003152C3;

}

/**
 * sub_003152CE
 * Original: 0x003152CE - 0x003152DA (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003152CE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003152CE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x9C), eax (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_003152DA
 * Original: 0x003152DA - 0x003154DC (514 bytes, 198 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003152DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003152DA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = ZX8(MEM8(esi + 1));
    MEM32(ebp + -8) = eax;
    eax = ZX8(MEM8(esi));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -12) = edx;
    if ((_fa == 0)) goto loc_0031533A; /* je: equal / zero */

loc_003152FA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00315335; /* je: equal / zero */

loc_003152FD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031533E; /* jne: not equal / not zero */

loc_00315300: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 0x34)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edx + 0x34) (8-bit) */
    ebx = edx + 0x64;
    if (CMP_BE(_fa, _fb)) goto loc_0031530E; /* jbe: below or equal (unsigned <=) */

loc_0031530B: ;
    MEM8(edx + 0x34) = LO8(eax);

loc_0031530E: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00315341; /* jbe: below or equal (unsigned <=) */

loc_00315315: ;
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(eax, LO8(eax) - 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    ecx = edx;
    MEM8(esi + 1) = LO8(eax);
    MEM8(esi) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00315325u); RECOMP_ABI_CALL(0x003152DAu, sub_003152DA); /* call 0x003152DA */

loc_00315325: ;
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + 1) = MEM8(esi + 1) + 4;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 4;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + -12);
    MEM8(esi) = 2;
    goto loc_00315341;

loc_00315335: ;
    ebx = edx + 0x32;
    goto loc_00315341;

loc_0031533A: ;
    ebx = edx;
    goto loc_00315341;

loc_0031533E: ;
    ebx = MEM32(ebp + 8);

loc_00315341: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ebx + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ebx + 2) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031534C; /* jbe: below or equal (unsigned <=) */

loc_00315349: ;
    MEM8(ebx + 2) = LO8(eax);

loc_0031534C: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003153A3; /* je: equal / zero */

loc_0031535A: ;
    edi = ebx + 3;

loc_0031535D: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003153A3; /* jae: above or equal (unsigned >=) */

loc_00315363: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 3)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 3) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00315372; /* jbe: below or equal (unsigned <=) */

loc_0031536A: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0031539D;

loc_00315372: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0031538F; /* jae: above or equal (unsigned >=) */

loc_00315378: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebx + 0x2B;

loc_00315381: ;
    SET_LO8(edx, MEM8(ecx + -10));
    MEM8(ecx) = LO8(edx);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00315381; /* jne: not equal / not zero */

loc_0031538C: ;
    edx = MEM32(ebp + -12);

loc_0031538F: ;
    SET_LO8(eax, MEM8(esi + 3));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(eax);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0031539D: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031535D; /* jne: not equal / not zero */

loc_003153A3: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003153FA; /* je: equal / zero */

loc_003153B1: ;
    edi = ebx + 4;

loc_003153B4: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003153FA; /* jae: above or equal (unsigned >=) */

loc_003153BA: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 4) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003153C9; /* jbe: below or equal (unsigned <=) */

loc_003153C1: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003153F4;

loc_003153C9: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003153E6; /* jae: above or equal (unsigned >=) */

loc_003153CF: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebx + 0x2C;

loc_003153D8: ;
    SET_LO8(edx, MEM8(ecx + -10));
    MEM8(ecx) = LO8(edx);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003153D8; /* jne: not equal / not zero */

loc_003153E3: ;
    edx = MEM32(ebp + -12);

loc_003153E6: ;
    SET_LO8(eax, MEM8(esi + 4));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(eax);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003153F4: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003153B4; /* jne: not equal / not zero */

loc_003153FA: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00315451; /* je: equal / zero */

loc_00315408: ;
    edi = ebx + 5;

loc_0031540B: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00315451; /* jae: above or equal (unsigned >=) */

loc_00315411: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 5)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 5) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00315420; /* jbe: below or equal (unsigned <=) */

loc_00315418: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0031544B;

loc_00315420: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0031543D; /* jae: above or equal (unsigned >=) */

loc_00315426: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebx + 0x2D;

loc_0031542F: ;
    SET_LO8(edx, MEM8(ecx + -10));
    MEM8(ecx) = LO8(edx);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0031542F; /* jne: not equal / not zero */

loc_0031543A: ;
    edx = MEM32(ebp + -12);

loc_0031543D: ;
    SET_LO8(eax, MEM8(esi + 5));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(eax);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0031544B: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031540B; /* jne: not equal / not zero */

loc_00315451: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003154A8; /* je: equal / zero */

loc_0031545F: ;
    edi = ebx + 8;

loc_00315462: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003154A8; /* jae: above or equal (unsigned >=) */

loc_00315468: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 8) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00315477; /* jbe: below or equal (unsigned <=) */

loc_0031546F: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003154A2;

loc_00315477: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00315494; /* jae: above or equal (unsigned >=) */

loc_0031547D: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebx + 0x30;

loc_00315486: ;
    SET_LO8(edx, MEM8(ecx + -10));
    MEM8(ecx) = LO8(edx);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00315486; /* jne: not equal / not zero */

loc_00315491: ;
    edx = MEM32(ebp + -12);

loc_00315494: ;
    SET_LO8(eax, MEM8(esi + 8));
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi) = LO8(eax);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003154A2: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00315462; /* jne: not equal / not zero */

loc_003154A8: ;
    SET_LO8(eax, MEM8(esi + 3));
    ecx = edx + 0xB0;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003154B7; /* jbe: below or equal (unsigned <=) */

loc_003154B5: ;
    MEM8(ecx) = LO8(eax);

loc_003154B7: ;
    SET_LO8(eax, MEM8(esi + 7));
    ecx = edx + 0xB1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003154C6; /* jbe: below or equal (unsigned <=) */

loc_003154C4: ;
    MEM8(ecx) = LO8(eax);

loc_003154C6: ;
    SET_LO8(eax, MEM8(esi + 9));
    POP32(esp, edi);
    ecx = edx + 0xB2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx) (8-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_BE(_fa, _fb)) goto loc_003154D8; /* jbe: below or equal (unsigned <=) */

loc_003154D6: ;
    MEM8(ecx) = LO8(eax);

loc_003154D8: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003154DC
 * Original: 0x003154DC - 0x00315625 (329 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003154DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003154DC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 0xA0) = 0x10;
    _fa = (uint32_t)(MEM8(0x314DE8)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x314DE8), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00315505; /* je: equal / zero */

loc_003154FE: ;
    MEM8(ecx + 0xA0) = 0x30;

loc_00315505: ;
    SET_LO8(eax, MEM8(ecx + 2));
    SET_LO8(edx, MEM8(ecx + 0x34));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(ecx + 0x66)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + MEM8(ecx + 0x66));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(edx, LO8(edx) << 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(3) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + 0xA0) = MEM8(ecx + 0xA0) + LO8(edx);
    _fa = (uint32_t)(MEM8(ecx + 0xA0)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0xA1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0xA1) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031552A; /* jbe: below or equal (unsigned <=) */

loc_00315524: ;
    MEM8(ecx + 0xA1) = LO8(eax);

loc_0031552A: ;
    SET_LO8(eax, MEM8(ecx + 0x66));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0xA1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0xA1) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031553B; /* jbe: below or equal (unsigned <=) */

loc_00315535: ;
    MEM8(ecx + 0xA1) = LO8(eax);

loc_0031553B: ;
    SET_LO8(eax, MEM8(ecx + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0xA1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0xA1) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031554C; /* jbe: below or equal (unsigned <=) */

loc_00315546: ;
    MEM8(ecx + 0xA1) = LO8(eax);

loc_0031554C: ;
    SET_LO8(eax, MEM8(ecx + 0xA1));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + 0xA0) = MEM8(ecx + 0xA0) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx + 0xA0)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ecx + 0x37;
    MEM32(ebp + -12) = 4;

loc_00315562: ;
    edi = ZX8(MEM8(eax + 0x32));
    edx = ZX8(MEM8(eax + -50));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX8(MEM8(eax));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edi + edx;
    edi = ZX8(MEM8(eax + 0x30));
    edx = ZX8(MEM8(eax + -52));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX8(MEM8(eax + -2));
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(eax + -61));
    MEM32(ebp + -4) = edi;
    edi = ZX8(MEM8(eax + 0x27));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX8(MEM8(eax + -11));
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(eax + -57));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0xA8) = MEM32(ecx + 0xA8) + edx;
    _fa = (uint32_t)(MEM32(ecx + 0xA8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ZX8(MEM8(eax + 0x2B));
    edx = MEM32(ecx + 0xA8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0xA8) = edx;
    ebx = ZX8(MEM8(eax + -7));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = edi;
    MEM32(ecx + 0xA8) = ebx;
    if ((_fa != 0)) goto loc_00315562; /* jne: not equal / not zero */

loc_003155D0: ;
    _fa = (uint32_t)(MEM8(0x314DE8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x314DE8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003155E2; /* je: equal / zero */

loc_003155D9: ;
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xD) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xD;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003155E9;

loc_003155E2: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 5;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003155E9: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx + 0xB0;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0xD (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003155FA; /* jae: above or equal (unsigned >=) */

loc_003155F7: ;
    MEM8(edx) = 0xD;

loc_003155FA: ;
    eax = MEM32(ebp + -4);
    edx = ZX8(MEM8(edx));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX8(MEM8(ecx + 0xB1));
    ebx = eax + esi * 2;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(ecx + 0xAC) = edx;
    MEM32(ecx + 0xA4) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00315625
 * Original: 0x00315625 - 0x003156C8 (163 bytes, 62 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00315625(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315625: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    SET_LO8(eax, MEM8(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = ZX8(LO8(eax));
    MEM8(esi + 0x7A) = LO8(eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi;
    PUSH32(esp, 0x44425355);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    MEM8(esi) = LO8(ebx);
    MEM8(esi + 0x79) = LO8(ebx);
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x80) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00315656u); RECOMP_ABI_CALL(0x00317B0Cu, sub_00317B0C); /* call 0x00317B0C */

loc_00315656: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00315670; /* je: equal / zero */

loc_0031565D: ;
    PUSH32(esp, 0x317B74);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031566Bu); RECOMP_ABI_CALL(0x00044620u, sub_00044620); /* call 0x00044620 */

loc_0031566B: ;
    eax = MEM32(ebp + 8);
    goto loc_00315672;

loc_00315670: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00315672: ;
    ecx = ZX8(MEM8(esi + 0x7A));
    MEM32(esi + 0xE0) = eax;
    SET_LO8(eax, MEM8(ebp + 0xC));
    MEM8(esi + 0x7B) = LO8(eax);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003156A6; /* jle: less or equal (signed <=) */

loc_00315689: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031568B: ;
    edx = MEM32(esi + 0xE0);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ecx + edx + 1) = LO8(eax);
    edx = ZX8(MEM8(esi + 0x7A));
    ecx = SX8(LO8(eax));
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031568B; /* jl: less (signed <) */

loc_003156A6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x318950);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C7A8); PUSH32(esp, 0x003156B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003156B0u); } /* indirect call */
    }

loc_003156B6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C7A4); PUSH32(esp, 0x003156C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003156BBu); } /* indirect call */
    }

loc_003156C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003156C8
 * Original: 0x003156C8 - 0x00315741 (121 bytes, 41 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003156C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003156C8: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x7C));
    ecx = ebp + -68;
    PUSH32(esp, MEM32(ebp + 0x78));
    PUSH32(esp, 0x003156E3u); RECOMP_ABI_CALL(0x003195F8u, sub_003195F8); /* call 0x003195F8 */

loc_003156E3: ;
    eax = 0x314DD4;
    esi = 0x314DE4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00315707; /* jae: above or equal (unsigned >=) */

loc_003156F3: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315700; /* je: equal / zero */

loc_003156F9: ;
    ecx = ebp + -68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00315700u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003156FDu); } /* indirect call */
    }

loc_00315700: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003156F3; /* jb: below (unsigned <) */

loc_00315707: ;
    ecx = ebp + -68;
    PUSH32(esp, 0x0031570Fu); RECOMP_ABI_CALL(0x003154DCu, sub_003154DC); /* call 0x003154DC */

loc_0031570F: ;
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00315718u); RECOMP_ABI_CALL(0x003158DAu, sub_003158DA); /* call 0x003158DA */

loc_00315718: ;
    eax = ZX8(MEM8(ebp + 0x5D));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + 0x5C));
    PUSH32(esp, eax);
    ecx = 0x347A90;
    PUSH32(esp, 0x0031572Cu); RECOMP_ABI_CALL(0x00315625u, sub_00315625); /* call 0x00315625 */

loc_0031572C: ;
    MEM8(0x347B78) = 0;
    PUSH32(esp, 0x00315738u); RECOMP_ABI_CALL(0x003158E6u, sub_003158E6); /* call 0x003158E6 */

loc_00315738: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x70;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00315741
 * Original: 0x00315741 - 0x003157BE (125 bytes, 45 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315741(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315741: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x44425355);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00315755u); RECOMP_ABI_CALL(0x00317B0Cu, sub_00317B0C); /* call 0x00317B0C */

loc_00315755: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003157B9; /* je: equal / zero */

loc_0031575B: ;
    ecx = edi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    MEM8(0x347B78) = MEM8(0x347B78) + 1;
    _fa = (uint32_t)(MEM8(0x347B78)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(MEM8(0x347B78));
    ecx = 0x347A90;
    MEM32(esi) = eax;
    PUSH32(esp, 0x00315788u); RECOMP_ABI_CALL(0x00317B86u, sub_00317B86); /* call 0x00317B86 */

loc_00315788: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi + 4;
    MEM32(ecx) = eax;
    MEM8(eax) = 0;
    eax = MEM32(ecx);
    MEM8(eax + 2) = 0x80;
    eax = MEM32(ecx);
    MEM8(eax + 1) = 0x80;
    eax = MEM32(ecx);
    MEM8(eax + 3) = 0x80;
    eax = MEM32(ecx);
    MEM32(eax + 0xC) = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003157B9u); RECOMP_ABI_CALL(0x00315928u, sub_00315928); /* call 0x00315928 */

loc_003157B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003157BE
 * Original: 0x003157BE - 0x0031582A (108 bytes, 29 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003157BE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003157BE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(0x314DE8)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x314DE8), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM16(0x347C3A) = MEM16(0x347C3A) & 0;
    _fa = (uint32_t)(MEM16(0x347C3A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, 0x48425355);
    eax = eax * 8 + 6;
    MEM16(0x347C38) = LO16(eax);
    eax = ZX16(LO16(eax));
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003157F0u); RECOMP_ABI_CALL(0x00317B0Cu, sub_00317B0C); /* call 0x00317B0C */

loc_003157F0: ;
    ecx = ZX16(MEM16(0x347C38));
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    edi = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(0x347C3C) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    PUSH32(esp, 0);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x347BE8);
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7A4); PUSH32(esp, 0x0031581Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315819u); } /* indirect call */
    }

loc_0031581F: ;
    MEM32(0x347C30) = MEM32(0x347C30) & 0;
    _fa = (uint32_t)(MEM32(0x347C30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031582A
 * Original: 0x0031582A - 0x003158DA (176 bytes, 61 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0031582A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031582A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esi + 0x478;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C7A4); PUSH32(esp, 0x00315845u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031583Fu); } /* indirect call */
    }

loc_00315845: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x31A4C0);
    eax = esi + 0x4A0;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C7A8); PUSH32(esp, 0x00315858u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315852u); } /* indirect call */
    }

loc_00315858: ;
    MEM8(esi + 0x460) = 4;
    eax = MEM32(ebx + 0x50);
    MEM32(ebp + -8) = eax;
    MEM16(ebp + -8) = MEM16(ebp + -8) & 0;
    _fa = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(ebp + -8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x50) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0x460)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x460), LO8(edx) (8-bit) */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    if (CMP_BE(_fa, _fb)) goto loc_003158B4; /* jbe: below or equal (unsigned <=) */

loc_00315883: ;
    eax = ebx + 0x54;

loc_00315886: ;
    edi = MEM32(eax);
    MEM32(ebp + -8) = edi;
    _fa = (uint32_t)(MEM8(ebp + -8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315899; /* je: equal / zero */

loc_00315891: ;
    MEM16(ebp + -2) = MEM16(ebp + -2) | LO16(ecx);
    _fa = (uint32_t)(MEM16(ebp + -2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(ebp + -4) = MEM16(ebp + -4) | LO16(ecx);
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_00315899: ;
    MEM16(ebp + -8) = MEM16(ebp + -8) & 0;
    _fa = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    edi = MEM32(ebp + -8);
    MEM32(eax) = edi;
    edi = ZX8(MEM8(esi + 0x460));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00315886; /* jb: below (unsigned <) */

loc_003158B4: ;
    MEM32(ebx + 0x10) = 0x40;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7A0); PUSH32(esp, 0x003158C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003158BBu); } /* indirect call */
    }

loc_003158C1: ;
    edx = ebp + -4;
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003158CDu); RECOMP_ABI_CALL(0x0031A3C7u, sub_0031A3C7); /* call 0x0031A3C7 */

loc_003158CD: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x003158D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003158CFu); } /* indirect call */
    }

loc_003158D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003158DA
 * Original: 0x003158DA - 0x003158E6 (12 bytes, 3 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003158DA(void)
{

loc_003158DA: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x003158E3u); RECOMP_ABI_CALL(0x00315AA3u, sub_00315AA3); /* call 0x00315AA3 */

loc_003158E3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003158E6
 * Original: 0x003158E6 - 0x00315928 (66 bytes, 20 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003158E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003158E6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x31C83C);
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(0xA1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 5), 0xA1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315926; /* je: equal / zero */

loc_003158F7: ;
    eax = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    MEM8(ebp + -24) = 3;
    MEM32(ebp + -16) = 0x1000;
    MEM32(ebp + -20) = 0xFED00000u;
    { uint32_t _icall_target = MEM32(0x31C894); PUSH32(esp, 0x00315915u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031590Fu); } /* indirect call */
    }

loc_00315915: ;
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 0x4E0);
    eax = ebp + -40;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00315926u); RECOMP_ABI_CALL(0x00315741u, sub_00315741); /* call 0x00315741 */

loc_00315926: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00315928
 * Original: 0x00315928 - 0x00315AA3 (379 bytes, 114 insns)
 * Category: game_input
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00315928(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315928: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM8(ebp + 0xC) = MEM8(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ebp + 0xC));
    MEM32(esi + 0x45C) = edi;
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 4) = ecx;
    eax = MEM32(eax + 0x14);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = edi;
    MEM32(esi) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00315956u); RECOMP_ABI_CALL(0x00315CC9u, sub_00315CC9); /* call 0x00315CC9 */

loc_00315956: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0031595Cu); RECOMP_ABI_CALL(0x00315CD4u, sub_00315CD4); /* call 0x00315CD4 */

loc_0031595C: ;
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x31B6F8);
    eax = esi + 0x440;
    MEM32(ebx + 0x48) = 0x1200;
    MEM32(ebx + 0x4C) = 0;
    MEM32(ebx + 0x50) = 0x80000000u;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C7A8); PUSH32(esp, 0x00315986u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315980u); } /* indirect call */
    }

loc_00315986: ;
    eax = MEM32(edi * 4 + 0x654504);
    MEM32(esi + 8) = eax;
    eax = MEM32(ebx + 8);
    MEM32(ebp + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C7A0); PUSH32(esp, 0x0031599Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315996u); } /* indirect call */
    }

loc_0031599C: ;
    MEM8(ebp + 0xF) = LO8(eax);
    eax = MEM32(ebp + 8);
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebx + 8) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = MEM32(0x31C8A4); PUSH32(esp, 0x003159B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003159AAu); } /* indirect call */
    }

loc_003159B0: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003159B7u); RECOMP_ABI_CALL(0x00315C68u, sub_00315C68); /* call 0x00315C68 */

loc_003159B7: ;
    MEM32(ebx + 4) = 0xBE;
    eax = MEM32(ebx + 0x34);
    eax = eax & 0xA772EED8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x27722ED8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = eax;
    ecx = ~ecx;
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ~eax;
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x34) = ecx;
    eax = MEM32(0x31C83C);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00315A2B; /* jne: not equal / not zero */

loc_003159E8: ;
    MEM32(ebp + 8) = 2;

loc_003159EF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003159F4u); RECOMP_ABI_CALL(0x0031A5AAu, sub_0031A5AA); /* call 0x0031A5AA */

loc_003159F4: ;
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx;
    _fb = (uint32_t)(MEM32(0x654500)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x654500);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    MEM32(edx + 0x14) = eax;
    eax = MEM32(edx);
    eax = eax & 0xF808FFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x80000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(edx + 0x11) = 0;
    MEM32(edx) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00315A23u); RECOMP_ABI_CALL(0x0031ABB5u, sub_0031ABB5); /* call 0x0031ABB5 */

loc_00315A23: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003159EF; /* jne: not equal / not zero */

loc_00315A28: ;
    edi = MEM32(ebp + -4);

loc_00315A2B: ;
    SET_LO8(ecx, MEM8(ebp + 0xF));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x31C79C); PUSH32(esp, 0x00315A34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315A2Eu); } /* indirect call */
    }

loc_00315A34: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x70);
    eax = MEM32(ebp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 0x24));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = edi + 0x654540;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 0x1C));
    PUSH32(esp, esi);
    PUSH32(esp, 0x31B024);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C8A0); PUSH32(esp, 0x00315A5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315A54u); } /* indirect call */
    }

loc_00315A5A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x31C89C); PUSH32(esp, 0x00315A61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315A5Bu); } /* indirect call */
    }

loc_00315A61: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi + 0x4C0;
    eax = esi + 0x4C8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM32(ecx) = 0x31A8D4;
    MEM32(esi + 0x4C4) = edx;
    MEM32(esi + 0x4CC) = eax;
    MEM32(eax) = eax;
    { uint32_t _icall_target = MEM32(0x31C850); PUSH32(esp, 0x00315A8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315A86u); } /* indirect call */
    }

loc_00315A8C: ;
    ecx = esi;
    MEM32(ebx + 0x10) = 0x80000033u;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00315A9Au); RECOMP_ABI_CALL(0x0031582Au, sub_0031582A); /* call 0x0031582A */

loc_00315A9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00315AA3
 * Original: 0x00315AA3 - 0x00315C68 (453 bytes, 142 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00315AA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315AA3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = ZX8(MEM8(ebx + 0xE));
    eax = MEM32(ebx + 4);
    ecx = ecx << 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), eax (32-bit) */
    PUSH32(esp, esi);
    MEM32(ebp + -8) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_00315AC3; /* jae: above or equal (unsigned >=) */

loc_00315AC1: ;
    MEM32(ebx) = eax;

loc_00315AC3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx);
    ecx = ecx + ecx * 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    eax = ecx + 0xFFF;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    ecx = ecx << 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00315AF7; /* jae: above or equal (unsigned >=) */

loc_00315AF6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00315AF7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = edi;
    { uint32_t _icall_target = MEM32(0x31C764); PUSH32(esp, 0x00315B07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315B01u); } /* indirect call */
    }

loc_00315B07: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C8D8); PUSH32(esp, 0x00315B13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315B0Du); } /* indirect call */
    }

loc_00315B13: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x31C8D4); PUSH32(esp, 0x00315B1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315B14u); } /* indirect call */
    }

loc_00315B1A: ;
    ecx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x654500) = ecx;
    ecx = edi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x654504) = esi;
    MEM32(0x654508) = edx;
    edi = ZX8(MEM8(ebx + 0xE));
    ecx = esi + eax;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x100;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x65452C) = edi;
    MEM32(0x654528) = edx;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), edx (32-bit) */
    MEM32(ebp + -12) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_00315BA9; /* jbe: below or equal (unsigned <=) */

loc_00315B6B: ;
    edi = MEM32(0x654528);
    MEM32(esi) = edi;
    edi = MEM32(0x654508);
    MEM32(0x654528) = esi;
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + -8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = edi;
    MEM32(0x654508) = esi;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00315B6B; /* jb: below (unsigned <) */

loc_00315B94: ;
    goto loc_00315BA9;

loc_00315B96: ;
    edi = MEM32(0x654508);
    MEM32(esi + 0x18) = edi;
    MEM32(0x654508) = esi;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00315BA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00315B96; /* jb: below (unsigned <) */

loc_00315BAD: ;
    edi = esi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(ebp + -4) = edx;
    MEM32(0x65450C) = edx;
    MEM32(0x654510) = esi;
    if (CMP_A(_fa, _fb)) goto loc_00315BE7; /* ja: above (unsigned >) */

loc_00315BC3: ;
    eax = esi;
    _fb = (uint32_t)(MEM32(0x654500)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x654500);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    MEM32(ebp + -8) = esi;
    MEM32(edi + -16) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00315BD7u); RECOMP_ABI_CALL(0x0031AB98u, sub_0031AB98); /* call 0x0031AB98 */

loc_00315BD7: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -12) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00315BC3; /* jbe: below or equal (unsigned <=) */

loc_00315BE5: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00315BE7: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    MEM32(0x654514) = eax;
    MEM32(0x654518) = edx;
    MEM32(0x65451C) = 0x3E8;
    SET_LO16(eax, ZX8(MEM8(ebx + 0xC)));
    MEM16(0x654520) = LO16(eax);
    SET_LO16(eax, ZX8(MEM8(ebx + 0xD)));
    MEM16(0x654524) = LO16(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 8) (32-bit) */
    POP32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_00315C50; /* jbe: below or equal (unsigned <=) */

loc_00315C1E: ;
    _fb = (uint32_t)(MEM8(ebx + 8)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - MEM8(ebx + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315C39; /* je: equal / zero */

loc_00315C26: ;
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) >> 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO16(esi, ZX8(LO8(edx)));
    _fb = (uint32_t)(LO16(esi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + LO16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    MEM16(0x654524) = LO16(eax);
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ecx, LO8(ecx) - LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */

loc_00315C39: ;
    SET_LO16(eax, ZX8(LO8(ecx)));
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x654520) = MEM16(0x654520) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x654520)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax = MEM32(ebp + -4);
    MEM32(ebx + 8) = eax;
    SET_LO16(eax, MEM16(0x654524));

loc_00315C50: ;
    SET_LO16(ecx, MEM16(0x654520));
    POP32(esp, esi);
    MEM16(0x654522) = LO16(ecx);
    MEM16(0x654526) = LO16(eax);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00315C68
 * Original: 0x00315C68 - 0x00315CC9 (97 bytes, 32 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315C68(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315C68: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(MEM32(0x654500)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x654500);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi);
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x1C) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x20) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x24) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x28) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x2C) = eax;
    ecx = MEM32(esi);
    MEM32(ecx + 0x30) = eax;
    PUSH32(esp, 1);
    MEM16(esi + 0x416) = 0x2772;
    eax = MEM32(esi);
    PUSH32(esp, 3);
    MEM32(eax + 0x40) = 0x2A29;
    PUSH32(esp, 8);
    MEM16(esi + 0x414) = 0x236F;
    PUSH32(esp, 0x00315CBFu); RECOMP_ABI_CALL(0x00319666u, sub_00319666); /* call 0x00319666 */

loc_00315CBF: ;
    ecx = MEM32(esi);
    eax = ZX16(LO16(eax));
    MEM32(ecx + 0x44) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00315CC9
 * Original: 0x00315CC9 - 0x00315CD4 (11 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315CC9(void)
{

loc_00315CC9: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    eax = MEM32(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00315CD4
 * Original: 0x00315CD4 - 0x00315D36 (98 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00315CD4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315CD4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 8);
    eax = MEM32(edx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = 0x100;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315CFD; /* je: equal / zero */

loc_00315CEB: ;
    ecx = MEM32(eax + 8);
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 8) = ecx;
    edx = MEM32(edx);

loc_00315CF6: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + 4), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00315CF6; /* jne: not equal / not zero */

loc_00315CFB: ;
    goto loc_00315D31;

loc_00315CFD: ;
    edx = ecx;
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00315D31; /* je: equal / zero */

loc_00315D07: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315D31; /* je: equal / zero */

loc_00315D0C: ;
    ecx = ecx & 0xFFFFFF7Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = ecx;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(ebp + -8) = 0xFFFCF2C0u;
    { uint32_t _icall_target = MEM32(0x31C88C); PUSH32(esp, 0x00315D31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315D2Bu); } /* indirect call */
    }

loc_00315D31: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00315D36
 * Original: 0x00315D36 - 0x00315D6D (55 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315D36(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315D36: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0x314DC4;
    PUSH32(esp, edi);
    edi = eax;
    esi = 0x314DCC;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM8(edx) = 0;
    if (CMP_AE(_fa, _fb)) goto loc_00315D61; /* jae: above or equal (unsigned >=) */

loc_00315D4E: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315D5A; /* je: equal / zero */

loc_00315D54: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315D67; /* je: equal / zero */

loc_00315D58: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00315D5A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00315D4E; /* jb: below (unsigned <) */

loc_00315D61: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00315D63: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00315D67: ;
    MEM8(edx) = LO8(ebx);
    eax = MEM32(eax);
    goto loc_00315D63;

}

/**
 * sub_00315D6D
 * Original: 0x00315D6D - 0x00315D98 (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315D6D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315D6D: ;
    eax = 0x314DC4;
    PUSH32(esp, esi);
    edx = eax;
    esi = 0x314DCC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00315D90; /* jae: above or equal (unsigned >=) */

loc_00315D7E: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315D89; /* je: equal / zero */

loc_00315D84: ;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315D94; /* je: equal / zero */

loc_00315D89: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00315D7E; /* jb: below (unsigned <) */

loc_00315D90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00315D94: ;
    eax = MEM32(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00315D98
 * Original: 0x00315D98 - 0x00315DC0 (40 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315D98(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315D98: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x58);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 0xC) = 4;
    eax = MEM32(0x3449E0);
    MEM32(edx + 8) = eax;
    MEM32(0x3449E0) = edx;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00315DC0
 * Original: 0x00315DC0 - 0x00315E56 (150 bytes, 58 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315DC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = edi;
    PUSH32(esp, 0x00315DCEu); RECOMP_ABI_CALL(0x00318B2Cu, sub_00318B2C); /* call 0x00318B2C */

loc_00315DCE: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00315DDB; /* jb: below (unsigned <) */

loc_00315DD7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00315DDB: ;
    eax = ecx + eax * 2;
    ecx = MEM32(0x3479EC);
    PUSH32(esp, ebx);
    eax = eax + eax * 2;
    PUSH32(esp, 1);
    esi = ecx + eax * 4;
    PUSH32(esp, 2);
    ecx = edi;
    PUSH32(esp, 0x00315DF6u); RECOMP_ABI_CALL(0x00318AB6u, sub_00318AB6); /* call 0x00318AB6 */

loc_00315DF6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315E44; /* je: equal / zero */

loc_00315DFA: ;
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(esi + 5) = LO8(ecx);
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 0x40 (16-bit) */
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00315E46; /* jne: not equal / not zero */

loc_00315E09: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00315E12u); RECOMP_ABI_CALL(0x00318AB6u, sub_00318AB6); /* call 0x00318AB6 */

loc_00315E12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00315E44; /* je: equal / zero */

loc_00315E16: ;
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(esi + 6) = LO8(ecx);
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 0x40 (16-bit) */
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00315E46; /* jne: not equal / not zero */

loc_00315E25: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00315E2Bu); RECOMP_ABI_CALL(0x003189BBu, sub_003189BB); /* call 0x003189BB */

loc_00315E2B: ;
    ecx = edi;
    MEM32(esi) = edi;
    PUSH32(esp, 0x00315E34u); RECOMP_ABI_CALL(0x003189C8u, sub_003189C8); /* call 0x003189C8 */

loc_00315E34: ;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM8(esi + 4) = LO8(eax);
    PUSH32(esp, 0x00315E3Fu); RECOMP_ABI_CALL(0x003189CCu, sub_003189CC); /* call 0x003189CC */

loc_00315E3F: ;
    PUSH32(esp, ebx);
    ecx = edi;
    goto loc_00315E4B;

loc_00315E44: ;
    ecx = edi;

loc_00315E46: ;
    PUSH32(esp, 0x80000400u);

loc_00315E4B: ;
    PUSH32(esp, 0x00315E50u); RECOMP_ABI_CALL(0x0031826Au, sub_0031826A); /* call 0x0031826A */

loc_00315E50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00315E56
 * Original: 0x00315E56 - 0x00315F28 (210 bytes, 61 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315E56(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00315E56: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x40000 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    if (TEST_Z(_fa, _fb)) goto loc_00315E84; /* je: equal / zero */

loc_00315E69: ;
    edx = MEM32(esi + 0x24);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0x111) = 0x43;
    MEM32(esi + 0x120) = edx;
    eax = eax & 0xFFFBFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00315EB9;

loc_00315E84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x20000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315EA6; /* je: equal / zero */

loc_00315E8B: ;
    edx = MEM32(esi + 0x20);
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0x111) = 0x43;
    MEM32(esi + 0x120) = edx;
    eax = eax & 0xFFFDFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00315EB9;

loc_00315EA6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315EDF; /* je: equal / zero */

loc_00315EAD: ;
    MEM8(esi + 0x111) = 0xC3;
    eax = eax & 0xFFFEFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00315EB9: ;
    ecx = esi + 0x110;
    MEM8(ecx) = 0x1C;
    MEM32(esi + 0x118) = 0x315E56;
    MEM32(esi + 0x11C) = esi;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    PUSH32(esp, 0x00315EDDu); RECOMP_ABI_CALL(0x00318D6Cu, sub_00318D6C); /* call 0x00318D6C */

loc_00315EDD: ;
    goto loc_00315F23;

loc_00315EDF: ;
    eax = eax & 0xFFF7FFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_00315F07; /* je: equal / zero */

loc_00315EF1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esi + 0x12C;
    PUSH32(esp, eax);
    MEM32(edi + 8) = ebx;
    { uint32_t _icall_target = MEM32(0x31C794); PUSH32(esp, 0x00315F03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00315EFDu); } /* indirect call */
    }

loc_00315F03: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00315F07: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00315F22; /* je: equal / zero */

loc_00315F0D: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0x00315F14u); RECOMP_ABI_CALL(0x00317E9Eu, sub_00317E9E); /* call 0x00317E9E */

loc_00315F14: ;
    MEM32(edi) = ebx;
    eax = MEM32(esi + 0xC);
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;

loc_00315F22: ;
    POP32(esp, ebx);

loc_00315F23: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}
